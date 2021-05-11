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

#include "hf.h"
/*#include "idd_driver.h"*/
#include "s6j3200_GRPSUB.h"
#include "s6j3200_PPC.h"
/*#include "pdl_port.h"*/

/*****************************************************************************/
/* 								Local Prototypes                             */
/*****************************************************************************/
        
static void f_hyperflash_init(uint32_t hyper_addr);
static uint8_t Hyperbusi_SetGPOutput(const SHyperbusiPolarityConfig *pConfig);
static void lld_LoadVolatileConfigReg( FLASHDATA *base_addr, ADDRESS offset,  FLASHDATA vcr);
static void lld_CfiEntryCmd(FLASHDATA * base_addr,ADDRESS offset);
static FLASHDATA lld_ReadCfiWord(FLASHDATA * base_addr,ADDRESS offset);
static void lld_CfiExitCmd(FLASHDATA * base_addr);


/*****************************************************************************/
/* 							Local Global Variables 							 */
/*****************************************************************************/

HYPER_FLASH_CONFIG
HYPER_BUS_CONFIG

/*****************************************************************************/
/* 						     Function Definations                            */
/*****************************************************************************/


/*******************************************************************************/
/* 		Function Name     : Hyper_Init								           */
/*		Description       : Hyper Flash Chip Initialization                    */
/*		Invocation        : main    										   */
/*		Parameters        : None.											   */
/*		Return Value      : None.											   */
/*******************************************************************************/
void Hyper_Init(uint32_t addr)
{
    f_hyperflash_init(addr);
	(void)lld_ReadCfiWord(( unsigned short int * )addr,0x10);
}
   
/*******************************************************************************/
/* 		Function Name     : Hyperbusi_Init								       */
/*		Description       : Initializes the given HYPERBUSI instance with      */
/*                          the provided parameters.                           */
/*		Invocation        : main    										   */
/*		Parameters        : pConfig:HYPERBUSI module configuration.			   */
/*		Return Value      : E_OK          :Success                             */
/*                          E_INVALID_ARG :If one of following conditions met  */
/*                                         - pHyperbusi = NULL                 */
/*                                         - pConfig = NULL				       */
/*******************************************************************************/

