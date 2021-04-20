/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2007.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**   its rights under all copyright laws to protect this work as a published
**   work, when appropriate.  Those having access to this work may not copy it,
**   use it, modify it or disclose the information contained in it without the
**   written authorization of Visteon Corporation.
** 
**  =========================================================================*/

/* ===========================================================================
**
**  Name:           CanDisp.c
**
**  Description:    CAN Dispatcher source file
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

# include "can_defs.h"
# include "CanIl_Util.h"
# include "Can_CSec.h"
# include "CanDisp.h"
# include "Can.h"
# include "CanSm.h"
# include "CanDisp_Par_Cfg.h"
# include "CanXcvr.h"

/* ===========================================================================
  F I L E   S C O P E   V A R I A B L E   D E C L A R A T I O N S
 =========================================================================*/
#if (CANDISP_POLLED_CONFIRMATION_DISPATCH == STD_ON)

static CAN_UINT8 CANTransmitComplete[CAN_NUMBER_OF_CHANNELS][CAN_TXQ_SIZE];
static CAN_UINT8 CanTransmitConfirmedElement = 0;

#endif


static CanDisp_PduModeType CanDisp_PduMode[CAN_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanDisp_PduState[CAN_NUMBER_OF_CHANNELS];

static CanDisp_ControllerModeType CanDisp_ControllerMode[CAN_NUMBER_OF_CHANNELS];

static void CanDisp_SetCtrlMode( CAN_UINT8 CtrlId, CanDisp_ControllerModeType CanDispCtrlMode );

#define CANDISP_UNUSED_VAR(X)  do { if(0 == (X)){} } while(0)



#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)
/******************************************************************************************/
/**************** CAN Transmit and Receive Queue Interfaces and Structures*****************/
/******************************************************************************************/

#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)
static void CanRxqInit( CAN_HWINST hwInst );
static void CanDisp_ReceiveQueue( CAN_HWINST hwInst, CAN_RMD * pRmd );
static void CanDisp_ReceiveDeQueue( CAN_HWINST hwInst, CAN_RMD * pRmd );
static CAN_UINT8 CanDispGetRxQueueStatus( CAN_HWINST hwInst );
static CAN_RMD CanChannel0RxQ[CAN_RXQ_SIZE];
static CAN_UINT8 CanNumOfRxQElements[CAN_NUMBER_OF_CHANNELS];
static CanQPtrStruct CanRxQIndex[CAN_NUMBER_OF_CHANNELS];
#endif

static void CanTxqInit( CAN_HWINST hwInst );
static void CanDisp_TransmitQueue( CAN_HWINST hwInst, CAN_TMD * pTmd );
static void CanDisp_TransmitDeQueue( CAN_HWINST hwInst, CAN_TMD * pTmd );
static CAN_UINT8 CanDispGetTxQueueStatus( CAN_HWINST hwInst );
static CAN_TMD CanChannel0TxQ[CAN_TXQ_SIZE];
static CAN_TMD CanChannel1TxQ[CAN_TXQ_SIZE];

static CAN_UINT8 CanNumOfTxQElements[CAN_NUMBER_OF_CHANNELS];
static CanQPtrStruct CanTxQIndex[CAN_NUMBER_OF_CHANNELS];

/* CAN Transmit Queue pointer for each channel */
static CAN_TMD * const pCanTxQ[CAN_NUMBER_OF_CHANNELS] =
{
    (CAN_TMD * ) &CanChannel0TxQ[0]

#if (CAN_NUMBER_OF_CHANNELS > 1)

	, (CAN_TMD * ) &CanChannel1TxQ[0]

#endif

#if (CAN_NUMBER_OF_CHANNELS > 2)

	, (CAN_TMD * ) &CanChannel2TxQ[0]

#endif

#if (CAN_NUMBER_OF_CHANNELS > 3)

	, (CAN_TMD * ) &CanChannel3TxQ[0]

#endif

};


/* CAN Receive Queue pointer for each channel */
#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)
static CAN_RMD * const pCanRxQ[CAN_NUMBER_OF_CHANNELS] = 
{
    (CAN_RMD * ) &CanChannel0RxQ[0]

#if (CAN_NUMBER_OF_CHANNELS > 1)

	, (CAN_RMD * ) &CanChannel1RxQ[0]

#endif

#if (CAN_NUMBER_OF_CHANNELS > 2)

	, (CAN_RMD * ) &CanChannel2RxQ[0]

#endif

#if (CAN_NUMBER_OF_CHANNELS > 3)

	, (CAN_RMD * ) &CanChannel3RxQ[0]

#endif

};
#endif

static CAN_UINT8 Can_Channel_Txq_Size[CAN_NUMBER_OF_CHANNELS] = 
{
	(CAN_UINT8) CAN_TXQ_SIZE

#if (CAN_NUMBER_OF_CHANNELS > 1)

		, (CAN_UINT8) CAN_TXQ_SIZE

#endif

#if (CAN_NUMBER_OF_CHANNELS > 2)

		, (CAN_UINT8) CAN_TXQ_SIZE

#endif

#if (CAN_NUMBER_OF_CHANNELS > 3)

		, (CAN_UINT8) CAN_TXQ_SIZE

#endif
};

#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

static CAN_UINT8 Can_Channel_Rxq_Size[CAN_NUMBER_OF_CHANNELS] = 
{
	(CAN_UINT8) CAN_RXQ_SIZE

#if (CAN_NUMBER_OF_CHANNELS > 1)

		, (CAN_UINT8) CAN_RXQ_SIZE

#endif

#if (CAN_NUMBER_OF_CHANNELS > 2)

		, (CAN_UINT8) CAN_RXQ_SIZE

#endif

#if (CAN_NUMBER_OF_CHANNELS > 3)

		, (CAN_UINT8) CAN_RXQ_SIZE

#endif
};

#endif /* CANDISP_POLLED_RECEIVE_DISPATCH */

#endif /* CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT */


/* ===========================================================================

 Name:            CanIf_InitMemory

 =========================================================================*/
/* void CanIf_InitMemory(void); */
FUNC(void, CANDISP_CODE) CanIf_InitMemory(void)
{
   CAN_HWINST CanChannelIndex = 0;

#if (CANDISP_POLLED_CONFIRMATION_DISPATCH == STD_ON)

   CAN_UINT8 CanTxCompleteBufferIndex = 0;

   CanTransmitConfirmedElement = 0;

#endif

   for( CanChannelIndex = 0; CanChannelIndex < CAN_NUMBER_OF_CHANNELS; CanChannelIndex++ )
   {
	   CanDisp_PduState[CanChannelIndex] = 0;  /* CANB_TXOFFLINE | CANB_RXOFFLINE */

	   CanDisp_PduMode[CanChannelIndex] = CANDISP_OFFLINE;

	   CanDisp_ControllerMode[CanChannelIndex] = CANDISP_CS_STOPPED;

#if (CANDISP_POLLED_CONFIRMATION_DISPATCH == STD_ON)
	   
	   for( CanTxCompleteBufferIndex = 0; CanTxCompleteBufferIndex < CAN_TXQ_SIZE; CanTxCompleteBufferIndex++ )
	   {
	       CANTransmitComplete[CanChannelIndex][CanTxCompleteBufferIndex] = CAN_INVALID_HANDLE;
	   }

#endif
   }

#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

   CanTxqInit(CAN_CHANNEL_ALL);


#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)
   CanRxqInit(CAN_CHANNEL_ALL);
#endif

#endif


}


/* ===========================================================================

 Name:            CanIf_Init

 Description:     Set Signal Value in the Specified Transmit CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 =========================================================================*/
/* void CanIf_Init(const CanDisp_ConfigType *ConfigPtr) */
FUNC(void, CANDISP_CODE) CanIf_Init( P2CONST(CanDisp_ConfigType, AUTOMATIC, CANDISP_XCFG) ConfigPtr)
{
    CanIf_InitMemory();
}


#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)
/* ===========================================================================

 Name:            CanTxqInit

 Description:     CAN Transmit Queue initialization

 Inputs:          Nothing

 Returns:         Nothing

 =========================================================================*/
static void CanTxqInit( CAN_HWINST hwInst )
{

    CAN_UINT8 CanTxqIndex = 0;

	CAN_UINT8 CanChannelIndex = 0;

	CAN_TMD * pTmdQ = NULL;

    CAN_UINT8 FuncExecSt = E_OK;


    if( (uint8) CAN_NUMBER_OF_CHANNELS < hwInst )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(FuncExecSt != E_NOT_OK)
	{
	    if( CAN_CHANNEL_ALL > hwInst )
		{
		    CanChannelIndex = hwInst;
		}

		#if (CAN_NUMBER_OF_CHANNELS > 1)
		do
		{
		#endif

	        CanNumOfTxQElements[CanChannelIndex] = 0;

	        pTmdQ = pCanTxQ[CanChannelIndex];

			CanTxQIndex[CanChannelIndex].CanQueueFrontIndex = 0;
	     	CanTxQIndex[CanChannelIndex].CanQueueRearIndex = 0;

		    for(CanTxqIndex = 0; CanTxqIndex < Can_Channel_Txq_Size[CanChannelIndex]; CanTxqIndex++)
		    {
		        pTmdQ[CanTxqIndex].Identifier.I32 = (CAN_UINT32)0;
				pTmdQ[CanTxqIndex].MsgHandle      = (CAN_TMH)0xFF;
				pTmdQ[CanTxqIndex].Options        = (CAN_UINT8)0xFF;
				pTmdQ[CanTxqIndex].Size           = (CAN_UINT8)0;
				pTmdQ[CanTxqIndex].pData          = NULL;
			}

	    #if (CAN_NUMBER_OF_CHANNELS > 1)

	        if( CAN_CHANNEL_ALL == hwInst )
	        {
	            CanChannelIndex++;
			}

		} while( (CAN_CHANNEL_ALL == hwInst) && (CanChannelIndex < CAN_NUMBER_OF_CHANNELS) );

		#endif
	}

}


#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)
/* ===========================================================================

 Name:            CanRxqInit

 Description:     CAN Receive Queue initialization

 Inputs:          Nothing

 Returns:         Nothing

 =========================================================================*/
static void CanRxqInit( CAN_HWINST hwInst )
{
    CAN_UINT8 CanRxqIndex = 0;

	CAN_UINT8 CanChannelIndex = 0;

    CAN_UINT8 ByteIndex = 0;

	CAN_RMD * pRmdQ = NULL;

    CAN_UINT8 FuncExecSt = E_OK;

    
    if( (uint8) CAN_NUMBER_OF_CHANNELS < hwInst )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(FuncExecSt != E_NOT_OK)
	{

	    if( CAN_CHANNEL_ALL > hwInst )
		{
		    CanChannelIndex = hwInst;
		}

		#if (CAN_NUMBER_OF_CHANNELS > 1)
		do
		{
		#endif

	        CanNumOfRxQElements[CanChannelIndex] = 0;
	        
	        pRmdQ = pCanRxQ[CanChannelIndex];

			CanRxQIndex[CanChannelIndex].CanQueueFrontIndex = 0;
	     	CanRxQIndex[CanChannelIndex].CanQueueRearIndex = 0;

		    for(CanRxqIndex = 0; CanRxqIndex < Can_Channel_Rxq_Size[CanChannelIndex]; CanRxqIndex++)
		    {
		        pRmdQ[CanRxqIndex].Identifier.I32 = (CAN_UINT32)0;
				pRmdQ[CanRxqIndex].Vector     = (CAN_TMH)0xFF;
				pRmdQ[CanRxqIndex].Qualifiers = (CAN_UINT8)0xFF;
				pRmdQ[CanRxqIndex].Size       = (CAN_UINT8)0;
				
				for(ByteIndex = 0; ByteIndex < CAN_MAX_DATA_SIZE; ByteIndex++)
				{
				    pRmdQ[CanRxqIndex].Data[ByteIndex]      =  0x00;
				}
			}

		#if (CAN_NUMBER_OF_CHANNELS > 1)

	        if( CAN_CHANNEL_ALL == hwInst )
	        {
	            CanChannelIndex++;
			}

		} while( (CAN_CHANNEL_ALL == hwInst) && (CanChannelIndex < CAN_NUMBER_OF_CHANNELS) );

		#endif
	}
}

#endif


#endif   /* CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT */


/* ===========================================================================

 Name:            CanIf_Transmit

 Description:     CAN message transmit function to MCAL

 Inputs:          ControllerId: CAN Channel ID

                  CanTxPduId:  Message Handle

                  PduInfoPtr: Transmit message data pointer

 Returns:         TransmitRetValue:  Flag Indicating Transmit message Success

 =========================================================================*/
/* Std_ReturnType CanIf_Transmit(PduIdType CanTxPduId, PduInfoType *PduInfoPtr) */
Std_ReturnType CanIf_Transmit( CAN_HWINST hwInst, PduIdType CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, CANDISP_APPL_MSG_VAR)PduInfoPtr )
{
    Can_ReturnType CanWriteReturn = CAN_NOT_OK;

	Can_PduType CanPduInfo;

    CAN_TMD CanTmd;

    CanDisp_TxPduConfigType const * pCanTxPduConfig;

	CanDisp_HwHandleType TransmitHndl = 0;

    CanDisp_ControllerConfigType const * pCanDispControllerConfig;

    PduIdType CanBasicCanStartIndex = 0;

    PduIdType CanBasicCanStopIndex = 0;

	Std_ReturnType TransmitRetValue = E_OK;

    CanDisp_PduModeType PduMode = CANDISP_OFFLINE;

    CAN_UINT8 TxQStatus = 0;

    if( (uint8) CAN_NUMBER_OF_CHANNELS <= hwInst )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		TransmitRetValue = E_NOT_OK;
		#endif
	}
    
    if( (PduIdType) CanDisp_Number_Of_Tx_Messages <= CanTxPduId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		TransmitRetValue = E_NOT_OK;
		#endif
	}

    if( NULL == PduInfoPtr )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		TransmitRetValue = E_NOT_OK;
		#endif
	}

	if( E_NOT_OK != TransmitRetValue )
	{	
		if( E_OK == CanIf_GetPduMode( hwInst, &PduMode ) )
	   	{
		   	if( (CANDISP_ONLINE == PduMode) || (CANDISP_TX_ONLINE == PduMode) )
			{
				/* Point to the Tx PDU config structure to fetch the details corresponding to the message */
				pCanTxPduConfig = &CanDisp_TxPduConfig[CanTxPduId];

				CanPduInfo.id = ((pCanTxPduConfig->CanIdOfTxPduConfig) | CAN_CONTROLLER_FD_ID_FLAG); //CAN FD @jchen57

				CanPduInfo.length = PduInfoPtr->SduLength;

			    CanPduInfo.sdu = PduInfoPtr->SduDataPtr;

			    CanPduInfo.swPduHandle = CanTxPduId;


				/* Get the Hardware transmit handle of the PDU */
			    TransmitHndl = pCanTxPduConfig->HthOfTxPduConfig;

				/* Try transmitting the message by putting the data in the hardware buffer */
			    CanWriteReturn = Can_Write( TransmitHndl, &CanPduInfo );

			    /* If transmit buffer is BUSY with other frame store the message in the TxQueue for future Transmission */
			    if( CAN_BUSY == CanWriteReturn )
				{
			        pCanDispControllerConfig = &CanDisp_ControllerConfig[hwInst];

			        CanBasicCanStartIndex = pCanDispControllerConfig->TxBCStartIndexOfControllerConfig;

			        CanBasicCanStopIndex = pCanDispControllerConfig->TxBCStopIndexOfControllerConfig;

			        /* Check whether the message belong to Tx basic CAN buffers */
					if( (CanBasicCanStartIndex <= CanTxPduId) && (CanBasicCanStopIndex >= CanTxPduId) )
					{

			#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

					    TxQStatus = CanDispGetTxQueueStatus(hwInst);
					    
					    if( (TxQFULL != TxQStatus) && (TxQERROR != TxQStatus) )
			   		    {
						    CanEnterCriticalSection();
						    
						    CanTmd.Identifier.I32 = CanPduInfo.id;

				            CanTmd.MsgHandle = CanPduInfo.swPduHandle;

				            CanTmd.Options = pCanTxPduConfig->CanOptionOfTxPduConfig;

				            CanTmd.Size = CanPduInfo.length;

				            CanTmd.pData = CanPduInfo.sdu;

						    /* If so, then store the message in TxQueue */
				            CanDisp_TransmitQueue( hwInst, &CanTmd );


	                        CanExitCriticalSection();
						}
					    else
					    {
					        #ifdef CANUTIL_ENABLED
		                    CanUtil_ReportError();
			                #endif
					    }
			  #endif
					}
					else
					{
					    /* If the message does not belong to Basic CAN buffer and buffer not available */
						/* Then post an error indicating the non-availability of the hardware buffer */
					    TransmitRetValue = E_NOT_OK;
					}
				}
				else if( CAN_NOT_OK == CanWriteReturn )
				{
				    /* If the message parameters passed are not valid */
				    /* Then post an error indicating the failure */
				    TransmitRetValue = E_NOT_OK;
				}
				else
				{
				}
			}
			else
			{
			    TransmitRetValue = E_NOT_OK;
			}
		}
		else
		{
		    TransmitRetValue = E_NOT_OK;
		}
	}

    return(TransmitRetValue);
}

