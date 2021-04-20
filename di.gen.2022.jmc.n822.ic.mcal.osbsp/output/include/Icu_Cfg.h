
#ifndef ICU_CFG_H
#define ICU_CFG_H

/** \file
 ** \brief AUTOSAR Icu ICU Driver
 **
 ** This file contains the all configuration declarations for
 ** the AUTOSAR module Icu that are target independent.
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

/*==================[includes]==============================================*/
#include <Icu_Cfg_Der.h>
#include <Det.h>
#include <EcuMExt.h>

/*==================[macros]================================================*/
#define ICU_GEN_MODULE_ID                   (122U)  /* Module ID */
#define ICU_GEN_VENDOR_ID                   (66U)   /* Vendor ID */
#define ICU_GEN_AR_RELEASE_MAJOR_VERSION    (4U)    /* Autosar Release Major Version */
#define ICU_GEN_AR_RELEASE_MINOR_VERSION    (0U)    /* Autosar Release Minor Version */
#define ICU_GEN_AR_RELEASE_REVISION_VERSION (3U)    /* Autosar Release Revision Version */
#define ICU_GEN_SW_MAJOR_VERSION            (1U)    /* Software Major Version */
#define ICU_GEN_SW_MINOR_VERSION            (0U)    /* Software Minor Version */
#define ICU_GEN_SW_PATCH_VERSION            (28U)    /* Software Patch Version */


#define ICU_DEV_ERROR_DETECT                (STD_ON)

/* User configured API defines */

#define ICU_DE_INIT_API                     (STD_ON)

#define ICU_DISABLE_WAKEUP_API              (STD_ON)

#define ICU_EDGE_COUNT_API                  (STD_ON)

#define ICU_EDGE_DETECT_API                 (STD_ON)

#define ICU_ENABLE_WAKEUP_API               (STD_ON)

#define ICU_GET_DUTY_CYCLE_VALUES_API       (STD_ON)

#define ICU_GET_INPUT_STATE_API             (STD_ON)

#define ICU_GET_TIME_ELAPSED_API            (STD_ON)

#define ICU_GET_VERSION_INFO_API            (STD_ON)

#define ICU_SET_MODE_API                    (STD_ON)

#define ICU_SIGNAL_MEASUREMENT_API          (STD_ON)

#define ICU_TIMESTAMP_API                   (STD_ON)

#define ICU_WAKEUP_FUNCTIONALITY_API        (STD_ON)

#define ICU_SAFETY_FUNCTION_API             (STD_ON)
/** This parameter defines the existence and the name of a callout function that is
 called each time an error was detected.
 The function has to have the following parameters: (ModuleId: uint16,
 InstanceId: uint8, ApiId: uint8, ErrorId: uint8) */

#define ICU_ERROR_CALLOUT_FUNCTION Det_ReportError


/* \brief additional derivative dependent ICU channel configuration values */
#define IcuConf_IcuChannel_IcuChannel_P_CAN_MCU_RXD  (0u)
#define IcuConf_IcuChannel_IcuChannel_B_CAN_MCU_RXD  (1u)
#define IcuConf_IcuChannel_IcuChannel_MDI_IGN_INT  (2u)

#define ICU_NUMBER_OF_CHANNELS 3U

#define ICU_NUMBER_OF_EDGE_DETECT_CHANNELS 3U

#ifdef ICU_REPORT_WAKEUP_SOURCE
#error ICU_REPORT_WAKEUP_SOURCE must not be defined
#endif
#define ICU_REPORT_WAKEUP_SOURCE  1

#ifdef ICU_REPORT_WAKEUP_SOURCE
/* \brief additional wakeup dependent configuration values */
#define ICU_WAKEUP_SOURCE_CFG_INIT \
{ \
  0x00000000U, \
  0x00000000U, \
  0x00000000U  \
}
#endif /* ifdef ICU_REPORT_WAKEUP_SOURCE */

#define ICU_CONFIG_DATA                       \
{                                             \
  &Icu_DriverStateData,                       \
  3U,  \
  ICU_BASE_ADDR_EXTINT_0,  \
  0x00000121U,                                 \
  0x00000000U,                                 \
  Icu_ChannelConfigData                       \
}

