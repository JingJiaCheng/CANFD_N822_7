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
/*#include "HMemDrvPrivate_Cfg.h"*/
#include "HFlashDrv_Cfg.h"
#include "hyperbusi.h"
#include "MemLib.h"

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

/// Hyperflash configuration
HYPER_FLASH_CONFIG

#define FLASH_WR(Base, Offset, Data)        (*(((volatile uint16*)(Base)) + (Offset))) = (Data)
#define FLASH_RD(Base, Offset)              (*(((volatile uint16*)(Base)) + (Offset)))

#define cNOR_UNLOCK_ADDR1                   (uint32)0x00000555
#define cNOR_UNLOCK_ADDR2                   (uint32)0x000002AA

#define cNOR_UNLOCK_DATA1                   (uint16)0xAA
#define cNOR_UNLOCK_DATA2                   (uint16)0x55

#define cNOR_ERASE_SETUP_CMD                (uint16)0x80
#define cNOR_SECTOR_ERASE_CMD               (uint16)0x30
#define cNOR_WRITE_BUFFER_LOAD_CMD          (uint16)0x25
#define cNOR_WRITE_BUFFER_PGM_CONFIRM_CMD   (uint16)0x29
#define cNOR_STATUS_REG_READ_CMD            (uint16)0x70
#define cNOR_READ_NON_VOLATILE_CFG_REG_CMD  (uint16)0xC6
#define cNOR_LOAD_VOLATILE_CFG_REG_CMD      (uint16)0x38

#define cHFLASH_VCR_DRIVE_STRENGHT_OFFSET   (uint8)12

#define cSECTOR_ADDR_OFFSET_MASK            (uint32)0xFFFE0000

#define cDEV_RDY_MASK                       0x80u    // Device Ready Bit
#define cDEV_ERASE_MASK                     0x20u    // Erase Status Bit
#define cDEV_PROGRAM_MASK                   0x10u    // Program Status Bit

//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================

static uint32 LastLoadedOffset = 0ul;
static uint32 LastLoadedBaseAddr;

//=====================================================================================================================
//  PRIVATE
//=====================================================================================================================

