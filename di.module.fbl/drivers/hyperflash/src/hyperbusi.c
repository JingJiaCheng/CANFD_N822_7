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
#include "hyperbusi.h"

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

#define cDEVTYPE_BIT_POS         4
#define cCRT_BIT_POS             5

#define HYPERRAM_OFFSET(b,o)     *(((volatile uint16*)(b)) + (o))
#define HYPERRAM_WRITE(b,o,d)    HYPERRAM_OFFSET((b),(o)) = (d)
#define HYPERRAM_READ(b,o)       HYPERRAM_OFFSET((b),(o))

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
/// @brief  Initialization of a HYPERBUSI module
///
///         Initializes the given HYPERBUSI instance with the provided
///         parameters.
/// @param  pConfig:        HYPERBUSI module configuration
/// @return E_OK:           Success
/// <br>    E_INVALID_ARG:  If one of following conditions are met:
///                         - pHyperbusi = NULL
///                         - pConfig = NULL
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType Hyperbusi_Init(const SHyperbusiConfig *pConfig)
{
    Std_ReturnType RetValue = E_INVALID_ARG;

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
        if((EHyperbusiChipSelect)eHyperbusiChipSelect1 == pConfig->ChipSelect)
        // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
        {
            // Memory Base Address
            unMBR0.u32Register = pConfig->MemoryStartAddress;
            // Memory Configuration
			// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
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
			// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
            unMTR0.stcField.u4RCSHI = pConfig->MemoryTiming->ReadCSHigh;
            unMTR0.stcField.u4WCSHI = pConfig->MemoryTiming->WriteCSHigh;
            unMTR0.stcField.u4RCSS  = pConfig->MemoryTiming->ReadCSNextCKRising;
            unMTR0.stcField.u4WCSS  = pConfig->MemoryTiming->WriteCSNextCKRising;
            unMTR0.stcField.u4RCSH  = pConfig->MemoryTiming->ReadCSAfterCKfalling;
            unMTR0.stcField.u4WCSH  = pConfig->MemoryTiming->WriteCSAfterCKfalling;
            if(pConfig->MemoryConfig->DeviceType == (EHyperbusiDevice)eHyperbusiHyperRAM)
			// polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
            {
                // Latency Cycle for HyperRAM mode
                unMTR0.stcField.u4LTCY = pConfig->MemoryTiming->LatencyCycle;
            }
            // Write shadow data to register
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
			// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
            pConfig->HyperBusType->unMBR0.u32Register = unMBR0.u32Register;
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
            pConfig->HyperBusType->unMCR0.u32Register = unMCR0.u32Register;
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
            pConfig->HyperBusType->unMTR0.u32Register = unMTR0.u32Register;
            RetValue = E_OK;
        }
        else if((EHyperbusiChipSelect)eHyperbusiChipSelect2 == pConfig->ChipSelect)
        {
            // Memory Base Address
			// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
            unMBR1.u32Register = pConfig->MemoryStartAddress;
            // Memory Configuration
			// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
            unMCR1.stcField.u1CRMO    = pConfig->MemoryConfig->ContinuousReadMerging;
            unMCR1.stcField.u1ACS     = pConfig->MemoryConfig->AsymmetryCache;
            unMCR1.stcField.u1CRT     = pConfig->MemoryConfig->RegisterTarget;
            unMCR1.stcField.u1DEVTYPE = pConfig->MemoryConfig->DeviceType;

            if(pConfig->MemoryConfig->AsymmetryCache == TRUE)
            // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
            {
				// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
                unMCR1.stcField.u2WRAPSIZE = pConfig->MemoryConfig->Wrapsize;
            }

            // Memory Timing
			// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
            unMTR1.stcField.u4RCSHI = pConfig->MemoryTiming->ReadCSHigh;
            unMTR1.stcField.u4WCSHI = pConfig->MemoryTiming->WriteCSHigh;
            unMTR1.stcField.u4RCSS  = pConfig->MemoryTiming->ReadCSNextCKRising;
            unMTR1.stcField.u4WCSS  = pConfig->MemoryTiming->WriteCSNextCKRising;
            unMTR1.stcField.u4RCSH  = pConfig->MemoryTiming->ReadCSAfterCKfalling;
            unMTR1.stcField.u4WCSH  = pConfig->MemoryTiming->WriteCSAfterCKfalling;

            // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
            if(pConfig->MemoryConfig->DeviceType == (EHyperbusiDevice)eHyperbusiHyperRAM)
            {
                // Latency Cycle for HyperRAM mode
				// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
                unMTR1.stcField.u4LTCY = pConfig->MemoryTiming->LatencyCycle;
            }

            // Write shadow data to registers
            // polyspace<RTE:NIVL> All members of this union are initialized to 0.
			// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
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

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Initialization of a HYPERBUSI interrupt.
///
/// @param  pConfig:        HYPERBUSI module interrupt configuration
/// @return E_OK:           Success
/// <br>    E_INVALID_ARG:  If one of following conditions are met:
///                         - pHyperbusi = NULL
///                         - pConfig = NULL
//---------------------------------------------------------------------------------------------------------------------
// polyspace<RTE: UNP > Not called function from Polyspace point of view, calling is in HBus_Init().
Std_ReturnType Hyperbusi_InitInterrupt(const SHyperbusiInterruptConfig* pConfig)
{
    Std_ReturnType RetValue = E_INVALID_ARG;

    un_hyperbusi0_ien_t unIEN = { 0 };

    // Check for valid pointers
    if (pConfig == NULL)
	// polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    {
        RetValue = E_INVALID_ARG;
    }
    else
    {
        unIEN.stcField.u1INTP    = pConfig->InterruptPolarity;
        unIEN.stcField.u1RPCINTE = pConfig->MemoryInterrupt;
        // polyspace<RTE:NIVL> unIEN is union with fields stcField and u32Register
        pConfig->HyperBusType->unIEN.u32Register = unIEN.u32Register;  // Write shadow data to register
        RetValue = E_OK;
    }
    return RetValue;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Set Output signal polarity.
///
/// @param  pConfig:        HYPERBUSI module polarity configuration
/// @return E_OK:           Success
/// <br>    E_INVALID_ARG:  If one of following conditions are met:
///                         - pHyperbusi = NULL
//---------------------------------------------------------------------------------------------------------------------
// polyspace<RTE: UNP > Not called function from Polyspace point of view, calling is in HBus_Init().
Std_ReturnType Hyperbusi_SetGPOutput(const SHyperbusiPolarityConfig *pConfig)
{
    Std_ReturnType RetValue = E_INVALID_ARG;

    // Check for a valid pointer
    if (pConfig == NULL)
	// polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    {
        RetValue = E_INVALID_ARG;
    }
    else
    {
        // General Purpose Output
        pConfig->HyperBusType->unGPOR.u32Register = pConfig->Polarity;
        RetValue = E_OK;
    }
    return RetValue;
}


//---------------------------------------------------------------------------------------------------------------------
/// @brief  Select target module device (High Performance Bus Matrix)
///
/// @param  pHpbm:          Pointer to GRPSUB_HPBM instance register area
/// @param  TargetModule:   Target Module
/// @return E_OK:           Success
/// <br>    E_INVALID_ARG:  If one of following conditions are met:
///                         - pHpbm = NULL
//---------------------------------------------------------------------------------------------------------------------
// polyspace<RTE: UNP > Not called function from Polyspace point of view, calling is in HBus_Init().
Std_ReturnType Hyperbusi_SetRemapControl(TGrpsubHpbm11 const pHpbm, EHpbmRemap TargetModule)
{
    Std_ReturnType RetValue = E_INVALID_ARG;

    // Check for a valid pointer
    if (pHpbm == NULL)
	// polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    {
        RetValue = E_INVALID_ARG;
    }
    else
    {
        // Remap
        pHpbm->unRemap.u32Register = TargetModule;
        RetValue = E_OK;
    }
    return RetValue;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Initializes the given HYPERBUSI instance in register mode
///
/// @param  pConfig:        HYPERBUSI module configuration
/// @return E_OK:           Success
/// <br>    E_INVALID_ARG:  If one of following conditions are met:
///                         - pHyperbusi = NULL
///                         - pConfig = NULL
//---------------------------------------------------------------------------------------------------------------------
// polyspace<RTE: UNP > Not called function from Polyspace point of view, calling is in HRam_Init() - configuration dependent.
Std_ReturnType Hyperbusi_Set_CR_Space(const SHyperbusiConfig *pConfig, const boolean IsRegSpace)
{
    Std_ReturnType RetValue = E_INVALID_ARG;

    uint32 MCRx_RegValue;

    // Check for valid pointers
    if (pConfig == NULL)
    // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    {
        RetValue = E_INVALID_ARG;
    }
    else
    {
        // polyspace<RTE:NIV> pConfig is initialized by caller
		// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
        if((EHyperbusiChipSelect)eHyperbusiChipSelect1 == pConfig->ChipSelect)
        // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
        {
            // Memory Base Address
            // polyspace<RTE:NIV> pConfig is initialized by caller
            // polyspace<RTE:NIP> pConfig is initialized by caller
            pConfig->HyperBusType->unMBR0.u32Register = pConfig->MemoryStartAddress;
            // Memory Configuration
            // polyspace<RTE:NIV> Read from real MCU register. Checked on target.
            MCRx_RegValue = pConfig->HyperBusType->unMCR0.u32Register;
            // polyspace<RTE:NIV> pConfig is initialized by caller
			// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
            if (pConfig->MemoryConfig->DeviceType == (EHyperbusiDevice)eHyperbusiHyperRAM)
            {
                MCRx_RegValue |= (1UL << cDEVTYPE_BIT_POS);
            }
            else
            {
                MCRx_RegValue = (MCRx_RegValue &  (0xFFFFFFFFUL - ((uint32)(1UL << cDEVTYPE_BIT_POS))));
            }
            if(TRUE == IsRegSpace)
            {
                MCRx_RegValue |= (1UL << cCRT_BIT_POS);
            }
            else
            {
                MCRx_RegValue &= ~((uint32)(1UL << cCRT_BIT_POS));
            }
            pConfig->HyperBusType->unMCR0.u32Register = MCRx_RegValue;
            RetValue = E_OK;
        }
        else if((EHyperbusiChipSelect)eHyperbusiChipSelect2 == pConfig->ChipSelect)
        {
            // Memory Base Address
            // polyspace<RTE:NIV> pConfig is initialized by caller
            // polyspace<RTE:NIP> pConfig is initialized by caller
			// polyspace<RTE:IDP>  Pointer is checked above.
            pConfig->HyperBusType->unMBR1.u32Register = pConfig->MemoryStartAddress;
            // Memory Configuration
            // polyspace<RTE:NIV> Read from real MCU register. Checked on target.
            MCRx_RegValue = pConfig->HyperBusType->unMCR1.u32Register;
            // polyspace<RTE:NIV> pConfig is initialized by caller
            if (pConfig->MemoryConfig->DeviceType == (EHyperbusiDevice)eHyperbusiHyperRAM)
            {
                MCRx_RegValue |= (1UL << cDEVTYPE_BIT_POS);
            }
            else
            // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
            {
                MCRx_RegValue = (MCRx_RegValue & (0xFFFFFFFFUL - ((uint32)(1UL << cDEVTYPE_BIT_POS))));
            }
            if(TRUE == IsRegSpace)
            {
                MCRx_RegValue |= (1UL << cCRT_BIT_POS);
            }
            else
            {
                MCRx_RegValue &= ~((uint32)(1UL << cCRT_BIT_POS));
            }
            pConfig->HyperBusType->unMCR1.u32Register = MCRx_RegValue;
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

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Reads register of Hyperbus device
///
/// @param  pConfig:        HYPERBUSI module configuration
/// @param  RegOffset:      Register offset
/// @param  pRegValue:       Pointer to the location where the register value has to be stored
/// @return E_OK:           Success
/// <br>    E_INVALID_ARG:  If one of following conditions are met:
///                         - pConfig = NULL
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType Hyperbusi_Read_Reg(const SHyperbusiConfig *pConfig, const uint32 RegOffset, uint16 *pRegValue)
{
    Std_ReturnType RetValue = E_INVALID_ARG;

    // Check for a valid pointer
    if (pConfig == NULL)
    // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    {
        RetValue = E_INVALID_ARG;
    }
    else
    {
		// polyspace<RTE:IDP>  Pointer may be outside its bounds from Polyspace point of view, however it is checked.
        // polyspace<RTE:NIV> pConfig is initialized by caller
        *pRegValue = HYPERRAM_READ(pConfig->MemoryStartAddress, RegOffset);
        RetValue = E_OK;
    }
    return RetValue;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Writes register of Hyperbus device
///
/// @param  pConfig:        HYPERBUSI module configuration
/// @param  RegOffset:      Register offset
/// @param  RegValue:       Value to be stored into register
/// @return E_OK:           Success
/// <br>    E_INVALID_ARG:  If one of following conditions are met:
///                         - pConfig = NULL
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType Hyperbusi_Write_Reg(const SHyperbusiConfig *pConfig, const uint32 RegOffset, const uint16 RegValue)
{
    Std_ReturnType RetValue = E_INVALID_ARG;

    // Check for a valid pointer
    if (pConfig == NULL)
    // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    {
        RetValue = E_INVALID_ARG;
    }
    else
    {
        // polyspace<RTE:IDP> Write data to real MCU register. Checked on target.
        HYPERRAM_WRITE(pConfig->MemoryStartAddress, RegOffset, RegValue);
        RetValue = E_OK;
    }
    return RetValue;
}

