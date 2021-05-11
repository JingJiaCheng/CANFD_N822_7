/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2015.  Visteon Corporation owns all rights to this work and
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
**  Name:           f_hyperbus.h
**
**  Description:    Hyperbus Application
**
**  Organization:   Visteon
**
** =========================================================================*/

/* ===========================================================================
**
**   $Archive::                                                              $
**  $Revision::                                                              $
**      $Date::                                                              $
**    $Author::                                                              $
**
** =========================================================================*/
#ifndef F_HYPERBUS_H
#define F_HYPERBUS_H
/* ===========================================================================
**  I N C L U D E   F I L E S
** =========================================================================*/

#define HYPER_FLASH_SUCCESS 0u
#define HYPER_FLASH_FAIL 1u

/* ===========================================================================
**  P U B L I C   T Y P E   D E F I N I T I O N S
** =========================================================================*/
typedef unsigned char hyper_u8;
typedef signed char hyper_s8;
typedef unsigned short int hyper_u16;
typedef signed short int hyper_s16;
typedef unsigned int hyper_u32;
typedef signed int hyper_s32;
typedef volatile unsigned int UVINT32;


/* ===========================================================================
**  P U B L I C   D A T A   T A B L E   D E F I N I T I O N S
** =========================================================================*/


/* ===========================================================================
**  P U B L I C   F U N C T I O N   P R O T O T Y P E S
** =========================================================================*/
hyper_u32 HyperFlash_Write(hyper_u16* targetPtr,hyper_u16* sourcePtr,hyper_u32 length,hyper_u32 base_addr);
hyper_u32 HyperFlash_Erase(hyper_u32 address,hyper_u32 length);

/* End of file ============================================================ */
#endif  /* #ifndef F_HYPERBUS_H */

