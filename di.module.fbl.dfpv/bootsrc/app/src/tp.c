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
**  Name: tp.c
**
**  Description: TP Implementation
**
**  Organization:   Multiplex Core Technology
**
** =========================================================================*/

/*******************************************************************************
================================================================================
 I N C L U D E   F I L E S
================================================================================
*******************************************************************************/
#include "tp_cfg.h"
#include "tp.h"
#include "fbl_drv.h"

/*******************************************************************************
================================================================================
 I N C L U D E   F I L E   V E R S I O N   C H E C K
================================================================================
*******************************************************************************/
#if (VTP_HEADER_VERSION != 0x0100u)
   #error "THE SOURCE AND THE HEADER OF TRANSPORT LAYER DOES NOT MATCH"
#endif

#if (VTP_CFG_VERSION != 0x0100u)
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
    VTP_UINT32   SeqNum            : 4;
    VTP_UINT32   Tx_inprogress     : 1;
    VTP_UINT32   Rx_inprogress     : 1;
    VTP_UINT32   SendMsg           : 1;
    VTP_UINT32   Wait4FC           : 1;
    VTP_UINT32   MsgRcvd           : 1;
    VTP_UINT32   Rx_Status         : 2;
    VTP_UINT32   Tx_Status         : 2;
    VTP_UINT32   FC_Status         : 2;

}VTP_StatusType;

/*******************************************************************************
================================================================================
 C O N F I G U R A T I O N S
================================================================================
*******************************************************************************/
#define VTP_SINGLEFRAME_LENGTH   0x07u

/*******************************************************************************
================================================================================
 L O C A L   V A R I A B L E S
================================================================================
*******************************************************************************/
/* static VTP_UINT8 which_timer */


static VTP_StatusType   VTP_status;
VTP_PDU                 VTP_TxMsg;
static VTP_PDU          VTP_RxMsg;
static VTP_UINT16       VTP_Timer;
static VTP_UINT8        VTP_BlockSize;
static VTP_UINT8        VTP_STmin;
static VTP_UINT8        VTP_STminCntr;
static VTP_UINT8        VTP_TxCFConfirm;
static VTP_UINT8        VTP_FCwaitCntr;
static VTP_UINT16       VTP_DataCntr;
static VTP_SDU          VTP_TxRx;
static VTP_SDU *        VTP_TxRxMsgptr;


#define VTP_Tx_CF_Timecnt           (VTP_TX_CF_TIME_INMSEC/VTP_PERIODICITY)
#define VTP_Wait_FC_Timecnt         (VTP_WAIT_FC_TIME_INMSEC/VTP_PERIODICITY)
#define VTP_Wait_CF_Timecnt         (VTP_WAIT_CF_TIME_INMSEC/VTP_PERIODICITY)
#define VTP_Wait_TXConf_Timecnt     (VTP_TX_WAIT_CONF_TIME_INMSEC/VTP_PERIODICITY)
VTP_UINT32 destination_address;
#ifdef UNUSED_TP_PADDING_BYTE
VTP_UINT8 VTP_unusedbytedata[8] = { 0xFFu,0xFFu,0xFFu,0xFFu,0xFFu,0xFFu,0xFFu,0xFFu}; 
#else
VTP_UINT8 VTP_unusedbytedata[8] = { 0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u};
#endif

/*******************************************************************************
================================================================================
 L O C A L   M A C R O S
================================================================================
*******************************************************************************/
#define VTP_LASTMSG_SF     ((VTP_UINT8)0x00 == (VTP_TxMsg.Data[0] & (VTP_UINT8)0xF0))
#define VTP_LASTMSG_FF     ((VTP_UINT8)0x10 == (VTP_TxMsg.Data[0] & (VTP_UINT8)0xF0))
#define VTP_LASTMSG_CF     ((VTP_UINT8)0x20 == (VTP_TxMsg.Data[0] & (VTP_UINT8)0xF0))
#define VTP_LASTMSG_FC     ((VTP_UINT8)0x30 == (VTP_TxMsg.Data[0] & (VTP_UINT8)0xF0))

