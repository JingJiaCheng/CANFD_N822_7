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

#include "Std_Types.h"
#include "HMemDrvPrivate.h"
#include "HMemDrvPrivate_Cfg.h"
#include "HBusDrv_Cfg.h"
#include "hyperbusi.h"
#include "pdl_port.h"
#include "abstract.h"

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

#define cMpuDefaultAccess                   0x00000301UL
#define cMpuEnableBitPos                    1UL
#define cMpuEnableBackgroundBitPos          17UL

typedef struct SOutputDriveStrength_t
{
    en_port_output_drive_t DQ0;
    en_port_output_drive_t DQ1;
    en_port_output_drive_t DQ2;
    en_port_output_drive_t DQ3;
    en_port_output_drive_t DQ4;
    en_port_output_drive_t DQ5;
    en_port_output_drive_t DQ6;
    en_port_output_drive_t DQ7;
    en_port_output_drive_t CS1;
    en_port_output_drive_t CS2;
    en_port_output_drive_t CK;
}SOutputDriveStrength;

typedef struct SInitCS_t
{
    boolean CS1;
    boolean CS2;
}SInitCS;

/// Hyperbus configuration
HYPER_BUS_CONFIG

//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================

//=====================================================================================================================
//  PRIVATE
//=====================================================================================================================

