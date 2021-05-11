/*
		    ANSI C Runtime Library
	
	Copyright 1983-2008 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/*----------------------------------------------------------------------*/
/* ind_crt0.c: Machine Independent startup code.			*/
/*									*/
/* CALLED FROM:  _start in crt0.o assembly  				*/
/* ENTRY POINT:  __ghs_ind_crt0 					*/
/*									*/
/* WARNING! DO NOT COMPILE THIS FILE WITH PROFILING OR MEMORY CHECKING.	*/
/*									*/
/* This is the first C function called by the standard libraries.	*/
/* First it discovers where sections are located.  Then it initializes	*/
/* static and global data in conformance with what ANSI C requires.	*/
/* Since the profiling and memory checking code depend on initialized	*/
/* global variables, which this routine initializes, DO NOT enable the	*/
/* profiling or memory checking options when compiling this file.	*/
/* Since global register variables are initialized BEFORE this routine	*/
/* is called, you MUST compile this routine with -globalreg=max.	*/
/*									*/
/* This code relocates initialized pointers in PIC, PIR, or PID modes.	*/
/* (PIC, PIR, PID = Position-Independent Code, Read-Only Data, Data.)	*/
/*									*/
/* The first argument to __ghs_ind_crt0 is baseptrs, which is an array	*/
/* defined in the assembly startup file, crt0.<CPU>:			*/
/*									*/
/* if (baseptrs[0]==1) then we are dealing with a current crt0, and	*/
/* baseptrs[1] = base of text		(= __ghsbegin_picbase)		*/
/* baseptrs[2] = base of read-only data	(= __ghsbegin_robase)		*/
/* baseptrs[3] = base of read-write data(= __ghsbegin_pidbase)		*/
/* baseptrs[4] = base of RAM code	(= __ghs_rambootcodestart)	*/
/* baseptrs[5] = end of RAM code 	(= __ghs_rambootcodeend)	*/
/* baseptrs[6] = base of ROM code	(= __ghs_rombootcodestart)	*/
/* baseptrs[7] = end of ROM code 	(= __ghs_rombootcodeend)	*/
/* else we are dealing with an older crt0, and                          */
/* baseptrs[0] = base of text		(= __ghsbegin_picbase)		*/
/* baseptrs[1] = base of read-only data	(= __ghsbegin_robase)		*/
/* baseptrs[2] = base of read-write data(= __ghsbegin_pidbase)		*/
/*									*/
/* Currently, these linktime addresses are just weak references.	*/
/* They could also be real global symbols.  The names defined in the	*/
/* crt0.<CPU> assembly language file and passed in the baseptrs array	*/
/* must match the names used to calculate PICBASE, PIRBASE, PIDBASE.	*/
/*									*/
/* The symbol __ghsbegin_picbase below is declared as a text symbol	*/
/* (using a function declaration).  The compiler automatically adds	*/
/* the PIC base register to the reference to this symbol.  We subtract	*/ 
/* the linktime address (in the baseptrs array) to obtain the PICBASE,	*/
/* which will then be added to initialized pointers to text locations.	*/
/* We compute PIRBASE and PIDBASE similarly.				*/
/*									*/
/* When a PIC/PIR/PID pointer relocation is needed, the compiler puts	*/
/* data into two special data sections (.fixtype and .fixaddr) which	*/
/* the code below uses to relocate the initialized pointers by the	*/
/* appropriate offset.  See the detailed comments on PIC/PIR/PID below.	*/
/*									*/
/* If a target does not	support PIC/PIR/PID, the program uses absolute	*/
/* addresses and initialized pointers are not relocated.		*/
/*									*/
/* The __ghs_rambootcodestart, __ghs_rambootcodeend,                    */
/* __ghs_rombootcodestart, and __ghs_rombootcodeend symbols are used    */
/* when the program is built to be started in ROM.  		        */
/*									*/
/* The __ghs_rombootcodestart and __ghs_rombootcodeend symbols being    */
/* set indicates that we are booting out of ROM.  In this case, they    */
/* bound range of the ROM sections.  The _ghs_rambootcodestart and    	*/
/* _ghs_rambootcodeend symbols also being set indicate that the program */
/* was linked to run out of RAM.  In this case, they bound the range of */
/* the RAM sections.							*/
/* 									*/
/* When used, the difference between the __ghs_rambootcodestart and     */
/* __ghs_rombootcodestart is used to jump from ROM to RAM.		*/
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* NOTES on clearing BSS and ROM to RAM data copying.			*/
/*									*/
/* The BSS section attribute or the CLEAR keyword in the .ld file mark	*/
/* sections (called BSS sections) to be set to 0 before main is called.	*/
/* The NOCLEAR keyword can be used to override the BSS attribute.	*/
/*									*/
/* The ROM keyword in the .ld file tells the linker to create a ROM	*/
/* section to be copied from ROM to RAM before main is called.		*/
/*									*/
/* The linker creates a read-only data section called .secinfo to hold	*/
/* information about BSS and ROM sections.  The .secinfo data section	*/
/* is divided into parts.  One part of .secinfo contains pointers to	*/
/* (and sizes of) all BSS sections.  Another part of .secinfo contains	*/
/* pointers to (and sizes of) all ROM sections, plus pointers to the	*/
/* corresponding RAM target sections.  The code below uses the .secinfo	*/
/* information to clear BSS sections and to copy ROM sections to RAM.	*/
/*									*/
/* The pointers in .secinfo are all linktime addresses.  The code below	*/
/* explicitly adds PICBASE to address ROM and PIDBASE to address RAM.	*/
/* The addition of PIDBASE for all data addresses causes a design 	*/
/* problem in -pid mode: Zero Data Area (absolutely located)		*/
/* Optimization (.zbss/.data) is not implemented.			*/
/* If the symbol RODATA_IS_ABSOLUTE is defined,  then PICBASE is not    */
/* added for read-only data items.    This define can be set if the     */
/* compiler is used in a mode where read-only data is used even when    */
/* PID and/or PID features are used as well.    Green Hills debug	*/
/* servers can avoid relocating read-only data sections when the        */
/* ABS directive is used in section directives files to specify that a  */
/* a read-only data section should always be downloaded/located at its  */
/* link-time address.							*/
/*									*/
/* For absolute relocation, the .secinfo pointers are all absolute, and	*/
/* no special pointer relocation is necessary.  For applications which	*/
/* need relocation for some sections but not others, you can customize	*/
/* the .secinfo data or customize the code in this startup module.	*/
/*									*/
/* More arguments to the initialization routine:  argc, argv, and envp.	*/
/* These are valid if the program is run from the debugger or 0 if not.	*/
/* If argc==0, we construct the arguments to main() on our stack frame. */
/* You may change these arguments to provide any other default values	*/
/*----------------------------------------------------------------------*/

