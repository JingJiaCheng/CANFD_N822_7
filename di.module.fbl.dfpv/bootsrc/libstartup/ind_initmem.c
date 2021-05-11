/*
		      Runtime Library
	
	Copyright 2004-2006 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/*
 * __ghs_initmem is used in place of memcpy during romcopy on chips
 * with memory regions that cannot be accessed with normal load and
 * store instructions. Compressed ROM is not supported for these
 * memory regions. __ghs_initmem is defined in ind_initmem.c, and
 * provided as part of libstartup.a. To use, ensure that __GHS_INITMEM
 * is defined in ind_crt0.c and rebuild the startup libraries. 
 */
#include <stddef.h>

#ifdef __ADSPBLACKFIN__
#include <cdefBF53x.h>
#if 1
/* Do all ROM to RAM copies using 1D MDMA */
void *
__ghs_initmem(void *dest, const void *src, size_t n) {
    void *ret = dest;
#define pMDMA_REG(off, typ) ((typ volatile *) (mdma_base + (off)))
#if 0
/* If you rebuild the startup libraries yourself, this slightly
   smaller version can be used. MMR addresses are fixed at compile
   time. */
# if defined(MDMA0_D0_NEXT_DESC_PTR)
    char *mdma_base = (char *) MDMA0_D0_NEXT_DESC_PTR;
# else
    char *mdma_base = (char *) MDMA_D0_NEXT_DESC_PTR;
# endif
#else
/* This version configures the MMRs at run time, and can be run on any
   processor. */
    char *mdma_base = (char *) 0xffc00e00;

    /* Not all chips place the MDMA MMRs at the same address.  Check
       the CTYPE bit in PERIPHERAL_MAP to see if this is MDMA */
    if (!(*pMDMA_REG(0x2c, unsigned short) & 0x40)) {
        /* If not, try f00 instead */
        if (!(*pMDMA_REG(0x12c, unsigned short) & 0x40)) {
            /* Give up, call memcpy instead. This will not work for copying
               into L1 instruction memory. */
            extern __nearcall void *memcpy(void *s, const void *c, size_t n);
            return memcpy(dest, src, n);
        }
        mdma_base += 0x100;
    }
#endif
    if (n == 0)
        /* Nothing to do in this case, and the DMA controller interprets
           a count of 0 as a count of 65536 so it is not safe to 
           continue. */
        return ret;

    while (1) {
        unsigned short count = n > 65535 ? 65535 : (unsigned short) n;
        /* Load source address */
        *pMDMA_REG(0x44/*S0_START_ADDR*/, void *) = (void *) src;
        *pMDMA_REG(0x50/*S0_X_COUNT*/, unsigned short) = count;
	*pMDMA_REG(0x54/*S0_X_MODIFY*/, unsigned short) = 1;
        /* Enable */
        *pMDMA_REG(0x48/*S0_CONFIG*/, unsigned short) = 1;

	__SSYNC();
	
        /* Load destination address */
        *pMDMA_REG(0x4/*D0_START_ADDR*/, void *) = dest;
        *pMDMA_REG(0x10/*D0_X_COUNT*/, unsigned short) = count;
	*pMDMA_REG(0x14/*D0_X_MODIFY*/, unsigned short) = 1;	
        /* Enable, signal with interrupt */
        *pMDMA_REG(0x8/*D0_CONFIG*/, unsigned short) = 0x83;

        /* Poll for completion */
        while (!(*pMDMA_REG(0x28/*D0_IRQ_STATUS*/, unsigned short) & 1))
            ;

	/* Clear the done bit */
	*pMDMA_REG(0x28/*D0_IRQ_STATUS*/, unsigned short) = 1;

        n -= count;
        if (!n)
            break;

        /* Setup for the next transfer */
        {
            const char *s = src;
            char *d = dest;
            s += count;
            d += count;
            src = s;
            dest = d;
        }
    }
    return ret;
}

#else
/* Detect writes to L1 code/cache memory and use DTEST/ITEST MMRS to
   copy data. */
#define ICODE_START   (char *) 0xffa00000
#define ICODE_END     (char *) 0xffa10000

