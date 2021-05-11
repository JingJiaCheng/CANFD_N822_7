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
*  File Name         :  I2c_Cfg.h                                            *
*  Module Short Name :  I2c_Cfg_H                                            *
*  Description       :  This is a generated file.                            *
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
#ifndef I2C_CFG_H
#define I2C_CFG_H

/*****************************************************************************
*                            Include files                                   *
******************************************************************************/
//#include "Std_Types.h"
#include "I2c_Types.h"
//#include "CDD_Test.h"
//#include "Eep24xx_Cbk.h"
/*****************************************************************************
*                                 Macro Definitions                          *
*----------------------------------------------------------------------------*
* Definition of macro shall be followed by a comment that explains the       *
* purpose of the macro.                                                      *
******************************************************************************/
#define CLK_LCP_IN_HZ               60000000

/* Ref: Spansion Hardware Manual (mn708-00006-e.pdf), Chapter5: Clock System; Section 3.3 */
/* I2c belongs to Common Peripheral 1 and the source clock for the same is CLK_LCP */
#define I2C_SOURCE_CLOCK            CLK_LCP_IN_HZ

/* Timeout = Main Function Periodicity x I2C_STOP_TIMEOUT_COUNT
If the I2c_MainFunction() Periodicity is 10ms, then to achieve the 100ms timeout, the I2C_STOP_TIMEOUT_COUNT needs to be configured as 10 */
#define I2C_STOP_TIMEOUT_COUNT  10

#define I2C_NUMBER_OF_SW_CHANNELS   2

#define I2C_NUMBER_OF_HW_CHANNELS   2

#define I2c_ToggleDevicePower       

/* For S6J32xx micro series, only two channels(MFS16, MFS17) are supported due to micro limitation */
#define I2C_MFS16_BASEADDRESS       (I2c_RegisterPtrType)0xB06A8000
#define I2C_MFS17_BASEADDRESS       (I2c_RegisterPtrType)0xB06A8400

/* For S6J3120 micro, MFS9 channel alone is prove out in the supported channels */
#define I2C_MFS09_BASEADDRESS       (I2c_RegisterPtrType)0xB4880400

/*****************************************************************************
*                                 Type Declarations                          *
******************************************************************************/

/* I2c SW Channel Configuration */
typedef struct 
{
    /* I2c Sequence Priority */
    UINT8 SeqPriority;
    /* I2c Hw unit associated */
    UINT8 HwUnit;
    /* End notification Function Call */
    void (*EndNotification)(void);

}I2c_ChannelConfigType;

/*****************************************************************************
*                                Globally  accessed Variable Declarations    *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

extern I2c_ChannelConfigType    I2c_ChannelConfig[I2C_NUMBER_OF_SW_CHANNELS];
extern I2c_ConfigType           I2c_Config[I2C_NUMBER_OF_HW_CHANNELS];

/*****************************************************************************
*                                 Locally used Variable Declarations         *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

/*****************************************************************************
*                               Functions                                    *
******************************************************************************/
extern void I2c_EnterCriticalSection(void);
extern void I2c_ExitCriticalSection(void);


#endif

/* end of file =============================================================*/
