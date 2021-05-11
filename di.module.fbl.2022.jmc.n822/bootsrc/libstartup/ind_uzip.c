/*
 *		Language Independent Library
 *  Copyright 2001-2011 Green Hills Software,Inc.
 *
 *  This program is the property of Green Hills Software, Inc,
 *  its contents are proprietary information and no part of it
 *  is to be disclosed to anyone except employees of Green Hills
 *  Software, Inc., or as agreed in writing signed by the President
 *  of Green Hills Software, Inc.
*/

/*----------------------------------------------------------------------*/
/* ind_uzip.c: ROM decompression code.					*/
/*									*/
/* CALLED FROM:  __ghs_ind_crt0		  				*/
/* ENTRY POINT:  __ghs_decompress 					*/
/*									*/
/* Decompression code based upon LZSS by Haruhiko Okumura		*/
/*                                                                      */
/* This code was modified by GHS to not require a temporary ring buffer */
/*----------------------------------------------------------------------*/

#include "ind_startup.h"

/* Data for the decompression algorithm used for CROM */
#define DECODE_N 	  4096     /* size of ring buffer */
#define DECODE_F 	  18       /* upper limit for match_length */
#define DECODE_THRESHOLD  2        /* encode string into position and length
				    if match_length is greater than this */

/*----------------------------------------------------------------------*/
/*									*/
/*	Decompress and Copy from CROM to RAM				*/
/*									*/
/*----------------------------------------------------------------------*/
syze_t __ghs_decompress(void *dst, const void *src, syze_t n)
{
    int r,c;
    unsigned int flags;

    const unsigned char *s = (const unsigned char *)src;
    unsigned char *t = (unsigned char *)dst;

    const unsigned char *s_stop = s + n;
    unsigned char *t_start = t;

    /* Decompress and copy */
    r = DECODE_N - DECODE_F;
    flags = 0;
    while (s < s_stop) {
	if (((flags >>= 1) & 0x100) == 0) {
	    /* Flag byte describing the next sequence of 8 literals or
	       dictionary references. */
	    c = *s++;

	    /* Use the higher byte in flags to count to 8.*/
	    flags = c | 0xff00;
	}
	if (flags & 1) {
	    /* Literal (byte): copy byte directly. */
	    c = *s++;
	    *t++ = (char)c;
	    r = ((r + 1) & (DECODE_N - 1));
	} else {
	    /* Pattern Reference: 2 bytes consisting of:
	       12 bits of offset (0..4095)
	       4 bits of length, representing lengths 3..18 */
	    unsigned char* pattern;	    
	    int patoff, patlen, i;

	    patoff = *s++;
	    patlen = *s++;
	    patoff |= ((patlen & 0xf0) << 4);
	    patlen = (patlen & 0x0f) + DECODE_THRESHOLD + 1;

	    pattern = t - (r - patoff);
	    if (r <= patoff)
		pattern -= DECODE_N;

	    /* The pattern >= t check is only necessary for the case where
	     * we are unpacking within DECODE_F bytes of 0 and where addresses
	     * are considered unsigned.  In this case, pattern could be
	     * a large positive value.
	     */
	    for (i=0; (pattern < t_start || pattern >= t) && (i < patlen);
			i++) {
		*t++ = 0;
		pattern++;
	    }

	    /* Copy the pattern. */
	    for ( ; i < patlen; i++) {
		*t++ = *pattern++;
	    }
	    r = ((r + patlen) & (DECODE_N - 1));	    
	}
    }
    /* Return the number of bytes written. */
    return t - (unsigned char *)dst;
}
