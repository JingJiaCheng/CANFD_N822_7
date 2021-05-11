/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2016. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/

/*****************************************************************************

File Name        :  fbl_memdrv_if.c
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_memdrv_if.c
Author           :  kshanmu4
Description      :  Implements the Component management routines.
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/**  Include Files  **/
#include "fbl_memdrv.h"
#include "fbl_flash_drv.h"
#include "fbl_flash_cfg.h"
#include "fbl_app_cfg.h"
#include "fbl_app.h"
#include "fbl_main.h"
#include "HyperFlash.h"
#include "hf.h"
#include "fbl_wdt_drv.h"
#include "fbl_ram_drv.h"


#define VERIFYWRITE_ENABLE

tFlashParam fp;
tRamParam Rp;

extern void ExpFlashInit( tFlashParam * fp );                                          /* PRQA S 3447 */ /* MD_DrvFlash_3447 */
extern void ExpFlashDeinit( tFlashParam * fp );                                        /* PRQA S 3447 */ /* MD_DrvFlash_3447 */
extern void ExpFlashErase( tFlashParam * fp );                                         /* PRQA S 3447 */ /* MD_DrvFlash_3447 */
extern void ExpFlashWrite( tFlashParam * fp );                                         /* PRQA S 3447 */ /* MD_DrvFlash_3447 */

/*============================================================================
 ** Function Name:    FblFlashDrv_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the 
 **                   external flash module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FBL_OK      - Success
 **                   FBL_FAIL    - Initialization Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblFlashDrv_Init(UINT8 param)
{
  ExpFlashInit(&fp);
  if(fp.errorCode == FBL_OK)
  {
    return FBL_OK;
  }
  else
  {
    return FBL_FAIL;    
  }
}

/*============================================================================
 ** Function Name:    FblFlashDrv_DeInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to deinitialize the 
 **                   external flash module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FBL_OK      - Success
 **                   FBL_FAIL    - DeInitialization Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblFlashDrv_DeInit(UINT8 param)
{
  ExpFlashDeinit(&fp);
  if(fp.errorCode == FBL_OK)
  {
    return FBL_OK;
  }
  else
  {
    return FBL_FAIL;    
  }
}

/*============================================================================
 ** Function Name:    FblFlashDrv_Read 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read data from the 
 **                   external flash module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT32 addr   -  Input address to read
 **                   UINT32 *pLen  -  Pointer to the variable that 
 **                                    containts the size of the buffer
 **                                    When the function returns it contains
 **                                    no. of bytes actually read.
 **                   UINT8 *pBuffer - Pointer to data buffer to 
 **                                    copy the read data
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Read failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblFlashDrv_Read(UINT32 addr,  UINT32 *pLen, UINT8 *pBuffer)
{
    UINT8 status = FBL_OK;
    
    if((NULL == pLen) || (0u == *pLen) || (NULL == pBuffer))
    {
        status = FBL_INVALID_PARAM;
    }
    else
    {   
		(void)MEMCPY(pBuffer, (UINT8 *)addr, (*pLen));        
    }
    return status;
}

/*============================================================================
 ** Function Name:    FblFlashDrv_Write 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to write data to the 
 **                   external flash module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT32 addr   -  Input address to write
 **                   UINT32 *pLen  -  Pointer to the variable that 
 **                                    containts the size of the buffer
 **                                    When the function returns it contains
 **                                    no. of bytes actually written.
 **                   UINT8 *pBuffer - Pointer to data buffer that contains 
 **                                    the data to write
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Write failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblFlashDrv_Write(UINT32 addr, UINT32 *pLen,  const UINT8 *pBuffer)
{
  fp.address = addr;
  fp.length = *pLen;
  fp.data = &pBuffer[0];
  
  ExpFlashWrite(&fp);
	/*Set an error flag */
  if(fp.errorCode == FBL_OK)
  {
    return FBL_OK;
  }
  else
  {
    return FBL_FAIL;    
  }
}

/*============================================================================
 ** Function Name:    FblFlashDrv_Erase 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to erase data from the 
 **                   external flash module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT32 addr   -  Input address to erase
 **                   UINT32 len    -  Number of sectors to erase
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Write failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblFlashDrv_Erase(UINT32 addr, UINT32 len)
{
  fp.address = addr;
  fp.length = len;
  
  ExpFlashErase(&fp);
	/*Set an error flag */
  if(fp.errorCode == FBL_OK)
  {
    return FBL_OK;
  }
  else
  {
    return FBL_FAIL;    
  }	    
}



UINT8 FblHyperFlash_Init(UINT8 param)
{
  if(param==MEMDRV_HYPERFLASH0_ID)
  {
    Hyper_Init(HYPERBUSICH2_MEM_BASEADDR_CS0);
    HyperFlash_Init(HYPERBUSICH2_MEM_BASEADDR_CS0,0u);
  }
  else
  {
    Hyper_Init(HYPERBUSICH2_MEM_BASEADDR_CS1);
    HyperFlash_Init(HYPERBUSICH2_MEM_BASEADDR_CS1,1u);
  }  
  return FBL_OK;
}