#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)
/* ===========================================================================

 Name:            CanDisp_ReceiveQueue

 Description:     Queue operation from MCAL indication

 Inputs:          hwInst: Channel number

                  pRmd  :  Pointer to receive buffer

 Returns:         None

 =========================================================================*/
static void CanDisp_ReceiveQueue( CAN_HWINST hwInst, CAN_RMD * pRmd )
{
    CAN_UINT8 DataIndex = 0;

    CAN_UINT8 RxQRearIndex = 0;

    CAN_RMD * CanRxqPtr = NULL;

    CAN_RMD * CanRxqElementPtr = NULL;

    CAN_UINT8 FuncExecSt = E_OK;


    if( (uint8) CAN_NUMBER_OF_CHANNELS <= hwInst )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if( NULL == pRmd )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
	
	if(FuncExecSt != E_NOT_OK)
	{
		RxQRearIndex  = CanRxQIndex[hwInst].CanQueueRearIndex;

	    CanRxqPtr = pCanRxQ[hwInst];

		CanRxqElementPtr = &CanRxqPtr[RxQRearIndex];

	    CanRxqElementPtr->Vector      =  pRmd->Vector;
	    CanRxqElementPtr->Identifier.I32  =  pRmd->Identifier.I32;
		CanRxqElementPtr->Qualifiers  =  pRmd->Qualifiers;
		CanRxqElementPtr->Size	      =  pRmd->Size;

		for( DataIndex = 0; DataIndex <	(pRmd->Size); DataIndex++)
		{
		    CanRxqElementPtr->Data[DataIndex]  =  pRmd->Data[DataIndex];
		}

	    CanNumOfRxQElements[hwInst]++;

	    if( CanNumOfRxQElements[hwInst] < CAN_RXQ_SIZE )
		{
		    if( RxQRearIndex < (CAN_RXQ_SIZE - 1) )
			{
			    CanRxQIndex[hwInst].CanQueueRearIndex++;
		    }
			else
			{
			    CanRxQIndex[hwInst].CanQueueRearIndex = 0;
			}
		}
	}
}