#define ICODE2_START  (char *) 0xff600000
#define ICODE2_END    (char *) 0xff610000

#define ICACHE_START  (char *) 0xffa10000
#define ICACHE_END    (char *) 0xffb00000

#define ICACHE2_START (char *) 0xff610000
#define ICACHE2_END   (char *) 0xff700000

/* Assumes dest is 8 byte aligned and src is 4 byte aligned. */
void *
__ghs_initmem(void *d, const void *src, size_t n) {
    volatile unsigned long *data0ptr;
    volatile unsigned long *data1ptr;
    volatile unsigned long *cmdptr;
    int dtest = 0;
    unsigned int addr = (unsigned int) d;
    char *dest = (char *) d;
    /* Determine if the dest pointer is in L1 instruction or cache memory. */
    if (dest >= ICODE_START && dest < ICODE_END) {
        if (((char *) dest + n) >= ICODE_END) {
            /* This copy extends past the boundary of ICODE memory */
            int newn = ICODE_END - dest;
            __ghs_initmem(ICODE_END, (char *) src + newn, n - newn);
            n = newn;
        }
        data0ptr = pDTEST_DATA0;
        data1ptr = pDTEST_DATA1;
        cmdptr = pDTEST_COMMAND;
        dtest = 1;
    } else if ((dest >= ICACHE_START && dest < ICACHE_END)
               || (dest >= ICACHE2_START && dest < ICACHE2_END)) {
        data0ptr = pITEST_DATA0;
        data1ptr = pITEST_DATA1;
        cmdptr = pITEST_COMMAND;
    } else if (dest >= ICODE2_START && dest < ICODE2_END) {
        if (((char *) dest + n) >= ICODE2_END) {
            /* This copy extends past the boundary of ICODE2 memory */
            int newn = ICODE2_END - dest;
            __ghs_initmem(ICODE2_END, (char *) src + newn, n - newn);
            n = newn;
        }
        data0ptr = pDTEST_DATA0;
        data1ptr = pDTEST_DATA1;
        cmdptr = pDTEST_COMMAND;
        dtest = 1;
    } else {
        /* If not, memcpy can handle it. Calling memcpy is okay here because
           Blackfin has pc-relative calls, as long as it isn't a farcall.
           Otherwise, we would need to be careful to call the version of
           memcpy in ROM, not RAM. See ind_crt0.c for examples of how
           to do this. */
        extern __nearcall void *memcpy(void *s, const void *c, size_t n);
        return memcpy(dest, src, n);
    }

    n = (n + 7) >> 3;
    while (n-- > 0) {
        /* For the sake of code size, assume that either n is a multiple
           of eight, or that copying a few extra bytes is okay. */
        unsigned int command;
        command = 
            /* Bits 3 and 4 stay in place. */
            (addr & 0x18)
            /* Bits 12 and 13 go to 16 and 17 */
            | ((addr & 0x3000) << 4)
            /* Access data array for writing. */
            | (1<<2) | (1<<1);
        if (dtest)
            command |=
                /* Bits 5-10 and 14 stay in place. */
                (addr & 0x47e0)
                /* Bit 11 goes to bit 26. */
                | (((addr >> 11) & 0x1) << 26)
                /* Bit 15 goes to bit 23. */
                | (((addr >> 15) & 0x1) << 23)
                /* Access instruction memory */
                | (1<<24);
        else
            command |= 
                /* Bits 5-9 stay in place. */
                (addr & 0x3e0)
                /* Bits 10 and 11 go to 26 and 27. */ 
                | ((addr & 0xc00) << 16);

        /* Write TEST_DATA0 and TEST_DATA1 with words from src */
        *data0ptr = *((int *) src);
        *data1ptr = *((int *) src+1);
        /* Write the command into TEST_COMMAND to actually write L1 memory. */
        *cmdptr = command;
        /* Increment the src and dest pointers for the next iteration. */
        {
            const int *s = src;
            s += 2;
            src = s;
        }
        addr += 8;
        /* A core sync is required after writing to TEST_COMMAND */
        __CSYNC();
    }
    return dest;
}
#endif
#endif
