/*
		    ISO C Runtime Library
	
	Copyright 1983-2012 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#include "ind_startup.h"

/*
#include <stdint.h>
#if SIZE_BIT == __INT_BIT
typedef signed int signed_size_t;
#elif SIZE_BIT == __LONG_BIT
typedef signed long signed_size_t;
#elif SIZE_BIT == __LLONG_BIT
typedef signed long long signed_size_t;
#else
#error Unknown type for size_t
#endif
*/

#define are_both_aligned(x, y, type) \
	(((((size_t)x)|((size_t)y)) &(sizeof(type)-1)) == 0)
#define MANUALLY_UNROLL_LOOP_FOR_SPEED 1

#define copy_one_by_type(x, y, type)				   \
        {                                                          \
	type * tx = (type *)x; const type * ty = (const type *)y;  \
	*tx++ = *ty++;                                             \
	x = tx; y = ty;                                            \
	} (void)0                                               

#define copy_four_by_type(x, y, type)				   \
        {                                                          \
	type * tx = (type *)x; const type * ty = (const type *)y;  \
	*tx++ = *ty++;                                             \
	*tx++ = *ty++;                                             \
	*tx++ = *ty++;                                             \
	*tx++ = *ty++;                                             \
	x = tx; y = ty;                                            \
	} (void)0                                               
	
void *(memcpy)(void *s1, const void *s2, size_t n)
{
    void * result = s1;

#if __INT_BIT > __CHAR_BIT
    if (are_both_aligned(s1, s2, int)) {
#if (__LLONG_BIT > __LONG_BIT) && __REG_BIT == 64
	if (are_both_aligned(s1, s2, long long)) {
#if MANUALLY_UNROLL_LOOP_FOR_SPEED
	    while (n >=  4*sizeof(long long)) {
		n -= 4*sizeof(long long);
		copy_four_by_type(s1, s2, long long);
	    }
#endif	    
	    while (n >= sizeof(long long)) {
		n -= sizeof(long long);
		copy_one_by_type(s1, s2, long long);
	    }
	} else 
#endif	/* __LLONG_BIT > __LONG_BIT */
#if __LONG_BIT > __INT_BIT
	if (are_both_aligned(s1, s2, long)) {
#if MANUALLY_UNROLL_LOOP_FOR_SPEED
	    while (n >=  4*sizeof(long)) {
		n -= 4*sizeof(long);
		copy_four_by_type(s1, s2, long);
	    }
#endif	    
	    while (n >= sizeof(long)) {
		n -= sizeof(long);
		copy_one_by_type(s1, s2, long);
	    }
	} else 
#endif	/* __LONG_BIT > __INT_BIT */
	{
#if MANUALLY_UNROLL_LOOP_FOR_SPEED
	    while (n >= 4*sizeof(int)) {
		n -= 4*sizeof(int);
		copy_four_by_type(s1, s2, int);
	    }
#endif	    
	    while (n >= sizeof(int)) {
		n -= sizeof(int);
		copy_one_by_type(s1, s2, int);
	    }
	}
    } else 
#endif	/* __INT_BIT > __CHAR_BIT */
#if __SHRT_BIT > __CHAR_BIT
    if (are_both_aligned(s1, s2, short)) {
#if MANUALLY_UNROLL_LOOP_FOR_SPEED
	while (n >= 4*sizeof(short)) {
	    n -= 4*sizeof(short);
	    copy_four_by_type(s1, s2, short);
	}
#endif
	while (n >= sizeof(short)) {
	    n -= sizeof(short);
	    copy_one_by_type(s1, s2, short);
	}
    } else
#endif /* __SHRT_BIT > __CHAR_BIT */
    {
#if MANUALLY_UNROLL_LOOP_FOR_SPEED
	while (n >= 4*sizeof(char)) {
	    n -= 4*sizeof(char);
	    copy_four_by_type(s1, s2, char);
	}
#endif
    }

    while ((signed_size_t)--n >= 0)
	copy_one_by_type(s1, s2, char);

    return result;    
}
