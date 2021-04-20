/* ===========================================================================

                     CONFIDENTIAL VISTEON CORPORATION

  This is an unpublished work of authorship, which contains trade secrets,
  created in 2006.  Visteon Corporation owns all rights to this work and
  intends to maintain it in confidence to preserve its trade secret status.
  Visteon Corporation reserves the right, under the copyright laws of the
  United States or those of any other country that may have jurisdiction, to
  protect this work as an unpublished work, in the event of an inadvertent
  or deliberate unauthorized publication.  Visteon Corporation also reserves
  its rights under all copyright laws to protect this work as a published
  work, when appropriate.  Those having access to this work may not copy it,
  use it, modify it or disclose the information contained in it without the
  written authorization of Visteon Corporation.

 =========================================================================*/

/* =============================================================================

  Name:           CanTp.c

  Description:    CAN Transport Layer

                  Transport Layer to Support TP Message Based Interface

  Organization:   Multiplex Subsystems

 ==============================================================================*/

/* ============================================================================
  I N C L U D E   F I L E S
==============================================================================*/

#include "Can_defs.h"
#include "CanDisp.h"
//#include "CanDisp_Par_Cfg.h"
#include "CanIl_Util.h"
#include "CanTp.h"

/*******************************************************************************
================================================================================
 P R I V A T E   T Y P E   D E F I N I T I O N S
================================================================================
*******************************************************************************/


/*******************************************************************************
================================================================================
 C O N F I G U R A T I O N S
================================================================================
*******************************************************************************/

/*******************************************************************************
================================================================================
 L O C A L   V A R I A B L E S
================================================================================
*******************************************************************************/
static VTP_StatusType               CanTpmc_status[VTP_NUM_CHANNEL_COUNT];
static VTP_PDU                      CanTpmc_TxMsg[VTP_NUM_CHANNEL_COUNT];
static VTP_PDU                      CanTpmc_RxMsg[VTP_NUM_CHANNEL_COUNT];
static VTP_UINT16                   CanTpmc_Timer[VTP_NUM_CHANNEL_COUNT];
static VTP_UINT8                    CanTpmc_BlockSize[VTP_NUM_CHANNEL_COUNT];
static VTP_UINT8                    CanTpmc_STmin[VTP_NUM_CHANNEL_COUNT];
static VTP_UINT8                    CanTpmc_STminCntr[VTP_NUM_CHANNEL_COUNT];

#if (VTP_WAITFC_SUPPORT == VTP_YES)
static VTP_UINT8                    CanTpmc_FCwaitCntr[VTP_NUM_CHANNEL_COUNT];
#endif

static VTP_UINT16                   CanTpmc_DataCntr[VTP_NUM_CHANNEL_COUNT];
static PduInfoType                  CanTpmc_TxRx[VTP_NUM_CHANNEL_COUNT];
static PduInfoType *                CanTpmc_TxRxMsgptr[VTP_NUM_CHANNEL_COUNT];
static VTP_UINT16                   CanTp_RemainingDataSize;
static VTP_UINT8                    CanTp_ReceivedPduId;
static VTP_UINT8                    CanTp_InitSt;

#if (VTP_PADDING_SUPPORT == VTP_YES)
static VTP_UINT8                    CanTp_PaddedBuffer[VTP_NUM_CHANNEL_COUNT][CAN_MAX_DATA_LENGTH];
#endif

static VTP_UINT8                    CanTpDataBuffer[VTP_NUM_CHANNEL_COUNT][CAN_MAX_DATA_LENGTH];

#ifdef TpTransmitRetrySupportAvailable
static VTP_UINT16                   CanTp_CopiedDataStartIndex;
static VTP_UINT8                    CanTp_TxRetryDone;
#endif

/*******************************************************************************
================================================================================
 L O C A L   M A C R O S
================================================================================
*******************************************************************************/
#define CanTp_status                CanTpmc_status[channel]
#define CanTp_TxMsg                 CanTpmc_TxMsg[channel]
#define CanTp_RxMsg                 CanTpmc_RxMsg[channel]
#define CanTp_Timer                 CanTpmc_Timer[channel]
#define CanTp_BlockSize             CanTpmc_BlockSize[channel]
#define CanTp_STmin                 CanTpmc_STmin[channel]
#define CanTp_RxFFBlockSize         CanTpmc_BlockSize[channel]
#define CanTp_RxFFSTmin             CanTpmc_STmin[channel]
#define CanTp_STminCntr             CanTpmc_STminCntr[channel]

#if (VTP_WAITFC_SUPPORT == VTP_YES)
#define CanTp_FCwaitCntr            CanTpmc_FCwaitCntr[channel]
#endif

#define CanTp_DataCntr              CanTpmc_DataCntr[channel]
#define CanTp_TxRx                  CanTpmc_TxRx[channel]
#define CanTp_TxRxMsgptr            CanTpmc_TxRxMsgptr[channel]

#if 0
#define CanTp_Tx_CF_Timecnt         CanTp_Tx_CF_Timecnt[channel]
#define CanTp_Wait_FC_Timecnt       CanTp_Wait_FC_Timecnt[channel]
#define CanTp_Wait_CF_Timecnt       CanTp_Wait_CF_Timecnt[channel]
#define CanTp_Wait_TXConf_Timecnt   CanTp_Wait_TXConf_Timecnt[channel]
#endif

#define CANTP_TX_IN_PROGRESS       (CanTp_status.Tx_inprogress  != (VTP_UINT8)VTP_FALSE)
#define CANTP_SET_TXINPROGRESS     (CanTp_status.Tx_inprogress   = (VTP_UINT8)VTP_TRUE)
#define CANTP_CLEAR_TXINPROGRESS   (CanTp_status.Tx_inprogress   = (VTP_UINT8)VTP_FALSE)

#define CANTP_RX_IN_PROGRESS       (CanTp_status.Rx_inprogress  != (VTP_UINT8)VTP_FALSE)
#define CANTP_SET_RXINPROGRESS     (CanTp_status.Rx_inprogress   = (VTP_UINT8)VTP_TRUE)
#define CANTP_CLEAR_RXINPROGRESS   (CanTp_status.Rx_inprogress   = (VTP_UINT8)VTP_FALSE)

#define CANTP_SENDMSG              (CanTp_status.SendMsg != (VTP_UINT8)VTP_FALSE)
#define CANTP_SET_SENDMSG          (CanTp_status.SendMsg  = (VTP_UINT8)VTP_TRUE)
#define CANTP_CLEAR_SENDMSG        (CanTp_status.SendMsg  = (VTP_UINT8)VTP_FALSE)

#define CANTP_INC_SEQNUM           (CanTp_status.SeqNum++)
#define CANTP_INIT_SEQNUM          (CanTp_status.SeqNum  = (VTP_UINT8)CANTP_CF_FIRST_SEQNUM)

#define CANTP_WAIT4FC              (CanTp_status.Wait4FC != (VTP_UINT8)VTP_FALSE)
#define CANTP_SET_WAIT4FC          (CanTp_status.Wait4FC  = (VTP_UINT8)VTP_TRUE)
#define CANTP_CLEAR_WAIT4FC        (CanTp_status.Wait4FC  = (VTP_UINT8)VTP_FALSE)

#define CANTP_SET_FC_OVERFLOW      (CanTp_status.FC_Status  = (VTP_UINT8)CANTP_FC_OVERFLOW_MASK)
#define CANTP_SET_FC_CTS           (CanTp_status.FC_Status  = (VTP_UINT8)CANTP_FC_CTS_MASK)
#define CANTP_SET_FC_WAIT          (CanTp_status.FC_Status  = (VTP_UINT8)CANTP_FC_WAIT_MASK)
#define CANTP_FC_STATUS            (CanTp_status.FC_Status)
#define CANTP_FC_CTS               (CanTp_status.FC_Status  == (VTP_UINT8)CANTP_FC_CTS_MASK)
#define CANTP_FC_OVERFLOW          (CanTp_status.FC_Status  == (VTP_UINT8)CANTP_FC_OVERFLOW_MASK)
#define CANTP_FC_WAIT              (CanTp_status.FC_Status  == (VTP_UINT8)CANTP_FC_WAIT_MASK)

#define CANTP_SET_UNINIT           (CanTp_InitSt  = (VTP_UINT8)VTP_FALSE)
#define CANTP_SET_INIT             (CanTp_InitSt  = (VTP_UINT8)VTP_TRUE)
#define CANTP_CHECK_INIT           (CanTp_InitSt == (VTP_UINT8)VTP_TRUE)

#define CANTP_FCRCVD               (CanTp_status.MsgRcvd != (VTP_UINT8)VTP_FALSE)
#define CANTP_SET_FCRCVD           (CanTp_status.MsgRcvd  = (VTP_UINT8)VTP_TRUE)
#define CANTP_CLEAR_FCRCVD         (CanTp_status.MsgRcvd  = (VTP_UINT8)VTP_FALSE)