#include "ind_startup.h"

#pragma weak	  __ghsbegin_picbase
#pragma weak	  __ghsbegin_robase
#pragma weak	  __ghsbegin_pidbase

#ifdef __NC_FASTCC
extern void __attribute__((force_cdecl))  __ghsbegin_picbase(void);	/* moves with .text	*/
#else
extern void                               __ghsbegin_picbase(void);	/* moves with .text	*/
#endif
#pragma ghs rodata
extern const char __ghsbegin_robase[];		/* moves with .rodata	*/
extern char	  __ghsbegin_pidbase[];		/* moves with .data	*/

#define CONST_FUNCP *const

#ifdef __PPC64_ABI__
/* Used in ind_crt0() to fill in the the call_buf struct used to call a
   function through a pointer and then perform the call. */
#define PPC64_FUNC_CALL(func,type,toc_ptr) \
    _Pragma("ghs nowarning 1977")          \
    _Pragma("ghs nowarning 1978")          \
    (call_buf.func_addr = (func),          \
     call_buf.toc       = (toc_ptr),       \
     *((type)(&(call_buf.func_addr))))     \
    _Pragma("ghs endnowarning 1978")       \
    _Pragma("ghs endnowarning 1977")
#endif

#ifdef RODATA_IS_ABSOLUTE

  /* rodata is absolute */
  typedef const char rodata_ptr[];	
# define PIRBASE	0

#elif defined(RODATA_IS_INDEPENDENT)

#pragma ghs rodata_is_independent
  typedef void rodata_ptr(void);		
# define PIRBASE 	BASE[PIC_SEC]
# undef CONST_FUNCP
# define CONST_FUNCP *

#else

  /* rodata moves with PIC base */
# ifdef __NC_FASTCC
  typedef void __attribute__((force_cdecl)) rodata_ptr(void);		
# else
  typedef void                              rodata_ptr(void);
# endif /* __NC_FASTCC */
# define PIRBASE 	BASE[PIC_SEC]

#endif	/* RODATA_IS_ABSOLUTE */

/* The order of these adjustments is fixed and used by the linker */
typedef enum { ABS_SEC = 0, PIC_SEC, PIR_SEC, PID_SEC } SECTION_BASE;

#pragma ghs rodata
extern rodata_ptr __ghsbegin_secinfo;

#ifdef __GHS_ENABLE_CACHES_AFTER_INIT
#pragma ghs callmode=far
void __ghs_enable_caches(void);
#pragma ghs callmode=default
#endif

#ifdef __GHS_FLUSH_DCACHE_AFTER_ROMCOPY
/*
 * In ROMCOPY mode, when running with caches enabled, it is often
 * necessary to flush the dcache after copying from ROM to RAM. This
 * is accomplished with __ghs_flush_dcache, which is only implemented
 * for some chips. If you wish to use ROMCOPY mode reliably on chips
 * with caches enabled, and __ghs_flush_dcache has not been
 * implemented for your chip, you must fill in that function with
 * code to flush the data cache. Also, when customizing the startup
 * code you must define __GHS_FLUSH_DCACHE_AFTER_ROMCOPY when building
 * ind_crt0.c to ensure this function is called.
 */
