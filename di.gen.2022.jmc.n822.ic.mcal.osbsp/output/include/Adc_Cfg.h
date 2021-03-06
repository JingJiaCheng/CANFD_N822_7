/** \brief Adc_Cfg.h
 **
 ** Interface Adc_Cfg
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

#ifndef ADC_CFG_H_INCLUDED
#define ADC_CFG_H_INCLUDED

/*==================[inclusions]============================================*/

#include <Adc_Types.h>
#include <ErrorCalloutHandler.h>
#include <IoHwAb_AdcCbk.h>

/*==================[macros]================================================*/

/*------------------[Cypress module config version identification]---------*/

#if (defined ADC_SW_MAJOR_VERSION) /* to prevent double declaration */
#error ADC_SW_MAJOR_VERSION already defined
#endif /* if (defined ADC_SW_MAJOR_VERSION) */

/** Driver config major version */
#define ADC_SW_MAJOR_VERSION 1U


#if (defined ADC_SW_MINOR_VERSION) /* to prevent double declaration */
#error ADC_SW_MINOR_VERSION already defined
#endif /* if (defined ADC_SW_MINOR_VERSION) */

/** Driver config minor version */
#define ADC_SW_MINOR_VERSION 1U


#if (defined ADC_SW_PATCH_VERSION) /* to prevent double declaration */
#error ADC_SW_PATCH_VERSION already defined
#endif /* if (defined ADC_SW_PATCH_VERSION) */

/** Driver config patch version */
#define ADC_SW_PATCH_VERSION 25U


/** Switches the Development Error Notification ON or OFF. */
#define ADC_DEV_ERROR_DETECT  STD_ON

/** Number of logical channels. */
#define ADC_CHANNEL_COUNT 8U

/** Number of configured groups. */
#define ADC_GROUP_COUNT 8U

/** Number of configured HW units. */
#define ADC_HWUNIT_COUNT 1U


/** Register base address of hardware unit HwUnit0.

    The macro can be overridden by the integrator via command line parameter.
    Doing so is at own risk! */
#ifndef ADC_REGISTER_BASE_HWUNIT0
  #define ADC_REGISTER_BASE_HWUNIT0 0xB48C0000U
#else
  /* Deviation from MISRA-C:2004 Rule 19.16:
     Unrecognized preprocessing directive has been ignored because of conditional inclusion directives.
     Justification: The preprocessing directive is a warning that indicates a special build 
     configuration which is not suitable for production software. */
  /* PRQA S 3115 1 */
  #warning ADC_REGISTER_BASE_HWUNIT0 is overridden by the environment. This is not intended for production software!
#endif


/* Definition of HW unit configuration. */
#define ADC_HWUNIT_CONFIGS \
{ \
  { /* HW unit 'AdcHwUnit_0' */ \
    ADC_REGISTER_BASE_HWUNIT0, /* RegisterBase */ \
    64U, /* LogicalChannelNumber */ \
    4U, /* ComparisonTime */ \
    4U, /* DefaultComparisonTime */ \
    { 44U, 0U, 0U, 0U }, /* SampTimes[4] */ \
    44U, /* DefaultSampTime */ \
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }, /* RangeComparatorUpperThresholds[8] */ \
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* RangeComparatorLowerThresholds[8] */ \
    /* This would be the values for the RC inverted selection bit: */ \
    /* { 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U } */ \
  } \
}


