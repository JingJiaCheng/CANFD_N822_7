/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2013 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Std_Types.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  Provision of Standard Types
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
 *  Joachim Kalmbach              Jk            Vector Informatik
 *  Heike Honert                  visht         Vector Informatik
 *  Eugen Stripling               visseu        Vector Informatik
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2007-08-01  Jk                    Initial creation
 *  03.00.00  2007-10-10  Jk                    Changes for AUTOSAR 3.0
 *  03.00.01  2007-11-20  Jk                    Version defines for CFG management added
 *  03.01.00  2008-03-05  Jk                    Include order changed
 *  03.02.00  2008-03-18  Jk                    Version defines changed to specification version
 *  03.03.00  2008-06-03  Jk                    changed ModuleId Type in Std_VersionInfoType from uint8 to uint16
 *  03.03.01  2009-11-11  visht  ESCAN00038201  Support the Standard Type E_PENDING
 *  03.04.00  2011-02-15  visht                 support ASR 4.0R1
 *  03.04.01  2011-02-28  visht  ESCAN00049579  incorrect BSW version scan information
 *  03.04.02  2012-08-23  visht                 version define corrected - replace PATCH by REVISION - (STD_TYPES_AR_RELEASE_REVISION_VERSION)
 *            2012-10-23  visseu                Add _VENDOR_ID and _MODULE_ID as specified in "AUTOSAR_TR_BSWModuleList.pdf" (R4.0 Rev 3)
 *  03.04.03  2013-02-13  visseu                No changes, only SW version corrected
 *  03.04.04  2013-05-29  visseu ESCAN00067740  Add general defines with prefix: STD
 *********************************************************************************************************************/

#ifndef STD_TYPES_H
# define STD_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

# include "Platform_Types.h"
# include "Compiler.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

# define STD_TYPES_VENDOR_ID               (30u)  /* SREQ00015345, SREQ00015361 */
# define STD_TYPES_MODULE_ID               (197u) /* SREQ00015345, SREQ00015361 */

/* ESCAN00067740 */
# define STD_VENDOR_ID                     STD_TYPES_VENDOR_ID
# define STD_MODULE_ID                     STD_TYPES_MODULE_ID

/* ##V_CFG_MANAGEMENT ##CQProject : CommonAsr__Common CQComponent : Impl_StdTypes */
# define COMMONASR__COMMON_IMPL_STDTYPES_VERSION 0x0304
# define COMMONASR__COMMON_IMPL_STDTYPES_RELEASE_VERSION 0x04

/* AUTOSAR Software Specification Version Information */
/* AUTOSAR release 4.0 R3 */
#  define STD_TYPES_AR_RELEASE_MAJOR_VERSION       (4u)
#  define STD_TYPES_AR_RELEASE_MINOR_VERSION       (0u)
#  define STD_TYPES_AR_RELEASE_REVISION_VERSION    (3u)

/* ESCAN00067740 */
#  define STD_AR_RELEASE_MAJOR_VERSION             STD_TYPES_AR_RELEASE_MAJOR_VERSION
#  define STD_AR_RELEASE_MINOR_VERSION             STD_TYPES_AR_RELEASE_MINOR_VERSION
#  define STD_AR_RELEASE_REVISION_VERSION          STD_TYPES_AR_RELEASE_REVISION_VERSION

/* Component Version Information */
# define STD_TYPES_SW_MAJOR_VERSION       (3u)
# define STD_TYPES_SW_MINOR_VERSION       (4u)
# define STD_TYPES_SW_PATCH_VERSION       (4u)

/* ESCAN00067740 */
# define STD_SW_MAJOR_VERSION             STD_TYPES_SW_MAJOR_VERSION
# define STD_SW_MINOR_VERSION             STD_TYPES_SW_MINOR_VERSION
# define STD_SW_PATCH_VERSION             STD_TYPES_SW_PATCH_VERSION

# define STD_HIGH     1u /* Physical state 5V or 3.3V */
# define STD_LOW      0u /* Physical state 0V */

# define STD_ACTIVE   1u /* Logical state active */
# define STD_IDLE     0u /* Logical state idle */

# define STD_ON       1u
# define STD_OFF      0u

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* This typedef has been added for OSEK compliance */
# ifndef STATUSTYPEDEFINED
#  define STATUSTYPEDEFINED
#  define E_OK      0u
typedef unsigned char StatusType; /* OSEK compliance */
# endif

# define E_NOT_OK  1u

#  define E_PENDING 2u

typedef uint8 Std_ReturnType;

typedef struct
{
   uint16 vendorID;
   uint16 moduleID;
   uint8  sw_major_version;
   uint8  sw_minor_version;
   uint8  sw_patch_version;
} Std_VersionInfoType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* STD_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