#define CANTP_START_TX_CF_TIMER    (CanTp_Timer = CanTp_Transmit_Timing_Config[channel].TransmitCFTimeOut)	/*N_Cs*/
#define CANTP_START_RX_FC_TIMER    (CanTp_Timer = CanTp_Transmit_Timing_Config[channel].WaitFCTimeOut)
#define CANTP_START_RX_CF_TIMER    (CanTp_Timer = CanTp_Receive_Timing_Config[channel].WaitCFTimeOut)	/*N_Cr*/
#define CANTP_START_TX_CONF_TIMER  (CanTp_Timer = CanTp_Transmit_Timing_Config[channel].WaitTxConfTimeOut)

#define CANTP_STOP_TIMER           (CanTp_Timer = (VTP_UINT16)CANTP_TIMER_ZERO)
#define CANTP_TIMER_XPIRED         (CanTp_Timer == (VTP_UINT16)CANTP_TIMER_ZERO)

#define CANTP_LASTMSG_SF           ((VTP_UINT8)CANTP_SF_CONTROL == (CanTp_TxMsg.Data[CANTP_FRAME_BYTE0] & (VTP_UINT8)CANTP_CONTROL_MASK))
#define CANTP_LASTMSG_FF           ((VTP_UINT8)CANTP_FF_CONTROL == (CanTp_TxMsg.Data[CANTP_FRAME_BYTE0] & (VTP_UINT8)CANTP_CONTROL_MASK))
#define CANTP_LASTMSG_CF           ((VTP_UINT8)CANTP_CF_CONTROL == (CanTp_TxMsg.Data[CANTP_FRAME_BYTE0] & (VTP_UINT8)CANTP_CONTROL_MASK))
#define CANTP_LASTMSG_FC           ((VTP_UINT8)CANTP_FC_CONTROL == (CanTp_TxMsg.Data[CANTP_FRAME_BYTE0] & (VTP_UINT8)CANTP_CONTROL_MASK))

#define CANTP_FCCTS                ((VTP_UINT8)CANTP_FC_CTS_BYTE      == CanTp_RxMsg.Data[CANTP_FRAME_BYTE0])
#define CANTP_FCWAIT               ((VTP_UINT8)CANTP_FC_WAIT_BYTE     == CanTp_RxMsg.Data[CANTP_FRAME_BYTE0])
#define CANTP_FCOVERFLOW           ((VTP_UINT8)CANTP_FC_OVERFLOW_BYTE == CanTp_RxMsg.Data[CANTP_FRAME_BYTE0])

#define CANTP_MSGRCVD_SF           ((VTP_UINT8)CANTP_SF_CONTROL == (CanTp_RxMsg.Data[CANTP_FRAME_BYTE0] & (VTP_UINT8)CANTP_CONTROL_MASK))
#define CANTP_MSGRCVD_FF           ((VTP_UINT8)CANTP_FF_CONTROL == (CanTp_RxMsg.Data[CANTP_FRAME_BYTE0] & (VTP_UINT8)CANTP_CONTROL_MASK))
#define CANTP_MSGRCVD_CF           ((VTP_UINT8)CANTP_CF_CONTROL == (CanTp_RxMsg.Data[CANTP_FRAME_BYTE0] & (VTP_UINT8)CANTP_CONTROL_MASK))
#define CANTP_MSGRCVD_FC           ((VTP_UINT8)CANTP_FC_CONTROL == (CanTp_RxMsg.Data[CANTP_FRAME_BYTE0] & (VTP_UINT8)CANTP_CONTROL_MASK))

#define CANTP_SET_RX_COMPLETE      (CanTp_status.Rx_Status  = CANTP_STATUS_COMPLETE)
#define CANTP_SET_RX_ERROR         (CanTp_status.Rx_Status  = CANTP_STATUS_ERROR)
#define CANTP_CLEAR_RX_COMPLETE    (CanTp_status.Rx_Status  = CANTP_STATUS_INIT)
#define CANTP_CLEAR_RX_ERROR       (CanTp_status.Rx_Status  = CANTP_STATUS_INIT)
#define CANTP_RX_STATUS_COMPLETE   (CanTp_status.Rx_Status  == CANTP_STATUS_COMPLETE)
#define CANTP_RX_STATUS_ERROR      (CanTp_status.Rx_Status  == CANTP_STATUS_ERROR)

#define CANTP_SET_TX_COMPLETE      (CanTp_status.Tx_Status  = CANTP_STATUS_COMPLETE)
#define CANTP_SET_TX_ERROR         (CanTp_status.Tx_Status  = CANTP_STATUS_ERROR)
#define CANTP_CLEAR_TX_COMPLETE    (CanTp_status.Tx_Status  = CANTP_STATUS_INIT)
#define CANTP_CLEAR_TX_ERROR       (CanTp_status.Tx_Status  = CANTP_STATUS_INIT)
#define CANTP_TX_STATUS_COMPLETE   (CanTp_status.Tx_Status  == CANTP_STATUS_COMPLETE)
#define CANTP_TX_STATUS_ERROR      (CanTp_status.Tx_Status  == CANTP_STATUS_ERROR)

#define CANTP_TXRX_DATALENGTH      (CanTp_TxRxMsgptr->SduLength)

/*******************************************************************************
================================================================================
 L O C A L   F U N C T I O N S   P R O T O T Y P E S
================================================================================
*******************************************************************************/
static void CanTp_memcpy(VTP_UINT8 const *src, VTP_UINT8 *dst, VTP_UINT8 size);
static void CanTp_TransmitCF(VTP_UINT8 channel);
static void CanTp_Receive(VTP_UINT8 channel, VTP_UINT8 RxPduId);
static void CanTp_ApplCB_TxConfirm(VTP_UINT8 channel, PduIdType TxPduId, VTP_UINT8 Status);
static void CanTp_ApplCB_RxIndication(VTP_UINT8 channel, PduIdType RxPduId, VTP_UINT8 Status);

#if (VTP_FC_SUPPORT == VTP_YES)
static void CanTp_Wait4FC(VTP_UINT8 channel);
static void CanTp_SendFC(VTP_UINT8 channel);
#endif

#ifdef TpTransmitRetrySupportAvailable
static VTP_UINT8 CanTp_ReceiveAndPopulateData(VTP_UINT8 channel);
#endif

/*******************************************************************************
================================================================================
 P U B L I C   F U N C T I O N S
================================================================================
*******************************************************************************/

