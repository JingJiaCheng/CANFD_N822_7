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

File Name        :  fbl_security.h
Module Short Name:  vehiclecomm.core.fbl.hyundai
VOBName          :  vehiclecomm.core.fbl.hyundai\security\src\fbl_security.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported by fbl_security.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_SECURITY_H
#define FBL_SECURITY_H

/**  Include Files  **/
#include "fbl_main.h"




#define SEED_AND_KEY_COCF1				(UINT8)(0x1Eu)
#define SEED_AND_KEY_COCF2				(UINT8)(0x60u)

#define SET_BIT							(1u)
#define CLEAR_BIT						(0u)
/* Security Seed-Key Length */
#define FBL_SEC_SEED_LEN				(4u)
#define FBL_SEC_KEY_LEN					(4u)

#define FBL_SECURITY_SUCCESS			(0u)
#define FBL_SECURITY_PENDING			(1u)
#define FBL_SECURITY_REQ_SEED_FAILED	(2u)
#define FBL_SECURITY_KEY_FAILED			(3u)
#define FBL_SECURITY_NOT_DONE			(0xFFu)

/*============================================================================
 ** Function Name:    FblSec_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the security module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs:           None
 **
 ** Return:           UINT8
 **                   FBL_OK - Success
 **                   FBL_FAIL - Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_Init(void);

/*============================================================================
 ** Function Name:    FblSec_DeInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to deinitialize the security
 **					  module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs:           None
 **
 ** Return:           UINT8
 **                   FBL_OK - Success
 **                   FBL_FAIL - Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_DeInit(void);

/*============================================================================
 ** Function Name:    FblSec_RequestSeed 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to request seed for security access
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT8 compId - Component ID 
 **					  UINT8 *pSeedBuffer - Buffer to copy the seed
 **					  UINT32 len	- Length of the buffer
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_INVALID_PARAM - Invalid Parameter
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_RequestSeed(UINT8 *pSeedBuffer, UINT32 len);

/*============================================================================
 ** Function Name:    FblSec_VerifyKey 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to verify the security key sent by
 **					  the tester
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT8 *pKeyBuffer - Buffer that contains the key
 **					  UINT32 len - Length of the buffer
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **                   FBL_INVALID_PARAM - Invalid Parameter
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_VerifyKey(const UINT8 *pKeyBuffer, UINT32 len);

/*============================================================================
 ** Function Name:    FblSec_VerifySecurityAccess 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to verify the security access to 
 **					  program the component ID
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT8 compId 	- Component ID
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 				- Success
 **                   FBL_FAIL 				- Failed
 **                   FBL_INVALID_PARAM 	- Invalid Parameter
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_VerifySecurityAccess(void);

/*============================================================================
 ** Function Name:    FblSec_ClearSecurityAccess 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to clear the security access
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 				- Success
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_ClearSecurityAccess(void);

#endif /* FBL_SECURITY_H */
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
