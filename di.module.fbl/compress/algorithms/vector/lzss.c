
/* Includes *****************************************************************/

#include "lzss.h"


/* Defines ******************************************************************/

/* Number of bits allocated to indices into the text window */
#define LZSS_INDEX_BIT_COUNT        (UINT8)10

/* Number of bits allocated for the length of an encode phrase */
#define LZSS_LENGTH_BIT_COUNT       (UINT8)4

/* Max number of bits in a single processing step */
#define LZSS_MAX_UNPROCESSED_BIT_COUNT    (UINT8)10
#define LZSS_MAX_UNPROCESSED_BYTE_COUNT   (UINT8)(2 + ((LZSS_MAX_UNPROCESSED_BIT_COUNT - 2) / 8))
#define LZSS_MAX_ADDITIONAL_BYTE_COUNT    (UINT8)(1 + ((LZSS_MAX_UNPROCESSED_BIT_COUNT - 2) / 8))
#define LZSS_UNPROCESSED_BUFFER_SIZE      (UINT8)(LZSS_MAX_UNPROCESSED_BYTE_COUNT + LZSS_MAX_ADDITIONAL_BYTE_COUNT)

/* Size of the sliding window */
#define LZSS_WINDOW_SIZE            (UINT16)( 1 << LZSS_INDEX_BIT_COUNT )

/*
   Number of bytes to encode a byte array.
   Used to calculate if compression should be done or not
*/
#define LZSS_BREAK_EVEN             (UINT8)( ( 1 + LZSS_INDEX_BIT_COUNT + \
                                                LZSS_LENGTH_BIT_COUNT ) / 9 )

/* End of stream indicator */
#define LZSS_END_OF_STREAM          (UINT8)0

/* Arithmetic modulo to get the correct index in the sliding window */
#define LZSS_MOD_WINDOW( a )        (UINT16)( ( a ) & ( LZSS_WINDOW_SIZE - 1 ) )

/* Output byte to bit buffer type */
#define OutputByte(val, pBuf)       ((*((pBuf->buffer)++)) = val)
/* Read single bit from input stream */
#define InputBit(pInBuf)            (InputBits(pInBuf, 1))

/* State machine states */
#define LZSS_STATE_COMPRESS_FLAG       0
#define LZSS_STATE_UNCOMPRESSED_BYTE   1
#define LZSS_STATE_MATCH_POSITION      2
#define LZSS_STATE_MATCH_LENGTH        3
#define LZSS_STATE_MATCH_OUTPUT        4

/* End of stream flag values */
#define LZSS_EOS_NOT_REACHED           0
#define LZSS_EOS_REACHED               1

/* End of stream access macros */
#define clrEosReached()                { eosFlag = LZSS_EOS_NOT_REACHED; }
#define setEosReached()                { eosFlag = LZSS_EOS_REACHED; }
#define eosReached()                   (eosFlag == LZSS_EOS_REACHED)

/* Overflow indication values */
#define LZSS_OVERFLOW_NONE             0
#define LZSS_OVERFLOW_INPUT            1
#define LZSS_OVERFLOW_OUTPUT           2

/* Macro for watchdog handling */
#if !defined( CMPR_WATCHDOG_FCT )
# define CMPR_WATCHDOG_FCT             (void)FblLookForWatchdog
#endif

/* Typedefs and structures for internal use **********************************/

/* Global data ***************************************************************/

/* Local data ****************************************************************/

/* The sliding window used by the decompression algorithm */
 static  UINT8  window[ LZSS_WINDOW_SIZE ];

/* Temporary buffer for unprocessed data in case of segmented input*/
 static  UINT8  unprocessed[ LZSS_UNPROCESSED_BUFFER_SIZE ];
/* Number of unprocessed bytes */
 static  UINT8  unprocessedCount;

/* State machine state */
 static  UINT8  state;
/* Length of the data match found */
 static  UINT8  matchLen;
/* Position in the window of the data match */
 static  UINT16  matchPos;
/* Current window position */
 static  UINT16  winPos;
/* Indicator of End Of Stream reached */
 static  UINT8  eosFlag;
/* Overflow indication */
 static  UINT8  overflow;
/* Maximum output length */
 static  UINT32  maxOutLen;

/* Lookup table to speed up bit stream reading */
 static  UINT8  inputMask[] = { 0xFFu, 0x7Fu, 0x3Fu, 0x1Fu, 0x0Fu, 0x07u, 0x03u, 0x01u, 0x00u };

/* External data *************************************************************/

/* Prototypes ****************************************************************/

static UINT16 InputBits(LZSS_InputBuffer_T *pInBuf, UINT8 numBits);
static void LZSS_Decompress(LZSS_InputBuffer_T *inBuf, LZSS_OutputBuffer_T *outBuf);