/*******************************************************************************
** FUNCTION NAME  :  CanTp_Init
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_Init(void)
{
    VTP_UINT8 channel = 0;
    VTP_UINT8 ByteIndex;

    if(!CANTP_CHECK_INIT)
	{
	    #if(VTP_NUM_CHANNEL_COUNT > 1)
	    do
		{
		#endif

	        CANTP_SET_INIT;
	        CANTP_STOP_TIMER;
	        CanTp_BlockSize  = 0;
		    CanTp_STmin      = 0;
			CanTp_DataCntr   = 0;
			CANTP_CLEAR_TX_COMPLETE;
			CANTP_CLEAR_RX_COMPLETE;
		    CANTP_CLEAR_TXINPROGRESS;
		    CANTP_CLEAR_RXINPROGRESS;
		    CANTP_CLEAR_SENDMSG;
		    CANTP_CLEAR_FCRCVD;
			CanTp_TxRx.SduDataPtr = CanTpDataBuffer[channel];
		    CanTp_TxRxMsgptr = &CanTp_TxRx;
		    CANTP_CLEAR_WAIT4FC;
		    CANTP_SET_FC_CTS;

            #if (VTP_WAITFC_SUPPORT == VTP_YES)
			CanTp_FCwaitCntr = 0;
            #endif

            #if (VTP_PADDING_SUPPORT == VTP_YES)
            if(CanTp_Parameter_Config[channel].PaddingSupport == VTP_YES)
	       	{
                for(ByteIndex = 0; ByteIndex < CAN_MAX_DATA_LENGTH; ByteIndex++)
	       	    {
		             CanTp_PaddedBuffer[channel][ByteIndex] = CanTp_Parameter_Config[channel].PaddingValue;
		        }
		    }
            #endif
		#if(VTP_NUM_CHANNEL_COUNT > 1)
			channel++;
		} while( channel < VTP_NUM_CHANNEL_COUNT );
		#endif

	    CanTp_RemainingDataSize    = 0;
        CanTp_ReceivedPduId = CANTP_INVALID_PDUID;
        #ifdef TpTransmitRetrySupportAvailable
            CanTp_CopiedDataStartIndex = 0;
            CanTp_TxRetryDone = VTP_FALSE;
        #endif
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
	    #endif
	}
}


/*******************************************************************************
** FUNCTION NAME  :  CanTp_DeInit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_DeInit(void)
{
    if(CANTP_CHECK_INIT)
	{
        #if(VTP_NUM_CHANNEL_COUNT > 1)
        do
	    {
		#endif
			CANTP_SET_UNINIT;
		#if(VTP_NUM_CHANNEL_COUNT > 1)
			channel++;
	    } while( channel < VTP_NUM_CHANNEL_COUNT );
		#endif
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
	    #endif
	}
}


/*******************************************************************************
** FUNCTION NAME  :  CanTp_Channel_Init
** DESCRIPTION    :
** INPUT          :  Specific TP channel number
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_Channel_Init(VTP_UINT8 channel)
{
	#if (VTP_PADDING_SUPPORT == VTP_YES)
    CAN_UINT8 ByteIndex;
    #endif
    
    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
	    CANTP_SET_INIT;
	    CANTP_STOP_TIMER;
	    CanTp_BlockSize  = 0;
	    CanTp_STmin      = 0;
		CanTp_DataCntr   = 0;
		CANTP_CLEAR_TX_COMPLETE;
		CANTP_CLEAR_RX_COMPLETE;
	    CANTP_CLEAR_TXINPROGRESS;
	    CANTP_CLEAR_RXINPROGRESS;
	    CANTP_CLEAR_SENDMSG;
	    CANTP_CLEAR_FCRCVD;
		CanTp_TxRx.SduDataPtr = CanTpDataBuffer[channel];
	    CanTp_TxRxMsgptr = &CanTp_TxRx;
	    CANTP_CLEAR_WAIT4FC;
	    CANTP_SET_FC_CTS;
		CanTp_RemainingDataSize    = 0;
        CanTp_ReceivedPduId = CANTP_INVALID_PDUID;

#if (VTP_WAITFC_SUPPORT == VTP_YES)
		CanTp_FCwaitCntr = 0;
#endif

#if (VTP_PADDING_SUPPORT == VTP_YES)
        if(CanTp_Parameter_Config[channel].PaddingSupport == VTP_YES)
		{
            for(ByteIndex = 0; ByteIndex < CAN_MAX_DATA_LENGTH; ByteIndex++)
	       	{
		         CanTp_PaddedBuffer[channel][ByteIndex] = CanTp_Parameter_Config[channel].PaddingValue;
		    }
		}
#endif

		#ifdef TpTransmitRetrySupportAvailable
            CanTp_CopiedDataStartIndex = 0;
            CanTp_TxRetryDone = VTP_FALSE;
        #endif
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
	    #endif
	}
}

/*******************************************************************************
** FUNCTION NAME  :  CanTp_MainFunction
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_MainFunction(void)
{
    VTP_UINT8 ret;
    VTP_UINT8 channel = 0;
	VTP_UINT8 CanTxPduId;
	VTP_UINT8 CanRxPduId;

    #ifdef TpTransmitRetrySupportAvailable
    RetryInfoType TpRetryInfo;
    CAN_UINT8 ReturnStatus = E_NOT_OK;
    #endif

    #if (VTP_WAITFC_SUPPORT == VTP_YES)
    PduLengthType MaxRxBufferSize;
    #endif

    if( CANTP_CHECK_INIT )
	{
	    while(channel < VTP_NUM_CHANNEL_COUNT)
	    {
	        CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;
	        CanRxPduId = CanTp_ReceivedPduId;

	        if((VTP_UINT8)0 != CanTp_Timer)
	        {
	            CanTp_Timer--;
	        }

	        if(CANTP_TX_IN_PROGRESS)
	        {
	            if(!CANTP_SENDMSG)
	            {
	                if(CANTP_TIMER_XPIRED)
		            {
					    #ifdef TpTransmitRetrySupportAvailable
		                if(CanTp_TxRetryDone != VTP_TRUE)
		                {
		                    (CanTp_Appl_TransmitCB_FuncPtr[channel].TpTxConfirmationFunc)(CanTxPduId, E_NOT_OK);
						}
                        else
						{
						    CanTp_TxRetryDone = VTP_FALSE;
						    CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
						}
						#else
		                CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
						#endif
		            }
	                else if(CANTP_LASTMSG_FF || CANTP_LASTMSG_CF)
	                {
	                    #if (VTP_FC_SUPPORT == VTP_YES)
	                    if(CANTP_WAIT4FC)
	                    {
	                        CanTp_Wait4FC(channel);
	                    }
	                    else
						#endif
	                    {
	                        CanTp_TransmitCF(channel);
	                    }
	                }
	                else
	                {
	                }
	            }
	            else
	            {
	                if(CANTP_TIMER_XPIRED)
	                {
	                    CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
	                }
	            }
	        }
	        else if(CANTP_RX_STATUS_COMPLETE)
	        {
	            CANTP_CLEAR_RX_COMPLETE;
	            /*CanTp_ApplCB_RxIndication(channel, CanRxPduId, E_OK);*/
                CanTp_ReceivedPduId = CANTP_INVALID_PDUID;
	        }
	        else if(CANTP_RX_STATUS_ERROR)
	        {
	            CanTp_ApplCB_RxIndication(channel, CanRxPduId, E_NOT_OK);
	        }
	        else if(CANTP_RX_IN_PROGRESS)
	        {
	            if(CANTP_TIMER_XPIRED)
	            {
	                CanTp_ApplCB_RxIndication(channel, CanRxPduId, E_NOT_OK);
	            }
				else
				{
				    #if (VTP_WAITFC_SUPPORT == VTP_YES)

				    if(CanTp_FCwaitCntr > 0)
			        {
			            ret = (VTP_UINT8)(CanTp_Appl_ReceiveCB_FuncPtr[channel].StartOfRxFunc)( CanTp_ReceivedPduId, CanTp_TxRxMsgptr, CanTp_TxRxMsgptr->SduLength, &MaxRxBufferSize );
	                    if( (VTP_UINT8)BUFREQ_OK == ret )
			            {
                            CanTp_Receive(channel, CanTp_ReceivedPduId);
                        }
						else if( (VTP_UINT8)BUFREQ_E_BUSY == ret )
						{
						    CanTp_SetFC_Wait(channel);
	                        CanTp_BlockSize = (VTP_UINT8)1;
					        CanTp_SendFC(channel);
						}
						else
						{
						    CanTp_Channel_Init(channel);
						}
			        }

                    #endif
				}
	        }
	        else
	        {
	        }

	        #ifdef TpTransmitRetrySupportAvailable
	        if(CANTP_SENDMSG)
	        {
	            ReturnStatus = CanTp_ReceiveAndPopulateData(channel);
	            if(E_OK == ReturnStatus)
                {
                    # if(CANDISP_TP_SUPPORT_API == STD_ON)
                    CtrlId = CanTp_Parameter_Config[channel].ControllerIDofChannel;
                    ReturnStatus = CanDisp_Transmit(CtrlId, CanTxPduId, CanTp_TxRxMsgptr);
	                #endif

	                if(E_OK == ReturnStatus)
	                {
	                    CANTP_CLEAR_SENDMSG;
	                    CanTp_CopiedDataStartIndex = 0;
                        CanTp_TxRetryDone = VTP_TRUE;
	                    CanTp_RemainingDataSize = CanTp_RemainingDataSize - CanTp_DataCntr;
	                }
					else
					{
		                CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
					}
	            }
				else
				{
		            CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
				}

	            /*TpRetryInfo.TpDataState = TP_DATACONF;
				TpRetryInfo.TxTpDataCnt = 0;
	            (void)(CanTp_Appl_TransmitCB_FuncPtr[channel].CopyTxFunc)(CanTxPduId, CanTp_TxRxMsgptr, &TpRetryInfo, &CanTp_RemainingDataSize);*/
	            /*(CanTp_Appl_TransmitCB_FuncPtr[channel].TpTxConfirmationFunc)( CanTxPduId, ReturnStatus );*/
			}
			#endif
            
            channel++;
            
		};
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
	    #endif
	}
}

