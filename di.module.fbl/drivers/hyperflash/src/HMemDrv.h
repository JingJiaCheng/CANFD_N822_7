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
#ifndef HMEMDRV_H
#define HMEMDRV_H

#include "HMemDrv_Types.h"

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================
void HMemDrv_Init( void );
void HMemDrv_DeInit( void );
boolean HMemDrv_DmaFinished( void );
void HMemDrv_ISR_Dma( void );
Std_ReturnType HMemDrv_Write(const HMemDrv_AddressType TgtAddress, uint16* SrcAddressPtr, const HMemDrv_LengthType Length);
Std_ReturnType HMemDrv_Read (const HMemDrv_AddressType SrcAddress, uint8* TgtAddressPtr, const HMemDrv_LengthType Length);
Std_ReturnType HMemDrv_Erase(const HMemDrv_AddressType TgtAddress, const HMemDrv_LengthType Length);
HMemDrv_JobResultType HMemDrv_GetJobResult(void);

#endif //HMEMDRV_H
