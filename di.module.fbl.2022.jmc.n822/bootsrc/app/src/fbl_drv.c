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

File Name        :  fbl_drv.c
Module Short Name:  fbl.drivers.sh726x\can
VOBName          :  fbl.drivers.sh726x\can\src\fbl_drv.c
Author           :  kshanmu4
Description      :  Implements the CAN driver.
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/

/**  Include Files  **/
#include "fbl_drv.h"
#include "canxcvr.h"
#include "hf.h"
#include "fbl_timer_drv.h"
#include "fbl_wdt_drv.h"

//static void MCURegion_init(void);
UINT8 Fbl_WatchDog_Monitor(UINT8 service_type);

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
void FblDrv_Init(void)
{
}

/**************************************************************************************
* Name         :  delay_ms
* Preconditions:  Timer and Watchdog need to be initialized.
* Parameters   :  no of millisecs
* Return code  :  Nothing.
* Description  :  It provides the delay in milli seconds. 
***************************************************************************************/

void delay_ms(UINT32 delay)
{
  	delay = delay+1u; /* Since the function not caring current count */
	while(delay != 0u)
	{
		if( (Fbl_WatchDog_Monitor(FBL_WD_SERVICE_1MS)& FBL_TM_TRIGGERED) == FBL_TM_TRIGGERED)
		{
			delay--;
		}
	}
}

/******************************************************************************
* Name         :  Fbl_WatchDog_Monitor
* Called by    :  main,diag long services
* Preconditions:  None
* Parameters   :  None
* Return code  :  None
* Description  :  Services watchdog.
******************************************************************************/
UINT8 Fbl_WatchDog_Monitor(UINT8 service_type)
{
	UINT8 retValue = FBL_NO_TRIGGER;
	if(service_type == FBL_WD_SERVICE_1MS)
	{
		/* Check whether 1mSec has elapsed? */
		if(FblTimerGet()!=0u)
		{
			/*Reset the timer */
			FblTimerReset();
			/* Set that timer is triggered.*/
			retValue |= FBL_TM_TRIGGERED;      
			FblWdtDrv_Pet(); 
		 }
	}
	else
	{
		FblWdtDrv_Pet(); 		
	}
	return retValue;
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
Date              : 21-NOV-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
