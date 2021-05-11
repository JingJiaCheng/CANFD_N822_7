/*
		    ANSI C Runtime Library
	
    Copyright 1983-2008 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#include "ind_startup.h"

/* Unrolled memset loop, using up to 16-byte alignment */
/* This routine is used by gprof and crt0.o */
/* Only POWER values of 4 and 5 are supported. */
#define POWER	4
#define LOOP	(1<<POWER)

#if defined(__V800)

/* Reverse the order of the writes, since we have to remember the base */
/* or the block.  Figure out the end of the block and work backwards.  Needs  */
/* only one active pointer, plus the saved base pointer, and no counters.     */
/* Old way may be better on CISC 68k, but maybe not. */

void *memset(void *s, int c, size_t n) {
    unsigned char *pt = (unsigned char*)s + n;
    unsigned char ch=c; 
    unsigned char *stop1 = (unsigned char*)s-1, *stop2;

    if (n > 2*LOOP) {
	/* we have at least one aligned 16-byte block */
	register int ch4;

	/* Compute repeated char value */
	ch4 = ch;
	ch4 <<= 8;
	ch4 |= ch;
	ch4 = (ch4 << 16 | ch4);

	/* Store the odd bytes at the end first */
	while ((size_t)pt & LOOP-1)
	    *--pt = ch;

	/* pt is now aligned, pointing above the top block */

	{
#ifdef USE_STRUCT16
	    register struct quad { int b1,b2,b3,b4; } ch16;
	    ch16.b1=ch4; ch16.b2=ch4; ch16.b3=ch4; ch16.b4=ch4;
#endif

/* Account for the case of s being at or below zero while pt is above zero. */
#if __PTR_BIT < __INT_BIT && __PTR_BIT == __SHRT_BIT
	    stop2 = (unsigned char*)(short)((size_t)s&(~(LOOP-1)));
#else
	    stop2 = (unsigned char*)((size_t)s&(~(LOOP-1)));
#endif
/* Termination test is optimized for the case where the start of
   the memory block is favorably aligned. */
	    while ((pt -= LOOP) != stop2) {
#ifdef USE_STRUCT16
		((struct quad*)pt)[0] = ch16;
		((struct quad*)pt)[1] = ch16;
#else
		((int *)pt)[0] = ch4;
		((int *)pt)[1] = ch4;
# if POWER >= 4
		((int *)pt)[2] = ch4;
		((int *)pt)[3] = ch4;
#  if POWER >= 5
		((int *)pt)[4] = ch4;
		((int *)pt)[5] = ch4;
		((int *)pt)[6] = ch4;
		((int *)pt)[7] = ch4;
#  endif
# endif
#endif
	    }
/* Correct for overshoot on this pointer that is being walked
 * backwards through the memory block.
 */
	    pt += LOOP;
	}
    }
/* Account for the case of s being at or below zero while pt is above zero. */
    while (--pt != stop1)
	*pt = ch;
    
    return s;
}

#else

/* Original fast routine */

void *memset(void *s, int c, size_t n) {
    register unsigned char *pt=s;
    unsigned char ch=c; 

    if (n > 2*LOOP) {
	/* we have at least one aligned 16-byte block */
	register int i;
	register int ch4;
	struct quad { int b1,b2,b3,b4; };

	/* Compute repeated char value */
	ch4 = ch;
	ch4 <<= 8;
	ch4 |= ch;
	ch4 = (ch4 << 16 | ch4);

	if ((i = ((size_t)pt & (LOOP-1))) != 0) {
	    i = LOOP - i;		/* i is bytes before the blocks */
	    n -= i;			/* n is bytes in blocks and after blocks */
	    do {
		*pt = ch;
		pt++;
	    } while (--i);
	}

	/* we are now at a block boundary. */
	i = n >> POWER;		/* i is number of blocks */
	n &= LOOP-1;		/* n is bytes after the block */

	{
#ifdef USE_STRUCT16
	    register struct quad ch16;
	    ch16.b1=ch4; ch16.b2=ch4; ch16.b3=ch4; ch16.b4=ch4;
#endif
	    do {
#ifdef USE_STRUCT16
		((struct quad*)pt)[0] = ch16;
		((struct quad*)pt)[1] = ch16;
		pt += 2 * sizeof(struct quad);
#else
		((struct quad*)pt)[0].b1 = ch4;
		((struct quad*)pt)[0].b2 = ch4;
		((struct quad*)pt)[0].b3 = ch4;
		((struct quad*)pt)[0].b4 = ch4;
# if POWER == 4
		pt += sizeof(struct quad);
# elif POWER == 5
		((struct quad*)pt)[1].b1 = ch4;
		((struct quad*)pt)[1].b2 = ch4;
		((struct quad*)pt)[1].b3 = ch4;
		((struct quad*)pt)[1].b4 = ch4;
		pt += 2 * sizeof(struct quad);
# endif
#endif
	    } while (--i);
	}
    }
    if (n) {	/* n is bytes after the blocks */
	do {
	    *pt = ch;
	    pt++;
	} while ( --n );
    }
    return(s);
}
#endif
