/** \file
 ** \brief AUTOSAR Icu ICU Driver
 **
 ** This file contains all definitions of the configuration of the
 ** AUTOSAR module Icu that are target independent.
 **
 ** Do not edit this file manually.
 ** Any change might compromise the safety integrity level of
 ** the software partition it is contained in.
 **
 ** Product: SW-MCAL40-DRV
 **
 ** (c) 2014-2017, Cypress Semiconductor Corporation. All rights reserved.
 **
 ** Warranty and Disclaimer
 **
 ** This software product is property of Cypress Semiconductor Corporation or
 ** its subsidiaries.
 ** Any use and/or distribution rights for this software product are provided
 ** only under the Cypress Software License Agreement.
 ** Any use and/or distribution of this software product not in accordance with
 ** the terms of the Cypress Software License Agreement are unauthorized and
 ** shall constitute an infringement of Cypress intellectual property rights.
*/

/*==================[inclusions]============================================*/
#include <Icu.h>
#include <Icu_LibInterface.h>

#include <Icu_Irq.h>
/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/
#define ICU_START_SEC_CODE
#include <MemMap.h>

/** \brief ICU_ISR_Vector_24_Internal
 **
 ** Internal Icu interrupt service routine for vector 24 of channel EXTINT_0.
 **
 */
TS_STATIC_FUNC FUNC(void, ICU_CODE)ICU_ISR_Vector_24_Internal(void);

/** \brief ICU_ISR_Vector_29_Internal
 **
 ** Internal Icu interrupt service routine for vector 29 of channel EXTINT_5.
 **
 */
TS_STATIC_FUNC FUNC(void, ICU_CODE)ICU_ISR_Vector_29_Internal(void);

/** \brief ICU_ISR_Vector_32_Internal
 **
 ** Internal Icu interrupt service routine for vector 32 of channel EXTINT_8.
 **
 */
TS_STATIC_FUNC FUNC(void, ICU_CODE)ICU_ISR_Vector_32_Internal(void);

#define ICU_STOP_SEC_CODE
/* PRQA S 5087 1 *//* This inclusion is required by AUTOSAR specification. */
#include <MemMap.h>

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

#ifdef __MCAL_IO_DEFINE
#define ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED
/* PRQA S 5087 1 *//* This inclusion is required by AUTOSAR specification. */
#include <MemMap.h>

/* Area for debug (Irq Register) */
TS_STATIC_VAR VAR(uint32, ICU_DATA) Icu_IrcUnlockRegister;
TS_STATIC_VAR VAR(uint32, ICU_DATA) Icu_IrcCsrRegister;
TS_STATIC_VAR VAR(uint32, ICU_DATA) Icu_IrqhcRegister;

#define ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/* PRQA S 5087 1 *//* This inclusion is required by AUTOSAR specification. */
#include <MemMap.h>
#endif

/*==================[external function definitions]=========================*/
#define ICU_START_SEC_CODE
/* PRQA S 5087 1 *//* This inclusion is required by AUTOSAR specification. */
#include <MemMap.h>

/** \brief  ICU_ISR_Vector_24_CAT1 
 **
 ** Category 1 interrupt service routine for vector 24 of channel EXTINT_0.
 **
 */
ISR_NATIVE( ICU_ISR_Vector_24_CAT1 )
{
        ICU_ISR_Vector_24_Internal();
        /* PRQA S 303 1 *//* Reason for disabling: It is a necessary for HW access. */
        Icu_Cat1InternalArch_ISR( ICU_IRC_IRQHC_ADDR, ICU_INTERRUPTS_IRQ_NUMBER_24 );
}

/** \brief  ICU_ISR_Vector_24_CAT2 
 **
 ** Category 2 interrupt service routine for vector 24 of channel EXTINT_0.
 **
 */
ISR( ICU_ISR_Vector_24_CAT2 )
{
        ICU_ISR_Vector_24_Internal();
}

/** \brief  ICU_ISR_Vector_29_CAT1 
 **
 ** Category 1 interrupt service routine for vector 29 of channel EXTINT_5.
 **
 */