#define ICU_CHANNEL_CONFIG_DATA \
{                               \
  { /* IcuChannel_P_CAN_MCU_RXD: EXTINT channel 0 */ \
    0U, /* channel ID */  \
    0U, /* resource ID */  \
    ICU_EXTINT, /* icu channel resource kind */  \
    TRUE, /* wakeup capability */  \
    TRUE, /* Register Exist : ICSC, ICSS */  \
    ICU_FALLING_EDGE, /* activation condition */  \
    ICU_MODE_SIGNAL_EDGE_DETECT, /* measurement mode */  \
    &Icu_ChannelCommonStateData[0U], /* channel common state */  \
    &Icu_EdgeDetectExtensionConfigData[0U], /* channel extension configuration */  \
    ICU_BASE_ADDR_EXTINT_0, /* bass address */  \
    &Icu_GetFuncTable_ExtInt  /* get function table */  \
  },  \
  { /* IcuChannel_B_CAN_MCU_RXD: EXTINT channel 5 */ \
    1U, /* channel ID */  \
    5U, /* resource ID */  \
    ICU_EXTINT, /* icu channel resource kind */  \
    TRUE, /* wakeup capability */  \
    TRUE, /* Register Exist : ICSC, ICSS */  \
    ICU_FALLING_EDGE, /* activation condition */  \
    ICU_MODE_SIGNAL_EDGE_DETECT, /* measurement mode */  \
    &Icu_ChannelCommonStateData[1U], /* channel common state */  \
    &Icu_EdgeDetectExtensionConfigData[1U], /* channel extension configuration */  \
    ICU_BASE_ADDR_EXTINT_5, /* bass address */  \
    &Icu_GetFuncTable_ExtInt  /* get function table */  \
  },  \
  { /* IcuChannel_MDI_IGN_INT: EXTINT channel 8 */ \
    2U, /* channel ID */  \
    8U, /* resource ID */  \
    ICU_EXTINT, /* icu channel resource kind */  \
    TRUE, /* wakeup capability */  \
    TRUE, /* Register Exist : ICSC, ICSS */  \
    ICU_RISING_EDGE, /* activation condition */  \
    ICU_MODE_SIGNAL_EDGE_DETECT, /* measurement mode */  \
    &Icu_ChannelCommonStateData[2U], /* channel common state */  \
    &Icu_EdgeDetectExtensionConfigData[2U], /* channel extension configuration */  \
    ICU_BASE_ADDR_EXTINT_8, /* bass address */  \
    &Icu_GetFuncTable_ExtInt  /* get function table */  \
  }   \
}

#define ICU_EDGEDETECT_EXTENSIONCONFIG_DATA \
{                               \
  { /* IcuChannel_P_CAN_MCU_RXD: EXTINT channel 0 */ \
    &EcuMExt_DisplayFunDetected  /* notification function */  \
  },  \
  { /* IcuChannel_B_CAN_MCU_RXD: EXTINT channel 5 */ \
    &EcuMExt_VCANRxIntDetected  /* notification function */  \
  },  \
  { /* IcuChannel_MDI_IGN_INT: EXTINT channel 8 */ \
    &EcuMExt_IGNIntDetected  /* notification function */  \
  }   \
}



#define ICU_CHANNEL_COMMON_STATE_DATA \
{                               \
  { /* IcuChannel_P_CAN_MCU_RXD: EXTINT channel 0 */ \
    FALSE,  \
    FALSE,  \
    ICU_NOT_STARTED,  \
    ICU_INIT_EDGE,  \
    &Icu_EdgeDetectChannelStateData[0U]  \
  },  \
  { /* IcuChannel_B_CAN_MCU_RXD: EXTINT channel 5 */ \
    FALSE,  \
    FALSE,  \
    ICU_NOT_STARTED,  \
    ICU_INIT_EDGE,  \
    &Icu_EdgeDetectChannelStateData[1U]  \
  },  \
  { /* IcuChannel_MDI_IGN_INT: EXTINT channel 8 */ \
    FALSE,  \
    FALSE,  \
    ICU_NOT_STARTED,  \
    ICU_INIT_EDGE,  \
    &Icu_EdgeDetectChannelStateData[2U]  \
  }   \
}

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/
#define ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED
/* PRQA S 5087 1 *//* This inclusion is required by AUTOSAR specification. */
#include <MemMap.h>


#define ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/* PRQA S 5087 1 *//* This inclusion is required by AUTOSAR specification. */
#include <MemMap.h>

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef ICU_CFG_H */
/*==================[end of file]===========================================*/

