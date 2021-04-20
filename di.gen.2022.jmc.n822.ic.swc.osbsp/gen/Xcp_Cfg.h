/* ===========================================================================

                     CONFIDENTIAL VISTEON CORPORATION

  This is an unpublished work of authorship, which contains trade secrets,
  created in 2006.  Visteon Corporation owns all rights to this work and
  intends to maintain it in confidence to preserve its trade secret status.
  Visteon Corporation reserves the right, under the copyright laws of the
  United States or those of any other country that may have jurisdiction, to
  protect this work as an unpublished work, in the event of an inadvertent
  or deliberate unauthorized publication.  Visteon Corporation also reserves
  its rights under all copyright laws to protect this work as a published
  work, when appropriate.  Those having access to this work may not copy it,
  use it, modify it or disclose the information contained in it without the
  written authorization of Visteon Corporation.

 =========================================================================*/

    
#if !defined(__XCP_CFG_H__)
#define __XCP_CFG_H__

#ifndef XCP_USE_DUMMY_FUNCTIONS
#define XCP_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef XCP_USE_DUMMY_STATEMENT
#define XCP_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef XCP_ATOMIC_VARIABLE_ACCESS
#define XCP_ATOMIC_VARIABLE_ACCESS 16U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef XCP_PROCESSOR_S6J324CXS
#define XCP_PROCESSOR_S6J324CXS
#endif
#ifndef XCP_COMP_GREENHILLS
#define XCP_COMP_GREENHILLS
#endif
#ifndef XCP_GEN_GENERATOR_MSR
#define XCP_GEN_GENERATOR_MSR
#endif
#ifndef XCP_CPUTYPE_BITORDER_LSB2MSB
#define XCP_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */ 
#endif
#ifndef XCP_CONFIGURATION_VARIANT_PRECOMPILE
#define XCP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef XCP_CONFIGURATION_VARIANT_LINKTIME
#define XCP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef XCP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define XCP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef XCP_CONFIGURATION_VARIANT
#define XCP_CONFIGURATION_VARIANT XCP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef XCP_POSTBUILD_VARIANT_SUPPORT
#define XCP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* General settings */
#define XCP_DISABLE_SILENT_CHECK
#define XCP_ENABLE_EXTENDED_EVENTS
#define XCP_ENABLE_PARAMETER_CHECK    
#define XCP_ENABLE_CALIBRATION
#define XCP_ENABLE_SEND_EVENT
#define XCP_DISABLE_BOOTLOADER_DOWNLOAD
#define XCP_DISABLE_WRITE_PROTECTION
#define XCP_DISABLE_READ_PROTECTION
#define XCP_DISABLE_CONTROL
#define XCP_DISABLE_GET_XCP_DATA_POINTER
#define XCP_DISABLE_OPENCMDIF
#define XCP_ENABLE_DEV_ERROR_DETECT
#define XCP_DISABLE_AMD_RUNTIME_MEASUREMENT
#define XCP_ENABLE_MEM_MAPPING
#define XCP_DISABLE_VERSION_INFO_API
#define XCP_ENABLE_GET_SESSION_STATUS_API 
#define XCP_DISABLE_VX_SUPPORT
#define XCP_DISABLE_TYPESAVE_COPY

/* EEPROM access */
#define XCP_DISABLE_READ_EEPROM
#define XCP_DISABLE_WRITE_EEPROM

/* Service request message */
#define XCP_DISABLE_SERV_TEXT
#define XCP_DISABLE_SERV_TEXT_PUTCHAR
#define XCP_DISABLE_SERV_TEXT_PRINT

/* Standard commands */
#define XCP_ENABLE_COMM_MODE_INFO
#define XCP_DISABLE_SEED_KEY
#define XCP_DISABLE_MODIFY_BITS
#define XCP_DISABLE_SHORT_DOWNLOAD
#define XCP_DISABLE_USER_COMMAND
#define XCP_DISABLE_GET_ID_GENERIC
#define XCP_ENABLE_TL_COMMAND

/* Block transfer */
#define XCP_DISABLE_BLOCK_UPLOAD
#define XCP_DISABLE_BLOCK_DOWNLOAD
#define kXcpBlockDownloadMinSt               0U

/* Checksum */
#define XCP_DISABLE_CHECKSUM

/* Synchronous Data Acquisition (DAQ) */
#define XCP_ENABLE_DAQ
#define kXcpDaqMemSize                       256U
#define XCP_ENABLE_STIM
#define XCP_DISABLE_UNALIGNED_MEM_ACCESS
#define XCP_ENABLE_SEND_QUEUE
#define kXcpStimOdtCount                     1U
#define XCP_DISABLE_DAQ_PRESCALER
#define XCP_ENABLE_DAQ_OVERRUN_INDICATION
#define XCP_DISABLE_WRITE_DAQ_MULTIPLE
#define XCP_DISABLE_DAQ_HDR_ODT_DAQ
#define XCP_DISABLE_DAQ_RESUME
#define XCP_ENABLE_DAQ_PROCESSOR_INFO
#define XCP_ENABLE_DAQ_RESOLUTION_INFO
#define XCP_DISABLE_ALIGNED_DTO

/* Events */
#define XCP_DISABLE_DAQ_EVENT_INFO

/* DAQ Timestamp */
// #define XCP_ENABLE_DAQ_TIMESTAMP
#define XCP_ENABLE_DAQ_TIMESTAMP_FIXED
#define kXcpDaqTimestampSize                 DAQ_TIMESTAMP_WORD
#define kXcpDaqTimestampUnit                 DAQ_TIMESTAMP_UNIT_1US
#define kXcpDaqTimestampTicksPerUnit         1U

/* Page switching */
#define XCP_DISABLE_CALIBRATION_PAGE
#define kXcpMaxSegment                       1u
#define XCP_DISABLE_PAGE_INFO
#define XCP_DISABLE_PAGE_COPY
#define XCP_DISABLE_PAGE_FREEZE

/* Programming */
#define XCP_DISABLE_PROGRAM

#ifndef XCP_AUTOSARVERSION
#define XCP_AUTOSARVERSION                   4 
#endif


/* -----------------------------------------------------------------------------
    &&&~ Multiple transport layer support
 ----------------------------------------------------------------------------- */

#define kXcpMaxCTOMax                        8U
#define kXcpMaxDTOMax                        8U
/* Multiple transport layer support */
#define NUMBER_OF_TRANSPORTLAYERS            1U

#define XCP_TRANSPORT_LAYER_TYPE_CAN_ASR
#define XCP_TRANSPORT_LAYER_CAN              0U

/* -----------------------------------------------------------------------------
    &&&~ FlexRay parameter access
 ----------------------------------------------------------------------------- */

#define XCP_DISABLE_READCCCONFIG
#define XCP_DISABLE_VECTOR_GENERICMEASUREMENT
    
/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* __XCP_CFG_H__ */