uint8_t Hyperbusi_Init(const SHyperbusiConfig *pConfig)
{
    uint8_t RetValue = E_INVALID_ARG;

    un_hyperbusi0_mbrn_t unMBR0 = {0};
    un_hyperbusi0_mbrn_t unMBR1 = {0};
    un_hyperbusi0_mcrn_t unMCR0 = {0};
    un_hyperbusi0_mcrn_t unMCR1 = {0};
    un_hyperbusi0_mtrn_t unMTR0 = {0};
    un_hyperbusi0_mtrn_t unMTR1 = {0};

    // Check for valid pointers
    if (pConfig == NULL)
    // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    {
        RetValue = E_INVALID_ARG;
    }
    else
    {
        // HYPERBUSI configuration
        if(eHyperbusiChipSelect1 == pConfig->ChipSelect)
        // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
        {
            // Memory Base Address
            unMBR0.u32Register = pConfig->MemoryStartAddress;
            // Memory Configuration
            unMCR0.stcField.u1CRMO    = pConfig->MemoryConfig->ContinuousReadMerging;
            unMCR0.stcField.u1ACS     = pConfig->MemoryConfig->AsymmetryCache;
            unMCR0.stcField.u1CRT     = pConfig->MemoryConfig->RegisterTarget;
            unMCR0.stcField.u1DEVTYPE = pConfig->MemoryConfig->DeviceType;
            if(pConfig->MemoryConfig->AsymmetryCache == TRUE)
            // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
            {
                unMCR0.stcField.u2WRAPSIZE = pConfig->MemoryConfig->Wrapsize;
            }
            // Memory Timing
            unMTR0.stcField.u4RCSHI = pConfig->MemoryTiming->ReadCSHigh;
            unMTR0.stcField.u4WCSHI = pConfig->MemoryTiming->WriteCSHigh;
            unMTR0.stcField.u4RCSS  = pConfig->MemoryTiming->ReadCSNextCKRising;
            unMTR0.stcField.u4WCSS  = pConfig->MemoryTiming->WriteCSNextCKRising;
            unMTR0.stcField.u4RCSH  = pConfig->MemoryTiming->ReadCSAfterCKfalling;
            unMTR0.stcField.u4WCSH  = pConfig->MemoryTiming->WriteCSAfterCKfalling;
            if(pConfig->MemoryConfig->DeviceType == eHyperbusiHyperRAM)
			// polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
            {
                // Latency Cycle for HyperRAM mode
                unMTR0.stcField.u4LTCY = pConfig->MemoryTiming->LatencyCycle;
            }
            // Write shadow data to register
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
            pConfig->HyperBusType->unMBR0.u32Register = unMBR0.u32Register;
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
            pConfig->HyperBusType->unMCR0.u32Register = unMCR0.u32Register;
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
            pConfig->HyperBusType->unMTR0.u32Register = unMTR0.u32Register;
            RetValue = E_OK;
        }
        else if(eHyperbusiChipSelect2 == pConfig->ChipSelect)
        {
            // Memory Base Address
            unMBR1.u32Register = pConfig->MemoryStartAddress;
            // Memory Configuration
            unMCR1.stcField.u1CRMO    = pConfig->MemoryConfig->ContinuousReadMerging;
            unMCR1.stcField.u1ACS     = pConfig->MemoryConfig->AsymmetryCache;
            unMCR1.stcField.u1CRT     = pConfig->MemoryConfig->RegisterTarget;
            unMCR1.stcField.u1DEVTYPE = pConfig->MemoryConfig->DeviceType;

            if(pConfig->MemoryConfig->AsymmetryCache == TRUE)
            // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
            {
                unMCR1.stcField.u2WRAPSIZE = pConfig->MemoryConfig->Wrapsize;
            }

            // Memory Timing
            unMTR1.stcField.u4RCSHI = pConfig->MemoryTiming->ReadCSHigh;
            unMTR1.stcField.u4WCSHI = pConfig->MemoryTiming->WriteCSHigh;
            unMTR1.stcField.u4RCSS  = pConfig->MemoryTiming->ReadCSNextCKRising;
            unMTR1.stcField.u4WCSS  = pConfig->MemoryTiming->WriteCSNextCKRising;
            unMTR1.stcField.u4RCSH  = pConfig->MemoryTiming->ReadCSAfterCKfalling;
            unMTR1.stcField.u4WCSH  = pConfig->MemoryTiming->WriteCSAfterCKfalling;

            // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
            if(pConfig->MemoryConfig->DeviceType == eHyperbusiHyperRAM)
            {
                // Latency Cycle for HyperRAM mode
                unMTR1.stcField.u4LTCY = pConfig->MemoryTiming->LatencyCycle;
            }

            // Write shadow data to registers
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
            pConfig->HyperBusType->unMBR1.u32Register = unMBR1.u32Register;
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
            pConfig->HyperBusType->unMCR1.u32Register = unMCR1.u32Register;
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
            pConfig->HyperBusType->unMTR1.u32Register = unMTR1.u32Register;
            RetValue = E_OK;
        }
        else
        // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
        {
            RetValue = E_INVALID_ARG;
        }
    }
    return RetValue;
}

