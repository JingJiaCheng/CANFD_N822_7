/*============================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
** This is an unpublished work of authorship, which contains trade secrets,
** created in 2005. Visteon Corporation owns all rights to this work and
** intends to maintain it in confidence to preserve its trade secret status.
** Visteon Corporation reserves the right, under the copyright laws of the
** United States or those of any other country that may have jurisdiction,
** to protect this work as an unpublished work, in the event of an
** inadvertent or deliberate unauthorized publication. Visteon Corporation
** also reserves its rights under all copyright laws to protect this work as
** a published work, when appropriate. Those having access to this work may
** not copy it, use it, modify it or disclose the information contained in
** it without the written authorization of Visteon Corporation.
**
**============================================================================
**
** Name:           system.h
**
** Description:    This files contains type definitions and other information 
**                 needed by the DI Kernel for the NIOS II processor. 
**
**============================================================================
**
**  $Archive:   J:/arch/00diaps_/src/template.h_v  $
** $Revision:   1.6  $
**     $Date:   08 May 2003 13:21:28  $
**  $Modtime:   08 May 2003 13:21:18  $
**   $Author:   jkanoza  $
**
**==========================================================================*/
#ifndef SYSTEM_H
#define SYSTEM_H

/*============================================================================
** I N C L U D E   F I L E S
**==========================================================================*/
#include "base_types.h"
#include "mcu_settings.h"
#include "abstract.h"
#include "pdl.h"
#include "s6j3200io.h"

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

/*============================================================================
** T Y P E   D E F I N I T I O N S
**==========================================================================*/
/*
  Base Data Types
*/
typedef unsigned char         UINT8;
typedef   signed char         SINT8;
typedef unsigned short int    UINT16;
typedef   signed short int    SINT16;
typedef unsigned long         UINT32;
typedef   signed long         SINT32;
typedef unsigned char         BOOLEAN;

typedef unsigned char         UBYTE;
typedef   signed char         SBYTE;
typedef unsigned short int    UWORD;
typedef   signed short int    SWORD;
typedef unsigned long         ULONG;
typedef   signed long         SLONG;


typedef unsigned long         UINT32L;
typedef unsigned long long    UINT64; // should not be used. For crc64 compilation purpose

#if !defined( FALSE )
    #define FALSE   ((BOOLEAN) 0)
#endif

#if !defined( TRUE )
    #define TRUE    ((BOOLEAN) 1)
#endif

/*
  Base Data Type Modifiers (NULL for NIOS2)
*/
#define NEAR
#define FAR

/*
  Base Function Type Modifiers (NULL for NIOS2)
*/
#define INTERRUPT  __interrupt
#define FARFUNC
#define NEARFUNC
#define REENTRANT

/*
 Bit manipulation macros.
*/
#define TESTBIT( operand, bit_mask )        (((operand) &  (bit_mask)) != ((bit_mask) - (bit_mask)))
#define SETBIT( operand, bit_mask )         ((operand) |= (bit_mask))
#define CLEARBIT( operand, bit_mask )       ((operand) &= ((UINT32)~(bit_mask)))

/*
  "bit" position mask definitions
*/
#ifndef BIT0
#define BIT0    (0x01)
#endif
#ifndef BIT1
#define BIT1    (0x02)
#endif
#ifndef BIT2
#define BIT2    (0x04)
#endif
#ifndef BIT3
#define BIT3    (0x08)
#endif
#ifndef BIT4
#define BIT4    (0x10)
#endif
#ifndef BIT5
#define BIT5    (0x20)
#endif
#ifndef BIT6
#define BIT6    (0x40)
#endif
#ifndef BIT7
#define BIT7    (0x80)
#endif
#ifndef BIT8
#define BIT8    (0x0100u)
#endif
#ifndef BIT9
#define BIT9    (0x0200u)
#endif
#ifndef BIT10
#define BIT10   (0x0400u)
#endif
#ifndef BIT11
#define BIT11   (0x0800u)
#endif
#ifndef BIT12
#define BIT12   (0x1000u)
#endif
#ifndef BIT13
#define BIT13   (0x2000u)
#endif
#ifndef BIT14
#define BIT14   (0x4000u)
#endif
#ifndef BIT15
#define BIT15   (0x8000u)
#endif
#ifndef BIT16
#define BIT16   (0x00010000u)
#endif
#ifndef BIT17
#define BIT17   (0x00020000u)
#endif
#ifndef BIT18
#define BIT18   (0x00040000u)
#endif
#ifndef BIT19
#define BIT19   (0x00080000u)
#endif
#ifndef BIT20
#define BIT20   (0x00100000u)
#endif
#ifndef BIT21
#define BIT21   (0x00200000u)
#endif
#ifndef BIT22
#define BIT22   (0x00400000u)
#endif
#ifndef BIT23
#define BIT23   (0x00800000u)
#endif
#ifndef BIT24
#define BIT24   (0x01000000u)
#endif
#ifndef BIT25
#define BIT25   (0x02000000u)
#endif
#ifndef BIT26
#define BIT26   (0x04000000u)
#endif
#ifndef BIT27
#define BIT27   (0x08000000u)
#endif
#ifndef BIT28
#define BIT28   (0x10000000u)
#endif
#ifndef BIT29
#define BIT29   (0x20000000u)
#endif
#ifndef BIT30
#define BIT30   (0x40000000u)
#endif
#ifndef BIT31
#define BIT31   (0x80000000u)
#endif



/*============================================================================
** E N T R Y   P O I N T S
**==========================================================================*/


/*============================================================================
** D A T A   A C C E S S   S E R V I C E S
**==========================================================================*/

/* =======================================================================================*/
/*  R E V I S I O N    N O T E S                                                          */
/* ---------------------------------------------------------------------------------------*/
/*  for each change to this file, record the following:                                   */
/*                                                                                        */
/*  1.  who made the change and when the change was made                                  */
/*  2.  why the change was made and the intended result                                   */
/*                                                                                        */
/* ---------------------------------------------------------------------------------------*/
/*  $Revision:   1.14  $                                                                  */
/* ---------------------------------------------------------------------------------------*/
/*                                                                                        */
/*  Clearcase main\1 6/11/2007 gpalarsk                                                   */
/*                   Initial revision                                                     */
/*                                                                                        */
/*  Clearcase main\2 6/18/2007 gpalarsk                                                   */
/*                   Added typedefs for UINT8, SINT8, UINT16, SINT16, UINT32, and SINT32. */
/*                   Added macros BIT0, BIT1, ... BIT31.                                  */
/*                                                                                        */
/* =======================================================================================*/
#endif

/* Last line of file */
