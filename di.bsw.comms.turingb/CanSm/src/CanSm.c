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
**  Name:           CanSm.c
**
**  Description:    CAN State manager source file
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

#include "can_defs.h"
#include "CanIl_Util.h"
#include "Can_CSec.h"
#include "CanDisp.h"
#include "CanSm.h"
#include "CanNm.h"
#include "CanXcvr.h"
#include "BswM_CanSM.h"
#include "BswM_ComM.h"
#include "CanSm_Par_Cfg.h"
#include "Dcm.h"
#include "Dcm_Cbk.h"
#include "CanCcl.h"
#include "CanIl.h"
#include "Dem.h"

#include "EcuMExt_RI.h"
#include "EcuMExt_CFG.h"
#include "appctrl.h"

/* ===========================================================================
  F I L E   S C O P E   V A R I A B L E   D E C L A R A T I O N S
 =========================================================================*/

static CAN_UINT8 CanSm_Status[CANSM_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanSm_Request[CANSM_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanSm_CurrState[CANSM_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanSm_CommState[CANSM_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanSm_BusoffFlag[CANSM_NUMBER_OF_CHANNELS];		//Bus Off Flag
/*
#if ( CANSM_DCM_INDICATION == STD_ON )
static CAN_UINT8 CanSm_DcmRequestActive[CANSM_NUMBER_OF_CHANNELS];
#endif
*/

static CAN_UINT8 CanSm_InitStatus = CANSM_UNINIT;

static CAN_UINT16 CanSm_BusoffCntr[CANSM_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanSm_BusOffModeCntr[CANSM_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanSm_BusOffMode[CANSM_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanSm_BusoffRecoveryCntr[CANSM_NUMBER_OF_CHANNELS];

static CAN_UINT8 CanSm_BusoffDtcCntr[CANSM_NUMBER_OF_CHANNELS];

static void CanSM_TransitionFullComReached( uint8 CanSM_CanNetworkIdx );

static void CanSM_TransitionFullToSilent( uint8 CanSM_CanNetworkIdx );

static void CanSM_TransitionNoComReached( NetworkHandleType * CanSM_NetworkHandle );

static void CanSM_NetworkStatemachine( uint8 CanSM_CanNetworkIdx );

static CAN_UINT8 CanSM_GetControllerMode( uint8 CanSm_ControllerId, CanDisp_ControllerModeType * CtrlMode );

static void CanSM_Bus_Off_DtcProcess( uint8 CanSm_ControllerId );

extern void VNM_CB_BusOff(void);

//extern boolean CDcmExt_GetEnterConditionStatus(void);
extern boolean dem_IGN_ON_5s;
extern boolean dem_batt_state;
extern boolean dem_all_block_read_finish_bool;
boolean dem_Can_Busoff_bool;             //Lost Communication DTC Record Must BUS Active
static boolean Can_Busoff_Change_Flag=FALSE;
static uint8 l_dem_busoff_count=0;
extern boolean NM_BusOffState; 


#define SM_UNUSED_VAR(X)  do { if(0 == (X)){} } while(0)
#define COMVNIM_DTC_MONITOR_ISENABLE       ((dem_IGN_ON_5s == TRUE) && (dem_batt_state == TRUE) && (dem_all_block_read_finish_bool == TRUE))      //(CDcmExt_GetEnterConditionStatus == TRUE)          

#define CAN_CHANEL_0     	 0  

/* ===========================================================================

 Name:            ComM_Init

 Description:     Set Signal Value in the Specified Transmit CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 =========================================================================*/
/* Initialization function of the CanSm */
#if (CANSM_INIT_HAS_POINTER_PARAM == STD_ON)
void CanSm_Init(P2CONST(CclMgr_ConfigType, AUTOMATIC, CCLMGR_INIT_DATA) ConfigPtr)
#else
void CanSm_Init( void )
#endif
{
    CAN_UINT8 ChannelIndex;

    for(ChannelIndex = 0; ChannelIndex < CANSM_NUMBER_OF_CHANNELS; ChannelIndex++)
	{
	    CanSm_Request[ChannelIndex]   = CANSM_NO_COM_NO_PENDING_REQUEST;   /* reset the communication request flag */

	    CanSm_Status[ChannelIndex]    = CANSM_NO_COMMUNICATION;            /* set the CanSm mode NO Communication */

	    CanSm_CommState[ChannelIndex] = FALSE;

        CanSm_CurrState[ChannelIndex] =	CANSM_NO_COMMUNICATION;
/*
#if ( CANSM_DCM_INDICATION == STD_ON )
        CanSm_DcmRequestActive[ChannelIndex] = FALSE;                      // no DCM request is pending
#endif
*/
        CanSm_BusoffCntr[ChannelIndex] = 0;

		CanSm_BusOffModeCntr[ChannelIndex] = 0;

		CanSm_BusOffMode[ChannelIndex] = CANSM_BUSOFF_FAST_RECOVERY_MODE;

		CanSm_BusoffRecoveryCntr[ChannelIndex] = 0;

		CanSm_BusoffFlag[ChannelIndex] = FALSE;
		
		CanSm_BusoffDtcCntr[ChannelIndex] = 0;
	}

    CanSm_InitStatus = CANSM_INIT;
}


/* ===========================================================================

 Name:            CanIlRxPutSignal

 Description:     Set Signal Value in the Specified Transmit CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 =========================================================================*/
/* Initialization of CanSm memory */
void ComM_InitMemory(void)
{
}


/* ===========================================================================

 Name:            CanIlRxPutSignal

 Description:     Set Signal Value in the Specified Transmit CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 =========================================================================*/
/* De-initialization function of the CanSm */
void ComM_DeInit(void)
{
    CAN_UINT8 ChannelIndex;

	CAN_BOOLEAN DeInitCondition = TRUE;

    CanEnterCriticalSection();
    
    for(ChannelIndex = 0; ChannelIndex < CANSM_NUMBER_OF_CHANNELS; ChannelIndex++)
	{
	    if(CANSM_NO_COMMUNICATION != CanSm_Status[ChannelIndex])
		{
		   DeInitCondition = FALSE;
		   break;
		}
	}

    if(TRUE == DeInitCondition)
	{
        CanSm_InitStatus = CANSM_UNINIT;
	}

    CanExitCriticalSection();

}


void ComM_MainFunction_0( void )
{
}

/* ===========================================================================

 Name:            ComM_GetStatus

 Description:     Set Signal Value in the Specified Transmit CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 =========================================================================*/
/* Get the CanSm initialization status */
Std_ReturnType ComM_GetStatus(P2VAR(CanSm_InitStatusType, AUTOMATIC, CCLMGR_APPL_VAR) Status)
{
    Std_ReturnType GetStatusInfo = E_OK;
    
    if(NULL == Status)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetStatusInfo = E_NOT_OK;
		#endif
	}

    if(E_NOT_OK != GetStatusInfo)
	{
        *Status = CanSm_InitStatus;
	}

    return(GetStatusInfo);

}


/* ===========================================================================

 Name:            ComM_GetState

 Description:     Set Signal Value in the Specified Transmit CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 =========================================================================*/
/* Get CanSm state per channel */
Std_ReturnType ComM_GetState( NetworkHandleType Channel, P2VAR(CanSm_StateType, AUTOMATIC, CCLMGR_APPL_VAR) State)
{
	Std_ReturnType GetStateInfo = E_OK;

    if(CANSM_UNINIT == CanSm_InitStatus)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetStateInfo = E_NOT_OK;
		#endif
	}

    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetStateInfo = E_NOT_OK;
		#endif
	}

    if(NULL == State)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetStateInfo = E_NOT_OK;
		#endif
	}

    if(E_NOT_OK != GetStateInfo)
	{
	    *State = CanSm_Status[Channel];
	}

	return(GetStateInfo);

}


/*********************************************************************************************************************
  FUNCTION: ComM_CommunicationAllowed
----------------------------------------------------------------------------------------------------------------------
  API     Type                    Name                    Description
----------------------------------------------------------------------------------------------------------------------
   Input: NetworkHandleType       Channel                 channel handle
  Output: boolean                 Allowed                 allowed state (TRUE, FALSE)
  Return: -
----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
----------------------------------------------------------------------------------------------------------------------
     Called by: Ecu Manager or BswM
  Precondition: CanSm is initialized

  This functions indicates the CanSm if communication is allowed. The flag is only evaluated during the startup of a
  communication channel out of CANSM_NO_COMMUNICATION. The default is FALSE means communciation is not allowed and the
  communication channel is not started until the CanSm gets the indication with TRUE.
*********************************************************************************************************************/
void ComM_CommunicationAllowed(NetworkHandleType Channel, CAN_BOOLEAN Allowed)
{
    CAN_UINT8 FuncExecSt = E_OK;

    if(CANSM_UNINIT == CanSm_InitStatus)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(TRUE < Allowed)
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

	    CanSm_CommState[Channel] = Allowed;

	    CanExitCriticalSection();
	}

}


/* ===========================================================================

 Name:            ComM_GetInhibitionStatus

 =========================================================================*/
/* Get the current inhibition status */
Std_ReturnType ComM_GetInhibitionStatus( NetworkHandleType Channel, P2VAR(CanSm_InhibitionStatusType, AUTOMATIC, CCLMGR_APPL_VAR) Status)
{
    Std_ReturnType ReturnStatus = E_OK;

	SM_UNUSED_VAR(Channel);
    SM_UNUSED_VAR(Status);

    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_PreventWakeUp

 =========================================================================*/
/* set the prevent wake up state */
Std_ReturnType ComM_PreventWakeUp( NetworkHandleType Channel, boolean Status)
{
    Std_ReturnType ReturnStatus = E_OK;

	SM_UNUSED_VAR(Channel);
    SM_UNUSED_VAR(Status);

    return(ReturnStatus);

}


/* ===========================================================================

 Name:            ComM_LimitChannelToNoComMode

 =========================================================================*/
/* set the inhibition state to no communication */
Std_ReturnType ComM_LimitChannelToNoComMode( NetworkHandleType Channel, boolean Status)
{
    Std_ReturnType ReturnStatus = E_OK;

    SM_UNUSED_VAR(Status);

    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_LimitECUToNoComMode

 =========================================================================*/
/* limt the ECU to no communication mode */
Std_ReturnType ComM_LimitECUToNoComMode(CAN_BOOLEAN Status)
{
    Std_ReturnType ReturnStatus = E_OK;

    SM_UNUSED_VAR(Status);

    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_ReadInhibitCounter

 =========================================================================*/
/* read the full communication inhibit counter */
Std_ReturnType ComM_ReadInhibitCounter(P2VAR(CAN_UINT16, AUTOMATIC, CCLMGR_APPL_VAR) CounterValue)
{
    Std_ReturnType ReturnStatus = E_OK;

    SM_UNUSED_VAR(CounterValue);

    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_ResetInhibitCounter

 =========================================================================*/
/* reset the full communication inhibit counter */
Std_ReturnType ComM_ResetInhibitCounter(void)
{
    Std_ReturnType ReturnStatus = E_OK;
    
    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_SetECUGroupClassification

 =========================================================================*/
/* set the ECU group classification */
Std_ReturnType ComM_SetECUGroupClassification(ComM_InhibitionStatusType Status)
{
    Std_ReturnType ReturnStatus = E_OK;

    SM_UNUSED_VAR(Status);

    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_RequestComMode

 =========================================================================*/
/* request a communication mode for an User */
Std_ReturnType ComM_RequestComMode(CanSm_UserHandleType User, CanSm_ModeType CclMode)
{
    Std_ReturnType ReturnStatus = E_OK;

	SM_UNUSED_VAR(User);
    SM_UNUSED_VAR(CclMode);

    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_GetMaxComMode

 =========================================================================*/
/* Get the maximum allowed communication mode of an User */
Std_ReturnType ComM_GetMaxComMode(CanSm_UserHandleType User, P2VAR(CanSm_ModeType, AUTOMATIC, CCLMGR_APPL_VAR) CclMode)
{
    Std_ReturnType ReturnStatus = E_OK;

	SM_UNUSED_VAR(User);
    SM_UNUSED_VAR(CclMode);

    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_GetRequestedComMode

 =========================================================================*/
/* Get the requested communication mode of an user */
Std_ReturnType ComM_GetRequestedComMode(CanSm_UserHandleType User, P2VAR(CanSm_ModeType, AUTOMATIC, CCLMGR_APPL_VAR) CclMode)
{
    Std_ReturnType ReturnStatus = E_OK;

	SM_UNUSED_VAR(User);
    SM_UNUSED_VAR(CclMode);

    return(ReturnStatus);
}


/* ===========================================================================

 Name:            ComM_GetCurrentComMode

 =========================================================================*/
/* Get the current communication mode of an user */
Std_ReturnType ComM_GetCurrentComMode(CanSm_UserHandleType User, P2VAR(CanSm_ModeType, AUTOMATIC, CCLMGR_APPL_VAR) CclMode)
{
    Std_ReturnType GetStateInfo = E_OK;

    if(CANSM_UNINIT == CanSm_InitStatus)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetStateInfo = E_NOT_OK;
		#endif
	}

    if(CANSM_NUMBER_OF_CHANNELS <= User)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetStateInfo = E_NOT_OK;
		#endif
	}
    
    if(NULL == CclMode)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		GetStateInfo = E_NOT_OK;
		#endif
	}

    if(E_NOT_OK != GetStateInfo)
	{
	    *CclMode = CanSm_Status[User];
	}

	return(GetStateInfo);
}


/*********************************************************************************************************************/
/** Callback Functions & Notifications */
/*********************************************************************************************************************/

/* ===========================================================================

 Name:            ComM_Nm_NetworkStartIndication

 =========================================================================*/
/* Indication that some nodes in the network have entered the Network Mode. */
/*Finally not used*/
void ComM_Nm_NetworkStartIndication( NetworkHandleType  Channel )
{
    CAN_UINT8 FunctionExecSt = E_OK;

    if(CANSM_UNINIT == CanSm_InitStatus)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }

    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }
    
	if(FunctionExecSt != E_NOT_OK)
	{
	    CanSm_Status[Channel]    = CANSM_FULL_COM_NETWORK_REQUESTED;    /* set the CanSm mode FULL Communication */
		CanSm_Request[Channel]  = CANSM_FULL_COM_NETWORK_REQUESTED;
	}

	#if 0
	/*NM only controlled by ch0. But when ch0 enter sleep mode, ch1 should also enter sleep mode*/
    CanSm_Status[1]    = CANSM_NO_COM_NO_PENDING_REQUEST;            /* set the CanSm mode FULL Communication */
	CanSm_Request[1]  = CANSM_NO_COM_NO_PENDING_REQUEST;
	#endif
}


/* ===========================================================================

 Name:            ComM_Nm_NetworkMode

 =========================================================================*/
/* Notification that the network management has entered Network Mode. */
void ComM_Nm_NetworkMode( NetworkHandleType  Channel )
{
    CAN_UINT8 FunctionExecSt = E_OK;

    if(CANSM_UNINIT == CanSm_InitStatus)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }

    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }
    
	if(FunctionExecSt != E_NOT_OK)
	{
	    CanSm_Status[Channel]   = CANSM_FULL_COM_NETWORK_REQUESTED;            /* set the CanSm mode Full Communication */
		CanSm_Request[Channel]  = CANSM_FULL_COM_NETWORK_REQUESTED;
	}

	/*NM only controlled by ch0. But when ch0 enter a new mode, ch1 should also enter new mode*/
    CanSm_Status[1]   = CANSM_FULL_COM_NETWORK_REQUESTED; /* set the CanSm mode Full Communication */
	CanSm_Request[1]  = CANSM_FULL_COM_NETWORK_REQUESTED;
}


/* ===========================================================================

 Name:            ComM_Nm_PrepareBusSleepMode

 =========================================================================*/
/* Notification that the network management has entered Prepare Bus-Sleep Mode. */
void ComM_Nm_PrepareBusSleepMode( NetworkHandleType  Channel )
{
    CAN_UINT8 FunctionExecSt = E_OK;

    if(CANSM_UNINIT == CanSm_InitStatus)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }

    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }
    
	if(FunctionExecSt != E_NOT_OK)
	{
	    CanSm_Status[Channel]   = CANSM_SILENT_COM;            /* set the CanSm mode NO Communication */
		//CanSm_Request[Channel]  = CANSM_SILENT_COM; /*this will be handled in VNM_MsgTxd to avoid stopping all IL/TP msg tx immediately when prepare bus sleep */
	}

	/*NM only controlled by ch0. But when ch0 enter a new mode, ch1 should also enter new mode*/
    CanSm_Status[1]   = CANSM_SILENT_COM;            /* set the CanSm mode NO Communication */
	//CanSm_Request[1]  = CANSM_SILENT_COM; /*this will be handled in VNM_MsgTxd to avoid stopping all IL/TP msg tx immediately when prepare bus sleep */

}

void ComM_Nm_txStopNormal( NetworkHandleType  Channel )
{
	CanSm_Request[Channel]  = CANSM_SILENT_COM;

	/*NM only controlled by ch0. But when ch0 enter sleep mode, ch1 should also enter sleep mode*/
	CanSm_Request[1]  = CANSM_SILENT_COM;
}


/* ===========================================================================

 Name:            ComM_Nm_BusSleepMode

 =========================================================================*/
/* Notification that the network management has entered Bus-Sleep Mode. */
void ComM_Nm_BusSleepMode( NetworkHandleType  Channel )
{
    CAN_UINT8 FunctionExecSt = E_OK;

    if(CANSM_UNINIT == CanSm_InitStatus)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }

    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }
    
	if(FunctionExecSt != E_NOT_OK)
	{
	    CanSm_Status[Channel]    = CANSM_NO_COM_NO_PENDING_REQUEST;            /* set the CanSm mode NO Communication */
		CanSm_Request[Channel]  = CANSM_NO_COM_NO_PENDING_REQUEST;
	}

	/*NM only controlled by ch0. But when ch0 enter sleep mode, ch1 should also enter sleep mode*/
    CanSm_Status[1]    = CANSM_NO_COM_NO_PENDING_REQUEST;            /* set the CanSm mode NO Communication */
	CanSm_Request[1]  = CANSM_NO_COM_NO_PENDING_REQUEST;
}


