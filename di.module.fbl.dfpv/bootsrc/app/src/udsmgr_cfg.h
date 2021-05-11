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

File Name        :  udsmgr.h
Module Short Name:  vehiclecomm.core.fbl.faraday
VOBName          :  vehiclecomm.core.fbl.faraday\uds\src\udsmgr.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported by UDS Stack
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef UDS_DIAG_MGR_CFG_H
#define UDS_DIAG_MGR_CFG_H

/**  Include Files  **/
#include "udsmgr.h"
#include "fbl_app_cfg.h"

/*
** GENERAL DEFINITIONS
*/

#define DATA_LEN_0_BYTE                     ( 0x00u)
#define DATA_LEN_1_BYTE                     ( 0x01u)
#define DATA_LEN_2_BYTE                     ( 0x02u)
#define DATA_LEN_3_BYTE                     ( 0x03u)
#define DATA_LEN_4_BYTE                     ( 0x04u)
#define DATA_LEN_5_BYTE                     ( 0x05u)
#define DATA_LEN_6_BYTE                     ( 0x06u)
#define DATA_LEN_9_BYTE                     ( 0x09u)

#define UDS_REQ_DNLD_DATA_BLK_SIZE          (0x0E00u)

#define DISABLE   0x00u
#define ENABLE   0x01u


//#define CRYPTO_MODE_ENABLE
#define RL78      0x01u
#define RH850     0x02u
#define S6J3200   0x03u

#define MICRO    S6J3200
#define EEPROM   DISABLE
#define DFLASH   DISABLE
/*-------------------------------------------------------------------------*/
/*                                                                         */
/* NAME:         PROD_SPEC_DENY_DIAG_REQUEST_LIST                          */
/*                                                                         */
/* TYPE:         MACRO                                                     */
/*                                                                         */
/* DESCRIPTION:  This macro must contain a list of all functions that are  */
/*               to be executed when any diagnostic command is received.   */
/*               Any tasks that have conditions which can prevent          */
/*               processing diagnostic request are to be listed here.      */
/*               Functions in this list must match the following prototype.*/
/*                                                                         */
/*                 BOOLEAN function_name_KSDenydiagrequest(void)           */
/*                                                                         */
/*               The values returned by functions in this list must be as  */
/*               follows:                                                  */
/*                                                                         */
/*                 FALSE if ok to process diagnostic request.              */
/*                 TRUE  if not ready for reset.                           */
/*                                                                         */
/*               If any function in the list returns TRUE, request is      */
/*               aborted and negative response is sent.                    */
/*                                                                         */
/*               Functions in this list are executed sequentially from the */
/*               first function in the list until the last.                */
/*                                                                         */
/* REQUIRED:     YES.(List can be NULL)                                    */
/*                                                                         */
/*                                                                         */
/*-------------------------------------------------------------------------*/
#define PROD_SPEC_DENY_DIAG_REQUEST_LIST      \
	    NULL,                  \

#endif /* UDS_DIAG_MGR_CFG_H */
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

