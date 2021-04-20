#if !defined( CCL_CFG_H )
#define CCL_CFG_H

/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2007.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**  its rights under all copyright laws to protect this work as a published
**  work, when appropriate.  Those having access to this work may not copy it,
**  use it, modify it or disclose the information contained in it without the
**  written authorization of Visteon Corporation.
**
** =========================================================================*/

/* ===========================================================================
**
**  Name:           CanCcl_Cfg.h
**
**  Description:    CAN CCL specific configuration parameters
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
** =========================================================================*/

/* ===========================================================================
**  I N C L U D E   F I L E S
** =========================================================================*/

/* ===========================================================================
**  M A C R O   D E F I N I T I O N S
** =========================================================================*/

/**
  \defgroup  PCGeneral  General (PRE-COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/

/* General */
#define CCL_DEV_ERROR_DETECT                        STD_OFF


#define CCL_INIT_DATA                               CCL_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CCL_USE_INIT_POINTER                        STD_OFF    /**< STD_ON if the init pointer Ccl shall be used. */

/* API */
#define CCL_INIT_MEMORY_API                         STD_ON
#define CCL_DE_INIT_API                             STD_OFF
#define CCL_GET_STATUS_API                          STD_ON

#define CCL_IPDU_GROUP_CONTROL_API                  STD_ON
#define CCL_RECEPTION_DM_CONTROL_API                STD_ON

#define CCL_IPDU_GROUP_START_API                    STD_OFF
#define CCL_IPDU_GROUP_STOP_API                     STD_OFF
#define CCL_ENABLE_RECEPTION_DM_API                 STD_OFF
#define CCL_DISABLE_RECEPTION_DM_API                STD_OFF

#define CCL_MAIN_FUNCTION_TX_API                    STD_ON
#define CCL_TX_CONFIRMATION_API                     STD_ON
#define CCL_TX_TP_CONFIRMATION_API                  STD_OFF
#define CCL_TRIGGER_TRANSMIT_API                    STD_OFF
#define CCL_TRIGGER_IPDU_SEND_API                   STD_OFF
#define CCL_TRIGGER_IPDU_SEND_WITH_META_DATA_API    STD_OFF
#define CCL_SWITCH_IPDU_TX_MODE_API                 STD_OFF
#define CCL_SEND_SIGNAL_API                         STD_ON
#define CCL_SEND_DYN_SIGNAL_API                     STD_ON
#define CCL_UPDATE_SHADOW_SIGNAL_API                STD_OFF
#define CCL_SEND_SIGNAL_GROUP_API                   STD_ON
#define CCL_SEND_SIGNAL_GROUP_ARRAY_API             STD_OFF
#define CCL_COPY_TX_DATA_API                        STD_OFF

#define CCL_MAIN_FUNCTION_RX_API                    STD_ON
#define CCL_RX_INDICATION_API                       STD_ON
#define CCL_RX_INVINDICATION_API                    STD_OFF
#define CCL_RX_TOUTINDICATION_API                   STD_ON
#define CCL_RECEIVE_SIGNAL_API                      STD_ON
#define CCL_RECEIVE_SHADOW_SIGNAL_API               STD_ON
#define CCL_RECEIVE_SIGNAL_GROUP_API                STD_ON
#define CCL_RECEIVE_DYN_SIGNAL_API                  STD_ON
#define CCL_START_OF_RECEPTION_API                  STD_OFF
#define CCL_TP_RXINDICATION_API                     STD_OFF
#define CCL_COPY_RX_DATA_API                        STD_OFF

#define CCL_INVALIDATE_SIGNAL_API                   STD_ON
#define CCL_INVALIDATE_SIGNAL_GROUP_API             STD_OFF
#define CCL_INVALIDATE_SHADOW_SIGNAL_API            STD_OFF

#define CCL_MAIN_FUNCTION_ROUTE_SIGNALS_API         STD_OFF


#endif /* CCL_CFG_H */

/*****************************************************************************
    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  -
For each change to this file, be sure to record:
1.   Who made the change and when the change was made.
2.   Why the change was made and the intended result.

Date       By         Reason For Change
------------------------------------------------------------------------------

******************************************************************************/
/*****************************************************************************
Date          : 2018-05-03 19:23
By              : JSISTUS
Traceability    : [u'DFPV_D53_BDC_20180423 - Copy.dbc']
Change Description  : Tool Generated code
*****************************************************************************/