/* ===========================================================================

 Name:            ComM_Nm_RestartIndication

 =========================================================================*/
/* Notification that the CAN Generic NM state has changed. */
void ComM_Nm_RestartIndication( NetworkHandleType  Channel )
{
    SM_UNUSED_VAR(Channel);
}


/* ===========================================================================

 Name:            ComM_DCM_ActiveDiagnostic

 =========================================================================*/
/* active diagnostic indication */
void ComM_DCM_ActiveDiagnostic(NetworkHandleType Channel)
{
    SM_UNUSED_VAR(Channel);
}


/* ===========================================================================

 Name:            ComM_DCM_InactiveDiagnostic

 =========================================================================*/
/* inactive diagnostic indication */
void ComM_DCM_InactiveDiagnostic(NetworkHandleType Channel)
{
    SM_UNUSED_VAR(Channel);
}


/* ===========================================================================

 Name:            ComM_EcuM_WakeUpIndication

 =========================================================================*/
/* passive wake up indication */
void ComM_EcuM_WakeUpIndication(NetworkHandleType Channel)
{
    CAN_UINT8 FunctionExecSt = E_OK;
    
    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}

	if(FunctionExecSt != E_NOT_OK)
	{
	    if( (CanSm_Status[Channel] & CANSM_FULL_COMMUNICATION) == 0u )
	    {
	        CanSm_Status[Channel] = CANSM_FULL_COM_NETWORK_REQUESTED;

            CanNm_StateTransition( Channel, NM_STATE_NORMAL_OPERATION );
	    }
	    else
	    {
	        CanSm_Status[Channel] = CANSM_FULL_COM_READY_SLEEP;
	    }
    }

}