/*******************************************************************************/
/* 		Function Name     : HBus_Init				     	           */
/*		Description       : 1. configures the Hyper bus pins.                  */
/*		Invocation        : Hyper_Init.										   */
/*		Parameters        : None.											   */
/*		Return Value      : None.											   */
/*******************************************************************************/
void HBus_Init(void)
{
    /* The re-initialization of HyperBus is needed because 3,3V domain of microcontroller
       is not powered when Port_Init() is called. Spansion advices us to NOT initialize 
       port register of 3,3V domain at this time and wait until 3,3V are stable.    
       PORT module with Tresos configuration provided by Spansion does not allow to
       initialize the whole configuration of port. Only mode and direction are allowed.
       This is the reason to do the initialization of HyperBus without using PORT module APIs.*/

    stc_port_pin_config_t PpcConf;
    stc_grpsub_hpbm_11_t *pHpbm;
    uint8_t Ix;

    for(Ix=0; Ix<HBUS_CONFIG_NUMBER; Ix++)
    {
        if((HYPERBUSI0_Type == HBusConfig[Ix].HyperBusType)
            || (HYPERBUSI1_Type == HBusConfig[Ix].HyperBusType))
        {
            // Hyperbus 0 or 1 port initialization
            PpcConf.bInputEnable          = TRUE;
            PpcConf.bNoiseFilterEnable    = FALSE;
            PpcConf.enGpioDirection       = PortGpioInput;
            PpcConf.enInputLevel          = PortInputLevelCmosA;
            PpcConf.enOutputDrive         = PortOutputDriveB;
            PpcConf.enOutputFunction      = PortOutputResourceD;
            PpcConf.enPullResistor        = PortPullResistorNone;
            PpcConf.enGpioInitOutputLevel = PortGpioLow;

            (void)Port_SetPinConfig(0, 30, &PpcConf);     // P0_30 RWDS_0/1 In/Out
            (void)Port_SetPinConfig(1, 0,  &PpcConf);     // P1_00 DQ5_0/1  In/Out
            (void)Port_SetPinConfig(1, 1,  &PpcConf);     // P1_01 DQ4_0/1  In/Out
            (void)Port_SetPinConfig(1, 2,  &PpcConf);     // P1_02 DQ7_0/1  In/Out
            (void)Port_SetPinConfig(1, 3,  &PpcConf);     // P1_03 DQ6_0/1  In/Out
            (void)Port_SetPinConfig(1, 4,  &PpcConf);     // P1_04 DQ0_0/1  In/Out
            (void)Port_SetPinConfig(1, 5,  &PpcConf);     // P1_05 DQ3_0/1  In/Out
            (void)Port_SetPinConfig(1, 6,  &PpcConf);     // P1_06 DQ1_0/1  In/Out
            (void)Port_SetPinConfig(1, 7,  &PpcConf);     // P1_07 DQ2_0/1  In/Out

            PpcConf.enGpioInitOutputLevel = PortGpioHigh;
            PpcConf.bInputEnable          = FALSE;
            PpcConf.enGpioDirection       = PortGpioOutput;

            (void)Port_SetPinConfig(1, 8,  &PpcConf);     // P1_08 CS#0_0/1 Out
            (void)Port_SetPinConfig(0, 31, &PpcConf);     // P1_31 CS#1_0/1 Out
            (void)Port_SetPinConfig(1, 9,  &PpcConf);     // P1_09 CK_0/1   Out
        }
        else if(HYPERBUSI2_Type == HBusConfig[Ix].HyperBusType)
        {
            // Hyperbus 2 port initialization
            PpcConf.bInputEnable          = TRUE;
            PpcConf.bNoiseFilterEnable    = FALSE;
            PpcConf.enGpioDirection       = PortGpioInput;
            PpcConf.enInputLevel          = PortInputLevelCmosA;
            PpcConf.enOutputDrive         = PortOutputDriveB;
            PpcConf.enOutputFunction      = PortOutputResourceH;
            PpcConf.enPullResistor        = PortPullResistorNone;
            PpcConf.enGpioInitOutputLevel = PortGpioLow;

            (void)Port_SetPinConfig(0, 10, &PpcConf);     // P0_10 RWDS_2 In/Out
            (void)Port_SetPinConfig(0, 13, &PpcConf);     // P0_13 DQ5_2  In/Out
            (void)Port_SetPinConfig(0, 12, &PpcConf);     // P0_12 DQ4_2  In/Out
            (void)Port_SetPinConfig(0, 15, &PpcConf);     // P0_15 DQ7_2  In/Out
            (void)Port_SetPinConfig(0, 14, &PpcConf);     // P0_14 DQ6_2  In/Out
            (void)Port_SetPinConfig(0, 8,  &PpcConf);     // P0_08 DQ0_2  In/Out
            (void)Port_SetPinConfig(0, 5,  &PpcConf);     // P0_05 DQ3_2  In/Out
            (void)Port_SetPinConfig(0, 7,  &PpcConf);     // P0_07 DQ1_2  In/Out
            (void)Port_SetPinConfig(0, 6,  &PpcConf);     // P0_06 DQ2_2  In/Out

            PpcConf.enGpioInitOutputLevel = PortGpioHigh;
            PpcConf.bInputEnable          = FALSE;
            PpcConf.enGpioDirection       = PortGpioOutput;

            (void)Port_SetPinConfig(0, 9,  &PpcConf);     // P0_09 CS#1_2 Out
            (void)Port_SetPinConfig(0, 11, &PpcConf);     // P0_11 CS#2_2 Out
            (void)Port_SetPinConfig(0, 4,  &PpcConf);     // P0_04 CK_2   Out
        }
    }

    Port_EnableInput();       // bit0 GPORTEN=1: Input enable
    
    pHpbm = (stc_grpsub_hpbm_11_t*)&GRPSUB_HPBM_11;
    for(Ix=0; Ix<HBUS_CONFIG_NUMBER; Ix++)
    {
        if(HYPERBUSI0_Type == HBusConfig[Ix].HyperBusType)
        {
            pHpbm->unRemap.u32Register = eHpbmDDRHSSPI;
        }
        else
        {
            pHpbm->unRemap.u32Register = eHpbmHyperBus;
        }
        (void)Hyperbusi_SetGPOutput(&HBusPolarity[Ix]);
    }
    
    HFlash_Init();
}

