#if !defined(FBL_TIMER_H)
#define FBL_TIMER_H

/* ===========================================================================
**
**                       CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2009.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**  its rights under all copyright laws to protect this work as a published
**  work, when appropriate.  Those having access to this work may not copy it,
**  use it, modify it or disclose the information contained in it without the
**  written authorization of Visteon Corporation.
**
** =========================================================================*/



/* ===========================================================================

  							Name   : fbl_timer.h

  					Description	   : Fbl Timer Implementation

  					Organization   : Multiplex Core Technology

============================================================================*/

/*******************************************************************************
================================================================================
 								FileInclusions                                 
================================================================================
*******************************************************************************/

#include "system.h"


/*******************************************************************************
================================================================================
 								Global variables                               
================================================================================
*******************************************************************************/

//extern volatile un_ppc_pcfgrn_t* punXcvrPcfgrn;


/*******************************************************************************
================================================================================
 								Macros                                        
================================================================================
*******************************************************************************/

/**  Timer ID definitions  **/
#define FBL_TIMER_0             0u
#define FBL_TIMER_MAX           1u

#define FblTimerReset()           (FRT00.unTCCSC.stcField.u1IRQZFC=1u)
#define FblTimerGet()             (FRT00.unTCCS.stcField.u1IRQZF)
/*This Following Macro is used in security algorithm */
#define FblGetTimer16BitValue()	  (FRT00.unTCDT.au16Halfword[0])
#define FblGetTimer32BitValue()	  (FRT00.unTCDT.u32Register)


#define FblTimerDrv_IsElapsed(id)   (FRT00.unTCCS.stcField.u1IRQZF==1u)
#define FblTimerDrv_GetCount(id)    FblGetTimer32BitValue()
#define FblTimerDrv_Reset(id)       FblTimerReset()
#define FblTimerDrv_Init(id,ms)     FblTimerInit()
#define FblTimerDrv_Stop(id)        FblTimerStop()

/*******************************************************************************
================================================================================
																			   
        Frequency         = 160MHz											   
        RequireTimePeriod = 1mSec 											   
		TimeTicks = Frequency*RequireTimePeriod                                
		TimeTicks = 160MHz*1mSec                                               
		TimeTicks = 160000                                                     
		TimeTicks = 0x27100H                                                   
================================================================================
*******************************************************************************/

#define  TCNT_COUNTS_PER_ONE_MILLI_SEC       0x7530u//0xEA60u 


/*******************************************************************************
================================================================================
								Global Prototypes                               
================================================================================
*******************************************************************************/

void FblTimerInit( void );
void FblTimerStop(void);
void FblFRT_Init( void );

#endif /*FBL_TIMER_H */

/*******************************************************************************
================================================================================
				RTC    REVISION     NOTES									   
  		For each change to this file, be sure to record:					   
  		1.   Who made the change and when the change was made.				   
  		2.   Why the change was made and the intended result.				   
  																			   
  		Date      version     By         Reason For Change					   
================================================================================  																			   
       10-03-16      1      PSATHISH      Initial version						   

================================================================================
*******************************************************************************/