/* ===========================================================================

 Name:            CanDisp_ReceiveDeQueue

 Description:     DeQueue operation from Receive Queue to upper layers

 Inputs:          hwInst: Channel number

                  pRmd  :  Pointer to receive buffer

 Returns:         Nothing


 =========================================================================*/
static void CanDisp_ReceiveDeQueue( CAN_HWINST hwInst, CAN_RMD * pRmd  )
{

    CAN_UINT8 DataIndex = 0;

    CAN_UINT8 RxQFrontIndex = 0;

    CAN_RMD * CanRxqPtr = NULL;

    CAN_RMD * CanRxqElementPtr = NULL;

	CAN_UINT8 FuncExecSt = E_OK;


    if( (uint8) CAN_NUMBER_OF_CHANNELS <= hwInst )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if( NULL == pRmd )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
	
	if(FuncExecSt != E_NOT_OK)
	{
		RxQFrontIndex = CanRxQIndex[hwInst].CanQueueFrontIndex;

	    CanRxqPtr = pCanRxQ[hwInst];

		CanRxqElementPtr = &CanRxqPtr[RxQFrontIndex];

	    pRmd->Vector     = CanRxqElementPtr->Vector;
	    pRmd->Identifier.I32 = CanRxqElementPtr->Identifier.I32;
		pRmd->Qualifiers = CanRxqElementPtr->Qualifiers;
		pRmd->Size       = CanRxqElementPtr->Size;

		for( DataIndex = 0; DataIndex <	(pRmd->Size); DataIndex++)
	    {
		    pRmd->Data[DataIndex]  = CanRxqElementPtr->Data[DataIndex];
		}

	    CanNumOfRxQElements[hwInst]--;

	    if( CanNumOfRxQElements[hwInst] > 0 )
		{
		    if( RxQFrontIndex < (CAN_RXQ_SIZE - 1) )
			{
			    CanRxQIndex[hwInst].CanQueueFrontIndex++;
		    }
			else
			{
			    CanRxQIndex[hwInst].CanQueueFrontIndex = 0;
			}
		}
		else
		{
		    CanRxQIndex[hwInst].CanQueueFrontIndex = 0;
			CanRxQIndex[hwInst].CanQueueRearIndex = 0;
		}
	}
}

#endif


/* ===========================================================================

 Name:            CanDisp_TransmitQueue

 Description:     Queue operation from upper layers for message buffering for 
                  transmission

 Inputs:          hwInst: Channel number

                  pTmd  :  Pointer to transmit buffer

 Returns:         Nothing

 =========================================================================*/
static void CanDisp_TransmitQueue( CAN_HWINST hwInst, CAN_TMD * pTmd )
{

    /*CAN_UINT8 DataIndex;*/

    CAN_UINT8 TxQRearIndex = 0;

    CAN_TMD * CanTxqPtr = NULL;

    CAN_TMD * CanTxqElementPtr = NULL;

	CAN_UINT8 FuncExecSt = E_OK;


    if( (uint8) CAN_NUMBER_OF_CHANNELS <= hwInst )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if( NULL == pTmd )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
	
	if(FuncExecSt != E_NOT_OK)
	{
	    TxQRearIndex  = CanTxQIndex[hwInst].CanQueueRearIndex;

	    CanTxqPtr = pCanTxQ[hwInst];

		CanTxqElementPtr = &CanTxqPtr[TxQRearIndex];

	    CanTxqElementPtr->MsgHandle   =  pTmd->MsgHandle;
	    CanTxqElementPtr->Identifier  =  pTmd->Identifier;
		CanTxqElementPtr->Options     =  pTmd->Options;
		CanTxqElementPtr->Size	      =  pTmd->Size;

		CanTxqElementPtr->pData =  pTmd->pData;

	    CanNumOfTxQElements[hwInst]++;

	    if( CanNumOfTxQElements[hwInst] < CAN_TXQ_SIZE )
		{
		    if( TxQRearIndex < (CAN_TXQ_SIZE - 1) )
			{
			    CanTxQIndex[hwInst].CanQueueRearIndex++;
		    }
			else
			{
			    CanTxQIndex[hwInst].CanQueueRearIndex = 0;
			}
		}
	}
}


/* ===========================================================================

 Name:            CanDisp_TransmitDeQueue

 Description:     DeQueue operation from Tx Queue for 
                  transmission

 Inputs:          hwInst: Channel number

                  pTmd  :  Pointer to transmit buffer

 Returns:         Nothing

 =========================================================================*/
static void CanDisp_TransmitDeQueue( CAN_HWINST hwInst, CAN_TMD * pTmd )
{

    CAN_UINT8 TxQFrontIndex = 0;

    CAN_TMD * CanTxqPtr = NULL;

    CAN_TMD * CanTxqElementPtr = NULL;

	CAN_UINT8 FuncExecSt = E_OK;


    if( (uint8) CAN_NUMBER_OF_CHANNELS <= hwInst )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if( NULL == pTmd )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
	
	if(FuncExecSt != E_NOT_OK)
	{
		TxQFrontIndex = CanTxQIndex[hwInst].CanQueueFrontIndex;

	    CanTxqPtr = pCanTxQ[hwInst];

		CanTxqElementPtr = &CanTxqPtr[TxQFrontIndex];

	    pTmd->MsgHandle  = CanTxqElementPtr->MsgHandle;
	    pTmd->Identifier = CanTxqElementPtr->Identifier;
		pTmd->Options    = CanTxqElementPtr->Options;
		pTmd->Size       = CanTxqElementPtr->Size;

		pTmd->pData  = CanTxqElementPtr->pData;

	    CanNumOfTxQElements[hwInst]--;

	    if( CanNumOfTxQElements[hwInst] > 0 )
		{
		    if( TxQFrontIndex < (CAN_TXQ_SIZE - 1) )
			{
			    CanTxQIndex[hwInst].CanQueueFrontIndex++;
		    }
			else
			{
			    CanTxQIndex[hwInst].CanQueueFrontIndex = 0;
			}
		}
		else
		{
		    CanTxQIndex[hwInst].CanQueueFrontIndex = 0;
			CanTxQIndex[hwInst].CanQueueRearIndex = 0;
		}
	}
}


#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)
/* ===========================================================================

 Name:            CanDispGetRxQueueStatus

 Description:     Returns whether the Rx Queue status (FULL/READY/EMPTY)

 Inputs:          CtrlId: Channel ID

 Returns:         RxQueueStatus:  Flag Indicating Rx Queue status
#used in poll mode, not used in interrupt mode
 =========================================================================*/
