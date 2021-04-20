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



#if !defined(CANXCP_CFG_H)
#define CANXCP_CFG_H

/* -----------------------------------------------------------------------------
    &&&~  
 ----------------------------------------------------------------------------- */

#include "CanXcp_Types.h"

#if !defined XcpConfig
#define XcpConfig    CanXcp_Config
#endif

/* CanXcpTxPduId symbolic name defines */

/* \defgroup Handle IDs.
 * \{
 */
 
/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define XcpConf_XcpTxPdu_TxXCP_Response_oCAN_3abd61be                 0
/**
 * \ }
 */


/* CanXcpRxPduId symbolic name defines */

/* \defgroup Handle IDs.
 * \{
 */
 
/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define XcpConf_XcpRxPdu_RxXCP_Request_oCAN_3abd61be                  0
/**
 * \ }
 */



#ifndef XCP_USE_DUMMY_FUNCTIONS
#define XCP_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyFunction */
#endif
#ifndef XCP_USE_DUMMY_STATEMENT
#define XCP_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatement */
#endif
#ifndef XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef XCP_ATOMIC_VARIABLE_ACCESS
#define XCP_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef XCP_PROCESSOR_S6J324CXS
#define XCP_PROCESSOR_S6J324CXS
#endif
#ifndef XCP_COMP_GREENHILLS
#define XCP_COMP_GREENHILLS
#endif
#ifndef XCP_GEN_GENERATOR_MSR
#define XCP_GEN_GENERATOR_MSR
#endif
#ifndef XCP_CPUTYPE_BITORDER_LSB2MSB
#define XCP_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/BitOrder */ 
#endif
#ifndef XCP_CONFIGURATION_VARIANT_PRECOMPILE
#define XCP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef XCP_CONFIGURATION_VARIANT_LINKTIME
#define XCP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef XCP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define XCP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef XCP_CONFIGURATION_VARIANT
#define XCP_CONFIGURATION_VARIANT XCP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef XCP_POSTBUILD_VARIANT_SUPPORT
#define XCP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define CANXCP_USE_PDUINFOTYPE STD_ON
#define CANXCP_DEV_ERROR_DETECT              STD_ON 
#define CANXCP_VERSION_INFO_API              STD_OFF   

#ifndef CANXCP_AUTOSARVERSION
#define CANXCP_AUTOSARVERSION                4
#endif

#ifndef CANXCP_CONFIGURATOR
#define CANXCP_CONFIGURATOR                  5
#endif

#ifndef CANXCP_CONFIG_VARIANT
#define CANXCP_CONFIG_VARIANT XCP_CONFIGURATION_VARIANT
#endif

/* Transport Layer */
#define CANXCP_MULTI_CHANNEL_DISABLED
#define CANXCP_MULTI_CONN_PROT_DISABLED
#define CANXCP_TRANSPORT_LAYER_VERSION       0x0100u
#define CANXCP_VARIABLE_DLC_DISABLED
#define kXcpSendQueueMinSize                 1u
/* Enable/Disable transport layer activation control API */
#define CANXCP_ENABLE_CONTROL                STD_OFF
#define CANXCP_NUMBER_OF_CHANNELS            1U
#define CANXCP_CONF_TIMEOUT                  2000U
#define kCanXcpMaxCTO                        8U
#define kCanXcpMaxDTO                        8U

#define CANXCP_PDU_SIZE                      8U/* CAN-FD specific options */
#define CANXCP_USE_PDUMODE                   STD_ON

#define CANXCP_SILENT_CHECK                  STD_OFF
#define CANXCP_AMD_RUNTIME_MEASUREMENT       STD_OFF

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANXCP_CFG_H */


