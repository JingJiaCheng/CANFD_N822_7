/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2009.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**  its rights under all copyright laws to protect this work as a published
**  work, when appropriate.  Those having access to this work may not copy it,
**  use it, modify it or disclose the information contained in it without the
**  written authorization of Visteon Corporation.
**
** =========================================================================*/

/* ===========================================================================
**
**  Name: tp_lin.c
**
**  Description: TP Implementation for lin
**
**  Organization:   Multiplex Core Technology
**
** =========================================================================*/

/*******************************************************************************
================================================================================
 I N C L U D E   F I L E S
================================================================================
*******************************************************************************/
#include "fbl_lin_drv.h"
#include "tp_lin_cfg.h"
#include "tp_lin.h"

/*******************************************************************************
================================================================================
 I N C L U D E   F I L E   V E R S I O N   C H E C K
================================================================================
*******************************************************************************/
#if (VTP_LIN_HEADER_VERSION != 0x0100u)
   #error "THE SOURCE AND THE HEADER OF TRANSPORT LAYER DOES NOT MATCH"
#endif

#if (VTP_LIN_CFG_VERSION != 0x0100u)
   #error "THE SOURCE AND THE CONFIG OF TRANSPORT LAYER DOES NOT MATCH"
#endif

/*******************************************************************************/

/*******************************************************************************
================================================================================
 P R I V A T E   T Y P E   D E F I N I T I O N S
================================================================================
*******************************************************************************/

typedef struct
{
    VTP_LIN_UINT32   SeqNum            : 4;
    VTP_LIN_UINT32   Tx_inprogress     : 1;
    VTP_LIN_UINT32   Rx_inprogress     : 1;
    VTP_LIN_UINT32   SendMsg           : 1;
    VTP_LIN_UINT32   Wait4FC           : 1;
    VTP_LIN_UINT32   MsgRcvd           : 1;
    VTP_LIN_UINT32   Rx_Status         : 2;
    VTP_LIN_UINT32   Tx_Status         : 2;
    VTP_LIN_UINT32   FC_Status         : 2;

}VTP_LIN_StatusType;

/*******************************************************************************
================================================================================
 C O N F I G U R A T I O N S
================================================================================
*******************************************************************************/
#define VTP_LIN_SINGLEFRAME_LENGTH   0x07u

/*******************************************************************************
================================================================================
 L O C A L   V A R I A B L E S
================================================================================
*******************************************************************************/
/* static VTP_LIN_UINT8 which_timer */


static VTP_LIN_StatusType   VTP_LIN_status;
VTP_LIN_PDU                 VTP_LIN_TxMsg;
static VTP_LIN_PDU          VTP_LIN_RxMsg;
static VTP_LIN_UINT16       VTP_LIN_Timer;
static VTP_LIN_UINT8        VTP_LIN_BlockSize;
static VTP_LIN_UINT8        VTP_LIN_STmin;
static VTP_LIN_UINT8        VTP_LIN_STminCntr;
static VTP_LIN_UINT8        VTP_LIN_TxCFConfirm;
static VTP_LIN_UINT8        VTP_LIN_FCwaitCntr;
static VTP_LIN_UINT16       VTP_LIN_DataCntr;
static VTP_LIN_SDU          VTP_LIN_TxRx;
static VTP_LIN_SDU *        VTP_LIN_TxRxMsgptr;


#ifdef VTP_LIN_MASTER
static VTP_LIN_UINT16       VTP_LIN_HeaderRespTimer;

#define VTP_LIN_START_FC_HEADER_TX_TIMER        (VTP_LIN_HeaderRespTimer = VTP_LIN_FC_TRIGGER_TIME_INMSEC)
#define VTP_LIN_STOP_FC_HEADER_TX_TIMER         (VTP_LIN_HeaderRespTimer = (VTP_LIN_UINT16)0)
#define VTP_LIN_FC_HEADER_TX_TIMER_XPIRED       (VTP_LIN_HeaderRespTimer == (VTP_LIN_UINT16)0)

#endif

#define VTP_LIN_Tx_CF_Timecnt           (VTP_LIN_TX_CF_TIME_INMSEC/VTP_LIN_PERIODICITY)
#define VTP_LIN_Wait_FC_Timecnt         (VTP_LIN_WAIT_FC_TIME_INMSEC/VTP_LIN_PERIODICITY)
#define VTP_LIN_Wait_CF_Timecnt         (VTP_LIN_WAIT_CF_TIME_INMSEC/VTP_LIN_PERIODICITY)
#define VTP_LIN_Wait_TXConf_Timecnt     (VTP_LIN_TX_WAIT_CONF_TIME_INMSEC/VTP_LIN_PERIODICITY)

