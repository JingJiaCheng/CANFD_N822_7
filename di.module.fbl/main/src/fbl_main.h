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

File Name        :  fbl_main.h
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_main.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported
                    by fbl_main.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_MAIN_H
#define FBL_MAIN_H

/**  Include Files  **/
#include "system.h"
#include "fbl_error.h"
#include "fbl_version.h"

/**  Macro Definitions  **/
/* FBL Modes
 */
#define FblMode_StartFromApp            0x01u
#define FblMode_StartFromReset          0x02u
#define FblMode_InvalidApp              0x04u
#define FblMode_WaitForTester           0x08u
#define FblMode_SendResponse            0x10u
#define FblMode_StayInBoot              0x20u

/* FBL Reset Reason
 */
#define FblReset_POR                    0x00u
#define FblReset_WDT                    0x01u
#define FblReset_UDS                    0x02u

/*============================================================================
 ** Function Name:    FblMain_RunTimer
 **
 ** Visibility:       Public
 **
 ** Description:      This function runs the FBL Tick timer.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    FblMain_RunTimer(void);

/*============================================================================
 ** Function Name:    FblMain_GetCounter
 **
 ** Visibility:       Public
 **
 ** Description:      This function returns the current tick count + timeout.
 **                   This fucntion does not modify the tick count
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT32 timeout - Timeout to add to the tick count
 **
 ** Return:           UINT32 - Current ms Tick + timeout
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT32  FblMain_GetCounter(UINT32 timeout);

/*============================================================================
 ** Function Name:    FblMain_IsTimeoutElapsed
 **
 ** Visibility:       Public
 **
 ** Description:      This function checks if the timeout is elapsed
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT32 timeout - Timeout to add to the tick count
 **
 ** Return:           UINT8
 **                   TRUE  - Timeout elapsed
 **                   FALSE - Timeout not elapsed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblMain_IsTimeoutElapsed(UINT32 timeout);

/*============================================================================
 ** Function Name:    FblMain_GetResetReason
 **
 ** Visibility:       Public
 **
 ** Description:      This function returns the reason for the reset
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FblReset_POR - Power ON Reset
 **                   FblReset_WDT - Watchdog Reset
 **                   FblReset_UDS - UDS Reset Request
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblMain_GetResetReason(void);

/*============================================================================
 ** Function Name:    FblMain_GetMode
 **
 ** Visibility:       Public
 **
 ** Description:      This function returns the current FBL Mode
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FblMode_StartFromApp
 **                   FblMode_StartFromReset
 **                   FblMode_InvalidApp
 **                   FblMode_WaitForTester
 **                   FblMode_SendResponse
 **                   FblMode_StayInBoot
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblMain_GetMode(void);

/*============================================================================
 ** Function Name:    FblMain_SendRCRRP
 **
 ** Visibility:       Public
 **
 ** Description:      This function sends the RCRRP to the tester
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    FblMain_SendRCRRP(void);

#endif /* FBL_MAIN_H */
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
