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



/* ===========================================================================
**  P R I V A T E   M A C R O   D E F I N I T I O N S
** =========================================================================*/

#define HYPERBUSICH2_MEM_BASEADDR_CS0 (HYPERFLASH0_START_ADDRESS) /* Memory for Hyper Bus ch. 0 */
#define HYPERBUSICH2_MEM_BASEADDR_CS1 (HYPERFLASH1_START_ADDRESS) /* Memory for Hyper Bus ch. 0 */

/*#define HYPERBUSI_REG_BASEADDR (0xB8028400) / Control Register for Hyper Bus ch. 0*/
/*#define HYPERBUSI_MEM_BASEADDR (0x48000000) / Memory for Hyper Bus ch. 0 */
#define HYPERBUSI_REG_BASEADDR (0x50281000) /* Control Register for Hyper Bus ch. 0*/

#define HYPERBUSI_REG_MBR0     (0x00000010) /* Memory Base Address Register for CS0 */
#define HYPERBUSI_REG_MCR0     (0x00000020) /* Memory Configuration Register for CS0 */

#define HYPERBUSI_REG_MBR1     (0x00000014) /* Memory Base Address Register for CS0 */
#define HYPERBUSI_REG_MCR1     (0x00000024) /* Memory Configuration Register for CS0 */
#define HYPERBUSI_REG_WPR      (0x00000044) /* Memory Base Address Register for CS0 */


#define HYPERBUSI_MCR0_HYPERFLASH_READ_VALUE   (0x00000003) /* MCR0 value for HyperFlash read operation - factory default */
/* ===========================================================================
**  P U B L I C   M A C R O   D E F I N I T I O N S
** =========================================================================*/
/* SSCG3 Multiplication factor for 4MHz Main clock with divide by 2 PLL output stage in SSCG3 PLL */
#define SSCG3_MULTIPLICATION_200    (200)   /* to achieve 100 MHz HyperBus clk */
#define SSCG3_MULTIPLICATION_180    (180)   /* to achieve 90 MHz HyperBus clk */
#define SSCG3_MULTIPLICATION_160    (160)   /* to achieve 80 MHz HyperBus clk */
#define SSCG3_MULTIPLICATION_140    (140)   /* to achieve 70 MHz HyperBus clk */

/* Maximum frequency parameter values 0 - 3 => 4*/
#define HYPER_BUS_MAX_FREQ_PARAMS   (4)


/* Default values as per the EMC specification */
#define EMC_HYPERBUS_ACTIVITY_DEFAULT            (0)
#define EMC_HYPERBUS_FREQ_DEFAULT                (0)
#define EMC_HYPERBUS_CTRL_OUTPUT_DRIVE_DEFAULT   (3)  /* 0 - 2mA, 1 - 5mA or 3 - 10mA */
#define EMC_HYPERBUS_DATA_OUTPUT_DRIVE_DEFAULT   (3)  /* 0 - 2mA, 1 - 5mA or 3 - 10mA */
#define EMC_HYPERBUS_CLK_OUTPUT_DRIVE_DEFAULT    (3)  /* 0 - 2mA, 1 - 5mA or 3 - 10mA */
#define EMC_HYPERFLASH_OUTPUT_DRIVE_DEFAULT      (0)


#define SIZE_OF_DATA_READ_IN_KB                  (64 * 1024)

#define ZERO_ELEMENT_ENTRY_XD1   0u
#define FIRST_ERBLCK_ENTRY_XD1   1u

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
void HyperFlash_Init(hyper_u32 hyper_addr,hyper_u8 chip_num);
hyper_u32 HyperFlashWrite(hyper_u16* targetPtr,hyper_u16* sourcePtr,hyper_u32 length,hyper_u32 base_addr);
hyper_u32 HyperFlash_Erase(hyper_u32 address,hyper_u32 length);

/* End of file ============================================================ */
#endif  /* #ifndef F_HYPERBUS_H */

