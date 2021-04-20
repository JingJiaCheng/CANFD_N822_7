#if !defined( CCL_MGR_H )
#define CCL_MGR_H

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
**  Name:           CanSm.h
**
**  Description:    CAN State Manager header file 
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

# include <CclStack_Types.h>
# include "Rte_Type.h"
# include <CanDisp_GeneralTypes.h>
# include "CanDisp_Defines.h"
# include "CanSm_Defines.h"
# include "CanSm_Cfg.h"
# include "CanSm_Par_Cfg.h"
# include "CanSm_Asr.h"

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

/* ===========================================================================
** G L O B A L   C O N S T A N T   D E F I N I T I O N S
** =========================================================================*/

/****************************************************************************/
/*  Function prototypes                                                     */
/****************************************************************************/

/* initialization function of the CanSm */
#if (CANSM_INIT_HAS_POINTER_PARAM == STD_ON)
extern FUNC(void, CCLMGR_CODE) CanSm_Init( void/*NetworkHandleType Channel,*/ P2CONST(CanSm_ConfigType, AUTOMATIC, CCLMGR_INIT_DATA) ConfigPtr);
#else
extern FUNC(void, CCLMGR_CODE) CanSm_Init( void/*NetworkHandleType Channel*/);
#endif

/* initialization of CanSm memory */
extern FUNC(void, CCLMGR_CODE) CanSm_InitMemory(void);

/* de-initialization function of the CanSm */
extern FUNC(void, CCLMGR_CODE) CanSm_DeInit(void);

/* Can Communication Manager Main Function */
extern void ComM_MainFunction_0( void );

/* Can State Manager Main Function */
extern FUNC(void, CCLMGR_CODE) CanSm_MainFunction(NetworkHandleType Channel);

/* get the CanSm initialization status */
extern FUNC(Std_ReturnType, CCLMGR_CODE) CanSm_GetStatus(P2VAR(CanSm_InitStatusType, AUTOMATIC, CCLMGR_APPL_VAR) Status);

/* get CanSm state per channel */
extern FUNC(Std_ReturnType, CCLMGR_CODE) CanSm_GetState( NetworkHandleType Channel, P2VAR(CanSm_StateType, AUTOMATIC, CCLMGR_APPL_VAR) State);

/* Get the current inhibition status */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_GetInhibitionStatus( NetworkHandleType Channel, P2VAR(CanSm_InhibitionStatusType, AUTOMATIC, CCLMGR_APPL_VAR) Status);

/* set the prevent wake up state */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_PreventWakeUp( NetworkHandleType Channel, boolean Status);

/* set the inhibition state to no communication */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_LimitChannelToNoComMode( NetworkHandleType Channel, boolean Status);

/* limt the ECU to no communication mode */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_LimitECUToNoComMode(CAN_BOOLEAN Status);

/* read the full communication inhibit counter */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_ReadInhibitCounter(P2VAR(uint16, AUTOMATIC, CCLMGR_APPL_VAR) CounterValue);

/* reset the full communication inhibit counter */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_ResetInhibitCounter(void);

/* set the ECU group calssification */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_SetECUGroupClassification(ComM_InhibitionStatusType Status);

/* request a communication mode for an User */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_RequestComMode(CanSm_UserHandleType User, CanSm_ModeType CclMode);

/* Get the maximum allowed communication mode of an User */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_GetMaxComMode(CanSm_UserHandleType User, P2VAR(CanSm_ModeType, AUTOMATIC, CCLMGR_APPL_VAR) CclMode);

/* Get the requested communication mode of an user */
extern FUNC(Std_ReturnType, CCLMGR_CODE) ComM_GetRequestedComMode(CanSm_UserHandleType User, P2VAR(CanSm_ModeType, AUTOMATIC, CCLMGR_APPL_VAR) CclMode);

/* Get the current communication mode of an user */
extern Std_ReturnType ComM_GetCurrentComMode(CanSm_UserHandleType User, P2VAR(CanSm_ModeType, AUTOMATIC, CCLMGR_APPL_VAR) CclMode);


/*********************************************************************************************************************/
/** Callback Functions & Notifications */
/*********************************************************************************************************************/

/* Indication that some nodes in the network have entered the Network Mode. */
extern FUNC(void, CCLMGR_CODE) ComM_Nm_NetworkStartIndication( NetworkHandleType  Channel );

/* Notification that the network management has entered Network Mode. */
extern FUNC(void, CCLMGR_CODE) ComM_Nm_NetworkMode( NetworkHandleType  Channel );

/* Notification that the network management has entered Prepare Bus-Sleep Mode. */
extern FUNC(void, CCLMGR_CODE) ComM_Nm_PrepareBusSleepMode( NetworkHandleType  Channel );