static CAN_UINT8 CanDispGetRxQueueStatus( uint8 CtrlId )
{
    CAN_UINT8 RxQueueStatus = RxQREADY;

    CAN_UINT8 FuncExecSt = E_OK;


    if( (uint8) CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(FuncExecSt != E_NOT_OK)
	{
	    if(CanNumOfRxQElements[CtrlId] == 0)
		{
		    RxQueueStatus = RxQEMPTY;
		}
	    else if(CanNumOfRxQElements[CtrlId] == CAN_RXQ_SIZE)
		{
		    RxQueueStatus = RxQFULL;
		}
		else
		{
		}
	}
	else
	{
	    RxQueueStatus = RxQERROR;
	}

	return(RxQueueStatus);
}

#endif


/* ===========================================================================

 Name:            CanDispGetTxQueueStatus

 Description:     Returns whether the Tx Queue status (FULL/READY/EMPTY)

 Inputs:          hwInst: Channel ID

 Returns:         RxQueueStatus:  Flag Indicating Tx Queue status

 =========================================================================*/
static CAN_UINT8 CanDispGetTxQueueStatus( CAN_HWINST hwInst )
{
    CAN_UINT8 TxQueueStatus = TxQREADY;

    CAN_UINT8 FuncExecSt = E_OK;


    if( (uint8) CAN_NUMBER_OF_CHANNELS <= hwInst )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(FuncExecSt != E_NOT_OK)
	{
	    if(CanNumOfTxQElements[hwInst] == 0)
		{
		    TxQueueStatus = TxQEMPTY;
		}
	    else if(CanNumOfTxQElements[hwInst] == CAN_TXQ_SIZE)
		{
		    TxQueueStatus = TxQFULL;
		}
		else
		{
		}
	}
	else
	{
	    TxQueueStatus = TxQERROR;
	}

	return(TxQueueStatus);
}


#endif /* (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON) */


/* ===========================================================================

 Name:            CanIf_TxConfirmation

 Description:     Tx Confirmation function called by MCAL

 Inputs:          CtrlId: Channel id

                  CanTxPduId:  Tx message Pdu ID

 Returns:         None
 =========================================================================*/
void CanIf_TxConfirmation(PduIdType CanTxPduId)
{

	CAN_UINT8 TxUpperPduId = 0;

    CAN_UINT8 TxIndFuncIndex = 0;

    CanDisp_TxPduConfigType const * pCanDispTxPduConfig;

	CanDisp_TxConfirmationFctType pCanDisp_TxConfirmationFct;

    CAN_TMD CanTmD;

    Can_PduType TxCanPdu;

    CAN_UINT8 TxBuffer[CAN_MAX_DATA_LENGTH];

    CAN_UINT8 TxQBuffer[CAN_MAX_DATA_LENGTH];

    CAN_UINT8 ByteIndex = 0;

	CanDisp_HwHandleType TransmitHndl = 0;

    CanDisp_PduModeType PduMode = CANDISP_OFFLINE;

    CAN_UINT8 CtrlId = 0;

    CAN_UINT8 FuncExecSt = E_OK;

    CAN_UINT8 TxQStatus = 0;

#if 0 //Coverity fix 10339302
# if (CAN_NUMBER_OF_CHANNELS > 1)

    if( (uint8) CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

#endif
#endif
    if((PduIdType) CanDisp_Number_Of_Tx_Messages <= CanTxPduId)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    
    if(FuncExecSt != E_NOT_OK)
	{
	    pCanDispTxPduConfig = &CanDisp_TxPduConfig[CanTxPduId];
	    
	    CtrlId = pCanDispTxPduConfig->ControllerOfTxPduConfig;

		if( E_OK == CanIf_GetPduMode( CtrlId, &PduMode ) )
	   	{
		   	if( (CANDISP_ONLINE == PduMode) || (CANDISP_TX_ONLINE == PduMode) )
			{
				TxUpperPduId = pCanDispTxPduConfig->UpperLayerTxPduIdOfTxPduConfig;

			   #if (CANDISP_POLLED_CONFIRMATION_DISPATCH == STD_ON)

			   CANTransmitComplete[CtrlId][CanTransmitConfirmedElement] = CanTxPduId;

			   if( CanTransmitConfirmedElement < (CAN_TXQ_SIZE - 1) )
			   {
			       CanTransmitConfirmedElement++;
			   }
			   else
			   {
			   }

			   #else

			    TxIndFuncIndex = pCanDispTxPduConfig->TxConfirmationOfTxPduConfig;

				pCanDisp_TxConfirmationFct = CanDisp_TxConfirmationFctList[TxIndFuncIndex];

				if(NULL != pCanDisp_TxConfirmationFct)
				{
				    (pCanDisp_TxConfirmationFct)( CtrlId, TxUpperPduId );
				}


			    #if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

			    TxQStatus = CanDispGetTxQueueStatus(CtrlId);

			    if( (TxQEMPTY != TxQStatus) && (TxQERROR != TxQStatus) )
				{
				    CanTmD.pData = TxQBuffer;
				    
				    CanDisp_TransmitDeQueue( CtrlId, &CanTmD );

			        TxCanPdu.swPduHandle =  CanTmD.MsgHandle;

			        TxCanPdu.length     =  CanTmD.Size;

			        TxCanPdu.id         =  ((CanTmD.Identifier.I32) | CAN_CONTROLLER_FD_ID_FLAG); // CAN FD @jchen57


	                TxCanPdu.sdu = TxBuffer;
	                
	                for( ByteIndex = 0; ByteIndex < TxCanPdu.length; ByteIndex++)
					{
					    TxCanPdu.sdu[ByteIndex]        =  CanTmD.pData[ByteIndex];
					}

				    /* Get the Hardware transmit handle of the PDU */
			        TransmitHndl = pCanDispTxPduConfig->HthOfTxPduConfig;

				    /* Try transmitting the message by putting the data in the hardware buffer */
			        (void)Can_Write( TransmitHndl, &TxCanPdu );

                    

				}

			    #endif /* (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON) */

			    #endif
			}
		}
	}
}


/* ===========================================================================

 Name:            CanIf_RxIndication

 Description:     Rx Indication function called by MCAL

 Inputs:          Hrh: Hardware receive handle (Mailbox id)
 
                  CanId: CAN Rx message id

                  CanDlc: data length of received message

                  CanSduPtr: Pointer to received data

 Returns:         None
 =========================================================================*/
/* void CanIf_RxIndication(CanDisp_HwHandleType Hrh, Can_IdType CanId, uint8 CanDlc, const uint8 *CanSduPtr); */
void CanIf_RxIndication(CanDisp_HwHandleType Hrh, Can_IdType CanId, uint8 CanDlc, P2CONST(uint8, AUTOMATIC, CANDISP_CBK_DRV_VAR)CanSduPtr)
{
    CAN_UINT8 FunctionExecSt = E_OK;

    CAN_UINT8 ByteIndex = 0;

#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_OFF)

	CanDisp_RxPduConfigType const * pCanDispRxPduConfig;

    CanDisp_SimpleRxIndicationFctType pCanDisp_RxIndFct;

	PduIdType RxUpperPduId = 0;

    CAN_UINT8 RxIndFuncId = 0;
#endif

	CanDisp_RxPduCanIdentType CanDispRxPduCanId;

    CanDisp_MailBoxConfigType const * pCanDispMBoxConfig;

    CanDisp_RxPduCanIdentType const * pCanDisp_RxPduCanId;

    PduIdType FirstPduId = 0;

    PduIdType LastPduId = 0;

    PduIdType LLPduId = 0;

    CAN_UINT16 FrameSearchIndex = 0;

    CAN_BOOLEAN MatchFound = FALSE;

    CAN_RMD CanRmD;

    CanDisp_PduModeType PduMode = CANDISP_OFFLINE;

    CAN_UINT8 ControllerIndex = 0;
    
#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

    CAN_UINT8 RxQStatus = 0;
    
#endif

    if((CanDisp_HwHandleType) CanDisp_Number_Of_MBs <= Hrh)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}
    
    if(NULL == CanSduPtr)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}
	
/*To watch message received*/
#if 0
    if (0x380 == CanId)
    {
    	CanId = CanId;
    }
    else if (0x381 == CanId)
    {
    	CanId = CanId;
    }
    else if (0x382 == CanId)
    {
    	CanId = CanId;
    }
    else if (0x383 == CanId)
    {
    	CanId = CanId;
    }
    else if (0x384 == CanId)
    {
    	CanId = CanId;
    }
    else if (0x385 == CanId)
    {
    	CanId = CanId;
    }
#endif


    if(FunctionExecSt != E_NOT_OK)
	{    
	    ControllerIndex = CanDisp_MailBoxConfig[Hrh].ControllerOfMailBoxConfig;/*CanDisp_Par_cfg configure with actually physical channel*/
	    
	    if( E_OK == CanIf_GetPduMode( ControllerIndex, &PduMode) )/*Get actually physical channel bus off status*/
	   	{
		   	if( (CANDISP_ONLINE == PduMode) || (CANDISP_RX_ONLINE == PduMode) )
			{
			    pCanDispMBoxConfig = &CanDisp_MailBoxConfig[Hrh];

				if(CANDISP_RxFullCANMailbox == pCanDispMBoxConfig->MailBoxTypeOfMailBoxConfig)
				{
				    LLPduId = pCanDispMBoxConfig->PduIdFirstOfMailBoxConfig;

                    MatchFound = TRUE;
				}
				else
				{
				    FirstPduId = pCanDispMBoxConfig->PduIdFirstOfMailBoxConfig;
					LastPduId  = pCanDispMBoxConfig->PduIdLastOfMailBoxConfig;

				    MatchFound = FALSE;

				    for( FrameSearchIndex = FirstPduId; ((FrameSearchIndex <= LastPduId) && (MatchFound != TRUE)); FrameSearchIndex++ )
					{
					    CanDispRxPduCanId = CanDisp_RxPduCanId[FrameSearchIndex];

						if((CanId <= CanDisp_RxPduMask[FrameSearchIndex]) && (CanId >= CanDispRxPduCanId.CanId))
                        {
                            MatchFound = CAN_TRUE;
                            LLPduId = FirstPduId;
                        }
						else
						{
						    if( (CanId & CanDisp_RxPduMask[FrameSearchIndex]) == CanDispRxPduCanId.CanId )
							{
							    MatchFound = TRUE;
								LLPduId = FrameSearchIndex;
							}
						}
					}
				}

			    if(FALSE != MatchFound)
			    {

                #if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

                    #if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

                        RxQStatus = CanDispGetRxQueueStatus(ControllerIndex);
                        
                        if( (RxQFULL != RxQStatus) && ((RxQERROR != RxQStatus)) )
                        {
                            pCanDisp_RxPduCanId = &CanDisp_RxPduCanId[LLPduId];

                            CanRmD.Identifier.I32 = CanId;
                            CanRmD.Vector      = LLPduId;
                            CanRmD.Qualifiers  = pCanDisp_RxPduCanId->FrameOption;
                            CanRmD.Size        = CanDlc;

                            for(ByteIndex = 0; ByteIndex < CanDlc; ByteIndex++)
                            {
                                CanRmD.Data[ByteIndex] = CanSduPtr[ByteIndex];
                            }

                            CanDisp_ReceiveQueue( ControllerIndex, &CanRmD );

                        }
                        else
                        {
                            
                            #ifdef CANUTIL_ENABLED
                            CanUtil_ReportError();
                            #endif
                        }


                    #endif /* (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON) */

                #else

			        pCanDispRxPduConfig = &CanDisp_RxPduConfig[LLPduId];

			        RxUpperPduId      = pCanDispRxPduConfig->UpperPduIdOfRxPduConfig;
			        RxIndFuncId       = (pCanDispRxPduConfig->RxIndicationOfRxPduConfig);

					pCanDisp_RxPduCanId = &CanDisp_RxPduCanId[LLPduId];

                    CanRmD.Identifier.I32 = CanId;
			        CanRmD.Vector         = LLPduId;
			        CanRmD.Qualifiers     = pCanDisp_RxPduCanId->FrameOption;
					CanRmD.Size           = CanDlc;

			        for(ByteIndex = 0; ByteIndex < CanDlc; ByteIndex++)
					{
			            CanRmD.Data[ByteIndex]       = CanSduPtr[ByteIndex];
					}

			        pCanDisp_RxIndFct = (CanDisp_RxIndicationFctList[RxIndFuncId].RxIndicationFctOfRxIndicationFctList).eSimpleRxIndicationType;

                    if(pCanDisp_RxIndFct != NULL)
                    {
                        (*pCanDisp_RxIndFct)(ControllerIndex, RxUpperPduId, &CanRmD);
                    }

                #endif

			    }
			}
		}
	}
}