#define VTP_FCCTS          ((VTP_UINT8)0x30 == VTP_RxMsg.Data[0])
#define VTP_FCWAIT         ((VTP_UINT8)0x31 == VTP_RxMsg.Data[0])
#define VTP_FCOVERFLOW     ((VTP_UINT8)0x32 == VTP_RxMsg.Data[0])

#define VTP_MSGRCVD_SF     ((VTP_UINT8)0x00 == (VTP_RxMsg.Data[0] & (VTP_UINT8)0xF0))
#define VTP_MSGRCVD_FF     ((VTP_UINT8)0x10 == (VTP_RxMsg.Data[0] & (VTP_UINT8)0xF0))
#define VTP_MSGRCVD_CF     ((VTP_UINT8)0x20 == (VTP_RxMsg.Data[0] & (VTP_UINT8)0xF0))
#define VTP_MSGRCVD_FC     ((VTP_UINT8)0x30 == (VTP_RxMsg.Data[0] & (VTP_UINT8)0xF0))

#define VTP_TX_IN_PROGRESS       (VTP_status.Tx_inprogress  != (VTP_UINT8)0)
#define VTP_SET_TXINPROGRESS     (VTP_status.Tx_inprogress   = (VTP_UINT8)1)
#define VTP_CLEAR_TXINPROGRESS   (VTP_status.Tx_inprogress   = (VTP_UINT8)0)

#define VTP_RX_IN_PROGRESS       (VTP_status.Rx_inprogress  != (VTP_UINT8)0)
#define VTP_SET_RXINPROGRESS     (VTP_status.Rx_inprogress   = (VTP_UINT8)1)
#define VTP_CLEAR_RXINPROGRESS   (VTP_status.Rx_inprogress   = (VTP_UINT8)0)

#define VTP_SENDMSG              (VTP_status.SendMsg        != (VTP_UINT8)0)
#define VTP_SET_SENDMSG          (VTP_status.SendMsg         = (VTP_UINT8)1)
#define VTP_CLEAR_SENDMSG        (VTP_status.SendMsg         = (VTP_UINT8)0)

#define VTP_MSGRCVD              (VTP_status.MsgRcvd        != (VTP_UINT8)0)
#define VTP_SET_MSGRCVD          (VTP_status.MsgRcvd         = (VTP_UINT8)1)
#define VTP_CLEAR_MSGRCVD        (VTP_status.MsgRcvd         = (VTP_UINT8)0)

#define VTP_INC_SEQNUM           (VTP_status.SeqNum++)
#define VTP_INIT_SEQNUM          (VTP_status.SeqNum          = (VTP_UINT8)1)
#define VTP_CLEAR_SEQNUM         (VTP_status.SeqNum          = (VTP_UINT8)0)

#define VTP_SET_FC_CTS           (VTP_status.FC_Status = (VTP_UINT8)0)
#define VTP_SET_FC_WAIT          (VTP_status.FC_Status = (VTP_UINT8)1)
#define VTP_SET_FC_OF            (VTP_status.FC_Status = (VTP_UINT8)2)
#define VTP_FC_CTS               (VTP_status.FC_Status == (VTP_UINT8)0)
#define VTP_FC_WAIT              (VTP_status.FC_Status == (VTP_UINT8)1)
#define VTP_FC_OVERFLOW          (VTP_status.FC_Status == (VTP_UINT8)2)
#define VTP_FC_STATUS            (VTP_status.FC_Status)

#define VTP_SET_RX_COMPLETE      (VTP_status.Rx_Status  = 1u)
#define VTP_SET_RX_ERROR         (VTP_status.Rx_Status  = 2u)
#define VTP_CLEAR_RX_COMPLETE    (VTP_status.Rx_Status  = 0u)
#define VTP_CLEAR_RX_ERROR       (VTP_status.Rx_Status  = 0u)
#define VTP_RX_STATUS_COMPLETE   (VTP_status.Rx_Status  == 1u)
#define VTP_RX_STATUS_ERROR      (VTP_status.Rx_Status  == 2u)

