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

File Name        :  fbl_drv.h
Module Short Name:  fbl.drivers.sh726x\can
VOBName          :  fbl.drivers.sh726x\can\src\fbl_drv.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported
                    by fbl_drv.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_DRV_H
#define FBL_DRV_H

/**  Include Files  **/
#include "fbl_main.h"


#define FBL_WD_SERVICE_1MS         (0u)
#define FBL_WD_SERVICE_IMMEDIATE   (1u)
#define FBL_NO_TRIGGER     0x00u    /* No action performed (just watching the timer) */
#define FBL_WD_TRIGGERED   0x03u    /* Watchdog has been triggered */
#define FBL_TM_TRIGGERED   0x02u    /* Timer has expired and was re-triggered */
#define FBL_WD_SERVICE_TIME_CNT 0x64u 


 /*============================================================================
 ** Function Name:    FblDrv_Init
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the driver
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void  FblDrv_Init(void);
void delay_ms(UINT32 delay);

#endif /* FBL_DRV_H */
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
Date              : 21-NOV-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