#if ( (CANDISP_POLLED_CONFIRMATION_DISPATCH == STD_ON) || (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON) )
/* ===========================================================================

 Name:            CanDisp_MainFunction

 Description:     Scheduled function for receive indication and transmit 
                  confirmation dispatch to upper layer

 =========================================================================*/
void CanDisp_MainFunction( void )
{

    CAN_UINT8 ControllerIndex = 0;

    CanDisp_PduModeType PduMode = CANDISP_OFFLINE;

#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

    CanDisp_RxPduConfigType const * pCanDispRxPduConfig;

    CanDisp_SimpleRxIndicationFctType pCanDisp_RxIndFct;

	CAN_UINT8 RxIndFuncIndex = 0;

    CAN_UINT8 RxIndex = 0;

    CAN_UINT8 RxIndFuncId = 0;

    CAN_RMD CanRmD;

    PduIdType LLPduId = 0;

    PduIdType RxUpperPduId = 0;

    CAN_UINT8 RxQStatus = 0;

#endif /* CANDISP_POLLED_RECEIVE_DISPATCH */

#if (CANDISP_POLLED_CONFIRMATION_DISPATCH == STD_ON)

    CAN_UINT8 TCBufferIndex = 0;

    CAN_UINT8 TCBufferHandle = 0;

    PduIdType CanTxPduId = 0;

    P2CONST(PduInfoType, CANDISP_APPL_MSG_VAR) PduInfoPtr;

    P2CONST(CanDisp_TxPduConfigType, CANDISP_CONST) pCanDispTxPduConfig;

	P2CONST(CanDisp_TxConfirmationFctType, CANDISP_CONST) pCanDisp_TxConfirmationFct;

    CAN_UINT8 TxIndFuncIndex = 0;

    P2CONST(Can_PduType, CANDISP_APPL_MSG_VAR) TxCanPduPtr;

	CAN_TMD const CanTmD;

    CAN_UINT8 TxQStatus = 0;

#endif /* CANDISP_POLLED_CONFIRMATION_DISPATCH */


#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

    for( ControllerIndex = 0; ControllerIndex < CAN_NUMBER_OF_CHANNELS; ControllerIndex++ )
	{
   	    if( E_OK == CanIf_GetPduMode( ControllerIndex, &PduMode ) )
   	    {
	   	    if( (CANDISP_ONLINE == PduMode) || (CANDISP_RX_ONLINE == PduMode) )
			{
		   	    CanEnterLocalCriticalSection(ControllerIndex);
		   	    
		   	    RxQStatus = CanDispGetRxQueueStatus(ControllerIndex);

		   	    if(RxQERROR != RxQStatus)
				{
			   	    while( RxQEMPTY != RxQStatus )
			   		{
						CanDisp_ReceiveDeQueue( ControllerIndex, &CanRmD );

					    LLPduId = CanRmD.Vector;

			   	        pCanDispRxPduConfig = &CanDisp_RxPduConfig[LLPduId];

						RxUpperPduId = pCanDispRxPduConfig->UpperPduIdOfRxPduConfig;

				        RxIndFuncId    = (pCanDispRxPduConfig->RxIndicationOfRxPduConfig);

				        pCanDisp_RxIndFct = (CanDisp_RxIndicationFctList[RxIndFuncId].RxIndicationFctOfRxIndicationFctList).eSimpleRxIndicationType;
                        if(pCanDisp_RxIndFct != NULL)
                        {
                            (*pCanDisp_RxIndFct)(ControllerIndex, RxUpperPduId, &CanRmD);
                        }

						RxQStatus = CanDispGetRxQueueStatus(ControllerIndex);
					}
				}

                CanExitLocalCriticalSection(ControllerIndex);
			}
		}
	}
 
#endif

#if (CANDISP_POLLED_CONFIRMATION_DISPATCH == STD_ON)

    for( ControllerIndex = 0; ControllerIndex < CAN_NUMBER_OF_CHANNELS; ControllerIndex++ )
	{
   	    if( E_OK == CanIf_GetPduMode( ControllerIndex, &PduMode ) )
   	    {
	   	    if( (CANDISP_ONLINE == PduMode) || (CANDISP_TX_ONLINE == PduMode) )
			{
		   	    TCBufferIndex = 0;

		   	    TCBufferHandle = CANTransmitComplete[ControllerIndex][TCBufferIndex];

		        if( TCBufferHandle != CAN_INVALID_HANDLE )
				{
				   	do
			   		{
			   	        TxIndFuncIndex = pCanDispTxPduConfig->TxConfirmationOfTxPduConfig;

			            pCanDisp_TxConfirmationFct = CanDisp_TxConfirmationFctList[TxIndFuncIndex];

                        if(NULL != pCanDisp_TxConfirmationFct)
						{
			                (*pCanDisp_TxConfirmationFct)( TCBufferHandle );
						}

		                TxQStatus = CanDispGetTxQueueStatus(ControllerIndex);

		                if( (TxQEMPTY != TxQStatus) && (TxQERROR != TxQStatus) )
						{
			                CanDisp_TransmitDeQueue( ControllerIndex, &CanTmD );

			                CanTxPduId          =  CanTmD.MsgHandle;

			                TxCanPduPtr->length =  CanTmD.Size;

			                TxCanPduPtr->id     =  ((CanTmD.Identifier) | CAN_CONTROLLER_FD_ID_FLAG);

			                TxCanPduPtr->sdu    =  CanTmD.pData;

			                TxCanPduPtr->swPduHandle = CanTxPduId;

				            /* Get the Hardware transmit handle of the PDU */
			                TransmitHndl = pCanDispTxPduConfig->HthOfTxPduConfig;

				            /* Try transmitting the message by putting the data in the hardware buffer */
			                if( CAN_OK != Can_Write( TransmitHndl, TxCanPduPtr ) )
							{
								CanNumOfTxQElements[ControllerIndex]++;

                                if( CanTxQIndex[ControllerIndex].CanQueueFrontIndex > 0 )
								{
								    CanTxQIndex[ControllerIndex].CanQueueFrontIndex--;
							    }
								else
								{
								    CanTxQIndex[ControllerIndex].CanQueueFrontIndex = (CanNumOfTxQElements[ControllerIndex] - 1);
								}
							}
						}

		                if( (TCBufferIndex < CanTransmitConfirmedElement) && (TCBufferIndex < (CAN_TXQ_SIZE - 1)) )
		                {
		                    TCBufferIndex++;

		                    TCBufferHandle = CANTransmitComplete[ControllerIndex][TCBufferIndex];

                            CANTransmitComplete[ControllerIndex][TCBufferIndex] = CAN_INVALID_HANDLE;
					    }
					    else
					    {
					        TCBufferHandle = CAN_INVALID_HANDLE;
				        }

					} while( TxQEMPTY != CanDispGetTxQueueStatus(ControllerIndex) && (TCBufferHandle != CAN_INVALID_HANDLE) );
				}
		    }
		}

	}

#endif

}

#endif


/* ===========================================================================

 Name:            CanIf_SetPduMode

 Description:     Sets/Resets Pdu mode for enabling Tx/Rx

 Inputs:          CtrlId: Channel id
 
                  PduModeRequest: Pdu mode request value

 Returns:         E_OK / E_NO_OK
 =========================================================================*/
/* Std_ReturnType CanIf_SetPduMode(uint8 CtrlId, CanDisp_PduModeType PduModeRequest); */
Std_ReturnType CanIf_SetPduMode(uint8 CtrlId, CanDisp_PduModeType PduModeRequest)
{

    Std_ReturnType PduSetStatus = E_OK;
	CAN_UINT8 * pCanDispPduSt = NULL;
    CanDisp_PduModeType PduMode = CANDISP_OFFLINE;

    if( (uint8) CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		PduSetStatus = E_NOT_OK;
		#endif
	}

	if(PduSetStatus != E_NOT_OK)
	{
		if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[CtrlId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			PduSetStatus = E_NOT_OK;
			#endif
		}

	    if(PduSetStatus != E_NOT_OK)
	    {
		    pCanDispPduSt = &CanDisp_PduState[CtrlId];
            (void)CanIf_GetPduMode( CtrlId, &PduMode );
            
		    if(PduMode != PduModeRequest)
			{
			    switch(PduModeRequest)
				{
			        case CANDISP_OFFLINE:

					    *pCanDispPduSt = 0;  /* (CANB_TXOFFLINE | CANB_RXOFFLINE) */

		#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

		                CanEnterCriticalSection();

		                CanTxqInit(CtrlId);

	#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

		                CanRxqInit(CtrlId);

	#endif

		                CanExitCriticalSection();

		#endif

					break;

			        case CANDISP_RX_OFFLINE:

					    *pCanDispPduSt = ( (*pCanDispPduSt) & (CANB_TXONLINE | CANB_RXOFFLINE) );

		#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

	#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

		                CanEnterCriticalSection();

		                CanRxqInit(CtrlId);
	                    
	                    CanExitCriticalSection();

	#endif
	            

		#endif

					break;

			        case CANDISP_RX_ONLINE:

					    *pCanDispPduSt = ( (*pCanDispPduSt) | (CANB_RXONLINE) );

					break;

			        case CANDISP_TX_OFFLINE:
					case CANDISP_TX_OFFLINE_ACTIVE:

					    *pCanDispPduSt = ( (*pCanDispPduSt) & (CANB_TXOFFLINE | CANB_RXONLINE) );

		#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

		                CanEnterCriticalSection();

		                CanTxqInit(CtrlId);

		                CanExitCriticalSection();

		#endif

					break;

			        case CANDISP_TX_ONLINE:

					    *pCanDispPduSt = ( (*pCanDispPduSt) | (CANB_TXONLINE) );

					break;

			        case CANDISP_ONLINE:

					    *pCanDispPduSt = ( (*pCanDispPduSt) | (CANB_TXONLINE | CANB_RXONLINE) );

					break;

					default:

					    PduSetStatus = E_NOT_OK;

					break;
				}
			}
		}
	}

    return(PduSetStatus);
}


