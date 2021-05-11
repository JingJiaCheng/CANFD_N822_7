#ifndef HF_H
#define HF_H
/* ===========================================================================
**
**                       CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2009.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**  its rights under all copyright laws to protect this work as a published
**  work, when appropriate.  Those having access to this work may not copy it,
**  use it, modify it or disclose the information contained in it without the
**  written authorization of Visteon Corporation.
**
** =========================================================================*/



/* ===========================================================================

  							Name   : hf.h

  					Description	   : PBL Flash driver header file

  					Organization   : Multiplex Core Technology

============================================================================*/


#include "system.h"
// Include files
#include "s6j3200_HYPERBUSI.h"
#include "s6j3200_GRPSUB.h"
#include "fbl_comp_cfg.h"


/*******************************************************************************
================================================================================
 								Typedefinations                                 
================================================================================
*******************************************************************************/
typedef unsigned short int FLASHDATA;
typedef unsigned long ADDRESS;     /* Used for system level addressing */


/*******************************************************************************
================================================================================
 								Macros                                        
================================================================================
*******************************************************************************/

#define     WRITE(r,v) r=v
#define     WPREGBIT_GPIO(n,b,d)                    \
{                                                   \
    un_gpio_keycdr_t wk;                            \
    unsigned long adr = (unsigned long)&n;          \
    unsigned char size_key;                         \
    unsigned int i;                                 \
    unsigned long wkdata;                           \
    wk.au16Halfword[0] = adr & 0x7FFF;              \
    size_key = (sizeof(n) >> 1) << 4;               \
    wkdata = n;                                     \
    if(d)                                           \
        wkdata |= (1<<b);                           \
    else                                            \
        wkdata &= ~(1<<b);                          \
   i = __DIR();                                    /*    __disable_interrupt(); */\
    wk.au8Byte[3] = size_key | (0 << 6);                   \
    GPIO_KEYCDR = wk.u32Register;                   \
    wk.au8Byte[3] = size_key | (1 << 6);                   \
    GPIO_KEYCDR = wk.u32Register;                   \
    wk.au8Byte[3] = size_key | (2 << 6);                   \
    GPIO_KEYCDR = wk.u32Register;                   \
    wk.au8Byte[3] = size_key | (3 << 6);                   \
    GPIO_KEYCDR = wk.u32Register;                   \
    n = wkdata;                                     \
    __RIR(i);                                   /*    __enable_interrupt(); */ \
}


#define FLASH_OFFSET(b,o)       (*(( (volatile FLASHDATA*)(b) ) + (o)))
#define FLASH_WR(b,o,d) FLASH_OFFSET((b),(o)) = (d)
#define FLASH_RD(b,o)   FLASH_OFFSET((b),(o))          

#define SA_OFFSET_MASK						(0xFFFE0000)   /* mask off the offset */
#define NOR_RESET_CMD                    	((0xF0)*LLD_DEV_MULTIPLIER)
#define LLD_CFI_UNLOCK_ADDR1 				(0x00000055)
#define LLD_UNLOCK_ADDR1   					(0x00000555)
#define LLD_UNLOCK_ADDR2   					(0x000002AA)
#define LLD_DEV_MULTIPLIER 					(0x00000001)
#define NOR_UNLOCK_DATA1                 	((0xAA)*LLD_DEV_MULTIPLIER)
#define NOR_UNLOCK_DATA2                 	((0x55)*LLD_DEV_MULTIPLIER)
#define NOR_CFI_QUERY_CMD                	((0x98)*LLD_DEV_MULTIPLIER)
#define NOR_LOAD_VOLATILE_CFG_REG_CMD       ((0x38)*1)

#define GPIO_PORTEN	(GPIO.unPORTEN.u32Register)  /*@rg@*/

#define cAXIBRIDGE_UNLOCK_KEY       (0x691db936)
#define cAXIBRIDGE_LOCK_KEY         (0x5651f763)

#define cSTART_REGION_OFFSET                (uint8_t)8
#define cEND_REGION_OFFSET                  (uint8_t)8


