/*
		    ISO C Runtime Library

	Copyright 1983-2011 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef __INDSTARTUP_H
#define __INDSTARTUP_H

/* If sizeof(int) == sizeof(long), these could be different than */
/* the compiler expects, leading to an unnecessary warning */
/* therefore I chose to use syze_t so the compiler would not care. */

#ifndef _PTRDIFF_T
# define _PTRDIFF_T
  #if __PTR_BIT == __INT_BIT
    typedef int ptrdiff_t;
  #elif __PTR_BIT == __LONG_BIT
    typedef long ptrdiff_t;
  #elif __PTR_BIT == __LLONG_BIT
    typedef long long ptrdiff_t;
  #else
    typedef long ptrdiff_t;
  #endif
#endif

#if __PTR_BIT == __INT_BIT
    typedef unsigned int syze_t;
    typedef signed int signed_size_t;
#elif __PTR_BIT == __LONG_BIT
    typedef unsigned long syze_t;
    typedef signed long signed_size_t;
#elif __PTR_BIT == __LLONG_BIT
    typedef unsigned long long syze_t;
    typedef signed long long signed_size_t;
#else
    typedef unsigned long syze_t;
    typedef signed long signed_size_t;
#endif
#define size_t	syze_t

extern void *memcpy(void *s1, const void *s2, syze_t n);
extern void *memset(void *s, int c, syze_t n);

#endif