/* ===========================================================================

 Name:            CanIf_GetPduMode

 Description:     Reads Pdu mode used for enabling Tx/Rx

 Inputs:          CtrlId: Channel id
 
                  PduModePtr: Pointer to update mode data

 Returns:         E_OK / E_NO_OK
 =========================================================================*/
/* Std_ReturnType CanIf_GetPduMode(uint8 CtrlId, CanDisp_PduGetModeType *PduModePtr); */
Std_ReturnType CanIf_GetPduMode(uint8 CtrlId, P2VAR(CanDisp_PduModeType, AUTOMATIC, CANDISP_APPL_STATE_VAR) PduModePtr)
{
    Std_ReturnType PduGetStatus = E_OK;

    CAN_UINT8 * pCanDispPduSt = NULL;

    CanDisp_PduModeType * pPduMode = NULL;


    if( (uint8) CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		PduGetStatus = E_NOT_OK;
		#endif
	}

    if( E_NOT_OK != PduGetStatus )
	{
	    if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[CtrlId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			PduGetStatus = E_NOT_OK;
			#endif
		}

		if( E_NOT_OK != PduGetStatus )
		{

		    pCanDispPduSt = &CanDisp_PduState[CtrlId];
			pPduMode = &CanDisp_PduMode[CtrlId];

		    switch(*pCanDispPduSt)
			{

			    case CANB_OFFLINE: // 0
				    *pPduMode = CANDISP_OFFLINE; //0
				break;

		        case CANB_RXONLINE: //1
		            *pPduMode = CANDISP_RX_ONLINE; //2
				break;

		        case CANB_TXONLINE: // 2
				    *pPduMode = CANDISP_TX_ONLINE; // 4
				break;

		        case CANB_ONLINE: // 3
				    *pPduMode = CANDISP_ONLINE; // 5
				break;

		        default:
				break;

			}

			if(NULL != PduModePtr)
			{
		        *PduModePtr = CanDisp_PduMode[CtrlId];
			}
			else
			{			    
                #ifdef CANUTIL_ENABLED
		        CanUtil_ReportError();
			    #else
			    PduGetStatus = E_NOT_OK;
			    #endif
			}
		}
	}

    return(PduGetStatus);
}




/* ===========================================================================

 Name:            CanIf_SetDynamicTxId

 Description:     Sets the Tx id of the transmit message dynamically
 =========================================================================*/
# if(CANDISP_SETDYNAMICTXID_API == STD_ON)
/*void CanIf_SetDynamicTxId(PduIdType CanTxPduId, Can_IdType CanId)*/
void CanIf_SetDynamicTxId(uint8 CtrlId, PduIdType CanTxPduId, Can_IdType CanId)
{
}
# endif /* CANDISP_SETDYNAMICTXID_API == STD_ON */


/* ===========================================================================

 Name:            CanIf_SetControllerMode

 Description:     Sets the CAN controller  to normal/sleep

 Inputs:          CtrlId: Channel id

                  ControllerMode:  Mode value

 Returns:         E_OK / E_NOT_OK

 =========================================================================*/
/* Std_ReturnType CanIf_SetControllerMode(uint8 CtrlId, CanDisp_ControllerModeType ControllerMode) */
Std_ReturnType CanIf_SetControllerMode(uint8 CtrlId, CanDisp_ControllerModeType ControllerMode)
{
	Std_ReturnType retval = E_OK;

    if( (uint8) CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		retval = E_NOT_OK;
		#endif
	}

    if( E_NOT_OK != retval )
	{
	    if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[CtrlId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			retval = E_NOT_OK;
			#endif
		}

	    if( E_NOT_OK != retval )
		{
		    switch( ControllerMode )
		    {
		      case CANDISP_CS_STOPPED:

		        if ( CanDisp_ControllerMode[CtrlId] == CANDISP_CS_SLEEP )
		        {
		            if ( CAN_OK == Can_SetControllerMode( CtrlId, CAN_T_WAKEUP ) )
		            {
		                retval = E_OK;
		            }
		        }
		        else if ( (CanDisp_ControllerMode[CtrlId] == CANDISP_CS_STARTED) ||
		                  (CanDisp_ControllerMode[CtrlId] == CANDISP_CS_STOPPED) )
		        {
		            if ( CAN_OK == Can_SetControllerMode( CtrlId, CAN_T_STOP ) )
		            {
					    if(CanDisp_ControllerMode[CtrlId] == CANDISP_CS_STARTED)
						{
		                    #if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

		                    CanTxqInit(CtrlId);

	#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

		                    CanRxqInit(CtrlId);

	#endif

		                    #endif
						}

		                retval = E_OK;
		            }
				}
		        else
		        {
		        }

		      break;

		      case CANDISP_CS_STARTED:

		        if ( (CanDisp_ControllerMode[CtrlId] == CANDISP_CS_STOPPED) ||
		             (CanDisp_ControllerMode[CtrlId] == CANDISP_CS_STARTED) )
		        {
		            if ( CAN_OK == Can_SetControllerMode( CtrlId, CAN_T_START ) )
		            {
		                retval = E_OK;
		            }
		        }

		      break;

		      case CANDISP_CS_SLEEP:

		        if ( (CanDisp_ControllerMode[CtrlId] == CANDISP_CS_STOPPED) ||
		             (CanDisp_ControllerMode[CtrlId] == CANDISP_CS_SLEEP) )
		        {
		            if ( CAN_OK == Can_SetControllerMode( CtrlId, CAN_T_SLEEP ) )
		            {
		                retval = E_OK;
		            }
		        }

		      break;

		      default:
		      break;
		    }

		}
	}

    return retval;

}


/* ===========================================================================

 Name:            CanIf_GetControllerMode

 Description:     Returns the CAN controller mode (normal/sleep)

 Inputs:          CtrlId: Channel id

                  ControllerModePtr:  Pointer to buffer holding Mode value

 Returns:         E_OK / E_NOT_OK

 =========================================================================*/
/* Std_ReturnType CanIf_GetControllerMode(uint8 CtrlId, CanDisp_ControllerModeType *ControllerModePtr); */
Std_ReturnType CanIf_GetControllerMode(uint8 CtrlId, P2VAR(CanDisp_ControllerModeType, AUTOMATIC, CANDISP_APPL_STATE_VAR) ControllerModePtr)
{

	Std_ReturnType GetCtrllerStatus = E_OK;

	if( (uint8) CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetCtrllerStatus = E_NOT_OK;
		#endif
	}

    if( NULL == ControllerModePtr )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetCtrllerStatus = E_NOT_OK;
		#endif
	}

    if( E_NOT_OK != GetCtrllerStatus )
	{
	    if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[CtrlId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			GetCtrllerStatus = E_NOT_OK;
			#endif
		}

	    if( E_NOT_OK != GetCtrllerStatus )
		{
	        *ControllerModePtr = CanDisp_ControllerMode[CtrlId];
		}
	}

    return(GetCtrllerStatus);

}


# if(CANDISP_XCVR_HANDLING == STD_ON)
/* ===========================================================================

 Name:            CanIf_SetTrcvMode

 Description:     Sets the tranceiver mode to normal/standby

 Inputs:          TransceiverId: Transceiver id

                  TransceiverMode:  Transceiver mode value

 Returns:         E_OK / E_NOT_OK

 =========================================================================*/
/* Std_ReturnType CanIf_SetTrcvMode(uint8 TransceiverId, CanXcvr_XcvrModeType TransceiverMode); */
Std_ReturnType CanIf_SetTrcvMode(uint8 TransceiverId, CanXcvr_XcvrModeType TransceiverMode)
{
	Std_ReturnType setModeStatus = E_OK;

    if(CAN_NUMBER_OF_CHANNELS <= TransceiverId)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		setModeStatus = E_NOT_OK;
		#endif
	}

    if((CanXcvr_XcvrModeType)CANXCVR_VALID_STATES <= TransceiverMode)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		setModeStatus = E_NOT_OK;
		#endif
	}

	if( E_NOT_OK != setModeStatus )
	{
	    if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[TransceiverId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			setModeStatus = E_NOT_OK;
			#endif
		}

	    if( E_NOT_OK != setModeStatus )
		{
	        CanEnterCriticalSection();
	       
	        setModeStatus = CANXCVR_SetMode( TransceiverId, (CanXcvr_XcvrModeType)TransceiverMode );
	        
	        CanExitCriticalSection();
		}
	}

    return(setModeStatus);

}


