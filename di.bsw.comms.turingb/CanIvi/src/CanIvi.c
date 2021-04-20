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

/* ===========================================================================

  Name:           Can_Ivi.c

  Description:    CAN Ivi Layer

                  Layer to Support App Multi Frame Message.

  Organization:   Multiplex Subsystems

 =========================================================================*/
/* ===========================================================================
  I N C L U D E   F I L E S
 =========================================================================*/

#include "Can_defs.h"
#include "CanIvi.h"
#include "Can_CSec.h"
#include "CanIvi_Par_cfg.h"
#include "string.h"

//#include "..\..\..\di.app.module.2020.jmc.cx756.ic\di.module.LapavcvMdl.turing\src\DAT_COM.h"
#include "DAT_COM.h"


//#define NULL ((void*)0)


tDATCplpBuffersRx_CH1   DATCplImageBuffersReception_CH1;

tDATCdlBuffersUUTx_CH1  DATCdlBuffersUUTx_CH1;

#define YES          1
#define NO           0
#define PHONESIGNAL			2
#define AUDIO				3
#define PHONEBOOK			5
#define NAVI				6
U8 DATCplTableTramesPresentes_AVCV[7];
U8 NaviRevFlg;

/* ===========================================================================

 Name:            CanIvi_RxIndication

 Description:     Callback from Multi-Instance CAN Driver Indicating
                  Message Received

 Inputs:          none

 Returns:         none

 =========================================================================*/
void CanIvi_RxIndication(CAN_HWINST /*const*/ hwInst, CAN_UINT16 const canFrameHandle, CAN_RMD const * const pRmd)
{
    CAN_UINT8 FuncExecSt = TRUE;

	CAN_UINT16 CanId = 0;
	const CAN_UINT8 * CanPdu = NULL;

	/*Check that the Pointer to the RMD is Not NULL*/
	if(NULL == pRmd)
	{
		FuncExecSt = FALSE;
	}
	else
	{
	}


	if(FuncExecSt != FALSE)
	{
		FuncExecSt = FuncExecSt;

		CanId  = pRmd->Identifier.I32;
		CanPdu = pRmd->Data;
		
		switch (CanId)
		{
			case 0x380:
				CanEnterCriticalSection();
				(void)memcpy(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380, CanPdu, 8 );
				CanExitCriticalSection();
				DATCplTableTramesPresentes_AVCV[PHONESIGNAL] = 1;
				break;
			case 0x381:
				CanEnterCriticalSection();
				(void)memcpy(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381 , CanPdu, 8 );
				CanExitCriticalSection();
				DATCplTableTramesPresentes_AVCV[AUDIO] = 1;
				break;
			case 0x382:
				CanEnterCriticalSection();
				(void)memcpy(DATCplImageBuffersReception_CH1.MP5_0x382 , CanPdu, 8 );
				CanExitCriticalSection();
				//DATCplTableTramesPresentes_AVCV[AUDIO] = 1;
				break;
			case 0x383:
				CanEnterCriticalSection();
				(void)memcpy(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383 , CanPdu, 8 );
				CanExitCriticalSection();
				DATCplTableTramesPresentes_AVCV[PHONEBOOK] = 1;
				break;
			case 0x385:
				CanEnterCriticalSection();
				(void)memcpy(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385 , CanPdu, 8 );
				CanExitCriticalSection();
				DATCplTableTramesPresentes_AVCV[NAVI] = 1;
				NaviRevFlg = 1;
				DATACOM_WriteU8BitNaviTransmitDefault(1);
				break;
			default:
				break;	
		}
			

		//when a new msg received, set the corresponding flag to inform App layer a new msg available;
		//DATCplTableTramesPresentes_AVCV[AUDIO] = 1;
	}
	else
	{
	}
}


/* ===========================================================================

 Name:            CanIvi_TxConfirmation

 Description:     Callback from Multi-Instance CAN Driver Indicating
                  Message Transmitted

 Inputs:          none

 Returns:         none

 =========================================================================*/
void CanIvi_Transmit( const CAN_UINT8 ITxHandle)

