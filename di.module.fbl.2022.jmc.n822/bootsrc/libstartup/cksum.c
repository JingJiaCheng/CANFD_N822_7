/*
 *  C Runtime library Checksum Verification
 *
 *  Copyright 1983-2009
 *  by Green Hills Software Inc.
 *
 *  This program is the property of Green Hills Software, Inc,
 *  its contents are proprietary information and no part of it
 *  is to be disclosed to anyone except employees of Green Hills
 *  Software, Inc., or as agreed in writing signed by the President
 *  of Green Hills Software, Inc.
 */

/* Call __cksumsects immediately after download (before changing any
 * data values) to verify the checksum against the values inserted by the
 * linker.
 * __cksumsects returns 0 on success, -1 on error.
 */

#include "ind_startup.h"
#include <stdint.h>
#include "../libsys/indsecinfo.h"
#ifdef PRINT_CKSUM_ERRORS
#include <stdio.h>
#endif

/* Wed Nov 23 11:15:01 PST 1994 - Algorithm courtesy L.Diehr of Ford,
based on Joe Campbell (1987); "C Programmer's Guide to Serial Communications",
figure 19-5.
*/
#ifdef __INTEGRITY
/* INTEGRITY uses the following polynomial and initial value */
#define CRC_POLYNOMIAL 0x04c11db7L
#define CRC_INITVAL    0xffffffff
#else
/* Stand-alone (non-INTEGRITY) programs use the following polynomial
   and initial value */
#define CRC_POLYNOMIAL 0x10211021L
#define CRC_INITVAL    0
#endif
static int32_t
cksum (unsigned char *s, uint32_t len, int text)
{
    int32_t csum=CRC_INITVAL;
    int32_t data;
    int i;
    while (len--) {
#if __CHAR_BIT == 16 && defined(__LittleEndian)
	/* ZSP: char is 16 bits and 8-bit bytes within char are reversed. */
	/* If original data stream was 0xWWXXYYZZ, little-endian, linker wrote
	 * out (8-bit) bytes in order: 0xZZ 0xYY 0xXX 0xWW.  When loading a
	 * 16-bit char the hardware will reverse the 8-bit halves for us so we
	 * see this stream as the chars 0xYYZZ 0xWWXX.  Need to re-swap the
	 * 8-bit chunks to get back to the order the linker used. */
	data = *s++;				/* data = 0x0000YYZZ */
	data = (data << 24) | data << 8;	/* data = 0xZZYYZZ00 */
	/* We don't care about the final ZZ00 in data, we won't look at it
	 * below; so there's no need to mask it off. */
#elif __CHAR_BIT == 8
	data = *s++ << (32 - __CHAR_BIT);	/* Left justify character */
#else
#error This algorithm must be modified for your processor.
#endif
	for (i=0; i<__CHAR_BIT; ++i) {		/* Loop for each bit in char */
	    if ((data^csum) & 0x80000000) {	/* Shift CRC, feed back hi bit */
		csum = (csum<<1) ^ CRC_POLYNOMIAL;
	    } else {
		csum <<= 1;
	    }
	    data <<= 1;
	}
    }
    return csum;
}

/* Returns the section that "ps" is a ram copy of or NULL if none is found.
 * Use within the __cksumsects() loop results in an O(N^2) algorithm
 * Returns non-zero if "ps" is a RAM copy of a ROM section
 */
static secinfo_ptr ramcopyof(const secinfo_ptr ps)
{
    secinfo_ptr p;
    for (p = (secinfo_ptr)&__secinfo; p; p = p->next)
	if (p->romcopyof == ps)
	    return p;
    return p;
}

/* Retrieve the checksum one byte at a time
   in case the end of the section is unaligned. */
static int32_t load32_unaligned(unsigned char *addr)
{
#if defined(__LittleEndian)
    return (int32_t)(addr[0] + (addr[1]<<8) + (addr[2]<<16) + (addr[3]<<24));
#else
    return (int32_t)(addr[3] + (addr[2]<<8) + (addr[1]<<16) + (addr[0]<<24));
#endif
}

/* Checksum text and data sections.  Return 0 on success, -1 on error. */
int __cksumsects(void)
{
    secinfo_ptr ps;
    void *addr;
    uint32_t size;
    uint32_t flags;
    int32_t csum1, csum2;

    /* The following loop skips RAM sections which are a copy
       of ROM sections.  If you are using compressed ROM, you must
       change this so it instead skips the ROM sections and checks
       the RAM copies.  This can be done by changing:
       !ramcopyof(ps)
       to:
       !ps->romcopyof
       */
    for (ps = (secinfo_ptr)&__secinfo; ps; ps = ps->next) {
	addr = ps->addr;
	size = ps->size;
	flags = ps->flags;
	if (size && (flags & (SECINFO_TEXT|SECINFO_DATA)) &&
	    !ramcopyof(ps)) {
	    int text = flags & SECINFO_TEXT;
	    csum1 = cksum((unsigned char *)addr,
		    size - sizeof(int32_t), text);
	    csum2 = load32_unaligned(addr + size - sizeof(int32_t));

	    if (csum1 != csum2) {
#ifdef PRINT_CKSUM_ERRORS
#if __INT_BIT==32
		printf("%s: Checksums do not match for %s.  Expected: %#x"
			"  Calculated: %#x\n", __FILE__, ps->name,
			csum2, csum1);
#else
		printf("%s: Checksums do not match for %s.  Expected: %#lx"
			"  Calculated: %#lx\n", __FILE__, ps->name,
			csum2, csum1);
#endif
#endif

		return -1;
	    }
	}
    }
    return 0;
}

/****************************************************************************/

/* The remainder of the file is for the Green Hills linkers that do
 * not support the __secinfo symbol.  Use the older psinfo structure
 * instead */

#define F_TEXT       0x00000020
#define F_DATA       0x00000040
#define F_BSS        0x00000080
#define F_WRITABLE   0x00000100
#define F_ABSOLUTE   0x00004000

#if __PTR_BIT==16
  typedef uint16_t ghs_caddr_t;
#else
  typedef uint32_t ghs_caddr_t;
#endif

extern struct psinfo {
    union {
        int32_t nonzero;
        char sectname[8];
    } f;
    ghs_caddr_t addr;
    ghs_caddr_t size;
    int32_t flags;
} __psinfo[];

/* Checksum text and data sections.  Return 0 on success, -1 on error. */
int __cksumsects_psinfo(void)
{
    struct psinfo *ps;
    ghs_caddr_t addr, size;
    int32_t flags;
    int32_t csum1, csum2;

    for (ps=__psinfo; ps->f.nonzero; ++ps) {
	addr = ps->addr;
	size = ps->size;
	flags = ps->flags;
	if (size && (flags & (F_DATA|F_TEXT))) {
	    int text = flags & F_TEXT;
	    csum1 = cksum((unsigned char *)addr,
		    (uint32_t)size - sizeof(int32_t), text);
	    csum2 = *(int32_t *)(addr+size-sizeof(int32_t));
	    if (csum1 != csum2) 
		return -1;
	}
    }
    return 0;
}
