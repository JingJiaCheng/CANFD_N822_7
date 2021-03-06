#ifndef GPT_CFG_H
#define GPT_CFG_H

/** \brief AUTOSAR Gpt GPT Driver
 **
 ** This file contains the configuration of the AUTOSAR module Gpt.
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
#include <Os.h>
#include <Gpt_Cfg_Der.h>
#include <ErrorCalloutHandler.h>
#include <Wdg_Cbk.h>
#include <TmExt_Cfg.h>
#include <StpIfCdd.h>

/*==================[macros]================================================*/
#define GPT_GEN_MODULE_ID                   100U
#define GPT_GEN_VENDOR_ID                   66U
#define GPT_GEN_AR_RELEASE_MAJOR_VERSION    4U
#define GPT_GEN_AR_RELEASE_MINOR_VERSION    0U
#define GPT_GEN_AR_RELEASE_REVISION_VERSION 3U
#define GPT_GEN_SW_MAJOR_VERSION            1U
#define GPT_GEN_SW_MINOR_VERSION            0U
#define GPT_GEN_SW_PATCH_VERSION            27U

/* User configured API defines */
#define GPT_VERSION_INFO_API                STD_ON
#define GPT_DEINIT_API                      STD_ON
#define GPT_TIME_ELAPSED_API                STD_ON
#define GPT_TIME_REMAINING_API              STD_ON
#define GPT_ENABLE_DISABLE_NOTIFICATION_API STD_ON
#define GPT_WAKEUP_FUNCTIONALITY_API        STD_OFF
#define GPT_SAFETY_FUNCTION_API             STD_ON


/* User configured DET defines */
#define GPT_DEV_ERROR_DETECT                STD_ON

/* User configured wakeup source reporting defines */
#define GPT_REPORT_WAKEUP_SOURCE            STD_OFF

/** This parameter defines the existence and the name of a callout function that is
 called each time an error was detected.
 The function has to have the following parameters: (ModuleId: uint16,
 InstanceId: uint8, ApiId: uint8, ErrorId: uint8) */
#define GPT_ERROR_CALLOUT_FUNCTION ErrorCalloutHandler


/* Number of channels
*/
#define GPT_N_CHANNELS_DEFAULT  7U


/* Driver configuration
*/
#define GPT_DRIVERCONFIG_DEFAULT  \
{                                 \
    &Gpt_ChannelConfigDefault[0], \
    GPT_N_CHANNELS_DEFAULT,       \
    (uint8)((uint8)((uint8)GPT_FRT_APBIF << GPT_FRT   ) |  \
            (uint8)((uint8)GPT_BTM_APBIF << GPT_BTIMER) |  \
            (uint8)((uint8)GPT_RLT_APBIF << GPT_RLT   ) )  \
}