#ifdef TpTransmitRetrySupportAvailable
/*******************************************************************************
** FUNCTION NAME  :  CanTp_ReceiveAndPopulateData
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static VTP_UINT8 CanTp_ReceiveAndPopulateData(VTP_UINT8 channel)
{
    VTP_UINT8 ReturnStatus = E_NOT_OK;
    VTP_UINT8 CanTxPduId;
    RetryInfoType TpRetryInfo;

	if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
	    CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;

	    TpRetryInfo.TpDataState = TP_DATARETRY;
		TpRetryInfo.TxTpDataCnt = CanTp_CopiedDataStartIndex;
		ReturnStatus = (CanTp_Appl_TransmitCB_FuncPtr[channel].CopyTxFunc)( CanTxPduId, CanTp_TxRxMsgptr, &TpRetryInfo, &CanTp_RemainingDataSize );

	    if(BUFREQ_OK == ReturnStatus)
	    {
	        if(CANTP_LASTMSG_SF)
			{
			    CanTp_memcpy(&(CanTp_TxRxMsgptr->SduDataPtr[0]),&(CanTp_TxRxMsgptr->SduDataPtr[1]),CanTp_TxRxMsgptr->SduLength);
			    CanTp_TxRxMsgptr->SduDataPtr[0] =  CanTp_TxRxMsgptr->SduLength;
			}
			else if(CANTP_LASTMSG_FF)
			{
			    CanTp_memcpy(&(CanTp_TxRxMsgptr->SduDataPtr[0]),&(CanTp_TxRxMsgptr->SduDataPtr[2]),CanTp_TxRxMsgptr->SduLength);
			    CanTp_TxRxMsgptr->SduDataPtr[0] =  ((VTP_UINT8)CANTP_FF_CONTROL + (VTP_UINT8)(CanTp_TxRxMsgptr->SduLength >> 8));
		        CanTp_TxRxMsgptr->SduDataPtr[1] =  (VTP_UINT8) (CanTp_TxRxMsgptr->SduLength);
			}
	        else if(CANTP_LASTMSG_CF)
			{
			    CanTp_memcpy(&(CanTp_TxRxMsgptr->SduDataPtr[0]),&(CanTp_TxRxMsgptr->SduDataPtr[1]),CanTp_TxRxMsgptr->SduLength);
			    CanTp_TxRxMsgptr->SduDataPtr[0] =  ((VTP_UINT8)0x20 + CanTp_status.SeqNum);
			}
			#if (VTP_FC_SUPPORT == VTP_YES)

			else if(CANTP_LASTMSG_FC)
			{
			    CanTp_SendFC(channel);
			}
			#endif

			else
			{
			}
		}
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
		#endif
	}

    return(ReturnStatus);
}

#endif


/*******************************************************************************
** FUNCTION NAME  :  CanTp_Transmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
Std_ReturnType CanTp_Transmit(VTP_UINT8 CtrlId, PduIdType CanTxPduId, PduInfoType const * PduInfoPtr)
{
    VTP_UINT8 retStatus;
	VTP_UINT8 channel = CANTP_INVALID_CHANNEL;
    VTP_UINT8 ChannelIndex = 0;

#ifdef TpTransmitRetrySupportAvailable
    RetryInfoType TpRetryInfo;
#endif

	if( (CtrlId < CAN_NUMBER_OF_CHANNELS) && (PduInfoPtr != NULL) )
	{
		#if(VTP_NUM_CHANNEL_COUNT > 1)
		for(ChannelIndex = 0; ChannelIndex < VTP_NUM_CHANNEL_COUNT; ChannelIndex++)
		#endif
		{
			if( CanTxPduId == CanTp_Parameter_Config[ChannelIndex].VTPResponseHandle )
			{
			    channel = ChannelIndex;
			}
		}

		if( channel != CANTP_INVALID_CHANNEL )
		{
			if( CANTP_CHECK_INIT )
	        {
			    if( (!CANTP_TX_IN_PROGRESS) && (!CANTP_RX_IN_PROGRESS) && (PduInfoPtr->SduLength != (VTP_UINT16)0) )
			    {
			        CanTp_TxMsg.MsgHandle   =  CanTxPduId;
			        CanTp_DataCntr          =  (VTP_UINT8)0;

			        if((VTP_UINT16)CANTP_SF_MAX_LENGTH >= PduInfoPtr->SduLength)
				    {
					    CanTp_TxRxMsgptr->SduLength = PduInfoPtr->SduLength;
					}
					else
					{
					    CanTp_TxRxMsgptr->SduLength = CANTP_FF_MAX_LENGTH;
					}

			        CanTp_RemainingDataSize =  PduInfoPtr->SduLength;

#ifdef TpTransmitRetrySupportAvailable
	                TpRetryInfo.TpDataState = TP_CONFPENDING;
				    TpRetryInfo.TxTpDataCnt = 0;
			        retStatus = (CanTp_Appl_TransmitCB_FuncPtr[channel].CopyTxFunc)( (PduIdType)CanTxPduId, CanTp_TxRxMsgptr, &TpRetryInfo, (PduLengthType *)&CanTp_RemainingDataSize );
#else
	                retStatus = (CanTp_Appl_TransmitCB_FuncPtr[channel].CopyTxFunc)( (PduIdType)CanTxPduId, CanTp_TxRxMsgptr, (RetryInfoType *)NULL, (PduLengthType *)&CanTp_RemainingDataSize );
#endif

			        if((VTP_UINT8)BUFREQ_OK == retStatus)
					{
				        if(PduInfoPtr->SduLength <= (VTP_UINT16)CANTP_SF_MAX_LENGTH)
				        {
				            CanTp_TxMsg.Size    =  ((VTP_UINT8)CanTp_TxRxMsgptr->SduLength + (VTP_UINT8)1);
				            CanTp_TxMsg.Data[0] =  (VTP_UINT8)CanTp_TxRxMsgptr->SduLength;

				            CanTp_memcpy( CanTp_TxRxMsgptr->SduDataPtr, &(CanTp_TxMsg.Data[1]), (VTP_UINT8)CanTp_TxRxMsgptr->SduLength );
				            CanTp_TxRxMsgptr->SduLength = (VTP_UINT16)0;
				        }
				        else
				        {
				            CanTp_TxMsg.Size        =  (VTP_UINT8)CAN_MAX_DATA_SIZE;
				            CanTp_memcpy(&(CanTp_TxRxMsgptr->SduDataPtr[0]),&(CanTp_TxMsg.Data[2]),(VTP_UINT8)CANTP_FF_MAX_LENGTH);

				            CanTp_TxMsg.Data[0]    =  ((VTP_UINT8)CANTP_FF_CONTROL + (VTP_UINT8)(PduInfoPtr->SduLength >> 8));
				            CanTp_TxMsg.Data[1]    =  (VTP_UINT8)PduInfoPtr->SduLength;
				            CanTp_TxRxMsgptr->SduLength   -= (VTP_UINT16)CANTP_FF_MAX_LENGTH;

				            CanTp_DataCntr         += (VTP_UINT16)CANTP_FF_MAX_LENGTH;
				            CanTp_status.SeqNum    =  (VTP_UINT8) 1;

                            #if (VTP_FC_SUPPORT == VTP_YES)
				            CANTP_SET_WAIT4FC;
							#endif
				        }

		                CANTP_SET_TXINPROGRESS;
		                CANTP_SET_SENDMSG;

# if(CANDISP_TP_SUPPORT_API == STD_ON)

                        CtrlId = CanTp_Parameter_Config[channel].ControllerIDofChannel;

                        #if (VTP_PADDING_SUPPORT == VTP_YES)
						if(CanTp_Parameter_Config[channel].PaddingSupport == VTP_YES)
		                {
                            CanTp_memcpy( &CanTp_PaddedBuffer[channel][0], &(CanTp_TxRxMsgptr->SduDataPtr[0]), (VTP_UINT8)CAN_MAX_DATA_SIZE );
						}
                        #endif

                        CanTp_memcpy( &(CanTp_TxMsg.Data[0]), &(CanTp_TxRxMsgptr->SduDataPtr[0]), (VTP_UINT8)CanTp_TxMsg.Size );
						CanTp_TxRxMsgptr->SduLength = CAN_MAX_DATA_SIZE;
                        
                        retStatus = CanIf_Transmit( CtrlId, CanTxPduId, CanTp_TxRxMsgptr );
                        if(E_OK == retStatus)
                        {
#ifdef TpTransmitRetrySupportAvailable
                            CanTp_CopiedDataStartIndex = 0;
#endif
			                if(CANTP_LASTMSG_SF)
			                {
			                    CanTp_RemainingDataSize = 0;
			                }
							else
							{
	                            //CanTp_RemainingDataSize = CanTp_RemainingDataSize - CanTp_DataCntr;
							}
#endif
			                CANTP_CLEAR_SENDMSG;
	                        CANTP_START_TX_CONF_TIMER;

# if(CANDISP_TP_SUPPORT_API == STD_ON)
			            }
						else
						{
						    #ifdef CANUTIL_ENABLED
	                        CanUtil_ReportError();
	                        #endif

                            #ifndef TpTransmitRetrySupportAvailable
		                    CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
	                        #else
                            CanTp_CopiedDataStartIndex = TpRetryInfo.TxTpDataCnt;
	                        #endif

	                        retStatus = E_NOT_OK;
	                    }
#endif
					}
					else
					{
                        (CanTp_Appl_TransmitCB_FuncPtr[channel].TpTxConfirmationFunc)(CanTxPduId, E_NOT_OK);
					}

			    }
				else
				{
				    #ifdef CANUTIL_ENABLED
	                CanUtil_ReportError();
	                #endif
	                retStatus = E_NOT_OK;
				}
			}
			else
			{
			    #ifdef CANUTIL_ENABLED
	            CanUtil_ReportError();
	            #endif
	            retStatus = E_NOT_OK;
			}
		}
		else
		{
		    #ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #endif
	        retStatus = E_NOT_OK;
		}
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	    retStatus = E_NOT_OK;
	}

    return(retStatus);
}


/*******************************************************************************
** FUNCTION NAME  :  VTP_AbortTransmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_AbortTransmit(VTP_UINT8 channel)
{
    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
        CANTP_CLEAR_TXINPROGRESS;
        CANTP_CLEAR_SENDMSG;
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}


/*******************************************************************************
** FUNCTION NAME  :  CanTp_ApplCB_TxConfirm
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void CanTp_ApplCB_TxConfirm(VTP_UINT8 channel, PduIdType TxPduId, VTP_UINT8 Status)
{
    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) && (Status <= E_NOT_OK) )
	{
	    if(TxPduId == CanTp_Parameter_Config[channel].VTPResponseHandle)
	    {
	        if(Status == E_NOT_OK)
	        {
	            CanTp_Channel_Init(channel);
	        }

	        (CanTp_Appl_TransmitCB_FuncPtr[channel].TxConfirmationFunc)(TxPduId);
		}
		else
	    {
	        #ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #endif
	    }
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}


/*******************************************************************************
** FUNCTION NAME  :  CanTp_ApplCB_RxIndication
** DESCRIPTION    :  RxAckFunc
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void CanTp_ApplCB_RxIndication(VTP_UINT8 channel, PduIdType RxPduId, VTP_UINT8 Status)
{
    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) && (Status <= E_NOT_OK) )
	{
	    if( (RxPduId >= CanTp_Parameter_Config[channel].VTPStartRequestHandle) &&
		    (RxPduId <= CanTp_Parameter_Config[channel].VTPStopRequestHandle) )
		{
		    if(Status == E_NOT_OK)
	        {
	            CanTp_Channel_Init(channel);
	        }

	        (CanTp_Appl_ReceiveCB_FuncPtr[channel].RxAckFunc)(RxPduId, Status);
		}
		else
		{
		    #ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #endif
		}
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}


/*******************************************************************************
================================================================================
 P U B L I C   F U N C T I O N   C A L L B A C K S
================================================================================
*******************************************************************************/
/*******************************************************************************
** FUNCTION NAME  :  CanTp_TxConfirm
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_TxConfirm(VTP_UINT8 channel)
{
    VTP_UINT8 CanTxPduId;

    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
        CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;

#ifdef TpTransmitRetrySupportAvailable
        CanTp_TxRetryDone = VTP_FALSE;
#endif

		if(CANTP_LASTMSG_SF)
	    {
	        (CanTp_Appl_TransmitCB_FuncPtr[channel].TpTxConfirmationFunc)( CanTxPduId, E_OK );
	        CANTP_CLEAR_TXINPROGRESS;
			CANTP_SET_TX_COMPLETE;
			CANTP_CLEAR_FCRCVD;
	        CANTP_STOP_TIMER;
	    }
	    else if(CANTP_LASTMSG_FF)
	    {
	        (CanTp_Appl_TransmitCB_FuncPtr[channel].TpTxConfirmationFunc)( CanTxPduId, E_OK );

	        #if (VTP_FC_SUPPORT == VTP_YES)
	        CANTP_START_RX_FC_TIMER;
            #endif
	    }
	    else if(CANTP_LASTMSG_CF)
	    {
		    (CanTp_Appl_TransmitCB_FuncPtr[channel].TpTxConfirmationFunc)( CanTxPduId, E_OK );

	        #if (VTP_FC_SUPPORT == VTP_YES)
	        if(CANTP_WAIT4FC)
	        {
	            CANTP_START_RX_FC_TIMER;
	        }
	        else
			#endif
	        {
				 if( 0 < CanTp_RemainingDataSize )
				 {
				     if(CanTp_STmin <= CANTP_FC_MAX_VALUE)
	                 {
	                     CanTp_STminCntr = (CanTp_STmin / (VTP_UINT8)CANTP_PERIODICITY);

	                     if((CanTp_STminCntr * (VTP_UINT8)CANTP_PERIODICITY) != CanTp_STmin)
	                     {
	                         CanTp_STminCntr++;
	                     }

					     CANTP_START_TX_CF_TIMER;
	                 }
	                 else
	                 {

#if (VTP_TransmitOnINT_SUPPORT == VTP_YES)
                         CanTp_STminCntr = 0;
                         CanTp_TransmitCF(channel);
                         CANTP_START_TX_CF_TIMER;
#else
                         CanTp_STminCntr = 1;
					     CANTP_START_TX_CF_TIMER;
#endif
	                 }
				 }
				 else
				 {
	                 CANTP_SET_TX_COMPLETE;
				     CANTP_CLEAR_TXINPROGRESS;
					 CANTP_STOP_TIMER;
				 }
	        }
	    }
		#if (VTP_FC_SUPPORT == VTP_YES)
	    else if(CANTP_LASTMSG_FC)
	    {
            #if (VTP_WAITFC_SUPPORT == VTP_YES)
	        if(CanTp_FCwaitCntr > 0)
			{
			    CanTp_FCwaitCntr--;
			}
			else
            #endif
			{
	            CANTP_START_RX_CF_TIMER;
			}
	    }
		#endif
	    else
	    {
	    }

	    if(CANTP_TX_STATUS_COMPLETE)
	    {
	        CANTP_CLEAR_TX_COMPLETE;
	        CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_OK);
	    }
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}

# if(CANDISP_TP_SUPPORT_API == STD_ON)
/*******************************************************************************
** FUNCTION NAME  :  CanTp_RxIndication
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_RxIndication(VTP_UINT8 const CtrlId, PduIdType const RxPduId, CAN_RMD const * const pRmd)
{
    VTP_UINT8 channel = CANTP_INVALID_CHANNEL;
    VTP_UINT8 ChannelIndex = 0;/*Virtual TP channel index*/

    if( (CtrlId < CAN_NUMBER_OF_CHANNELS) )
	{
	    #if(VTP_NUM_CHANNEL_COUNT > 1)
	    for(; ChannelIndex < VTP_NUM_CHANNEL_COUNT; ChannelIndex++)
		#endif
		{
			if( (RxPduId >= CanTp_Parameter_Config[ChannelIndex].VTPStartRequestHandle) && (RxPduId <= CanTp_Parameter_Config[ChannelIndex].VTPStopRequestHandle) )
			{
				channel = ChannelIndex;/*Get virtual TP channel index*/
			}
	    }

	    if( channel != CANTP_INVALID_CHANNEL )
	    {
	        if( (CANTP_CHECK_INIT) && (NULL != pRmd) )
		    {
			    if( (!CANTP_FCRCVD) && (pRmd->Size == CAN_MAX_DATA_SIZE) && ( (pRmd->Data[0]) > 0 ) )
			    {
			        CanTp_ReceivedPduId = RxPduId;
			        CanTp_RxMsg.MsgHandle = RxPduId;
			        CanTp_RxMsg.Size      = pRmd->Size;

			        CanTp_memcpy(&(pRmd->Data[0]),&(CanTp_RxMsg.Data[0]),CanTp_RxMsg.Size);

			        #if (VTP_FC_SUPPORT == VTP_YES)
			        if( (CANTP_WAIT4FC) && (CANTP_MSGRCVD_FC) && ( (CanTp_Parameter_Config[ChannelIndex].VTPMessageType != CANTP_DIAG_MESSAGE) || (RxPduId != CanTp_Parameter_Config[ChannelIndex].VTPStopRequestHandle) ) )
			        {
			            CANTP_SET_FCRCVD;
			        }
			        else
					#endif
			        {
			            CanTp_Receive(channel, RxPduId);
			        }
			    }
			}
			else
		    {
		        #ifdef CANUTIL_ENABLED
	            CanUtil_ReportError();
	            #endif
		    }
		}
		else
		{
			#ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #endif
		}
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}