//=====================================================================================================================
//  PUBLIC
//=====================================================================================================================

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Initialization of HBus
///
//---------------------------------------------------------------------------------------------------------------------
void HBus_Init( void )
{
    // The re-initialization of HyperBus is needed because 3,3V domain of microcontroller
    // is not powered when Port_Init() is called. Spansion advices us to NOT initialize 
    // port register of 3,3V domain at this time and wait until 3,3V are stable.    
    // PORT module with Tresos configuration provided by Spansion does not allow to
    // initialize the whole configuration of port. Only mode and direction are allowed.
    // This is the reason to do the initialization of HyperBus without using PORT module APIs.

    stc_port_pin_config_t PpcConf;
    uint8 Ix;
	un_grpsub_subc_ilaxibridge_startmaster0region0_t * pRegAxiStartMasterRegion;
    un_grpsub_subc_ilaxibridge_endmaster0region0_t * pRegAxiEndMasterRegion;

    for(Ix=0U; Ix<HBUS_CONFIG_NUMBER; Ix++)
    {
        if(((HYPERBUSI0_Type) == (HBusConfig[Ix].HyperBusType))
            || ((HYPERBUSI1_Type) == (HBusConfig[Ix].HyperBusType)))
        {
            // Hyperbus 0 or 1 port initialization
            PpcConf.bInputEnable          = (boolean_t)TRUE;
            PpcConf.bNoiseFilterEnable    = (boolean_t)FALSE;
            PpcConf.enGpioDirection       = PortGpioInput;
            PpcConf.enInputLevel          = PortInputLevelCmosA;
            PpcConf.enOutputDrive         = PortOutputDriveA;
            PpcConf.enOutputFunction      = PortOutputResourceD;
            PpcConf.enPullResistor        = PortPullResistorNone;
            PpcConf.enGpioInitOutputLevel = PortGpioLow;

            (void)Port_SetPinConfig(0U, 30U, &PpcConf);     // P0_30 RWDS_0/1 In/Out

            PpcConf.enOutputDrive=HBusPort[Ix].DQ0;
            (void)Port_SetPinConfig(1U, 4U,  &PpcConf);     // P1_04 DQ0_0/1  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ1;
            (void)Port_SetPinConfig(1U, 6U,  &PpcConf);     // P1_06 DQ1_0/1  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ2;
            (void)Port_SetPinConfig(1U, 7U,  &PpcConf);     // P1_07 DQ2_0/1  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ3;
            (void)Port_SetPinConfig(1U, 5U,  &PpcConf);     // P1_05 DQ3_0/1  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ4;
            (void)Port_SetPinConfig(1U, 1U,  &PpcConf);     // P1_01 DQ4_0/1  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ5;
            (void)Port_SetPinConfig(1U, 0U,  &PpcConf);     // P1_00 DQ5_0/1  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ6;
            (void)Port_SetPinConfig(1U, 3U,  &PpcConf);     // P1_03 DQ6_0/1  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ7;
            (void)Port_SetPinConfig(1U, 2U,  &PpcConf);     // P1_02 DQ7_0/1  In/Out

            PpcConf.enGpioInitOutputLevel = PortGpioHigh;
            PpcConf.bInputEnable          = (boolean_t)FALSE;
            PpcConf.enGpioDirection       = PortGpioOutput;

            if(TRUE == HBusInitCS[Ix].CS1)
            {
                PpcConf.enOutputDrive=HBusPort[Ix].CS1;
                (void)Port_SetPinConfig(1U, 8U,  &PpcConf);     // P1_08 CS#1_0/1 Out
            }
            if(TRUE == HBusInitCS[Ix].CS2)
            {
                PpcConf.enOutputDrive=HBusPort[Ix].CS2;
                (void)Port_SetPinConfig(0U, 31U, &PpcConf);     // P0_31 CS#2_0/1 Out
            }
            PpcConf.enOutputDrive=HBusPort[Ix].CK;
            (void)Port_SetPinConfig(1U, 9U,  &PpcConf);     // P1_09 CK_0/1   Out
        }
        if(HYPERBUSI2_Type == HBusConfig[Ix].HyperBusType)
        {
            // Hyperbus 2 port initialization
            PpcConf.bInputEnable          = (boolean_t)TRUE;
            PpcConf.bNoiseFilterEnable    = (boolean_t)FALSE;
            PpcConf.enGpioDirection       = PortGpioInput;
            PpcConf.enInputLevel          = PortInputLevelCmosA;
            PpcConf.enOutputDrive         = PortOutputDriveA;
            PpcConf.enOutputFunction      = PortOutputResourceH;
            PpcConf.enPullResistor        = PortPullResistorNone;
            PpcConf.enGpioInitOutputLevel = PortGpioLow;

            (void)Port_SetPinConfig(0U, 10U, &PpcConf);     // P0_10 RWDS_2 In/Out

            PpcConf.enOutputDrive=HBusPort[Ix].DQ0;
            (void)Port_SetPinConfig(0U, 8U,  &PpcConf);     // P0_08 DQ0_2  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ1;
            (void)Port_SetPinConfig(0U, 7U,  &PpcConf);     // P0_07 DQ1_2  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ2;
            (void)Port_SetPinConfig(0U, 6U,  &PpcConf);     // P0_06 DQ2_2  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ3;
            (void)Port_SetPinConfig(0U, 5U,  &PpcConf);     // P0_05 DQ3_2  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ4;
            (void)Port_SetPinConfig(0U, 12U, &PpcConf);     // P0_12 DQ4_2  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ5;
            (void)Port_SetPinConfig(0U, 13U, &PpcConf);     // P0_13 DQ5_2  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ6;
            (void)Port_SetPinConfig(0U, 14U, &PpcConf);     // P0_14 DQ6_2  In/Out
            PpcConf.enOutputDrive=HBusPort[Ix].DQ7;
            (void)Port_SetPinConfig(0U, 15U, &PpcConf);     // P0_15 DQ7_2  In/Out

            PpcConf.enGpioInitOutputLevel = PortGpioHigh;
            PpcConf.bInputEnable          = (boolean_t)FALSE;
            PpcConf.enGpioDirection       = PortGpioOutput;

            if(TRUE == HBusInitCS[Ix].CS1)
            {
                PpcConf.enOutputDrive=HBusPort[Ix].CS1;
                (void)Port_SetPinConfig(0U, 9U,  &PpcConf);     // P0_09 CS#1_2 Out
            }
            if(TRUE == HBusInitCS[Ix].CS2)
            {
                PpcConf.enOutputDrive=HBusPort[Ix].CS2;
                (void)Port_SetPinConfig(0U, 11U, &PpcConf);     // P0_11 CS#2_2 Out
            }
            PpcConf.enOutputDrive=HBusPort[Ix].CK;
            (void)Port_SetPinConfig(0U, 4U,  &PpcConf);     // P0_04 CK_2   Out
        }
    }

    Port_EnableInput();                     // bit0 GPORTEN=1: Input enable

    for(Ix=0U; Ix<HBUS_CONFIG_NUMBER; Ix++)
    {
        if(HYPERBUSI0_Type == HBusConfig[Ix].HyperBusType)
        {
            (void)Hyperbusi_SetRemapControl((TGrpsubHpbm11)&GRPSUB_HPBM_11, eHpbmDDRHSSPI);
        }
        else
        {
            (void)Hyperbusi_SetRemapControl((TGrpsubHpbm11)&GRPSUB_HPBM_11, eHpbmHyperBus);
        }
        (void)Hyperbusi_SetGPOutput(&HBusPolarity[Ix]);
        (void)Hyperbusi_InitInterrupt(&HBusConfig[Ix]);
    }
	
	 /* Initializing AXI Bridge regions with default address range */
	/* M0R0 - 0x40000000 - 0x43FFFFFF (Device connected at CH1-CS1)*/
	/* M0R1 - 0x44000000 - 0x47FFFFFF (Device connected at CH1-CS2)*/
	/* M1R0 - 0x48000000 - 0x4BFFFFFF (Device connected at CH2-CS1)*/
	/* M1R1 - 0x4C000000 - 0x4FFFFFFF (Device connected at CH2-CS2)*/
	
	/* M0R0 */
    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_UNLOCK_KEY;

    pRegAxiStartMasterRegion = GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(0u);
    /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
    pRegAxiStartMasterRegion->u32Register = 0x40000000UL + 1UL;

    pRegAxiEndMasterRegion = GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(0u);
    /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
    pRegAxiEndMasterRegion->u32Register = 0x43FFFFFFUL + 1UL;

    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_LOCK_KEY;
    
    /* M0R1 */
    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_UNLOCK_KEY;

    pRegAxiStartMasterRegion = GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(1u);
    /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
    pRegAxiStartMasterRegion->u32Register = 0x44000000UL + 1UL;

    pRegAxiEndMasterRegion = GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(1u);
    /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
    pRegAxiEndMasterRegion->u32Register = 0x47FFFFFFUL + 1UL;

    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_LOCK_KEY;

    /* M1R0 */
    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_UNLOCK_KEY;

    pRegAxiStartMasterRegion = GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(2u);
    /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
    pRegAxiStartMasterRegion->u32Register = 0x48000000UL + 1UL;

    pRegAxiEndMasterRegion = GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(2u);
    /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
    pRegAxiEndMasterRegion->u32Register = 0x4BFFFFFFUL + 1UL;

    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_LOCK_KEY;
    
    /* M1R1 */
    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_UNLOCK_KEY;

    pRegAxiStartMasterRegion = GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(3u);
    /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
    pRegAxiStartMasterRegion->u32Register = 0x4C000000UL + 1UL;

    pRegAxiEndMasterRegion = GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(3u);
    /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
    pRegAxiEndMasterRegion->u32Register = 0x4FFFFFFFUL + 1UL;

    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_LOCK_KEY;
	
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Set memory region of Hyperbus devices to default
///
/// @param: Configuration to be applied
///
//---------------------------------------------------------------------------------------------------------------------
void HBus_SetMpuRegions(const uint8 Config)
{
    uint8 Ix;
    uint32 RegValue;

    for(Ix=(uint8)0; Ix<HBUS_MPU_REGION_NUMBER; Ix++)
    {

        MCR(15UL, 0UL, HBusMpuInit[Ix].Number, 6UL, 2UL, 0UL);                  //Select MPU region number for configuration
        MCR(15UL, 0UL, HBusMpuInit[Ix].StartAddress, 6UL, 1UL, 0UL);            //Set region base address
        MCR(15UL, 0UL, (((uint32)HBusMpuInit[Ix].Size << 1UL) + 1UL), 6UL, 1UL, 2UL);   //Set region size and enable

        if(cMpuDefault == Config)
        {
            MCR(15UL, 0UL, cMpuDefaultAccess, 6UL, 1UL, 4UL);                   //Set region access control
        }
        else
        {
            MCR(15UL, 0UL, HBusMpuInit[Ix].Access, 6UL, 1UL, 4UL);              //Set region access control
        }
    }

    // Enable MPU
    RegValue = MRC(15UL, 0UL, 1UL, 0UL, 0UL);                                   // Read CP15 register 1
    DSB();                                                                      // Ensure the completion of memory accesses
    RegValue |= cMpuEnableBitPos;                                               // Enable MPU
    RegValue |= (1UL << cMpuEnableBackgroundBitPos);                            // Enable Background region
    MCR(15UL, 0UL,  RegValue, 1UL, 0UL, 0UL);                                   // Copy settings back to CP15
    ISB();                                                                      // Instruction Synchronization Barrier
}

