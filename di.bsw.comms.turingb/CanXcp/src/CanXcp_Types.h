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

#if !defined ( CANXCP_TYPES_H )
#define CANXCP_TYPES_H

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "CclStack_Types.h"              /* Include Communication Stack Types */


/*******************************************************************************
* Version
*******************************************************************************/
#define CANXCP_TPS_MAJOR_VERSION         0x01u
#define CANXCP_TPS_MINOR_VERSION         0x10u
#define CANXCP_TPS_PATCH_VERSION         0x00u


/*******************************************************************************
* Default Defintions
*******************************************************************************/

/*******************************************************************************
* Type definitions
*******************************************************************************/

typedef uint16 CanXcp_TimeoutTimerType;

typedef enum
{
  CANXCP_SET_OFFLINE = 0,
  CANXCP_SET_ONLINE
} CanXcp_PduSetModeType;

typedef struct
{
  PduIdType CanXcpRxPduId;
  PduIdType CanXcpTxPduId;
} CanXcp_XcpPduType;

typedef struct
{
  P2CONST(CanXcp_XcpPduType, TYPEDEF, CANXCP_PBCFG) CanXcp_XcpPduPtr;
  P2CONST(NetworkHandleType, TYPEDEF, CANXCP_PBCFG) CanXcp_NwHMappingPtr;
  uint8 CanXcp_NumberOfSystemChannels;
} CanXcp_ConfigType;

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANXCP_TYPES_H */

