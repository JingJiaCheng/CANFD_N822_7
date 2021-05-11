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

File Name        :  fbl_crc.h
Module Short Name:  vehiclecomm.core.fbl.crypto
VOBName          :  vehiclecomm.core.fbl.crypto\src\fbl_crc.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported 
                    by fbl_crc.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  All
Target Processor :  All
******************************************************************************/
#ifndef FBL_CRC_H
#define FBL_CRC_H

/**  Include Files  **/
#include "fbl_main.h"

/*============================================================================
 ** Function Name:    FblCrypto_Crc64Iso 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to calculate CRC-64-ISO for the given
 **                   buffer. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT64 *uCRC64 - Pointer to return the CRC value
 **                   UINT8 *pBuffer - Pointer to the data buffer
 **                   UINT32 size    - Size of the data buffer in bytes
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void   FblCrypto_Crc64Iso(UINT64 *pCRC64, const UINT8 *pBuffer, UINT32 size);

/*============================================================================
 ** Function Name:    FblCrypto_Crc32 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to calculate CRC-32 for the given
 **                   buffer. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT8 *pBuffer - Pointer to the data buffer
 **                   UINT32 size    - Size of the data buffer in bytes
  **
 ** Return:           UINT32 - Calculated CRC32 Value
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT32 FblCrypto_Crc32(const UINT8 *pBuffer, UINT32 size);

#endif /* FBL_CRC_H */
/******************************************************************************/
/*   for each change to this file, be sure to record:                         */
/*      1.  who made the change and when the change was made                  */
/*      2.  why the change was made and the intended result                   */
/*   Following block needs to be repeated for each change					  */
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
Traceability      :	NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
