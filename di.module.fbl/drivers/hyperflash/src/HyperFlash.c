/* ===========================================================================
**
**                       CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2009.  Visteon Corporation owns all rights to this work and
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

/*******************************************************************************
================================================================================
 								File Inclusions                                        
================================================================================
*******************************************************************************/

#include "HyperFlash.h"
#include "HMemDrv.h"
#include "fbl_main.h"


#define SECTOR_SIZE 					(4096u)
#define ONE_SEC_DELAY 				(1000u)
extern void HMemDrv_MainFunction(void);

/******************************************************************************
* Name         :  HyperFlash_Erase
* Called by    :  Pbl_memdrv
* Preconditions:  Hyper Bus need to be Initialized.
* Parameters   :  address and length.
* Return code  :  Status of the Erase.
* Description  :  Erases the Hyper memory of specified length.
******************************************************************************/
hyper_u32 HyperFlash_Erase(hyper_u32 address,hyper_u32 length)
{
  hyper_u32 maxTimeoutMs  = ONE_SEC_DELAY * (length / SECTOR_SIZE);
  hyper_u32 flashStatus = HYPER_FLASH_FAIL;
  hyper_u32 timeout;
  HMemDrv_JobResultType jobResult = EHMemDrvJobResult_JobFailed;
  
  
  if(E_OK == HMemDrv_Erase(address, length))
  {
    do
    {
      /* Wait till write is done */
      timeout = FblMain_GetCounter(20u);
      while(0u != FblMain_IsTimeoutElapsed(timeout))
      {
          /* Wait till timeout*/
      };

      maxTimeoutMs -= 20u;
      if(0u == maxTimeoutMs)
      {
        break;
      }
      
      /* Run HMemDrv */
      HMemDrv_MainFunction();
      
      /* Get Job Result */
      jobResult = HMemDrv_GetJobResult();
    } while(EHMemDrvJobResult_JobPending ==  jobResult);
  }
  
  if(jobResult == EHMemDrvJobResult_OK)
  {
    flashStatus = HYPER_FLASH_SUCCESS;
  }
  return flashStatus;
}

#if 0
hyper_u32 HyperFlash_Erase(hyper_u32 address,hyper_u32 length)
{

	hyper_u32 flashStatus = HYPER_FLASH_SUCCESS;
    hyper_u16* addrPtr = (hyper_u16*)address;

	nextSectAddrPtr = (hyper_u16*)(address + length);
	   /* Erase of sectors in memory range according to memory map */
   while ( (addrPtr < nextSectAddrPtr) && (flashStatus == HYPER_FLASH_SUCCESS))
   {
	if (address >= HYPERBUSICH2_MEM_BASEADDR_CS0 &&  address <	HYPERBUSICH2_MEM_BASEADDR_CS1)
	{
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,UNLOCK_ADDRESS_1) = (0xAAu);
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,UNLOCK_ADDRESS_2) = (0x55u);
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,UNLOCK_ADDRESS_1) = (0x80u);
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,UNLOCK_ADDRESS_1) = (0xAAu);
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,UNLOCK_ADDRESS_2) = (0x55u);
	      *addrPtr                 = (0x30u);

	      flashStatus = FlashStatusPolling((hyper_u16*)addrPtr, 250,address);
	      pbl_check_diag_response();
		  delay_ms(1);
	      addrPtr = (hyper_u16*) GetNextSecStartAddr((hyper_u32)addrPtr,0);
	}
	else
	{
		    AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_1) = (0xAAu);
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_2) = (0x55u);
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_1) = (0x80u);
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_1) = (0xAAu);
	      AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_2) = (0x55u);
	      *addrPtr                 = (0x30u);

	      flashStatus = FlashStatusPolling((hyper_u16*)addrPtr, 250,address);
	      pbl_check_diag_response();
		  delay_ms(1);
	      addrPtr = (hyper_u16*) GetNextSecStartAddr((hyper_u32)addrPtr,1);

	}	
   }
	if (address >= HYPERBUSICH2_MEM_BASEADDR_CS0 &&  address <	HYPERBUSICH2_MEM_BASEADDR_CS1)
	{
    	AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,0x00u) = RESET_CMD;
	}
	else
	{
		AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,0x00u) = RESET_CMD;

	}

   return flashStatus;
	
}
#endif