/* ===========================================================================

 Name:            ComM_BusSM_ModeIndication

 =========================================================================*/
void ComM_BusSM_ModeIndication(NetworkHandleType Channel, P2VAR(CanSm_ModeType, AUTOMATIC, CCLMGR_APPL_VAR) CclMode)
{
	CAN_UINT8 FunctionExecSt = E_OK;

    if(CANSM_UNINIT == CanSm_InitStatus)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }

    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}

    if(NULL == CclMode)
    {
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
    }

    if( FunctionExecSt != E_NOT_OK )
	{
	    if(CANSM_FULL_COMMUNICATION < *CclMode)
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FunctionExecSt = E_NOT_OK;
			#endif
		}

	    if( FunctionExecSt != E_NOT_OK )
		{
		    if( CanSm_Status[Channel] != *CclMode )
		    {
			    CanSm_Status[Channel] = *CclMode;
			    BswM_ComM_CurrentMode( Channel, *CclMode ); /*finally not used*/

	#if ( CANSM_DCM_INDICATION == STD_ON )

			    switch( *CclMode )
			    {
				    case CANSM_FULL_COMMUNICATION:
				      Dcm_ComM_FullComModeEntered(Channel);
				    break;

				    case CANSM_SILENT_COMMUNICATION:
				      Dcm_ComM_SilentComModeEntered(Channel);
				    break;

				    case CANSM_NO_COMMUNICATION:
				      Dcm_ComM_NoComModeEntered(Channel);
				    break;

				    default:
				    break;
			    }
	#endif
			}
	    }
	}

}

