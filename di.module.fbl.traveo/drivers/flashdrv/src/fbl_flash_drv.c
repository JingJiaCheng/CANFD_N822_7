
/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
#include "fbl_flash_drv.h"
#include "s6j3200_HWDG.h"
#include "hwdg.h"

#ifndef SBL_ENABLE
#define SBL_ENABLE
#endif
#ifndef V_COMP_GHS
#define V_COMP_GHS
#endif
/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

#if ( FBLDRVFLASH_FCR4TCFLASHHIS_VERSION != 0x0104u ) || \
    ( FBLDRVFLASH_FCR4TCFLASHHIS_RELEASE_VERSION != 0x00u )
# error "Error in FLASHDRV.C: Source and header file versions are inconsistent!"
#endif
 
/***********************************************************************************************************************
 *  CPU TYPE
 **********************************************************************************************************************/

#if defined( V_CPU_TRAVEO ) && ( FLASH_DRIVER_VERSION_MCUTYPE != 0x05u )
# error "Error in FLASHDRV.C: CPU type error! Wrong FLASHDRV.H file."
#endif

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

/* PRQA S 3453 FlashDrv_3453 */ /* MD_CBD_19.7 */
/* PRQA S 3458 FlashDrv_3458 */ /* MD_CBD_19.4 */

#define FLASH_WD_TRIGGER_INTERVAL_MASK 0x0Fu

/* Commands for the flash algorithm */
#define FLASH_RESET_COMMAND            0xF0u
#define FLASH_SETUP_1_COMMAND          0xAAu
#define FLASH_SETUP_2_COMMAND          0x55u
#define FLASH_WRITE_COMMAND            0xA0u
#define FLASH_ERASE_COMMAND            0x80u
#define FLASH_SECTOR_ERASE_COMMAND     0x30u

/** Macro to calculate flash register address */
#define TCFCFG_REG_ADDR(address)       (*((tFlashSegmentPtr)(TCFCFG_BASE_ADDR + (address))))

#define TCFCFG_BASE_ADDR   0xB0411000ul
#define TCFCFG_FCPROTKEY   TCFCFG_REG_ADDR(0x00000000ul)    /**< Flash configuration protection key register */
#define TCFCFG_FCFGR       TCFCFG_REG_ADDR(0x00000008ul)    /**< Flash configuration register */
#define TCFCFG_FECCCTRL    TCFCFG_REG_ADDR(0x00000010ul)    /**< Flash ECC control register */
#define TCFCFG_FDATEIR     TCFCFG_REG_ADDR(0x00000018ul)    /**< Flash data bit error injection register */
#define TCFCFG_FECCEIR     TCFCFG_REG_ADDR(0x0000001Cul)    /**< Flash ECC bit error injection register */
#define TCFCFG_FICTRL0     TCFCFG_REG_ADDR(0x00000020ul)    /**< Flash interrupt control register 0 */
#define TCFCFG_FICTRL1     TCFCFG_REG_ADDR(0x00000024ul)    /**< Flash interrupt control register 1 */
#define TCFCFG_FICTRL2     TCFCFG_REG_ADDR(0x00000028ul)    /**< Flash interrupt control register 2 */
#define TCFCFG_FICTRL3     TCFCFG_REG_ADDR(0x0000002Cul)    /**< Flash interrupt control register 3 */
#define TCFCFG_FSTAT0      TCFCFG_REG_ADDR(0x00000038ul)    /**< Flash status register 0 */
#define TCFCFG_FSTAT1      TCFCFG_REG_ADDR(0x0000003Cul)    /**< Flash status register 1 */
#define TCFCFG_FSTAT2      TCFCFG_REG_ADDR(0x00000040ul)    /**< Flash status register 2 */
#define TCFCFG_FSTAT3      TCFCFG_REG_ADDR(0x00000044ul)    /**< Flash status register 3 */
#define TCFCFG_FSECIR      TCFCFG_REG_ADDR(0x00000050ul)    /**< Flash SEC interrupt register */
#define TCFCFG_FECCEAR     TCFCFG_REG_ADDR(0x00000054ul)    /**< Flash ECC error address register */
#define TCFCFG_FMIDR       TCFCFG_REG_ADDR(0x00000058ul)    /**< Flash interface module identification register */
#define TCFCFG_FCAMLR0     TCFCFG_REG_ADDR(0x00000060ul)    /**< Flash CAM output lower register 0 */
#define TCFCFG_FCAMLR1     TCFCFG_REG_ADDR(0x00000068ul)    /**< Flash CAM output lower register 1 */
#define TCFCFG_FCAMLR2     TCFCFG_REG_ADDR(0x00000070ul)    /**< Flash CAM output lower register 2 */
#define TCFCFG_FCAMLR3     TCFCFG_REG_ADDR(0x00000078ul)    /**< Flash CAM output lower register 3 */
#define TCFCFG_FCAMHR0     TCFCFG_REG_ADDR(0x00000064ul)    /**< Flash CAM output higher register 0 */
#define TCFCFG_FCAMHR1     TCFCFG_REG_ADDR(0x0000006Cul)    /**< Flash CAM output higher register 1 */
#define TCFCFG_FCAMHR2     TCFCFG_REG_ADDR(0x00000074ul)    /**< Flash CAM output higher register 2 */
#define TCFCFG_FCAMHR3     TCFCFG_REG_ADDR(0x0000007Cul)    /**< Flash CAM output higher register 3 */
#if defined( V_CPU_TRAVEO )
# define TCFCFG_FUCEDIR    TCFCFG_REG_ADDR(0x00000080ul)    /**< Flash Uncorrectable error interrupt register */
#endif

/* Flash configuration protection key register defines */
#define TCFCFG_FCPROTKEY_UNLOCK            0xCF61F1A5ul

