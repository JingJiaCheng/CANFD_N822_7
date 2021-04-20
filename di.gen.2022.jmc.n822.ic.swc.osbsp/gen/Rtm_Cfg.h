/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2013. Visteon Corporation owns all rights to           *
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
*  File Name         :  Rtm_Cfg.h                                            *
*  Module Short Name :  Rtm_Cfg_H                                            *
*  Description       :  This is a generated file.                            *
*                                                                            *
*                                                                            *
* Organization     :  Driver Information Software Section,                   *
*                     Visteon Software Operation                             *
*                     Visteon Corporation                                    *
*                                                                            *
* ---------------------------------------------------------------------------*
* Compiler Name    :  GHS Multi                                              *
* Target Hardware  :  Platform Independent                                   *
*                                                                            *
******************************************************************************/
#ifndef RTM_CFG_H
#define RTM_CFG_H

/* RTM_ENABLED: Define this macro if you need to take measurement */
//#define RTM_ENABLED
#ifdef RTM_ENABLED
/*****************************************************************************
*                            Include files                                   *
******************************************************************************/
#include "CDD_Test.h"

/*****************************************************************************
*                                 Macro Definitions                          *
*----------------------------------------------------------------------------*
* Definition of macro shall be followed by a comment that explains the       *
* purpose of the macro.                                                      *
******************************************************************************/

#define RTM_UP_FRT                             1
#define RTM_DOWN_FRT                           0

#define RTM_TASK_ISR                           0
#define RTM_NO_TASK_NO_ISR                     1

#define RTM_MEASUREMENT_SECTION_COUNT          60 /* 50+10 Runnables*/
#define RTM_NUMBER_OF_TASKS                    20
#define RTM_CPU_LOAD_MEASUREMENT_ID            0
#define RTM_MAINFCT_CYCLE_TIME                 100
#define RTM_TICKS_PER_MILISECOND               1000
#define RTM_FRT                                RTM_UP_FRT
#define RTM_CPU_CLOCK_IN_MHZ                   160 /* Amethyst */

#define RTM_GET_CURRENT_TIME(x)                CDD_GetRtmTimerCount(x); 

#define RTM_CONFIG_PARAM \
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_TASK_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR,\
    RTM_NO_TASK_NO_ISR \

/*****************************************************************************
*                                 Type Declarations                          *
******************************************************************************/



/*****************************************************************************
*                                 Locally used Variable Declarations         *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

/*****************************************************************************
*                                 Externally used Variable Declarations       *
******************************************************************************/
extern const uint8 Rtm_ConfigParam[RTM_MEASUREMENT_SECTION_COUNT];

/*****************************************************************************
*                              Limited Scope Prototypes                      *
******************************************************************************/

/*****************************************************************************
*                               Functions                                    *
******************************************************************************/
void Rtm_EnterCriticalSection(void);

void Rtm_ExitCriticalSection(void);

#endif /* RTM_ENABLED*/
#endif

