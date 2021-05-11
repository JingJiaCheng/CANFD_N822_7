/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief        Flash configuration for Spansion(Fujitsu) Tightly Coupled Flash (TCFLASH)
 *
 *  \note         Please note, that this file contains a collection of configuration items to be used with the
 *                flash driver. These items may influence the behavior of the flash driver in principle.
 *                Therefore, great care must be taken to verify the correctness of the configuration.
 *                The contents of the originally delivered files are only examples resp. implementation proposals.
 *                With regard to the fact that these items are meant for demonstration purposes only, Vector
 *                Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent
 *                admissible by law or statute.
 *
 *  --------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \par Copyright
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 */
/**********************************************************************************************************************/

/***********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  --------------------------------------------------------------------------------------------------------------------
 *  Andreas Wenckebach            AWh           Vector Informatik GmbH
 *  Johannes Krimmel              KJs           Vector Informatik GmbH
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id          Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  01.03.00   2015-06-12  AWh     -                  Initial creation
 *  01.04.00   2015-07-24  KJs     ESCAN00084023      No changes
 **********************************************************************************************************************/

#ifndef _FBLDRVFLASH_FCR4TCFLASHHIS_CFG_H_
#define _FBLDRVFLASH_FCR4TCFLASHHIS_CFG_H_

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "v_cfg.h"

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

/* The first numbers depicts the TC flash large sector size (per macro), the last number the small sector area size */


#if defined ( V_CPU_TRAVEO )
/* Traveo devices */
# define FLASH_DEVICE_S6J3XX8_512_64        16u  /* S6J3118HAA, S6J3128HAA */
# define FLASH_DEVICE_S6J3XX9_768_64        17u  /* S6J3119HAA, S6J3129HAA */
# define FLASH_DEVICE_S6J3XXA_1024_64       18u  /* S6J311AHAA, S6J312AHAA, S6J32AAYYY (YYY=variable) */
# define FLASH_DEVICE_S6J3XXB_1536_64       19u  /* S6J311BJAA */
# define FLASH_DEVICE_S6J3XXC_2048_64       20u  /* S6J311CJAA, S6J32XCYYY (X,YYY=variable) */
# define FLASH_DEVICE_S6J3XXD_1024_2048_64  21u  /* S6J311DJAA */
# define FLASH_DEVICE_S6J3XXE_2048_2048_64  22u  /* S6J311EJAA */
#endif /* V_CPU_TRAVEO */

/* Select flash device from above list. */
#define FLASH_DEVICE_CONFIGURED FLASH_DEVICE_S6J3XXC_2048_64

/* Configure if 1-bit ECC errors shall be considered during verification (default: yes)
 * This means failed will be returned in case of a correctable ECC error detected during verification. */
#define FLASH_ENABLE_CHECK_CORRECTABLE_ECC_DURING_VERIFY

#endif /* _FBLDRVFLASH_FCR4TCFLASHHIS_CFG_H_ */

/***********************************************************************************************************************
 *  END OF FILE: FLASHCFG.H
 **********************************************************************************************************************/