/* Definition of channel configuration. */
#define ADC_CHANNEL_CONFIGS \
{ \
  /* ----- Group 65792 begin ----- */ \
  { \
    31U, /* LogicalChannelId */ \
    6U, /* PhysicalChannelId */ \
    0U, /* SampTimeId */ \
    FALSE, /* RangeComparatorEnable */ \
    0U, /* RangeComparatorSelection */ \
    0U /* RangeComparatorInvertedRangeSelection */ \
  }, \
  /* ----- Group 65792 end   ----- */ \
  /* ----- Group 65793 begin ----- */ \
  { \
    32U, /* LogicalChannelId */ \
    10U, /* PhysicalChannelId */ \
    0U, /* SampTimeId */ \
    FALSE, /* RangeComparatorEnable */ \
    0U, /* RangeComparatorSelection */ \
    0U /* RangeComparatorInvertedRangeSelection */ \
  }, \
  /* ----- Group 65793 end   ----- */ \
  /* ----- Group 65794 begin ----- */ \
  { \
    28U, /* LogicalChannelId */ \
    28U, /* PhysicalChannelId */ \
    0U, /* SampTimeId */ \
    FALSE, /* RangeComparatorEnable */ \
    0U, /* RangeComparatorSelection */ \
    0U /* RangeComparatorInvertedRangeSelection */ \
  }, \
  /* ----- Group 65794 end   ----- */ \
  /* ----- Group 65795 begin ----- */ \
  { \
    27U, /* LogicalChannelId */ \
    32U, /* PhysicalChannelId */ \
    0U, /* SampTimeId */ \
    FALSE, /* RangeComparatorEnable */ \
    0U, /* RangeComparatorSelection */ \
    0U /* RangeComparatorInvertedRangeSelection */ \
  }, \
  /* ----- Group 65795 end   ----- */ \
  /* ----- Group 65796 begin ----- */ \
  { \
    25U, /* LogicalChannelId */ \
    33U, /* PhysicalChannelId */ \
    0U, /* SampTimeId */ \
    FALSE, /* RangeComparatorEnable */ \
    0U, /* RangeComparatorSelection */ \
    0U /* RangeComparatorInvertedRangeSelection */ \
  }, \
  /* ----- Group 65796 end   ----- */ \
  /* ----- Group 65797 begin ----- */ \
  { \
    24U, /* LogicalChannelId */ \
    17U, /* PhysicalChannelId */ \
    0U, /* SampTimeId */ \
    FALSE, /* RangeComparatorEnable */ \
    0U, /* RangeComparatorSelection */ \
    0U /* RangeComparatorInvertedRangeSelection */ \
  }, \
  /* ----- Group 65797 end   ----- */ \
  /* ----- Group 65798 begin ----- */ \
  { \
    33U, /* LogicalChannelId */ \
    29U, /* PhysicalChannelId */ \
    0U, /* SampTimeId */ \
    FALSE, /* RangeComparatorEnable */ \
    0U, /* RangeComparatorSelection */ \
    0U /* RangeComparatorInvertedRangeSelection */ \
  }, \
  /* ----- Group 65798 end   ----- */ \
  /* ----- Group 65799 begin ----- */ \
  { \
    34U, /* LogicalChannelId */ \
    30U, /* PhysicalChannelId */ \
    0U, /* SampTimeId */ \
    FALSE, /* RangeComparatorEnable */ \
    0U, /* RangeComparatorSelection */ \
    0U /* RangeComparatorInvertedRangeSelection */ \
  } \
  /* ----- Group 65799 end   ----- */ \
}


