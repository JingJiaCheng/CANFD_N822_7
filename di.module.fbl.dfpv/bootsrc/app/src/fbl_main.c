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

File Name        :  fbl_main.c
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_main.c
Author           :  kshanmu4
Description      :  Implements the FBL Main Loop.
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/**  Include Files  **/
#include "fbl_app.h"
#include "fbl_app_cfg.h"
#include "fbl_main.h"
#include "fbl_startup.h"
#include "fbl_security.h"
#include "fbl_timer_drv.h"
#include "fbl_wdt_drv.h"
#if (COMM_PROTOCOL == CAN_PROTOCOL)
#include "fbl_can_drv.h"
#include "tp.h"
#include "tp_cfg.h"
#elif(COMM_PROTOCOL == LIN_PROTOCOL)
#include "fbl_lin_drv.h"
#include "tp_lin.h"
#include "tp_lin_cfg.h"
#else
#error "Invalid communication protocol(COMM_PROTOCOL) selected."
#endif
#ifdef KWP_PROTOCOL
#include "kwpdiag_cfg.h"
#include "kwpdiag.h"
#include "kwpmgr.h"
#else
#include "udsdiag_cfg.h"
#include "udsdiag.h"
#include "udsmgr.h"
#endif

/**  Private Function Definitions  **/
static void FblMain_Init(void);
static void FblMain_DeInit(void);
static void FblMain_StartAppl(void);
static void FblMain_EnterProgrammingSession(UINT8 sendResp);

/**  Private Variables Definitions  **/
UINT8  fblMode;
UINT8  fblResetReason;
UINT32 fblMsTick;

/* Set section for reset program */
#ifdef PBL_REFLASH_ENABLE
#pragma section FBLEntry
#endif

/*============================================================================
 ** Function Name:    main
 **
 ** Visibility:       Public
 **
 ** Description:      FBL Entry Point.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
int main(void)
{
    
    UINT8 tempFblMode;
    UINT8 tempResetReason;

    /* Disable all interrupts */
    FblStartup_InterruptDisable();
     /*
     * Get the FBL Start mode by validating Magic Flag & jump Flag
     * 1.If Magic Flag is TRUE(Re-Programming Request from Application code ,stay in Boot)
     * or
     * 2.If Jump Flag is TRUE(Application code is valid ,Jump to Application code)
     */
    tempFblMode = FblApp_GetFblMode();

    /* Check whether Jump Flag is valid */
    if(FblMode_StartFromReset == tempFblMode)
    {
    	/*Validate */
        FblMain_StartAppl();
    }
	   
    (void)FblApp_PreStartupInit();

    /*
     * Perform common micro specific Init
     * 1.Exception
     * 2.Internal Memories
     * 3.Mpu
     */
    tempResetReason = FblStartup_Init();

    /* Inform App code of the reset reason */
    FblApp_SetResetReason(tempResetReason);

    /*
     * Perform application specific HW Init
     * 1.WatchDog Initialize
     * 2.Timer Initialize
     */
    (void)FblApp_PreHwInit();



    /* Either we have a programming request (or)
       wait for timeout to receive tester present (or)
       no valid application */

  	/* Perform common micro specific Init */
    (void) FblStartup_PostInit();

    FblStartup_InitRAM();

    /* Initialize Variables */
    fblMsTick = 0u;
    fblMode = tempFblMode;
    fblResetReason = tempResetReason;

    if(0u != (fblMode & FblMode_StartFromApp))
    {
        fblResetReason = FblReset_UDS;
    }

    FblMain_Init();
    
    while(1)  /* Stay in boot condition */
    {
        /* Run timer and tasks */
        FblMain_RunTimer();

        /* Wait for Tester Present or timeout */
        if(0u != (fblMode & FblMode_WaitForTester))
        {
            if(fblMsTick > FBL_STAY_IN_BOOT_TIMEOUT_MS)
            {
                fblMode &= (~(UINT8)FblMode_WaitForTester);

                if(FblApp_CheckFblExitCondition() == (UINT8)TRUE)
                {
                    FblMain_StartAppl();
                }
            }
        }
        /* Request from Application */
        else if(0u != (fblMode & FblMode_StartFromApp))
        {
            /* Enter Programming Sesssion.
               Send positive response, if requested */
            FblMain_EnterProgrammingSession((0u != (fblMode & FblMode_SendResponse)));

            fblMode = FblMode_StayInBoot;
        }
        /* Stay in bootloader OR Invalid Application */
        else
        {
            /* Do Nothing */
        }
    }
    
}

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
void FblMain_RunTimer(void)
{

    FblWdtDrv_Pet();        /* Make sure this runs every 125ms */
    
    #if(COMM_PROTOCOL == LIN_PROTOCOL)
        FblLinDrv_Task();        /* Service LIN Messages */
    #else
        FblCanDrv_Task();       /* Service CAN Messages */
    #endif

    while(!FblTimerDrv_IsElapsed(FBL_TIMER_0))
    {
        FblWdtDrv_Pet();        /* Make sure this runs every 125ms */
        #if(COMM_PROTOCOL == LIN_PROTOCOL)
        FblLinDrv_Task();        /* Service LIN Messages */    
        #else
        FblCanDrv_Task();       /* Service CAN Messages */
        #endif
    }

    fblMsTick++;

    FblTimerDrv_Reset(FBL_TIMER_0);
    
    
    if((FblMain_GetCounter(0u) % VTP_PERIODICITY) == 0u)
    {
        #if(COMM_PROTOCOL == LIN_PROTOCOL)
        VTP_LIN_PeriodicTask();
        #else
        VTP_PeriodicTask();
        #endif
    }

    if((FblMain_GetCounter(0u) % DIAG_CALLCYCLE_INMSEC) == 0u)
    {
		#ifdef KWP_PROTOCOL
		kwpdiag_periodic();
		#else
        udsdiag_periodic();
		#endif
    }    	
    
    
#ifdef FBL_APP_TASK_TIMEOUT_MS
    if((FblMain_GetCounter(0u) % FBL_APP_TASK_TIMEOUT_MS) == 0u)
    {
        (void)FblApp_Task();
    }
#endif
    
}

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
UINT32 FblMain_GetCounter(UINT32 timeout)
{
    return (timeout + fblMsTick);
}

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
UINT8 FblMain_IsTimeoutElapsed(UINT32 timeout)
{
    UINT8 elapsed = (UINT8)TRUE;

    FblMain_RunTimer();

    if(timeout > fblMsTick)
    {
        elapsed = (UINT8)FALSE;
    }

    return elapsed;
}

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
UINT8   FblMain_GetResetReason(void)
{
    return fblResetReason;
}

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
UINT8   FblMain_GetMode(void)
{
    return fblMode;
}

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
void    FblMain_SendRCRRP(void)
{

    UINT32 timeout;

	#ifdef KWP_PROTOCOL
	(void)kwpdiag_sendrcrrp();
	#else
    (void)udsdiag_sendrcrrp();
	#endif
    timeout = FblMain_GetCounter(5u);

    while(TRUE != FblMain_IsTimeoutElapsed(timeout)){};

}