/*******************************************************************************
** FUNCTION NAME  :  CanTp_TxConfirmation
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_TxConfirmation(VTP_UINT8 const CtrlId, PduIdType const TxPduId)
{
    VTP_UINT8 channel = CANTP_INVALID_CHANNEL;
    VTP_UINT8 ChannelIndex = 0;

    if( (CtrlId < CAN_NUMBER_OF_CHANNELS) )
	{
	    #if(VTP_NUM_CHANNEL_COUNT > 1)
	    for(; ChannelIndex < VTP_NUM_CHANNEL_COUNT; ChannelIndex++)
		#endif
		{
			if( TxPduId == CanTp_Parameter_Config[ChannelIndex].VTPResponseHandle )
			{
				channel = ChannelIndex;
			}
		}

	    if( channel != CANTP_INVALID_CHANNEL )
		{
	        if(CANTP_CHECK_INIT)
		    {
			    CanTp_TxConfirm(channel);
			}
			else
		    {
		        #ifdef CANUTIL_ENABLED
	            CanUtil_ReportError();
	            #endif
		    }
		}
		else
		{
		    #ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #endif
		}
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}

#endif

/*******************************************************************************
================================================================================
 P R I V A T E   F U N C T I O N S
================================================================================
*******************************************************************************/

#if (VTP_FC_SUPPORT == VTP_YES)
/*******************************************************************************
** FUNCTION NAME  :  CanTp_Wait4FC
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void CanTp_Wait4FC(VTP_UINT8 channel)
{
    VTP_UINT8 CanTxPduId;

    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
	    if(CANTP_WAIT4FC && CANTP_FCRCVD)
	    {
	        if(CANTP_FCCTS)
	        {
	            if(CANTP_LASTMSG_FF)
	            {
                    #if (VTP_WAITFC_SUPPORT == VTP_YES)

                    if(CanTp_Parameter_Config[channel].FlowControlSupport == VTP_YES)
					{
	                    CanTp_FCwaitCntr = 0;
					}
                    #endif

	                CanTp_BlockSize = CanTp_RxMsg.Data[1];
                    CanTp_STmin = (CanTp_RxMsg.Data[2] + 1);
                    CanTp_STminCntr = 0x02; /* min time */
	            }

	            CANTP_CLEAR_WAIT4FC;
	            CANTP_START_TX_CF_TIMER;
	        }
	        else if(CANTP_FCWAIT)
	        {

                #if (VTP_WAITFC_SUPPORT == VTP_YES)

	            CanTp_FCwaitCntr++;

	            if(CanTp_Receive_Timing_Config[channel].MaxRxWaitCount >= CanTp_FCwaitCntr)
	            {
	                CANTP_START_RX_FC_TIMER;
	            }
	            else
	            {
	                CanTp_FCwaitCntr = 0;
	                CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;
	                CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
	            }

                #else

				CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;
	            CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
              
                #endif
	        }
	        else
	        {
	            if(CANTP_TIMER_XPIRED)
	            {
	                CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;
	                CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
	            }
	        }

	        CANTP_CLEAR_FCRCVD;
	    }
	    else
	    {
	        if(CANTP_TIMER_XPIRED)
	        {
	            CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;
	            CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
	        }
	    }
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}

