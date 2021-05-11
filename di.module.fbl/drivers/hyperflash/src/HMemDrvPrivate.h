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
#ifndef HMEMDRVPRIVATE_H
#define HMEMDRVPRIVATE_H

#include "HMemDrv_Types.h"

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

#define cSECTOR_SIZE                        (uint32)0x00040000UL
#define cSECTOR_ADDR_MASK                   (uint32)(0xFFFFFFFFUL-(cSECTOR_SIZE - 1UL))

#define cHYPERFLASH_WORD_CNT                (uint16)256

/// @brief Offset between consecutive registers
#define cSTART_REGION_OFFSET                (uint32)8
#define cEND_REGION_OFFSET                  (uint32)8

/// @brief unlock key
#define cAXIBRIDGE_UNLOCK_KEY               (uint32)0x691db936
/// @brief lock key
#define cAXIBRIDGE_LOCK_KEY                 (uint32)0x5651f763

/// @brief Register address
#define GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(Id)         \
    ((un_grpsub_subc_ilaxibridge_startmaster0region0_t*)(((uint32)&GRPSUB_SUBC.unilaxibridge_StartMaster0Region0.u32Register) + \
    ((Id) * cSTART_REGION_OFFSET)))

/// @brief Register address
#define GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(Id)           \
    (un_grpsub_subc_ilaxibridge_endmaster0region0_t*)((un_grpsub_subc_ilaxibridge_endmaster0region0_t*)(((uint32)&GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER0REGION0) + \
    ((Id) * cEND_REGION_OFFSET)))

#define cSINGLE_HYPERBUS                    (uint8)1

#define cMpuDefault                         (uint8)0
#define cMpuConfig                          (uint8)1

typedef enum EHFlashJobResult_t
{
    EHFlashJobResult_OK,
    EHFlashJobResult_JobPending,
    EHFlashJobResult_JobFailed
}HFlash_JobResultType;



//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================
void HBus_Init( void );
void HRam_Init( void );
void HFlash_Init( void );
Std_ReturnType HFlash_Write(const HMemDrv_AddressType TgtAddress, const uint16* SrcAddressPtr, const HMemDrv_LengthType Length);
Std_ReturnType HFlash_Read (const HMemDrv_AddressType SrcAddress, uint8* TgtAddressPtr, const HMemDrv_LengthType Length);
Std_ReturnType HFlash_EraseSector(const HMemDrv_AddressType TgtAddress);
HFlash_JobResultType HFlash_GetJobResult(void);
void HBus_SetMpuRegions(const uint8 Config);

#endif //HMEMDRVPRIVATE_H
