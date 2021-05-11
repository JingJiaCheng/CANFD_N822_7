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

#ifndef HYPERBUSI_H
#define HYPERBUSI_H

// Include files
#include "s6j3200_HYPERBUSI.h"
#include "s6j3200_GRPSUB.h"

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

#define HYPERBUSI0_Type   ((THyperbusiType)&HYPERBUSI0)              // HYPERBUSI ch0
#define HYPERBUSI1_Type   ((THyperbusiType)&GRPSUB_HYPERBUSI1_9)     // HYPERBUSI ch1
#define HYPERBUSI2_Type   ((THyperbusiType)&GRPSUB_HYPERBUSI2_10)    // HYPERBUSI ch2

//HyperRAM Configuration registers
#define cHRAM_CR0_ADDR                  0x800
#define cHRAM_CR0_LATENCY_OFFSET        4

// HYPERBUSI Unit Type
typedef volatile stc_hyperbusi0_t*  THyperbusiType;
typedef volatile stc_grpsub_hpbm_11_t* TGrpsubHpbm11;

// Hyperbusi chip select.
typedef enum EHyperbusiChipSelect_t
{
    eHyperbusiChipSelect1 = 0,     // CS#1
    eHyperbusiChipSelect2 = 1,     // CS#2
} EHyperbusiChipSelect;

// Hyperbusi wrap size.
typedef enum EHyperbusiWrapsize_t
{
    eHyperbusiWrapsize64  = 1,      // 64 Bytes
    eHyperbusiWrapsize16  = 2,      // 16 Bytes
    eHyperbusiWrapsize32  = 3       // 32 Bytes
} EHyperbusiWrapsize;

// Hyperbusi CK cycle.
typedef enum EHyperbusiCKcycle_t
{
    eHyperbusiCKcycle1  = 0,        // 1CK (RCSHI/WCSHI=1.5CK)
    eHyperbusiCKcycle2  = 1,        // 2CK (RCSHI/WCSHI=2.5CK)
    eHyperbusiCKcycle3  = 2,        // 3CK (RCSHI/WCSHI=3.5CK)
    eHyperbusiCKcycle4  = 3,        // 4CK (RCSHI/WCSHI=4.5CK)
    eHyperbusiCKcycle5  = 4,        // 5CK (RCSHI/WCSHI=5.5CK)
    eHyperbusiCKcycle6  = 5,        // 6CK (RCSHI/WCSHI=6.5CK)
    eHyperbusiCKcycle7  = 6,        // 7CK (RCSHI/WCSHI=7.5CK)
    eHyperbusiCKcycle8  = 7,        // 8CK (RCSHI/WCSHI=8.5CK)
    eHyperbusiCKcycle9  = 8,        // 9CK (RCSHI/WCSHI=9.5CK)
    eHyperbusiCKcycle10 = 9,        // 10CK (RCSHI/WCSHI=10.5CK)
    eHyperbusiCKcycle11 = 10,       // 11CK (RCSHI/WCSHI=11.5CK)
    eHyperbusiCKcycle12 = 11,       // 12CK (RCSHI/WCSHI=12.5CK)
    eHyperbusiCKcycle13 = 12,       // 13CK (RCSHI/WCSHI=13.5CK)
    eHyperbusiCKcycle14 = 13,       // 14CK (RCSHI/WCSHI=14.5CK)
    eHyperbusiCKcycle15 = 14,       // 15CK (RCSHI/WCSHI=15.5CK)
    eHyperbusiCKcycle16 = 15        // 16CK (RCSHI/WCSHI=16.5CK)
} EHyperbusiCKcycle;

// Hyperbusi Device Type.
typedef enum EHyperbusiDevice_t
{
    eHyperbusiHyperFlash  = 0,      // HyperFlash
    eHyperbusiHyperRAM    = 1       // HyperRAM
} EHyperbusiDevice;

// Hyperbusi latency CK cycle for HyperRAM.
typedef enum EHyperbusiLatency_t
{
    eHyperbusiLatencyCK5  = 0,      // 5CK Latency
    eHyperbusiLatencyCK6  = 1,      // 6CK Latency
    eHyperbusiLatencyCK4  = 15      // 4CK Latency
} EHyperbusiLatency;

// Hyperbusi General Purpose Output.
typedef enum EHyperbusiGPO_t
{
    eHyperbusiLowPolarity  = 0,     // Output signal polarity is LOW
    eHyperbusiHighPolarity = 1      // Output signal polarity is HIGH
} EHyperbusiGPO;