#endif /* (VTP_FC_SUPPORT == VTP_YES) */


/*******************************************************************************
** FUNCTION NAME  :  CanTp_TransmitCF
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void CanTp_TransmitCF(VTP_UINT8 channel)
{
    VTP_UINT8 CtrlId;
    VTP_UINT8 CanTxPduId;
    VTP_UINT8 ReturnStatus;

#ifdef TpTransmitRetrySupportAvailable
    RetryInfoType TpRetryInfo;
#endif

    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
	    if((VTP_UINT8)0 != CanTp_STminCntr)
	    {
	        CanTp_STminCntr--;
	    }

	    if((VTP_UINT8)0 == CanTp_STminCntr)
	    {
            /* STmin should be processed across CFs only */
            if(CanTp_STmin < 0x7F)
            {
                CanTp_STminCntr = (CanTp_STmin / (VTP_UINT8)CANTP_PERIODICITY);
            }
            else
            {
                CanTp_STminCntr = 1;
            }

            if((CanTp_STminCntr * (VTP_UINT8)CANTP_PERIODICITY) != CanTp_STmin)
            {
                CanTp_STminCntr++;
            }
            
	        CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;
	        CanTp_TxMsg.Data[0] =  ((VTP_UINT8)CANTP_CF_CONTROL + CanTp_status.SeqNum);
			CanTp_TxMsg.MsgHandle   = CanTxPduId;

            if((VTP_UINT8)CANTP_CF_MAX_LENGTH > CanTp_RemainingDataSize)
		    {
			    CanTp_TxRxMsgptr->SduLength = CanTp_RemainingDataSize;
			}
			else
			{
			    CanTp_TxRxMsgptr->SduLength = CANTP_CF_MAX_LENGTH;
			}

			CanTp_TxMsg.Size = CanTp_TxRxMsgptr->SduLength;

#ifdef TpTransmitRetrySupportAvailable
	        TpRetryInfo.TpDataState = TP_CONFPENDING;
		    TpRetryInfo.TxTpDataCnt = 0;
			ReturnStatus = (CanTp_Appl_TransmitCB_FuncPtr[channel].CopyTxFunc)( (PduIdType)CanTxPduId, CanTp_TxRxMsgptr, &TpRetryInfo, (PduLengthType *)&CanTp_RemainingDataSize );
#else
	        ReturnStatus = (CanTp_Appl_TransmitCB_FuncPtr[channel].CopyTxFunc)( (PduIdType)CanTxPduId, CanTp_TxRxMsgptr, (RetryInfoType *)NULL, (PduLengthType *)&CanTp_RemainingDataSize );
#endif

			if(BUFREQ_OK == ReturnStatus)
		    {
		        if(CanTp_TxRxMsgptr->SduLength < (VTP_UINT8)CANTP_CF_MAX_LENGTH)
		        {
		            CanTp_TxMsg.Size    =  ((VTP_UINT8)CanTp_TxRxMsgptr->SduLength + (VTP_UINT8)1);
		            CanTp_memcpy(&(CanTp_TxRxMsgptr->SduDataPtr[0]),&(CanTp_TxMsg.Data[1]),CanTp_TxMsg.Size);
                    CanTp_DataCntr += CanTp_TxRxMsgptr->SduLength;

		            CANTP_CLEAR_TXINPROGRESS;
		            CANTP_CLEAR_FCRCVD;
		        }
		        else
		        {
		            CanTp_TxMsg.Size = (VTP_UINT8)CAN_MAX_DATA_SIZE;
		            CanTp_memcpy(&(CanTp_TxRxMsgptr->SduDataPtr[0]),&(CanTp_TxMsg.Data[1]),(VTP_UINT8)CANTP_CF_MAX_LENGTH);
		            CanTp_DataCntr += (VTP_UINT16)CANTP_CF_MAX_LENGTH;

		            if(CanTp_status.SeqNum < CANTP_CF_MAX_SEQNUM)
					{
		                CanTp_status.SeqNum++;
					}
					else
					{
					    CanTp_status.SeqNum = CANTP_CF_RSTRT_SEQNUM;
					}
		        }

                CANTP_SET_SENDMSG;

# if(CANDISP_TP_SUPPORT_API == STD_ON)
	            CtrlId = CanTp_Parameter_Config[channel].ControllerIDofChannel;
            
                #if (VTP_PADDING_SUPPORT == VTP_YES)
				if(CanTp_Parameter_Config[channel].PaddingSupport == VTP_YES)
		        {
                    CanTp_memcpy( &CanTp_PaddedBuffer[channel][0], CanTp_TxRxMsgptr->SduDataPtr, (VTP_UINT8)CAN_MAX_DATA_SIZE );
                }
				#endif

                CanTp_memcpy( &(CanTp_TxMsg.Data[0]), CanTp_TxRxMsgptr->SduDataPtr, (VTP_UINT8)CanTp_TxMsg.Size );
				CanTp_TxRxMsgptr->SduLength = CAN_MAX_DATA_SIZE;
	            ReturnStatus = CanIf_Transmit(CtrlId, CanTxPduId, CanTp_TxRxMsgptr);

	            if(E_OK == ReturnStatus)
#endif
	            {
				    CANTP_CLEAR_SENDMSG;

                    #if (VTP_FC_SUPPORT == VTP_YES)
					if(((VTP_UINT8)0 != CanTp_BlockSize) && (CANTP_TX_IN_PROGRESS))
		            {
			            CanTp_BlockSize--;
			            if((VTP_UINT8)0 == CanTp_BlockSize)
			            {
			                CANTP_SET_WAIT4FC;
			            }
			        }
                    #endif

		            CANTP_START_TX_CONF_TIMER;
		        }
# if(CANDISP_TP_SUPPORT_API == STD_ON)
				else
				{
                    #ifndef TpTransmitRetrySupportAvailable
		            CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
	                #else
                    CanTp_CopiedDataStartIndex = TpRetryInfo.TxTpDataCnt;
	                #endif
				}
#endif
			}
			else
			{
			    #ifdef CANUTIL_ENABLED
	            CanUtil_ReportError();
	            #endif
			}
	    }
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}


/*******************************************************************************
** FUNCTION NAME  :  CanTp_memcpy
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void CanTp_memcpy(VTP_UINT8 const *src,VTP_UINT8 *dst,VTP_UINT8 size)
{
    if( ( NULL != src ) && ( NULL != dst ) && ( 0 != size ) )
    {
        for(;size > 0;size--)
	    {
	        *dst = *src;
	        dst++;
	        src++;
	    }
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}


/*******************************************************************************
** FUNCTION NAME  :  CanTp_Receive
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void CanTp_Receive(VTP_UINT8 channel, VTP_UINT8 RxPduId)
{
    VTP_UINT8 ret = E_NOT_OK;
	PduLengthType MaxRxBufferSize = 0; /*Coverity fix*/
	PduInfoType TpPdu;
    CAN_UINT8 RxIndicationReqd = VTP_TRUE;
    CAN_UINT8 TpTemp[CAN_MAX_DATA_SIZE];