/* Flash configuration register defines */
#define TCFCFG_FCFGR_WE                    4u
#define TCFCFG_FCFGR_SWFRST                6u

/* Flash interrupt control register defines */
#define TCFCFG_RDYIC                       8u
#define TCFCFG_HANGIC                      9u
#define TCFCFG_WR32FC                      10u
#define TCFCFG_RDYINT                      8u
#define TCFCFG_HANGINT                     9u

/*Flash Status bit */
#define TCFCFG_PGMS                         6u
#define TCFCFG_SERS                         3u
#define TCFCFG_READ                         2u
#define TCFCFG_RDY                          0u
#define TCFCFG_HANG                         1u
/* ECC register flags */
#if defined( V_CPU_TRAVEO )
# define FUCEDIR_UCEDDIC                   8u
# define FUCEDIR_UCEDINT                   16u
#endif
#define FSECIR_SECIC                       8u
#define FSECIR_SECINT                      16u

/* Flash sector sizes */
#define FLASH_LARGE_SECTOR_SIZE            0x00010000ul
#define FLASH_SMALL_SECTOR_SIZE            0x00002000ul

#define FLASH_LARGE_SECTOR_MIN_ERASE_SIZE  (FLASH_NUM_ERASE_CYCLES_LARGE * FLASH_LARGE_SECTOR_SIZE)
#define FLASH_SMALL_SECTOR_MIN_ERASE_SIZE  (FLASH_NUM_ERASE_CYCLES_SMALL * FLASH_SMALL_SECTOR_SIZE)

#define FLASH_LARGE_SECTOR_AREA_SIZE       (FLASH_NUMBER_OF_LARGE_SECTORS * FLASH_LARGE_SECTOR_SIZE)
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
# define FLASH_SMALL_SECTOR_SINGLE_MACRO_SIZE (FLASH_NUMBER_OF_SMALL_SECTORS/2 * FLASH_SMALL_SECTOR_SIZE)
#else
# define FLASH_SMALL_SECTOR_SINGLE_MACRO_SIZE (FLASH_NUMBER_OF_SMALL_SECTORS * FLASH_SMALL_SECTOR_SIZE)
#endif

/* Flash Macro base addresses */
#if defined( V_CPU_TRAVEO )
# define FLASH_LARGE_SECTORS_BASE          0x01A00000ul
# define FLASH_SMALL_SECTOR_A_BASE         0x019f0000ul
# if defined( FLASH_ENABLE_INTERLEAVED_MACROS ) || defined( FLASH_ENABLE_PARALLEL_ADDRESSED_SECTORS )
#  error "Spansion Traveo does not support interleaved Flash Macros / Parallel Addressed Sectors."
# endif
#else
# error "Unknown V_CPU_XX switch configured."
#endif /* V_CPU_XXX */

/* Flash overall small base address */
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
# define FLASH_SMALL_SECTORS_BASE          FLASH_SMALL_SECTOR_B_BASE
#else
# define FLASH_SMALL_SECTORS_BASE          FLASH_SMALL_SECTOR_A_BASE
#endif

/* Flash definitions used by flash functions */
#if defined( V_CPU_TRAVEO )
# define FLASH_CMD_ADDR0_STANDARD           0xaa8ul
# define FLASH_CMD_ADDR1_STANDARD           0x554ul
#else
# error "Unknown V_CPU_XX switch configured."
#endif /* V_CPU_XXX */

/* Flash added up large/small sector size */
# define FLASH_LARGE_SECTORS_TOTAL_SIZE     (FLASH_NUMBER_OF_LARGE_SECTORS * FLASH_LARGE_SECTOR_SIZE)
# define FLASH_SMALL_SECTORS_TOTAL_SIZE     (FLASH_NUMBER_OF_SMALL_SECTORS * FLASH_SMALL_SECTOR_SIZE)

#define FLASH_ADDR_TO_THROW_DATA_ABORT      0xfffffff0ul

#define FLASH_BDR_START_ADDRESS             (FLASH_SMALL_SECTOR_A_BASE + 0x0000ffe0ul)     /* Boot description record */
#define FLASH_BDR_END_ADDRESS               (FLASH_SMALL_SECTOR_A_BASE + (FLASH_SMALL_SECTOR_SINGLE_MACRO_SIZE-1u))

#define FLASH_MSDR_START_ADDRESS            (FLASH_SMALL_SECTOR_A_BASE)                    /* Security description record */
#define FLASH_MSDR_END_ADDRESS              (FLASH_SMALL_SECTOR_A_BASE + 0x0000007ful)

#define FLASH_TCSDR0_START_ADDRESS          (FLASH_SMALL_SECTOR_A_BASE + 0x00000080ul)     /* Uncorrectable error detection record */
#define FLASH_TCSDR0_END_ADDRESS            (FLASH_SMALL_SECTOR_A_BASE + 0x000001bful)

#define MAKE_STD_SECTOR_CMD_BASE_ADDR(addr) ((addr) & 0xffffe000ul)

#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
# define FLASH_MACRO_MASK                   0x08u

# define FLASH_TCSDR1_START_ADDRESS         (FLASH_SMALL_SECTOR_B_BASE)
# define FLASH_TCSDR1_END_ADDRESS           (FLASH_SMALL_SECTOR_B_BASE + 0x0000013ful)

# define MAKE_INTERLEAVED_SECTOR_CMD_BASE_ADDR(addr)   ((addr) & 0xffff0000ul)
#endif

/* For some devices, a flash block consists of multiple sectors that can be addressed in parallel,
 * and/or multiple flash modules are accessed interleaved.
 * Accordingly, erase commands may have to be issued multiple times for
 * every sector/flash module.
 */
