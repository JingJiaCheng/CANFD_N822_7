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
#include "fbl_sfr.h"
#include "HyperFlash.h"
#include "fbl_main.h"
#include "udsdiag.h"
#include "udsmgr.h"
#include "fbl_app.h"
#include "fbl_drv.h"


/*******************************************************************************
================================================================================
				Macros Specific to Spansion Slave chip        
================================================================================
*******************************************************************************/
#define RESET_CMD 									(0xF0u)
#define CFI_ENTER_ADRR 								(0x55u)
#define CFI_ENTER_CMD  								(0x98u)
#define CFI_QUERY_IDENT_ADRR 0x55u
#define CFI_NUMBER_ERASE_BLOCK_REGIONS_ADDR         (0x2Cu)
#define CFI_TOP_BOTTOM_BOOT_FLAG_ADDR               (0x4Fu)
#define CFI_REGION1_NUMBER_OF_ERASE_BLOCKS_ADDR_L   (0x2Du)
#define CFI_REGION1_NUMBER_OF_ERASE_BLOCKS_ADDR_H   (0x2Eu)
#define CFI_REGION1_BLOCK_SIZE_ADDR_L               (0x2Fu)
#define CFI_REGION1_BLOCK_SIZE_ADDR_H               (0x30u)
#define CFI_REGION_INFO_ADDR_INCR                   (4u)
/* CFI memory segmentation read-out defines */
#define BOTTOM_BOOT_DEV_XD1	    					(0x02u)

#define UNLOCK_ADDRESS_1        					(0x00000555ul)
#define UNLOCK_ADDRESS_2        					(0x000002AAul)

 /* Width of one program word, which is passed to the chip during a single programming command */
#define FLASH_PROGRAM_WORD_WIDTH_XD1    	(2u)
#define WRITE_BUFFER_LENGTH_XD1 					(512u)



typedef struct
{
   hyper_u16 erBlckCount;
   hyper_u32 erBlckSize;
   hyper_u32 nextRegStart;
} tErBlckEntryType_XD1;

typedef struct
{
   /* some compilers require a short here (GNU_TRICORE_MULTICAN) */
   hyper_u16 regionCount;
   hyper_u16 bootOrientation;
   /* create one entry more than actually required (zero element to simplify code) */
   tErBlckEntryType_XD1 entry[4 + 1];  /* Max no of erase block regions is 4*/
} tErBlckMapType_XD1;

/*******************************************************************************
================================================================================
 								Global Variables                                        
================================================================================
*******************************************************************************/
static tErBlckMapType_XD1 erBlckMap[2];

/*******************************************************************************
================================================================================
 								Prototypes                                        
================================================================================
*******************************************************************************/
static hyper_u32 QueryAsciiString(hyper_u32 hyper_addr);
static hyper_u32 GetRegionIdx(hyper_u32 inAddr);
static hyper_u32 FlashStatusPolling(hyper_u16* pollAddr, hyper_u32 wait_time,hyper_u32 base_addr);


/*******************************************************************************
================================================================================
 								Macros                                        
================================================================================
*******************************************************************************/
#define FblInvertBits(x,type)  ( (type)  ~((type) (x))      )
#define FblInvert32Bit(x)      ( FblInvertBits((x),UVINT32) )
#define AT_ADDR(base_addr,addr)  (*(((volatile hyper_u16 *)(base_addr)) + (addr)))
#define AT_ADDR_1(addr)  (*(((volatile hyper_u16 *)(HYPERBUSICH2_MEM_BASEADDR)) + (addr)))

#define GetNextSecStartAddr(inAddr,hyper_ch) ((inAddr) + erBlckMap[hyper_ch].entry[GetRegionIdx(inAddr)].erBlckSize) /* PRQA S 3453 */ /* MD_CBD_19.7 */