/*********************************************************************************************************************/
/* Scheduled functions */
/*********************************************************************************************************************/

void CanSm_MainFunction(NetworkHandleType Channel)
{
    CAN_UINT8 FunctionExecSt = E_OK;

    if(CANSM_NUMBER_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}

    if(FunctionExecSt != E_NOT_OK)
	{
        CanSM_NetworkStatemachine( Channel );

        if(( (CanSm_Status[Channel] == CANSM_BSWM_SILENT_COMMUNICATION) && (CanSm_CurrState[Channel] == CANSM_BO_TX_OFFLINE) ) || \
        		CanSm_BusoffFlag[Channel] == TRUE)				//CAN communication Error recover normal
		{
	        if( CanSm_BusoffCntr[Channel] != 0 )
			{
	            CanSm_BusoffCntr[Channel]--;
	      	}
			else
			{	
				CanSm_BusoffRecoveryCntr[Channel] = CANSM_BUSOFF_REVOVERY_VAL; 
	            CanSm_Status[Channel] = CANSM_BSWM_FULL_COMMUNICATION;
				CanSm_Request[Channel] = CANSM_BSWM_FULL_COMMUNICATION;
	            BswM_CanSM_CurrentState( Channel, CanSm_Status[Channel] ); /*error, only ch0 supported by BSW*/

	            CanSm_CommState[Channel] = CANSM_FULL_COMMUNICATION;
	            ComM_BusSM_ModeIndication( Channel, &CanSm_CommState[Channel] );
	            CanSm_BusoffFlag[Channel] = FALSE;

                (void)CanIf_SetPduMode( Channel, CANDISP_TX_ONLINE );
                (void)CanIf_SetControllerMode( Channel, CANDISP_CS_STARTED );
			}
		}
		
		if( CanSm_BusoffRecoveryCntr[Channel] != 0 )
		{
            CanSm_BusoffRecoveryCntr[Channel]--;

			if(CanSm_BusoffRecoveryCntr[Channel] == 0)
			{
				CanSm_BusoffCntr[Channel] = 0;

				CanSm_BusOffModeCntr[Channel] = 0;

				CanSm_BusOffMode[Channel] = CANSM_BUSOFF_FAST_RECOVERY_MODE;
				
				CanSm_BusoffDtcCntr[Channel] = 0;

			}
      	}

      	
      	if(Channel == 0)
			CanSM_Bus_Off_DtcProcess(Channel);
	}
}



/**************************************************************/
/** CAN Communication Manager interfaces **/
/**************************************************************/

/***********************************************************************************************************************
 *  CanSM_StartWakeupSources
 **********************************************************************************************************************/
/*! \brief      This callback function indicates that the Ecu Manager needs to validate a CAN wake up
 *  \param[in]  CanSM_NetworkHandle    Affected system channel
 *  \return     E_OK                    The CanXcvr mode and CanDrv modes have been changed successfully or no change was necessary
 *              E_NOT_OK                It was not possible to set the CanXcvr or CanDrv to the required state.
 *  \pre        Input parameter must be valid.
 *  \context    Function could be called from task level
 *  \note
 **********************************************************************************************************************/
Std_ReturnType CanSM_StartWakeupSources( NetworkHandleType CanSm_NetworkHandle )
{
    Std_ReturnType ReturnStatus = E_OK;

	SM_UNUSED_VAR(CanSm_NetworkHandle);

    return(ReturnStatus);
}


