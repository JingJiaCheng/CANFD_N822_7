#if !defined(CANNM_CFG_H)
#define CANNM_CFG_H

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
**  Name:           CanNm_Cfg.h
**
**  Description:    CAN NM specific configuration parameters
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

#define CAN_NM_TYPE                                          CAN_NM_DIRECT

#define CAN_NM_NUMBER_OF_CHANNELS                            1
#define CAN_NM_NUMBER_OF_BUSNM                               1

#define CANNM_CONTROL_ENABLED			                     STD_ON


/* CAN NM Configurations */

#define CANNM_BUS_LOAD_REDUCTION_ENABLED                     STD_OFF
#define CANNM_IMMEDIATE_TXCONF_ENABLED                       STD_OFF
#define CANNM_USER_DATA_ENABLED                              STD_OFF
#define CANNM_NODE_DETECTION_ENABLED                         STD_OFF
#define CANNM_NODE_ID_ENABLED                                STD_OFF
#define CANNM_PASSIVE_MODE_ENABLED                           STD_OFF

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANNM_CFG_H */

