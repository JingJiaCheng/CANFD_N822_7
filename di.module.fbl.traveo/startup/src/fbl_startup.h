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

File Name        :  fbl_startup.h
Module Short Name:  vehiclecomm.core.fbl.startup.sh726x
VOBName          :  vehiclecomm.core.fbl.startup.sh726x\src\fbl_startup.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported by FBL Startup
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_STARTUP_H
#define FBL_STARTUP_H

/**  Include Files  **/
#include "system.h"
#include "fbl_main.h"

// MPU configuration Structure
typedef struct SFblStartupMpuConfig_t
{
    UINT32        StartAddress;                 // The Start address of MPU region
    UINT32        Access;                       // Access rights
	UINT8         Number;                       // Region number
    UINT8         Size;                         // Region size
} SFblStartupMpuConfig;

/*============================================================================
 ** Function Name:    FblStartup_Init
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the micro-controller
 **                   Pre-Application jump hook
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           UINT8 - Startup Reason
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblStartup_Init(void);

/*============================================================================
 ** Function Name:    FblStartup_DeInit
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to de-initialize the micro-controller
 **                   before jumping to the application
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void FblStartup_DeInit(void);

/*============================================================================
 ** Function Name:    FblStartup_PostInit
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the micro-controller
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           UINT8 - Startup Reason
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblStartup_PostInit(void);

/*============================================================================
 ** Function Name:    FblStartup_InitRAM
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the RAM
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void  FblStartup_InitRAM(void);

/*============================================================================
 ** Function Name:    FblStartup_InterruptDisable
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to disable interrupts
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void  FblStartup_InterruptDisable(void);

#endif /* FBL_STARTUP_H */
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