#if defined( FLASH_ENABLE_PARALLEL_ADDRESSED_SECTORS )
# define FLASH_NUM_ERASE_CYCLES_SMALL        2u
# if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
#  define FLASH_NUM_ERASE_CYCLES_LARGE       4u
# else
#  define FLASH_NUM_ERASE_CYCLES_LARGE       2u
# endif
#else
# define FLASH_NUM_ERASE_CYCLES_SMALL        1u
# define FLASH_NUM_ERASE_CYCLES_LARGE        1u
#endif

/* Flash is always written in 32bit-mode.
 * Since there's no real 32bit-access for FCR4 derivatives,
 * the command sequence is repeated to write 16bit with each cycle.
 */
#if defined( FLASH_ENABLE_EMULATED_32BIT_WRITE )
# define FLASH_NUM_WRITE_CYCLES              2u
#else
# define FLASH_NUM_WRITE_CYCLES              1u
#endif

#define FLASH_ERASED_DOUBLE_WORD              0xFFFFFFFFul
#define FLASH_DOUBLE_WORD_SIZE                4u

/* Data synchronization barrier */
#define DSB()  __asm("DSB")

#if defined( FLASH_ENABLE_CHECK_CORRECTABLE_ECC_DURING_VERIFY )
# define FLASH_GET_ECC_CORECTABLE_ERROR_FLAG()     (FSECIR_SECINT == (TCFCFG_FSECIR & (1u << FSECIR_SECINT) ))
# define FLASH_CLEAR_ECC_CORECTABLE_ERROR_FLAG()   TCFCFG_FSECIR |= (1u << FSECIR_SECIC)
#else
# define FLASH_GET_ECC_CORECTABLE_ERROR_FLAG()     (1u == 0u) /* Do not check for correctable error */
# define FLASH_CLEAR_ECC_CORECTABLE_ERROR_FLAG()   /* Do not clear flag, keep it. */
#endif

/* Flag can be cleared in any case */

#if defined( V_CPU_TRAVEO )
# define FLASH_GET_ECC_UNCORRECTABLE_ERROR_FLAG()  (FUCEDIR_UCEDINT == (TCFCFG_FUCEDIR & (1u << FUCEDIR_UCEDINT) ))
# define FLASH_CLEAR_ECC_UNCORECTABLE_ERROR_FLAG() TCFCFG_FUCEDIR |= (1u << FUCEDIR_UCEDDIC)

# define FLASH_GET_ECC_ERROR_FLAGS()   ( FLASH_GET_ECC_CORECTABLE_ERROR_FLAG() || FLASH_GET_ECC_UNCORRECTABLE_ERROR_FLAG())
# define FLASH_CLEAR_ECC_ERROR_FLAGS() {\
                                          FLASH_CLEAR_ECC_CORECTABLE_ERROR_FLAG();\
                                          FLASH_CLEAR_ECC_UNCORECTABLE_ERROR_FLAG();\
                                       }
#else
/* Currently not used. Data abort trap is meant to lead to reset. */
# define FLASH_GET_ECC_ERROR_FLAGS()   FLASH_GET_ECC_CORECTABLE_ERROR_FLAG()
# define FLASH_CLEAR_ECC_ERROR_FLAGS() FLASH_CLEAR_ECC_CORECTABLE_ERROR_FLAG()
#endif




/* PRQA L:FlashDrv_3453 */
/* PRQA L:FlashDrv_3458 */

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* Flash access pointer type */
typedef volatile unsigned int * tFlashSegmentPtr;

/* Flash header structure */
typedef struct
{
  /* Definition of the 4-byte flash algorithm header */
  unsigned char version;
  unsigned char reserved;
  unsigned char maskType;
  unsigned char CPUType;
  tFlashFct flashInitFct;
  tFlashFct flashDeinitFct;
  tFlashFct flashEraseFct;
  tFlashFct flashWriteFct;
  unsigned char flashDrvMainVersion;
  unsigned char flashDrvSubVersion;
  unsigned char flashDrvReleaseVersion;
} tFlashHeader;                                                                 /* PRQA S 3448 */ /* MD_DrvFlash_3448 */

/** Boolean data type */
typedef enum
{
   FLASH_FALSE,
   FLASH_TRUE
} tFlashBoolean;

/* Address types */
typedef enum
{
   ADDR0_TYPE,
   ADDR1_TYPE
} tFlashAddrType;

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

static void FlashVerify( tFlashParam * fp );
static void FlashEnterProgMode( void );
static void FlashLeaveProgMode( void );
static tFlashBoolean FlashIsSmallSector( tFlashAddress address );
static tFlashBoolean FlashIsLargeSector( tFlashAddress address );
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
static tFlashBoolean FlashIsMacroA( tFlashAddress address );
static tFlashBoolean FlashIsMacroB( tFlashAddress address );
#endif /* FLASH_ENABLE_INTERLEAVED_MACROS */
static void FlashClearReadyHangInterruptFlags( tFlashAddress address );
static tFlashSegmentPtr FlashGetPointerToCommandAddress( tFlashAddress address, tFlashAddrType type );
static void FlashResetMacro( const tFlashParam * fp, tFlashAddress address );
static tFlashErrorCode FlashCheckWriteAddress( tFlashAddress address );
void WatchDogService(void);
static tFlashErrorCode FlashWaitAndCheckErase( const tFlashParam * fp, tFlashAddress address );
static tFlashErrorCode FlashWaitAndCheckWrite( const tFlashParam * fp, tFlashAddress address );

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

void ExpFlashInit( tFlashParam * fp );                                          /* PRQA S 3447 */ /* MD_DrvFlash_3447 */
void ExpFlashDeinit( tFlashParam * fp );                                        /* PRQA S 3447 */ /* MD_DrvFlash_3447 */
void ExpFlashErase( tFlashParam * fp );                                         /* PRQA S 3447 */ /* MD_DrvFlash_3447 */
void ExpFlashWrite( tFlashParam * fp );                                         /* PRQA S 3447 */ /* MD_DrvFlash_3447 */

