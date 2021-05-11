#if !defined (CAN_TYPE_H)
#define CAN_TYPE_H
/* =============================================================================*/
/*                                                                              */
/*                     CONFIDENTIAL VISTEON CORPORATION                         */
/*                                                                              */
/*  This is an unpublished work of authorship, which contains trade secrets,    */
/*  created in 2007.  Visteon Corporation owns all rights to this work and      */
/*  intends to maintain it in confidence to preserve its trade secret status.   */
/*  Visteon Corporation reserves the right, under the copyright laws of the     */
/*  United States or those of any other country that may have jurisdiction, to  */
/*  protect this work as an unpublished work, in the event of an inadvertent    */
/*  or deliberate unauthorized publication.  Visteon Corporation also reserves  */
/*  its rights under all copyright laws to protect this work as a published     */
/*  work, when appropriate.  Those having access to this work may not copy it,  */
/*  use it, modify it or disclose the information contained in it without the   */
/*  written authorization of Visteon Corporation.                               */
/*                                                                              */
/* =============================================================================*/

/* =========================================================================*/
/*                                                                          */
/*  Name:           can_type.h                                              */
/*                                                                          */
/*  Description:    compiler specific definitions                           */
/*                                                                          */
/*  Organization:   Multiplex Technology                                    */
/*                  Visteon Corporation                                     */
/*                                                                          */
/* =========================================================================*/

/* =========================================================================*/
/*  I N C L U D E   F I L E S                                               */
/* =========================================================================*/
/* =========================================================================*/
/*  M A C R O   D E F I N I T I O N S                                       */
/* =========================================================================*/
#include "base_types.h"

#if !defined (NULL)
    #define NULL ((void *) 0x0000u)
#endif



/* =========================================================================*/
/*  T Y P E   D E F I N I T I O N S                                         */
/* =========================================================================*/

/*
  CAN Driver 'Base' Types
*/

    #define CAN_FALSE   (0x0u)


    #define CAN_TRUE    (0x1u)

#ifndef FALSE
     #define FALSE   0x0u

#endif

#ifndef TRUE
       #define TRUE   0x1u

#endif

typedef uint8_t   CAN_UINT8;
typedef uint16_t  CAN_UINT16;
typedef uint32_t  CAN_UINT32;

typedef int8_t    CAN_SINT8;
typedef int16_t   CAN_SINT16;
typedef int32_t   CAN_SINT32;

typedef boolean_t CAN_BOOLEAN;

#endif /* CAN_TYPE_H */

/*****************************************************************************
C L E A R C A S E    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  -
For each change to this file, be sure to record:
1.   Who made the change and when the change was made.
2.   Why the change was made and the intended result.

Date       By         Reason For Change
------------------------------------------------------------------------------
Clearcase Rev 1.0
14-Aug-07			kkalais1   		Initial version. 

Clearcase Rev 1.1
13-May-10           ksenthi2        Modified to support MPC560x and muti instance.
******************************************************************************/


