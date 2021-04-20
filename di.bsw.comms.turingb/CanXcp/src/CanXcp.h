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

#if !defined ( CANXCP_H )
#define CANXCP_H

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "CanXcp_Types.h"              /* Type definitions for XCP on CAN ASR */
#include "CanXcp_Cfg.h"                /* Include configuration of XCP on CAN */
#include "Xcp_Cfg.h"           /* Include configuration of XCP Protocol Layer */

#if defined (CANXCP_CONFIGURATOR) && (CANXCP_CONFIGURATOR == 5)
/* ESCAN00076847: extern declaration of the root struct */
#include "CanXcp_Lcfg.h"
//#include "CanXcp_PBcfg.h"
#else
  #include "SchM_CanXcp.h"
#endif

#include "can_defs.h"
/*******************************************************************************
* Version
*******************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : Cp_XcpOnCanAsr CQComponent : Implementation */
#define CP_XCPONCANASR_VERSION          0x0110u
#define CP_XCPONCANASR_RELEASE_VERSION  0x00u

#define CANXCP_SW_MAJOR_VERSION         ((CP_XCPONCANASR_VERSION & 0xFF00) >> 8)
#define CANXCP_SW_MINOR_VERSION         (CP_XCPONCANASR_VERSION & 0xFF)
#define CANXCP_SW_PATCH_VERSION         (CP_XCPONCANASR_RELEASE_VERSION)

#define CANXCP_VENDOR_ID                30u
#define CANXCP_MODULE_ID                212u

#define CANXCP_START_SEC_CONST_8BIT
//#include "MemMap.h"

extern CONST(uint8, CANXCP_CONST)       kXcpOnCanAsrMainVersion;
extern CONST(uint8, CANXCP_CONST)       kXcpOnCanSubAsrVersion;
extern CONST(uint8, CANXCP_CONST)       kXcpOnCanAsrReleaseVersion;

#define CANXCP_STOP_SEC_CONST_8BIT
//#include "MemMap.h"

/* Version of the XCP Transport Layer for CAN specification. */
#if ! defined ( CANXCP_TRANSPORT_LAYER_VERSION )
  #define CANXCP_TRANSPORT_LAYER_VERSION   0x0100
#endif

/*******************************************************************************
* Default Defintions
*******************************************************************************/

/* CTO and DTO are per default 8 on CAN. */

#if defined ( kCanXcpMaxCTO )
#else
  #define kCanXcpMaxCTO                    8
#endif

#if defined ( kCanXcpMaxDTO )
#else
  #define kCanXcpMaxDTO                    8
#endif

#if defined CANXCP_PDU_SIZE
#else
  #define CANXCP_PDU_SIZE 8
#endif

#if !defined ( CANXCP_CONF_TIMEOUT )
# define CANXCP_CONF_TIMEOUT 25u
#endif

/* Initialization status of XCP. */
#define CANXCP_UNINIT   0
#define CANXCP_INIT     1

/* The function XcpGetSessionStatus is required for the protection against multiple connections. */
#if defined ( CANXCP_MULTI_CONN_PROT_ENABLED )
  #if !defined ( XCP_ENABLE_GET_SESSION_STATUS_API )
    #define XCP_ENABLE_GET_SESSION_STATUS_API
  #endif
#endif


#if !defined ( CANXCP_ENABLE_PDUMODE )
  #if defined (CANXCP_AUTOSARVERSION) && (CANXCP_AUTOSARVERSION == 4)
    #define CANXCP_ENABLE_PDUMODE STD_OFF
  #else
    #define CANXCP_ENABLE_PDUMODE STD_ON
  #endif
#endif


/*******************************************************************************
* Type definitions
*******************************************************************************/

/* Development errors */
#if ( CANXCP_DEV_ERROR_DETECT == STD_ON )
/* Definition of the API ID */
  #define CANXCP_INIT_SERVICE_ID                   0u
  #define CANXCP_TLSERVICE_ID                      1u
  #define CANXCP_SEND_ID                           2u
  #define CANXCP_SENDFLUSH_ID                      4u
  #define CANXCP_CONTROL_ID                        5u
  #define CANXCP_GETVERSIONINFO_ID                 6u
  #define CANXCP_SETPDUMODE_ID                     7u
  #define CANXCP_TXCONFIRMATION_SERVICE_ID       101u
  #define CANXCP_RXINDICATION_SERVICE_ID         102u
  #define CANXCP_MAINFUNCTION_SERVICE_ID         200u

/* Definition of errors/exceptions */
  #define CANXCP_E_INV_POINTER                     1u
  #define CANXCP_E_NOT_INITIALIZED                 2u
  #define CANXCP_E_INVALID_PDUID                   3u
  #define CANXCP_E_NULL_POINTER                   18u
  #define CANXCP_E_RX_BUFFER_OVERFLOW              4u
  #define CANXCP_E_WRONG_CONTROL_COMMAND           5u
  #define CANXCP_E_INVALID_NW_HANDLE               6u
#endif

#define Can_Ch0_Xcp_Rx_Msg_XCP_Request              12
#define Can_Ch0_Xcp_Tx_Msg_TxXCP_Response_TMH       4

/******************************************************************************/
/* External ROM Data                                                          */
/******************************************************************************/