//=====================================================================================================================
//  PUBLIC
//=====================================================================================================================

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Initialization of HFlash
///
//---------------------------------------------------------------------------------------------------------------------
// polyspace<RTE: UNP > Not called function from Polyspace point of view, calling is in HYPERBUS_INIT() macro and is configuration dependent.
void HFlash_Init( void )
{
    uint8 Ix;
    un_grpsub_subc_ilaxibridge_startmaster0region0_t * pRegAxiStartMasterRegion;
    un_grpsub_subc_ilaxibridge_endmaster0region0_t * pRegAxiEndMasterRegion;
    uint16 HyperFlashConfReg;
    uint16 Offset = (uint16)0;
	
    for(Ix=0U; Ix<HFLASH_CONFIG_NUMBER; Ix++)
    {
        (void)Hyperbusi_Init(&HFlashConfig[Ix]);

		// polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
        if((HYPERBUSI0_Type != HFlashConfig[Ix].HyperBusType))
        {
          GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_UNLOCK_KEY;

          pRegAxiStartMasterRegion = GRPSUB_ILAXIBRIDGE_START_MASTER_REGION(HFlashConfig[Ix].AxiBridgeRegion);
          /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
          pRegAxiStartMasterRegion->u32Register = HFlashConfig[Ix].MemoryStartAddress + 1UL;

          pRegAxiEndMasterRegion = GRPSUB_ILAXIBRIDGE_END_MASTER_REGION(HFlashConfig[Ix].AxiBridgeRegion);
          /* polyspace<RTE: IDP> smollov: MCU peripheral register. Checked for out of bounds */
          pRegAxiEndMasterRegion->u32Register = HFlashConfig[Ix].MemoryEndAddress + 1UL;

          GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK = cAXIBRIDGE_LOCK_KEY;
        }

        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(HFlashConfig[Ix].MemoryStartAddress, cNOR_UNLOCK_ADDR1, cNOR_UNLOCK_DATA1);    // Unlock Cycle 1
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(HFlashConfig[Ix].MemoryStartAddress, cNOR_UNLOCK_ADDR2, cNOR_UNLOCK_DATA2);    // Unlock Cycle 2
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(HFlashConfig[Ix].MemoryStartAddress, cNOR_UNLOCK_ADDR1, cNOR_READ_NON_VOLATILE_CFG_REG_CMD); // Command Cycle 1
        // polyspace<RTE:NIV>  Variable may be non-initialized  from Polyspace point of view, however it is initialized by caller.
        HyperFlashConfReg = FLASH_RD(HFlashConfig[Ix].MemoryStartAddress, Offset);              // Read Volatile Configuration Register

        HyperFlashConfReg |= (uint16)(HFlashConfig[Ix].DriveStrength << cHFLASH_VCR_DRIVE_STRENGHT_OFFSET); // Update Drive Strength

        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(HFlashConfig[Ix].MemoryStartAddress, cNOR_UNLOCK_ADDR1, cNOR_UNLOCK_DATA1);    // Unlock Cycle 1
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(HFlashConfig[Ix].MemoryStartAddress, cNOR_UNLOCK_ADDR2, cNOR_UNLOCK_DATA2);    // Unlock Cycle 2
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(HFlashConfig[Ix].MemoryStartAddress, cNOR_UNLOCK_ADDR1, cNOR_LOAD_VOLATILE_CFG_REG_CMD); // Command Cycle 1
        // polyspace<RTE:IDP> Pointer is checked above
        FLASH_WR(HFlashConfig[Ix].MemoryStartAddress, Offset, HyperFlashConfReg);
    }

    LastLoadedOffset   = 0UL;
    LastLoadedBaseAddr = HFlashConfig[0].MemoryStartAddress;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Write data to HyperFlash
///
/// @param  TgtAddress:     Target address
/// @param  SrcAddressPtr:  Pointer to data buffer
/// @param  Length:         Size of data buffer
///
/// @return E_OK:           Succeed
///<br>     E_INVALID_ARG:  Invalid input parameter
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType HFlash_Write(const HMemDrv_AddressType TgtAddress, const uint16* SrcAddressPtr, const HMemDrv_LengthType Length)
{
    Std_ReturnType Ret = E_INVALID_ARG;
    uint32 BaseAddr;
    uint32 Offset;
    uint32 CurrentOffset;
    uint32 EndOffset;
    uint16 DataLength;
    uint8 Ix;

    for(Ix=0U; Ix<HFLASH_CONFIG_NUMBER; Ix++)
    {
        if((HFlashConfig[Ix].MemoryStartAddress <= TgtAddress)
          && (HFlashConfig[Ix].MemoryEndAddress >= (TgtAddress + Length)))
        {
            Ret = E_OK;
        }
    }

    if((E_OK != Ret)
      || (NULL == SrcAddressPtr)
      || ((uint32)0 == Length)
      || (cHYPERFLASH_WORD_CNT < Length))
    {
        Ret = E_INVALID_ARG;
    }
    else
    {
        BaseAddr   = TgtAddress & cSECTOR_ADDR_MASK;
        Offset     = (TgtAddress - BaseAddr) / sizeof(uint16);
        DataLength = (uint16)(Length - 1UL);

        CurrentOffset    = Offset;
        EndOffset        = Offset + DataLength;
        LastLoadedOffset = Offset;

        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, cNOR_UNLOCK_ADDR1, cNOR_UNLOCK_DATA1);  // Unlock Cycle 1
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, cNOR_UNLOCK_ADDR2, cNOR_UNLOCK_DATA2);  // Unlock Cycle 2
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, Offset, cNOR_WRITE_BUFFER_LOAD_CMD);    // Write to Buffer Command at Sector Address

        // In the datasheets of some latest Spansion devices, such as GLP, GLS, etc, the
        // command sequence of "write to buffer" command states the address of word count is
        // "Sector Address". Notice that to make LLD backward compatibility, the actual word
        // count address implemented is "Sector Address + cNOR_UNLOCK_ADDR2", since the lower
        // address bits (a0-a15) are "don't care" bits and will be ignored anyway.
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, (Offset & cSECTOR_ADDR_OFFSET_MASK), DataLength);   //Number of Locations at Sector Address

        while(CurrentOffset <= EndOffset)
        {
            // Store last offset address for status check later
            LastLoadedOffset = CurrentOffset;

            // Write Data
            // polyspace<RTE:IDP> Pointer is checked above.
            FLASH_WR(BaseAddr, CurrentOffset, *SrcAddressPtr++);       // Load next Address / Data pair
            CurrentOffset ++;
        }
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, Offset, cNOR_WRITE_BUFFER_PGM_CONFIRM_CMD); // Write Buffer Program Confirm at Sector Address
        LastLoadedBaseAddr = BaseAddr;
        Ret = E_OK;
    }
    return Ret;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Read data from HyperFlash