/* Notification that the network management has entered Bus-Sleep Mode. */
extern FUNC(void, CCLMGR_CODE) ComM_Nm_BusSleepMode( NetworkHandleType  Channel );

/* Notification that the CAN Generic NM state has changed. */
extern FUNC(void, CCLMGR_CODE) ComM_Nm_RestartIndication( NetworkHandleType  Channel );

/* active diagnostic indication */
extern FUNC(void, CCLMGR_CODE) ComM_DCM_ActiveDiagnostic(NetworkHandleType Channel);

/* inactive diagnostic indication */
extern FUNC(void, CCLMGR_CODE) ComM_DCM_InactiveDiagnostic(NetworkHandleType Channel);

extern FUNC(void, CCLMGR_CODE) ComM_CommunicationAllowed(NetworkHandleType Channel, CAN_BOOLEAN Allowed);

/* passive wake up indication */
extern FUNC(void, CCLMGR_CODE) ComM_EcuM_WakeUpIndication(NetworkHandleType Channel);

extern FUNC(void, CCLMGR_CODE) ComM_BusSM_ModeIndication(NetworkHandleType Channel, P2VAR(CanSm_ModeType, AUTOMATIC, CCLMGR_APPL_VAR) CclMode);

/*********************************************************************************************************************/
/** Scheduled functions */
/*********************************************************************************************************************/
extern FUNC(void, CCLMGR_CODE) ComM_MainFunction(NetworkHandleType Channel);
extern void ComM_Nm_txStopNormal( NetworkHandleType  Channel );
/**************************************************************/
/** CAN Communication Manager interfaces **/
/**************************************************************/

/***********************************************************************************************************************
 *  CanSM_StartWakeupSources
 **********************************************************************************************************************/
/*! \brief      This callback function indicates that the Ecu Manager needs to validate a CAN wake up
 *  \param[in]  CanMgr_NetworkHandle    Affected system channel
 *  \return     E_OK                    The CanXcvr mode and CanDrv modes have been changed successfully or no change was necessary
 *              E_NOT_OK                It was not possible to set the CanXcvr or CanDrv to the required state.
 *  \pre        Input parameter must be valid.
 *  \context    Function could be called from task level
 *  \note
 **********************************************************************************************************************/
extern FUNC( Std_ReturnType, CANMGR_CODE ) CanSM_StartWakeupSources( NetworkHandleType CanSm_NetworkHandle );


/***********************************************************************************************************************
 *  CanSM_StopWakeupSources
 **********************************************************************************************************************/
/*! \brief      This callback function indicates that the Ecu Manager has finished the validation of a CAN wake up
 *  \param[in]  CanMgr_NetworkHandle    Affected system channel
 *  \param[in]  WakeupSource            The wakeup source handle of the channel which should be stopped
 *  \return     E_OK                    The CanXcvr and CanDrv has been set successful in the required states or a new wakeup has been started
 *  \return     E_NOT_OK                It was not possible to set the CanXcvr or CanDrv to the required state.
 *  \pre        Input parameter must be valid.
 *  \context    Function could be called from task level
 *  \note
 **********************************************************************************************************************/
extern FUNC( Std_ReturnType, CANMGR_CODE ) CanSM_StopWakeupSources( NetworkHandleType CanSm_NetworkHandle, EcuM_WakeupSourceType WakeupSource  );

extern FUNC( Std_ReturnType, CANMGR_CODE ) CanSM_RequestComMode( NetworkHandleType CanSm_NetworkHandle, CanSm_ModeType CanSm_RequestedComMgrMode );

extern FUNC( Std_ReturnType, CANMGR_CODE ) CanSM_GetCurrentComMode( NetworkHandleType CanSm_NetworkHandle, P2VAR( CanSm_ModeType, AUTOMATIC, CANMGR_APPL_VAR ) CanSm_ComMgrModePtr);

#if ( STD_ON == CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG )

/***********************************************************************************************************************
 *  CanSM_ClearTrcvWufFlagIndication
 **********************************************************************************************************************/
extern FUNC( void, CANMGR_CODE ) CanSM_ClearTrcvWufFlagIndication( uint8  CanSm_TransceiverId );

/***********************************************************************************************************************
 *  CanSM_CheckTransceiverWakeFlagIndication
 **********************************************************************************************************************/
extern FUNC( void, CANMGR_CODE ) CanSM_CheckTransceiverWakeFlagIndication  ( uint8  CanSm_TransceiverId );

/***********************************************************************************************************************
 *  CanSM_ConfirmPnAvailability
 **********************************************************************************************************************/
extern FUNC( void, CANMGR_CODE ) CanSM_ConfirmPnAvailability ( uint8 CanSm_TransceiverId );

#endif /* end else if ( STD_ON == CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG ) */

