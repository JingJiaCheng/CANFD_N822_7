/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2014 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Platform_Types.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  Provision of Platform Types for Traveo
 *  
 *  -------------------------------------------------------------------------------------------------------------------
 *  MISRA VIOLATIONS
 *  -------------------------------------------------------------------------------------------------------------------
 *      
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Peter Herrmann                Her           Vector Informatik
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
*  01.00.00  2014-10-31  Her                   initial creation for Traveo
*********************************************************************************************************************/

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : CommonAsr_TRAVEO CQComponent : Impl_PlatformTypes */
#define COMMONASR_TRAVEO_IMPL_PLATFORMTYPES_VERSION         0x0100
#define COMMONASR_TRAVEO_IMPL_PLATFORMTYPES_RELEASE_VERSION   0x00

#define PLATFORM_VENDOR_ID    30u

/* AUTOSAR Software Specification Document Version Information */

/* AUTOSAR release 4.0 R3 */
#   define PLATFORM_AR_RELEASE_MAJOR_VERSION      (4u)
#   define PLATFORM_AR_RELEASE_MINOR_VERSION      (0u)
#   define PLATFORM_AR_RELEASE_PATCH_VERSION      (3u)

/* Component Version Information */
#define PLATFORM_SW_MAJOR_VERSION       (1u)
#define PLATFORM_SW_MINOR_VERSION       (0u)
#define PLATFORM_SW_PATCH_VERSION       (0u) 

#define CPU_TYPE_8       8
#define CPU_TYPE_16      16
#define CPU_TYPE_32      32

#define MSB_FIRST        0    /* big endian bit ordering */
#define LSB_FIRST        1    /* little endian bit ordering */

#define HIGH_BYTE_FIRST  0    /* big endian byte ordering */
#define LOW_BYTE_FIRST   1    /* little endian byte ordering */

#ifndef TRUE
   #define TRUE              1u
#endif

#ifndef FALSE
   #define FALSE             0u
#endif

#define CPU_TYPE            CPU_TYPE_32

#define CPU_BIT_ORDER       LSB_FIRST

#define CPU_BYTE_ORDER      LOW_BYTE_FIRST
                      
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 
typedef unsigned char       boolean;        /* for use with TRUE/FALSE        */

typedef signed char         sint8;          /*        -128 .. +127            */
typedef unsigned char       uint8;          /*           0 .. 255             */
typedef signed short        sint16;         /*      -32768 .. +32767          */
typedef unsigned short      uint16;         /*           0 .. 65535           */
typedef signed long         sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long       uint32;         /*           0 .. 4294967295      */
typedef signed long long    sint64;         /* \brief 64-bit unsigned integer */
typedef unsigned long long  uint64;
/* The optimized AUTOSAR          integer     data     types
(<typename>_least) shall have at least the size given by the type name, but the
types shall be implemented in a way that the best performance on the specific
platform is achieved. `Best performance' is defined in this context as `least processor
cycles for variable access as possible'. Example: on a TC1796, uint8_least is
mapped to unsigned int (32 bit) because access to this type requires less
processor cycles than e.g. unsigned char (8 bit).  */                                      
typedef unsigned long       uint8_least;    /* At least 8 bit                 */
typedef signed long         sint8_least;    /* At least 7 bit + 1 bit sign    */
typedef unsigned long       uint16_least;   /* At least 16 bit                */
typedef signed long         sint16_least;   /* At least 15 bit + 1 bit sign   */
typedef unsigned long       uint32_least;   /* At least 32 bit                */
typedef signed long         sint32_least;   /* At least 31 bit + 1 bit sign   */
                                        
typedef float               float32;
typedef double              float64;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* PLATFORM_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Platform_Types.h
 *********************************************************************************************************************/
