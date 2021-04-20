#if !defined(CCL_MGR_CFG_H)
#define CCL_MGR_CFG_H

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
**   its rights under all copyright laws to protect this work as a published
**   work, when appropriate.  Those having access to this work may not copy it,
**   use it, modify it or disclose the information contained in it without the
**   written authorization of Visteon Corporation.
** 
**  =========================================================================*/

/* ===========================================================================
**
**  Name:           CanSm_Cfg.h
**
**  Description:    CAN State Manager specific Configuration file 
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

#define CANSM_NUMBER_OF_CHANNELS                       2

#define CANSM_INIT_HAS_POINTER_PARAM	               STD_OFF


/* CAN Manager configurations */

#define CANSM_PARTIAL_NW_XCVR_SUPPORTOFCHANNELCFG      STD_OFF
#define CANSM_TRANSCEIVERIDOFCHANNELCONFIG             STD_ON
#define CANSM_PARTIAL_NW_WAKEUP_FILTEROFCHANNELCFG     STD_OFF
#define CANSM_DCM_INDICATION						   STD_ON

#define CANSM_XCVR_ID_OF_CHANNEL                       0U


#define NM_PASSIVE_MODE_ENABLED                        STD_OFF
#define NM_COM_CONTROL_ENABLED                         STD_ON

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CCL_MGR_CFG_H */