/*============================================================================
 ** Function Name:    FblMain_StartAppl
 **
 ** Visibility:       Private
 **
 ** Description:      This function is used to jump to the application
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
static void FblMain_StartAppl(void)
{
    
#ifdef FBL_COMP_AUTHORIZATION
    UINT8 isAppAuthorized;
#endif

    /* Check for valid app */
    if((UINT8)TRUE == FblApp_IsValidApp())
    {
#ifdef FBL_COMP_AUTHORIZATION
        isAppAuthorized = FblComp_IsAuthorized(FBL_COMP_APP);

        if((UINT8)FALSE == isAppAuthorized)
        {
            /* Do nothing */
        }
        else
#endif
        {
            /* DeInit FBL */
            FblMain_DeInit();

            /* Jump to App */
            JUMP_APP();
        }
    }
    else
    {
        fblMode = FblMode_InvalidApp;
    }

    return;
    
}

/*============================================================================
 ** Function Name:    FblMain_EnterProgrammingSession
 **
 ** Visibility:       Private
 **
 ** Description:      This function is used to enter into programming session
 **                   and send response if requested.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 sendResp - Send response or not
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
static void FblMain_EnterProgrammingSession(UINT8 sendResp)
{
    UINT8 Data[8];

    #if(COMM_PROTOCOL == LIN_PROTOCOL)
    UINT32 MsgID = VTP_LIN_DIAG_PHY_PF;
    #else
    UINT32 MsgID = VTP_DIAG_PHY_PF;
    #endif
    UINT8 Size = 8u;
    Data[0] = 0x02u;
    Data[1] = 0x10u;
    Data[2] = SESSION_PROGRAMMNG;

    if(sendResp == (UINT8)FALSE)
    {
        Data[2] |= 0x80u;
    }

    UPDATE_SESSION(SESSION_EXTENDED);        
    #if(COMM_PROTOCOL == LIN_PROTOCOL)
    FblLinDrv_RxIndication(MsgID, Size, Data);
    #else
    FblCanDrv_RxIndication(MsgID, Size, Data);
    #endif
    
    return;
}

/*============================================================================
 ** Function Name:    FblMain_Init
 **
 ** Visibility:       Private
 **
 ** Description:      This function is initialize FBL.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
static void FblMain_Init(void)
{
   
    /* Init Basic Drivers */
    FblWdtDrv_Init();
    FblTimerDrv_Init(FBL_TIMER_0, FBL_TIMER_PERIOD_MS);

    /* Perform Application Specific Initializations */
    FblApp_HwInit();
    
    #if(COMM_PROTOCOL == LIN_PROTOCOL)
    /* Init LIN */
    FblLinDrv_Init();
    #else
    /* Init CAN */
    FblCanDrv_Init();
    #endif
    
    /* Init Components */
    FblComp_Init();

    /* Init Security */
    (void)FblSec_Init();
    
    #if(COMM_PROTOCOL == LIN_PROTOCOL)
    /* Init TP */
    VTP_LIN_Init();
    #else
    VTP_Init();
    #endif
    /* Init UDS Stack */
	#ifdef KWP_PROTOCOL
	(void)kwpdiag_init();
	KwpMgr_Init();
	#else
    (void)udsdiag_init();

    /* Init UDS Manager */
    UdsMgr_Init();
	#endif
    
}

/*============================================================================
 ** Function Name:    FblMain_DeInit
 **
 ** Visibility:       Private
 **
 ** Description:      This function is deinitialize FBL.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
static void FblMain_DeInit(void)
{  
    
    // DeInit Components
    FblComp_DeInit();
	
    // DeInit Statup
    FblStartup_DeInit();
    
   
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
Date              : 26-SEP-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