/* ===========================================================================

 Name:            CanIf_GetTrcvMode

 Description:     Returns the transceiver mode

 Inputs:          TransceiverModePtr: Pointer to buffer holding transceiver mode

                  TransceiverId:  Transceiver id

 Returns:         E_OK / E_NOT_OK

 =========================================================================*/
/* Std_ReturnType CanIf_GetTransceiverMode(uint8 TransceiverId, CanXcvr_XcvrModeType *TransceiverModePtr) */
Std_ReturnType CanIf_GetTrcvMode(P2VAR(CanXcvr_XcvrModeType, AUTOMATIC, CANDISP_APPL_STATE_VAR) TransceiverModePtr, uint8 TransceiverId)
{
    Std_ReturnType GetModeStatus = E_OK;

    if(CAN_NUMBER_OF_CHANNELS <= TransceiverId)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetModeStatus = E_NOT_OK;
		#endif
	}

    if(NULL == TransceiverModePtr)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetModeStatus = E_NOT_OK;
		#endif
	}

    if( E_NOT_OK != GetModeStatus )
	{
	    if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[TransceiverId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			GetModeStatus = E_NOT_OK;
			#endif
		}

	    if( E_NOT_OK != GetModeStatus )
		{
	        CanEnterCriticalSection();

	        *TransceiverModePtr = (CanXcvr_XcvrModeType) CANXCVR_GetMode( TransceiverId );

	        CanExitCriticalSection();
		}
	}

    return(GetModeStatus);
}


# endif  /* CANDISP_XCVR_HANDLING == STD_ON */


/* ===========================================================================
 Name:            CanIf_GetTrcvWakeupReason
 =========================================================================*/
/* Std_ReturnType CanIf_GetTrcvWakeupReason(uint8 TransceiverId, CanXcvr_XcvrModeType *XcvrWuReasonPtr); */
Std_ReturnType CanIf_GetTrcvWakeupReason(uint8 TransceiverId, P2VAR(CanXcvr_XcvrWakeupReasonType, AUTOMATIC, CANDISP_APPL_STATE_VAR) XcvrWuReasonPtr)
{
    CANDISP_UNUSED_VAR(TransceiverId);
	CANDISP_UNUSED_VAR(XcvrWuReasonPtr);
	  
	return(E_OK);
}


/* ===========================================================================

 Name:            CanIf_SetTrcvWakeupMode

 =========================================================================*/
/* Std_ReturnType CanIf_SetTransceiverWakeupMode(uint8 TransceiverId, CanXcvr_XcvrModeType XcvrWakeupMode); */
Std_ReturnType CanIf_SetTrcvWakeupMode(uint8 TransceiverId, CanXcvr_XcvrModeType XcvrWakeupMode)
{
    CANDISP_UNUSED_VAR(TransceiverId);
	CANDISP_UNUSED_VAR(XcvrWakeupMode);
	  
	return(E_OK);
}





# if (CANDISP_WAKEUP_SUPPORT == STD_ON)
/*******************************************************************************************************************
| NAME:             CanIf_CheckWakeup()
| SID:              0x11
| CALLED BY:        EcuMgr
| PRECONDITIONS:    CanInterface is initialized
| INPUT PARAMETERS: EcuMgr WakeupSource
| RETURN VALUES:    E_OK:     Check WakeUp request was accepted
|                   E_NOT_OK: Check WakeUp request was not accepted
| DESCRIPTION:      CAN Interface is asked by the EcuM if one of the possible
|                   WakeUp Sources encoded in 'WakeupSource' is responsible
|                   for the WakeUp
*******************************************************************************************************************/
/* Wake Up Handling *//*no use*/
/* Std_ReturnType CanIf_CheckWakeup(EcuM_WakeupSourceType WakeupSource); */
Std_ReturnType CanIf_CheckWakeup(EcuM_WakeupSourceType WakeupSource)
{
	Std_ReturnType ValidWakeSource = E_OK;
	
	CAN_UINT8 CanChannelIndex = 0;

    EcuM_WakeupSourceType WakeSource = 0;
	
	CanDisp_WakeUpTargetAddressConfigType WakeModuleTgtAddr = 0;
	
	CanDisp_ControllerOfWakeUpConfigType WakeControllerId = 0;
	
	CanDisp_WakeUpTargetType  TargetModule = CANDISP_WAKEUPREQUEST_NONE;


    for(CanChannelIndex = 0; CanChannelIndex < CanDisp_Number_Of_Wake_Channels; CanChannelIndex++)
    {
	    WakeSource        = CanDisp_WakeUpConfig[CanChannelIndex].WakeUpSourceOfWakeUpConfig;

		WakeModuleTgtAddr = CanDisp_WakeUpConfig[CanChannelIndex].WakeUpTargetAddressConfig;

        TargetModule      = CanDisp_WakeUpConfig[CanChannelIndex].WakeUpTargetModuleConfig;

        WakeControllerId  = CanDisp_WakeUpConfig[CanChannelIndex].ControllerOfWakeUpConfig;


        if(CAN_NUMBER_OF_CHANNELS <= WakeControllerId)
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			ValidWakeSource = E_NOT_OK;
			#endif
		}

		if(ValidWakeSource != E_NOT_OK)
		{
			if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[WakeControllerId] )
			{
			    #ifdef CANUTIL_ENABLED
			    CanUtil_ReportError();
				#else
				ValidWakeSource = E_NOT_OK;
				#endif
			}

	        if( (WakeSource == WakeupSource) && (E_NOT_OK != ValidWakeSource) )
			{
			    if(CANDISP_CS_SLEEP == CanDisp_ControllerMode[WakeControllerId])
				{
				    CanEnterCriticalSection();

				    if (TargetModule == CANDISP_WAKEUPREQUEST_CAN)
	                {
	                    ValidWakeSource = Can_CheckWakeup(WakeModuleTgtAddr);
				    }
					else if(TargetModule == CANDISP_WAKEUPREQUEST_TRCV)
					{
					    /*ValidWakeSource = CanTrcv_CheckWakeup(WakeModuleTgtAddr);*/
					}
					else
					{
					    ValidWakeSource = E_NOT_OK;
					}

	                CanExitCriticalSection();
			    }
				else
				{
				    ValidWakeSource = E_NOT_OK;
				}
			}
		}
    }

    return(ValidWakeSource);
}
# endif  /* CANDISP_WAKEUP_SUPPORT == STD_ON */


# if ((CANDISP_WAKEUP_SUPPORT == STD_ON) && (CANDISP_WAKEUP_VALIDATION == STD_ON))
/* ===========================================================================

 Name:            CanIf_CheckValidation

 Description:     Checks and returns whether the wake is valid

 Inputs:          WakeupSource: Wake source id

 Returns:         E_OK / E_NOT_OK

 =========================================================================*/
/* Std_ReturnType CanIf_CheckValidation(EcuM_WakeupSourceType WakeupSource); */
Std_ReturnType CanIf_CheckValidation(EcuM_WakeupSourceType WakeupSource)
{
}
# endif  /* (CANDISP_WAKEUP_SUPPORT == STD_ON) && (CANDISP_WAKEUP_VALIDATION == STD_ON) */


/* ===========================================================================

 Name:            CanIf_GetTxConfirmationState

 =========================================================================*/
#if (CANDISP_PUBLIC_TX_CONFIRM_POLLING_SUPPORT == STD_ON)
/* CanDisp_NotifStatusType CanIf_GetTxConfirmationState(uint8 Controller); */
CanDisp_NotifStatusType CanIf_GetTxConfirmationState(uint8 CtrlId)
{
}
#endif   /* CANDISP_PUBLIC_TX_CONFIRM_POLLING_SUPPORT == STD_ON */


#if (CANDISP_SET_BAUDRATE_API == STD_ON)
/* ===========================================================================

 Name:            CanIf_SetBaudrate

 =========================================================================*/
Std_ReturnType CanIf_SetBaudrate(uint8 CtrlId, uint16 BaudRateConfigID)
{
}
#endif


/*********************************************************************************************************************/
/** Callback Functions & Notifications */
/*********************************************************************************************************************/

# if (CANDISP_TRIGGER_TRANSMIT_API == STD_ON)
/* ===========================================================================

 Name:            CanIf_TriggerTransmit

 =========================================================================*/
Std_ReturnType CanIf_TriggerTransmit(PduIdType TxPduId, PduInfoType* PduInfoPtr)
{
}
# endif /* CANDISP_TRIGGER_TRANSMIT_API == STD_ON */


/* void CanIf_CancelTxConfirmation(const Can_PduType *PduInfoPtr); */
#if (CANDISP_TRANSMIT_BUFFER == STD_ON)
# if (CANDISP_TRANSMIT_CANCELLATION == STD_ON)
/* ===========================================================================

 Name:            CanIf_CancelTxConfirmation

 =========================================================================*/
void CanIf_CancelTxConfirmation(uint8 CtrlId, PduIdType CanTxPduId, P2CONST(Can_PduType, AUTOMATIC, CANDISP_CBK_DRV_VAR) PduInfoPtr)
{
}
# endif    /* (CANDISP_TRANSMIT_CANCELLATION == STD_ON) */
#endif   /* (CANDISP_TRANSMIT_BUFFER == STD_ON) */