VTP_LIN_UINT32 destination_address;
VTP_LIN_UINT8 VTP_LIN_unusedbytedata[8] = { 0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u};
/*******************************************************************************
================================================================================
 L O C A L   M A C R O S
================================================================================
*******************************************************************************/
#define VTP_LIN_LASTMSG_SF     ((VTP_LIN_UINT8)0x00 == (VTP_LIN_TxMsg.Data[0] & (VTP_LIN_UINT8)0xF0))
#define VTP_LIN_LASTMSG_FF     ((VTP_LIN_UINT8)0x10 == (VTP_LIN_TxMsg.Data[0] & (VTP_LIN_UINT8)0xF0))
#define VTP_LIN_LASTMSG_CF     ((VTP_LIN_UINT8)0x20 == (VTP_LIN_TxMsg.Data[0] & (VTP_LIN_UINT8)0xF0))
#define VTP_LIN_LASTMSG_FC     ((VTP_LIN_UINT8)0x30 == (VTP_LIN_TxMsg.Data[0] & (VTP_LIN_UINT8)0xF0))

#define VTP_LIN_FCCTS          ((VTP_LIN_UINT8)0x30 == VTP_LIN_RxMsg.Data[0])
#define VTP_LIN_FCWAIT         ((VTP_LIN_UINT8)0x31 == VTP_LIN_RxMsg.Data[0])
#define VTP_LIN_FCOVERFLOW     ((VTP_LIN_UINT8)0x32 == VTP_LIN_RxMsg.Data[0])

#define VTP_LIN_MSGRCVD_SF     ((VTP_LIN_UINT8)0x00 == (VTP_LIN_RxMsg.Data[0] & (VTP_LIN_UINT8)0xF0))
#define VTP_LIN_MSGRCVD_FF     ((VTP_LIN_UINT8)0x10 == (VTP_LIN_RxMsg.Data[0] & (VTP_LIN_UINT8)0xF0))
#define VTP_LIN_MSGRCVD_CF     ((VTP_LIN_UINT8)0x20 == (VTP_LIN_RxMsg.Data[0] & (VTP_LIN_UINT8)0xF0))
#define VTP_LIN_MSGRCVD_FC     ((VTP_LIN_UINT8)0x30 == (VTP_LIN_RxMsg.Data[0] & (VTP_LIN_UINT8)0xF0))

#define VTP_LIN_TX_IN_PROGRESS       (VTP_LIN_status.Tx_inprogress  != (VTP_LIN_UINT8)0)
#define VTP_LIN_SET_TXINPROGRESS     (VTP_LIN_status.Tx_inprogress   = (VTP_LIN_UINT8)1)
#define VTP_LIN_CLEAR_TXINPROGRESS   (VTP_LIN_status.Tx_inprogress   = (VTP_LIN_UINT8)0)

#define VTP_LIN_RX_IN_PROGRESS       (VTP_LIN_status.Rx_inprogress  != (VTP_LIN_UINT8)0)
#define VTP_LIN_SET_RXINPROGRESS     (VTP_LIN_status.Rx_inprogress   = (VTP_LIN_UINT8)1)
#define VTP_LIN_CLEAR_RXINPROGRESS   (VTP_LIN_status.Rx_inprogress   = (VTP_LIN_UINT8)0)

#define VTP_LIN_SENDMSG              (VTP_LIN_status.SendMsg        != (VTP_LIN_UINT8)0)
#define VTP_LIN_SET_SENDMSG          (VTP_LIN_status.SendMsg         = (VTP_LIN_UINT8)1)
#define VTP_LIN_CLEAR_SENDMSG        (VTP_LIN_status.SendMsg         = (VTP_LIN_UINT8)0)

#define VTP_LIN_MSGRCVD              (VTP_LIN_status.MsgRcvd        != (VTP_LIN_UINT8)0)
#define VTP_LIN_SET_MSGRCVD          (VTP_LIN_status.MsgRcvd         = (VTP_LIN_UINT8)1)
#define VTP_LIN_CLEAR_MSGRCVD        (VTP_LIN_status.MsgRcvd         = (VTP_LIN_UINT8)0)

#define VTP_LIN_INC_SEQNUM           (VTP_LIN_status.SeqNum++)
#define VTP_LIN_INIT_SEQNUM          (VTP_LIN_status.SeqNum          = (VTP_LIN_UINT8)1)
#define VTP_LIN_CLEAR_SEQNUM         (VTP_LIN_status.SeqNum          = (VTP_LIN_UINT8)0)

#define VTP_LIN_SET_FC_CTS           (VTP_LIN_status.FC_Status = (VTP_LIN_UINT8)0)
#define VTP_LIN_SET_FC_WAIT          (VTP_LIN_status.FC_Status = (VTP_LIN_UINT8)1)
#define VTP_LIN_SET_FC_OF            (VTP_LIN_status.FC_Status = (VTP_LIN_UINT8)2)
#define VTP_LIN_FC_CTS               (VTP_LIN_status.FC_Status == (VTP_LIN_UINT8)0)
#define VTP_LIN_FC_WAIT              (VTP_LIN_status.FC_Status == (VTP_LIN_UINT8)1)
#define VTP_LIN_FC_OVERFLOW          (VTP_LIN_status.FC_Status == (VTP_LIN_UINT8)2)
#define VTP_LIN_FC_STATUS            (VTP_LIN_status.FC_Status)

