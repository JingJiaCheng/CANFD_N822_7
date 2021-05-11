//---------------------------------------------------------------------------------------------------------------------
//
// VISTEON CORPORATION CONFIDENTIAL
// ________________________________
//
// [2017] Visteon Corporation
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
//
// File generated automatically using Visteon HMemDrv Configurator 1.0
// Date:           Thu Feb 16 17:28:41 EET 2017
// User:           Sofia11
// Configuration:  J59_MAZDA
// Comment:
//      Configuration for TA 1.5
//
//---------------------------------------------------------------------------------------------------------------------
#ifndef HMEMDRVPRIVATE_CFG_H
#define HMEMDRVPRIVATE_CFG_H

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

#define HBUS_CONFIG_NUMBER           (uint8)2

#define HYPERBUS_INIT()                 \
{                                       \
    HBus_SetMpuRegions(cMpuDefault);    \
    HBus_Init();                        \
    HFlash_Init();                      \
    HBus_SetMpuRegions(cMpuConfig);     \
}

    //HRam_Init();                        
//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================

#endif //HMEMDRVPRIVATE_CFG_H