void WatchDogService(void);

extern void   pbl_check_diag_response(void);
/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/
#ifdef SBL_ENABLE
#if defined( V_COMP_GHS )
# pragma ghs section rodata=".signature"                                        /* PRQA S 3116 */ /* MD_FlashDrv_3116 */
#endif
#endif
const tFlashHeader flashHeader =                                                /* PRQA S 3408 */ /* MD_DrvFlash_3408 */
{
   FLASH_DRIVER_VERSION_INTERFACE,
   0x00u,
   FLASH_DRIVER_VERSION_MASKTYPE,
   FLASH_DRIVER_VERSION_MCUTYPE,
   &ExpFlashInit,
   &ExpFlashDeinit,
   &ExpFlashErase,
   &ExpFlashWrite,
   (unsigned char)((FBLDRVFLASH_FCR4TCFLASHHIS_VERSION >> 8u) & 0xFFu),
   (unsigned char)((FBLDRVFLASH_FCR4TCFLASHHIS_VERSION >> 0u) & 0xFFu),
   (unsigned char)FBLDRVFLASH_FCR4TCFLASHHIS_RELEASE_VERSION
};
#ifdef SBL_ENABLE
#if defined( V_COMP_GHS )
# pragma ghs section rodata=default                                             /* PRQA S 3116 */ /* MD_FlashDrv_3116 */
#endif

#if defined( V_COMP_GHS )
# pragma ghs section text=".sbl"                              /* PRQA S 3116 */ /* MD_FlashDrv_3116 */ 
#endif
#endif

/***********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/* PRQA S 0303 EOF */ /* MD_DrvFlash_0303 */

/***********************************************************************************************************************
 *  FlashVerify
 **********************************************************************************************************************/
/*! \brief           Verifies written data, works on tFlashParam*
 *  \param[in,out]   fp Flash parameter handle
 **********************************************************************************************************************/
static void FlashVerify( tFlashParam * fp )
{
   tFlashLength i;
   tFlashSegmentPtr dest = (tFlashSegmentPtr)fp->address;
   tFlashSegmentPtr src = (tFlashSegmentPtr)fp->data;   /* PRQA S 0310, 3305 */ /* MD_DrvFlash_0310, MD_DrvFlash_3305 */

   FLASH_CLEAR_ECC_ERROR_FLAGS();                                               /* PRQA S 3109 */ /* MD_FlashDrv_3109 */

   for (i = 0u; i < (fp->length / FLASH_DOUBLE_WORD_SIZE); i++)
   {
      if (   (src[i] != dest[i])
          || (FLASH_GET_ECC_ERROR_FLAGS()))
      {
         /* Verify error, set error code */
         *((tFlashSegmentPtr)fp->intendedData) = src[i];/* PRQA S 0310, 3305 */ /* MD_DrvFlash_0310, MD_DrvFlash_3305 */
         *((tFlashSegmentPtr)fp->actualData) = dest[i]; /* PRQA S 0310, 3305 */ /* MD_DrvFlash_0310, MD_DrvFlash_3305 */
         fp->errorAddress = (tFlashAddress)&dest[i];
         fp->errorCode = kFlashWriteVerify;

         break;
      }

      if (0u == (i & FLASH_WD_TRIGGER_INTERVAL_MASK))
      {
		 WatchDogService();
      }
   }

   FLASH_CLEAR_ECC_ERROR_FLAGS();                                               /* PRQA S 3109 */ /* MD_FlashDrv_3109 */
}

/***********************************************************************************************************************
 *  FlashEnterProgMode
 **********************************************************************************************************************/
/*! \brief    Perform all steps to allow flash modification
 **********************************************************************************************************************/
static void FlashEnterProgMode( void )
{
   /* Disable flash write protection */
   TCFCFG_FCPROTKEY = TCFCFG_FCPROTKEY_UNLOCK;
   TCFCFG_FCFGR |= (1u << TCFCFG_FCFGR_WE);
}

/***********************************************************************************************************************
 *  FlashLeaveProgMode
 **********************************************************************************************************************/
/*! \brief    Perform all steps to return from flash modification
 **********************************************************************************************************************/
static void FlashLeaveProgMode( void )
{
   /* Enable flash write protection */
   TCFCFG_FCPROTKEY = TCFCFG_FCPROTKEY_UNLOCK;
   TCFCFG_FCFGR &= ~(1u << TCFCFG_FCFGR_WE);
}

/***********************************************************************************************************************
 *  FlashIsSmallSector
 **********************************************************************************************************************/
/*! \brief        Checks if address belongs to small sector
 *  \param[in]    address An AXI address
 *  \return       FLASH_FALSE if sector is not small, otherwise FLASH_TRUE
 **********************************************************************************************************************/
static tFlashBoolean FlashIsSmallSector( tFlashAddress address )
{
   tFlashBoolean result;

   if (   (address >= FLASH_SMALL_SECTORS_BASE)
       && (address < (FLASH_SMALL_SECTORS_BASE + FLASH_SMALL_SECTORS_TOTAL_SIZE)))
   {
      result = FLASH_TRUE;
   }
   else
   {
      result = FLASH_FALSE;
   }

   return result;
}

/***********************************************************************************************************************
 *  FlashIsLargeSector
 **********************************************************************************************************************/
/*! \brief        Checks if address belongs to large sector
 *  \param[in]    address An AXI address
 *  \return       FLASH_FALSE if sector is not large, otherwise FLASH_TRUE
 **********************************************************************************************************************/