#define VTP_LIN_SET_RX_COMPLETE      (VTP_LIN_status.Rx_Status  = 1u)
#define VTP_LIN_SET_RX_ERROR         (VTP_LIN_status.Rx_Status  = 2u)
#define VTP_LIN_CLEAR_RX_COMPLETE    (VTP_LIN_status.Rx_Status  = 0u)
#define VTP_LIN_CLEAR_RX_ERROR       (VTP_LIN_status.Rx_Status  = 0u)
#define VTP_LIN_RX_STATUS_COMPLETE   (VTP_LIN_status.Rx_Status  == 1u)
#define VTP_LIN_RX_STATUS_ERROR      (VTP_LIN_status.Rx_Status  == 2u)

#define VTP_LIN_SET_TX_COMPLETE      (VTP_LIN_status.Tx_Status  = 1u)
#define VTP_LIN_SET_TX_ERROR         (VTP_LIN_status.Tx_Status  = 2u)
#define VTP_LIN_CLEAR_TX_COMPLETE    (VTP_LIN_status.Tx_Status  = 0u)
#define VTP_LIN_CLEAR_TX_ERROR       (VTP_LIN_status.Tx_Status  = 0u)
#define VTP_LIN_TX_STATUS_COMPLETE   (VTP_LIN_status.Tx_Status  == 1u)
#define VTP_LIN_TX_STATUS_ERROR      (VTP_LIN_status.Tx_Status  == 2u)

#define VTP_LIN_WAIT4FC              (VTP_LIN_status.Wait4FC        != (VTP_LIN_UINT8)0)
#define VTP_LIN_SET_WAIT4FC          (VTP_LIN_status.Wait4FC         = (VTP_LIN_UINT8)1)
#define VTP_LIN_CLEAR_WAIT4FC        (VTP_LIN_status.Wait4FC         = (VTP_LIN_UINT8)0)

#define VTP_LIN_START_TX_CF_TIMER      (VTP_LIN_Timer = VTP_LIN_Tx_CF_Timecnt)
#define VTP_LIN_START_RX_FC_TIMER      (VTP_LIN_Timer = VTP_LIN_Wait_FC_Timecnt)
#define VTP_LIN_START_RX_CF_TIMER      (VTP_LIN_Timer = VTP_LIN_Wait_CF_Timecnt)
#define VTP_LIN_START_TX_CONF_TIMER    (VTP_LIN_Timer = VTP_LIN_Wait_TXConf_Timecnt)

#define VTP_LIN_STOP_TIMER          (VTP_LIN_Timer = (VTP_LIN_UINT16)0)
#define VTP_LIN_TIMER_XPIRED        (VTP_LIN_Timer  == (VTP_LIN_UINT16)0)