typedef void (flush_dcache_t)(void);
typedef __attribute__((strong_fptr)) flush_dcache_t * flush_dcache_fptr_t;
extern flush_dcache_t __ghs_flush_dcache;
#endif

typedef size_t caddr_t;

typedef void (crt1_t) (int argc, char *argv[], char *envp[]);
typedef void * (memcpy_t)(void *s1, const void *s2, size_t n);
typedef void * (memset_t)(void *s, int c, size_t n);
typedef size_t (decompress_t) (void* t, const void* s, size_t n);
typedef void (boardcachesync_t) (void* s, size_t n);

typedef __attribute__((strong_fptr)) crt1_t *crt1_fptr_t;
typedef __attribute__((strong_fptr)) memcpy_t *memcpy_fptr_t;
typedef __attribute__((strong_fptr)) memset_t *memset_fptr_t;
typedef __attribute__((strong_fptr)) decompress_t *decompress_fptr_t;
typedef __attribute__((strong_fptr)) boardcachesync_t *boardcachesync_fptr_t;


extern crt1_t 	__ghs_ind_crt1;
extern memset_t	memset;
extern memcpy_t	memcpy;
#pragma weak __ghs_board_cache_sync
extern boardcachesync_t	__ghs_board_cache_sync;
#pragma weak __ghs_undefined_func
extern boardcachesync_t	__ghs_undefined_func;

/*
 * __ghs_initmem is used in place of memcpy during romcopy on chips
 * with memory regions that cannot be accessed with normal load and
 * store instructions. Compressed ROM is not supported for these
 * memory regions. __ghs_initmem is defined in ind_initmem.c, and
 * provided as part of libstartup.a.
 */
#if defined(__ADSPBLACKFIN__)
#define __GHS_INITMEM
#endif
extern memcpy_t __ghs_initmem;

#pragma weak __ghs_decompress
extern decompress_t __ghs_decompress;

#define	PICBASE		BASE[PIC_SEC]
#define	PIDBASE		BASE[PID_SEC]

 /* The .secinfo, .fixaddr, and .fixtype sections are in text
  * declare symbols located in those sections as functions
  * to force PIC adjustment
  */
#pragma ghs rodata
extern rodata_ptr __ghsbinfo_clear;
#pragma ghs rodata
extern rodata_ptr __ghseinfo_clear;
#pragma weak __ghsbinfo_aclear
#pragma ghs rodata
extern rodata_ptr __ghsbinfo_aclear;
#pragma ghs rodata
extern rodata_ptr __ghsbinfo_copy;
#pragma ghs rodata
extern rodata_ptr __ghseinfo_copy;
#pragma ghs rodata
extern rodata_ptr __ghsbinfo_tcopy;
#pragma weak __ghsbinfo_comcopy	
#pragma ghs rodata
extern rodata_ptr __ghsbinfo_comcopy;
#pragma weak __ghseinfo_comcopy
#pragma ghs rodata
extern rodata_ptr __ghseinfo_comcopy;
#pragma weak __ghsbinfo_comtcopy
#pragma ghs rodata
extern rodata_ptr __ghsbinfo_comtcopy;
#pragma ghs rodata
extern rodata_ptr __ghsbegin_fixaddr;
#pragma ghs rodata
extern rodata_ptr __ghsend_fixaddr;
#pragma ghs rodata
extern rodata_ptr __ghsbegin_fixtype;
#pragma ghs rodata
extern rodata_ptr __ghsend_fixtype;

/* Initialized pointer relocation flags */
#define FIXTYPE_WEAK	(1<<7)	/* initialized pointer -> weak symbol	*/
#define FIXTYPE_WORD	(1<<3)	/* initialized pointer is a word ptr	*/

/* For Thumb, x86, and PowerPC VLE, using nested loops in the
   memset calling logic generates smaller code. */
#if defined(__THUMB__) || defined(__vle__) || defined (__i386__)
#define USE_NESTED_LOOPS_FOR_MEMSET
#endif

/* Tell the compiler that __ghs_ind_crt0 calls __ghs_ind_crt1. */
#pragma ghs static_call __ghs_ind_crt1

/*----------------------------------------------------------------------*/
/*									*/
/*	Entry Point __ghs_ind_crt0					*/
/*									*/
/*----------------------------------------------------------------------*/