#define VTP_SET_TX_COMPLETE      (VTP_status.Tx_Status  = 1u)
#define VTP_SET_TX_ERROR         (VTP_status.Tx_Status  = 2u)
#define VTP_CLEAR_TX_COMPLETE    (VTP_status.Tx_Status  = 0u)
#define VTP_CLEAR_TX_ERROR       (VTP_status.Tx_Status  = 0u)
#define VTP_TX_STATUS_COMPLETE   (VTP_status.Tx_Status  == 1u)
#define VTP_TX_STATUS_ERROR      (VTP_status.Tx_Status  == 2u)

#define VTP_WAIT4FC              (VTP_status.Wait4FC        != (VTP_UINT8)0)
#define VTP_SET_WAIT4FC          (VTP_status.Wait4FC         = (VTP_UINT8)1)
#define VTP_CLEAR_WAIT4FC        (VTP_status.Wait4FC         = (VTP_UINT8)0)

#define VTP_START_TX_CF_TIMER      (VTP_Timer = VTP_Tx_CF_Timecnt)
#define VTP_START_RX_FC_TIMER      (VTP_Timer = VTP_Wait_FC_Timecnt)
#define VTP_START_RX_CF_TIMER      (VTP_Timer = VTP_Wait_CF_Timecnt)
#define VTP_START_TX_CONF_TIMER    (VTP_Timer = VTP_Wait_TXConf_Timecnt)

#define VTP_STOP_TIMER          (VTP_Timer = (VTP_UINT16)0)
#define VTP_TIMER_XPIRED        (VTP_Timer  == (VTP_UINT16)0)

/*******************************************************************************
================================================================================
 L O C A L   F U N C T I O N S   P R O T O T Y P E S
================================================================================
*******************************************************************************/
static void VTP_memcpy(const VTP_UINT8 *src,VTP_UINT8 *dst,VTP_UINT8 size);
static void VTP_Wait4FC(void);
static void VTP_TransmitCF(void);
static void VTP_Receive(void);
static void VTP_SendFC(void);
static void VTP_TransmitCFafterFC(void);
/*******************************************************************************
================================================================================
 P U B L I C   F U N C T I O N S
================================================================================
*******************************************************************************/