/* Definition of group configuration. */
#define ADC_GROUP_CONFIGS \
{ \
  { /* Group 65792 configured for ADC_ACCESS_MODE_SINGLE access mode: */ \
    31U, /* FirstLogicalChannelId */ \
    31U, /* LastLogicalChannelId */ \
    0U, /* FirstLogicalChannelConfigIndex */ \
    0U, /* LastLogicalChannelConfigIndex */ \
    1U, /* NumberOfChannels */ \
    15U, /* GroupHwPriority */ \
    ADC_ACCESS_MODE_SINGLE, /* GroupAccessMode */ \
    FALSE, /* Group conversion done interrupt enable. */ \
    FALSE, /* Group range comparator interrupt enable. */ \
    0U, /* Data protection of the channels in the group. */ \
    ADC_CONV_MODE_ONESHOT, /* GroupConvMode */ \
    ADC_GROUP_REPL_SUSPEND_RESUME, /* GroupReplacement */ \
    &Adc_HwUnitConfigs[0], /* HwUnitConfigPtr */ \
    (Adc_VoidFctPtrType)NULL_PTR, /* NotificationPtr - no notification configured */ \
    &Adc_NotificationEnableSettings[0],  /* NotificationEnableSettingPtr */ \
    ADC_STREAM_BUFFER_CIRCULAR, /* StreamBufferMode */ \
    &Adc_StreamInfos[0],  /* StreamInfoPtr */ \
    1U, /* StreamNumSamples */ \
    ADC_TRIGG_SRC_SW, /* TriggerSource */ \
  }, \
  { /* Group 65793 configured for ADC_ACCESS_MODE_SINGLE access mode: */ \
    32U, /* FirstLogicalChannelId */ \
    32U, /* LastLogicalChannelId */ \
    1U, /* FirstLogicalChannelConfigIndex */ \
    1U, /* LastLogicalChannelConfigIndex */ \
    1U, /* NumberOfChannels */ \
    14U, /* GroupHwPriority */ \
    ADC_ACCESS_MODE_SINGLE, /* GroupAccessMode */ \
    FALSE, /* Group conversion done interrupt enable. */ \
    FALSE, /* Group range comparator interrupt enable. */ \
    0U, /* Data protection of the channels in the group. */ \
    ADC_CONV_MODE_ONESHOT, /* GroupConvMode */ \
    ADC_GROUP_REPL_SUSPEND_RESUME, /* GroupReplacement */ \
    &Adc_HwUnitConfigs[0], /* HwUnitConfigPtr */ \
    (Adc_VoidFctPtrType)NULL_PTR, /* NotificationPtr - no notification configured */ \
    &Adc_NotificationEnableSettings[1],  /* NotificationEnableSettingPtr */ \
    ADC_STREAM_BUFFER_CIRCULAR, /* StreamBufferMode */ \
    &Adc_StreamInfos[1],  /* StreamInfoPtr */ \
    1U, /* StreamNumSamples */ \
    ADC_TRIGG_SRC_SW, /* TriggerSource */ \
  }, \
  { /* Group 65794 configured for ADC_ACCESS_MODE_SINGLE access mode: */ \
    28U, /* FirstLogicalChannelId */ \
    28U, /* LastLogicalChannelId */ \
    2U, /* FirstLogicalChannelConfigIndex */ \
    2U, /* LastLogicalChannelConfigIndex */ \
    1U, /* NumberOfChannels */ \
    14U, /* GroupHwPriority */ \
    ADC_ACCESS_MODE_SINGLE, /* GroupAccessMode */ \
    FALSE, /* Group conversion done interrupt enable. */ \
    FALSE, /* Group range comparator interrupt enable. */ \
    0U, /* Data protection of the channels in the group. */ \
    ADC_CONV_MODE_ONESHOT, /* GroupConvMode */ \
    ADC_GROUP_REPL_SUSPEND_RESUME, /* GroupReplacement */ \
    &Adc_HwUnitConfigs[0], /* HwUnitConfigPtr */ \
    (Adc_VoidFctPtrType)NULL_PTR, /* NotificationPtr - no notification configured */ \
    &Adc_NotificationEnableSettings[2],  /* NotificationEnableSettingPtr */ \
    ADC_STREAM_BUFFER_CIRCULAR, /* StreamBufferMode */ \
    &Adc_StreamInfos[2],  /* StreamInfoPtr */ \
    1U, /* StreamNumSamples */ \
    ADC_TRIGG_SRC_SW, /* TriggerSource */ \
  }, \
  { /* Group 65795 configured for ADC_ACCESS_MODE_SINGLE access mode: */ \
    27U, /* FirstLogicalChannelId */ \
    27U, /* LastLogicalChannelId */ \
    3U, /* FirstLogicalChannelConfigIndex */ \
    3U, /* LastLogicalChannelConfigIndex */ \
    1U, /* NumberOfChannels */ \
    14U, /* GroupHwPriority */ \
    ADC_ACCESS_MODE_SINGLE, /* GroupAccessMode */ \
    FALSE, /* Group conversion done interrupt enable. */ \
    FALSE, /* Group range comparator interrupt enable. */ \
    0U, /* Data protection of the channels in the group. */ \
    ADC_CONV_MODE_ONESHOT, /* GroupConvMode */ \
    ADC_GROUP_REPL_SUSPEND_RESUME, /* GroupReplacement */ \
    &Adc_HwUnitConfigs[0], /* HwUnitConfigPtr */ \
    (Adc_VoidFctPtrType)NULL_PTR, /* NotificationPtr - no notification configured */ \
    &Adc_NotificationEnableSettings[3],  /* NotificationEnableSettingPtr */ \
    ADC_STREAM_BUFFER_CIRCULAR, /* StreamBufferMode */ \
    &Adc_StreamInfos[3],  /* StreamInfoPtr */ \
    1U, /* StreamNumSamples */ \
    ADC_TRIGG_SRC_SW, /* TriggerSource */ \
  }, \
  { /* Group 65796 configured for ADC_ACCESS_MODE_SINGLE access mode: */ \
    25U, /* FirstLogicalChannelId */ \
    25U, /* LastLogicalChannelId */ \
    4U, /* FirstLogicalChannelConfigIndex */ \
    4U, /* LastLogicalChannelConfigIndex */ \
    1U, /* NumberOfChannels */ \
    14U, /* GroupHwPriority */ \
    ADC_ACCESS_MODE_SINGLE, /* GroupAccessMode */ \
    FALSE, /* Group conversion done interrupt enable. */ \
    FALSE, /* Group range comparator interrupt enable. */ \
    0U, /* Data protection of the channels in the group. */ \
    ADC_CONV_MODE_ONESHOT, /* GroupConvMode */ \
    ADC_GROUP_REPL_SUSPEND_RESUME, /* GroupReplacement */ \
    &Adc_HwUnitConfigs[0], /* HwUnitConfigPtr */ \
    (Adc_VoidFctPtrType)NULL_PTR, /* NotificationPtr - no notification configured */ \
    &Adc_NotificationEnableSettings[4],  /* NotificationEnableSettingPtr */ \
    ADC_STREAM_BUFFER_CIRCULAR, /* StreamBufferMode */ \
    &Adc_StreamInfos[4],  /* StreamInfoPtr */ \
    1U, /* StreamNumSamples */ \
    ADC_TRIGG_SRC_SW, /* TriggerSource */ \
  }, \
  { /* Group 65797 configured for ADC_ACCESS_MODE_SINGLE access mode: */ \
    24U, /* FirstLogicalChannelId */ \
    24U, /* LastLogicalChannelId */ \
    5U, /* FirstLogicalChannelConfigIndex */ \
    5U, /* LastLogicalChannelConfigIndex */ \
    1U, /* NumberOfChannels */ \
    14U, /* GroupHwPriority */ \
    ADC_ACCESS_MODE_SINGLE, /* GroupAccessMode */ \
    FALSE, /* Group conversion done interrupt enable. */ \
    FALSE, /* Group range comparator interrupt enable. */ \
    0U, /* Data protection of the channels in the group. */ \
    ADC_CONV_MODE_ONESHOT, /* GroupConvMode */ \
    ADC_GROUP_REPL_SUSPEND_RESUME, /* GroupReplacement */ \
    &Adc_HwUnitConfigs[0], /* HwUnitConfigPtr */ \
    (Adc_VoidFctPtrType)NULL_PTR, /* NotificationPtr - no notification configured */ \
    &Adc_NotificationEnableSettings[5],  /* NotificationEnableSettingPtr */ \
    ADC_STREAM_BUFFER_CIRCULAR, /* StreamBufferMode */ \
    &Adc_StreamInfos[5],  /* StreamInfoPtr */ \
    1U, /* StreamNumSamples */ \
    ADC_TRIGG_SRC_SW, /* TriggerSource */ \
  }, \
  { /* Group 65798 configured for ADC_ACCESS_MODE_SINGLE access mode: */ \
    33U, /* FirstLogicalChannelId */ \
    33U, /* LastLogicalChannelId */ \
    6U, /* FirstLogicalChannelConfigIndex */ \
    6U, /* LastLogicalChannelConfigIndex */ \
    1U, /* NumberOfChannels */ \
    13U, /* GroupHwPriority */ \
    ADC_ACCESS_MODE_SINGLE, /* GroupAccessMode */ \
    FALSE, /* Group conversion done interrupt enable. */ \
    FALSE, /* Group range comparator interrupt enable. */ \
    0U, /* Data protection of the channels in the group. */ \
    ADC_CONV_MODE_ONESHOT, /* GroupConvMode */ \
    ADC_GROUP_REPL_SUSPEND_RESUME, /* GroupReplacement */ \
    &Adc_HwUnitConfigs[0], /* HwUnitConfigPtr */ \
    (Adc_VoidFctPtrType)NULL_PTR, /* NotificationPtr - no notification configured */ \
    &Adc_NotificationEnableSettings[6],  /* NotificationEnableSettingPtr */ \
    ADC_STREAM_BUFFER_CIRCULAR, /* StreamBufferMode */ \
    &Adc_StreamInfos[6],  /* StreamInfoPtr */ \
    1U, /* StreamNumSamples */ \
    ADC_TRIGG_SRC_SW, /* TriggerSource */ \
  }, \
  { /* Group 65799 configured for ADC_ACCESS_MODE_SINGLE access mode: */ \
    34U, /* FirstLogicalChannelId */ \
    34U, /* LastLogicalChannelId */ \
    7U, /* FirstLogicalChannelConfigIndex */ \
    7U, /* LastLogicalChannelConfigIndex */ \
    1U, /* NumberOfChannels */ \
    12U, /* GroupHwPriority */ \
    ADC_ACCESS_MODE_SINGLE, /* GroupAccessMode */ \
    FALSE, /* Group conversion done interrupt enable. */ \
    FALSE, /* Group range comparator interrupt enable. */ \
    0U, /* Data protection of the channels in the group. */ \
    ADC_CONV_MODE_ONESHOT, /* GroupConvMode */ \
    ADC_GROUP_REPL_SUSPEND_RESUME, /* GroupReplacement */ \
    &Adc_HwUnitConfigs[0], /* HwUnitConfigPtr */ \
    (Adc_VoidFctPtrType)NULL_PTR, /* NotificationPtr - no notification configured */ \
    &Adc_NotificationEnableSettings[7],  /* NotificationEnableSettingPtr */ \
    ADC_STREAM_BUFFER_CIRCULAR, /* StreamBufferMode */ \
    &Adc_StreamInfos[7],  /* StreamInfoPtr */ \
    1U, /* StreamNumSamples */ \
    ADC_TRIGG_SRC_SW, /* TriggerSource */ \
  } \
}