/******************************************************************************
* Name         :  HyperFlash_Init
* Called by    :  main
* Preconditions:  PortPinInit  has to be Called
* Parameters   :  void
* Return code  :  void
* Description  :  Initializes the hyperflash driver parameters.
******************************************************************************/
void HyperFlash_Init(hyper_u32 hyper_addr,hyper_u8 chip_num)
{
	hyper_u32 status;
	hyper_u32 idxVar;
	hyper_u32 AddrOffSet;

      AT_ADDR(hyper_addr,0x00u) = RESET_CMD;

      AT_ADDR(hyper_addr,CFI_ENTER_ADRR) = CFI_ENTER_CMD;

	  status = QueryAsciiString(hyper_addr);

	  if (status  == HYPER_FLASH_SUCCESS)
	  {
		   /* Read boot orientation and count of regions available */
		   erBlckMap[chip_num].regionCount     =  AT_ADDR(hyper_addr,CFI_NUMBER_ERASE_BLOCK_REGIONS_ADDR) + FIRST_ERBLCK_ENTRY_XD1;
		   erBlckMap[chip_num].bootOrientation =  AT_ADDR(hyper_addr,CFI_TOP_BOTTOM_BOOT_FLAG_ADDR);

		   /* Init zero element */
		   if(chip_num == 0){ 
		   	erBlckMap[chip_num].entry[ZERO_ELEMENT_ENTRY_XD1].nextRegStart = HYPERBUSICH2_MEM_BASEADDR_CS0;
			}
			else
			{
			erBlckMap[chip_num].entry[ZERO_ELEMENT_ENTRY_XD1].nextRegStart = HYPERBUSICH2_MEM_BASEADDR_CS1;
			}
		   /* Read mapping */
		   for (idxVar = FIRST_ERBLCK_ENTRY_XD1; idxVar < erBlckMap[chip_num].regionCount; idxVar++)
		   {
		      /* According to orientation read from first region to erBlckMap.regionCount or vice versa.
		       * Orientation is relevant for asymmetric layouts (readout 0x02/0x03) and don't care for all other layouts
		       */
		      AddrOffSet = ( erBlckMap[chip_num].bootOrientation == BOTTOM_BOOT_DEV_XD1 ? (idxVar - FIRST_ERBLCK_ENTRY_XD1)
		                                                                       : ((erBlckMap[chip_num].regionCount - (hyper_u16)1u) - idxVar));
		      AddrOffSet *= CFI_REGION_INFO_ADDR_INCR;

		      /* Read out data to retrieve erase block size, erase block count. */
		      erBlckMap[chip_num].entry[idxVar].erBlckSize  = (hyper_u32) ((   (AT_ADDR(hyper_addr,CFI_REGION1_BLOCK_SIZE_ADDR_L + AddrOffSet))
		                                                                    + (AT_ADDR(hyper_addr,CFI_REGION1_BLOCK_SIZE_ADDR_H + AddrOffSet) << 8)) << 8);
		      erBlckMap[chip_num].entry[idxVar].erBlckCount = (hyper_u16) ((   (AT_ADDR(hyper_addr,CFI_REGION1_NUMBER_OF_ERASE_BLOCKS_ADDR_L + AddrOffSet))
		                                                                   + (AT_ADDR(hyper_addr,CFI_REGION1_NUMBER_OF_ERASE_BLOCKS_ADDR_H + AddrOffSet) << 8)) + 1u);

		      /* Calculate nextRegStart for the current region. */
		      erBlckMap[chip_num].entry[idxVar].nextRegStart = erBlckMap[chip_num].entry[idxVar].erBlckSize * erBlckMap[chip_num].entry[idxVar].erBlckCount;
		      /* Size of previous regions has to be added (entry[ZERO_ELEMENT_ENTRY_XD1] used for entry[FIRST_ERBLCK_ENTRY_XD1]) */
		      erBlckMap[chip_num].entry[idxVar].nextRegStart += erBlckMap[chip_num].entry[idxVar-1u].nextRegStart;
		   }		 	
	  }
	  AT_ADDR(hyper_addr,0x00u) = RESET_CMD;	
}