/*******************************************************************************
** FUNCTION NAME  :  VTP_Init
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_Init(void)
{
   VTP_Timer      = 0u;
   VTP_BlockSize  = 0u;
   VTP_STmin      = 0u;
   VTP_CLEAR_TXINPROGRESS;
   VTP_CLEAR_RXINPROGRESS;
   VTP_CLEAR_SENDMSG;
   VTP_CLEAR_MSGRCVD;
   VTP_TxRxMsgptr = &VTP_TxRx;
   VTP_TxCFConfirm = 0u;
   VTP_CLEAR_WAIT4FC;

}

/*******************************************************************************
** FUNCTION NAME  :  VTP_PeriodicTask
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_PeriodicTask(void)
{
    VTP_UINT8 ret;

        if((VTP_UINT8)0 != VTP_Timer)
        {
            VTP_Timer--;
        }
        else
        {}

        if(VTP_TX_IN_PROGRESS)
        {
            if(VTP_TIMER_XPIRED)
            {
                VTP_ApplCB_TxConfirm((VTP_UINT8) VTP_NOTOK);
                VTP_CLEAR_TXINPROGRESS;
                VTP_CLEAR_SENDMSG;
                VTP_CLEAR_MSGRCVD;
                VTP_CLEAR_WAIT4FC;
            }
            else
            {
				if(VTP_LASTMSG_FF || VTP_LASTMSG_CF)
				{
					if(VTP_WAIT4FC)
					{
						VTP_Wait4FC();
					}
					else
					{
						VTP_TransmitCF();
					}
				}
			}

        }
        else if(VTP_RX_STATUS_COMPLETE)
        {
            VTP_CLEAR_RX_COMPLETE;
            VTP_ApplCB_RxIndication((VTP_UINT8) VTP_OK);
        }
        else if(VTP_RX_IN_PROGRESS)
        {
            if(VTP_TIMER_XPIRED)
            {
                VTP_ApplCB_RxIndication((VTP_UINT8) VTP_NOTOK);
                VTP_CLEAR_RXINPROGRESS;
                VTP_CLEAR_SENDMSG;
                VTP_CLEAR_MSGRCVD;
            }
            else
            {}
        }
        else
        {}

        if(VTP_SENDMSG)
        {
            ret = VTP_Call_DllTransmit();
            if((VTP_UINT8) VTP_OK == ret)
            {
                VTP_CLEAR_SENDMSG;
            }
            else
            {}
        }
        else
        {}

}

/*******************************************************************************
** FUNCTION NAME  :  VTP_RxIndication
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_RxIndication(const VTP_PDU * Msgptr)
{
    VTP_RxMsg.MsgID = Msgptr->MsgID;
    VTP_RxMsg.Size  = Msgptr->Size;
    VTP_memcpy(&(Msgptr->Data[0]),&(VTP_RxMsg.Data[0]),VTP_RxMsg.Size);
    VTP_SET_MSGRCVD;
    VTP_Receive();
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_Receive
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

static void VTP_Receive(void)
{
    VTP_UINT8 ret;
	VTP_UINT8 SF_DataLength;

    if(VTP_MSGRCVD_SF)
    {
        if(VTP_RX_IN_PROGRESS)
        {
            VTP_ApplCB_RxIndication((VTP_UINT8) VTP_NOTOK);
            VTP_CLEAR_RXINPROGRESS;
        }
        else
        {
		}
			 SF_DataLength = VTP_RxMsg.Data[0] & 0x0Fu;

			 if(VTP_RxMsg.Size > SF_DataLength)
			 {
				 ret = VTP_ApplCB_RxStart(VTP_RxMsg.MsgID,VTP_RxMsg.Data[0]);

				 if ( ret == (VTP_UINT8) VTP_OK)
				 {
					 VTP_ApplCB_RxInProg(&VTP_RxMsg.Data[1],VTP_RxMsg.Data[0]);
					 VTP_SET_RX_COMPLETE;

				 }
				 else
				 {
					 VTP_CLEAR_RXINPROGRESS;
					 /*VTP_ApplCB_RxIndication((VTP_UINT8) VTP_NOTOK)*/
				 }

			}
			else
			{}

    }


    else if(VTP_MSGRCVD_FF)
    {
        if(VTP_RX_IN_PROGRESS)
        {
            VTP_ApplCB_RxIndication((VTP_UINT8) VTP_NOTOK);
            VTP_CLEAR_RXINPROGRESS;
        }
        else
        {
		}


			 if( (VTP_RxMsg.MsgID & VTP_DIAG_PHY_ID_MASK) == (VTP_UINT32)VTP_DIAG_PHY_PF )
			 {
				VTP_DataCntr = (VTP_UINT16)(VTP_RxMsg.Data[0] & 0x0Fu);
				VTP_DataCntr <<= 8u;
				VTP_DataCntr += (VTP_UINT16)VTP_RxMsg.Data[1];

				if((VTP_DataCntr >= 8u) && (VTP_RxMsg.Size == 8u))
				{
						ret = VTP_ApplCB_RxStart(VTP_RxMsg.MsgID,VTP_DataCntr);
						if ( ret == (VTP_UINT8) VTP_OK)
						{
							VTP_SET_FC_CTS;
							VTP_ApplCB_RxInProg(&VTP_RxMsg.Data[2],(VTP_UINT8)6);
							VTP_BlockSize = (VTP_UINT8)1;
							VTP_SendFC();
							VTP_DataCntr -= (VTP_UINT16)6;
							VTP_status.SeqNum = (VTP_UINT8)0;
							VTP_SET_RXINPROGRESS;
						}
						else
						{
							if(VTP_FC_OVERFLOW)
							{
								VTP_BlockSize = (VTP_UINT8)1;
								VTP_SET_FC_OF;
								VTP_SendFC();
							}
							VTP_CLEAR_RXINPROGRESS;
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

    else if(VTP_MSGRCVD_CF)
    {

			if(VTP_RX_IN_PROGRESS)
			{
			   if((VTP_RxMsg.MsgID & VTP_DIAG_PHY_ID_MASK) == (VTP_UINT32)VTP_DIAG_PHY_PF)
			   {
					VTP_INC_SEQNUM;
					if((VTP_UINT8)7 >= VTP_DataCntr)
					{

						if(VTP_status.SeqNum == (VTP_UINT16)(VTP_RxMsg.Data[0] & (VTP_UINT8)0x0F))
						{
							VTP_ApplCB_RxInProg(&VTP_RxMsg.Data[1],(VTP_UINT8)VTP_DataCntr);
							VTP_DataCntr = (VTP_UINT16)0;
							VTP_CLEAR_RXINPROGRESS;
							VTP_SET_RX_COMPLETE;
						}
						else
						{
						   VTP_ApplCB_RxIndication((VTP_UINT8) VTP_NOTOK);
						   VTP_CLEAR_RXINPROGRESS;
						}
					}
					else
					{
					}

					if(((VTP_UINT8)8 == VTP_RxMsg.Size) && ((VTP_UINT8)7 < VTP_DataCntr) )
					{
					  if(VTP_status.SeqNum == (VTP_UINT16)(VTP_RxMsg.Data[0] & (VTP_UINT8)0x0F))
					  {
						  VTP_ApplCB_RxInProg(&VTP_RxMsg.Data[1],(VTP_UINT8)7);
						  VTP_SET_FC_CTS;
						  VTP_SendFC();
						  VTP_DataCntr -= (VTP_UINT16)7;
					  }
					  else
					  {
						  VTP_ApplCB_RxIndication((VTP_UINT8) VTP_NOTOK);
						  VTP_CLEAR_RXINPROGRESS;
					  }
					}
					else
					{
					   VTP_ApplCB_RxIndication((VTP_UINT8) VTP_NOTOK);
					   VTP_CLEAR_RXINPROGRESS;
					}
				}
				else
				{
				   VTP_ApplCB_RxIndication((VTP_UINT8) VTP_NOTOK);
				   VTP_CLEAR_RXINPROGRESS;
				}
			}
			else
			{
			}


    }

    else if( (VTP_WAIT4FC) && (VTP_MSGRCVD_FC) )
    {
        if(VTP_RxMsg.Size >= 3u)
        {
        	VTP_Wait4FC();
        }
    }

    else
    {

    }
    VTP_CLEAR_MSGRCVD;

}

/*******************************************************************************
** FUNCTION NAME  :  VTP_memcpy
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VTP_memcpy(const VTP_UINT8 *src,VTP_UINT8 *dst,VTP_UINT8 size)
{
    for(;size > 0u;size--)
    {
        *dst = *src;
        dst++;
        src++;
    }
}
/*******************************************************************************
** FUNCTION NAME  :  VTP_SetFC_Overflow
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

void VTP_SetFC_Overflow(void)
{
    VTP_SET_FC_OF;
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_Transmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

VTP_UINT8 VTP_Transmit(VTP_UINT8 * Msgptr, VTP_UINT16 length)
{
	VTP_UINT8 retStatus;
	VTP_UINT8 VTP_byte_loc;

	retStatus = (VTP_UINT8) VTP_NOTOK;

	if((!VTP_TX_IN_PROGRESS) && (!VTP_RX_IN_PROGRESS) && (length != (VTP_UINT16)0))
	{
		VTP_TxRxMsgptr->Data    =  Msgptr;
		VTP_TxRxMsgptr->DataLength = length;
		//XXX: KSHANMU4 FIXME
		//VTP_TxMsg.MsgID   =  (VTP_RESPONSE_ID | (destination_address << 8))
		VTP_TxMsg.MsgID   =  (VTP_RESPONSE_ID);
		VTP_TxMsg.Size    =  (VTP_UINT8)8;

		if((VTP_UINT16)VTP_SINGLEFRAME_LENGTH >= VTP_TxRxMsgptr->DataLength)
		{
			VTP_TxMsg.Data[0] =  (VTP_UINT8)VTP_TxRxMsgptr->DataLength;
			VTP_memcpy(VTP_TxRxMsgptr->Data,&(VTP_TxMsg.Data[1]),(VTP_UINT8)VTP_TxRxMsgptr->DataLength);
			if((VTP_UINT16)VTP_SINGLEFRAME_LENGTH > VTP_TxRxMsgptr->DataLength )
			{
				VTP_TxRxMsgptr->DataLength = (VTP_SINGLEFRAME_LENGTH - VTP_TxRxMsgptr->DataLength);
				VTP_byte_loc = (VTP_UINT8)(VTP_SINGLEFRAME_LENGTH - VTP_TxRxMsgptr->DataLength + 1u);
				VTP_memcpy(&VTP_unusedbytedata[0], &(VTP_TxMsg.Data[VTP_byte_loc]) , (VTP_UINT8)VTP_TxRxMsgptr->DataLength);
			}

			VTP_TxRxMsgptr->DataLength = (VTP_UINT16)0;
			VTP_DataCntr      =  (VTP_UINT8)0;
		}
		else
		{
			VTP_memcpy(&(VTP_TxRxMsgptr->Data[0]),&(VTP_TxMsg.Data[2]),(VTP_UINT8)6);
			VTP_TxMsg.Data[0]    =  ((VTP_UINT8)0x10 + (VTP_UINT8)(VTP_TxRxMsgptr->DataLength >> 8u));
			VTP_TxMsg.Data[1]    =  (VTP_UINT8) (VTP_TxRxMsgptr->DataLength);
			VTP_TxRxMsgptr->DataLength   -= (VTP_UINT16)6;
			VTP_DataCntr         = (VTP_UINT16)6;
			VTP_INIT_SEQNUM;
			VTP_SET_WAIT4FC;
		}

		VTP_SET_TXINPROGRESS;

		retStatus = VTP_Call_DllTransmit();
		if((VTP_UINT8) VTP_OK == retStatus)
		{
			VTP_CLEAR_SENDMSG;

		}
		else
		{}
		VTP_START_TX_CONF_TIMER;
		/*which_timer = 0x44*/
	}
	else
	{
		
	}
	return(retStatus);
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_TxConfirm
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

void VTP_TxConfirm(void)
{
    if(VTP_LASTMSG_SF)
    {
        VTP_CLEAR_TXINPROGRESS;
        VTP_SET_TX_COMPLETE;
        VTP_STOP_TIMER;
    }
    else if(VTP_LASTMSG_FF)
    {
        VTP_START_RX_FC_TIMER;
		/*which_timer = 0x22*/
    }
    else if(VTP_LASTMSG_CF)
    {
		VTP_TxCFConfirm = 1u;
        if(VTP_WAIT4FC)
        {
            VTP_START_RX_FC_TIMER;
			/*which_timer = 0x33*/
        }
        else
        {
             VTP_STminCntr = (VTP_STmin / (VTP_UINT8)VTP_PERIODICITY) + 2u;
			/* VTP_STOP_TIMER*/
             VTP_START_TX_CF_TIMER;
			 /*which_timer = 0x11*/
        }
    }
    else if(VTP_LASTMSG_FC)
    {
        VTP_START_RX_CF_TIMER;
    }
    else
    {
    }
    if(VTP_TX_STATUS_COMPLETE)
    {
        VTP_CLEAR_TX_COMPLETE;
        VTP_ApplCB_TxConfirm((VTP_UINT8) VTP_OK);
    }
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_Transmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

static void VTP_Wait4FC(void)
{

    if(VTP_WAIT4FC && VTP_MSGRCVD)
    {
        if(VTP_FCCTS)
        {
			VTP_CLEAR_WAIT4FC;
            VTP_FCwaitCntr = 0u;
            VTP_BlockSize = VTP_RxMsg.Data[1];
            VTP_STmin     = VTP_RxMsg.Data[2];
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
			
			if(VTP_STmin > 0x7Fu)
			{
				VTP_STmin = 0x7Fu;
			}
			else
			{
				
			}
			
			VTP_STminCntr = 0u;

            VTP_TransmitCFafterFC();            
        }
        else if(VTP_FCWAIT)
        {
            VTP_FCwaitCntr++;
            if(VTP_MAX_WAIT_CNT >= VTP_FCwaitCntr)
            {
                VTP_START_RX_FC_TIMER;
            }
            else
            {
                VTP_FCwaitCntr = 0u;
                VTP_ApplCB_TxConfirm((VTP_UINT8) VTP_NOTOK);
                VTP_CLEAR_TXINPROGRESS;
            }
        }
        else if(VTP_FCOVERFLOW)
        {
                VTP_ApplCB_TxConfirm((VTP_UINT8) VTP_NOTOK);
                VTP_CLEAR_TXINPROGRESS;
                VTP_CLEAR_WAIT4FC;
        }
        else
        {
            if(VTP_TIMER_XPIRED)
            {
                VTP_ApplCB_TxConfirm((VTP_UINT8) VTP_NOTOK);
                VTP_CLEAR_TXINPROGRESS;
                VTP_CLEAR_WAIT4FC;
            }
            else
            {}
        }
        VTP_CLEAR_MSGRCVD;
    }
    else
    {
        if(VTP_TIMER_XPIRED)
        {
            VTP_ApplCB_TxConfirm((VTP_UINT8) VTP_NOTOK);
            VTP_CLEAR_TXINPROGRESS;
            VTP_CLEAR_WAIT4FC;
            VTP_CLEAR_MSGRCVD;
        }
        else
        {}
    }

}

/*******************************************************************************
** FUNCTION NAME  :  VTP_Transmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VTP_TransmitCF(void)
{

	if((VTP_UINT8)0 != VTP_STminCntr)
    {
        VTP_STminCntr--;
    }
    else
    {}

    if(((VTP_UINT8)0 == VTP_STminCntr) && ((VTP_UINT8)1 == VTP_TxCFConfirm))
    {
        VTP_TransmitCFafterFC();
    }
    else
    {
    }

}
/*******************************************************************************
** FUNCTION NAME  :  VTP_TransmitCFafterFC
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VTP_TransmitCFafterFC(void)
{

    VTP_UINT8 VTP_byte_loc;
    VTP_UINT8 retStatus;
	VTP_TxMsg.Data[0] =  (VTP_UINT8)((VTP_UINT8)0x20 + VTP_status.SeqNum);
 
    if((VTP_UINT8)7 >= VTP_TxRxMsgptr->DataLength)
    {
        VTP_TxMsg.Size    =  (VTP_UINT8)8;
        VTP_memcpy(&(VTP_TxRxMsgptr->Data[VTP_DataCntr]),&(VTP_TxMsg.Data[1]),(VTP_UINT8)VTP_TxRxMsgptr->DataLength);
        if((VTP_UINT8)7 > VTP_TxRxMsgptr->DataLength )
        {
          	VTP_TxRxMsgptr->DataLength = (VTP_SINGLEFRAME_LENGTH - VTP_TxRxMsgptr->DataLength);
           	VTP_byte_loc = (VTP_UINT8)(VTP_SINGLEFRAME_LENGTH - VTP_TxRxMsgptr->DataLength + 1u);
           	VTP_memcpy(&VTP_unusedbytedata[0], &(VTP_TxMsg.Data[VTP_byte_loc]) , (VTP_UINT8)VTP_TxRxMsgptr->DataLength);
        }

        VTP_TxRxMsgptr->DataLength = (VTP_UINT16)0;
        VTP_CLEAR_TXINPROGRESS;
        VTP_CLEAR_MSGRCVD;
        VTP_SET_TX_COMPLETE;
    }
    else
    {
        VTP_TxMsg.Size    =  (VTP_UINT8)8;
        VTP_memcpy(&(VTP_TxRxMsgptr->Data[VTP_DataCntr]),&(VTP_TxMsg.Data[1]),(VTP_UINT8)7);
        VTP_TxRxMsgptr->DataLength   -= (VTP_UINT16)7;
        VTP_DataCntr         += (VTP_UINT16)7;
        VTP_INC_SEQNUM;
    }
		/*retStatus  = (VTP_UINT8) VTP_OK*/
		VTP_TxCFConfirm = 0u;
        retStatus = VTP_Call_DllTransmit();
        if((VTP_UINT8) VTP_OK == retStatus)
        {
            VTP_CLEAR_SENDMSG;

        }
        else
        {
		
		}
        VTP_START_TX_CONF_TIMER;
		/*which_timer = 0x55*/


    if(((VTP_UINT8)0 != VTP_BlockSize) &&(VTP_TX_IN_PROGRESS))
    {
        VTP_BlockSize--;
        if((VTP_UINT8)0 == VTP_BlockSize)
        {
            VTP_SET_WAIT4FC;
        }
        else
        {}
    }
    else
    {}


}
/*******************************************************************************
** FUNCTION NAME  :  VTP_SendFC
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/

static void VTP_SendFC(void)
{
    VTP_UINT8 ret;

    if((VTP_UINT8)0 != VTP_BlockSize)
    {
        VTP_BlockSize--;
        if((VTP_UINT8)0 == VTP_BlockSize)
        {
			//XXX: KSHANMU4 FIXME
            //VTP_TxMsg.MsgID    = (VTP_RESPONSE_ID | (destination_address << 8))
			VTP_TxMsg.MsgID    = (VTP_RESPONSE_ID);
            VTP_TxMsg.Size     = (VTP_UINT8)0x08;
            VTP_TxMsg.Data[0]  = (VTP_UINT8)0x30 | ((VTP_UINT8)VTP_FC_STATUS);
            VTP_TxMsg.Data[1]  = VTP_BLOCKSIZE;
            VTP_TxMsg.Data[2]  = (VTP_UINT8)VTP_STMIN;
            VTP_BlockSize      = VTP_BLOCKSIZE;
			
			#ifdef MAZDA_J59
			delay_ms(FC_DELAY);
			VTP_unusedbytedata[0] = 0x00;
			VTP_unusedbytedata[1] = 0x00;
			VTP_unusedbytedata[2] = 0x00;
			VTP_unusedbytedata[3] = 0x00;
			VTP_unusedbytedata[4] = 0x00;
			VTP_unusedbytedata[5] = 0x00;
			VTP_unusedbytedata[6] = 0x00;
			VTP_unusedbytedata[7] = 0x00;
			#endif
			
            VTP_memcpy(&VTP_unusedbytedata[0], &(VTP_TxMsg.Data[3]) , (VTP_UINT8)5);
           
                ret = VTP_Call_DllTransmit();
                if((VTP_UINT8) VTP_OK == ret)
                {
                    VTP_CLEAR_SENDMSG;
                }
                else
                {}
                VTP_START_TX_CONF_TIMER;
				/*which_timer = 0x66*/
        }
        else
        {}
    }
    else
    {
        VTP_START_RX_CF_TIMER;
    }
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_Rx_GetStatus
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  VTP_UINT8
*******************************************************************************/
VTP_UINT8 VTP_Rx_GetStatus(void)
{
return((VTP_UINT8)VTP_status.Rx_Status);
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
