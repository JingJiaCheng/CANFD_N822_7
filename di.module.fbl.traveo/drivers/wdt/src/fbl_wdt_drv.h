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

File Name        :  fbl_wdt_timer.h
Module Short Name:  fbl.drivers.sh726x\wdt
VOBName          :  fbl.drivers.sh726x\wdt\src\fbl_wdt_timer.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported by fbl_wdt_timer.c
                    Keep this file generic and free from hardware specific code
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_WDT_H
#define FBL_WDT_H

/**  Include Files  **/
#include "system.h"

/*============================================================================
 ** Function Name:    FblWdtDrv_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function initializes the watchdog module 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None
 **==========================================================================*/
void FblWdtDrv_Init(void);

/*============================================================================
 ** Function Name:    FblWdtDrv_Pet 
 **
 ** Visibility:       Public
 **
 ** Description:      This function services the watchdog
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None
 **==========================================================================*/
void FblWdtDrv_Pet(void);

/*============================================================================
 ** Function Name:    FblWdtDrv_ForceReset 
 **
 ** Visibility:       Public
 **
 ** Description:      This function forces the watchdog to reset the system
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None
 **==========================================================================*/
void FblWdtDrv_ForceReset(void);

#endif /* FBL_WDT_H */
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