/*****************************************************************************/
/* Implementation                                                            */
/*****************************************************************************/

/*****************************************************************************/

/******************************************************************************
* Name         :  LZSS_Init
* Called by    :  ApplFblInitDecompression
* Preconditions:  None
* Parameters   :  None
* Return code  :  None
* Description  :  Initialize LZSS decompression state variables
******************************************************************************/
void LZSS_Init( void )
{
   state = LZSS_STATE_COMPRESS_FLAG;
   matchLen = 0;
   matchPos = 0;
   winPos = 1;
   clrEosReached();
   unprocessedCount = 0;
}

/******************************************************************************
* Name         :  LZSS_ExpandData
* Called by    :  ApplFblDecompression
* Preconditions:  LZSS_Init was executed before
* Parameters   :  Input bit buffer
*                 Output byte buffer
* Return code  :  None
* Description  :  Perform LZSS decompression
*                 Unconsumed bytes are saved and restored on the next iteration
******************************************************************************/
void LZSS_ExpandData(LZSS_InputBuffer_T *inBuf, LZSS_OutputBuffer_T *outBuf)
{
   /* Index var. for loop */
   UINT8 i;
   UINT8 addCount;
   LZSS_InputBuffer_T unprocessedBuf;
   
   /* Initialize overflow flag */
   overflow = LZSS_OVERFLOW_NONE;

   /* Remember output buffer size */
   maxOutLen = outBuf->length;
   outBuf->length = 0;

   /* Process remaining bytes from previous iteration */
   if (unprocessedCount > 0)
   {
      /* More unprocessed bytes than expected */
      /*assertFblInternal((unprocessedCount <= LZSS_MAX_UNPROCESSED_BYTE_COUNT), kFblOemAssertIllegalParameter);*/

      /* Number of additional bytes is limited by input length  */
      if (inBuf->length < LZSS_MAX_ADDITIONAL_BYTE_COUNT)
      {
         addCount = (UINT8)(inBuf->length & 0xFFu);
      }
      else
      {
         addCount = LZSS_MAX_ADDITIONAL_BYTE_COUNT;
      }

      /* Fill up unprocessed buffer with new input bytes */
      for (i = 0; i < addCount; i++)
      {
         unprocessed[i + unprocessedCount] = inBuf->buffer[i];
      }

      /* Prepare buffer object */
      unprocessedBuf.buffer = unprocessed;
      unprocessedBuf.bitPos = inBuf->bitPos;
      unprocessedBuf.length = (unprocessedCount + addCount);
      unprocessedBuf.bitLength = ((unprocessedBuf.length * 8) - inBuf->bitPos);

      /* Decompress unprocessed bytes */
      LZSS_Decompress(&unprocessedBuf, outBuf);

      /* Check if some of the data was consumed */
      if ((unprocessedBuf.length != (unprocessedCount + addCount)) || (unprocessedBuf.bitPos != inBuf->bitPos))
      {
         /* Update input buffer information, as parts may be already processed */
         inBuf->buffer += (addCount - unprocessedBuf.length);
         inBuf->length -= (addCount - unprocessedBuf.length);
         inBuf->bitPos = unprocessedBuf.bitPos;

         /* Reset state variables */
         unprocessedCount = 0;
         overflow = LZSS_OVERFLOW_NONE;
      }
   }

   /* Calculate bit length of input stream */
   inBuf->bitLength = (inBuf->length * 8) - inBuf->bitPos;
   /* Decompress input stream */
   LZSS_Decompress(inBuf, outBuf);

   /* Check for unprocessed bytes */
   if (overflow == LZSS_OVERFLOW_INPUT)
   {
      /* More unprocessed bytes than expected */
      /*assertFblInternal(((unprocessedCount + inBuf->length) <= LZSS_MAX_UNPROCESSED_BYTE_COUNT), kFblOemAssertIllegalParameter);*/

      /* Save bytes which aren't consumed completely */
      for (i = 0; i < inBuf->length; i++)
      {
         unprocessed[unprocessedCount + i] = inBuf->buffer[i];
      }
      unprocessedCount += (UINT8)inBuf->length;

      /* Buffer consumed completely */
      inBuf->length = 0;
   }
}

