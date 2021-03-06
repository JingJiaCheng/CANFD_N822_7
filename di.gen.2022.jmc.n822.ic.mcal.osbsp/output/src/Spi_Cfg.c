
/** \brief AUTOSAR SPI Driver
 **
 ** This file contains definitions for configuration.
 **
 ** Do not edit this file manually.
 ** Any change might compromise the safety integrity level of
 ** the software partition it is contained in.
 **
 ** Product: SW-MCAL40-DRV
 **
 ** (c) 2016-2017, Cypress Semiconductor Corporation. All rights reserved.
 **
 ** Warranty and Disclaimer
 **
 ** This software product is property of Cypress Semiconductor Corporation or
 ** its subsidiaries.
 ** Any use and/or distribution rights for this software product are provided
 ** only under the Cypress Software License Agreement.
 ** Any use and/or distribution of this software product not in accordance with
 ** the terms of the Cypress Software License Agreement are unauthorized and
 ** shall constitute an infringement of Cypress intellectual property rights.
*/

/*==================[inclusions]============================================*/
#include "Spi_Cfg.h"
#include "Spi_Cfg_Der.h"

/*==================[macros]================================================*/

/** \brief timeout value to transmit or receive synchronously
 ** the lowest baud rate 200000
 ** the CPU clock speed 240000000 Hz.
 ** transmission and reception must have been finished after 
 ** at most (32 + 0) bit times (ESCR:WT[1:0]= b'0 setting).
 ** A loop needs 161 instruction (see compiled code),
 ** and it takes 176 ticks if all predicted branches are successful.
 ** So the calculated cycles: (240000000 / 200000) * (32 + 0) / 176 < 218
 ** If timeout occurs before actual transmission is completed,
 ** driver will issue an error unexpectedly.
 ** 20% margins are necessary to avoid this situation.
 ** So when it's over 261 it looks like something is broken
 ** */
#define SPI_SYNCTRANSMIT_TIMEOUT ( 261UL )

/** \brief timeout value to become active or inactive
 ** Timeout for 8.16s according to maximal value of SpiSetupDelay and SpiHoldDelay. 
 ** the CPU clock speed 240000000 Hz.
 ** A loop needs 161 instruction (see compiled code),
 ** and it takes 176 ticks if all predicted branches are successful.
 ** So the calculated cycles: (240000000 * 8.16) / 176 < 11127272
 ** If timeout occurs before CS becomes active or inactive,
 ** driver will issue an error unexpectedly.
 ** 20% margins are necessary to avoid this situation.
 ** Therefore when it's over 13352727 CS shall become inactive.
 ** */
#define SPI_CSACTIVE_TIMEOUT   ( 13352727UL )
#define SPI_CSINACTIVE_TIMEOUT ( 13352727UL )

/*==================[type definitions]======================================*/

/*==================[internal function declarations]========================*/

/*==================[internal constants]====================================*/

#define SPI_START_SEC_CONST_UNSPECIFIED
/* MISRA-C:2004 Rule 19.1 deviation: MemMap.h must be included in-line. */ /* PRQA S 5087 1 */
#include <MemMap.h>

/*------------------[sequences: job linking]------------------ */

/* SpiSequence_TT */

static CONST(Spi_JobType, SPI_CONST) Spi_SJb_SpiSequence_TT[1] =
{
  SpiJob_TT
};

/*------------------[jobs:channel linking]------------------ */

/* SpiJob_TT */

static CONST(Spi_ChannelType, SPI_CONST) Spi_JCh_SpiJob_TT[1] =
{
  SpiChannel_TT
};



static CONST(Spi_SequenceType, SPI_CONST) Spi_SpiSequence_TT_SharedHwUnitSeqList[SPI_SpiSequence_TT_SHARED_HW_UNIT_SEQ_COUNT] = SPI_SpiSequence_TT_SHARED_HW_UNIT_SEQ_LIST;

#define SPI_STOP_SEC_CONST_UNSPECIFIED
/* MISRA-C:2004 Rule 19.1 deviation: MemMap.h must be included in-line. */ /* PRQA S 5087 1 */
#include <MemMap.h>

/*==================[internal data]=========================================*/



/* SpiChannel_TT */
/* uses external buffers */


#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
/* MISRA-C:2004 Rule 19.1 deviation: MemMap.h must be included in-line. */ /* PRQA S 5087 1 */
#include <MemMap.h>