ISR_NATIVE( ICU_ISR_Vector_29_CAT1 )
{
        ICU_ISR_Vector_29_Internal();
        /* PRQA S 303 1 *//* Reason for disabling: It is a necessary for HW access. */
        Icu_Cat1InternalArch_ISR( ICU_IRC_IRQHC_ADDR, ICU_INTERRUPTS_IRQ_NUMBER_29 );
}

/** \brief  ICU_ISR_Vector_29_CAT2 
 **
 ** Category 2 interrupt service routine for vector 29 of channel EXTINT_5.
 **
 */
ISR( ICU_ISR_Vector_29_CAT2 )
{
        ICU_ISR_Vector_29_Internal();
}

/** \brief  ICU_ISR_Vector_32_CAT1 
 **
 ** Category 1 interrupt service routine for vector 32 of channel EXTINT_8.
 **
 */
ISR_NATIVE( ICU_ISR_Vector_32_CAT1 )
{
        ICU_ISR_Vector_32_Internal();
        /* PRQA S 303 1 *//* Reason for disabling: It is a necessary for HW access. */
        Icu_Cat1InternalArch_ISR( ICU_IRC_IRQHC_ADDR, ICU_INTERRUPTS_IRQ_NUMBER_32 );
}

/** \brief  ICU_ISR_Vector_32_CAT2 
 **
 ** Category 2 interrupt service routine for vector 32 of channel EXTINT_8.
 **
 */
ISR( ICU_ISR_Vector_32_CAT2 )
{
        ICU_ISR_Vector_32_Internal();
}


/*==================[internal function definitions]=========================*/
/** \brief ICU_ISR_Vector_24_Internal
 **
 ** Internal Icu interrupt service routine for vector 24 of channel EXTINT_0.
 **
 */
TS_STATIC_FUNC FUNC(void, ICU_CODE)ICU_ISR_Vector_24_Internal(void)
{
    if (Icu_GetInterruptRequestFlag_ISR( IcuConf_IcuChannel_IcuChannel_P_CAN_MCU_RXD ) == TRUE)
    {
        Icu_ReportWakeupSource( IcuConf_IcuChannel_IcuChannel_P_CAN_MCU_RXD );
        Icu_EdgeDetect_ExtInt_ISR( IcuConf_IcuChannel_IcuChannel_P_CAN_MCU_RXD );
    } else
    {
        /* not action */
    }
}

/** \brief ICU_ISR_Vector_29_Internal
 **
 ** Internal Icu interrupt service routine for vector 29 of channel EXTINT_5.
 **
 */
TS_STATIC_FUNC FUNC(void, ICU_CODE)ICU_ISR_Vector_29_Internal(void)
{
    if (Icu_GetInterruptRequestFlag_ISR( IcuConf_IcuChannel_IcuChannel_B_CAN_MCU_RXD ) == TRUE)
    {
        Icu_ReportWakeupSource( IcuConf_IcuChannel_IcuChannel_B_CAN_MCU_RXD );
        Icu_EdgeDetect_ExtInt_ISR( IcuConf_IcuChannel_IcuChannel_B_CAN_MCU_RXD );
    } else
    {
        /* not action */
    }
}

/** \brief ICU_ISR_Vector_32_Internal
 **
 ** Internal Icu interrupt service routine for vector 32 of channel EXTINT_8.
 **
 */
TS_STATIC_FUNC FUNC(void, ICU_CODE)ICU_ISR_Vector_32_Internal(void)
{
    if (Icu_GetInterruptRequestFlag_ISR( IcuConf_IcuChannel_IcuChannel_MDI_IGN_INT ) == TRUE)
    {
        Icu_ReportWakeupSource( IcuConf_IcuChannel_IcuChannel_MDI_IGN_INT );
        Icu_EdgeDetect_ExtInt_ISR( IcuConf_IcuChannel_IcuChannel_MDI_IGN_INT );
    } else
    {
        /* not action */
    }
}

#define ICU_STOP_SEC_CODE
/* PRQA S 5087 1 *//* This inclusion is required by AUTOSAR specification. */
#include <MemMap.h>

/*==================[end of file]===========================================*/
