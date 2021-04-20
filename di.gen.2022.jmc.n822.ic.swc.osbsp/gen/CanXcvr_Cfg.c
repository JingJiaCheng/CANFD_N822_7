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
**  Name:           CanXcvr_Cfg.c
**
**  Description:    CAN Transceiver Specific Configuration file
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

#include "CanXcvr.h"
#include "CanXcvr_Cfg.h"

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/


/* ===========================================================================
** G L O B A L   C O N S T A N T   D E F I N I T I O N S
** =========================================================================*/

CANXcvrConfigType const CANXcvrConfiguration[CANXCVR_NUM_OF_CHANNELS] =
{
   {
      CANXCVR_TJA1042,				  /* Transceiver Part */
      3,							  /* STB Port Number */
	  3,							  /* STB Pin Number */
	  7,	                          /* STANDBY | NORMAL | INIT */
	  CANXCVR_YES					  /* Control Support */
   }

  #if (CANXCVR_NUM_OF_CHANNELS > 1)
  ,{
      CANXCVR_TJA1042,				  /* Transceiver Part */
      3,							  /* Port Number */
	  15,							  /* Pin Number */
	  7,							  /*  */
	  CANXCVR_YES					  /* Control Support */  /*not used*/
   }
   #endif
  
  #if (CANXCVR_NUM_OF_CHANNELS > 2)
  ,{
      CANXCVR_TJA1042,				  /* Transceiver Part */
      0,							  /* Port Number */
	  0,							  /* Pin Number */
	  0,							  /*  */
	  CANXCVR_NO					  /* Control Support */
   }
   #endif

  #if (CANXCVR_NUM_OF_CHANNELS > 3)
  ,{
      CANXCVR_TJA1042,                /* Transceiver Part */
      0,							  /* Port Number */
	  0,							  /* Pin Number */
	  0,							  /* */
	  CANXCVR_NO,					  /* Control Support */
   }
   #endif
};

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

