#if !defined( CAN_DISP_H )
#define CAN_DISP_H

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
**  Name:           CanDisp.h
**
**  Description:    CAN Dispatcher function prototypes
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

#include "Std_Types.h"
#include "can_defs.h"
#include "Compiler_Cfg_Comm.h"
#include "CanDisp_Defines.h"
#include "CanDisp_Cfg.h"
#include "EcuM_Types.h"

/****************************************************************************/
/*  Function prototypes                                                     */
/****************************************************************************/

/* Initialisation of global variables, call once before any other CanDisp function */
/* void CanIf_InitMemory(void); */
extern FUNC(void, CANDISP_CODE) CanIf_InitMemory(void);

/* void CanIf_Init(const CanDisp_ConfigType *ConfigPtr) */
extern FUNC(void, CANDISP_CODE) CanIf_Init( P2CONST(CanDisp_ConfigType, AUTOMATIC, CANDISP_XCFG) ConfigPtr);




/* Std_ReturnType CanIf_Transmit(PduIdType CanTxPduId, PduInfoType *PduInfoPtr) */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_Transmit(CAN_HWINST hwInst, PduIdType CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, CANDISP_APPL_MSG_VAR) PduInfoPtr);
                                          

/* Cancellation of TxPDUs */
/* Std_ReturnType CanIf_CancelTransmit(PduIdType CanTxPduId); */
# if (CANDISP_CANCEL_SUPPORT_API == STD_ON)
FUNC(Std_ReturnType, CANDISP_CODE) CanIf_CancelTransmit(uint8 CtrlId, PduIdType CanTxPduId);
# endif /* CANDISP_CANCEL_SUPPORT_API == STD_ON */


# if (CAN_NUMBER_OF_CHANNELS > 1)
/* Data Reading/Copying of RxPDUs */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_ReadRxPduData(uint8 CtrlId, PduIdType CanDispRxSduId, PduInfoType* CanDispRxInfoPtr);
# else
/* Data Reading/Copying of RxPDUs */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_ReadRxPduData(PduIdType CanDispRxSduId, PduInfoType* CanDispRxInfoPtr);
# endif


# if (CAN_NUMBER_OF_CHANNELS > 1)
/* Tx Confirmation status to upper layers*/
extern FUNC(CanDisp_NotifStatusType, CANDISP_CODE) CanIf_ReadTxNotifStatus(uint8 CtrlId, PduIdType CanDispTxSduId);
# else
/* Tx Confirmation status to upper layers*/
extern FUNC(CanDisp_NotifStatusType, CANDISP_CODE) CanIf_ReadTxNotifStatus(PduIdType CanDispTxSduId);
# endif

# if (CAN_NUMBER_OF_CHANNELS > 1)
/* Rx Indication status to upper layers*/
extern FUNC(CanDisp_NotifStatusType, CANDISP_CODE) CanIf_ReadRxNotifStatus(uint8 CtrlId, PduIdType CanIfRxSduId);
#else
/* Rx Indication status to upper layers*/
extern FUNC(CanDisp_NotifStatusType, CANDISP_CODE) CanIf_ReadRxNotifStatus(PduIdType CanIfRxSduId);
#endif

/* Std_ReturnType CanIf_SetPduMode(uint8 ControllerId, CanDisp_PduSetModeType PduModeRequest); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_SetPduMode(uint8 CtrlId, CanDisp_PduModeType PduModeRequest);

/* Std_ReturnType CanIf_GetPduMode(uint8 ControllerId, CanDisp_PduGetModeType *PduModePtr); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_GetPduMode(uint8 CtrlId, P2VAR(CanDisp_PduModeType, AUTOMATIC, CANDISP_APPL_STATE_VAR) PduModePtr);

# if(CANDISP_SETDYNAMICTXID_API == STD_ON)
/*void CanIf_SetDynamicTxId(PduIdType CanTxPduId, Can_IdType CanId)*/
extern FUNC(void, CANDISP_CODE) CanIf_SetDynamicTxId(uint8 CtrlId, PduIdType CanTxPduId, Can_IdType CanId);
# endif /* CANDISP_SETDYNAMICTXID_API == STD_ON */

/* Std_ReturnType CanIf_SetControllerMode(uint8 ControllerId, CanDisp_ControllerModeType ControllerMode) */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_SetControllerMode(uint8 CtrlId, CanDisp_ControllerModeType ControllerMode);

