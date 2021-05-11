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

File Name        :  fbl_eeprom_drv.c
Module Short Name:  vehiclecomm.core.fbl.ext.drivers
VOBName          :  vehiclecomm.core.fbl.ext.drivers\eeprom\src\fbl_eeprom_drv.c
Author           :  kshanmu4
Description      :  External EEPROM Driver
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/** Include Files **/
#include "fbl_eeprom_drv.h"


/*============================================================================
 ** Function Name:    FblDataFlashDrv_Init
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the
 **                    EEPROM module.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 param - Unused for now
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblDataFlashDrv_Init(UINT8 param)
{
    /* Nothing to do here */
    return FBL_OK;
}

/*============================================================================
 ** Function Name:    FblDataFlashDrv_DeInit
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to Deinitialize the
 **                    EEPROM module.
 **
 ** Invocation:       Invoked by FBL
 **
** Inputs            UINT8 param - Unused for now
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblDataFlashDrv_DeInit(UINT8 param)
{
    /* Nothing to do here */
    return FBL_OK;
}

/*============================================================================
 ** Function Name:    FblDataFlashDrv_Read
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read data from the
 **                    EEPROM module.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT32 addr   -  Input address to read
 **                   UINT32 *pLen  -  Pointer to the variable that
 **                                    containts the size of the buffer
 **                                    When the function returns it contains
 **                                    no. of bytes actually read.
 **                   UINT8 *pBuffer - Pointer to data buffer to
 **                                    copy the read data
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Read failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblDataFlashDrv_Read(UINT32 addr,  UINT32 *pLen, UINT8 *pBuffer)
{    
    return FBL_FAIL;
}

/*============================================================================
 ** Function Name:    FblDataFlashDrv_Write
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to write data to the
 **                    EEPROM module.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT32 addr   -  Input address to write
 **                   UINT32 *pLen  -  Pointer to the variable that
 **                                    containts the size of the buffer
 **                                    When the function returns it contains
 **                                    no. of bytes actually written.
 **                   UINT8 *pBuffer - Pointer to data buffer that contains
 **                                    the data to write
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Write failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblDataFlashDrv_Write(UINT32 addr, UINT32 *pLen, const UINT8 *pBuffer)
{    
    return FBL_FAIL;
}

/*============================================================================
 ** Function Name:    FblDataFlashDrv_Erase
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to erase data from the
 **                    EEPROM module.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT32 addr   -  Input address to erase
 **                   UINT32 len    -  Number of bytes to erase
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Write failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblDataFlashDrv_Erase(UINT32 addr, UINT32 len)
{
    return FBL_FAIL;
}

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
Date              : 18-NOV-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: SPI Transport Support.
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
Date              : 12-OCT-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