/******************************************************************************
* Name         :  QueryAsciiString
* Called by    :  HyperFlash_Init
* Preconditions:  Need to enter CFI mode.
* Parameters   :  void
* Return code  :  Status of the query
* Description  :  Verifies the Ascii string.
******************************************************************************/
static hyper_u32 QueryAsciiString(hyper_u32 hyper_addr)
{
  hyper_u32 cnt = 0;
  hyper_u32 status = HYPER_FLASH_SUCCESS;
  hyper_u8 tempBuff[3] = {'Q','R','Y'};
  
  for (cnt = 0; (cnt<3 && status == HYPER_FLASH_SUCCESS) ; cnt++)
  {
	  if (AT_ADDR(hyper_addr,0x10+cnt) != tempBuff[cnt])
	  {
		 status = HYPER_FLASH_FAIL;
	  }
  }
  
  return status;  	
}
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

	hyper_u16* nextSectAddrPtr;
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
				udspbl_check_diag_response();
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
				udspbl_check_diag_response();
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
/******************************************************************************
* Name         :  FlashStatusPolling
* Called by    :  HyperFlash_Erase and HyperFlashWrite
* Preconditions:  Hyper Bus need to be Initialized.
* Parameters   :  address and waittime.
* Return code  :  Status of the operation.
* Description  :  Checks whether erase and program operations has been completed or not.
******************************************************************************/
static hyper_u32 FlashStatusPolling(hyper_u16* pollAddr, hyper_u32 wait_time,hyper_u32 base_addr)
{
   hyper_u16 readout;

   hyper_u32 result;
   /*hyper_u32 timecnt = 0;
   hyper_u32 timerTrig = FBL_NO_TRIGGER; */
   do
   {
      /* Trigger watchdog */
/*		timerTrig = Fbl_WatchDog_Monitor(FBL_WD_SERVICE_1MS);
		if (FBL_TM_TRIGGERED == timerTrig)
		{
			timecnt++;	
		}*/
	  if (base_addr >= HYPERBUSICH2_MEM_BASEADDR_CS0 &&  base_addr <HYPERBUSICH2_MEM_BASEADDR_CS1)
	  {
      /* Read status register */
      	  AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS0,UNLOCK_ADDRESS_1) = 0x70u;
	  }
	  else
	  {
			AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_1) = 0x70u;
	  }	
      readout = *pollAddr;
	  udspbl_check_diag_response();
//	  Fbl_WatchDog_Monitor(FBL_WD_SERVICE_1MS);
   } while ((0x80u != (readout & 0x80u))/* && (timecnt > wait_time)*/);

   /* Return some of the specifically defined errors to external.
    * Return general error on unexpected errors through design of this driver (like erase/write suspend). */
   if ( 0u == (readout & 0x35u))
   {
      result = HYPER_FLASH_SUCCESS;
   }
   else
   {
      result = HYPER_FLASH_FAIL; /* Set unspecific polling error. */
   }
	if (base_addr >= HYPERBUSICH2_MEM_BASEADDR_CS0 &&  base_addr <HYPERBUSICH2_MEM_BASEADDR_CS1)
	{

   /* Clear status register   */
		   AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_1) = 0x71u;
	}
	else
	{
		 AT_ADDR(HYPERBUSICH2_MEM_BASEADDR_CS1,UNLOCK_ADDRESS_1) = 0x71u;

	}
   return result;
}

/******************************************************************************
* Name         :  GetRegionIdx
* Called by    :  HyperFlash_Erase
* Preconditions:  Hyper Bus need to be Initialized.
* Parameters   :  address.
* Return code  :  Sector ID.
* Description  :  It gives the id of the sector in hyper flash memory.
******************************************************************************/
static hyper_u32 GetRegionIdx(hyper_u32 inAddr)
{
   hyper_u32 region = ZERO_ELEMENT_ENTRY_XD1;
   	if (inAddr >= HYPERBUSICH2_MEM_BASEADDR_CS0 &&  inAddr <HYPERBUSICH2_MEM_BASEADDR_CS1)
	{
		while (inAddr >= erBlckMap[0].entry[region].nextRegStart)
   		{
      		if (++region == erBlckMap[0].regionCount)
      		{
        	break;
      		}
   		}
	}
	else
	{
		 while (inAddr >= erBlckMap[1].entry[region].nextRegStart)
   		{
      		if (++region == erBlckMap[1].regionCount)
      		{
        	break;
      		}
   		}

	}
   	return region;
}


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