/* Std_ReturnType CanIf_GetControllerMode(uint8 ControllerId, CanDisp_ControllerModeType *ControllerModePtr); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_GetControllerMode(uint8 CtrlId, P2VAR(CanDisp_ControllerModeType, AUTOMATIC, CANDISP_APPL_STATE_VAR) ControllerModePtr);


#if (CANDISP_SET_BAUDRATE_API == STD_ON)
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_SetBaudrate(uint8 CtrlId, uint16 BaudRateConfigID);
#endif


# if(CANDISP_XCVR_HANDLING == STD_ON)
/* Std_ReturnType CanIf_SetTrcvMode(uint8 TransceiverId, CanXcvr_XcvrModeType TransceiverMode); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_SetTrcvMode(uint8 TransceiverId, CanXcvr_XcvrModeType TransceiverMode);

/* Std_ReturnType CanIf_GetTransceiverMode(uint8 TransceiverId, CanXcvr_XcvrModeType *TransceiverModePtr) */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_GetTrcvMode(P2VAR(CanXcvr_XcvrModeType, AUTOMATIC, CANDISP_APPL_STATE_VAR) TransceiverModePtr, uint8 TransceiverId);

/* Std_ReturnType CanIf_GetTrcvWakeupReason(uint8 TransceiverId, CanXcvr_XcvrModeType *XcvrWuReasonPtr); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_GetTrcvWakeupReason(uint8 TransceiverId, P2VAR(CanXcvr_XcvrWakeupReasonType, AUTOMATIC, CANDISP_APPL_STATE_VAR) XcvrWuReasonPtr);

/* Std_ReturnType CanIf_SetTransceiverWakeupMode(uint8 TransceiverId, CanXcvr_XcvrModeType XcvrWakeupMode); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_SetTrcvWakeupMode(uint8 TransceiverId, CanXcvr_XcvrModeType XcvrWakeupMode);
# endif  /* CANDISP_XCVR_HANDLING == STD_ON */

# if (CANDISP_WAKEUP_SUPPORT == STD_ON)
/* Wake Up Handling */
/* Std_ReturnType CanIf_CheckWakeup(EcuM_WakeupSourceType WakeupSource); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_CheckWakeup(EcuM_WakeupSourceType WakeupSource);
# endif  /* CANDISP_WAKEUP_SUPPORT == STD_ON */

# if ((CANDISP_WAKEUP_SUPPORT == STD_ON) && (CANDISP_WAKEUP_VALIDATION == STD_ON))
/* Std_ReturnType CanIf_CheckValidation(EcuM_WakeupSourceType WakeupSource); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_CheckValidation(EcuM_WakeupSourceType WakeupSource);
# endif  /* (CANDISP_WAKEUP_SUPPORT == STD_ON) && (CANDISP_WAKEUP_VALIDATION == STD_ON) */

#if (CANDISP_PUBLIC_TX_CONFIRM_POLLING_SUPPORT == STD_ON)
/* CanDisp_NotifStatusType CanIf_GetTxConfirmationState(uint8 Controller); */
extern FUNC(CanDisp_NotifStatusType, CANDISP_CODE) CanIf_GetTxConfirmationState(uint8 ControllerId);
#endif   /* CANDISP_PUBLIC_TX_CONFIRM_POLLING_SUPPORT == STD_ON */

#if(CANDISP_XCVR_HANDLING == STD_ON)
#if (CANDISP_PN_XCVR_HANDLING == STD_ON)
/* Std_ReturnType CanIf_ClearTrcvWufFlag(uint8 TransceiverId); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_ClearTrcvWufFlag(uint8 TransceiverId);

/* Std_ReturnType CanIf_CheckTrcvWakeFlag(uint8 TransceiverId); */
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_CheckTrcvWakeFlag(uint8 TransceiverId);
# endif /* (CANDISP_PN_XCVR_HANDLING == STD_ON) */
#endif /* (CANDISP_XCVR_HANDLING == STD_ON) */


/*********************************************************************************************************************/
/** Callback Functions & Notifications */
/*********************************************************************************************************************/

# if (CANDISP_TRIGGER_TRANSMIT_API == STD_ON)
extern FUNC(Std_ReturnType, CANDISP_CODE) CanIf_TriggerTransmit(PduIdType TxPduId, PduInfoType* PduInfoPtr);
# endif /* CANDISP_TRIGGER_TRANSMIT_API == STD_ON */

/* void CanIf_TxConfirmation(PduIdType CanTxPduId); */
extern FUNC(void, CANDISP_CODE) CanIf_TxConfirmation(PduIdType CanTxPduId);

/* void CanIf_RxIndication(CanDisp_HwHandleType Hrh, Can_IdType CanId, uint8 CanDlc, const uint8 *CanSduPtr); */
extern FUNC(void, CANDISP_CODE) CanIf_RxIndication(CanDisp_HwHandleType Hrh, Can_IdType CanId, uint8 CanDlc, P2CONST(uint8, AUTOMATIC, CANDISP_CBK_DRV_VAR)CanSduPtr);