static tFlashBoolean FlashIsLargeSector( tFlashAddress address )
{
   tFlashBoolean result;

   if (   (address >= FLASH_LARGE_SECTORS_BASE)
       && (address < (FLASH_LARGE_SECTORS_BASE + FLASH_LARGE_SECTORS_TOTAL_SIZE)))
   {
      result = FLASH_TRUE;
   }
   else
   {
      result = FLASH_FALSE;
   }

   return result;
}

#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
/***********************************************************************************************************************
 *  FlashIsFlashA
 **********************************************************************************************************************/
/*! \brief        Checks if address belongs to flash macro A
 *  \param[in]    address An AXI address
 *  \return       FLASH_FALSE if address does not belong to macro A, otherwise FLASH_TRUE
 **********************************************************************************************************************/
static tFlashBoolean FlashIsMacroA( tFlashAddress address )
{
   tFlashBoolean result;

   if (   (FLASH_FALSE != FlashIsLargeSector(address))
       && ((address & FLASH_MACRO_MASK) == 0u))
   {
      result = FLASH_TRUE;
   }
   else if (   (FLASH_FALSE != FlashIsSmallSector(address))
            && (   (FLASH_SMALL_SECTOR_A_BASE <= address)
                && (address < (FLASH_SMALL_SECTOR_A_BASE + FLASH_SMALL_SECTOR_SINGLE_MACRO_SIZE))))
   {
      result = FLASH_TRUE;
   }
   else
   {
      result = FLASH_FALSE;
   }

   return result;
}

/***********************************************************************************************************************
 *  FlashIsFlashB
 **********************************************************************************************************************/
/*! \brief        Checks if address belongs to flash macro B
 *  \param[in]    address An AXI address
 *  \return       FLASH_FALSE if address does not belong to macro B, otherwise FLASH_TRUE
 **********************************************************************************************************************/
static tFlashBoolean FlashIsMacroB( tFlashAddress address )
{
   tFlashBoolean result;

   if (   (FLASH_FALSE != FlashIsLargeSector(address))
       && (0u != (address & FLASH_MACRO_MASK)))
   {
      result = FLASH_TRUE;
   }
   else if (   (FLASH_FALSE != FlashIsSmallSector(address))
            && (   (address >= FLASH_SMALL_SECTOR_B_BASE)
                && (address < (FLASH_SMALL_SECTOR_B_BASE + FLASH_SMALL_SECTOR_SINGLE_MACRO_SIZE))))
   {
      result = FLASH_TRUE;
   }
   else
   {
      result = FLASH_FALSE;
   }

   return result;
}
#endif

/***********************************************************************************************************************
 *  FlashClearReadyHangInterruptFlags
 **********************************************************************************************************************/
/*! \brief        Clears the RDYINT and HANGINT flags of the target flash macro
 *  \param[in]    address An AXI address
 **********************************************************************************************************************/
static void FlashClearReadyHangInterruptFlags( tFlashAddress address )
{
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
#else
# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)address;                                                               /* PRQA S 3112 */ /* MD_DrvFlash_3112 */
# endif
#endif

#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   if (FLASH_FALSE != FlashIsMacroA(address))
#endif
   {
      TCFCFG_FICTRL0 |= (1u << TCFCFG_HANGIC);
      TCFCFG_FICTRL0 |= (1u << TCFCFG_RDYIC);
   }
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   else if (FLASH_FALSE != FlashIsMacroB(address))
   {
      TCFCFG_FICTRL1 |= (1u << TCFCFG_HANGIC);
      TCFCFG_FICTRL1 |= (1u << TCFCFG_RDYIC);
   }
   else
   {
      /* Should never be reached */
   }
#endif /* FLASH_ENABLE_INTERLEAVED_MACROS */
}

/***********************************************************************************************************************
 *  FlashGetPointerToCommandAddress
 **********************************************************************************************************************/
/*! \brief        Provides the command address handle
 *  \param[in]    address An AXI address
 *  \param[in]    type The command address type (0 or 1)
 *  \return       The command address handle
 **********************************************************************************************************************/
static tFlashSegmentPtr FlashGetPointerToCommandAddress( tFlashAddress address, tFlashAddrType type )
{
   tFlashAddress commandAddress;

   if (FLASH_FALSE != FlashIsSmallSector(address))
   {
      commandAddress = MAKE_STD_SECTOR_CMD_BASE_ADDR(address);
      commandAddress += (ADDR0_TYPE == type) ? FLASH_CMD_ADDR0_STANDARD : FLASH_CMD_ADDR1_STANDARD;
   }
   else
   {
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
      if (FLASH_FALSE != FlashIsMacroA(address))
      {
         commandAddress = MAKE_INTERLEAVED_SECTOR_CMD_BASE_ADDR(address);
         commandAddress += (ADDR0_TYPE == type) ? FLASH_CMD_ADDR0_INTERLEAVED_A : FLASH_CMD_ADDR1_INTERLEAVED_A;
      }
      else if (FLASH_FALSE != FlashIsMacroB(address))
      {
         commandAddress = MAKE_INTERLEAVED_SECTOR_CMD_BASE_ADDR(address);
         commandAddress += (ADDR0_TYPE == type) ? FLASH_CMD_ADDR0_INTERLEAVED_B : FLASH_CMD_ADDR1_INTERLEAVED_B;
      }
#else
      if (FLASH_FALSE != FlashIsLargeSector(address))
      {
         /* Below is the same code that is used for small sector. */
         commandAddress = MAKE_STD_SECTOR_CMD_BASE_ADDR(address);
         commandAddress += (ADDR0_TYPE == type) ? FLASH_CMD_ADDR0_STANDARD : FLASH_CMD_ADDR1_STANDARD;
      }
#endif /* FLASH_ENABLE_INTERLEAVED_MACROS */
      else
      {
         /* Should never be reached */
         commandAddress = FLASH_ADDR_TO_THROW_DATA_ABORT;
      }
   }

   return (tFlashSegmentPtr)commandAddress;
}

