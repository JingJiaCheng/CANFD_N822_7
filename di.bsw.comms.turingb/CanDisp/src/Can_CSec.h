#if !defined(CAN_CSEC_H)
# define CAN_CSEC_H

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
**  Name:           Can_CSec.h
**
**  Description:    Critical section function definitions
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
** =========================================================================*/

/* ===========================================================================
**  I N C L U D E   F I L E S
** =========================================================================*/

# include "osek.h"
# include "Can.h"
# include "CanDisp.h"


/* ===========================================================================
**  M A C R O   D E F I N I T I O N S
** =========================================================================*/

# define CanEnterCriticalSection        SuspendAllInterrupts

# define CanExitCriticalSection         ResumeAllInterrupts

#define  CanEnterLocalCriticalSection   Can_DisableControllerInterrupts

#define  CanExitLocalCriticalSection    Can_EnableControllerInterrupts

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CAN_CSEC_H */