/* void CanIf_CancelTxConfirmation(const Can_PduType *PduInfoPtr); */
#if (CANDISP_TRANSMIT_BUFFER == STD_ON)
# if (CANDISP_TRANSMIT_CANCELLATION == STD_ON)
extern FUNC(void, CANDISP_CODE) CanIf_CancelTxConfirmation(uint8 CtrlId, PduIdType CanTxPduId, P2CONST(Can_PduType, AUTOMATIC, CANDISP_CBK_DRV_VAR) PduInfoPtr);
# endif    /* (CANDISP_TRANSMIT_CANCELLATION == STD_ON) */
#endif   /* (CANDISP_TRANSMIT_BUFFER == STD_ON) */

/* void CanIf_ControllerBusOff(uint8 ControllerId); */
extern FUNC(void, CANDISP_CODE) CanIf_ControllerBusOff(uint8 CtrlId);

/* NON AUTOSAR callback functions*/

#if (CANDISP_CANCEL_SUPPORT_API == STD_ON)
/* void CanIf_CancelTxNotification(PduIdType PduId, CanDisp_CancelResultType IsCancelled); */
extern FUNC(void, CANDISP_CODE) CanIf_CancelTxNotification(uint8 CtrlId, PduIdType PduId, CanDisp_CancelResultType IsCancelled);
#endif

#if(CANDISP_XCVR_HANDLING == STD_ON)
# if(CANDISP_PN_XCVR_HANDLING == STD_ON)
/* void CanIf_ConfirmPnAvailability(uint8 TransceiverId); */
extern FUNC(void, CANDISP_CODE) CanIf_ConfirmPnAvailability(uint8 TransceiverId);

/* void CanIf_ClearTrcvWufFlagIndication(uint8 TransceiverId); */
extern FUNC(void, CANDISP_CODE) CanIf_ClearTrcvWufFlagIndication(uint8 TransceiverId);

/* void CanIf_CheckTrcvWakeFlagIndication(uint8 TransceiverId); */
extern FUNC(void, CANDISP_CODE)CanIf_CheckTrcvWakeFlagIndication(uint8 TransceiverId);
# endif /* (CANDISP_PN_XCVR_HANDLING == STD_ON) */
#endif /* (CANDISP_XCVR_HANDLING == STD_ON) */

/* void CanIf_ControllerModeIndication(uint8 Controller, CanDisp_ControllerModeType ControllerMode); */
extern FUNC(void, CANDISP_CODE) CanIf_ControllerModeIndication(uint8 CtrlId, CanDisp_ControllerModeType ControllerMode);

/* void CanDisp_TrcvModeIndication(uint8 TransceiverId, CanXcvr_XcvrModeType TransceiverMode); */
extern FUNC(void, CANDISP_CODE) CanDisp_TrcvModeIndication(uint8 TransceiverId, CanXcvr_XcvrModeType TransceiverMode);


/*********************************************************************************************************************/
/** Can Il Interfaces */
/*********************************************************************************************************************/

/**********************************************************************************************************************
\brief    The function is called by the CanDisp to indicate the complete reception of a CanDisp I-PDU.\n
          The call is routed to an upper Dispatch module using the appropriate I-PDU handle of the destination layer.
\param    RxPduId           ID of the received CanDisp I-PDU
\param    PduInfoPtr        Payload information of the received I-PDU (pointer to data and data length)
\return   none
\pre      Com_Init() is executed successfully.
\context  This function can be called on interrupt and task level and has not to be interrupted by other\n
          PduR_CanIfRxIndication calls for the same CanDispRxPduId.
\note     The function is called by CanDisp.
**********************************************************************************************************************/
extern FUNC(void, CCL_CODE) PduR_CanIfRxIndication(uint8 CtrlId, PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, CCL_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
\brief    The function is called by the CanDisp to indicate the complete transmission of a CanDisp I-PDU.\n
          The call is routed to an upper Dispatch module using the appropriate I-PDU handle of the destination layer.
\param    TxPduId           ID of the received CanDisp I-PDU
\return   none
\pre      Com_Init() is executed successfully.
\context  This function can be called on interrupt and task level and has not to be interrupted by other\n
          PduR_CanIfTxConfirmation calls for the same CanDispTxPduId.
\note     The function is called by CanDisp.
**********************************************************************************************************************/
extern FUNC(void, CCL_CODE) PduR_CanIfTxConfirmation(uint8 CtrlId, PduIdType TxPduId);

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CAN_DISP_H */