/***********************************************************************************************************************
 *  CanSM_StopWakeupSources
 **********************************************************************************************************************/
/*! \brief      This callback function indicates that the Ecu Manager has finished the validation of a CAN wake up
 *  \param[in]  CanSm_NetworkHandle    Affected system channel
 *  \param[in]  WakeupSource            The wakeup source handle of the channel which should be stopped
 *  \return     E_OK                    The CanXcvr and CanDrv has been set successful in the required states or a new wakeup has been started
 *  \return     E_NOT_OK                It was not possible to set the CanXcvr or CanDrv to the required state.
 *  \pre        Input parameter must be valid.
 *  \context    Function could be called from task level
 *  \note
 **********************************************************************************************************************/
Std_ReturnType CanSM_StopWakeupSources( NetworkHandleType CanSm_NetworkHandle, EcuM_WakeupSourceType WakeupSource  )
{
    Std_ReturnType ReturnStatus = E_OK;

	SM_UNUSED_VAR(CanSm_NetworkHandle);
	SM_UNUSED_VAR(WakeupSource);

    return(ReturnStatus);
}


/**********************************************************************************************************************
 * Nm_NetworkMode
 *********************************************************************************************************************/
/*! \brief      Notification that the network management has entered Network Mode
 *  \param[in]  nmNetworkHandle       Identification of the NM-channel
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called by the lower layers bus-specific Network Management modules
 *********************************************************************************************************************/
void Nm_NetworkMode( NetworkHandleType const nmNetworkHandle )
{
	CAN_UINT8 FunctionExecSt = E_OK;
    
    if(CANSM_NUMBER_OF_CHANNELS <= nmNetworkHandle)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}

    if(FunctionExecSt != E_NOT_OK)
	{
        ComM_Nm_NetworkMode( nmNetworkHandle );
	}
}



/**********************************************************************************************************************
 * Nm_BusSleepMode
 *********************************************************************************************************************/
/*! \brief      Notification that the network management has entered Bus Sleep Mode
 *  \param[in]  nmNetworkHandle       Identification of the NM-channel
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called by the lower layers bus-specific Network Management modules
 *********************************************************************************************************************/
void Nm_BusSleepMode( NetworkHandleType const nmNetworkHandle )
{
	CAN_UINT8 FunctionExecSt = E_OK;
    
    if(CANSM_NUMBER_OF_CHANNELS <= nmNetworkHandle)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}

    if(FunctionExecSt != E_NOT_OK)
	{
	    ComM_Nm_BusSleepMode( nmNetworkHandle );
	}
}


/**********************************************************************************************************************
 * Nm_PrepareBusSleepMode
 *********************************************************************************************************************/
/*! \brief      Notification that the network management has entered Prepare Bus-Sleep Mode
 *  \param[in]  nmNetworkHandle       Identification of the NM-channel
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called by the lower layers bus-specific Network Management modules
 *********************************************************************************************************************/
void Nm_PrepareBusSleepMode( NetworkHandleType const nmNetworkHandle )
{
	CAN_UINT8 FunctionExecSt = E_OK;

    if(CANSM_NUMBER_OF_CHANNELS <= nmNetworkHandle)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}

    if(FunctionExecSt != E_NOT_OK)
	{
		ComM_Nm_PrepareBusSleepMode( nmNetworkHandle );
	}
}


#if ( STD_ON == CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG )
/***********************************************************************************************************************
 *  CanSM_ClearTrcvWufFlagIndication
 **********************************************************************************************************************/
void CanSM_ClearTrcvWufFlagIndication( uint8  CanSm_TransceiverId ){}


/***********************************************************************************************************************
 *  CanSM_CheckTransceiverWakeFlagIndication
 **********************************************************************************************************************/
void CanSM_CheckTransceiverWakeFlagIndication  ( uint8  CanSm_TransceiverId ){}


/***********************************************************************************************************************
 *  CanSM_ConfirmPnAvailability
 **********************************************************************************************************************/
void CanSM_ConfirmPnAvailability ( uint8 CanSm_TransceiverId ){}

#endif /* end else if ( STD_ON == CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG ) */


/***********************************************************************************************************************
 *  CanSM_ControllerBusOff
 **********************************************************************************************************************/
void CanSM_ControllerBusOff( uint8 CanSm_ControllerId )
{
    CAN_UINT8 FunctionExecSt = E_OK;
    
    if(CANSM_NUMBER_OF_CHANNELS <= CanSm_ControllerId)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FunctionExecSt = E_NOT_OK;
		#endif
	}

    if(FunctionExecSt != E_NOT_OK)
	{
		if(CanSm_BusOffMode[CanSm_ControllerId] == CANSM_BUSOFF_FAST_RECOVERY_MODE)
		{
			if(CanSm_BusOffModeCntr[CanSm_ControllerId] < CANSM_BUSOFF_COUNTER_FAST)
			{
				CanSm_BusOffModeCntr[CanSm_ControllerId]++;
				CanSm_BusoffCntr[CanSm_ControllerId] = CANSM_BUSOFF_COUNTER_VAL_FAST;
			}
			else
			{
				CanSm_BusOffMode[CanSm_ControllerId] = CANSM_BUSOFF_SLOW_RECOVERY_MODE;
				CanSm_BusoffCntr[CanSm_ControllerId] = CANSM_BUSOFF_COUNTER_VAL_SLOW;
				CanSm_BusOffModeCntr[CanSm_ControllerId] = 0;
			}
		}
		else
		{
        	CanSm_BusoffCntr[CanSm_ControllerId] = CANSM_BUSOFF_COUNTER_VAL_SLOW;
		}
		CanSm_BusoffRecoveryCntr[CanSm_ControllerId] = 0;
        CanSm_Status[CanSm_ControllerId] = CANSM_BSWM_BUS_OFF;
		CanSm_Request[CanSm_ControllerId] = CANSM_SILENT_COM;
        BswM_CanSM_CurrentState( CanSm_ControllerId, CanSm_Status[CanSm_ControllerId] );

        CanSm_CommState[CanSm_ControllerId] = CANSM_SILENT_COMMUNICATION;
        ComM_BusSM_ModeIndication( CanSm_ControllerId, CanSm_CommState );

        CanSM_TransitionFullToSilent(CanSm_ControllerId);
        (void)CanIf_SetControllerMode( CanSm_ControllerId, CANDISP_CS_STOPPED );

        CanSm_CurrState[CanSm_ControllerId]   = CANSM_BO_TX_OFFLINE;
        CanSm_BusoffFlag[CanSm_ControllerId] = TRUE;				//Can error flag

		NM_BusOffState = TRUE;
		
		if (CanSm_BusoffDtcCntr[CanSm_ControllerId] < 8)
		{
			CanSm_BusoffDtcCntr[CanSm_ControllerId]++;
		}
		else
		{
		}

		VNM_CB_BusOff();
	}
}

