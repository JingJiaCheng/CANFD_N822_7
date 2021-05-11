/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2014. Visteon Corporation owns all rights to           *
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

File Name        :  idd_handler.h
Module Short Name:  Input digital debounce handler
VOBName          :  infrastructure.core.rl78\idd.input.debounce.rl78.d1a
Author           :  vbalakr3
Description      :  This file contains routine for handling input digital
                    debounce functionality

Organization     :  Driver Information Software Section,
                    Visteon Corporation
******************************************************************************/
#ifndef IDD_OS_IF_H
#define IDD_OS_IF_H


/*****************************************************************************
*                                 System Includes                            *
******************************************************************************/
#include "idd_sys.h"

#ifndef EXTERN
#define EXTERN extern
#endif

/*****************************************************************************
*                                 Constant Declarations                      *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the constant.                                                        *
* purpose, unit, and resolution                                              *
******************************************************************************/

/*****************************************************************************
*                                 Type Decleration                           *
*----------------------------------------------------------------------------*
* Decleration of type shall be accompanied by a comment that explains the    *
* purpose and usage of the type.                                             *
******************************************************************************/



/*****************************************************************************
*                                 Global Variable Declarations               *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, resolution, Valid Range and ValidityCheck *
******************************************************************************/

/*****************************************************************************
*                                 Global Function Prototypes                 *
******************************************************************************/
EXTERN void idd_trigger_event_task(void);
EXTERN UINT8 idd_save_int_status_and_disable(void);
EXTERN void idd_restore_int_status(UINT8 x);
EXTERN void idd_delay_micro_seconds(UINT16 x);
EXTERN BOOLEAN idd_check_block_contexts(void);

#define IDD_TRIGGER_EVENT_TASK            idd_trigger_event_task
#define IDD_GET_CURRENT_CONTEXT()         idd_get_scheduler_context()
#define IDD_SAVE_AND_DISABLE_INTERRUPTS   idd_save_int_status_and_disable
#define IDD_RESTORE_INTERRUPTS(x)         idd_restore_int_status(x)
#define IDD_DELAY_MICRO_SEC(x)            idd_delay_micro_seconds(x)

#define idd_handler_KSColdInit          idd_handler_init_type1
#define idd_handler_KSWarmInit          idd_handler_init_type2
#define idd_handler_KSSleep             idd_handler_deinit
#define idd_handler_KSWakeup            idd_handler_init_type3
#define idd_handler_KSRRobin            idd_handler_round_robin
#define idd_handler_KSFastNPTT          idd_handler_timed_task

/*****************************************************************************
*                                 Locally used Variable Declarations         *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

/*****************************************************************************
*                              Limited Scope Prototypes                      *
******************************************************************************/

/*****************************************************************************
*                   Functions                                                *
******************************************************************************/

#undef EXTERN

/*****************************************************************************
*     End of File
*
*******************************************************************************/
/*****************************************************************************
*   for each change to this file, be sure to record:                         *
*      1.  who made the change and when the change was made                  *
*      2.  why the change was made and the intended result                   *
*   Following block needs to be repeated for each change
******************************************************************************
*   Note: In the traceability column we need to trace back to the Design Doc.*
*   For the initial version it is traced to the Design Document section.     *
*   For further changes it shall trace to the source of the change which may *
*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  *
*   other reason                                                             *
******************************************************************************/
/**-------------------------------------------------------------------------*/
/*Date              : 19-May-2014                                           */
/*By                : ssebast1                                              */
/*Traceability      : Newton 2.0                                            */
/*Change Description: Initial Version                                       */
/*--------------------------------------------------------------------------*/

#endif /* IDD_OS_IF_H */