#if !defined(MINIMAL_STARTUP)
void __ghs_ind_crt0 (char *baseptrs[], int argc, char *argv[], char *envp[])
{
    size_t BASE[4];

    caddr_t picbase, robase, pidbase;
    caddr_t rambootcodestart, rambootcodeend;
    caddr_t rombootcodestart, rombootcodeend;

    size_t secinfostart, memsetstart, crt1start;
    ptrdiff_t SCIFIX = 0; /* adjustment for references to .secinfo */

#ifdef __PPC64_ABI__
/* In the PPC64 ABI, function pointers are pointers to structures with
   the following layout that are kept in the .opd section: */
    struct { void *func_addr; const char *toc; } call_buf;
/* Where "func_addr" is a pointer to the actual function and "toc" is a pointer
 * to the Table-Of-Contents for that particular function. During startup
 * we need to perform arithmetic on function pointers and then construct
 * this call_buf struct to hold the function pointer. */
#endif

    crt1_fptr_t crt1p = &__ghs_ind_crt1;
    memset_fptr_t memsetp = &memset;
#ifdef __GHS_INITMEM
    memcpy_fptr_t memcpyp = &__ghs_initmem;
#else
    memcpy_fptr_t memcpyp = &memcpy;
#endif
    decompress_fptr_t decompressp = &__ghs_decompress;
#ifdef __GHS_FLUSH_DCACHE_AFTER_ROMCOPY
    flush_dcache_fptr_t flush_dcache = &__ghs_flush_dcache;
#endif
    boardcachesync_fptr_t boardcachesyncp = &__ghs_board_cache_sync;
    
#ifdef __PPC64_ABI__
    void *crt1_toc, *memset_toc, *memcpy_toc, *decompress_toc;
    void *boardcachesync_toc;
#ifdef __GHS_FLUSH_DCACHE_AFTER_ROMCOPY    
    void *flush_dcache_toc;
#endif
#pragma ghs nowarning 1977
    /* Finish initializing PPC64 function pointers. Find the address
       of each function by loading its address from the .opd section. */
    if (crt1p) {
	crt1_toc = ((void**)crt1p)[1];
	crt1p = *(crt1_fptr_t*)crt1p;
    }
    if (memsetp) {
	memset_toc = ((void**)memsetp)[1];
	memsetp = *(memset_fptr_t*)memsetp;
    }
    if (memcpyp) {
	memcpy_toc = ((void**)memcpyp)[1];
	memcpyp = *(memcpy_fptr_t*)memcpyp;
    }
    if (decompressp) {
	decompress_toc = ((void**)decompressp)[1];	
	decompressp = *(decompress_fptr_t*)decompressp;
    }
#ifdef __GHS_FLUSH_DCACHE_AFTER_ROMCOPY
    if (flush_dcache) {
	flush_dcache_toc = ((void**)flush_dcache)[1];
	flush_dcache = *(flush_dcache_fptr_t*)flush_dcache;
    }
#endif
    if (boardcachesyncp) {
	boardcachesync_toc = ((void**)boardcachesyncp)[1];
	boardcachesyncp = *(boardcachesync_fptr_t*)boardcachesyncp;
    }
#pragma ghs endnowarning 1977
#endif

#pragma ghs nowarning 1977
    /* these strong_fptr assignments are legal because none of LHS variables
       are later used to call any function through them */
    secinfostart = (size_t)&__ghsbegin_secinfo;
    memsetstart = (size_t)memsetp;
    crt1start = (size_t)crt1p;
#pragma ghs endnowarning 1977

#if defined(__ghs_pic)
    /* If a weak function doesn't exist, explicitly zero out the
       function pointer when compiling with position-independent code. */
    if(__ghs_board_cache_sync == __ghs_undefined_func)
	boardcachesyncp = 0;
#endif /* defined(__ghs_pic) */

    /* crt0 sets baseptrs[0] = 1. */
    picbase = (caddr_t)baseptrs[1];
    robase = (caddr_t)baseptrs[2];
    pidbase = (caddr_t)baseptrs[3];
    rambootcodestart = (caddr_t)baseptrs[4];
    rambootcodeend = (caddr_t)baseptrs[5];
    rombootcodestart = (caddr_t)baseptrs[6];
    rombootcodeend = (caddr_t)baseptrs[7];	

    BASE [ABS_SEC]	= 0;
    BASE [PIC_SEC]	= 0;
    BASE [PIR_SEC]	= 0;
    BASE [PID_SEC]	= 0;

    /* some targets have ROM starting at 0, so check
     * rombootcodestart!=rombootcodeend instead of
     * rombootcodestart!=0 */
    if (rombootcodestart != rombootcodeend) {
	ptrdiff_t ramtoromoffset = (rombootcodestart - rambootcodestart);
	if (secinfostart < rombootcodestart || rombootcodeend <= secinfostart) {
	    /* ensure that we reference the ROM version of .secinfo */
	    SCIFIX = -ramtoromoffset;
	}
	if (memsetstart < rombootcodestart || rombootcodeend <= memsetstart) {
	    /* ensure that we call the ROM version of memcpy, memset,
	       and __ghs_decompress */
#pragma ghs nowarning 1977
	    /* these assignments are legal, because the actual memset() & co.
	       functions still get called through these pointers */
	    memsetp = (memset_fptr_t)((char *)memsetp + ramtoromoffset);
	    memcpyp = (memcpy_fptr_t)((char *)memcpyp + ramtoromoffset);
            decompressp = (decompress_fptr_t)((char *)decompressp + ramtoromoffset);
	    if(boardcachesyncp)
		boardcachesyncp = (boardcachesync_fptr_t)((char *)boardcachesyncp +
			ramtoromoffset);
#pragma ghs endnowarning 1977
	}
#ifdef __GHS_FLUSH_DCACHE_AFTER_ROMCOPY
#pragma ghs nowarning 1977
        if ((size_t) flush_dcache < rombootcodestart
            || rombootcodeend <= (size_t) flush_dcache) {
            /* ensure that we call the ROM version of flush_dcache */
            flush_dcache = (flush_dcache_fptr_t)((char *)flush_dcache
                                              + ramtoromoffset);
        }
#pragma ghs endnowarning 1977
#endif
	if ((crt1start < rambootcodestart || rambootcodeend <= crt1start) &&
		rambootcodestart != rambootcodeend) {
	    /* ensure that we call into the RAM version of crt1 */
	    /* unless we are running completely out of ROM */
#pragma ghs nowarning 1977
	    crt1p = (crt1_fptr_t)((char *)crt1p - ramtoromoffset);
#pragma ghs endnowarning 1977
	}
    } else {
	BASE [PIC_SEC]	= ((caddr_t) __ghsbegin_picbase)- picbase;
	BASE [PIR_SEC]	= ((caddr_t) __ghsbegin_robase)	- robase;
	BASE [PID_SEC]	= ((caddr_t) __ghsbegin_pidbase)- pidbase;
    }


/******** WARNING:  READ/WRITE GLOBAL VARIABLES ARE NOT YET VALID!  ********/

/*----------------------------------------------------------------------*/
/*									*/
/*	Clear BSS							*/
/*									*/
/*----------------------------------------------------------------------*/
    {

    void **b = (void **) ((char *)__ghsbinfo_clear + SCIFIX); 
    void **e = (void **) ((char *)__ghseinfo_clear + SCIFIX); 
    void **a = __ghsbinfo_aclear ?
	((void **) ((char *)__ghsbinfo_aclear + SCIFIX)) : e;

    /* Warning:  This code assumes
       __ghsbinfo_clear <= __ghsbinfo_aclear <= __ghseinfo_clear
       Which is currently enforced with elxr
       OR
       __ghsbinfo_aclear == 0 (i.e.: undefined)
       */

#if defined(USE_NESTED_LOOPS_FOR_MEMSET)
    int OFFSET = PIDBASE;
#endif /* defined(USE_NESTED_LOOPS_FOR_MEMSET) */
    while (b != e) {
	void *		t;		/* target pointer	*/
	ptrdiff_t	v;		/* value to set		*/
	size_t		n;		/* set n bytes		*/
#if defined(USE_NESTED_LOOPS_FOR_MEMSET)
	while (b != a) {
	    t = OFFSET + (char *)(*b++);
	    v = *((ptrdiff_t *) b); b++;
	    n = *((size_t    *) b); b++;
#ifdef __PPC64_ABI__
	    PPC64_FUNC_CALL(memsetp,memset_fptr_t,memset_toc)(t, v, n);
#else
	    (*memsetp)(t, v, n);
#endif
	}
	OFFSET = 0;
	a = e;
#else /* defined(USE_NESTED_LOOPS_FOR_MEMSET) */
	t = ((b<a) ? PIDBASE : 0) + (char *)(*b); b++;
	v = *((ptrdiff_t *) b); b++;
	n = *((size_t    *) b); b++;

#ifdef __PPC64_ABI__
	PPC64_FUNC_CALL(memsetp,memset_fptr_t,memset_toc)(t, v, n);
#else
	(*memsetp)(t, v, n);
#endif
#endif /* defined(USE_NESTED_LOOPS_FOR_MEMSET) */
    }
    }

/*----------------------------------------------------------------------*/
/*									*/
/*	Copy from ROM to RAM						*/
/*									*/
/*----------------------------------------------------------------------*/

    {

    void **b = (void **) ((char *)__ghsbinfo_copy + SCIFIX);
    void **m = (void **) ((char *)__ghsbinfo_tcopy + SCIFIX);
    void **e = (void **) ((char *)__ghseinfo_copy + SCIFIX);

    while (b != e) {
	void *	t;				/* target pointer	*/
	void *	s;				/* source pointer	*/
	size_t	n;				/* copy n bytes		*/
	t = ((b<m) ? PIDBASE : PICBASE) + (char *)(*b); b++;
	s = PIRBASE + (char *)(*b++);
	n = *((size_t *) b); b++;
#ifdef __PPC64_ABI__
	PPC64_FUNC_CALL(memcpyp,memcpy_fptr_t,memcpy_toc)(t, s, n);
#else
	(*memcpyp)(t, s, n);
#endif
	/* Synchronize text and data caches for potential program sections */
	if(boardcachesyncp)
	    if(b>=m) {
#ifdef __PPC64_ABI__
		PPC64_FUNC_CALL(boardcachesyncp,boardcachesync_fptr_t,
			        boardcachesync_toc)(t, n);
#else
		(*boardcachesyncp)(t, n);
#endif
	    }
    }
    }

/*----------------------------------------------------------------------*/
/*									*/
/*	Decompress and Copy from CROM to RAM				*/
/*									*/
/*----------------------------------------------------------------------*/

    /* If no CROM sections are present, the linker will not promote the
     * weak symbol __ghs_decompress to strong and __ghs_decompress
     * will not be linked into the program. */
#if defined(__ghs_pic)
    if(&__ghs_decompress != ((decompress_t *)&__ghs_undefined_func))
#else /* defined(__ghs_pic) */
    if(__ghs_decompress)
#endif /* defined(__ghs_pic) */
    {
    void **b = (void **) ((char *)__ghsbinfo_comcopy + SCIFIX);
    void **m = (void **) ((char *)__ghsbinfo_comtcopy + SCIFIX);
    void **e = (void **) ((char *)__ghseinfo_comcopy + SCIFIX);
    
    while (b != e) {
	char *	t;			/* target pointer	*/
	char *	s;			/* source pointer	*/
	size_t	n;			/* copy n bytes		*/
	size_t	n_decompress;		/* decompressed bytes at target	*/
	t = ((b<m) ? PIDBASE : PICBASE) + (char *)(*b); b++;
	s = PIRBASE + (char *)(*b++);
	n = *((size_t *) b); b++;

#ifdef __PPC64_ABI__
	n_decompress = PPC64_FUNC_CALL(decompressp,decompress_fptr_t,
		                       decompress_toc)(t, s, n);
#else
	n_decompress = (*decompressp)(t, s, n);
#endif

	/* Synchronize text and data caches for potential program sections */
	if(boardcachesyncp)
	    if(b>=m) {
#ifdef __PPC64_ABI__
		PPC64_FUNC_CALL(boardcachesyncp,boardcachesync_fptr_t,
  			        boardcachesync_toc)(t, n_decompress);
#else
		(*boardcachesyncp)(t, n_decompress);
#endif
	    }
    }
    }

/*----------------------------------------------------------------------*/
/* WARNING: SUBTLE IMPLEMENTATION-DEFINED INITIALIZATION HAPPENS HERE.	*/
/*									*/
/* This code relocates initialized pointers in PIC, PID, or PIR modes.	*/
/* (PIC, PIR, PID = Position-Independent Code, Read-Only Data, Data.)	*/
/* The Green Hills implementation of PIC, PIR, and PID assumes each	*/
/* address is a runtime address when used, not a linktime address.	*/
/* The compiler emits code to add PICBASE, PIRBASE, or PIDBASE when an	*/
/* address is taken (C '&' operator) and does not emit code when an	*/
/* address is dereferenced (C '*' or '[]' operators).  This is called	*/
/* early binding, as opposed to late binding.  If a global or static	*/
/* variable is initialized with	an expression containing '&', the C	*/
/* program expects this variable to have the correct value by the time	*/
/* main() is called.  The Green Hills compilers and ind_crt0.c		*/
/* work together to make this assumption true.				*/
/*									*/
/* How it works: When the compiler outputs an initializer for a pointer	*/
/* to a position independent object, it also outputs one element each	*/
/* to two Green Hills reserved sections named .fixtype and .fixaddr.	*/
/* For each initialized pointer, there is a corresponding element in	*/
/* .fixaddr and a corresponding element in .fixtype.			*/
/*									*/
/* Each element in .fixtype is a byte.  Each element in .fixaddr is a	*/
/* 32 or 64 bit pointer of type char *.   Each element in .fixaddr	*/
/* contains the link-time byte address of its corresponding initialized	*/
/* pointer.  Each initialized pointer has TWO associated bases:  the	*/
/* base of the location of the pointer itself (the pointer base) and	*/
/* the base of the location of the object pointed to (the object base).	*/
/*									*/
/* Here	is a picture of a fixtype entry, where XXXX = unused:		*/
/*									*/
/*	 1 bit  1 bit	 2 bits   1 bit  1 bit   2 bits			*/
/*	+------+------------------------------------------+		*/
/*	| Weak | XXXX | Ptr Base | Word | XXXX | Obj Base |		*/
/*	+------+------------------------------------------+		*/
/*									*/
/* The following values are synchronized with compiler internals:	*/
/*									*/
/* FIXTYPE_WEAK =	(1<<7)	   initialized pointer -> weak symbol	*/
/* FIXTYPE_WORD =	(1<<3)	   initialized pointer is a word ptr	*/
/*									*/
/* The Weak bit means the object pointed to is a weak external.		*/
/* The Word bit means the pointer is a word pointer not a byte pointer.	*/
/*									*/
/* The 2 bit Ptr Base and Obj Base fields have the same encoding:	*/
/*									*/
/*	0 ABSBASE	.zdata						*/
/*	1 PICBASE	.text (in -pic mode)				*/
/*	2 PIRBASE	.rosdata, .rodata (PowerPC only)		*/
/*	3 PIDBASE	.sdata, .sbss, .data, .bss (in -pid mode)	*/
/*									*/
/* The linker concatenates sections together and also preserves their	*/
/* input order, so in the executable file there are two sections named	*/
/* .fixtype and .fixaddr.  Using the two 4 bit nibbles in .fixtype, the	*/
/* following code adds the appropriate base to each element of .fixaddr	*/
/* to find each initialized pointer, and then adds the appropriate base	*/
/* to the initialized pointer itself to give it the proper value.	*/
/*----------------------------------------------------------------------*/

#pragma weak __ghsbegin_fixtype
#pragma weak __ghsend_fixtype

#pragma weak __ghsbegin_fixaddr
#pragma weak __ghsend_fixaddr

#pragma weak __ghs_checksum

/* The --link_constprop optimization works for ARM and PowerPC.
   But __ghssize_* should not be used with PIC or PID because the
   compiler may add the PIC or PID base to the value.  */
#if (defined(__ARM__) || defined(__PPC)) && (!defined(__ghs_pic) && !defined(__ghs_pid))
    {
    #pragma weak __ghssize_fixaddr
    extern size_t __ghssize_fixaddr[];

    /* With -Olink on targets that support linker-based constant
       propagation, __ghssize_fixaddr resolving to 0 will cause
       this code to be optimized away. */
    if((long)__ghssize_fixaddr)
#endif
  {
#if defined(SUPPORTS_PACKED_STRUCTURES)
	#pragma pack(1)
	typedef struct {ptrdiff_t UNAL_PTR; } INIT_PTR;	/* unaligned init ptr */
	#pragma pack()
#else
	typedef struct {ptrdiff_t UNAL_PTR; } INIT_PTR;	/*   aligned init ptr */
#endif

    extern char __ghs_checksum[];		/* linker checksum size */

    char **ppaddr	= (char **)((char *)__ghsbegin_fixaddr + SCIFIX);
    char **ppaddrend	= (char **)((char *)__ghsend_fixaddr + SCIFIX);
    char  *ptype	= (char  *)((char *)__ghsbegin_fixtype + SCIFIX); /* -> .fixtype  */

/* The lx -checksum option appends a 32 bit checksum to each non-empty      */
/* section.  If there is no checksum word. lx sets symbol __ghs_checksum    */
/* to 0.  If the section is not empty, we must subtract the checksum word   */
/* size.  Since we're declaring the linker defined symbol as a data item    */
/* here, we must also subtract off the PID offset the compiler		    */
/* automatically inserts.						    */

    if (ppaddrend != ppaddr)
        ppaddrend = (char **)((size_t)ppaddrend-
			      ((size_t)__ghs_checksum-PIDBASE));

    while (ppaddr != ppaddrend) {
	ptrdiff_t	tmp;
	ptrdiff_t	Base;
	INIT_PTR*	ptr_to_init_ptr;	/* .fixaddr entry ->	*/
	int type = *ptype++;			/* next .fixtype byte	*/

#if defined(__MC68000) && defined(__COFF)
	while (type == 0) type = *ptype++;	/* l68 adds 0 bytes	*/
#endif

	Base = (ptrdiff_t) BASE[(type & (3<<4)) >> 4];	/* Byte Base	*/
	ptr_to_init_ptr = (INIT_PTR *)(Base + *ppaddr++);

	tmp = ptr_to_init_ptr->UNAL_PTR;	/* init ptr may be unaligned  */

	if (((type & FIXTYPE_WEAK) == 0)	/* if symbol NOT weak	*/
	   || (tmp != 0))	    {		/* or symbol NOT 0 then	*/
						/* reloc initialize ptr	*/
	    Base = (ptrdiff_t) BASE[type & 3];	/* get Byte Base	*/

	    if (!Base)
		continue;

	    if (type & FIXTYPE_WORD) tmp<<=2;	/* Word Ptr => Byte Ptr	*/
	    tmp += Base;			/* Add Byte Base	*/
	    if (type & FIXTYPE_WORD) tmp>>=2;	/* Byte Ptr => Word Ptr	*/

	    ptr_to_init_ptr->UNAL_PTR = tmp;	/* init ptr may be unaligned */
	}
    }
  }
#if (defined(__ARM__) || defined(__PPC)) && (!defined(__ghs_pic) && !defined(__ghs_pid))
    }
#endif

#ifdef __GHS_ENABLE_PATCHING
/*----------------------------------------------------------------------*/
/*									*/
/*	Patch RAM using a set of patches				*/
/*									*/
/*----------------------------------------------------------------------*/
    {

    crt1_fptr_t __ghs_patch(const char *patchbuf);

    #pragma weak __ghsbegin_patch1
    extern void *__ghsbegin_patch1;
    #pragma weak __ghsbegin_patch2
    extern void *__ghsbegin_patch2;
    void *info[2];
    void **b = info;
    void **e = (void *)b + sizeof(info);
    info[0] = &__ghsbegin_patch1;
    info[1] = &__ghsbegin_patch2;
    
    while (b != e) {
	char *	s;			/* source pointer	*/
	crt1_fptr_t func;
	s = (char *)(*b++);
	if (s && ((func = __ghs_patch(s)) != 0))
	    crt1p = func;
    }
    }
#endif

#ifdef __GHS_ENABLE_CACHES_AFTER_INIT
  /* No ROM / RAM address arithmetic is done here because it doesn't
     matter if we call the ROM or RAM version */
  __ghs_enable_caches();
#elif defined(__GHS_FLUSH_DCACHE_AFTER_ROMCOPY)
  /* Flush the dcache, so any code written there during ROMCOPY is
     written back to memory. */
#ifdef __PPC64_ABI__
    PPC64_FUNC_CALL(flush_dcache,flush_dcache_fptr_t,flush_dcache_toc)();
#else
  (*flush_dcache)();
#endif
#endif
  
  /*** RAM SECTIONS ARE NOW FULLY INITIALIZED ***/
  /* IT IS NOW SAFE TO USE ARBITRARY GLOBAL VARIABLES */

  /* THE FOLLOWING CALL SHOULD JUMP TO THE RAM VERSION OF CRT1 */
#ifdef __PPC64_ABI__
  PPC64_FUNC_CALL(crt1p,crt1_fptr_t,crt1_toc)(argc, argv, envp);
#else
  (*crt1p)(argc, argv, envp);
#endif
}

