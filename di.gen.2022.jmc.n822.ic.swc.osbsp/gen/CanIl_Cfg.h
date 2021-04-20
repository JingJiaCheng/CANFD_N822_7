#if !defined(CAN_IL_CFG_H)
#define CAN_IL_CFG_H
/* ===========================================================================

                      CONFIDENTIAL VISTEON CORPORATION

   This is an unpublished work of authorship, which contains trade secrets,
   created in 2006.  Visteon Corporation owns all rights to this work and
   intends to maintain it in confidence to preserve its trade secret status.
   Visteon Corporation reserves the right, under the copyright laws of the
   United States or those of any other country that may have jurisdiction, to
   protect this work as an unpublished work, in the event of an inadvertent
   or deliberate unauthorized publication.  Visteon Corporation also reserves
   its rights under all copyright laws to protect this work as a published
   work, when appropriate.  Those having access to this work may not copy it,
   use it, modify it or disclose the information contained in it without the
   written authorization of Visteon Corporation.

  =========================================================================*/
/* ===========================================================================

   Name:           CanIl_Cfg.h

   Description:    CAN Interaction Layer Configuration Parameters Header File

   Organization:   Multiplex Core Technology

  =========================================================================*/ 

/* ===========================================================================
   P U B L I C   M A C R O S
  =========================================================================*/

#define CAN_IL_NUM_OF_CHANNELS                  (1)

/* ===========================================================================
// Interaction Layer Task Period
// =========================================================================*/

#define CANIL_BYTEENDIANNESS             (LITTLE)
#define IL_TASK_PERIOD_MS                (10)
#define CANIL_TXCONFIRMATION_API         (CANIL_YES)
#define CAN_IL_TX_BURST_MODE             (CANIL_YES)
#define CANIL_RXINDICATION_API           (CANIL_YES)
#define CANIL_CH0MESSAGE_VALIDATION_SUPPORT  STD_OFF
#define CANIL_RXTOUTINDICATION_API
#define CANIL_TXTOUTINDICATION_API
/* ===========================================================================
//  Interaction Layer support
// =========================================================================*/

#define CANIL_IFSUPPORT

#define CANIL_CCLSUPPORT


#endif  /* CAN_IL_CFG_H */ 


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