/******************************************************************************
* Name         :  LZSS_Decompress
* Called by    :  LZSS_ExpandData
* Preconditions:  bitLength of pInBuf is initialized with correct value
* Parameters   :  Input bit buffer
*                 Output byte buffer
* Return code  :  None
* Description  :  This routine expands data from an in buffer with the LZSS algorithm.
*                 The routine reads in flag bits to decide whether to read in an uncompressed 
*                 character or an index/length pair and expands the data stream to an out 
*                 buffer.
******************************************************************************/
static void LZSS_Decompress(LZSS_InputBuffer_T *inBuf, LZSS_OutputBuffer_T *outBuf)
{
   /* Index var. for loop */
   UINT8 i;
   /* Byte to write to output buffer */
   UINT8 outByte;
   
   while ( (inBuf->length > 0) && (!eosReached()) && (overflow == LZSS_OVERFLOW_NONE) ) 
   {
      /* Call watchdog service function */
  	  FblWdtDrv_Pet();

      switch ( state )
      {
         /* Read flag indicating compressed/uncompressed data */
         case LZSS_STATE_COMPRESS_FLAG:
         {
            /* Enough bits left in input stream? */
            if (inBuf->bitLength < 1)
            {
               /* Indicate input overflow */
               overflow = LZSS_OVERFLOW_INPUT;
            }
            else
            {
               /* If next bit is 1, next byte is uncompressed */
               if ( InputBit(inBuf) == 1)
               {
                  /* Read uncompressed byte next */
                  state = LZSS_STATE_UNCOMPRESSED_BYTE;
               }
               /* If next bit is 0, compressed data follows */
               else
               {
                  /* Read sliding window position next */
                  state = LZSS_STATE_MATCH_POSITION;
               }

               /* Verify consistency of byte length, bit length and bit position */
               /*assertFblInternal((inBuf->bitLength == (inBuf->length * 8) - inBuf->bitPos), kFblOemAssertParameterOutOfRange);*/
            }
            break;
         }

         /* Read single uncompressed byte */
         case LZSS_STATE_UNCOMPRESSED_BYTE:
         {
            /* Enough bits left in input stream? */
            if (inBuf->bitLength < 8)
            {
               /* Indicate input overflow */
               overflow = LZSS_OVERFLOW_INPUT;
            }
            else
            {
               /* Make sure uncompressed byte fits into output buffer */
               if ((outBuf->length + 1) > maxOutLen)
               {
                  /* Indicate output overflow */
                  overflow = LZSS_OVERFLOW_OUTPUT;
               }
               else
               {
                  /* Read byte */
                  outByte = (UINT8) InputBits( inBuf, (UINT8)8 );

                  /* Verify consistency of byte length, bit length and bit position */
                  /* assertFblInternal((inBuf->bitLength == (inBuf->length * 8) - inBuf->bitPos), kFblOemAssertParameterOutOfRange);*/

                  /* Output byte*/
                  OutputByte(outByte, outBuf);
                  (outBuf->length)++;
                  /* Add byte in window */
                  window[ winPos ] = outByte;
                  /* Increase window position */
                  winPos = LZSS_MOD_WINDOW( winPos + 1 );

                  /* Process next token */
                  state = LZSS_STATE_COMPRESS_FLAG;
               }
            }
            break;
         }

         /* Read sliding window position */
         case LZSS_STATE_MATCH_POSITION:
         {
            /* Enough bits left in input stream? */
            if (inBuf->bitLength < LZSS_INDEX_BIT_COUNT)
            {
               /* Indicate input overflow */
               overflow = LZSS_OVERFLOW_INPUT;
            }
            else
            {
               /* Get compressed data as window position of match*/
               matchPos = (UINT16) InputBits( inBuf, LZSS_INDEX_BIT_COUNT );

               /* Verify consistency of byte length, bit length and bit position */
               /*assertFblInternal((inBuf->bitLength == (inBuf->length * 8) - inBuf->bitPos), kFblOemAssertParameterOutOfRange);*/

               /* If end of stream, exit */
               if ( matchPos == LZSS_END_OF_STREAM )
               {
                  /* End of stream should be located in last input byte */
                  /*assertFblInternal((inBuf->length <= 1), kFblOemAssertParameterOutOfRange);*/

                  setEosReached();
                  inBuf->length = 0;
               }
               else
               {
                  /* Read match length next */
                  state = LZSS_STATE_MATCH_LENGTH;
               }
            }
            break;
         }

         /* Read match length of compressed data */
         case LZSS_STATE_MATCH_LENGTH:
         {
            /* Enough bits left in input stream? */
            if (inBuf->bitLength < LZSS_LENGTH_BIT_COUNT)
            {
               /* Indicate input overflow */
               overflow = LZSS_OVERFLOW_INPUT;
            }
            else
            {
               /* Get length of string match */
               matchLen = (UINT8) InputBits( inBuf, LZSS_LENGTH_BIT_COUNT );

               /* Verify consistency of byte length, bit length and bit position */
               /*assertFblInternal((inBuf->bitLength == (inBuf->length * 8) - inBuf->bitPos), kFblOemAssertParameterOutOfRange);*/
               /* Check match length range */
               /*assertFblInternal((matchLen < (1 << LZSS_LENGTH_BIT_COUNT)), kFblOemAssertIllegalReturnValue);*/

               /* Add break even + 1 to get the correct length. Length zero and
                * the break even value are subtracted from the length during 
                * compression to save space. */
               matchLen = matchLen + (LZSS_BREAK_EVEN + 1);

               /* Uncompress next turn */
               state = LZSS_STATE_MATCH_OUTPUT;
            }
            break;
         }

         case LZSS_STATE_MATCH_OUTPUT:
         {
            /* Make sure match fits into output buffer */
            if ((outBuf->length + matchLen) > maxOutLen)
            {
               /* Indicate output overflow */
               overflow = LZSS_OVERFLOW_OUTPUT;
            }
            else
            {
               /* For every byte in match */
               for ( i = 0 ; i < matchLen ; i++ ) 
               {
                  /* Get matching byte from window */
                  outByte = window[ LZSS_MOD_WINDOW( matchPos + i ) ];
                  /* Output byte */
                  OutputByte(outByte, outBuf);
                  (outBuf->length)++;
                  /* Add matched byte to current window position */
                  window[ winPos ] = outByte;
                  /* Increase window position */
                  winPos = LZSS_MOD_WINDOW( winPos + 1 );
               }

               /* Process next token */
               state = LZSS_STATE_COMPRESS_FLAG;
            }
            break;
         }

         default:
         {
            /* State should never be reached */
            /*assertFblInternal(0, kFblOemAssertIllegalExecutionPath);*/
            break;
         }
      }

      /* Check sliding window index */
      /*assertFblInternal((winPos < LZSS_WINDOW_SIZE), kFblOemAssertParameterOutOfRange);*/
   }
}

