#if !defined(CANSM_DEFINES_H)
#define CANSM_DEFINES_H

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
**  Name:           CanSm_Defines.h
**
**  Description:    CAN State manager typedef and datatypes definition file
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

# include "Compiler.h"
# include "Std_Types.h"
# include "CclStack_Types.h"
# include "can_defs.h"

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

#  ifndef CANSM_NO_COMMUNICATION
#   define CANSM_NO_COMMUNICATION          (0U)
#  endif

#  ifndef CANSM_SILENT_COMMUNICATION
#   define CANSM_SILENT_COMMUNICATION      (1U)
#  endif

#  ifndef CANSM_FULL_COMMUNICATION
#   define CANSM_FULL_COMMUNICATION        (2U)
#  endif

# define CanSm_PncModeType                  ComM_PncModeType
# define COMM_NO_COMMUNICATION              CANSM_NO_COMMUNICATION
# define COMM_SILENT_COMMUNICATION          CANSM_SILENT_COMMUNICATION
# define COMM_FULL_COMMUNICATION            CANSM_FULL_COMMUNICATION

#define CANSM_UNINIT                        0u
#define CANSM_INIT                          1u

# define CANSM_BSWM_NO_COMMUNICATION        0u
# define CANSM_BSWM_SILENT_COMMUNICATION    1u
# define CANSM_BSWM_FULL_COMMUNICATION      2u
# define CANSM_BSWM_BUS_OFF                 3u
# define CANSM_BSWM_CHANGE_BAUDRATE         4u

/* network bus types */
#define CANSM_BUS_TYPE_CAN                 0u
#define CANSM_BUS_TYPE_FR                  1u
#define CANSM_BUS_TYPE_LIN                 3u
#define CANSM_BUS_TYPE_ETH                 4u
#define CANSM_BUS_TYPE_INTERNAL            5u

/* ComM states */
#define CANSM_NO_COM_NO_PENDING_REQUEST    0u
#define CANSM_NO_COM_REQUEST_PENDING       1u
#define CANSM_FULL_COM_NETWORK_REQUESTED   2u
#define CANSM_FULL_COM_READY_SLEEP         3u
#define CANSM_SILENT_COM                   4u

/* PNC states */
#define CANSM_PNC_NO_COMMUNICATION         0u
#define CANSM_PNC_PREPARE_SLEEP            1u
#define CANSM_PNC_READY_SLEEP              2u
#define CANSM_PNC_REQUESTED                3u
#define CANSM_PNC_REQUESTED_PASSIVE        4u

/* PNC send signal types */
#define CANSM_SEND_ACTIVE_SIG_ONLY         0u
#define CANSM_SEND_PASSIVE_SIG_ONLY        1u
#define CANSM_SEND_ALL_SIG                 2u

/* PNC gateway types */
#define CANSM_GATEWAY_TYPE_ACTIVE          0u
#define CANSM_GATEWAY_TYPE_PASSIVE         1u
#define CANSM_GATEWAY_TYPE_NONE            2u

/* -----------------------------------------------------------------------------
    &&&~ USER HANDLES
 ----------------------------------------------------------------------------- */

#define CanSmConf_USR_CHNL                 0U /*not used*/

/* -----------------------------------------------------------------------------
    &&&~ DEFINES
 ----------------------------------------------------------------------------- */

/* CanSm channel handles */
#define CanSmConf_CanSmChannel_CAN        0U 


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/* CANSM_S_FULLCOM */
#define CANSM_BO_BUS_OFF_CHECK                0x11u
#define CANSM_S_NO_BUS_OFF                    0x10u
#define CANSM_S_FULLCOM_ENSURED               CANSM_S_NO_BUS_OFF
#define CANSM_BO_TX_OFFLINE                   0x14u

#define CANSM_BUSOFF_FAST_RECOVERY_MODE		  0x00u
#define CANSM_BUSOFF_SLOW_RECOVERY_MODE		  0x01u

#define CANSM_SU_TRCV_NORMAL                  0x01u
#define CANSM_SU_CC_STOPPED                   0x02u
#define CANSM_SU_CC_STARTED                   0x03u

#define CANSM_S_NOCOM                         0x40u
#define CANSM_S_STARTWAKEUPSOURCES_SUCCESSFUL 0x50u