/***************************************************************************/
/* Default macros                                                          */
/***************************************************************************/

/* Interrupt enable and disable functions */
#if ( defined CANXCP_AUTOSARVERSION ) && ( CANXCP_AUTOSARVERSION == 4 )
# define CanXcp_EnterCritical()            SchM_Enter_Xcp_CANXCP_EXCLUSIVE_AREA_0()
# define CanXcp_LeaveCritical()            SchM_Exit_Xcp_CANXCP_EXCLUSIVE_AREA_0()
#else
# define CanXcp_EnterCritical()            SchM_Enter_CanXcp(CANXCP_EXCLUSIVE_AREA_0)
# define CanXcp_LeaveCritical()            SchM_Exit_CanXcp(CANXCP_EXCLUSIVE_AREA_0)
#endif 

#if defined ( ApplXcpInterruptDisable )
#else
  #if defined (CANXCP_AUTOSARVERSION) && (CANXCP_AUTOSARVERSION == 4)
    #if defined (CANXCP_CONFIGURATOR) && (CANXCP_CONFIGURATOR == 5)
      #define ApplXcpInterruptDisable()           SchM_Enter_Xcp_CANXCP_EXCLUSIVE_AREA_0()
    #else
      #define ApplXcpInterruptDisable()           SchM_Enter_CanXcp_CANXCP_EXCLUSIVE_AREA_0()
    #endif
  #else
    #define ApplXcpInterruptDisable()             SchM_Enter_CanXcp(CANXCP_EXCLUSIVE_AREA_0)
  #endif 
#endif
#if defined ( ApplXcpInterruptEnable )
#else
  #if defined (CANXCP_AUTOSARVERSION) && (CANXCP_AUTOSARVERSION == 4)
    #if defined (CANXCP_CONFIGURATOR) && (CANXCP_CONFIGURATOR == 5)
      #define ApplXcpInterruptEnable()            SchM_Exit_Xcp_CANXCP_EXCLUSIVE_AREA_0()
    #else
      #define ApplXcpInterruptEnable()            SchM_Exit_CanXcp_CANXCP_EXCLUSIVE_AREA_0()
    #endif
  #else
    #define ApplXcpInterruptEnable()              SchM_Exit_CanXcp(CANXCP_EXCLUSIVE_AREA_0)
  #endif 
#endif

#if defined ( XCP_GEN_GENERATOR_MSR )
  #define CanXcp_IsPostbuild() ((3u == CANXCP_CONFIG_VARIANT) || (XCP_POSTBUILD_VARIANT_SUPPORT == STD_ON))
#else
  #define CanXcp_IsPostbuild() (3u == CANXCP_CONFIG_VARIANT)
#endif


/****************************************************************************/
/* Prototypes                                                               */
/****************************************************************************/

#define CANXCP_START_SEC_CODE
//#include "MemMap.h"

extern FUNC(void, CANXCP_CODE) CanXcp_InitMemory( void );

#if ( CANXCP_VERSION_INFO_API == STD_ON )
extern FUNC(void, CANXCP_CODE) CanXcp_GetVersionInfo
(
  P2VAR(Std_VersionInfoType, AUTOMATIC, CANXCP_APPL_VAR) Versioninfo
);
#endif

extern FUNC(void, CANXCP_CODE) CanXcp_Init
(
  P2CONST(CanXcp_ConfigType, AUTOMATIC, CANXCP_PBCFG) ConfigPtr
);

#if defined ( CANXCP_ENABLE_CONTROL )
/* En- or disable the Xcp Protocol Layer globally */
extern FUNC(void, CANXCP_CODE) CanXcp_Control
(
  VAR(uint8, AUTOMATIC) command
);
  #define kXcponCan_Control_Disable   0x00u
  #define kXcponCan_Control_Enable    0x01u
#endif

extern FUNC(void, CANXCP_CODE) CanXcp_MainFunction( void );


extern FUNC(void, CANXCP_CODE) CanXcp_RxIndication
(
  CAN_HWINST const hwInst,
  VAR(PduIdType, AUTOMATIC) CanCanXcpRxPduId,
  CAN_RMD const * const pRmd
);

extern FUNC(void, CANXCP_CODE) CanXcp_TxConfirmation(CAN_HWINST const hwInst, VAR(PduIdType, AUTOMATIC) CanTxPduId );

extern FUNC(void, CANXCP_CODE) CanXcp_Send
(
  VAR(uint8, AUTOMATIC) len,
  P2CONST(uint8, AUTOMATIC, CANXCP_APPL_VAR) msg
); /* ESCAN00071289 */

/* R14 compatibility */
#define CanXcp_Transmit CanXcp_Send

extern FUNC(void, CANXCP_CODE) CanXcp_SendFlush( uint8 FlushType );
extern FUNC(uint8, CANXCP_CODE) CanXcp_TLService( P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) pCmd );
#if ( CANXCP_ENABLE_PDUMODE == STD_ON )
extern FUNC(void, CANXCP_CODE) CanXcp_SetPduMode( NetworkHandleType XcpNwH, CanXcp_PduSetModeType PduMode );
#else
  #define CanXcp_SetPduMode(XcpNwH, PduMode)
#endif


#define CANXCP_STOP_SEC_CODE

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANXCP_H */