#if(VTP_PADDING_SUPPORT	== VTP_YES)
    VTP_UINT8 ByteIndex;
    VTP_UINT8 ValidPadding = VTP_TRUE;
#endif

	if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
	    if( (RxPduId >= CanTp_Parameter_Config[channel].VTPStartRequestHandle) &&
		    (RxPduId <= CanTp_Parameter_Config[channel].VTPStopRequestHandle) )
		{
		    if( CanTp_RxMsg.Size == CAN_MAX_DATA_SIZE )
		    {
			    if(CANTP_MSGRCVD_SF)
			    {
			        if(CANTP_RX_IN_PROGRESS)
			        {
			            CanTp_ApplCB_RxIndication(channel, RxPduId, ret);
			        }

			        if( CanTp_RxMsg.Size > CanTp_RxMsg.Data[CANTP_SF_FC_DL_BYTE] )
			        {
	                    TpPdu.SduDataPtr = TpTemp;
	                    CanTp_memcpy( &(CanTp_RxMsg.Data[1]), &(TpPdu.SduDataPtr[0]), CAN_MAX_DATA_SIZE );
                        TpPdu.SduLength = CanTp_RxMsg.Data[CANTP_SF_FC_DL_BYTE];
	                    ret = (VTP_UINT8)(CanTp_Appl_ReceiveCB_FuncPtr[channel].StartOfRxFunc)( RxPduId, &TpPdu, CanTp_RxMsg.Data[CANTP_SF_FC_DL_BYTE], &MaxRxBufferSize );

	                    if( (VTP_UINT8)BUFREQ_OK == ret )
			            {
			                CanTp_TxRxMsgptr->SduLength = CanTp_RxMsg.Data[CANTP_SF_FC_DL_BYTE];
			                CanTp_memcpy( &(CanTp_RxMsg.Data[1]), &(CanTp_TxRxMsgptr->SduDataPtr[0]), CanTp_TxRxMsgptr->SduLength );

			                if(0 != MaxRxBufferSize)
	                        {
		                        if( BUFREQ_OK != (CanTp_Appl_ReceiveCB_FuncPtr[channel].CopyRxFunc)( RxPduId, CanTp_TxRxMsgptr, &MaxRxBufferSize ) )
		                        {
		                            #ifdef CANUTIL_ENABLED
		                            CanUtil_ReportError();
		                            #endif

                                    ret = E_NOT_OK;
		                        }
								else
								{
			                        CANTP_SET_RX_COMPLETE;
									ret = E_OK;
								}
			            	}
							else
		                    {
		                        #ifdef CANUTIL_ENABLED
		                        CanUtil_ReportError();
		                        #endif

                                ret = E_NOT_OK;
		                    }
			            }
						else if( (VTP_UINT8)BUFREQ_FILLNR == ret )
						{
						    RxIndicationReqd = VTP_FALSE;
							ret = E_NOT_OK;
						}
						else
						{
						    RxIndicationReqd = VTP_FALSE;

						    #ifdef CANUTIL_ENABLED
		                    CanUtil_ReportError();
		                    #endif

                            ret = E_NOT_OK;
						}

			            if(RxIndicationReqd == VTP_TRUE)
						{
							#if(VTP_PADDING_SUPPORT	== VTP_YES)

			                if(CanTp_Parameter_Config[channel].PaddingSupport == VTP_YES)
							{
			                    for(ByteIndex = (TpPdu.SduLength + 1); ByteIndex < CAN_MAX_DATA_SIZE; ByteIndex++)
							    {
							        if(CanTp_RxMsg.Data[ByteIndex] != CanTp_Parameter_Config[channel].PaddingValue)
								    {
								        //ValidPadding = VTP_FALSE;//jchen57
									    //break;
								    }
							    }
							}

			                if(ValidPadding != VTP_FALSE)
							{
			                #endif
			                    CanTp_ApplCB_RxIndication(channel, RxPduId, ret);
							#if(VTP_PADDING_SUPPORT	== VTP_YES)
					        }
							else
							{
							    #if(VTP_INVALIDFRAME_NOTIFY == VTP_YES)
							    if(CanTp_Appl_ReceiveCB_FuncPtr[channel].InvRxDataFunc != NULL)
								{
							        (CanTp_Appl_ReceiveCB_FuncPtr[channel].InvRxDataFunc)(RxPduId);
								}
                                #endif
							}
							#endif
						}

			        }
			    }
			    else if(CANTP_MSGRCVD_FF)
			    {
			        if(CANTP_RX_IN_PROGRESS)
			        {
			            CanTp_ApplCB_RxIndication(channel, RxPduId, ret);
			        }

			        if( (CanTp_RxMsg.MsgHandle == RxPduId) && ( (CanTp_Parameter_Config[channel].VTPMessageType != CANTP_DIAG_MESSAGE) || (RxPduId != CanTp_Parameter_Config[channel].VTPStopRequestHandle) ) )
			        {
			            CanTp_DataCntr   = (VTP_UINT16)(CanTp_RxMsg.Data[CANTP_FF_DL_IBYTE] & CANTP_FF_BYTE0LEN_MASK);
			            CanTp_DataCntr <<= 8;
			            CanTp_DataCntr  += (VTP_UINT16)CanTp_RxMsg.Data[CANTP_FF_DL_IIBYTE];

			            if( CanTp_DataCntr > (VTP_UINT16)CANTP_SF_MAX_LENGTH )
			            {
		                    ret = (CanTp_Appl_ReceiveCB_FuncPtr[channel].StartOfRxFunc)( RxPduId, CanTp_TxRxMsgptr, CanTp_DataCntr, &MaxRxBufferSize );
		                    if(BUFREQ_OK == ret)
				            {
				                if( 0 != MaxRxBufferSize )
		                        {
			                        CanTp_TxRxMsgptr->SduLength = CANTP_FF_MAX_LENGTH;
									CanTp_memcpy( &(CanTp_RxMsg.Data[2]), &(CanTp_TxRxMsgptr->SduDataPtr[0]), CanTp_TxRxMsgptr->SduLength );

			                        if( BUFREQ_OK != (CanTp_Appl_ReceiveCB_FuncPtr[channel].CopyRxFunc)( RxPduId, CanTp_TxRxMsgptr, &MaxRxBufferSize ) )
			                        {
			                            #ifdef CANUTIL_ENABLED
			                            CanUtil_ReportError();
			                            #endif
			                        }
									else
									{
				                        #if(VTP_FC_SUPPORT == VTP_YES)
								        if( CanTp_Parameter_Config[channel].FlowControlSupport == VTP_YES )
										{
				                            CanTp_BlockSize = (VTP_UINT8)1;
										    CANTP_SET_FC_CTS;
				                            CanTp_SendFC(channel);
                                            CanTp_BlockSize = CanTp_Transmit_Timing_Config[channel].TxFCConfig.BlockSize;
										}
		                                #endif

				                        CanTp_DataCntr -= (VTP_UINT16)CANTP_FF_MAX_LENGTH;
				                        CanTp_status.SeqNum = (VTP_UINT8)0;
				                        CANTP_SET_RXINPROGRESS;
									}
				            	}
								else
			                    {
			                        #ifdef CANUTIL_ENABLED
			                        CanUtil_ReportError();
			                        #endif
			                    }
				            }
							else if( (VTP_UINT8)BUFREQ_E_BUSY == ret )
						    {
							    #if (VTP_WAITFC_SUPPORT == VTP_YES)
	                            if(CanTp_Transmit_Timing_Config[channel].MaxTxWaitCount > 0)
								{
								    CanTp_FCwaitCntr = CanTp_Transmit_Timing_Config[channel].MaxTxWaitCount;
								    CanTp_SetFC_Wait(channel);
	                                CanTp_BlockSize = (VTP_UINT8)1;
					                CanTp_SendFC(channel);
								}
							    #else

							    #ifdef CANUTIL_ENABLED
			                    CanUtil_ReportError();
			                    #endif

	                            #endif
						    }
							else if(BUFREQ_E_OVFL == ret)
							{
							    #if(VTP_FC_SUPPORT == VTP_YES)
								if( CanTp_Parameter_Config[channel].FlowControlSupport == VTP_YES )
								{
							        CanTp_SetFC_Overflow(channel);
                                    CanTp_BlockSize = (VTP_UINT8)1;
				                    CanTp_SendFC(channel);
                                }
								#endif

							    #ifdef CANUTIL_ENABLED
			                    CanUtil_ReportError();
			                    #endif
							}
							else
							{
							    #ifdef CANUTIL_ENABLED
			                    CanUtil_ReportError();
			                    #endif
							}
			            }
			        }
					else
					{
					    #ifdef CANUTIL_ENABLED
			            CanUtil_ReportError();
			            #endif
					}
			    }
			    else if(CANTP_MSGRCVD_CF)
			    {
			        if(CANTP_RX_IN_PROGRESS)
			        {
		                if(CanTp_status.SeqNum < CANTP_CF_MAX_SEQNUM)
						{
		                    CanTp_status.SeqNum++;
						}
						else
						{
						    CanTp_status.SeqNum = CANTP_CF_RSTRT_SEQNUM;
						}

	                    if(CanTp_status.SeqNum == (CanTp_RxMsg.Data[0] & (VTP_UINT8)CANTP_FF_CF_BYTE0LEN_MASK))
	                    {
	                        if((VTP_UINT8)CANTP_CF_MAX_LENGTH >= CanTp_DataCntr)
		                    {
	                            CanTp_TxRxMsgptr->SduLength = CanTp_DataCntr;
							}
							else
							{
							    CanTp_TxRxMsgptr->SduLength = CANTP_CF_MAX_LENGTH;
							}

				            CanTp_memcpy( &(CanTp_RxMsg.Data[1]), &(CanTp_TxRxMsgptr->SduDataPtr[0]), CanTp_TxRxMsgptr->SduLength );

	                        if( BUFREQ_OK != (CanTp_Appl_ReceiveCB_FuncPtr[channel].CopyRxFunc)( RxPduId, CanTp_TxRxMsgptr, &MaxRxBufferSize ) )
	                        {
	                            #ifdef CANUTIL_ENABLED
	                            CanUtil_ReportError();
	                            #endif

                                ret = E_NOT_OK;
	                        }
							else
							{
		                        if((VTP_UINT8)CANTP_CF_MAX_LENGTH >= CanTp_DataCntr)
		                        {
		                        	RxIndicationReqd = VTP_TRUE;
		                            CANTP_SET_RX_COMPLETE;
									CanTp_DataCntr = (VTP_UINT16)0;
                                    CANTP_CLEAR_RXINPROGRESS;
								}
								else
								{
									RxIndicationReqd = VTP_FALSE;
								    CanTp_DataCntr -= CANTP_CF_MAX_LENGTH;

                                    #if(VTP_FC_SUPPORT == VTP_YES)

								    if( (CanTp_Parameter_Config[channel].FlowControlSupport == VTP_YES) &&
								        ((CanTp_Transmit_Timing_Config[channel].TxFCConfig.BlockSize) > 0) )
									{
			                            CanTp_BlockSize--;

									    if(CanTp_BlockSize == 0)
										{
									        CANTP_SET_FC_CTS;
											CanTp_BlockSize = 1;
			                                CanTp_SendFC(channel);
										}
									}
			                        #endif
								}

								ret = E_OK;
							}
				        }
					    else
						{
							RxIndicationReqd = VTP_FALSE;

							#ifdef CANUTIL_ENABLED
			                CanUtil_ReportError();
			                #endif

                            ret = E_NOT_OK;
						}
		            }
		            else
		            {
		                RxIndicationReqd = VTP_FALSE;

		                #ifdef CANUTIL_ENABLED
			            CanUtil_ReportError();
			            #endif

                        ret = E_NOT_OK;
		            }

		            if(RxIndicationReqd == VTP_TRUE)
					{
		                #if(VTP_PADDING_SUPPORT	== VTP_YES)

			            if(CanTp_Parameter_Config[channel].PaddingSupport == VTP_YES)
						{
			                for(ByteIndex = (CanTp_TxRxMsgptr->SduLength + 1); ByteIndex < CAN_MAX_DATA_SIZE; ByteIndex++)
						    {
							    if(CanTp_RxMsg.Data[ByteIndex] != CanTp_Parameter_Config[channel].PaddingValue)
							    {
								    //ValidPadding = VTP_FALSE;//jchen57
							        //break;
							    }
						    }
						}

			            if(ValidPadding != VTP_FALSE)
						{
			            #endif

		                    CanTp_ApplCB_RxIndication(channel, RxPduId, ret);

						#if(VTP_PADDING_SUPPORT	== VTP_YES)
					    }
					    else
					    {
					        #if(VTP_INVALIDFRAME_NOTIFY == VTP_YES)

					        if(CanTp_Appl_ReceiveCB_FuncPtr[channel].InvRxDataFunc != NULL)
						    {
							    (CanTp_Appl_ReceiveCB_FuncPtr[channel].InvRxDataFunc)(RxPduId);
							}

                            #endif
					    }
					    #endif
					}
			    }
			    else
			    {
			        #ifdef CANUTIL_ENABLED
			        CanUtil_ReportError();
			        #endif
			    }
			}
			else
		    {
		        #ifdef CANUTIL_ENABLED
		        CanUtil_ReportError();
		        #endif
		    }
		}
		else
		{
		    #ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #endif
		}
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}


