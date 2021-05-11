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
File Name        :  idd_driver.h
Module Short Name:  Input digital debounce handler
VOBName          :  infrastructure.core.rl78\idd.input.debounce.rl78.d1a
Author           :  ssebast1
Description      :  Package Renesas RL78

Description      :  This file contains routine for driving the digital inputs
                    and ADC peripherals

Organization     :  Driver Information Software Section,
                    Visteon Corporation
------------------------------------------------------------------------------
Compiler Name    :  IAR
Target Processor :  RL78/D1A
******************************************************************************/
#ifndef IDD_DRIVER_H
#define IDD_DRIVER_H

/*****************************************************************************
*                                 System Includes                            *
******************************************************************************/
#include "idd_os_if.h"

#ifndef IDD_DRIVER_C
#define EXTERN extern
#else
#define EXTERN 
#endif

/*****************************************************************************
*                                 Constant Declarations                      *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the constant.                                                        *
* purpose, unit, and resolution                                              *
******************************************************************************/
#define  IDD_AD_WAIT_COUNT                   200

#define IDD_PORT_WPREG_PPC(reg, data)                   \
{                                                   \
    un_ppc_keycdr_t wk;                             \
    uint32_t adr = (uint32_t)&(reg);                  \
    uint8_t size_key;                               \
    wk.au16Halfword[0] = adr & 0x7FFF;              \
    size_key = (sizeof(reg) >> 1) << 4;             \
    wk.au8Byte[3] = size_key | (0 << 6);            \
    PPC_KEYCDR = wk.u32Register;                    \
    wk.au8Byte[3] = size_key | (1 << 6);            \
    PPC_KEYCDR = wk.u32Register;                    \
    wk.au8Byte[3] = size_key | (2 << 6);            \
    PPC_KEYCDR = wk.u32Register;                    \
    wk.au8Byte[3] = size_key | (3 << 6);            \
    PPC_KEYCDR = wk.u32Register;                    \
    (reg) = (data);                                     \
}



#define IDD_PORT_WPREG_GPIO(reg, data)              \
{                                                   \
    un_gpio_keycdr_t wk;                            \
    uint32_t adr = (uint32_t)&(reg);                  \
    uint8_t size_key;                               \
    wk.au16Halfword[0] = adr & 0x7FFF;              \
    size_key = (sizeof(reg) >> 1) << 4;             \
    wk.au8Byte[3] = size_key | (0 << 6);            \
    GPIO_KEYCDR = wk.u32Register;                   \
    wk.au8Byte[3] = size_key | (1 << 6);            \
    GPIO_KEYCDR = wk.u32Register;                   \
    wk.au8Byte[3] = size_key | (2 << 6);            \
    GPIO_KEYCDR = wk.u32Register;                   \
    wk.au8Byte[3] = size_key | (3 << 6);            \
    GPIO_KEYCDR = wk.u32Register;                   \
    (reg) = (data);                                     \
}


#define IDD_PORT_WPREG_RIC(reg, data)                   \
{                                                   \
    un_ric_keycdr_t wk;                             \
    uint32_t adr = (uint32_t)&(reg);                  \
    uint8_t size_key;                               \
    wk.au16Halfword[0] = adr & 0x7FFF;              \
    size_key = (sizeof(reg) >> 1) << 4;             \
    wk.au8Byte[3] = size_key | (0 << 6);            \
    RIC_KEYCDR = wk.u32Register;                    \
    wk.au8Byte[3] = size_key | (1 << 6);            \
    RIC_KEYCDR = wk.u32Register;                    \
    wk.au8Byte[3] = size_key | (2 << 6);            \
    RIC_KEYCDR = wk.u32Register;                    \
    wk.au8Byte[3] = size_key | (3 << 6);            \
    RIC_KEYCDR = wk.u32Register;                    \
    (reg) = (data);                                     \
}


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
EXTERN void idd_driver_init(void);
EXTERN void idd_driver_deinit(void);
EXTERN void idd_driver_convert_hw_channel(UINT8 fl_hw_ch);
EXTERN UINT16 idd_driver_convert_get_10bit_ad(UINT8 fl_hw_ch);
EXTERN UINT16 idd_driver_get_10bit_ad(void);

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
/****************************************************************************
*   for each change to this file, be sure to record:                        *
*      1.  who made the change and when the change was made                 *
*      2.  why the change was made and the intended result                  *
*   Following block needs to be repeated for each change                    *
*****************************************************************************/
/**-------------------------------------------------------------------------*/
/*Date              :                                                       */
/*By                :                                                       */
/*Traceability      :                                                       */
/*Change Description:                                                       */
/*--------------------------------------------------------------------------*/
/**-------------------------------------------------------------------------*/
/*Date              : 06-Dec-2012                                           */
/*By                : vbalakr3                                              */
/*Traceability      : Initial Version                                       */
/*Change Description: Developed for Newton2.0                               */
/*--------------------------------------------------------------------------*/
/**-------------------------------------------------------------------------*/
/*Date              : 27-Mar-2014                                           */
/*By                : ssebast1                                              */
/*Traceability      : Newton 2.0 EOL Requirement                            */
/*Change Description: idd_driver_convert_hw_channel included for single hw  */
/*                    channel AD conversion.                                */
/*--------------------------------------------------------------------------*/
/**-------------------------------------------------------------------------*/
/*Date              : 8-May-2014                                            */
/*By                : ssebast1                                              */
/*Traceability      : Newton 2.0                                            */
/*Change Description: Modified to make AUTOSAR compliant                    */
/*--------------------------------------------------------------------------*/
#endif