/*******************************************************************************/
/* 		Function Name     : Hyperbusi_SetGPOutput				     	       */
/*		Description       : Set Output signal polarity.                        */
/*		Invocation        : Hyper_Init.										   */
/*		Parameters        : None.											   */
/*		Return Value      : E_OK          :Success                             */
/*                          E_INVALID_ARG :If one of following conditions met  */
/*                                         - pHyperbusi = NULL                 */
/*******************************************************************************/

static uint8_t Hyperbusi_SetGPOutput(const SHyperbusiPolarityConfig *pConfig)
{
    uint8_t RetValue = E_INVALID_ARG;
    if (pConfig == NULL)
    {
        RetValue = E_INVALID_ARG;
    }
    else
    {
        pConfig->HyperBusType->unGPOR.u32Register = pConfig->Polarity;
        RetValue = E_OK;
    }
    return RetValue;
}

/*******************************************************************************/
/* 		Function Name     : f_hyperbus_init 				     	           */
/*		Description       : 1. configures the Hyper bus.                       */
/*		Invocation        : Hyper_Init.										   */
/*		Parameters        : None.											   */
/*		Return Value      : None.											   */
/*******************************************************************************/

void HFlash_Init(void)
{																   
    uint8_t Ix;
    un_grpsub_subc_ilaxibridge_startmaster0region0_t * pRegAxiStartMasterRegion;
    un_grpsub_subc_ilaxibridge_endmaster0region0_t * pRegAxiEndMasterRegion;
    uint8_t HyperBusNumber = HBUS_CONFIG_NUMBER;

    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_UNLOCK_KEY;
    pRegAxiStartMasterRegion = GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(0);
    pRegAxiStartMasterRegion->u32Register = (uint32_t)HF0_AXI_START_MASTER_ADDR_REG;
    pRegAxiEndMasterRegion = GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(0);
    pRegAxiEndMasterRegion->u32Register = (uint32_t)HF0_AXI_END_MASTER_ADDR_REG;         
    
    pRegAxiStartMasterRegion = GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(1);
    pRegAxiStartMasterRegion->u32Register = (uint32_t)HF1_AXI_START_MASTER_ADDR_REG;
    pRegAxiEndMasterRegion = GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(1);
    pRegAxiEndMasterRegion->u32Register = (uint32_t)HF1_AXI_END_MASTER_ADDR_REG ;      
    GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_LOCK_KEY;
    
    for(Ix=0; Ix<HFLASH_CONFIG_NUMBER; Ix++)
    {

        (void)Hyperbusi_Init(&HFlashConfig[Ix]);
		// polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
        if(HyperBusNumber > cSINGLE_HYPERBUS)
        {
            GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_UNLOCK_KEY;

            pRegAxiStartMasterRegion = GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(HFlashConfig[Ix].AxiBridgeRegion);
            /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
            pRegAxiStartMasterRegion->u32Register = HFlashConfig[Ix].MemoryStartAddress ;

            pRegAxiEndMasterRegion = GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(HFlashConfig[Ix].AxiBridgeRegion);
            /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
            pRegAxiEndMasterRegion->u32Register = HFlashConfig[Ix].MemoryEndAddress+1;


            GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_LOCK_KEY;
        }
    }

}

