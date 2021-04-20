#if !defined(CANIL_UTIL_H)
#define CANIL_UTIL_H
/* ===========================================================================
//
//                     CONFIDENTIAL VISTEON CORPORATION
//
//  This is an unpublished work of authorship, which contains trade secrets,
//  created in 2006.  Visteon Corporation owns all rights to this work and
//  intends to maintain it in confidence to preserve its trade secret status.
//  Visteon Corporation reserves the right, under the copyright laws of the
//  United States or those of any other country that may have jurisdiction, to
//  protect this work as an unpublished work, in the event of an inadvertent
//  or deliberate unauthorized publication.  Visteon Corporation also reserves
//  its rights under all copyright laws to protect this work as a published
//  work, when appropriate.  Those having access to this work may not copy it,
//  use it, modify it or disclose the information contained in it without the
//  written authorization of Visteon Corporation.
//
// =========================================================================*/
/* ===========================================================================
//
//  Name:           CanIl_Util.h
//
//  Description:    CAN Utilities Header File
//
//  Organization:   Multiplex Subsystems
//
// =========================================================================*/

#include "CanIl_Util_Cfg.h"

extern CAN_UINT8 TxStopFlag;

typedef struct sCanDbgDetailStruct
{
    CAN_UINT16 moduleId;
	CAN_UINT8  instanceId;
	CAN_UINT8  apiId;
	CAN_UINT8  errorId;

}CanDbgDetailStruct;

/* ===========================================================================
//  P U B L I C   M A C R O S
// =========================================================================*/
#define CanIlUtilTestBits(pStatus, bitMask)     ((*pStatus) & bitMask)

/* ===========================================================================
//  P U B L I C   F U N C T I O N   P R O T O T Y P E S
// =========================================================================*/
extern void
CanIlUtilCopyBytesAtomic( CAN_UINT8 const * const pFrom, CAN_UINT8 * const pTo, CAN_UINT8 const numBytes );

extern void
CanIlUtilCopyBytes( CAN_UINT8 const * const pFrom, CAN_UINT8 * const pTo, CAN_UINT8 const numBytes );

extern void
CanIlUtilSetClearBits( CAN_UINT8 * const pStatus, CAN_UINT8 const bitMask, CAN_BOOLEAN setMode );

extern void
CanIlUtilCopyByteinReverse(CAN_UINT8 const * const pFrom, CAN_UINT8 * const pTo, CAN_UINT8 const numBytes );


#ifdef CANUTIL_ENABLED
extern FUNC(void, CAN_DBG_CODE) CanUtil_Init(void);
extern FUNC(void, CAN_DBG_CODE) CanUtil_ReportError( /*CAN_UINT16 ModuleId, CAN_UINT8 InstanceId, CAN_UINT8 ApiId, CAN_UINT8 ErrorId*/ );
#endif /* CANUTIL_ENABLED */

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANIL_UTIL_H */

