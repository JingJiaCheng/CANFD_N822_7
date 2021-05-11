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

File Name        :  fbl_memdrv.h
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_memdrv.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported
                    by fbl_memdrv.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_MEMDRV_H
#define FBL_MEMDRV_H

/**  Include Files  **/
#include "system.h"
#include "fbl_memdrv_cfg.h"

/* Memory Driver Inteface Structure */
struct SFblMemDrv_If
{
    UINT8   memID;

    /* Memory API Functions */
    UINT8 (*Init)(UINT8 param);
    UINT8 (*DeInit)(UINT8 param);
    UINT8 (*Read)(UINT32 addr,  UINT32 *pLen, UINT8 *pBuffer);
    UINT8 (*Write)(UINT32 addr, UINT32 *pLen, const UINT8 *pBuffer);
    UINT8 (*Erase)(UINT32 addr, UINT32 len);
};

/* Memory Driver Inteface */
extern const struct SFblMemDrv_If memDrvIfs[];

/*============================================================================
 ** Function Name:    FblMemDrv_Init
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the memory driver.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 m   - Memory Driver ID
 **                   UINT8 p   - Unused
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
#define FblMemDrv_Init(m, p)            \
        memDrvIfs[m].Init(p)

/*============================================================================
 ** Function Name:    FblMemDrv_DeInit
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to deinitialize the memory driver.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 m   - Memory Driver ID
 **                   UINT8 p   - Unused
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
#define FblMemDrv_DeInit(m, p)          \
        memDrvIfs[m].DeInit(p)

/*============================================================================
 ** Function Name:    FblMemDrv_Read
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read data from the memory driver.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 m       - Memory Driver ID
 **                   UINT32 a      - Address to read
 **                   UINT32 *pL    - Pointer to the length variable
 **                   UINT8 pB      - Pointer to the buffer to copy the data
 **
 ** Outputs           UINT32 *pL    - Returns number of bytes read
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
#define FblMemDrv_Read(m, a, pL, pB)    \
        memDrvIfs[m].Read(a, pL, pB)

/*============================================================================
 ** Function Name:    FblMemDrv_Write
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to write data to the memory driver.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 m       - Memory Driver ID
 **                   UINT32 a      - Address to write
 **                   UINT32 *pL    - Pointer to the length variable
 **                   UINT8 pB      - Pointer to the buffer with the data
 **
 ** Outputs           UINT32 *pL    - Returns number of bytes written
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
#define FblMemDrv_Write(m, a, pL, pB)   \
        memDrvIfs[m].Write(a, pL, pB)

/*============================================================================
 ** Function Name:    FblMemDrv_Erase
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to erase data using the memory driver.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 m       - Memory Driver ID
 **                   UINT32 a      - Address to erase
 **                   UINT32 l      - Number of bytes to erase
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
#define FblMemDrv_Erase(m, a, l)        \
        memDrvIfs[m].Erase(a, l)

#endif /* FBL_MEMDRV_H */
/******************************************************************************/
/*   for each change to this file, be sure to record:                         */
/*      1.  who made the change and when the change was made                  */
/*      2.  why the change was made and the intended result                   */
/*   Following block needs to be repeated for each change                     */
/******************************************************************************/
/*   Note: In the traceability column we need to trace back to the Design Doc.*/
/*   For the initial version it is traced to the Design Document section.     */
/*   For further changes it shall trace to the source of the change which may */
/*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  */
/*   other reason                                                             */
/******************************************************************************/
/*---------------------------------------------------------------------------
Date              : 26-SEP-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