/***********************************************************************************************************************
 *  FlashResetMacro
 **********************************************************************************************************************/
/*! \brief        Resets both flash macros
 *  \param[in]    fp Flash parameter handle
 *  \param[in]    address An AXI address
 **********************************************************************************************************************/
static void FlashResetMacro( const tFlashParam * fp, tFlashAddress address )
{
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
#else
# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)address;                                                               /* PRQA S 3112 */ /* MD_DrvFlash_3112 */
# endif
#endif

#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   if (FLASH_FALSE != FlashIsMacroA(address))
#endif
   {
      TCFCFG_FICTRL0 |= (1u << TCFCFG_WR32FC);

      TCFCFG_FCPROTKEY = TCFCFG_FCPROTKEY_UNLOCK;
      TCFCFG_FCFGR |= (1u << TCFCFG_FCFGR_SWFRST);

      while (0u == (TCFCFG_FSTAT0 & (1u << TCFCFG_RDYINT)))
      {
		WatchDogService();
      }
   }
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   else if (FLASH_FALSE != FlashIsMacroB(address))
   {
      TCFCFG_FICTRL1 |= (1u << TCFCFG_WR32FC);

      TCFCFG_FCPROTKEY = TCFCFG_FCPROTKEY_UNLOCK;
      TCFCFG_FCFGR |= (1u << TCFCFG_FCFGR_SWFRST);

      while (0u == (TCFCFG_FSTAT1 & (1u << TCFCFG_RDYINT)))
      {

		WatchDogService();
      }
   }
   else
   {
      /* Should never be reached */
   }
#endif /* FLASH_ENABLE_INTERLEAVED_MACROS */
}

/***********************************************************************************************************************
 *  FlashCheckWriteAddress
 **********************************************************************************************************************/
/*! \brief        Checks if address belongs to any description record except the BDR
 *  \param[in]    address An AXI address
 *  \return       An error code
 **********************************************************************************************************************/
static tFlashErrorCode FlashCheckWriteAddress( tFlashAddress address )
{
   tFlashErrorCode result;

   if (   ((address >= FLASH_MSDR_START_ADDRESS) && (address <= FLASH_MSDR_END_ADDRESS))
       || ((address >= FLASH_TCSDR0_START_ADDRESS) && (address <= FLASH_TCSDR0_END_ADDRESS)))
   {
      result = kFlashInvalidAddr;
   }
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   else if ((address >= FLASH_TCSDR1_START_ADDRESS) && (address <= FLASH_TCSDR1_END_ADDRESS))
   {
      result = kFlashInvalidAddr;
   }
#endif /* FLASH_ENABLE_INTERLEAVED_MACROS */
   else
   {
     result = kFlashOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  ExpFlashInit
 **********************************************************************************************************************/
/*! \brief           Do initialization before flash programming
 *  \param[in,out]   fp Flash parameter handle
 **********************************************************************************************************************/
void ExpFlashInit( tFlashParam * fp )                                           /* PRQA S 1505 */ /* MD_DrvFlash_1505 */
{
   /* Report flash driver version to flio */
   fp->majorVersion = FLASH_DRIVER_VERSION_MAJOR;
   fp->minorVersion = FLASH_DRIVER_VERSION_MINOR;
   fp->patchLevel = FLASH_DRIVER_VERSION_PATCH;

   /* Preset error code */
   fp->errorCode = kFlashOk;
}

/***********************************************************************************************************************
 *  ExpFlashDeinit
 **********************************************************************************************************************/
/*! \brief           Do deinitialization after flash programming
 *  \param[in,out]   fp Flash parameter handle
 **********************************************************************************************************************/
void ExpFlashDeinit( tFlashParam * fp )/* PRQA S 3673 */ /* MD_DrvFlash_3673 */ /* PRQA S 1505 */ /* MD_DrvFlash_1505 */
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)fp;                                                                    /* PRQA S 3112 */ /* MD_DrvFlash_3112 */
#endif
}

/***********************************************************************************************************************
 *  ExpFlashErase
 **********************************************************************************************************************/
/*! \brief           Erases one flash sector
 *  \param[in,out]   fp Flash parameter handle
 **********************************************************************************************************************/
