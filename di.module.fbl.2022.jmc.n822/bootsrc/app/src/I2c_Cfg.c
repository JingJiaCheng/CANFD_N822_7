/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2015. Visteon Corporation owns all rights to           *
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
*  File Name         :  I2c_Cfg.c                                            *
*  Module Short Name :  I2c_Cfg                                              *
*  Description       :  Generated File                                       *
*                                                                            *
*                                                                            *
* Organization     :  Driver Information Software Section,                   *
*                     Visteon Software Operation                             *
*                     Visteon Corporation                                    *
*                                                                            *
* ---------------------------------------------------------------------------*
* Compiler Name    :  GHS Multi                                              *
* Target Hardware  :  S6J32xx series & S6J120 micro based Hardware Platform  *
*                                                                            *
******************************************************************************/
#ifndef I2C_CFG_C
#define I2C_CFG_C

/*****************************************************************************
*                            Include files                                   *
******************************************************************************/
#include "I2c_Cfg.h"
/*****************************************************************************
*                                 Macro Definitions                          *
*----------------------------------------------------------------------------*
* Definition of macro shall be followed by a comment that explains the       *
* purpose of the macro.                                                      *
******************************************************************************/
#define I2C_READ_HWUNIT     0
#define I2C_WRITE_HWUNIT    0

/*****************************************************************************
*                                 Type Declarations                          *
******************************************************************************/

/*****************************************************************************
*                                Globally  accessed Variable Declarations    *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

#define I2C_CHANNEL_CONFIG_PARAM \
    {0, I2C_READ_HWUNIT, NULL}, \
    {0, I2C_WRITE_HWUNIT, NULL}

#define I2C_CONFIG_PARAM \
    {I2C_MFS16_BASEADDRESS}, \
    {I2C_MFS17_BASEADDRESS}

I2c_ChannelConfigType    I2c_ChannelConfig[I2C_NUMBER_OF_SW_CHANNELS] = {I2C_CHANNEL_CONFIG_PARAM};
I2c_ConfigType           I2c_Config[I2C_NUMBER_OF_HW_CHANNELS] = {I2C_CONFIG_PARAM};

/*****************************************************************************
*                              Limited Scope Prototypes                      *
******************************************************************************/

/*****************************************************************************
*                               Functions                                    *
******************************************************************************/
void I2c_EnterCriticalSection(void)
{
//    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_0();
}
void I2c_ExitCriticalSection(void)
{
//    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_0();
}

#endif

/* end of file =============================================================*/


