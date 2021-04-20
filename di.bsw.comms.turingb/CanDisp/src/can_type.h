#if !defined (CAN_TYPE_H)
#define CAN_TYPE_H
/* ===========================================================================
//
//                     CONFIDENTIAL VISTEON CORPORATION
//
//  This is an unpublished work of authorship, which contains trade secrets,
//  created in 2007.  Visteon Corporation owns all rights to this work and
//  intends to maintain it in confidence to preserve its trade secret status.
//  Visteon Corporation reserves the right, under the copyright laws of the
//  United States or those of any other country that may have jurisdiction, to
//  protect this work as an unpublished work, in the event of an inadvertent
//  or deliberate unauthorized publication.  Visteon Corporation also reserves
//  its rights under all copyright laws to protect this work as a published
//  work, when appropriate.  Those having access to this work may not copy it,
//  use it, modify it or disclose the information contained in it without the
//  written authorization of Visteon Corporation.
//
// =========================================================================*/

/* ===========================================================================
//
//  Name:           can_type.h
//
//  Description:    compiler specific definitions
//
//  Organization:   Multiplex Technology
//                  Visteon Corporation
//
// =========================================================================*/

/* ===========================================================================
//  I N C L U D E   F I L E S
// =========================================================================*/
/* ===========================================================================
//  M A C R O   D E F I N I T I O N S
// =========================================================================*/

/*#if !defined (NULL)
    #define NULL ((void *) 0x0000u)
#endif*/



/* ===========================================================================
//  T Y P E   D E F I N I T I O N S
// =========================================================================*/

/*
//  CAN Driver 'Base' Types
*/

#define CAN_FALSE   (0x0u)

#define CAN_TRUE    (0x1u)

#if !defined (FALSE)
     #define FALSE   (0x0u)

#endif

#if !defined (TRUE)
       #define TRUE   (0x1u)

#endif


typedef unsigned char   CAN_UINT8;
typedef unsigned short  CAN_UINT16;
typedef unsigned int    CAN_UINT32;

typedef signed char     CAN_SINT8;
typedef signed short    CAN_SINT16;
typedef signed int      CAN_SINT32;

typedef unsigned char   CAN_BOOLEAN;

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CAN_TYPE_H */