static void CanSM_Bus_Off_DtcProcess( uint8 CanSm_ControllerId )
{
	if(COMVNIM_DTC_MONITOR_ISENABLE)
	{
		if(CanSm_BusoffDtcCntr[CanSm_ControllerId] > 0)
		{
			dem_Can_Busoff_bool = TRUE;
			Can_Busoff_Change_Flag = TRUE;
			
			if((CanSm_BusoffDtcCntr[CanSm_ControllerId] >= 8) && (CanSm_BusOffMode[CanSm_ControllerId] == CANSM_BUSOFF_SLOW_RECOVERY_MODE)) /*> 5+2*/
			{
				Dem_SetEventStatus(CAN_BUSOFF_DTC,DEM_EVENT_STATUS_PREFAILED);
			}
		}
		else 
		{
			Dem_SetEventStatus(CAN_BUSOFF_DTC,DEM_EVENT_STATUS_PREPASSED);

			if(Can_Busoff_Change_Flag == TRUE)
			{
				l_dem_busoff_count++;
				if(l_dem_busoff_count == 150)
				{
					dem_Can_Busoff_bool = FALSE;
					l_dem_busoff_count = 0;
					Can_Busoff_Change_Flag = FALSE;
				}
			}
		}
	}
	else 
	{
		Dem_SetEventStatus(CAN_BUSOFF_DTC,DEM_EVENT_STATUS_PREPASSED);
		
		dem_Can_Busoff_bool = FALSE;
	}

}

/***********************************************************************************************************************
 *  CanSM_GetControllerMode
 **********************************************************************************************************************/
static CAN_UINT8 CanSM_GetControllerMode( uint8 CanSm_ControllerId, CanDisp_ControllerModeType * CtrlMode )
{
	CAN_UINT8 FuncExecSt = E_OK;

    if(CANSM_NUMBER_OF_CHANNELS <= CanSm_ControllerId)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    
    if(FuncExecSt != E_NOT_OK)
	{
	    FuncExecSt = CanIf_GetControllerMode(CanSm_ControllerId, CtrlMode);
	}

    return(FuncExecSt);

}


/***********************************************************************************************************************
 *  CanSM_ControllerModeIndication
 **********************************************************************************************************************/
void CanSM_ControllerModeIndication( uint8 CanSm_ControllerId, CanDisp_ControllerModeType CanSm_ControllerMode )
{
	CAN_UINT8 FuncExecSt = E_OK;

    if(CANSM_NUMBER_OF_CHANNELS <= CanSm_ControllerId)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(FuncExecSt != E_NOT_OK)
	{
	    if ( CANDISP_CS_STOPPED == CanSm_ControllerMode )
	    {
	        if ( CANSM_SU_CC_STOPPED == CanSm_CurrState[CanSm_ControllerId] )
	        { /* Startup */
			    CanSm_CurrState[CanSm_ControllerId] = CANSM_SU_CC_STARTED;
	        }
	        else if ( CANSM_SD_CC_STOPPED == CanSm_CurrState[CanSm_ControllerId] )
	        { /* ShutDown */
	            CanSm_CurrState[CanSm_ControllerId] = CANSM_SD_CC_SLEEP;
	        }
	        else
	        {
	        }
	    }
	    else if ( CANDISP_CS_SLEEP == CanSm_ControllerMode )
	    {
	        if ( CANSM_SD_CC_SLEEP == CanSm_CurrState[CanSm_ControllerId] )
	        {
			    CanSm_CurrState[CanSm_ControllerId] = CANSM_SD_TRCV_NORMAL;
	        }
	    }
	    else if (  ( CANSM_SU_CC_STARTED == CanSm_CurrState[CanSm_ControllerId] ) && ( CANDISP_CS_STARTED == CanSm_ControllerMode )  )
	    {
	          if ( CANSM_NO_COMMUNICATION == CanSm_Status[CanSm_ControllerId] )
	          {
	              CanSm_CurrState[CanSm_ControllerId] = CANSM_S_STARTWAKEUPSOURCES_SUCCESSFUL;
	          }
	          else if ( 0 == CanSm_BusoffCntr[CanSm_ControllerId] )
	          { 
	              CanSM_TransitionFullComReached( CanSm_ControllerId );
	          }
	          else
	          {
	              (void)CanIf_SetPduMode( CanSm_ControllerId, CANDISP_TX_OFFLINE );

	              CanSm_CurrState[CanSm_ControllerId]   = CANSM_BO_TX_OFFLINE;
	          }
	    }
	    else
	    {
	    }
	}

}


#if ( STD_ON == CANSM_TRANSCEIVERIDOFCHANNELCONFIG )
/***********************************************************************************************************************
 *  CanSM_TransceiverModeIndication
 **********************************************************************************************************************/
void CanSM_TransceiverModeIndication( uint8 CanSm_TransceiverId, CanXcvr_XcvrModeType CanSm_TransceiverMode )
{
    CAN_UINT8 FuncExecSt = E_OK;

    if(CANSM_NUMBER_OF_CHANNELS <= CanSm_TransceiverId)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
	    #endif
    }

    if(FuncExecSt != E_NOT_OK)
	{
	    if ( CANXCVR_TRCVMODE_NORMAL == CanSm_TransceiverMode )
	    {
	      if ( CANSM_SU_TRCV_NORMAL == CanSm_CurrState[CanSm_TransceiverId] )
	      {
	          CanSm_CurrState[CanSm_TransceiverId]    = CANSM_SU_CC_STOPPED;
	      }
	      else if ( CANSM_SD_TRCV_NORMAL == CanSm_CurrState[CanSm_TransceiverId] )
	      {
	          CanSm_CurrState[CanSm_TransceiverId]    = CANSM_SD_TRCV_STANDBY;
	      }
	      else
	      {
	      }
	    }
	    else if (  ( CANXCVR_TRCVMODE_STANDBY == CanSm_TransceiverMode ) && ( CANSM_SD_TRCV_STANDBY == CanSm_CurrState[CanSm_TransceiverId] )  )
	    {
	        CanSM_TransitionNoComReached( &CanSm_TransceiverId );
	    } 
	    else
	    {
	    }
	}
}