/* Timer channels
*/
#define GPT_CHANNELCONFIG_DEFAULT              \
{                                              \
  {   /* GptChCfg_60MHzFRT */            \
    GPT_ARCH_CHANNELCONFIG_0                   \
    GPT_FRT32,                                 \
    GPT_FRT,                                   \
    (Gpt_NotificationFunctionType)NULL_PTR,                       \
    NULL_PTR,                    \
    GPT_ARCH_TIMERMAX_0,                       \
    GPT_MODE_CONTINUOUS|GPT_WAKEUPSOURCE_FALSE|GPT_DEBUG_FALSE|GPT_DBGR_FALSE,   \
    0U,                                        \
    (Gpt_GetTblType)&Gpt_GetTbl_GPT_FRT        \
  },                                             \
  {   /* Wdg_TO */            \
    GPT_ARCH_CHANNELCONFIG_1                   \
    GPT_RLT32,                                 \
    GPT_RLT,                                   \
    &Wdg_66_IA_Cbk_GptNotificationTimeout,                       \
    GPT_RLT_32_SSSR_BASE,                    \
    GPT_ARCH_TIMERMAX_1,                       \
    GPT_MODE_ONESHOT|GPT_WAKEUPSOURCE_FALSE|GPT_DEBUG_TRUE|GPT_DBGR_TRUE,    \
    0U,                                        \
    (Gpt_GetTblType)&Gpt_GetTbl_GPT_RLT        \
  },                                             \
  {   /* Wdg_Trg */            \
    GPT_ARCH_CHANNELCONFIG_2                   \
    GPT_RLT32,                                 \
    GPT_RLT,                                   \
    &Wdg_66_IA_Cbk_GptNotificationTrigger,                       \
    GPT_RLT_33_SSSR_BASE,                    \
    GPT_ARCH_TIMERMAX_2,                       \
    GPT_MODE_CONTINUOUS|GPT_WAKEUPSOURCE_FALSE|GPT_DEBUG_TRUE|GPT_DBGR_TRUE,    \
    1U,                                        \
    (Gpt_GetTblType)&Gpt_GetTbl_GPT_RLT        \
  },                                             \
  {   /* TmExt */            \
    GPT_ARCH_CHANNELCONFIG_3                   \
    GPT_FRT32,                                 \
    GPT_FRT,                                   \
    &TmExt_UpdateFreeRunningCounter,                       \
    NULL_PTR,                    \
    GPT_ARCH_TIMERMAX_3,                       \
    GPT_MODE_CONTINUOUS|GPT_WAKEUPSOURCE_FALSE|GPT_DEBUG_FALSE|GPT_DBGR_FALSE,   \
    4U,                                        \
    (Gpt_GetTblType)&Gpt_GetTbl_GPT_FRT        \
  },                                             \
  {   /* Rtm_FRT */            \
    GPT_ARCH_CHANNELCONFIG_4                   \
    GPT_FRT32,                                 \
    GPT_FRT,                                   \
    (Gpt_NotificationFunctionType)NULL_PTR,                       \
    NULL_PTR,                    \
    GPT_ARCH_TIMERMAX_4,                       \
    GPT_MODE_CONTINUOUS|GPT_WAKEUPSOURCE_FALSE|GPT_DEBUG_FALSE|GPT_DBGR_FALSE,   \
    1U,                                        \
    (Gpt_GetTblType)&Gpt_GetTbl_GPT_FRT        \
  },                                             \
  {   /* OsTickTimer */            \
    GPT_ARCH_CHANNELCONFIG_5                   \
    GPT_RLT32,                                 \
    GPT_RLT,                                   \
    (Gpt_NotificationFunctionType)NULL_PTR,                       \
    GPT_RLT_34_SSSR_BASE,                    \
    GPT_ARCH_TIMERMAX_5,                       \
    GPT_MODE_CONTINUOUS|GPT_WAKEUPSOURCE_FALSE|GPT_DEBUG_FALSE|GPT_DBGR_TRUE,   \
    2U,                                        \
    (Gpt_GetTblType)&Gpt_GetTbl_GPT_RLT        \
  },                                             \
  {   /* StpCdd */            \
    GPT_ARCH_CHANNELCONFIG_6                   \
    GPT_FRT32,                                 \
    GPT_FRT,                                   \
    &StpIf_TimerISR,                       \
    NULL_PTR,                    \
    GPT_ARCH_TIMERMAX_6,                       \
    GPT_MODE_CONTINUOUS|GPT_WAKEUPSOURCE_FALSE|GPT_DEBUG_FALSE|GPT_DBGR_FALSE,   \
    3U,                                        \
    (Gpt_GetTblType)&Gpt_GetTbl_GPT_FRT        \
  }                                              \
}

/* Maximum number of channels over all configurations
 * (for the size of the channel state array)
*/
#define GPT_N_CHANNELS_MAX  7U

/* Timer channel identifiers
*/
#define GptConf_GptChannelConfiguration_GptChCfg_60MHzFRT  0U
#define GptConf_GptChannelConfiguration_Wdg_TO  1U
#define GptConf_GptChannelConfiguration_Wdg_Trg  2U
#define GptConf_GptChannelConfiguration_TmExt  3U
#define GptConf_GptChannelConfiguration_Rtm_FRT  4U
#define GptConf_GptChannelConfiguration_OsTickTimer  5U
#define GptConf_GptChannelConfiguration_StpCdd  6U


#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)
/* wakeup id dependent configuration values */
#define GPT_WAKEUP_SOURCE_CFG_INIT \
{                                  \
  0x00000000U,                     \
  0x00000000U,                     \
  0x00000000U,                     \
  0x00000000U,                     \
  0x00000000U,                     \
  0x00000000U,                     \
  0x00000000U                      \
}
#endif /* ifdef GPT_REPORT_WAKEUP_SOURCE */