/* ===========================================================================

 Name:            CanIf_ControllerBusOff

 Description:     Busoff notification from MCAL

 Inputs:          CtrlId: Channel id

 Returns:         None

 =========================================================================*/
/* void CanIf_ControllerBusOff(uint8 CtrlId); */
void CanIf_ControllerBusOff(uint8 CtrlId)
{
	CAN_UINT8 BusoffNotify = E_OK;
    
    
    if( CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		BusoffNotify = E_NOT_OK;
		#endif
	}

	if(BusoffNotify != E_NOT_OK)
	{

	    (void)CanIf_SetPduMode(CtrlId, CANDISP_TX_OFFLINE);

	    CanDisp_SetCtrlMode(CtrlId, CANDISP_CS_STOPPED);

	#if (CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT == STD_ON)

	    CanTxqInit(CtrlId);

#if (CANDISP_POLLED_RECEIVE_DISPATCH == STD_ON)

	    CanRxqInit(CtrlId);

#endif

	#endif

	    CanSM_ControllerBusOff( CtrlId );

	}

}


/********************************************************************************/
/* NON AUTOSAR callback functions                                               */
/********************************************************************************/

#if (CANDISP_CANCEL_SUPPORT_API == STD_ON)
/* ===========================================================================

 Name:            CanIf_CancelTxNotification

 =========================================================================*/
/* void CanIf_CancelTxNotification(PduIdType PduId, CanDisp_CancelResultType IsCancelled); */
void CanIf_CancelTxNotification(uint8 CtrlId, PduIdType PduId, CanDisp_CancelResultType IsCancelled)
{
}

#endif


#if(CANDISP_XCVR_HANDLING == STD_ON)

# if(CANDISP_PN_XCVR_HANDLING == STD_ON)

/* ===========================================================================

 Name:            CanIf_ConfirmPnAvailability

 =========================================================================*/
/* void CanIf_ConfirmPnAvailability(uint8 TransceiverId); */
void CanIf_ConfirmPnAvailability(uint8 TransceiverId)
{
}


/* ===========================================================================

 Name:            CanIf_ClearTrcvWufFlagIndication

 =========================================================================*/
/* void CanIf_ClearTrcvWufFlagIndication(uint8 TransceiverId); */
void CanIf_ClearTrcvWufFlagIndication(uint8 TransceiverId)
{
}


/* ===========================================================================

 Name:            CanIf_CheckTrcvWakeFlagIndication

 =========================================================================*/
/* void CanIf_CheckTrcvWakeFlagIndication(uint8 TransceiverId); */
void CanIf_CheckTrcvWakeFlagIndication(uint8 TransceiverId)
{
}


# endif /* (CANDISP_PN_XCVR_HANDLING == STD_ON) */

#endif /* (CANDISP_XCVR_HANDLING == STD_ON) */


/* ===========================================================================

 Name:            CanIf_ControllerModeIndication

 Description:     Controller mode change of value indication

 Inputs:          CtrlId: Channel id

                  ControllerMode:  Current controller mode Value

 Returns:         None

 =========================================================================*/
/* void CanIf_ControllerModeIndication(uint8 Controller, CanDisp_ControllerModeType ControllerMode); */
void CanIf_ControllerModeIndication(uint8 CtrlId, CanDisp_ControllerModeType ControllerMode)
{
    CAN_UINT8 FuncExecStatus = E_OK;
    
    if( CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecStatus = E_NOT_OK;
		#endif
	}

    if(FuncExecStatus != E_NOT_OK)
	{
	    if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[CtrlId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecStatus = E_NOT_OK;
			#endif
		}

	    if(FuncExecStatus != E_NOT_OK)
		{
		    switch(ControllerMode)
		    {
			    case CANDISP_CS_STOPPED:

			        switch(CanDisp_ControllerMode[CtrlId])
			        {
			            case CANDISP_CS_STARTED:
			            case CANDISP_CS_SLEEP:

			                CanDisp_SetCtrlMode(CtrlId, CANDISP_CS_STOPPED);

			            break;

			            default:
			            break;
			        }

			    break;

			    case CANDISP_CS_STARTED:

			        switch(CanDisp_ControllerMode[CtrlId])
			        {
			            case CANDISP_CS_STOPPED:

			                CanDisp_SetCtrlMode(CtrlId, CANDISP_CS_STARTED);

			            break;

			            default:
			            break;
			        }

			    break;

			    case CANDISP_CS_SLEEP:

			        switch(CanDisp_ControllerMode[CtrlId])
			        {
			            case CANDISP_CS_STOPPED:
			            case CANDISP_CS_SLEEP:

			                CanDisp_SetCtrlMode(CtrlId, CANDISP_CS_SLEEP);

			            break;

			            default:
			            break;
			        }

			        break;

			    default:
			    break;

		    }

		    CanSM_ControllerModeIndication( CtrlId, ControllerMode );
		}
	}

}


/* ===========================================================================

 Name:            CanDisp_TrcvModeIndication

 Description:     Transceiver mode change of value indication

 Inputs:          CtrlId: Transceiver id

                  ControllerMode:  Current Transceiver mode Value

 Returns:         None

 =========================================================================*/
/* void CanDisp_TrcvModeIndication(uint8 TransceiverId, CanXcvr_XcvrModeType TransceiverMode); */
void CanDisp_TrcvModeIndication(uint8 TransceiverId, CanXcvr_XcvrModeType TransceiverMode)
{
	CAN_UINT8 FuncExecStatus = E_OK;

    if( CAN_NUMBER_OF_CHANNELS <= TransceiverId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecStatus = E_NOT_OK;
		#endif
	}

    if(FuncExecStatus != E_NOT_OK)
	{
	    if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[TransceiverId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecStatus = E_NOT_OK;
			#endif
		}

	    if(FuncExecStatus != E_NOT_OK)
		{
		    CanSM_TransceiverModeIndication( TransceiverId, TransceiverMode );
		}
	}

}

#if 0
# if (CAN_NUMBER_OF_CHANNELS > 1)
/* ===========================================================================

 Name:            CanIf_ReadTxNotifStatus

 =========================================================================*/
/* Tx Confirmation status to upper layers*/
CanDisp_NotifStatusType CanIf_ReadTxNotifStatus(uint8 CtrlId, PduIdType CanDispTxSduId)
{
}


/* ===========================================================================

 Name:            CanIf_ReadRxNotifStatus

 =========================================================================*/
/* Rx Indication status to upper layers*/
CanDisp_NotifStatusType CanIf_ReadRxNotifStatus(uint8 CtrlId, PduIdType CanIfRxSduId)
{
}

#endif
#endif

/* Cancellation of TxPDUs */
/* Std_ReturnType CanIf_CancelTransmit(PduIdType CanTxPduId); */
# if (CANDISP_CANCEL_SUPPORT_API == STD_ON)
/* ===========================================================================

 Name:            CanIf_CancelTransmit

 =========================================================================*/
Std_ReturnType CanIf_CancelTransmit(uint8 CtrlId, PduIdType CanTxPduId)
{
}
# endif /* CANDISP_CANCEL_SUPPORT_API == STD_ON */

# if 0
# if (CAN_NUMBER_OF_CHANNELS > 1)
/* ===========================================================================

 Name:            CanIf_ReadRxPduData

 =========================================================================*/
/* Data Reading/Copying of RxPDUs */
Std_ReturnType CanIf_ReadRxPduData(uint8 CtrlId, PduIdType CanDispRxSduId, PduInfoType* CanDispRxInfoPtr)
{
}

#endif
#endif

#if(CANDISP_XCVR_HANDLING == STD_ON)
#if (CANDISP_PN_XCVR_HANDLING == STD_ON)
/* ===========================================================================

 Name:            CanIf_ClearTrcvWufFlag

 =========================================================================*/
/* Std_ReturnType CanIf_ClearTrcvWufFlag(uint8 TransceiverId); */
Std_ReturnType CanIf_ClearTrcvWufFlag(uint8 TransceiverId)
{
}


/* ===========================================================================

 Name:            CanIf_CheckTrcvWakeFlag

 =========================================================================*/
/* Std_ReturnType CanIf_CheckTrcvWakeFlag(uint8 TransceiverId); */
Std_ReturnType CanIf_CheckTrcvWakeFlag(uint8 TransceiverId)
{
}
# endif /* (CANDISP_PN_XCVR_HANDLING == STD_ON) */
#endif /* (CANDISP_XCVR_HANDLING == STD_ON) */


/* ===========================================================================

 Name:            CanDisp_SetCtrlMode

 Description:     Records the updated controller mode value on change indication 

 Inputs:          CtrlId: Channel id

                  CanDispCtrlMode:  Update value

 Returns:         None

 =========================================================================*/
static void CanDisp_SetCtrlMode( CAN_UINT8 CtrlId, CanDisp_ControllerModeType CanDispCtrlMode )
{
	CAN_UINT8 FuncExecSt = E_OK;

    if( CAN_NUMBER_OF_CHANNELS <= CtrlId )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(FuncExecSt != E_NOT_OK)
	{
	    if( (CanDisp_ControllerModeType) CANDISP_CS_UNINIT == CanDisp_ControllerMode[CtrlId] )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecSt = E_NOT_OK;
			#endif
		}

	    if(FuncExecSt != E_NOT_OK)
		{
	        CanEnterCriticalSection();

	        CanDisp_ControllerMode[CtrlId] = CanDispCtrlMode;

	        CanExitCriticalSection();
		}
	}

}

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