#define GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(Id)         \
    ((un_grpsub_subc_ilaxibridge_startmaster0region0_t*)(((uint32_t)&GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER0REGION0) + \
    ((Id) * cSTART_REGION_OFFSET)))


#define GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(Id)           \
    ((un_grpsub_subc_ilaxibridge_endmaster0region0_t*)(((uint32_t)&GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER0REGION0) + \
    ((Id) * cEND_REGION_OFFSET)))

#define cSINGLE_HYPERBUS                    (uint8_t)1



#define E_INVALID_ARG (uint8_t)3u
#define E_OK          0u


#define HBUS_CONFIG_NUMBER           (uint8_t)2
#define HYPERBUS_TYPE               HYPERBUSI1_Type         // HYPERBUSI0_Type = MCU side or HYPERBUSI1_Type = GPU side
#define HYPERBUS_POLARITY           eHyperbusiHighPolarity  // eHyperbusiLowPolarity or eHyperbusiHighPolarity
#define HYPERBUS_REMAP              eHpbmHyperBus           // eHpbmDDRHSSPI or eHpbmHyperBus

#define HYPER_BUS_CONFIG                                                    \
static const SHyperbusiInterruptConfig HBusConfig [2]=                         \
{                                                                              \
    {                                                                          \
        HYPERBUSI1_Type /* Hyperbus channel */,                                \
        FALSE     /* TRUE=IENOn signal is active high, FALSE=active low */,    \
        FALSE     /* TRUE=Enable, FALSE=Disable */                             \
    },                                                                         \
    {                                                                          \
        HYPERBUSI2_Type /* Hyperbus channel */,                                \
        FALSE     /* TRUE=IENOn signal is active high, FALSE=active low */,    \
        FALSE     /* TRUE=Enable, FALSE=Disable */                             \
    },                                                                         \
};                                                                             \
static const SHyperbusiPolarityConfig HBusPolarity [2]=                        \
{                                                                              \
    {                                                                          \
        HYPERBUSI1_Type      /* Hyperbus channel */,                           \
        (EHyperbusiGPO)1     /* Output signal polarity LOW or HIGH */          \
    },                                                                         \
    {                                                                          \
        HYPERBUSI2_Type      /* Hyperbus channel */,                           \
        (EHyperbusiGPO)1     /* Output signal polarity LOW or HIGH */          \
    },                                                                         \
};  