///
/// @param  SrcAddress:     Source address
/// @param  TgtAddressPtr:  Pointer to data buffer
/// @param  Length:         Size of data buffer
///
/// @return E_OK:           Succeed
///<br>     E_INVALID_ARG:  Invalid input parameter
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType HFlash_Read (const HMemDrv_AddressType SrcAddress, uint8* TgtAddressPtr, const HMemDrv_LengthType Length)
{
    Std_ReturnType Ret = E_INVALID_ARG;
    uint8 Ix;

    for(Ix=0U; Ix<HFLASH_CONFIG_NUMBER; Ix++)
    {
        if((HFlashConfig[Ix].MemoryStartAddress <= SrcAddress)
          && (HFlashConfig[Ix].MemoryEndAddress >= (SrcAddress + Length)))
        {
            Ret = E_OK;
        }
    }

    if((E_OK != Ret)
      || (NULL == TgtAddressPtr)
      || (0UL == Length))
    {
        Ret = E_INVALID_ARG;
    }
    else
    {
        MemLib_MemCpy(TgtAddressPtr, (uint8*)SrcAddress, Length);
        Ret = E_OK;
    }
    return Ret;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Erase data from HyperFlash
///
/// @param  TgtAddress:     Sector address
///
/// @return E_OK:           Succeed
///<br>     E_INVALID_ARG:  Invalid input parameter
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType HFlash_EraseSector(const HMemDrv_AddressType TgtAddress)
{
    Std_ReturnType Ret = E_INVALID_ARG;
    uint32 BaseAddr;
    uint32 Offset;
    uint8 Ix;

    for(Ix=0U; Ix<HFLASH_CONFIG_NUMBER; Ix++)
    {
        if((HFlashConfig[Ix].MemoryStartAddress <= TgtAddress)
          && (HFlashConfig[Ix].MemoryEndAddress >= TgtAddress))
        {
            Ret = E_OK;
        }
    }

    if(E_OK != Ret)
    {
        Ret = E_INVALID_ARG;
    }
    else
    {
        BaseAddr = TgtAddress & cSECTOR_ADDR_MASK;
        Offset   = TgtAddress - BaseAddr;

        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, cNOR_UNLOCK_ADDR1, cNOR_UNLOCK_DATA1);    // Unlock Cycle 1
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, cNOR_UNLOCK_ADDR2, cNOR_UNLOCK_DATA2);    // Unlock Cycle 2

        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, cNOR_UNLOCK_ADDR1, cNOR_ERASE_SETUP_CMD); // Command Cycle 1
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, cNOR_UNLOCK_ADDR1, cNOR_UNLOCK_DATA1);    // Command Cycle 2
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, cNOR_UNLOCK_ADDR2, cNOR_UNLOCK_DATA2);    // Command Cycle 3
        // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
        FLASH_WR(BaseAddr, Offset, cNOR_SECTOR_ERASE_CMD);           // Write Sector Erase Command to Offset

        LastLoadedOffset   = Offset;
        LastLoadedBaseAddr = BaseAddr;

        Ret = E_OK;
    }
    return Ret;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Get the status of last operation
///
/// @return Return value:
///<br>     EHFlashJobResult_OK:           Last jobs finished successfully
///<br>     EHFlashJobResult_JobPending:   Last job is ongoing
///<br>     EHFlashJobResult_JobFailed:    Last job terminated with error
//---------------------------------------------------------------------------------------------------------------------
HFlash_JobResultType HFlash_GetJobResult(void)
{
    HFlash_JobResultType Ret;
    uint32 BaseAddr;
    uint32 Offset;
    uint16 StatusReg;

    BaseAddr = LastLoadedBaseAddr;
    Offset   = LastLoadedOffset;
    // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
	// polyspace<RTE:NIV>  Variable may be non-initialized  from Polyspace point of view, however it is initialized by caller.
    FLASH_WR(BaseAddr, cNOR_UNLOCK_ADDR1, cNOR_STATUS_REG_READ_CMD); //status register read command
    // polyspace<RTE:IDP> Pointer is checked above. Also this is a lock/unlock sequence that does not access real address.
	// polyspace<RTE:NIV>  Variable may be non-initialized  from Polyspace point of view, however it is initialized by caller.
    StatusReg = FLASH_RD(BaseAddr, Offset);              // read the status register

    if(((StatusReg & cDEV_ERASE_MASK) == cDEV_ERASE_MASK)
        || ((StatusReg & cDEV_PROGRAM_MASK) == cDEV_PROGRAM_MASK))
    {
        Ret = EHFlashJobResult_JobFailed;
    }
    else if((StatusReg & cDEV_RDY_MASK) == cDEV_RDY_MASK)
    {
        Ret = EHFlashJobResult_OK;
    }
    else
    {
        Ret = EHFlashJobResult_JobPending;
    }
    return Ret;
}