#define CANSM_SD_PN_CLEAR_WUF                 0x21u
#define CANSM_SD_CC_STOPPED                   0x22u
#define CANSM_SD_CC_SLEEP                     0x23u
#define CANSM_SD_TRCV_NORMAL                  0x24u
#define CANSM_SD_TRCV_STANDBY                 0x25u
#define CANSM_SD_CC_SLEEP_PN                  0x26u
#define CANSM_SD_CHK_WUF_CC_SLEEP             0x27u
#define CANSM_SD_CHK_WUF_NOT_CC_SLEEP         0x28u

/*! States of the network management state machine */
typedef CAN_UINT8 Nm_StateType;

/*! Uninitialized State */
#define NM_STATE_UNINIT              (0x00u)
/*! Bus Sleep State */
#define NM_STATE_BUS_SLEEP           (0x01u)
/*! Prepare Bus Sleep State */
#define NM_STATE_PREPARE_BUS_SLEEP   (0x02u)
/*! Ready Sleep State */
#define NM_STATE_READY_SLEEP         (0x03u)
/*! Normal Operation State */
#define NM_STATE_NORMAL_OPERATION    (0x04u)
/*! Repeat Message State */
#define NM_STATE_REPEAT_MESSAGE      (0x05u)
/*! Synchronized State */
#define NM_STATE_SYNCHRONIZE         (0x06u)
/*! Offline State */
#define NM_STATE_OFFLINE             (0x07u)
/*! Check Wake-up State */
#define NM_STATE_CHECK_WAKEUP        (0x08u)
/*! Wait Start-up State */
#define NM_STATE_WAIT_STARTUP        (0x09u)

/*! Number of state defines */
#define NM_STATE_NUMBER_OF_STATES    (0x0Au)

/*! Modes of the network management state machine */
typedef CAN_UINT8 Nm_ModeType;

/*! Bus-Sleep Mode */
#define NM_MODE_BUS_SLEEP            (0x00u)
/*! Prepare Bus-Sleep Mode */
#define NM_MODE_PREPARE_BUS_SLEEP    (0x01u)
/*! Synchronized Mode */
#define NM_MODE_SYNCHRONIZE          (0x02u)
/*! Network Mode */
#define NM_MODE_NETWORK              (0x03u)

/*! BusNm Type */
typedef CAN_UINT8 Nm_BusNmType;

/*! CAN NM type */
#define NM_BUSNM_CANNM               (0x00u)
/*! FR NM type */
#define NM_BUSNM_FRNM                (0x01u)
/*! LIN NM type */
#define NM_BUSNM_LINNM               (0x02u)
/*! UDP NM type */
#define NM_BUSNM_UDPNM               (0x03u)
/*! SAE J1939 NM type (address claiming) */
#define NM_BUSNM_J1939NM             (0x04u)
/*! Generic NM type */
#define NM_BUSNM_GENERICNM           (0x05u)
/*! NM type undefined */
#define NM_BUSNM_UNDEF               (0xFFu)

typedef CAN_UINT8 CanSM_BswMCurrentStateType;

typedef CAN_UINT8 CanSm_PncModeType;

typedef CAN_UINT8 CanSm_BusType;

typedef CAN_UINT8 CanSm_StateType;

/**   \brief  type used in CanSm_PCConfig */
typedef struct sCanSm_PCConfigType
{
  CAN_UINT8 neverUsed;

} CanSm_PCConfigType;

typedef CanSm_PCConfigType CanSm_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

typedef CAN_UINT8 CanSm_ModeType;

typedef CAN_UINT8 CanSm_UserHandleType;

/* Initialization status of the CanSm */
typedef CAN_UINT8 CanSm_InitStatusType;

typedef CAN_UINT8 CanSm_InhibitionStatusType;

typedef CAN_UINT8 CanSm_GwTypeOfChannelType;

typedef CAN_UINT8 CanSm_InhibitionInitValueOfChannelType;

typedef CAN_BOOLEAN CanSm_J1939SupportOfChannelType;

typedef CAN_UINT8 CanSm_MinFullComTimeOfChannelType;

typedef CAN_UINT8 CanSm_NmTypeOfChannelType;

typedef struct sCanSm_ChannelType
{
  CanSm_BusType BusTypeOfChannel;                                        /**< The channel bus type */
  CanSm_J1939SupportOfChannelType J1939SupportOfChannel;                 /**< Decides if the channel supports J1939 */
  CanSm_GwTypeOfChannelType GwTypeOfChannel;                             /**< The partial network gateway type, relevant for channels attached to coordinated partial networks */
  CanSm_InhibitionInitValueOfChannelType InhibitionInitValueOfChannel;   /**< Initial value of the inhibition status of the channel */
  CanSm_MinFullComTimeOfChannelType MinFullComTimeOfChannel;             /**< Minimal full communication time for the channel, relevant for NmType LIGHT */
  CanSm_NmTypeOfChannelType NmTypeOfChannel;                             /**< The Network management type fo the channel */
} CanSm_ChannelType;