#endif /* if ( STD_ON == CANSM_TRANSCEIVERIDOFCHANNELCONFIG ) */


#if ( ( STD_ON == CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG ) || ( STD_ON == CANSM_PARTIAL_NW_WAKEUP_FILTEROFCHANNELCFG ) )
/***********************************************************************************************************************
 *  CanSM_TxTimeoutException
 **********************************************************************************************************************/
void CanSM_TxTimeoutException( NetworkHandleType CanSm_NetworkHandle ){}

#endif /*  CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG   CANSM_PARTIAL_NWK_WAKEUP_FILTEROFCHANNELCFG */

/*not used*/
FUNC( void, NM_CODE ) Nm_NetworkStartIndication( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle )
{
    if(CAN_NM_NUMBER_OF_CHANNELS <= nmNetworkHandle)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#endif
	}

    ComM_Nm_NetworkStartIndication( nmNetworkHandle );
}


/***********************************************************************************************************************
 *  CanSM_TransitionFullComReached
 **********************************************************************************************************************/
/*! \brief      local function to handle the entering of the state S_FullCom 
 *
 *  \param[in]  CanSM_CanNetworkIdx           Current CanSM channel index
 *  \pre        CanSM has to be initialized
 *  \context    Function could be called from interrupt level or from task level
 *  \note       called by CanSM_RequestComMode CanSM_ControllerModeIndication and CanSM_MainFunction
 **********************************************************************************************************************/
static void CanSM_TransitionFullComReached( uint8 CanSM_CanNetworkIdx )
{
    CAN_UINT8 ReturnStatus = E_OK;

    if(CANSM_NUMBER_OF_CHANNELS <= CanSM_CanNetworkIdx)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		ReturnStatus = E_NOT_OK;
		#endif
	}

    if(ReturnStatus != E_NOT_OK)
	{
        if (CanSm_CurrState[CanSM_CanNetworkIdx] != CANSM_FULL_COMMUNICATION)
        {
            BswM_CanSM_CurrentState( CanSM_CanNetworkIdx, CANSM_FULL_COMMUNICATION );
            (void)CanIf_SetPduMode( CanSM_CanNetworkIdx, CANDISP_ONLINE );
            CanIlSetIlMode( Can_ControllerId, ILSTATUS, (IL_STATUS_SUSPEND|IL_STATUS_TX_SUSPEND), 0, FALSE );
            CanIlSetIlMode( Can_ControllerId, ILTXSTATUS, 0, Can_Ccl_Tx_Num_Messages, TRUE );
			CanIlSetIlMode( Can_ControllerId, ILRXSTATUS, IL_RX_STATUS_TIMEOUT_MONITOR, Can_Ccl_Rx_Num_Messages, TRUE );
            CanSm_CurrState[CanSM_CanNetworkIdx]  = CANSM_FULL_COMMUNICATION;
			Dcm_ComM_FullComModeEntered(CanSM_CanNetworkIdx); //whl
            ComM_BusSM_ModeIndication( CanSM_CanNetworkIdx, CanSm_CurrState );
        }
	}
}


/***********************************************************************************************************************
 *  CanSM_TransitionFullToSilent
 **********************************************************************************************************************/
/*! \brief      local function to handle the entering of the state S_SilentCom 
 *
 *  \param[in]  CanSM_CanNetworkIdx           Current CanSM channel index
 *  \pre        CanSM has to be initialized
 *  \context    Function could be called from interrupt level or from task level
 *  \note       called by CanSM_RequestComMode CanSM_ControllerModeIndication and CanSM_MainFunction
 **********************************************************************************************************************/
static void CanSM_TransitionFullToSilent( uint8 CanSM_CanNetworkIdx )
{
    CAN_UINT8 ReturnStatus = E_OK;

    if(CANSM_NUMBER_OF_CHANNELS <= CanSM_CanNetworkIdx)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		ReturnStatus = E_NOT_OK;
		#endif
	}

    if(ReturnStatus != E_NOT_OK)
	{
        if (CanSm_CurrState[CanSM_CanNetworkIdx] != CANSM_SILENT_COMMUNICATION)
        {
            BswM_CanSM_CurrentState( CanSM_CanNetworkIdx, CANSM_BSWM_SILENT_COMMUNICATION );
            CanSm_CurrState[CanSM_CanNetworkIdx]  = CANSM_SILENT_COMMUNICATION;
            ComM_BusSM_ModeIndication( CanSM_CanNetworkIdx, CanSm_CurrState );
            CanIlSetIlMode( Can_ControllerId, ILSTATUS, IL_STATUS_TX_SUSPEND, 0, TRUE );
        }
	}
}


/***********************************************************************************************************************
 *  CanSM_TransitionNoComReached
 **********************************************************************************************************************/
/*! \brief      local function to handle the entering of the state S_NoCom 
 *
 *  \param[in]  CanSM_NetworkHandle           Current CanSM channel handle
 *  \pre        CanSM has to be initialized
 *  \context    Function could be called from interrupt level or from task level
 *  \note       called by CanSM_RequestComMode CanSM_ControllerModeIndication and CanSM_MainFunction
 **********************************************************************************************************************/
static void CanSM_TransitionNoComReached( NetworkHandleType * CanSM_NetworkHandle )
{
    CAN_UINT8 ReturnStatus = E_OK;

    if(CANSM_NUMBER_OF_CHANNELS <= *CanSM_NetworkHandle)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		ReturnStatus = E_NOT_OK;
		#endif
	}

    if(ReturnStatus != E_NOT_OK)
	{
        if (CanSm_CurrState[*CanSM_NetworkHandle] != CANSM_NO_COMMUNICATION)
        {
            BswM_CanSM_CurrentState( *CanSM_NetworkHandle, CANSM_NO_COMMUNICATION );
            CanSm_CurrState[*CanSM_NetworkHandle]  = CANSM_NO_COMMUNICATION;
            ComM_BusSM_ModeIndication( *CanSM_NetworkHandle, CanSm_CurrState );
            CanIlSetIlMode( Can_ControllerId, ILSTATUS, IL_STATUS_SUSPEND, 0, TRUE );
            (void)CanIf_SetPduMode( *CanSM_NetworkHandle, CANDISP_OFFLINE );
        }
	}
}


