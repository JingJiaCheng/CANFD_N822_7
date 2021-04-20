#if !defined(CANSM_ASR_H)
# define CANSM_ASR_H

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
**  Name:           CanSm_Asr.h
**
**  Description:    CAN State manager to ASR COMM,CANSM & NM layer mapping 
**                    macros for typedefs and functions
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
/* Externally exposed ASR interfaces replacements for CAN State manager */

#define CanSm_Init                        ComM_Init
#define CanSm_InitMemory                  ComM_InitMemory
#define CanSm_DeInit                      ComM_DeInit
#define CanSm_GetStatus                   ComM_GetStatus
#define CanSm_GetState                    ComM_GetState
#define ComM_StateType                    CanSm_StateType

#define COMM_NO_COM_NO_PENDING_REQUEST    CANSM_NO_COM_NO_PENDING_REQUEST

/*#define CanXcvr_XcvrModeType           CanTrcv_TrcvModeType*/

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANSM_ASR_H */

