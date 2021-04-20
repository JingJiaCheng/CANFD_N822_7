/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2017. Visteon Corporation owns all rights to           *
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
*  File Name         :  WdgM_Cfg.c                                           *
*  Module Short Name :  WdgM_Cfg                                             *
*  Description       :  Generated File                                       *
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
#ifndef WDGM_C
#define WDGM_C

/*****************************************************************************
*                            Include files                                   *
******************************************************************************/
#include "WdgM_Cfg.h"
#include "SchM_Wdg.h"
/*****************************************************************************
*                                 Macro Definitions                          *
*----------------------------------------------------------------------------*
* Definition of macro shall be followed by a comment that explains the       *
* purpose of the macro.                                                      *
******************************************************************************/

/*****************************************************************************
*                                 Type Declarations                          *
******************************************************************************/

/*      {No of Transitions, Transition Index}    */
#define WDGM_DEADLINE_SUPERVISION_LIST \
        {0, 0},\
        {1, 0},\
        {0, 0},\
        {1, 1},\
        {1, 2}

/*      {DeadlineMax, DeadlineMin, SourceCPID}    */
#define WDGM_DEADLINE_TRANSITION_LIST \
        {0x0000FFFF, 0x000000FF, 0},\
        {0x00008FFF, 0x0000000F, 0},\
        {0x00008FFF, 0x0000000F, 1}

/*      {Expected, Max, Min, SupRefCycle} */
#define WDGM_ALIVE_SUPERVISION_LIST \
        {44, 0x0005, 0x0005, 0x000A},\
        {44, 0x000A, 0x0005, 0x000A}

/*      {Watchdog Timeout Value} */
#define WDGM_TRIGGER_VALUE_LIST \
        {500}

/*      {Supported Modes, Alive Failed Tolerance, Deadline Failed Tolerance, Alive SE, Deadline SE, */
/*      {WDGIF_SLOW_MODE, 0x0010,                 0x0005,                    1,        0,*/
/*       Alive Supervision Index, Deadline Supervision Index, Local State Change Callback, Alive SE Reference,         Deadline SE Reference} */
/*       0,                        0,                         NULL,                        WdgMAliveSupervisionRef[0], NULL}, \*/
#define WDGM_SUPERVISED_ENTITY_LIST \
        {WDGM_SLOW_MODE, 0x0010, 0x0005, 1, 0, 0, 0, NULL}, \
        {WDGM_SLOW_MODE, 0x0010, 0x0005, 0, 2, 0, 0, NULL}, \
        {WDGM_SLOW_MODE, 0x0010, 0x0005, 1, 3, 1, 2, NULL}

/*      {Initial Mode, Get OS Count function pointer, Global State Change Callback, No of SE, */
/*       No of Watchdog Devices, Expired SE Tolerance, SE Reference, Trigger Referance      } */
#define WDGM_CONFIG_PARAM_LIST \
        {WDGIF_SLOW_MODE, NULL, NULL, 3, 1, 0, WdgMSupervisedEntity, WdgMTrigger}


const WdgMDeadlineTransitionType    WdgMDeadlineTransition[WDGM_NO_OF_DEADLINE_TRANSITIONS] = \
                                    {WDGM_DEADLINE_TRANSITION_LIST};

const WdgMDeadlineSupervisionType   WdgMDeadlineSupervision[WDGM_NO_OF_DEADLINE_ENTITIES] = \
                                    {WDGM_DEADLINE_SUPERVISION_LIST};

const WdgMAliveSupervisionType      WdgMAliveSupervision[WDGM_NO_OF_ALIVE_ENTITIES] = \
                                    {WDGM_ALIVE_SUPERVISION_LIST};

const WdgMTriggerType               WdgMTrigger[WDGM_NO_OF_WDG_DEVICES] = \
                                    {WDGM_TRIGGER_VALUE_LIST};

const WdgMSupervisedEntityType      WdgMSupervisedEntity[WDGM_NO_OF_SUPERVISION_ENTITIES] = \
                                    {WDGM_SUPERVISED_ENTITY_LIST};

const WdgM_ConfigType               WdgM_ConfigParam[WDGM_NO_OF_CONFIGURATION_VARIANTS] = \
                                    {WDGM_CONFIG_PARAM_LIST};

void WdgM_EnterCriticalSection(void)
{
    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_0();
}
void WdgM_ExitCriticalSection(void)
{
    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_0();
}

#endif