#if(VTP_FC_SUPPORT == VTP_YES)
/*******************************************************************************
** FUNCTION NAME  :  CanTp_SendFC
** DESCRIPTION    :
** INPUT          :  TP channel number
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void CanTp_SendFC(VTP_UINT8 channel)
{
    VTP_UINT8 ReturnStatus;
	VTP_UINT8 CanTxPduId;
    VTP_UINT8 CtrlId;

	if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
	    if((VTP_UINT8)0 != CanTp_BlockSize)
	    {
	        CanTp_BlockSize--;

	        if((VTP_UINT8)0 == CanTp_BlockSize)
	        {
	            CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;
	            CanTp_TxMsg.MsgHandle    = CanTxPduId;
	            CanTp_TxMsg.Size         = (VTP_UINT8)0x03;
	            CanTp_TxMsg.Data[0]  = (VTP_UINT8)(CANTP_FC_CONTROL | CANTP_FC_STATUS);

                if(CANTP_FC_CTS)
				{
	                CanTp_TxMsg.Data[1]  = CanTp_Transmit_Timing_Config[channel].TxFCConfig.BlockSize;
	                CanTp_TxMsg.Data[2]  = CanTp_Transmit_Timing_Config[channel].TxFCConfig.STMin;
	                CanTp_BlockSize      = CanTp_Transmit_Timing_Config[channel].TxFCConfig.BlockSize;
				}
				else
				{
				    CanTp_TxMsg.Data[1]  = 0;
	                CanTp_TxMsg.Data[2]  = 0;
				}

	            CANTP_SET_SENDMSG;

                CtrlId = CanTp_Parameter_Config[channel].ControllerIDofChannel;
                CanTxPduId = CanTp_Parameter_Config[channel].VTPResponseHandle;

                #if (VTP_PADDING_SUPPORT == VTP_YES)
				if(CanTp_Parameter_Config[channel].PaddingSupport == VTP_YES)
		        {
                    CanTp_memcpy( &CanTp_PaddedBuffer[channel][0], CanTp_TxRxMsgptr->SduDataPtr, (VTP_UINT8)CAN_MAX_DATA_SIZE );
				}
				#endif

                CanTp_memcpy(&(CanTp_TxMsg.Data[0]), &(CanTp_TxRxMsgptr->SduDataPtr[0]), (VTP_UINT8)CanTp_TxMsg.Size);
                CanTp_TxRxMsgptr->SduLength = CAN_MAX_DATA_SIZE;
                ReturnStatus = CanIf_Transmit( CtrlId, CanTxPduId, CanTp_TxRxMsgptr );

                if(E_OK == ReturnStatus)
                {
                    CANTP_CLEAR_SENDMSG;
	                CANTP_START_TX_CONF_TIMER;
                }
				else
				{
				    CanTp_ApplCB_TxConfirm(channel, CanTxPduId, E_NOT_OK);
				}
	        }
	    }
	    else
	    {
	        CANTP_START_RX_CF_TIMER;
	    }
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}

#endif /* (VTP_FC_SUPPORT == VTP_YES) */


#if(VTP_FC_SUPPORT == VTP_YES)
/*******************************************************************************
** FUNCTION NAME  :  CanTp_SetFC_Overflow
** DESCRIPTION    :
** INPUT          :  TP channel number
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_SetFC_Overflow(VTP_UINT8 channel)
{
    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
        CANTP_SET_FC_OVERFLOW;
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}

#endif /* (VTP_FC_SUPPORT == VTP_YES) */


#if(VTP_FC_SUPPORT == VTP_YES)

#if (VTP_WAITFC_SUPPORT == VTP_YES)
/*******************************************************************************
** FUNCTION NAME  :  CanTp_SetFC_Wait
** DESCRIPTION    :
** INPUT          :  TP channel number
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void CanTp_SetFC_Wait(VTP_UINT8 channel)
{
    if( (CANTP_CHECK_INIT) && (channel < VTP_NUM_CHANNEL_COUNT) )
	{
        CANTP_SET_FC_WAIT;
	}
	else
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
	    #endif
	}
}

#endif /* (VTP_WAITFC_SUPPORT == VTP_YES) */

#endif /* (VTP_FC_SUPPORT == VTP_YES) */

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

