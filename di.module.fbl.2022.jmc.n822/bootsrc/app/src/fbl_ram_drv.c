/******************************************************************************



 ******************************************************************************
  File Name     : Fbl_Ram_drv.c
  Version       : Initial Draft
  Author        : chenyin
  Created       : 2020/4/20
  Last Modified :
  Description   : Fbl Ram Driver
  Function List :
  History       :
  1.Date        : 2020/4/20
    Author      : chenyin
    Modification: Created file

******************************************************************************/
#include "fbl_ram_drv.h"

/*----------------------------------------------*
 * external variables                           *
 *----------------------------------------------*/

/*----------------------------------------------*
 * external routine prototypes                  *
 *----------------------------------------------*/

/*----------------------------------------------*
 * internal routine prototypes                  *
 *----------------------------------------------*/

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
#define RAM_SIZE                      (0x00010000ul)
#define RAM_START_ADDRESS             (0x00010000ul)     /* Boot description record */
#define RAM_END_ADDRESS               (RAM_START_ADDRESS + (RAM_SIZE-1u))

/*----------------------------------------------*
 * routines' implementations                    *
 *----------------------------------------------*/


/*****************************************************************************
Prototype    : RamInit
Description  : Ram Init, Set Zero to addr.
Input        : void  
Output       : None
Return Value : 
Calls        : 
Called By    : UINT8
               FBL_OK      - Success
               FBL_FAIL    - DeInitialization Failed

History        :
    1.Date         : 2020/4/20
    Author       : chenyin
    Modification : Created function

*****************************************************************************/
unsigned char RamInit(tRamParam *rp)
{
    tRamAddress address = RAM_START_ADDRESS;
    /* Report flash driver version to flio */
    rp->majorVersion = RAM_DRIVER_VERSION_MAJOR;
    rp->minorVersion = RAM_DRIVER_VERSION_MINOR;
    rp->patchLevel = RAM_DRIVER_VERSION_PATCH;

    rp->address = address;
    rp->length = RAM_SIZE;
/*    
    for ( ulI = 0; ulI < rp->length; ulI++ )
    {
        *((unsigned char *)(rp->address)) = 0u;
        rp->address++;
    }
*/

    
    /* Preset error code */
    rp->errorCode = 0;

    return 0;
}