{
    CAN_UINT8    FuncExecSt  = TRUE;
	CAN_HWINST   hwInst      = 0;
	PduIdType    CanTxHTH    = 0;
	CAN_UINT8    TxAllow     = YES;/*YES:Allow ivi tx*/
	PduInfoType  PduInfoPtr  = {NULL, 8};
	
    /*Check that the ITxHandle is valid.*/
    if(ITxHandle > cDATCdlD_UUTxHandle_CH1IC_MAX )
	{
		FuncExecSt = FALSE;
	}
	else
	{
	}


	if(FuncExecSt != FALSE)
	{

		//Parameter parse, e.g.channel convert, sdu, Id...
		//Todo...
		switch (ITxHandle)
		{
			case cDATCdlD_UUTxHandle_CH1IC_PhoneNum_0x376:
				hwInst   = IVI_CH1;
				//CanTxHTH = Can_Ch1_Ivi_Tx_Msg_IC_PhoneNum_0x376_TMH;/*refer to CanDisp_TxPduConfig[CanDisp_Number_Of_Tx_Messages]*/
				CanEnterCriticalSection();
				PduInfoPtr.SduDataPtr = DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376;
				//memcpy(PduInfoPtr.SduDataPtr, DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376, 8 );
				CanExitCriticalSection();
				break;
			case cDATCdlD_UUTxHandle_CH1IC_0x377:
				hwInst   = IVI_CH1;
				//CanTxHTH = Can_Ch1_Ivi_Tx_Msg_IC_0x377_TMH;
				CanEnterCriticalSection();
				PduInfoPtr.SduDataPtr = DATCdlBuffersUUTx_CH1.IC_0x377;
				//memcpy(PduInfoPtr.SduDataPtr, DATCdlBuffersUUTx_CH1.IC_0x377, 8 );
				CanExitCriticalSection();
				break;
			case cDATCdlD_UUTxHandle_CH1IC_Phone_RX_0x388:
				hwInst   = IVI_CH1;
				//CanTxHTH = Can_Ch1_Ivi_Tx_Msg_IC_Phone_RX_0x388_TMH;
				CanEnterCriticalSection();
				PduInfoPtr.SduDataPtr = DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388;
				//memcpy(PduInfoPtr.SduDataPtr, DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388, 8 );
				CanExitCriticalSection();
				break;
			case cDATCdlD_UUTxHandle_CH1IC_Audio_RX_0x389:
				hwInst   = IVI_CH1;
				//CanTxHTH = Can_Ch1_Ivi_Tx_Msg_IC_Audio_RX_0x389_TMH;
				CanEnterCriticalSection();
				PduInfoPtr.SduDataPtr = DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389;
				//memcpy(PduInfoPtr.SduDataPtr, DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389, 8 );
				CanExitCriticalSection();
				break;
			case cDATCdlD_UUTxHandle_CH1IC_PhoneNum_RX_0x38B:
				hwInst	 = IVI_CH1;
				//CanTxHTH = Can_Ch1_Ivi_Tx_Msg_IC_PhoneNum_RX_0x38B_TMH;
				CanEnterCriticalSection();
				PduInfoPtr.SduDataPtr = DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B;
				//memcpy(PduInfoPtr.SduDataPtr, DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B, 8 );
				CanExitCriticalSection();
				break;
			case cDATCdlD_UUTxHandle_CH1IC_PhoneNum_RX_0x38C:
				hwInst	 = IVI_CH0;
				//CanTxHTH = Can_Ch0_Ivi_Tx_Msg_IC_Nav_RX_0x38C_TMH;
				CanEnterCriticalSection();
				PduInfoPtr.SduDataPtr = DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C;
				//memcpy(PduInfoPtr.SduDataPtr, DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C, 8 );
				CanExitCriticalSection();
				break;
			default:
				TxAllow = NO;
				break;	
		}

		//Pass parameters from Ivi to CanIf.
		if (YES == TxAllow)
		{
			(void) CanIf_Transmit( hwInst, CanTxHTH, (PduInfoType *)&PduInfoPtr);
		}
		else
		{
		}
	}
	else
	{
	}

}


/* ===========================================================================

 Name:            DATCilSendMessage

 Description:     CAN message transmit function to Ivi

 Inputs:          ControllerId: CAN Channel ID

                  CanTxHTH:  Message Handle

                  PduInfoPtr: Transmit message data pointer

 Returns:         TransmitRetValue:  Flag Indicating Transmit message Success

 =========================================================================*/
void DATCilSendMessage(const CAN_UINT8 ITxHandle)
{
	CanIvi_Transmit(ITxHandle);
}


/* ===========================================================================

 Name:            DATCilSendMessage_CH1

 Description:     CAN message transmit function to Ivi

 Inputs:          ControllerId: CAN Channel ID

                  CanTxHTH:  Message Handle

                  PduInfoPtr: Transmit message data pointer

 Returns:         TransmitRetValue:  Flag Indicating Transmit message Success

 =========================================================================*/
void DATCilSendMessage_CH1(const CAN_UINT8 ITxHandle)
{
	CanIvi_Transmit(ITxHandle);
}


#ifdef CANIVI_TXCONFIRMATION_ENABLE
/* ===========================================================================

 Name:            CanIvi_TxConfirmation

 Description:     Callback from Multi-Instance CAN Driver Indicating
                  Message Transmitted

 Inputs:          none

 Returns:         none

 =========================================================================*/
void CanIvi_TxConfirmation( CAN_HWINST /*const*/ hwInst, CAN_RMD const * const pRmd )
{
    CAN_UINT8 FuncExecSt = TRUE;
	
    /*
     Check that the Pointer to the RMD is Not NULL
    */
    if(NULL == pRmd)
	{
		FuncExecSt = FALSE;
	}
	else
	{
	}


	if(FuncExecSt != FALSE)
	{
	
	}
	else
	{
	}
}
#endif




