/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2016. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/

/*****************************************************************************

File Name        :  fbl_memdrv_cfg.h
Module Short Name:  fbl.main.df91
VOBName          :  fbl.main.df91\cfg\fbl_memdrv_cfg.h
Author           :  kshanmu4
Description      :  FBL Configuration File
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_MEMDRV_CFG_H
#define FBL_MEMDRV_CFG_H



//#define MEMDRV_FLASH_ID         ((UINT8)0)
//#define MEMDRV_HYPERFLASH0_ID   ((UINT8)1)
//#define MEMDRV_RAM_ID           ((UINT8)2)
//#define MEMDRV_INVALID_ID       ((UINT8)3)

typedef enum MEMDRV
{
    MEMDRV_FLASH_ID = 0,
    MEMDRV_HYPERFLASH0_ID,
    MEMDRV_RAM_ID,
    MEMDRV_INVALID_ID
}MEMDRV_ENUM;
#define MAX_MEMDRV_IF         MEMDRV_INVALID_ID

UINT8 FblFlashDrv_Init(UINT8 param);
UINT8 FblFlashDrv_DeInit(UINT8 param);
UINT8 FblFlashDrv_Read(UINT32 addr,  UINT32 *pLen, UINT8 *pBuffer);
UINT8 FblFlashDrv_Write(UINT32 addr, UINT32 *pLen, const UINT8 *pBuffer);
UINT8 FblFlashDrv_Erase(UINT32 addr, UINT32 len);


UINT8 FblHyperFlash_Init(UINT8 param);
UINT8 FblHyperFlash_DeInit(UINT8 param);
UINT8 FblHyperFlash_Read(UINT32 addr,  UINT32 *pLen, UINT8 *pBuffer);
UINT8 FblHyperFlash_Write(UINT32 addr, UINT32 *pLen, const UINT8 *pBuffer);
UINT8 FblHyperFlash_Erase(UINT32 addr, UINT32 len);

UINT8 FblRamDrv_Init(UINT8 param);
UINT8 FblRamDrv_DeInit(UINT8 param);
UINT8 FblRamDrv_Read(UINT32 addr,  UINT32 *pLen, UINT8 *pBuffer);
UINT8 FblRamDrv_Write(UINT32 addr, UINT32 *pLen, const UINT8 *pBuffer);
UINT8 FblRamDrv_Erase(UINT32 addr, UINT32 len);


#define FBL_APP_MEMDRV_INTERFACES       \
    {                             \
        MEMDRV_FLASH_ID,            \
        FblFlashDrv_Init,           \
        FblFlashDrv_DeInit,         \
        FblFlashDrv_Read,           \
        FblFlashDrv_Write,          \
        FblFlashDrv_Erase,          \
    },                            \
    {                             \
        MEMDRV_HYPERFLASH0_ID,      \
        FblHyperFlash_Init,         \
        FblHyperFlash_DeInit,       \
        FblHyperFlash_Read,         \
        FblHyperFlash_Write,        \
        FblHyperFlash_Erase,        \
    },                            \
    {                             \
        MEMDRV_RAM_ID,      \
        FblRamDrv_Init,         \
        FblRamDrv_DeInit,       \
        FblRamDrv_Read,         \
        FblRamDrv_Write,        \
        FblRamDrv_Erase,        \
    }                            \
  
#endif /* FBL_MEMDRV_CFG_H */
