#ifndef LZSS_H
#define LZSS_H


/* Includes ******************************************************************/

#include "fbl_compress.h"

/* Defines *******************************************************************/

/* Typedefs ******************************************************************/

/* Input bit buffer */
typedef struct tagLZSS_InputBuffer_T
{
   /* Pointer to buffer */
   UINT8 	*buffer;
   /* Bit position, range 0-7 */
   UINT8     bitPos;
   /* Byte length */
   UINT32    length;
   /* Bit length */
   UINT32    bitLength;
} LZSS_InputBuffer_T;

/* Output bit buffer */
typedef LZSS_InputBuffer_T LZSS_OutputBuffer_T;

/* Prototypes ****************************************************************/

void LZSS_Init( void );
void LZSS_ExpandData(LZSS_InputBuffer_T *inBuf, LZSS_OutputBuffer_T *outBuf);

/* Global data ***************************************************************/

#endif /* LZSS_H */