void ExpFlashErase( tFlashParam * fp )                                          /* PRQA S 1505 */ /* MD_DrvFlash_1505 */
{
   unsigned int i;
   unsigned int eraseCycles;
   unsigned long remainingEraseLength;
   unsigned long minEraseRegionSize = 0ul;
   tFlashSegmentPtr pAddress;
   tFlashSegmentPtr pCmdAddr0;
   tFlashSegmentPtr pCmdAddr1;
   
   /* Preset error code */
   fp->errorCode = kFlashOk;

   remainingEraseLength = fp->length;

   /* Initialize sector address pointer */
   pAddress = (tFlashSegmentPtr)(fp->address);

   while( (remainingEraseLength > 0ul) && (kFlashOk == fp->errorCode))
   {
      /* Increment sector address pointer to next erase sector border */
      pAddress = &pAddress[(minEraseRegionSize / FLASH_DOUBLE_WORD_SIZE)];

      if (FLASH_FALSE != FlashIsSmallSector((tFlashAddress)pAddress))
      {
         eraseCycles = FLASH_NUM_ERASE_CYCLES_SMALL;
         minEraseRegionSize = FLASH_SMALL_SECTOR_MIN_ERASE_SIZE;
      }
      else if (FLASH_FALSE != FlashIsLargeSector((tFlashAddress)pAddress))
      {
         eraseCycles = FLASH_NUM_ERASE_CYCLES_LARGE;
         minEraseRegionSize = FLASH_LARGE_SECTOR_MIN_ERASE_SIZE;
      }
      else
      {
         /* Should never happen */
         eraseCycles = 0u;
         fp->errorCode = kFlashEraseInvalidAddr;
      }

      if (remainingEraseLength >= minEraseRegionSize)
      {
         remainingEraseLength -= minEraseRegionSize;
      }
      else
      {
         /* The input region was not aligned to the required minimum region size. */
         fp->errorCode = kFlashEraseFailed;
         fp->errorAddress = (tFlashAddress)pAddress;
         break;
      }

      /* Prepare programming */
      FlashEnterProgMode();

      for (i = 0u; i < eraseCycles; i++)
      {
         /* Get command addresses for the current destination address */
         pCmdAddr0 = FlashGetPointerToCommandAddress((tFlashAddress)&pAddress[i], ADDR0_TYPE);
         pCmdAddr1 = FlashGetPointerToCommandAddress((tFlashAddress)&pAddress[i], ADDR1_TYPE);

         FlashClearReadyHangInterruptFlags((tFlashAddress)&pAddress[i]);
         
         DSB();
         pAddress[i] = FLASH_RESET_COMMAND;
         DSB();
         *pCmdAddr0 = FLASH_SETUP_1_COMMAND;
         DSB();
         *pCmdAddr1 = FLASH_SETUP_2_COMMAND;
         DSB();
         *pCmdAddr0 = FLASH_ERASE_COMMAND;
         DSB();
         *pCmdAddr0 = FLASH_SETUP_1_COMMAND;
         DSB();
         *pCmdAddr1 = FLASH_SETUP_2_COMMAND;
         DSB();
         pAddress[i] = FLASH_SECTOR_ERASE_COMMAND;         
         DSB();

         if (kFlashOk != FlashWaitAndCheckErase(fp, (tFlashAddress)&pAddress[i]))
         {
            fp->errorCode = kFlashEraseFailed;
            fp->errorAddress = (tFlashAddress)&pAddress[i];
            break;
         }

         pbl_check_diag_response();
      }

      if (kFlashOk == fp->errorAddress)
      {
         /* On erased state no ECC error can occur when reading. Verify erased state. */
         FLASH_CLEAR_ECC_ERROR_FLAGS();                                         /* PRQA S 3109 */ /* MD_FlashDrv_3109 */

         /* Verify erase operation as requested by HIS standard */
         /* i is counting 32 bit units */
         for (i = 0u; i < (minEraseRegionSize / FLASH_DOUBLE_WORD_SIZE); i++)
         {
            if (  (FLASH_ERASED_DOUBLE_WORD != pAddress[i])
                || (FLASH_GET_ECC_ERROR_FLAGS()))
            {
               fp->errorCode = kFlashEraseFailed;
               fp->errorAddress = (tFlashAddress)&pAddress[i];
               break;
            }

            if (0u == (i & FLASH_WD_TRIGGER_INTERVAL_MASK))
            {
				WatchDogService();
            }
         
         }

         FLASH_CLEAR_ECC_ERROR_FLAGS();                                         /* PRQA S 3109 */ /* MD_FlashDrv_3109 */
      }
   }

   /* Return to normal operation */
   FlashLeaveProgMode();
}                                                       /* PRQA S 6010, 6030 */ /* MD_DrvFlash_6010, MD_DrvFlash_6030 */

/***********************************************************************************************************************
 *  ExpFlashWrite
 **********************************************************************************************************************/
/*! \brief           Program the flash at the given address
 *  \param[in,out]   fp Flash parameter handle
 **********************************************************************************************************************/
void ExpFlashWrite( tFlashParam * fp )                                          /* PRQA S 1505 */ /* MD_DrvFlash_1505 */
{
   tFlashLength i;
   unsigned int data;                                                           /* PRQA S 0781 */ /* MD_FlashDrv_0781 */
   unsigned int writeCycle;
   tFlashSegmentPtr pAddress;
   tFlashSegmentPtr pCmdAddr0;
   tFlashSegmentPtr pCmdAddr1;

   /* Preset error code */
   fp->errorCode = kFlashOk;

   /* Assign destination address */
   pAddress = (tFlashSegmentPtr)(fp->address);

   /* Prepare programming */
   FlashEnterProgMode();

   /* Program all bytes */
   for (i = 0u; i < fp->length; i += FLASH_DOUBLE_WORD_SIZE)
   {
      /* Make sure the flash cells have been erased before re-writing */
      if (FLASH_ERASED_DOUBLE_WORD != *pAddress)
      {
         fp->errorCode = kFlashWriteConditions;
         fp->errorAddress = (tFlashAddress)fp->address;
      }
      else if (kFlashOk != FlashCheckWriteAddress((tFlashAddress)pAddress))
      {
         fp->errorCode = kFlashWriteFailed;
         fp->errorAddress = (tFlashAddress)pAddress;
      }
      else
      {
         /* Get command addresses for the current destination address */
         pCmdAddr0 = FlashGetPointerToCommandAddress((tFlashAddress)pAddress, ADDR0_TYPE);
         pCmdAddr1 = FlashGetPointerToCommandAddress((tFlashAddress)pAddress, ADDR1_TYPE);

         /* Convert source data into words */
         data  = ((unsigned int)(fp->data[i + 0u]) <<  0u);
         data |= ((unsigned int)(fp->data[i + 1u]) <<  8u);
         data |= ((unsigned int)(fp->data[i + 2u]) << 16u);
         data |= ((unsigned int)(fp->data[i + 3u]) << 24u);

         /* Data access must be repeated, in first cycle lower word and in second
          * cycle upper word is written to flash memory */
         for (writeCycle = 0u; writeCycle < FLASH_NUM_WRITE_CYCLES; writeCycle++)
         {
            FlashClearReadyHangInterruptFlags((tFlashAddress)pAddress);

            DSB();
            *pAddress = FLASH_RESET_COMMAND;
            DSB();
            *pCmdAddr0 = FLASH_SETUP_1_COMMAND;
            DSB();
            *pCmdAddr1 = FLASH_SETUP_2_COMMAND;
            DSB();
            *pCmdAddr0 = FLASH_WRITE_COMMAND;
            DSB();
            *pAddress = data;
            DSB();

            if (kFlashOk != FlashWaitAndCheckWrite(fp, (tFlashAddress)pAddress))
            {
               fp->errorAddress = (tFlashAddress)pAddress;
               fp->errorCode = kFlashWriteFailed;
               break;
            }
         }
      }

      if (kFlashOk == fp->errorCode)
      {
         pAddress++;                                                            /* PRQA S 0489 */ /* MD_FlashDrv_0489 */
      }
      else
      {
         break;
      }
   }

   /* Reset write enable flag */
   FlashLeaveProgMode();

   /* Verify data */
   if (kFlashOk == fp->errorCode)
   {
      FlashVerify(fp);
   }
}

