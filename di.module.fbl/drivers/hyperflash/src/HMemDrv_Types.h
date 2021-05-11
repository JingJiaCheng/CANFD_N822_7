//---------------------------------------------------------------------------------------------------------------------
//
// VISTEON CORPORATION CONFIDENTIAL
// ________________________________
//
// [2015] Visteon Corporation
// All Rights Reserved.
//
// NOTICE: This is an unpublished work of authorship, which contains trade secrets.
// Visteon Corporation owns all rights to this work and intends to maintain it in confidence to preserve
// its trade secret status. Visteon Corporation reserves the right, under the copyright laws of the United States
// or those of any other country that may have jurisdiction, to protect this work as an unpublished work,
// in the event of an inadvertent or deliberate unauthorized publication. Visteon Corporation also reserves its rights
// under all copyright laws to protect this work as a published work, when appropriate.
// Those having access to this work may not copy it, use it, modify it, or disclose the information contained in it
// without the written authorization of Visteon Corporation.
//
//---------------------------------------------------------------------------------------------------------------------
#ifndef HMEMDRV_TYPES_H
#define HMEMDRV_TYPES_H

#include "Std_Types.h"
//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

typedef uint32 HMemDrv_AddressType;
typedef uint32 HMemDrv_LengthType;

typedef enum EHMemDrvJobResult_t
{
    EHMemDrvJobResult_OK,
    EHMemDrvJobResult_JobPending,
    EHMemDrvJobResult_JobFailed
}HMemDrv_JobResultType;

//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================

#endif /* HMEMDRV_TYPES_H_ */
