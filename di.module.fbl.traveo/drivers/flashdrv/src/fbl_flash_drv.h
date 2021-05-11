

#ifndef _FBLDRVFLASH_FCR4TCFLASHHIS_H_
#define _FBLDRVFLASH_FCR4TCFLASHHIS_H_

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "fbl_flash_cfg.h"

/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : FblDrvFlash_Fcr4TcflashHis CQComponent : Implementation */
#define FBLDRVFLASH_FCR4TCFLASHHIS_VERSION           0x0104u
#define FBLDRVFLASH_FCR4TCFLASHHIS_RELEASE_VERSION   0x00u

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

/* PRQA S 3453 FlashDrv_3453 */ /* MD_CBD_19.7 */
/* PRQA S 3458 FlashDrv_3458 */ /* MD_CBD_19.4 */

/* Flash driver hardware information */
#if defined( V_CPU_TRAVEO )
# define FLASH_DRIVER_VERSION_MCUTYPE        0x05u
#else
# error "Unknown V_CPU_XX switch configured."
#endif /* V_CPU_XXX */

#if defined( V_CPU_TRAVEO )
# if   ( FLASH_DEVICE_CONFIGURED == FLASH_DEVICE_S6J3XX8_512_64 )
#  define FLASH_NUMBER_OF_LARGE_SECTORS      8u
#  define FLASH_NUMBER_OF_SMALL_SECTORS      8u
# elif ( FLASH_DEVICE_CONFIGURED == FLASH_DEVICE_S6J3XX9_768_64 )
#  define FLASH_NUMBER_OF_LARGE_SECTORS      12u
#  define FLASH_NUMBER_OF_SMALL_SECTORS      8u
# elif ( FLASH_DEVICE_CONFIGURED == FLASH_DEVICE_S6J3XXA_1024_64 )
#  define FLASH_NUMBER_OF_LARGE_SECTORS      16u
#  define FLASH_NUMBER_OF_SMALL_SECTORS      8u
# elif ( FLASH_DEVICE_CONFIGURED == FLASH_DEVICE_S6J3XXB_1536_64 )
#  define FLASH_NUMBER_OF_LARGE_SECTORS      24u
#  define FLASH_NUMBER_OF_SMALL_SECTORS      8u
# elif ( FLASH_DEVICE_CONFIGURED == FLASH_DEVICE_S6J3XXC_2048_64 )
#  define FLASH_NUMBER_OF_LARGE_SECTORS      32u
#  define FLASH_NUMBER_OF_SMALL_SECTORS      8u
# elif ( FLASH_DEVICE_CONFIGURED == FLASH_DEVICE_S6J3XXD_1024_2048_64 )
#  define FLASH_NUMBER_OF_LARGE_SECTORS      (16u + 32u)
#  define FLASH_NUMBER_OF_SMALL_SECTORS      8u
# elif ( FLASH_DEVICE_CONFIGURED == FLASH_DEVICE_S6J3XXE_2048_2048_64 )
#  define FLASH_NUMBER_OF_LARGE_SECTORS      (32u + 32u)
#  define FLASH_NUMBER_OF_SMALL_SECTORS      8u
# else
#  error "Selected FLASH_DEVICE_CONFIGURED is not supported."
# endif
#endif /* V_CPU_TRAVEO */


#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
# define FLASH_DRIVER_VERSION_MASKTYPE    0x01u
#else
# define FLASH_DRIVER_VERSION_MASKTYPE    0x00u
#endif
# define FLASH_DRIVER_VERSION_INTERFACE   0x00u

/* Flash driver software information */
#define FLASH_DRIVER_VERSION_MAJOR        ((unsigned char)((FBLDRVFLASH_FCR4TCFLASHHIS_VERSION >> 8u) & 0xFFu))
#define FLASH_DRIVER_VERSION_MINOR        ((unsigned char)((FBLDRVFLASH_FCR4TCFLASHHIS_VERSION >> 0u) & 0xFFu))
#define FLASH_DRIVER_VERSION_PATCH        ((unsigned char)FBLDRVFLASH_FCR4TCFLASHHIS_RELEASE_VERSION)

/* Defines to access version and type information */
#define FLASH_DRIVER_MCUTYPE(ramBuffer)   (*(unsigned char*)((ramBuffer) + 3u))
#define FLASH_DRIVER_MASKTYPE(ramBuffer)  (*(unsigned char*)((ramBuffer) + 2u))
#define FLASH_DRIVER_INTERFACE(ramBuffer) (*(unsigned char*)((ramBuffer) + 0u))

/* Function call table offsets */
#define FLASH_DRIVER_HEADER_OFFSET        0x04u
#define FLASH_DRIVER_INIT_OFFSET          (FLASH_DRIVER_HEADER_OFFSET + 0x00u)
#define FLASH_DRIVER_DEINIT_OFFSET        (FLASH_DRIVER_HEADER_OFFSET + 0x04u)
#define FLASH_DRIVER_ERASE_OFFSET         (FLASH_DRIVER_HEADER_OFFSET + 0x08u)
#define FLASH_DRIVER_WRITE_OFFSET         (FLASH_DRIVER_HEADER_OFFSET + 0x0Cu)

/* Flash driver is not relocatable */
#define FLASH_DRIVER_NOT_RELOCATABLE

/* Flash driver uses SWIL I only */
#define FLASH_DRIVER_NUMBER_OF_MODULES    1u