/*==================[type definitions]======================================*/
/*==================[external function declarations]========================*/
#define GPT_START_SEC_CODE
#include <MemMap.h>

/** \brief GPT_ISR_Vector_176_CAT1()
 **
 ** Gpt interrupt service routine (Cat1):
 ** Entry point for FRT_0's interrupt vector 176.
 **
 */
extern ISR_NATIVE(GPT_ISR_Vector_176_CAT1);

/** \brief GPT_ISR_Vector_176_CAT2()
 **
 ** Gpt interrupt service routine (Cat2):
 ** Entry point for FRT_0's interrupt vector 176.
 **
 */
extern ISR(GPT_ISR_Vector_176_CAT2);

/** \brief GPT_ISR_Vector_177_CAT1()
 **
 ** Gpt interrupt service routine (Cat1):
 ** Entry point for FRT_1's interrupt vector 177.
 **
 */
extern ISR_NATIVE(GPT_ISR_Vector_177_CAT1);

/** \brief GPT_ISR_Vector_177_CAT2()
 **
 ** Gpt interrupt service routine (Cat2):
 ** Entry point for FRT_1's interrupt vector 177.
 **
 */
extern ISR(GPT_ISR_Vector_177_CAT2);

/** \brief GPT_ISR_Vector_179_CAT1()
 **
 ** Gpt interrupt service routine (Cat1):
 ** Entry point for FRT_3's interrupt vector 179.
 **
 */
extern ISR_NATIVE(GPT_ISR_Vector_179_CAT1);

/** \brief GPT_ISR_Vector_179_CAT2()
 **
 ** Gpt interrupt service routine (Cat2):
 ** Entry point for FRT_3's interrupt vector 179.
 **
 */
extern ISR(GPT_ISR_Vector_179_CAT2);

/** \brief GPT_ISR_Vector_180_CAT1()
 **
 ** Gpt interrupt service routine (Cat1):
 ** Entry point for FRT_4's interrupt vector 180.
 **
 */
extern ISR_NATIVE(GPT_ISR_Vector_180_CAT1);

/** \brief GPT_ISR_Vector_180_CAT2()
 **
 ** Gpt interrupt service routine (Cat2):
 ** Entry point for FRT_4's interrupt vector 180.
 **
 */
extern ISR(GPT_ISR_Vector_180_CAT2);

/** \brief GPT_ISR_Vector_168_CAT1()
 **
 ** Gpt interrupt service routine (Cat1):
 ** Entry point for RLT_32's interrupt vector 168.
 **
 */
extern ISR_NATIVE(GPT_ISR_Vector_168_CAT1);

/** \brief GPT_ISR_Vector_168_CAT2()
 **
 ** Gpt interrupt service routine (Cat2):
 ** Entry point for RLT_32's interrupt vector 168.
 **
 */
extern ISR(GPT_ISR_Vector_168_CAT2);

/** \brief GPT_ISR_Vector_169_CAT1()
 **
 ** Gpt interrupt service routine (Cat1):
 ** Entry point for RLT_33's interrupt vector 169.
 **
 */
extern ISR_NATIVE(GPT_ISR_Vector_169_CAT1);

/** \brief GPT_ISR_Vector_169_CAT2()
 **
 ** Gpt interrupt service routine (Cat2):
 ** Entry point for RLT_33's interrupt vector 169.
 **
 */
extern ISR(GPT_ISR_Vector_169_CAT2);

/** \brief GPT_ISR_Vector_170_CAT1()
 **
 ** Gpt interrupt service routine (Cat1):
 ** Entry point for RLT_34's interrupt vector 170.
 **
 */
extern ISR_NATIVE(GPT_ISR_Vector_170_CAT1);

/** \brief GPT_ISR_Vector_170_CAT2()
 **
 ** Gpt interrupt service routine (Cat2):
 ** Entry point for RLT_34's interrupt vector 170.
 **
 */
extern ISR(GPT_ISR_Vector_170_CAT2);


#define GPT_STOP_SEC_CODE
#include <MemMap.h>

/*==================[internal function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[internal constants]====================================*/
/*==================[external data]=========================================*/
/*==================[internal data]=========================================*/
/*==================[external function definitions]=========================*/
/*==================[internal function definitions]=========================*/

#endif /* GPT_CFG_H  */
/*==================[end of file]===========================================*/