void WatchDogService(void)
{    
                                                                          /* PRQA S 6080 */ /* MD_DrvFlash_6080 */
    // Satisfy compiler regarding "order of volatile accesses" warning in if-statement
    uint32_t u32CurrentLowerLimit = HWDG_RUNLLC;
    
    // Clear hardware watchdog if lower limit of window has been exceeded
    if (HWDG_CNT > u32CurrentLowerLimit)
    {
        HWDG_TRG0 = HWDG_TRG0CFG;
        HWDG_TRG1 = HWDG_TRG1CFG;
    }

}

/***********************************************************************************************************************
 *  FlashWaitAndCheckErase
 **********************************************************************************************************************/
/*! \brief        Waits for end of flash command sequence
 *  \param[in]    fp Flash parameter handle
 *  \param[in]    address An AXI address
 *  \return       An error code
 **********************************************************************************************************************/
static tFlashErrorCode FlashWaitAndCheckErase( const tFlashParam * fp, tFlashAddress address )
{
   tFlashErrorCode result;

#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   if (FLASH_FALSE != FlashIsMacroA(address))
#endif
   {
      while((0u != ((TCFCFG_FSTAT0) & (1u << TCFCFG_SERS))) && (0u == ((TCFCFG_FSTAT0) & (1u << TCFCFG_HANG))))
      {
		 WatchDogService();
      }

      if(0u != (TCFCFG_FSTAT0 & (1u << TCFCFG_RDY)))
      {
         result = kFlashOk;
      }
      else /* (TCFCFG_FSTAT0 & (1u << TCFCFG_HANGINT)) */
      {
         FlashResetMacro(fp, address);
         result = kFlashConditions;
      }
   }
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   else if (FLASH_FALSE != FlashIsMacroB(address))
   {
      while((0u != (TCFCFG_FSTAT1 & (1u << TCFCFG_SERS))) && (0u == (TCFCFG_FSTAT1 & (1u << TCFCFG_HANG))))
      {
		WatchDogService();
      }

      if(0u != (TCFCFG_FSTAT1 & (1u << TCFCFG_RDY)))
      {
         result = kFlashOk;
      }
      else /* (TCFCFG_FSTAT1 & (1u << TCFCFG_HANGINT)) */
      {
         FlashResetMacro(fp, address);
         result = kFlashConditions;
      }
   }
   else
   {
      /* Should never be reached */
      result = kFlashInvalidAddr;
   }
#endif /* FLASH_ENABLE_INTERLEAVED_MACROS */

   return result;
}

/***********************************************************************************************************************
 *  FlashWaitAndCheckWrite
 **********************************************************************************************************************/
/*! \brief        Waits for end of flash command sequence
 *  \param[in]    fp Flash parameter handle
 *  \param[in]    address An AXI address
 *  \return       An error code
 **********************************************************************************************************************/
static tFlashErrorCode FlashWaitAndCheckWrite( const tFlashParam * fp, tFlashAddress address )
{
   tFlashErrorCode result;

#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   if (FLASH_FALSE != FlashIsMacroA(address))
#endif
   {
      while((0u != ((TCFCFG_FSTAT0) & (1u << TCFCFG_PGMS))) && (0u == ((TCFCFG_FSTAT0) & (1u << TCFCFG_HANG))))
      {
		 WatchDogService();
      }

      if(0u != (TCFCFG_FSTAT0 & (1u << TCFCFG_RDY)))
      {
         result = kFlashOk;
      }
      else /* (TCFCFG_FSTAT0 & (1u << TCFCFG_HANGINT)) */
      {
         FlashResetMacro(fp, address);
         result = kFlashConditions;
      }
   }
#if defined( FLASH_ENABLE_INTERLEAVED_MACROS )
   else if (FLASH_FALSE != FlashIsMacroB(address))
   {
      while((0u != (TCFCFG_FSTAT1 & (1u << TCFCFG_PGMS))) && (0u == (TCFCFG_FSTAT1 & (1u << TCFCFG_HANG))))
      {
		WatchDogService();
      }

      if(0u != (TCFCFG_FSTAT1 & (1u << TCFCFG_RDY)))
      {
         result = kFlashOk;
      }
      else /* (TCFCFG_FSTAT1 & (1u << TCFCFG_HANGINT)) */
      {
         FlashResetMacro(fp, address);
         result = kFlashConditions;
      }
   }
   else
   {
      /* Should never be reached */
      result = kFlashInvalidAddr;
   }
#endif /* FLASH_ENABLE_INTERLEAVED_MACROS */

   return result;
}



#ifdef SBL_ENABLE
#if defined( V_COMP_GHS )
# pragma ghs section rodata=default                                             /* PRQA S 3116 */ /* MD_FlashDrv_3116 */
#endif
#endif