UINT8 FblHyperFlash_DeInit(UINT8 param)
{   
  return FBL_OK;
}

UINT8 FblHyperFlash_Read(UINT32 addr,  UINT32 *pLen, UINT8 *pBuffer)
{
    return FBL_FAIL;
}

UINT8 FblHyperFlash_Write(UINT32 addr, UINT32 *pLen,  const UINT8 *pBuffer)
{
    UINT8 status = FBL_OK;
#ifdef VERIFYWRITE_ENABLE
    UINT32 VerifyLength = (*pLen);
#endif /* VERIFYWRITE_ENABLE */

    status = (UINT8)HyperFlashWrite((UINT16 *)addr,(UINT16 *)pBuffer,*pLen,addr);
#ifdef VERIFYWRITE_ENABLE
    /* Verify */
    if ( FBL_OK == status )   /* Write Success */
    {
        do
        {
            if ( *((UINT8 *)addr) != *pBuffer )   /* find write error */
            {
                status = FBL_FAIL;
                break;
            }
            else
            {
                ;
            }

            addr++;
            pBuffer++;
        } while ( --VerifyLength > 0 );
    }
    else    
    {
        ;
    }
#endif /* VERIFYWRITE_ENABLE */

    return status;
}

UINT8 FblHyperFlash_Erase(UINT32 addr, UINT32 len)
{
  UINT8 status = FBL_OK;
  
  status = (UINT8)HyperFlash_Erase(addr,len);	
  
  return status;
}


/*============================================================================
 ** Function Name:    FblRamDrv_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the 
 **                   Ram module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FBL_OK      - Success
 **                   FBL_FAIL    - Initialization Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblRamDrv_Init(UINT8 param)
{
    UINT8 state = FBL_FAIL;
    param = param;

    state = RamInit(&Rp);

    return state;
}

/*============================================================================
 ** Function Name:    FblRamDrv_DeInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to deinitialize the 
 **                   Ram module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FBL_OK      - Success
 **                   FBL_FAIL    - DeInitialization Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblRamDrv_DeInit(UINT8 param)
{
    UINT8 state = FBL_FAIL;

    param = param;

    state = RamInit(&Rp);

    return state;
}

/*============================================================================
 ** Function Name:    FblRamDrv_Read 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read data from the 
 **                   Ram module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT32 addr   -  Input address to read
 **                   UINT32 *pLen  -  Pointer to the variable that 
 **                                    containts the size of the buffer
 **                                    When the function returns it contains
 **                                    no. of bytes actually read.
 **                   UINT8 *pBuffer - Pointer to data buffer to 
 **                                    copy the read data
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Read failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/

UINT8 FblRamDrv_Read(UINT32 addr,  UINT32 *pLen, UINT8 *pBuffer)
{
    UINT8 status = FBL_OK;

    if((NULL == pLen) || (0u == *pLen) || (NULL == pBuffer))
    {
        status = FBL_INVALID_PARAM;
    }
    else
    {   
        (void)MEMCPY(pBuffer, (UINT8 *)addr, (*pLen));        
    }
    return status;
}

/*============================================================================
 ** Function Name:    FblRamDrv_Write 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to write data to the 
 **                   Ram module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT32 addr   -  Input address to write
 **                   UINT32 *pLen  -  Pointer to the variable that 
 **                                    containts the size of the buffer
 **                                    When the function returns it contains
 **                                    no. of bytes actually written.
 **                   UINT8 *pBuffer - Pointer to data buffer that contains 
 **                                    the data to write
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Write failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblRamDrv_Write(UINT32 addr, UINT32 *pLen,  const UINT8 *pBuffer)
{
    UINT8 *address = (UINT8 *)addr;
    UINT32 length = *pLen;

    UINT8 status = FBL_OK;

    if((NULL == pLen) || (0u == length) || (NULL == pBuffer))
    {
        status = FBL_INVALID_PARAM;
    }
    else
    {   
//        (void)MEMCPY(address, data, length);  
          address = address;

    }
    return status;

}

/*============================================================================
 ** Function Name:    FblRamDrv_Erase 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to erase data from the 
 **                   Ram module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT32 addr   -  Input address to erase
 **                   UINT32 len    -  Number of sectors to erase
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Write failed
 **                   FBL_INVALID_PARAM - Invalid Parameters
 **                   FBL_COMM_FAIL - Communication Failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblRamDrv_Erase(UINT32 addr, UINT32 len)
{
    return FBL_OK;
}

/******************************************************************************/
/*   for each change to this file, be sure to record:                         */
/*      1.  who made the change and when the change was made                  */
/*      2.  why the change was made and the intended result                   */
/*   Following block needs to be repeated for each change                     */
/******************************************************************************/
/*   Note: In the traceability column we need to trace back to the Design Doc.*/
/*   For the initial version it is traced to the Design Document section.     */
/*   For further changes it shall trace to the source of the change which may */
/*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  */
/*   other reason                                                             */
/******************************************************************************/
/*---------------------------------------------------------------------------
Date              : 26-SEP-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