typedef struct CanSM_ChannelVarRecordTypeTag
{
  uint8   CanSM_CurrentState;
  uint8   CanSM_RequestedComMode;
  uint8   CanSM_IndicatedComMode;

} CanSM_ChannelVarRecordType;

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE-COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**   \brief  type used in Nm_NmChannelIdConfigType */
typedef CAN_UINT8 Nm_NmChannelIdConfigType;

/**   \brief  type used in Nm_NmFunctionTableIdxConfigType */
typedef CAN_UINT8 Nm_NmFunctionTableIdxConfigType;

/**   \brief  type used in Nm_ChannelConfig */
typedef struct sNm_ChannelConfigType
{
  Nm_NmChannelIdConfigType NmChannelIdConfig;
  Nm_NmFunctionTableIdxConfigType NmFunctionTableIdxConfig;  /**< the index of the 1:1 relation pointing to Nm_NmFunctionTable */

} Nm_ChannelConfigType;

/* Function Table Types */
typedef P2FUNC ( Std_ReturnType, NM_CODE, Nm_CallBusFuncTypeStandard )( NetworkHandleType const );
typedef P2FUNC ( Std_ReturnType, NM_CODE, Nm_CallBusFuncTypeSetUserData )( CONST( NetworkHandleType, AUTOMATIC ), CONSTP2CONST( CAN_UINT8, AUTOMATIC, NM_APPL_VAR ) );
typedef P2FUNC ( Std_ReturnType, NM_CODE, Nm_CallBusFuncTypeGetData )( CONST( NetworkHandleType, AUTOMATIC ), CONSTP2VAR( CAN_UINT8, AUTOMATIC, NM_APPL_VAR ) );
typedef P2FUNC ( Std_ReturnType, NM_CODE, Nm_CallBusFuncTypeGetState )( CONST( NetworkHandleType, AUTOMATIC ), CONSTP2VAR( Nm_StateType, AUTOMATIC, NM_APPL_VAR ), CONSTP2VAR( Nm_ModeType, AUTOMATIC, NM_APPL_VAR ) );
typedef P2FUNC ( Std_ReturnType, NM_CODE, Nm_CallBusFuncTypeSetSleepReady )( CONST( NetworkHandleType, AUTOMATIC ), CONST( CAN_UINT8, AUTOMATIC) );

/**   \brief  type used in Nm_NmFunctionTable */
typedef struct sNm_NmFunctionTableType
{
  Nm_CallBusFuncTypeGetData GetLocalNodeIdentifierFuncTable;
  Nm_CallBusFuncTypeGetData GetNodeIdentifierFuncTable;
  Nm_CallBusFuncTypeGetData GetPduDataFuncTable;
  Nm_CallBusFuncTypeGetData GetUserDataFuncTable;
  Nm_CallBusFuncTypeGetState GetStateFuncTable;
  Nm_CallBusFuncTypeSetUserData SetUserDataFuncTable;
  Nm_CallBusFuncTypeStandard DisableCommunicationFuncTable;
  Nm_CallBusFuncTypeStandard EnableCommunicationFuncTable;
  Nm_CallBusFuncTypeStandard NetworkReleaseFuncTable;
  Nm_CallBusFuncTypeStandard NetworkRequestFuncTable;
  Nm_CallBusFuncTypeStandard PassiveStartUpFuncTable;

} Nm_NmFunctionTableType;


/**   \brief  type used in Nm_NumberOfChannels */
typedef CAN_UINT8 Nm_NumberOfChannelsType;

/**   \brief  type used in Nm_NumberOfCoord */
typedef CAN_UINT8 Nm_NumberOfCoordType;

/**   \brief  type used in Nm_NumberOfSystemChannels */
typedef CAN_UINT8 Nm_NumberOfSystemChannelsType;

/**   \brief  type used in Nm_SizeOfChannelConfig */
typedef CAN_UINT8 Nm_SizeOfChannelConfigType;

/**   \brief  type used in Nm_SizeOfNmFunctionTable */
typedef CAN_UINT8 Nm_SizeOfNmFunctionTableType;

/**   \brief  type used in Nm_PCConfig */
typedef struct sNm_PCConfigType
{
  CAN_UINT8 neverUsed;

} Nm_PCConfigType;

typedef Nm_PCConfigType Nm_ConfigType;

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANSM_DEFINES_H */