#define HFLASH_CONFIG_NUMBER           (uint8_t)2
#define HYPER_FLASH_CONFIG                                                                          \
static SHyperbusiMemoryConfig HFlashMemConfig[1] =                                                      \
{                                                                                                       \
    {                                                                                                   \
        FALSE /* TRUE=Merging WRAP, FALSE=No merging WRAP */,                                           \
        FALSE /* TRUE=Asymmetry cache, FALSE=No asymmetry cache */,                                     \
        FALSE /* TRUE=Register space, FALSE=Memory space */,                                            \
        eHyperbusiHyperFlash /* See description of #HyperbusiDevice */,                                 \
        eHyperbusiWrapsize32 /* See description of EHyperbusiWrapsize */                                \
    },                                                                                                  \
};                                                                                                      \
static SHyperbusiMemoryTiming HFlashMemTiming[1] =                                                      \
{                                                                                                       \
    {                                                                                                   \
        eHyperbusiCKcycle1 /* In the Read, chip select high period */,                                  \
        eHyperbusiCKcycle1 /* In the Write, chip select high period */,                                 \
        eHyperbusiCKcycle1 /* In the Read, between falling edge of CS and rising edge of first CK */,   \
        eHyperbusiCKcycle1 /* In the Write, between falling edge of CS and rising edge of first CK */,  \
        eHyperbusiCKcycle2 /* In the Read, between falling edge of last CK and rising edge of CS */,    \
        eHyperbusiCKcycle1 /* In the Write, between falling edge of last CK and rising edge of CS */,   \
        eHyperbusiLatencyCK4 /* In the HyperRAM mode, read latency of HyperBus memory */                \
    },                                                                                                  \
};                                                                                                      \
static const SHyperbusiConfig HFlashConfig [2]=                                                         \
{                                                                                                       \
    {                                                                                                   \
        HYPERBUSI2_Type         /* Hyperbus channel */,                                                 \
        (uint32_t)HYPERFLASH0_START_ADDRESS      /* The start address of Hyperflash */,                                  \
        (uint32_t)HYPERFLASH0_END_ADDRESS      /* The end address of Hyperflash */,                                    \
        eHyperbusiChipSelect1   /* Chip Select */,                                                      \
        &HFlashMemConfig[0]     /* See description of SHyperbusiMemoryConfig */,                        \
        &HFlashMemTiming[0]     /* See description of SHyperbusiMemoryTiming */,                        \
        (uint8_t)2                /* AXI bridge region */                                                 \
    },                                                                                                       \
    {                                                                                                   \
        HYPERBUSI2_Type         /* Hyperbus channel */,                                                 \
        (uint32_t)HYPERFLASH1_START_ADDRESS      /* The start address of Hyperflash */,                                  \
        (uint32_t)HYPERFLASH1_END_ADDRESS      /* The end address of Hyperflash */,                                    \
        eHyperbusiChipSelect2   /* Chip Select */,                                                      \
        &HFlashMemConfig[0]     /* See description of SHyperbusiMemoryConfig */,                        \
        &HFlashMemTiming[0]     /* See description of SHyperbusiMemoryTiming */,                        \
        (uint8_t)3                /* AXI bridge region */                                                 \
    },                                                                                                 \
};


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
    eHyperbusiChipSelect1  = 0,     // CS#1
    eHyperbusiChipSelect2  = 1,     // CS#2
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
    uint8_t            ContinuousReadMerging; // TRUE=Merging WRAP, FALSE=No merging WRAP
    uint8_t            AsymmetryCache;        // TRUE=Asymmetry cache, FALSE=No asymmetry cache
    uint8_t            RegisterTarget;        // TRUE=Register space, FALSE=Memory space
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
    uint32_t                 MemoryStartAddress; // The Start address of addressable region
    uint32_t                 MemoryEndAddress;   // The end address of addressable region
    EHyperbusiChipSelect   ChipSelect;         // CS#1 or CS#2
    SHyperbusiMemoryConfig *MemoryConfig;      // See description of SHyperbusiMemoryConfig
    SHyperbusiMemoryTiming *MemoryTiming;      // See description of SHyperbusiMemoryTiming
    uint8_t                  AxiBridgeRegion;    // AXI bridge region number
} SHyperbusiConfig;

// Hyperbusi interrupt configuration.
typedef struct SHyperbusiInterruptConfig_t
{
    THyperbusiType         HyperBusType;        // Hyperbus type
    uint8_t                InterruptPolarity;   // TRUE=IENOn signal is active high, FALSE=active low
    uint8_t                MemoryInterrupt;     // TRUE=Enable, FALSE=Disable
} SHyperbusiInterruptConfig;

typedef struct SHyperbusiPolarityConfig_t
{
    THyperbusiType         HyperBusType;        // Hyperbus channel
    EHyperbusiGPO          Polarity;            // Polarity
} SHyperbusiPolarityConfig;


/*******************************************************************************
================================================================================
 								Prototypes                                        
================================================================================
*******************************************************************************/
void HBus_Init(void);
void Hyper_Init(uint32_t addr);
void HFlash_Init(void);
#endif
/*******************************************************************************
================================================================================
				RTC    REVISION     NOTES									   
  		For each change to this file, be sure to record:					   
  		1.   Who made the change and when the change was made.				   
  		2.   Why the change was made and the intended result.				   
  																			   
  		Date      version     By         Reason For Change					   
================================================================================  																			   
       10-03-16      1      PSATHISH      Initial version						   

================================================================================
*******************************************************************************/
