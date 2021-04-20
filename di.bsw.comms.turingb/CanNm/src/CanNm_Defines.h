#if !defined(CANNM_DEFINES_H)
#define CANNM_DEFINES_H

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
**  Name:           CanNm_Defines.h
**
**  Description:    CAN NM specific typedefs and datatype definitions
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

/* defines to identify the configured NM type */
#define CAN_NM_DIRECT		  0u
#define CAN_NM_INDIRECT		  1u
#define CAN_NM_MIXED		  2u

/* defines to identify the configured NM variant */
#define NM_VARIANT_FULL       1u
#define NM_VARIANT_PASSIVE    2u
#define NM_VARIANT_LIGHT      3u
#define NM_VARIANT_NONE       4u

/* Message Transmission Ability */
# define MSG_TX_DISABLED                      ((uint8)0x00u)
# define MSG_TX_ENABLED                       ((uint8)0x01u)

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANNM_DEFINES_H */