/* Static, private variables for file-internal use. */
static VAR(Spi_DriverHwInfoType, SPI_VAR) Spi_DriverHwInfo[SPI_MAX_HW_UNIT];

/* Static, private variables for file-internal use. */
static VAR(Spi_HwInfoType, SPI_VAR) Spi_HwInfo[SPI_MAX_HW_UNIT];

/* Static, private variables for file-internal use. */
static VAR(Spi_JobInfoType, SPI_VAR) Spi_JobInfo[SPI_MAX_JOB];

/* Static, private variables for file-internal use. */
static VAR(Spi_SequenceInfoType, SPI_VAR) Spi_SequenceInfo[SPI_MAX_SEQUENCE];

#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/* MISRA-C:2004 Rule 19.1 deviation: MemMap.h must be included in-line. */ /* PRQA S 5087 1 */
#include <MemMap.h>


#define SPI_START_SEC_VAR_INIT_UNSPECIFIED
/* MISRA-C:2004 Rule 19.1 deviation: MemMap.h must be included in-line. */ /* PRQA S 5087 1 */
#include <MemMap.h>

/* Static, private variables for file-internal use. */
static VAR(Spi_ChannelInfoType, SPI_VAR) Spi_ChannelInfo[SPI_MAX_CHANNEL] = SPI_CHANNEL_INFO_DEFAULT;

#define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
/* MISRA-C:2004 Rule 19.1 deviation: MemMap.h must be included in-line. */ /* PRQA S 5087 1 */
#include <MemMap.h>

/*==================[external constants]====================================*/
#define SPI_START_SEC_CONST_UNSPECIFIED
/* MISRA-C:2004 Rule 19.1 deviation: MemMap.h must be included in-line. */ /* PRQA S 5087 1 */
#include <MemMap.h>

static CONST(Spi_ExternalDeviceConfigType, SPI_CONST) Spi_ExternalDeviceConfig[SPI_MAX_EXTERNAL_DEVICE] = 
                                                                                    SPI_EXTERNAL_DEVICE_CONFIG;

static CONST(Spi_ChannelConfigType, SPI_CONST) Spi_ChannelConfig[SPI_MAX_CHANNEL] = SPI_CHANNEL_CONFIG;

static CONST(Spi_SequenceConfigType, SPI_CONST) Spi_SequenceConfig[SPI_MAX_SEQUENCE] = SPI_SEQUENCE_CONFIG;

static CONST(Spi_JobConfigType, SPI_CONST) Spi_JobConfig[SPI_MAX_JOB] = SPI_JOB_CONFIG;

/* PRQA S 3218 1 *//* Allow memory mapping (MemMap). */
CONST(Spi_ConfigType, SPI_CONST) Spi_Config = {
  SPI_SYNCTRANSMIT_TIMEOUT,     /* SynctransmitTimeout */
  SPI_CSACTIVE_TIMEOUT,         /* CsActiveTimeout */
  SPI_CSINACTIVE_TIMEOUT,       /* CsInactiveTimeout */
  &Spi_JobConfig[0],            /* JobConfigListPtr */
  &Spi_SequenceConfig[0],       /* SequencesConfigListPtr */
  &Spi_ChannelConfig[0],        /* ChannelConfigListPtr */
  &Spi_ExternalDeviceConfig[0], /* ExternalDevicesPtr */
  SPI_MAX_JOB,                  /* JobCount */
  SPI_MAX_SEQUENCE,             /* SequenceCount */
  SPI_MAX_CHANNEL,              /* ChannelCount */
  SPI_MAX_EXTERNAL_DEVICE,      /* ExternalDeviceCount */
  SPI_FALSE,
};

/* PRQA S 3218 1 *//* Allow memory mapping (MemMap). */
CONST(Spi_InfoType, SPI_VAR) Spi_Info = 
{
  &Spi_DriverHwInfo[0],
  &Spi_SequenceInfo[0],
  &Spi_JobInfo[0],
  &Spi_ChannelInfo[0],
  &Spi_HwInfo[0]
};

#define SPI_STOP_SEC_CONST_UNSPECIFIED
/* MISRA-C:2004 Rule 19.1 deviation: MemMap.h must be included in-line. */ /* PRQA S 5087 1 */
#include <MemMap.h>

/*==================[external data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