/* Definition of general ADC module configuration. */
#define ADC_CONFIG \
{ \
  8U, /* GroupConfigsNumber */ \
  1U, /* HwUnitConfigsNumber */ \
  ADC_ALIGN_RIGHT /* ResultAlignment */ \
}


/*------------------[Symbolic names]-----------------------------------------*/

/* Symbolic names of groups. */
#define AdcConf_AdcGroup_AdcGroup_MAI_BAT (65792uL)
#define AdcConf_AdcGroup_AdcGroup_MAI_Backlight_Level_uC (65793uL)
#define AdcConf_AdcGroup_AdcGroup_MAI_Fuel (65794uL)
#define AdcConf_AdcGroup_AdcGroup_MAI_P_BAT_C (65795uL)
#define AdcConf_AdcGroup_AdcGroup_MAI_P_BAT_C_1 (65796uL)
#define AdcConf_AdcGroup_AdcGroup_TFT_THERMISTOR (65797uL)
#define AdcConf_AdcGroup_AdcGroup_MAI_Air_Pressure1_uC (65798uL)
#define AdcConf_AdcGroup_AdcGroup_MAI_Air_Pressure2_uC (65799uL)


/*------------------[ADC error callout function]-----------------------------*/

/** This parameter defines the existence and the name of a callout function that is
 called each time an error was detected.
 The function has to have the following parameters: (ModuleId: uint16,
 InstanceId: uint8, ApiId: uint8, ErrorId: uint8) */
#define ADC_ERROR_CALLOUT_FUNCTION ErrorCalloutHandler

/*------------------[Published information]----------------------------------*/


/** \brief Information whether the result of the ADC driver is signed or not */
#define ADC_CHANNEL_VALUESIGNED (FALSE)

/** \brief Information whether the first channel of a group is fixed or not */
#define ADC_GROUP_FIRST_CHANNEL_FIXED (FALSE)

/** \brief Maximum channel sampling resolution in bits */
#define ADC_MAX_CHANNEL_RESOLUTION (12U)


/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[end of file]===========================================*/

#endif /*!defined(ADC_CFG_H_INCLUDED)*/