// High Performance Bus Matrix Remap.
typedef enum EHpbmRemap_t
{
    eHpbmDDRHSSPI  = 0,              // DDRHSSPI
    eHpbmHyperBus  = 1               // HyperBus
} EHpbmRemap;

// Hyperbusi memory configuration.
typedef struct SHyperbusiMemoryConfig_t
{
    boolean            ContinuousReadMerging; // TRUE=Merging WRAP, FALSE=No merging WRAP
    boolean            AsymmetryCache;        // TRUE=Asymmetry cache, FALSE=No asymmetry cache
    boolean            RegisterTarget;        // TRUE=Register space, FALSE=Memory space
    EHyperbusiDevice   DeviceType;            // See description of #HyperbusiDevice
    EHyperbusiWrapsize Wrapsize;              // See description of EHyperbusiWrapsize
} SHyperbusiMemoryConfig;

// Hyperbusi memory timing.
typedef struct SHyperbusiMemoryTiming_t
{
    EHyperbusiCKcycle ReadCSHigh;             // In the Read, chip select high period
    EHyperbusiCKcycle WriteCSHigh;            // In the Write, chip select high period
    EHyperbusiCKcycle ReadCSNextCKRising;     // In the Read, between falling edge of CS and rising edge of first CK
    EHyperbusiCKcycle WriteCSNextCKRising;    // In the Write, between falling edge of CS and rising edge of first CK
    EHyperbusiCKcycle ReadCSAfterCKfalling;   // In the Read, between falling edge of last CK and rising edge of CS
    EHyperbusiCKcycle WriteCSAfterCKfalling;  // In the Write, between falling edge of last CK and rising edge of CS
    EHyperbusiLatency LatencyCycle;           // In the HyperRAM mode, read latency of HyperBus memory
} SHyperbusiMemoryTiming;

// Hyperbusi configuration.
typedef struct SHyperbusiConfig_t
{
    THyperbusiType         HyperBusType;       // Hyperbus type
    uint32                 MemoryStartAddress; // The Start address of addressable region
    uint32                 MemoryEndAddress;   // The end address of addressable region
    EHyperbusiChipSelect   ChipSelect;         // CS#1 or CS#2
    SHyperbusiMemoryConfig *MemoryConfig;      // See description of SHyperbusiMemoryConfig
    SHyperbusiMemoryTiming *MemoryTiming;      // See description of SHyperbusiMemoryTiming
    uint8                  AxiBridgeRegion;    // AXI bridge region number
    uint16                 DriveStrength;      // Output Drive Strength
} SHyperbusiConfig;

// Hyperbusi interrupt configuration.
typedef struct SHyperbusiInterruptConfig_t
{
    THyperbusiType         HyperBusType;        // Hyperbus type
    boolean                InterruptPolarity;   // TRUE=IENOn signal is active high, FALSE=active low
    boolean                MemoryInterrupt;     // TRUE=Enable, FALSE=Disable
} SHyperbusiInterruptConfig;

typedef struct SHyperbusiPolarityConfig_t
{
    THyperbusiType         HyperBusType;        // Hyperbus channel
    EHyperbusiGPO          Polarity;            // Polarity
} SHyperbusiPolarityConfig;

// Hyperbusi MPU configuration.
typedef struct SHyperbusiMpuConfig_t
{
    uint32        StartAddress;                 // The Start address of MPU region
    uint32        Access;                       // Access rights
    uint8         Number;                       // Region number
    uint8         Size;                         // Region size
} SHyperbusiMpuConfig;


//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================

Std_ReturnType Hyperbusi_Init(const SHyperbusiConfig *pConfig);
Std_ReturnType Hyperbusi_InitInterrupt(const SHyperbusiInterruptConfig* pConfig);
Std_ReturnType Hyperbusi_SetGPOutput(const SHyperbusiPolarityConfig* pConfig);
Std_ReturnType Hyperbusi_SetRemapControl(TGrpsubHpbm11 const pHpbm, EHpbmRemap TargetModule);
Std_ReturnType Hyperbusi_Set_CR_Space(const SHyperbusiConfig *pConfig, const boolean IsRegSpace);
Std_ReturnType Hyperbusi_Read_Reg(const SHyperbusiConfig *pConfig, const uint32 RegOffset, uint16 *pRegValue);
Std_ReturnType Hyperbusi_Write_Reg(const SHyperbusiConfig *pConfig, const uint32 RegOffset, const uint16 RegValue);

#endif // __HYPERBUSI_H__