/***********************************************************************************************************************
 *  CanSM_NetworkStatemachine
 **********************************************************************************************************************/
/*! \brief      local function to handle state transitions which are not caused by timer
 *
 *  \param[in]  CanSM_CanNetworkIdx           Current CanSM channel index
 *  \pre        CanSM has to be initialized
 *  \context    Function could be called from interrupt level or from task level
 *  \note       called by CanSM_RequestComMode CanSM_Init and CanSM_MainFunction
 **********************************************************************************************************************/
static void CanSM_NetworkStatemachine( uint8 CanSM_CanNetworkIdx )
{
    CAN_UINT8 ReturnStatus = E_OK;

    CanDisp_ControllerModeType CtrlMode;

    if(CANSM_NUMBER_OF_CHANNELS <= CanSM_CanNetworkIdx)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		ReturnStatus = E_NOT_OK;
		#endif
	}

    if(ReturnStatus != E_NOT_OK)
	{
	    ReturnStatus = CanSM_GetControllerMode( CanSM_CanNetworkIdx, &CtrlMode );

		if(ReturnStatus != E_NOT_OK)
	    {
		    if(CanSm_Request[CanSM_CanNetworkIdx] == CANSM_SILENT_COM)
			{
			    if( CtrlMode == CANDISP_CS_STARTED )
				{
                    if (CanSm_Status[CanSM_CanNetworkIdx] == CANSM_BSWM_BUS_OFF)
                    {
                        /* do only in case of bus-off */
                        (void)CanIf_SetTrcvMode( CanSM_CanNetworkIdx, (CanXcvr_XcvrModeType) CANXCVR_STANDBY );
				        (void)CanIf_SetControllerMode( CanSM_CanNetworkIdx, CANDISP_CS_STOPPED );
                        CanSM_TransitionFullToSilent(CanSM_CanNetworkIdx);
                    }
                    
                    if(CanSm_CurrState[CanSM_CanNetworkIdx] == CANSM_FULL_COMMUNICATION)
                    {
                        // FULLCOM->SILENCOM - Notify
                        CanSM_TransitionFullToSilent(CanSM_CanNetworkIdx);
                    }
				}
			}
			else if( CanSm_Request[CanSM_CanNetworkIdx] == CANSM_NO_COM_NO_PENDING_REQUEST )
			{
			    if( CtrlMode == CANDISP_CS_STARTED )
                {
			        (void)CanIf_SetControllerMode( CanSM_CanNetworkIdx, CANDISP_CS_STOPPED );
                }
                
			     if( CtrlMode == CANDISP_CS_STOPPED )
				{
				    (void)CanIf_SetControllerMode( CanSM_CanNetworkIdx, CANDISP_CS_SLEEP );
                    (void)CanIf_SetTrcvMode( CanSM_CanNetworkIdx, (CanXcvr_XcvrModeType) CANXCVR_STANDBY );
                    CanSM_TransitionNoComReached(&CanSM_CanNetworkIdx);
				}

			}
			else if( CanSm_Request[CanSM_CanNetworkIdx] == CANSM_FULL_COM_NETWORK_REQUESTED )
			{
			    if( CtrlMode == CANDISP_CS_STOPPED )
				{
			    	Can_Init( pCan_Config );
				    if( E_OK == CanIf_SetControllerMode( CanSM_CanNetworkIdx, CANDISP_CS_STARTED ) )
					{
                        (void)CanIf_SetTrcvMode( CanSM_CanNetworkIdx, (CanXcvr_XcvrModeType) CANXCVR_NORMAL );
                        CanSM_TransitionFullComReached(CanSM_CanNetworkIdx);
					}
				}
                else if( CtrlMode == CANDISP_CS_STARTED )
                {
                    CanSM_TransitionFullComReached(CanSM_CanNetworkIdx);
                }
				else if( CtrlMode == CANDISP_CS_SLEEP )
				{
				    (void)CanIf_SetTrcvMode( CanSM_CanNetworkIdx, (CanXcvr_XcvrModeType) CANXCVR_STANDBY );
				    if( E_OK == CanIf_SetControllerMode( CanSM_CanNetworkIdx, CANDISP_CS_STOPPED ) )
					{
                        CanSM_TransitionFullToSilent(CanSM_CanNetworkIdx);
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
	}

}


/**********************************************************************************************************************
 * NM Abstraction main function
 *********************************************************************************************************************/
void Nm_MainFunction(void)
{
    /* Taken care by NM */
}


Std_ReturnType Nm_PassiveStartUp(NetworkHandleType const nmNetworkHandle)
{
    Std_ReturnType RetStatus = E_OK;

#if 0
    if(CAN_NM_NUMBER_OF_CHANNELS <= nmNetworkHandle)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		RetStatus = E_NOT_OK;
		#endif
	}
#endif

	if(RetStatus != E_NOT_OK)
	{
        CanSm_Request[nmNetworkHandle] = CANSM_FULL_COM_NETWORK_REQUESTED;

        CanSM_NetworkStatemachine(nmNetworkHandle);

        //CanNm_StateTransition(nmNetworkHandle, NM_STATE_NORMAL_OPERATION);
        CanNm_StateTransition(0, NM_STATE_NORMAL_OPERATION);
	}



    return(RetStatus);
}

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
Std_ReturnType Nm_EnableCommunication( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle )
{
    Std_ReturnType ReturnStatus = E_OK;

	CanNm_StateTransition(nmNetworkHandle, NM_STATE_NORMAL_OPERATION);

    return(ReturnStatus);
}

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
Std_ReturnType Nm_DisableCommunication( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle )
{
    Std_ReturnType ReturnStatus = E_OK;

    CanNm_StateTransition(nmNetworkHandle, NM_STATE_PREPARE_BUS_SLEEP);

    return(ReturnStatus);
}

#endif /* ( NM_COM_CONTROL_ENABLED == STD_ON ) */

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