/******************************************************************************
* Name         :  InputBits
* Called by    :  LZSS_Decompress
* Preconditions:  bitLength of pInBuf is initialized with correct value
* Parameters   :  Input bit buffer
*                 Bits to be read
* Return code  :  Read value
* Description  :  Read a given number of bits from a bit stream
******************************************************************************/
UINT16 InputBits(LZSS_InputBuffer_T *pInBuf, UINT8 numBits)
{
   UINT32 rval;
   UINT8 byteCount;
   UINT8 tempBitPos;

   if ((pInBuf->length == 0) || (numBits == 0))
   {
      /* No data to be read */
      return (UINT16)0u;
   }

   /* Verify bit position range */
   /*assertFblInternal((pInBuf->bitPos < 8), kFblOemAssertIllegalParameter);*/
   /* No more than 32 bit can be read, less depending on bit position */
   /*assertFblInternal(((pInBuf->bitPos + numBits) <= 32), kFblOemAssertIllegalParameter);*/

   /* Read first byte, mask unnecessary bits */
   rval = (UINT32)(*(pInBuf->buffer) & inputMask[pInBuf->bitPos]);

   /* Temporary calculation result */
   tempBitPos = (pInBuf->bitPos + numBits) - 1;

   /* Total number of bytes to be consumed */
   byteCount = (tempBitPos & 0xF8u) >> 3;
   /* New bit position */
   pInBuf->bitPos = (tempBitPos & 0x07u) + 1;
   /* Update remaining bit length */
   pInBuf->bitLength -= numBits;
   
   /* Verify bit position range */
   /*assertFblInternal((pInBuf->bitPos <= 8), kFblOemAssertIllegalParameter);*/
   /* No more than a total of 4 bytes can be read */
   /*assertFblInternal((byteCount < 4), kFblOemAssertIllegalParameter);*/

   /* Read remaining bytes */
   while (byteCount > 0)
   {
      /* Check for range wraparound */
      /*assertFblInternal((pInBuf->length > 0), kFblOemAssertIllegalParameter);*/
      /* Update pointer and length */
      (pInBuf->buffer)++;
      (pInBuf->length)--;

      /* Make room for next byte */
      rval <<= 8;
      /* Add byte value */
      rval |= (UINT32)(*(pInBuf->buffer));

      byteCount--;
   }

   /*
      Switch to next byte in case bitPos == 8
      The following code equals

      if (pInBuf->bitPos == 8)
      {
         (pInBuf->buffer)++;
         (pInBuf->length)--;
      }
   */
   byteCount = (pInBuf->bitPos >> 3);
   (pInBuf->buffer) += byteCount;
   (pInBuf->length) -= byteCount;
  
   /* Shift out odd bits */
   rval >>= 8 - pInBuf->bitPos;

   /* Align bit position */
   pInBuf->bitPos &= 0x07u;

   /* Limit return value to 16 bit */
   return ((UINT16)(rval & 0xFFFFu));
}

/******************************************************************************
******************************************************************************/