/*******************************************************************************/
/* 		Function Name     : f_hyperflash_init 				     	           */
/*		Description       : 1. configures the latencies for Hyper bus.         */
/*		Invocation        : Hyper_Init.										   */
/*		Parameters        : None.											   */
/*		Return Value      : None.											   */
/*******************************************************************************/
static void f_hyperflash_init(uint32_t hyper_addr)
{
    UINT16 vcr = 0x8E5B;                         /* Read Latency - 10 cycles for 104 MHz, Burst length - 32 bytes (default), Output drive - 000 (default). factory default = 0x8EBB */
    UINT16 *   fBase_addr = NULL;
    UINT32 offset = 0x0;                           /* address offset from base address */
    /* Load new values to VCR */
    /* Change the values for specific configuration */
    fBase_addr = ( unsigned short int * )hyper_addr;
    lld_LoadVolatileConfigReg( fBase_addr, offset, vcr );
}

/*******************************************************************************/
/* 		Function Name     : lld_LoadVolatileConfigReg		     	           */
/*		Description       : 1. configures the latencies for Hyper bus.         */
/*		Invocation        : f_hyperflash_init.			     				   */
/*		Parameters        : base addr, offset, FLASH data.	     			   */
/*		Return Value      : None.											   */
/*******************************************************************************/
static void lld_LoadVolatileConfigReg(FLASHDATA *base_addr, ADDRESS offset,  FLASHDATA vcr)
{
  FLASH_WR(base_addr, LLD_UNLOCK_ADDR1, NOR_UNLOCK_DATA1);
  FLASH_WR(base_addr, LLD_UNLOCK_ADDR2, NOR_UNLOCK_DATA2);
  FLASH_WR(base_addr, LLD_UNLOCK_ADDR1, NOR_LOAD_VOLATILE_CFG_REG_CMD);
  FLASH_WR(base_addr, 0, vcr);
}

/*******************************************************************************/
/* 		Function Name     : lld_ReadCfiWord 				     	           */
/*		Description       : Read Common flash Interface.                       */
/*		Invocation        : Hyper_Init.										   */
/*		Parameters        : base addr, offset.								   */
/*		Return Value      : None.											   */
/*******************************************************************************/
static FLASHDATA lld_ReadCfiWord (FLASHDATA * base_addr,ADDRESS offset )
{
  FLASHDATA data;

  lld_CfiEntryCmd(base_addr, offset);
  data  = FLASH_RD(base_addr, offset);
  lld_CfiExitCmd(base_addr);

  return(data);
}
/*******************************************************************************/
/* 		Function Name     : lld_CfiEntryCmd 				     	           */
/*		Description       : Enter in to command mode.                          */
/*		Invocation        : lld_ReadCfiWord.     							   */
/*		Parameters        : base addr, offset.								   */
/*		Return Value      : None.											   */
/*******************************************************************************/
static void lld_CfiEntryCmd(FLASHDATA * base_addr,ADDRESS offset)
{        
  FLASH_WR(base_addr, (offset & SA_OFFSET_MASK) + LLD_CFI_UNLOCK_ADDR1, NOR_CFI_QUERY_CMD);
}

/*******************************************************************************/
/* 		Function Name     : lld_CfiExitCmd 				     	               */
/*		Description       : Exits command mode.                                */
/*		Invocation        : lld_ReadCfiWord.     							   */
/*		Parameters        : base addr.										   */
/*		Return Value      : None.											   */
/*******************************************************************************/
static void lld_CfiExitCmd( FLASHDATA * base_addr)
{       
  /* Write Software RESET command */
  FLASH_WR(base_addr, 0, NOR_RESET_CMD); 
}

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
********************************************************************************/