/*******************************************************************************
================================================================================
 L O C A L   F U N C T I O N S   P R O T O T Y P E S
================================================================================
*******************************************************************************/
static void VTP_LIN_memcpy(const VTP_LIN_UINT8 *src,VTP_LIN_UINT8 *dst,VTP_LIN_UINT8 size);
static void VTP_LIN_Wait4FC(void);
static void VTP_LIN_TransmitCF(void);
static void VTP_LIN_Receive(void);
static void VTP_LIN_SendFC(void);
static void VTP_LIN_TransmitCFafterFC(void);
/*******************************************************************************
================================================================================
 P U B L I C   F U N C T I O N S
================================================================================
*******************************************************************************/

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_Init
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_LIN_Init(void)
{
   VTP_LIN_Timer      = 0u;
   VTP_LIN_BlockSize  = 0u;
   VTP_LIN_STmin      = 0u;
   VTP_LIN_CLEAR_TXINPROGRESS;
   VTP_LIN_CLEAR_RXINPROGRESS;
   VTP_LIN_CLEAR_SENDMSG;
   VTP_LIN_CLEAR_MSGRCVD;
   VTP_LIN_TxRxMsgptr = &VTP_LIN_TxRx;
   VTP_LIN_TxCFConfirm = 0u;
   VTP_LIN_CLEAR_WAIT4FC;

}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_PeriodicTask
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_LIN_PeriodicTask(void)
{
    VTP_LIN_UINT8 ret;

    if((VTP_LIN_UINT8)0 != VTP_LIN_Timer)
    {
        VTP_LIN_Timer--;
    }
    else
    {}

    #ifdef VTP_LIN_MASTER
    if((VTP_LIN_UINT8)0 != VTP_LIN_HeaderRespTimer)
    {
        VTP_LIN_HeaderRespTimer--;
        if (VTP_LIN_HeaderRespTimer == 0)
        {
            (void)VTP_LIN_Call_DllHeaderTransmit();
            VTP_LIN_START_FC_HEADER_TX_TIMER;
        }
    }
    else
    {
        
    }
    #endif
        

    if(VTP_LIN_TX_IN_PROGRESS)
    {
        if(VTP_LIN_TIMER_XPIRED)
        {
            VTP_LIN_ApplCB_TxConfirm((VTP_LIN_UINT8) VTP_LIN_NOTOK);
            VTP_LIN_CLEAR_TXINPROGRESS;
            VTP_LIN_CLEAR_SENDMSG;
            VTP_LIN_CLEAR_MSGRCVD;
            VTP_LIN_CLEAR_WAIT4FC;
        }
        else
        {
            if(VTP_LIN_LASTMSG_FF || VTP_LIN_LASTMSG_CF)
            {
                if(VTP_LIN_WAIT4FC)
                {
                    VTP_LIN_Wait4FC();
                }
                else
                {
                    VTP_LIN_TransmitCF();
                }
            }
        }

    }
    else if(VTP_LIN_RX_STATUS_COMPLETE)
    {
        VTP_LIN_CLEAR_RX_COMPLETE;
        #ifdef VTP_LIN_MASTER
        VTP_LIN_STOP_FC_HEADER_TX_TIMER;
        #endif
        VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_OK);
    }
    else if(VTP_LIN_RX_IN_PROGRESS)
    {
        if(VTP_LIN_TIMER_XPIRED)
        {
            VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_NOTOK);
            VTP_LIN_CLEAR_RXINPROGRESS;
            VTP_LIN_CLEAR_SENDMSG;
            VTP_LIN_CLEAR_MSGRCVD;
        }
        else
        {}
    }
    else
    {}

    if(VTP_LIN_SENDMSG)
    {
        ret = VTP_LIN_Call_DllTransmit();
        if((VTP_LIN_UINT8) VTP_LIN_OK == ret)
        {
            VTP_LIN_CLEAR_SENDMSG;
        }
        else
        {}
    }
    else
    {}

}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_RxIndication
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_LIN_RxIndication(const VTP_LIN_PDU * Msgptr)
{
    VTP_LIN_RxMsg.MsgID = Msgptr->MsgID;
    VTP_LIN_RxMsg.Size  = Msgptr->Size;
    VTP_LIN_memcpy(&(Msgptr->Data[0]),&(VTP_LIN_RxMsg.Data[0]),VTP_LIN_RxMsg.Size);
    VTP_LIN_SET_MSGRCVD;
    VTP_LIN_Receive();
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_Receive
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

static void VTP_LIN_Receive(void)
{
    VTP_LIN_UINT8 ret;
    VTP_LIN_UINT8 SF_DataLength;

    if(VTP_LIN_MSGRCVD_SF)
    {
        if(VTP_LIN_RX_IN_PROGRESS)
        {
            VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_NOTOK);
            VTP_LIN_CLEAR_RXINPROGRESS;
        }
        else
        {
            
        }
    
        SF_DataLength = VTP_LIN_RxMsg.Data[0] & 0x0Fu;

        if(VTP_LIN_RxMsg.Size > SF_DataLength)
        {
            ret = VTP_LIN_ApplCB_RxStart(VTP_LIN_RxMsg.MsgID,VTP_LIN_RxMsg.Data[0]);

            if ( ret == (VTP_LIN_UINT8) VTP_LIN_OK)
            {
                VTP_LIN_ApplCB_RxInProg(&VTP_LIN_RxMsg.Data[1],VTP_LIN_RxMsg.Data[0]);
                VTP_LIN_SET_RX_COMPLETE;

            }
            else
            {
                VTP_LIN_CLEAR_RXINPROGRESS;
                /*VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_NOTOK)*/
            }

        }
        else
        {
            
        }

    }
    else if(VTP_LIN_MSGRCVD_FF)
    {
        if(VTP_LIN_RX_IN_PROGRESS)
        {
            VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_NOTOK);
            VTP_LIN_CLEAR_RXINPROGRESS;
        }
        else
        {
        }


         if( (VTP_LIN_RxMsg.MsgID & VTP_LIN_DIAG_PHY_ID_MASK) == (VTP_LIN_UINT32)VTP_LIN_DIAG_PHY_PF )
         {
            VTP_LIN_DataCntr = (VTP_LIN_UINT16)(VTP_LIN_RxMsg.Data[0] & 0x0Fu);
            VTP_LIN_DataCntr <<= 8u;
            VTP_LIN_DataCntr += (VTP_LIN_UINT16)VTP_LIN_RxMsg.Data[1];

            if((VTP_LIN_DataCntr >= 8u) && (VTP_LIN_RxMsg.Size == 8u))
            {
                ret = VTP_LIN_ApplCB_RxStart(VTP_LIN_RxMsg.MsgID,VTP_LIN_DataCntr);
                if ( ret == (VTP_LIN_UINT8) VTP_LIN_OK)
                {
                    VTP_LIN_SET_FC_CTS;
                    VTP_LIN_ApplCB_RxInProg(&VTP_LIN_RxMsg.Data[2],(VTP_LIN_UINT8)6);
                    VTP_LIN_BlockSize = (VTP_LIN_UINT8)1;
                    VTP_LIN_SendFC();
                    VTP_LIN_DataCntr -= (VTP_LIN_UINT16)6;
                    VTP_LIN_status.SeqNum = (VTP_LIN_UINT8)0;
                    VTP_LIN_SET_RXINPROGRESS;
                }
                else
                {
                    if(VTP_LIN_FC_OVERFLOW)
                    {
                        VTP_LIN_BlockSize = (VTP_LIN_UINT8)1;
                        VTP_LIN_SET_FC_OF;
                        VTP_LIN_SendFC();
                    }
                    VTP_LIN_CLEAR_RXINPROGRESS;
                }
            }
            else
            {

            }
        }
        else
        {

        }

    }
    else if(VTP_LIN_MSGRCVD_CF)
    {

        if(VTP_LIN_RX_IN_PROGRESS)
        {
           if((VTP_LIN_RxMsg.MsgID & VTP_LIN_DIAG_PHY_ID_MASK) == (VTP_LIN_UINT32)VTP_LIN_DIAG_PHY_PF)
           {
                VTP_LIN_INC_SEQNUM;
                if((VTP_LIN_UINT8)7 >= VTP_LIN_DataCntr)
                {

                    if(VTP_LIN_status.SeqNum == (VTP_LIN_UINT16)(VTP_LIN_RxMsg.Data[0] & (VTP_LIN_UINT8)0x0F))
                    {
                        VTP_LIN_ApplCB_RxInProg(&VTP_LIN_RxMsg.Data[1],(VTP_LIN_UINT8)VTP_LIN_DataCntr);
                        VTP_LIN_DataCntr = (VTP_LIN_UINT16)0;
                        VTP_LIN_CLEAR_RXINPROGRESS;
                        VTP_LIN_SET_RX_COMPLETE;
                    }
                    else
                    {
                       VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_NOTOK);
                       VTP_LIN_CLEAR_RXINPROGRESS;
                    }
                }
                else
                {
                
                    if(((VTP_LIN_UINT8)8 == VTP_LIN_RxMsg.Size) && ((VTP_LIN_UINT8)7 < VTP_LIN_DataCntr) )
                    {
                      if(VTP_LIN_status.SeqNum == (VTP_LIN_RxMsg.Data[0] & (VTP_LIN_UINT8)0x0F))
                      {
                          VTP_LIN_ApplCB_RxInProg(&VTP_LIN_RxMsg.Data[1],(VTP_LIN_UINT8)7);
                          VTP_LIN_SET_FC_CTS;
                          VTP_LIN_SendFC();
                          VTP_LIN_DataCntr -= (VTP_LIN_UINT16)7;
                      }
                      else
                      {
                          VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_NOTOK);
                          VTP_LIN_CLEAR_RXINPROGRESS;
                      }
                    }
                    else
                    {
                       VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_NOTOK);
                       VTP_LIN_CLEAR_RXINPROGRESS;
                    }
                }
            }
            else
            {
               VTP_LIN_ApplCB_RxIndication((VTP_LIN_UINT8) VTP_LIN_NOTOK);
               VTP_LIN_CLEAR_RXINPROGRESS;
            }
        }
        else
        {
        }
    }
    else if( (VTP_LIN_WAIT4FC) && (VTP_LIN_MSGRCVD_FC) )
    {
        if(VTP_LIN_RxMsg.Size >= 3u)
        {
            VTP_LIN_Wait4FC();
        }
    }
    else
    {

    }
    VTP_LIN_CLEAR_MSGRCVD;

}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_memcpy
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VTP_LIN_memcpy(const VTP_LIN_UINT8 *src,VTP_LIN_UINT8 *dst,VTP_LIN_UINT8 size)
{
    for(;size > 0u;size--)
    {
        *dst = *src;
        dst++;
        src++;
    }
}
/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_SetFC_Overflow
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

