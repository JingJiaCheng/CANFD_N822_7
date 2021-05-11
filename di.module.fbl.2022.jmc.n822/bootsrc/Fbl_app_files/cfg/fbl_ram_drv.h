/******************************************************************************


 ******************************************************************************
  File Name     : Fbl_Ram_drv.h
  Version       : Initial Draft
  Author        : chenyin
  Created       : 2020/4/20
  Last Modified :
  Description   : Ram Drv
  Function List :
  History       :
  1.Date        : 2020/4/20
    Author      : chenyin
    Modification: Created file

******************************************************************************/

/*----------------------------------------------*
 * external variables                           *
 *----------------------------------------------*/

/*----------------------------------------------*
 * external routine prototypes                  *
 *----------------------------------------------*/

/*----------------------------------------------*
 * internal routine prototypes                  *
 *----------------------------------------------*/
typedef unsigned char  tRamData;
typedef unsigned int   tRamAddress;
typedef unsigned int   tRamLength;
typedef unsigned short tRamErrorCode;

/*----------------------------------------------*
 * project-wide global variables                *
 *----------------------------------------------*/

/*----------------------------------------------*
 * module-wide global variables                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * constants                                    *
 *----------------------------------------------*/

/*----------------------------------------------*
 * macros                                       *
 *----------------------------------------------*/

#define RAM_DRIVER_ENABLE  0

/* Flash driver software information */
#define RAM_DRIVER_VERSION_MAJOR        ((unsigned char)0x04u)
#define RAM_DRIVER_VERSION_MINOR        ((unsigned char)0x01)
#define RAM_DRIVER_VERSION_PATCH        ((unsigned char)0x00)

#define RAM_SEGMENT_SIZE               0x08u

/*----------------------------------------------*
 * routines' implementations                    *
 *----------------------------------------------*/
typedef struct
{
    /* Version information */
    unsigned char     patchLevel;                      /* Patch level */
    unsigned char     minorVersion;                    /* Minor version number */
    unsigned char     majorVersion;                    /* Major version number */
    unsigned char     reserved1;                       /* Reserved for future use */

    /* Return value/error code */
    tRamErrorCode   errorCode;                       /* Return value/error code */
    unsigned short    reserved2;                       /* Reserved for future use */

    /* Erase/write input parameters */
    tRamAddress     address;                         /* Logical target address */
    tRamLength      length;                          /* Length (in bytes) */
    tRamData *      data;                            /* Pointer to data buffer  */

    /* Pointer to watchdog trigger function */
    unsigned char     (* wdTriggerFct)(void);

    /* Erase/write output parameters */
    tRamData        intendedData[RAM_SEGMENT_SIZE];/* Intended data at error address */
    tRamData        actualData[RAM_SEGMENT_SIZE];  /* Actual data at error address */
    tRamAddress     errorAddress;                    /* Error address */
} tRamParam;

unsigned char RamInit(tRamParam *rp);