#else /* #if !defined(MINIMAL_STARTUP) */

/*------------------------------------------------------------------------*/
/* If libstartup.a and libsys.a are rebuilt with MINIMAL_STARTUP defined, */
/* then startup code will perform a limited subset of the standard	  */
/* behavior, suitable only for certain simple applications, where	  */
/* particularly small startup code is critical.  Certain features are	  */
/* not supported with this simplified startup code, notably:		  */
/* ROM to RAM copy, pic/pid, multithreading, and manual profiling.	  */
/* Other changes include smaller handcoded memset and memcpy for ARM.	  */
/* This library mode is not officially supported and should only be	  */
/* compiled by experienced users who understand the limited features.	  */
/*------------------------------------------------------------------------*/

extern void exit(int);
extern void _exit(int);
extern int main (int argc, char **argv, char **envp);

char **environ;

void __ghs_ind_crt0 (char *baseptrs[], int argc, char *argv[], char *envp[])
{
    char noname[2];
    char *arg[2];
    char *env[2];
    
/*----------------------------------------------------------------------*/
/*									*/
/*	Clear BSS							*/
/*									*/
/*----------------------------------------------------------------------*/
    { /* The .secinfo section is in text; declare functions to force PIC */

#pragma ghs rodata
    extern rodata_ptr __ghsbinfo_clear;
#pragma ghs rodata
    extern rodata_ptr __ghseinfo_clear;

    void **b = (void **) ((char *)__ghsbinfo_clear); 
    void **e = (void **) ((char *)__ghseinfo_clear); 

    while (b != e) {
	void *		t;			/* target pointer	*/
	ptrdiff_t	v;			/* value to set		*/
	size_t		n;			/* set n bytes		*/
	t = (char *)(*b++);
	v = *((ptrdiff_t *) b); b++;
	n = *((size_t    *) b); b++;
	memset(t, v, n);
    }
    }
    
/*----------------*/
/* initialize iob */
/*----------------*/
    {
    #pragma weak __gh_iob_init
    extern void __gh_iob_init(void);
    static void (CONST_FUNCP iob_init_funcp)(void) = __gh_iob_init;
    /* if cciob.c is loaded, initialize _iob for stdin,stdout,stderr */
    if (iob_init_funcp) __gh_iob_init();
    }

/*-------------------*/
/* initialize signal */
/*-------------------*/
    {
    #pragma weak __gh_signal_init
    extern void __gh_signal_init(void *);
    static void (CONST_FUNCP signal_init_funcp)(void *) = __gh_signal_init;
    /* if ind_sgnl.c is loaded, initialize the signal functions array */
    if (signal_init_funcp) __gh_signal_init(0);
    }

    if (!argc) {
	noname[0] = 0;
	noname[1] = 0;

	arg[0] = noname;
	arg[1] = 0;

	env[0] = noname+1;
	env[1] = 0;

	envp = env;
	argv = arg;

	argc = 1;
    }
    environ = envp;
/*------------------------------*/
/* call main(argc, argv, envp)	*/
/*------------------------------*/
    exit(main(argc, argv, envp));
    /* exit() will shut down the C library and call _exit() */
    _exit(-1);
    /* _exit() should never return. If it does, let our caller handle it.   */
    return;
}
#endif /* #if !defined(MINIMAL_STARTUP) */