/***********************************************************************************************************************
 *  CanSM_ControllerBusOff
 **********************************************************************************************************************/
extern FUNC( void, CANMGR_CODE ) CanSM_ControllerBusOff( uint8 CanSm_ControllerId );

/***********************************************************************************************************************
 *  CanSM_ControllerModeIndication
 **********************************************************************************************************************/
extern FUNC( void, CANMGR_CODE ) CanSM_ControllerModeIndication( uint8 CanSm_ControllerId, CanDisp_ControllerModeType CanSm_ControllerMode );

#if ( STD_ON == CANSM_TRANSCEIVERIDOFCHANNELCONFIG )
/***********************************************************************************************************************
 *  CanSM_TransceiverModeIndication
 **********************************************************************************************************************/
extern FUNC( void, CANMGR_CODE ) CanSM_TransceiverModeIndication( uint8 CanSm_TransceiverId, CanXcvr_XcvrModeType CanSm_TransceiverMode );

#endif /* if ( STD_ON == CANSM_TRANSCEIVERIDOFCHANNELCONFIG ) */

#if ( ( STD_ON == CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG ) || ( STD_ON == CANSM_PARTIAL_NW_WAKEUP_FILTEROFCHANNELCFG ) )
/***********************************************************************************************************************
 *  CanSM_TxTimeoutException
 **********************************************************************************************************************/
extern FUNC( void, CANMGR_CODE ) CanSM_TxTimeoutException( NetworkHandleType CanSm_NetworkHandle );

#endif /*  CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG   CANSM_PARTIAL_NWK_WAKEUP_FILTEROFCHANNELCFG */


/* Can State Manager Main Function */
extern FUNC(void, CANMGR_CODE) Nm_MainFunction(void);

/* Notification that the network management has entered Network Mode. */
extern FUNC( void, NM_CODE ) Nm_NetworkMode( NetworkHandleType const nmNetworkHandle );

/* Notification that the network management has entered Bus-Sleep Mode. */
extern FUNC( void, NM_CODE ) Nm_BusSleepMode( NetworkHandleType const nmNetworkHandle );

/* Notification that the network management has entered Prepare Bus-Sleep Mode. */
extern FUNC( void, NM_CODE ) Nm_PrepareBusSleepMode( NetworkHandleType const nmNetworkHandle );

/* Rx indication function for NM message. */
/*extern void Nm_RxIndication(uint8 CtrlId, PduIdType RxPduId, CAN_RMD const * const pRmd );*/

/* Tx confirmation function for NM message. */
/*extern void Nm_TxConfirmation(uint8 CtrlId,  VAR( PduIdType, AUTOMATIC ) TxPduId );*/

# if ( NM_COM_CONTROL_ENABLED == STD_ON )
/**********************************************************************************************************************
 * Nm_EnableCommunication
 *********************************************************************************************************************/
/*! \brief      Enables the NM PDU transmission ability. 
 *  \param[in]  nmNetworkHandle       Identification of the NM-channel
 *  \return     E_OK - No error
 *  \return     E_NOT_OK - Disabling of NM PDU transmission ability has failed
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called by application
 *********************************************************************************************************************/
extern FUNC( Std_ReturnType, NM_CODE ) Nm_EnableCommunication( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle );

/**********************************************************************************************************************
 * Nm_DisableCommunication
 *********************************************************************************************************************/
/*! \brief      Disables the NM PDU transmission ability. 
 *  \param[in]  nmNetworkHandle       Identification of the NM-channel
 *  \return     E_OK - No error
 *  \return     E_NOT_OK - Disabling of NM PDU transmission ability has failed
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called by application
 *********************************************************************************************************************/
extern FUNC( Std_ReturnType, NM_CODE ) Nm_DisableCommunication( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle );

#endif /* ( NM_COM_CONTROL_ENABLED == STD_ON ) */


/**********************************************************************************************************************
 * Nm_NetworkStartIndication
 *********************************************************************************************************************/
/*! \brief      Notification that a NM-message has been received in the Bus-Sleep Mode
 *  \param[in]  nmNetworkHandle       Identification of the NM-channel
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called by the lower layers bus-specific Network Management modules
 *********************************************************************************************************************/
extern FUNC( void, NM_CODE ) Nm_NetworkStartIndication( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle );


/*********************************************************************************************************************/
/** Communication Manager -> NM Interfaces */
/*********************************************************************************************************************/

extern Std_ReturnType Nm_PassiveStartUp(NetworkHandleType const nmNetworkHandle);

# if ( NM_PASSIVE_MODE_ENABLED == STD_OFF )
FUNC( Std_ReturnType, NM_CODE ) Nm_NetworkRequest( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle );
FUNC( Std_ReturnType, NM_CODE ) Nm_NetworkRelease( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle );
# endif

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CCL_MGR_H */