/* Minimum number of bytes that has to be programmed at a time */
#if defined( V_CPU_TRAVEO )
/* 4 byte can be written without automatic ECC generation, however 8 byte need to be written for correct ECC generation. */
# define FLASH_SEGMENT_SIZE               0x08u
#else
# error "Unknown V_CPU_XX switch configured."
#endif

/* The contents of a deleted flash byte */
#define FBL_FLASH_DELETED                 0xFFu

/* Routine specific error groups */
#define kFlashFctInit            ((tFlashErrorCode)0x00u)
#define kFlashFctDeinit          ((tFlashErrorCode)0x20u)
#define kFlashFctErase           ((tFlashErrorCode)0x40u)
#define kFlashFctWrite           ((tFlashErrorCode)0x60u)

/* Common error codes */
#define kFlashOk                 ((tFlashErrorCode)0x00u)
#define kFlashFailed             ((tFlashErrorCode)0x01u)
#define kFlashVerify             ((tFlashErrorCode)0x02u)
#define kFlashInvalidParam       ((tFlashErrorCode)0x03u)
#define kFlashInvalidAddr        ((tFlashErrorCode)0x04u)
#define kFlashInvalidSize        ((tFlashErrorCode)0x05u)
#define kFlashConditions         ((tFlashErrorCode)0x06u)
#define kFlashInvalidVersion     ((tFlashErrorCode)0x0Au)

/* Flash initialization error codes */
#define kFlashInitFailed         ((tFlashErrorCode)(kFlashFctInit | kFlashFailed))
#define kFlashInitInvalidParam   ((tFlashErrorCode)(kFlashFctInit | kFlashInvalidParam))
#define kFlashInitInvalidVersion ((tFlashErrorCode)(kFlashFctInit | kFlashInvalidVersion))

/* Flash deinitialization error codes */
#define kFlashDeinitFailed       ((tFlashErrorCode)(kFlashFctDeinit | kFlashFailed))

/* Flash erase error codes */
#define kFlashEraseFailed        ((tFlashErrorCode)(kFlashFctErase | kFlashFailed))
#define kFlashEraseInvalidAddr   ((tFlashErrorCode)(kFlashFctErase | kFlashInvalidAddr))
#define kFlashEraseInvalidSize   ((tFlashErrorCode)(kFlashFctErase | kFlashInvalidSize))
#define kFlashEraseConditions    ((tFlashErrorCode)(kFlashFctErase | kFlashConditions))

/* Flash write error codes */
#define kFlashWriteFailed        ((tFlashErrorCode)(kFlashFctWrite | kFlashFailed))
#define kFlashWriteVerify        ((tFlashErrorCode)(kFlashFctWrite | kFlashVerify))
#define kFlashWriteInvalidAddr   ((tFlashErrorCode)(kFlashFctWrite | kFlashInvalidAddr))
#define kFlashWriteInvalidSize   ((tFlashErrorCode)(kFlashFctWrite | kFlashInvalidSize))
#define kFlashWriteConditions    ((tFlashErrorCode)(kFlashFctWrite | kFlashConditions))

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned char  tFlashData;
typedef unsigned int   tFlashAddress;
typedef unsigned int   tFlashLength;
typedef unsigned short tFlashErrorCode;

/* Flash command structure */
typedef struct
{
   /* Version information */
   unsigned char     patchLevel;                      /* Patch level */
   unsigned char     minorVersion;                    /* Minor version number */
   unsigned char     majorVersion;                    /* Major version number */
   unsigned char     reserved1;                       /* Reserved for future use */

   /* Return value/error code */
   tFlashErrorCode   errorCode;                       /* Return value/error code */
   unsigned short    reserved2;                       /* Reserved for future use */

   /* Erase/write input parameters */
   tFlashAddress     address;                         /* Logical target address */
   tFlashLength      length;                          /* Length (in bytes) */
   const tFlashData *      data;                            /* Pointer to data buffer (read only) */

   /* Pointer to watchdog trigger function */
   unsigned char     (* wdTriggerFct)(void);

   /* Erase/write output parameters */
   tFlashData        intendedData[FLASH_SEGMENT_SIZE];/* Intended data at error address */
   tFlashData        actualData[FLASH_SEGMENT_SIZE];  /* Actual data at error address */
   tFlashAddress     errorAddress;                    /* Error address */
} tFlashParam;

/* Pointer to flash functions */
typedef void (*tFlashFct)(tFlashParam * fp);

/**********************************************************************************************************************
 *  MACROS
 *********************************************************************************************************************/

/* Flash write function */
#define FLASH_DRIVER_WRITE(ramBuffer, fp)\
   ((tFlashFct)(*(unsigned long *)&(ramBuffer)[FLASH_DRIVER_WRITE_OFFSET]))(fp)

/* Flash erase function */
#define FLASH_DRIVER_ERASE(ramBuffer, fp)\
   ((tFlashFct)(*(unsigned long *)&(ramBuffer)[FLASH_DRIVER_ERASE_OFFSET]))(fp)

/* Flash initialization function */
#define FLASH_DRIVER_INIT(ramBuffer, fp)\
   ((tFlashFct)(*(unsigned long *)&(ramBuffer)[FLASH_DRIVER_INIT_OFFSET]))(fp)

/* Flash deinitialization function */
#define FLASH_DRIVER_DEINIT(ramBuffer, fp)\
   ((tFlashFct)(*(unsigned long *)&(ramBuffer)[FLASH_DRIVER_DEINIT_OFFSET]))(fp)

/* PRQA L:FlashDrv_3453 */
/* PRQA L:FlashDrv_3458 */

#endif /* _FBLDRVFLASH_FCR4TCFLASHHIS_H_ */