void VTP_LIN_SetFC_Overflow(void)
{
    VTP_LIN_SET_FC_OF;
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_Transmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

VTP_LIN_UINT8 VTP_LIN_Transmit(VTP_LIN_UINT8 * Msgptr, VTP_LIN_UINT16 length)
{
    VTP_LIN_UINT8 retStatus;
    VTP_LIN_UINT8 VTP_byte_loc;

    retStatus = (VTP_LIN_UINT8) VTP_LIN_NOTOK;

    if((!VTP_LIN_TX_IN_PROGRESS) && (!VTP_LIN_RX_IN_PROGRESS) && (length != (VTP_LIN_UINT16)0))
    {
        VTP_LIN_TxRxMsgptr->Data    =  Msgptr;
        VTP_LIN_TxRxMsgptr->DataLength = length;
        //XXX: KSHANMU4 FIXME
        //VTP_LIN_TxMsg.MsgID   =  (VTP_LIN_RESPONSE_ID | (destination_address << 8))
        VTP_LIN_TxMsg.MsgID   =  (VTP_LIN_RESPONSE_ID);
        VTP_LIN_TxMsg.Size    =  (VTP_LIN_UINT8)8;

        if((VTP_LIN_UINT16)VTP_LIN_SINGLEFRAME_LENGTH >= VTP_LIN_TxRxMsgptr->DataLength)
        {
            VTP_LIN_TxMsg.Data[0] =  (VTP_LIN_UINT8)VTP_LIN_TxRxMsgptr->DataLength;
            VTP_LIN_memcpy(VTP_LIN_TxRxMsgptr->Data,&(VTP_LIN_TxMsg.Data[1]),(VTP_LIN_UINT8)VTP_LIN_TxRxMsgptr->DataLength);
            if((VTP_LIN_UINT16)VTP_LIN_SINGLEFRAME_LENGTH > VTP_LIN_TxRxMsgptr->DataLength )
            {
                VTP_LIN_TxRxMsgptr->DataLength = (VTP_LIN_SINGLEFRAME_LENGTH - VTP_LIN_TxRxMsgptr->DataLength);
                VTP_byte_loc = (VTP_LIN_UINT8)(VTP_LIN_SINGLEFRAME_LENGTH - VTP_LIN_TxRxMsgptr->DataLength + 1u);
                VTP_LIN_memcpy(&VTP_LIN_unusedbytedata[0], &(VTP_LIN_TxMsg.Data[VTP_byte_loc]) , (VTP_LIN_UINT8)VTP_LIN_TxRxMsgptr->DataLength);
            }

            VTP_LIN_TxRxMsgptr->DataLength = (VTP_LIN_UINT16)0;
            VTP_LIN_DataCntr      =  (VTP_LIN_UINT8)0;
        }
        else
        {
            VTP_LIN_memcpy(&(VTP_LIN_TxRxMsgptr->Data[0]),&(VTP_LIN_TxMsg.Data[2]),(VTP_LIN_UINT8)6);
            VTP_LIN_TxMsg.Data[0]    =  ((VTP_LIN_UINT8)0x10 + (VTP_LIN_UINT8)(VTP_LIN_TxRxMsgptr->DataLength >> 8u));
            VTP_LIN_TxMsg.Data[1]    =  (VTP_LIN_UINT8) (VTP_LIN_TxRxMsgptr->DataLength);
            VTP_LIN_TxRxMsgptr->DataLength   -= (VTP_LIN_UINT16)6;
            VTP_LIN_DataCntr         = (VTP_LIN_UINT16)6;
            VTP_LIN_INIT_SEQNUM;
            VTP_LIN_SET_WAIT4FC;
        }

        VTP_LIN_SET_TXINPROGRESS;

        retStatus = VTP_LIN_Call_DllTransmit();
        if((VTP_LIN_UINT8) VTP_LIN_OK == retStatus)
        {
            VTP_LIN_CLEAR_SENDMSG;

        }
        else
        {}
        VTP_LIN_START_TX_CONF_TIMER;
        /*which_timer = 0x44*/
    }
    else
    {
        
    }
    return(retStatus);
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_TxConfirm
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

void VTP_LIN_TxConfirm(void)
{
    if(VTP_LIN_LASTMSG_SF)
    {
        VTP_LIN_CLEAR_TXINPROGRESS;
        VTP_LIN_SET_TX_COMPLETE;
        VTP_LIN_STOP_TIMER;
    }
    else if(VTP_LIN_LASTMSG_FF)
    {
        VTP_LIN_START_RX_FC_TIMER;
        #ifdef VTP_LIN_MASTER
        /*start header transmission for flow control reception*/
        VTP_LIN_START_FC_HEADER_TX_TIMER;
        /*which_timer = 0x22*/
        #endif
    }
    else if(VTP_LIN_LASTMSG_CF)
    {
        VTP_LIN_TxCFConfirm = 1u;
    
        if(VTP_LIN_WAIT4FC)
        {
            VTP_LIN_START_RX_FC_TIMER;
            /*which_timer = 0x33*/
        }
        else
        {
             VTP_LIN_STminCntr = (VTP_LIN_STmin / (VTP_LIN_UINT8)VTP_LIN_PERIODICITY) + 2u;
            /* VTP_LIN_STOP_TIMER*/
             VTP_LIN_START_TX_CF_TIMER;
             /*which_timer = 0x11*/
        }
    }
    else if(VTP_LIN_LASTMSG_FC)
    {
        VTP_LIN_START_RX_CF_TIMER;
        #ifdef VTP_LIN_MASTER
         /*start header transmission for consecutive frame reception*/
        VTP_LIN_START_FC_HEADER_TX_TIMER;
        #endif
    }
    else
    {
    }
    if(VTP_LIN_TX_STATUS_COMPLETE)
    {
        VTP_LIN_CLEAR_TX_COMPLETE;
        VTP_LIN_ApplCB_TxConfirm((VTP_LIN_UINT8) VTP_LIN_OK);
    }
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_Wait4FC
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VTP_LIN_Wait4FC(void)
{

    if(VTP_LIN_WAIT4FC && VTP_LIN_MSGRCVD)
    {
        #ifdef VTP_LIN_MASTER
        VTP_LIN_STOP_FC_HEADER_TX_TIMER;
        #endif
        
        if(VTP_LIN_FCCTS)
        {
            VTP_LIN_CLEAR_WAIT4FC;
            VTP_LIN_FCwaitCntr = 0u;
            VTP_LIN_BlockSize = VTP_LIN_RxMsg.Data[1];
            VTP_LIN_STmin     = VTP_LIN_RxMsg.Data[2];
        /**************************************************************************************
        00 – 7F SeparationTime (STmin) range: 0 ms – 127 ms
        The units of STmin in the range 00 hex – 7F hex are absolute milliseconds (ms).
        80 – F0 Reserved
        This range of values is reserved by this part of ISO 15765.
        F1 – F9 SeparationTime (STmin) range: 100 μs – 900 μs
        The units of STmin in the range F1 hex – F9 hex are even 100 microseconds (μs), where parameter
        value F1 hex represents 100 μs and parameter value F9 hex represents 900 μs.
        FA – FF Reserved
        This range of values is reserved by this part of ISO 15765.
        **************************************************************************************/
            
            if(VTP_LIN_STmin > 0x7Fu)
            {
                VTP_LIN_STmin = 0x7Fu;
            }
            else
            {
                
            }
            
            VTP_LIN_STminCntr = 0u;

            VTP_LIN_TransmitCFafterFC();            
        }
        else if(VTP_LIN_FCWAIT)
        {
            VTP_LIN_FCwaitCntr++;
            if(VTP_LIN_MAX_WAIT_CNT >= VTP_LIN_FCwaitCntr)
            {
                VTP_LIN_START_RX_FC_TIMER;
            }
            else
            {
                VTP_LIN_FCwaitCntr = 0u;
                VTP_LIN_ApplCB_TxConfirm((VTP_LIN_UINT8) VTP_LIN_NOTOK);
                VTP_LIN_CLEAR_TXINPROGRESS;
            }
        }
        else if(VTP_LIN_FCOVERFLOW)
        {
                VTP_LIN_ApplCB_TxConfirm((VTP_LIN_UINT8) VTP_LIN_NOTOK);
                VTP_LIN_CLEAR_TXINPROGRESS;
                VTP_LIN_CLEAR_WAIT4FC;
        }
        else
        {
            if(VTP_LIN_TIMER_XPIRED)
            {
                VTP_LIN_ApplCB_TxConfirm((VTP_LIN_UINT8) VTP_LIN_NOTOK);
                VTP_LIN_CLEAR_TXINPROGRESS;
                VTP_LIN_CLEAR_WAIT4FC;
            }
            else
            {}
        }
        VTP_LIN_CLEAR_MSGRCVD;
    }
    else
    {
        if(VTP_LIN_TIMER_XPIRED)
        {
            VTP_LIN_ApplCB_TxConfirm((VTP_LIN_UINT8) VTP_LIN_NOTOK);
            VTP_LIN_CLEAR_TXINPROGRESS;
            VTP_LIN_CLEAR_WAIT4FC;
            VTP_LIN_CLEAR_MSGRCVD;
        }
        else
        {}
    }

}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_TransmitCF
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VTP_LIN_TransmitCF(void)
{

    if((VTP_LIN_UINT8)0 != VTP_LIN_STminCntr)
    {
        VTP_LIN_STminCntr--;
    }
    else
    {}

    if(((VTP_LIN_UINT8)0 == VTP_LIN_STminCntr) && ((VTP_LIN_UINT8)1 == VTP_LIN_TxCFConfirm))
    {
        VTP_LIN_TransmitCFafterFC();
    }
    else
    {
    }

}
/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_TransmitCFafterFC
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VTP_LIN_TransmitCFafterFC(void)
{

    VTP_LIN_UINT8 VTP_byte_loc;
    VTP_LIN_UINT8 retStatus;
    VTP_LIN_TxMsg.Data[0] =  (VTP_LIN_UINT8)((VTP_LIN_UINT8)0x20 + VTP_LIN_status.SeqNum);
 
    if((VTP_LIN_UINT8)7 >= VTP_LIN_TxRxMsgptr->DataLength)
    {
        VTP_LIN_TxMsg.Size    =  (VTP_LIN_UINT8)8;
        VTP_LIN_memcpy(&(VTP_LIN_TxRxMsgptr->Data[VTP_LIN_DataCntr]),&(VTP_LIN_TxMsg.Data[1]),(VTP_LIN_UINT8)VTP_LIN_TxRxMsgptr->DataLength);
        if((VTP_LIN_UINT8)7 > VTP_LIN_TxRxMsgptr->DataLength )
        {
            VTP_LIN_TxRxMsgptr->DataLength = (VTP_LIN_SINGLEFRAME_LENGTH - VTP_LIN_TxRxMsgptr->DataLength);
            VTP_byte_loc = (VTP_LIN_UINT8)(VTP_LIN_SINGLEFRAME_LENGTH - VTP_LIN_TxRxMsgptr->DataLength + 1u);
            VTP_LIN_memcpy(&VTP_LIN_unusedbytedata[0], &(VTP_LIN_TxMsg.Data[VTP_byte_loc]) , (VTP_LIN_UINT8)VTP_LIN_TxRxMsgptr->DataLength);
        }

        VTP_LIN_TxRxMsgptr->DataLength = (VTP_LIN_UINT16)0;
        VTP_LIN_CLEAR_TXINPROGRESS;
        VTP_LIN_CLEAR_MSGRCVD;
        VTP_LIN_SET_TX_COMPLETE;
    }
    else
    {
        VTP_LIN_TxMsg.Size    =  (VTP_LIN_UINT8)8;
        VTP_LIN_memcpy(&(VTP_LIN_TxRxMsgptr->Data[VTP_LIN_DataCntr]),&(VTP_LIN_TxMsg.Data[1]),(VTP_LIN_UINT8)7);
        VTP_LIN_TxRxMsgptr->DataLength   -= (VTP_LIN_UINT16)7;
        VTP_LIN_DataCntr         += (VTP_LIN_UINT16)7;
        VTP_LIN_INC_SEQNUM;
    }
        /*retStatus  = (VTP_LIN_UINT8) VTP_LIN_OK*/
        VTP_LIN_TxCFConfirm = 0u;
        retStatus = VTP_LIN_Call_DllTransmit();
        if((VTP_LIN_UINT8) VTP_LIN_OK == retStatus)
        {
            VTP_LIN_CLEAR_SENDMSG;

        }
        else
        {
        
        }
        VTP_LIN_START_TX_CONF_TIMER;
        /*which_timer = 0x55*/


    if(((VTP_LIN_UINT8)0 != VTP_LIN_BlockSize) &&(VTP_LIN_TX_IN_PROGRESS))
    {
        VTP_LIN_BlockSize--;
        if((VTP_LIN_UINT8)0 == VTP_LIN_BlockSize)
        {
            VTP_LIN_SET_WAIT4FC;
        }
        else
        {}
    }
    else
    {}


}
/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_SendFC
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VTP_LIN_SendFC(void)
{
    VTP_LIN_UINT8 ret;

    if((VTP_LIN_UINT8)0 != VTP_LIN_BlockSize)
    {
        VTP_LIN_BlockSize--;
        if((VTP_LIN_UINT8)0 == VTP_LIN_BlockSize)
        {
            //XXX: KSHANMU4 FIXME
            //VTP_LIN_TxMsg.MsgID    = (VTP_LIN_RESPONSE_ID | (destination_address << 8))
            VTP_LIN_TxMsg.MsgID    = (VTP_LIN_RESPONSE_ID);
            VTP_LIN_TxMsg.Size     = (VTP_LIN_UINT8)0x08;
            VTP_LIN_TxMsg.Data[0]  = (VTP_LIN_UINT8)0x30 | ((VTP_LIN_UINT8)VTP_LIN_FC_STATUS);
            VTP_LIN_TxMsg.Data[1]  = VTP_LIN_BLOCKSIZE;
            VTP_LIN_TxMsg.Data[2]  = (VTP_LIN_UINT8)VTP_LIN_STMIN;
            VTP_LIN_BlockSize      = VTP_LIN_BLOCKSIZE;
                        
            VTP_LIN_memcpy(&VTP_LIN_unusedbytedata[0], &(VTP_LIN_TxMsg.Data[3]) , (VTP_LIN_UINT8)5);
           
                ret = VTP_LIN_Call_DllTransmit();
                if((VTP_LIN_UINT8) VTP_LIN_OK == ret)
                {
                    VTP_LIN_CLEAR_SENDMSG;
                }
                else
                {}
                VTP_LIN_START_TX_CONF_TIMER;
                /*which_timer = 0x66*/
        }
        else
        {}
    }
    else
    {
        VTP_LIN_START_RX_CF_TIMER;
    }
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_Rx_GetStatus
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  VTP_LIN_UINT8
*******************************************************************************/
VTP_LIN_UINT8 VTP_LIN_Rx_GetStatus(void)
{
return((VTP_LIN_UINT8)VTP_LIN_status.Rx_Status);
}
/*******************************************************************************
================================================================================
DATE           AUTHOR      VERSION  DESCRIPTION
================================================================================
19/Nov/2013     gmuthu        1      Initial Release.

*******************************************************************************
================================================================================*/
/****************************************************************************
Date              : 24/10/2014
By                : sradhak2
Traceability      : 217890 
Change Description: Change done for compiler warning
*****************************************************************************/