hyper_u32 HyperFlash_Write(hyper_u16* targetPtr, hyper_u16* sourcePtr, hyper_u32 length, hyper_u32 base_addr)
{
  hyper_u32 maxTimeoutMs  = ONE_SEC_DELAY;
  hyper_u32 flashStatus = HYPER_FLASH_FAIL;
  hyper_u32 timeout;
  HMemDrv_JobResultType jobResult = EHMemDrvJobResult_JobFailed;
  
  
  if(E_OK == HMemDrv_Write((HMemDrv_AddressType)targetPtr, sourcePtr, length/2u))
  {
    do
    {
      /* Wait till write is done */
      timeout = FblMain_GetCounter(20u);
      while(0u != FblMain_IsTimeoutElapsed(timeout))
      {
          /* Wait till timeout*/
      };

      maxTimeoutMs -= 20u;
      if(0u == maxTimeoutMs)
      {
        break;
      }
      
      /* Run HMemDrv */
      HMemDrv_MainFunction();
      
      /* Get Job Result */
      jobResult = HMemDrv_GetJobResult();
    } while(EHMemDrvJobResult_JobPending ==  jobResult);
  }
  
  if(jobResult == EHMemDrvJobResult_OK)
  {
    flashStatus = HYPER_FLASH_SUCCESS;
  }
  return flashStatus;
}

#if 0
/******************************************************************************
* Name         :  HyperFlashWrite
* Called by    :  Pbl_memdrv
* Preconditions:  Hyper Bus need to be Initialized.
* Parameters   :  address, pointer to the data and length.
* Return code  :  Status of the write.
* Description  :  Programs the data at specified address with specified length.
******************************************************************************/
hyper_u32 HyperFlashWrite(hyper_u16* targetPtr,hyper_u16* sourcePtr,hyper_u32 length,hyper_u32 base_addr)
{
   hyper_u32 flashStatus = HYPER_FLASH_SUCCESS;
   hyper_u32 writeLength;
   hyper_u16 currWord;
   hyper_u16 wordCount;

   while ((flashStatus == HYPER_FLASH_SUCCESS) && (0 < length))
   {
      /* Determine the maximum size of the write buffer that can be used.
         Buffers cannot cross a write buffer 'line' of size WRITE_BUFFER_LENGTH_XD1. */

      writeLength = WRITE_BUFFER_LENGTH_XD1 - (((hyper_u32)targetPtr & (WRITE_BUFFER_LENGTH_XD1 - 1u)));

      /* Only the remaining length is written if possible length is larger than remaining length */
      if ( writeLength > length )
      {
         writeLength = length;
      }

      /* Transform length information to the number of words to program. */
      wordCount = writeLength / FLASH_PROGRAM_WORD_WIDTH_XD1;

	  if (base_addr >= HYPERBUSICH2_MEM_BASEADDR_CS0 &&  base_addr <HYPERBUSICH2_MEM_BASEADDR_CS1)
	  {
      	AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,UNLOCK_ADDRESS_1) = (0xAAu);
      	AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,UNLOCK_ADDRESS_2) = (0x55u);
	  }
	  else
	  {
	  	AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_1) = (0xAAu);
      	AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_2) = (0x55u);

	  }
      /* Write the  buffer load command. */
      *targetPtr = (0x25u);

      /* Write the number of words to be written minus 1. */
      *targetPtr = (wordCount - 1u);

      /* Write all of the words that can be written for this write buffer command. */
      for (currWord = 0u; currWord < wordCount; currWord++)
      {
        // if ( (currWord & WD_TRIGGER_MASK_BUFF_WRITING) == 0u )
         {
           // FlashLookForWatchdog(fp);
         }

         *targetPtr++ = *sourcePtr++;
      }

      /* Decrement the destination pointer so that it points to the last word written within the sector. This last written sector location has two purposes:
        1) The write buffer confirm must be written to any location within the sector addresses written. Last word works for this.
        2) This location will be "read" to retrieve the polling status, this location MUST be the last loaded sector address.
      */
      targetPtr--;

      /* Decrement the source buffer pointer. This is used in FlashStatusPolling() to determine if last word written matches when the last location
         is polled. If the last word written matches the value read from the last location, the write buffer operation is complete.
      */
      sourcePtr--;

      /* Write buffer program confirm command. */
      *targetPtr = (0x29u);

      flashStatus = FlashStatusPolling((hyper_u16*)targetPtr,250,base_addr);

	 if (flashStatus == HYPER_FLASH_SUCCESS)
	 {
        /* Advance the source and target pointer to the next word to be read/written. */
	      sourcePtr++;
	      targetPtr++;

	      /* Reduce the number of bytes remaining by the number of bytes being written. */
	      length -= writeLength;	
	 }
   }
  return flashStatus;
}
#endif
/*******************************************************************************
================================================================================
				RTC    REVISION     NOTES									   
  		For each change to this file, be sure to record:					   
  		1.   Who made the change and when the change was made.				   
  		2.   Why the change was made and the intended result.				   
  																			   
  		Date      version     By         Reason For Change					   
================================================================================  																			   
       10-03-16      1      PSATHISH      Initial version						   

================================================================================
********************************************************************************/


