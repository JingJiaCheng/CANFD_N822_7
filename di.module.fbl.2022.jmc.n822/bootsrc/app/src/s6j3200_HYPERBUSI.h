/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_HYPERBUSI_H
#define __S6J3200_HYPERBUSI_H

#include "s6j3200io_basetypes.h"

/* HYPERBUSI0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define HYPERBUSI0	stcHYPERBUSI0
#else /* __IO_DEFINE */
#define HYPERBUSI0	(*((volatile stc_hyperbusi0_t*)0xB8028400))
#endif /* __IO_DEFINE */

/* CSR */
#define HYPERBUSI0_CSR	(HYPERBUSI0.unCSR.u32Register)  /*@rg@*/
#define HYPERBUSI0_CSR_RACT	(HYPERBUSI0.unCSR.stcField.u1RACT)  /*@bf@*/
#define HYPERBUSI0_CSR_RDECERR	(HYPERBUSI0.unCSR.stcField.u1RDECERR)  /*@bf@*/
#define HYPERBUSI0_CSR_RTRSERR	(HYPERBUSI0.unCSR.stcField.u1RTRSERR)  /*@bf@*/
#define HYPERBUSI0_CSR_RRSTOERR	(HYPERBUSI0.unCSR.stcField.u1RRSTOERR)  /*@bf@*/
#define HYPERBUSI0_CSR_RDSSTALL	(HYPERBUSI0.unCSR.stcField.u1RDSSTALL)  /*@bf@*/
#define HYPERBUSI0_CSR_WACT	(HYPERBUSI0.unCSR.stcField.u1WACT)  /*@bf@*/
#define HYPERBUSI0_CSR_WDECERR	(HYPERBUSI0.unCSR.stcField.u1WDECERR)  /*@bf@*/
#define HYPERBUSI0_CSR_WTRSERR	(HYPERBUSI0.unCSR.stcField.u1WTRSERR)  /*@bf@*/
#define HYPERBUSI0_CSR_WRSTOERR	(HYPERBUSI0.unCSR.stcField.u1WRSTOERR)  /*@bf@*/

typedef struct stc_hyperbusi0_csr_field{
    uint_io32_t		u1RACT:1;
    uint_io32_t		:7;
    uint_io32_t		u1RDECERR:1;
    uint_io32_t		u1RTRSERR:1;
    uint_io32_t		u1RRSTOERR:1;
    uint_io32_t		u1RDSSTALL:1;
    uint_io32_t		:4;
    uint_io32_t		u1WACT:1;
    uint_io32_t		:7;
    uint_io32_t		u1WDECERR:1;
    uint_io32_t		u1WTRSERR:1;
    uint_io32_t		u1WRSTOERR:1;
    uint_io32_t		:5;
}stc_hyperbusi0_csr_field_t;

typedef union un_hyperbusi0_csr{
    uint_io32_t		u32Register;
    stc_hyperbusi0_csr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_csr_t;

/* IEN */
#define HYPERBUSI0_IEN	(HYPERBUSI0.unIEN.u32Register)  /*@rg@*/
#define HYPERBUSI0_IEN_RPCINTE	(HYPERBUSI0.unIEN.stcField.u1RPCINTE)  /*@bf@*/
#define HYPERBUSI0_IEN_INTP	(HYPERBUSI0.unIEN.stcField.u1INTP)  /*@bf@*/

typedef struct stc_hyperbusi0_ien_field{
    uint_io32_t		u1RPCINTE:1;
    uint_io32_t		:30;
    uint_io32_t		u1INTP:1;
}stc_hyperbusi0_ien_field_t;

typedef union un_hyperbusi0_ien{
    uint_io32_t		u32Register;
    stc_hyperbusi0_ien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_ien_t;

/* ISR */
#define HYPERBUSI0_ISR	(HYPERBUSI0.unISR.u32Register)  /*@rg@*/
#define HYPERBUSI0_ISR_RPCINTS	(HYPERBUSI0.unISR.stcField.u1RPCINTS)  /*@bf@*/

typedef struct stc_hyperbusi0_isr_field{
    uint_io32_t		u1RPCINTS:1;
    uint_io32_t		:31;
}stc_hyperbusi0_isr_field_t;

typedef union un_hyperbusi0_isr{
    uint_io32_t		u32Register;
    stc_hyperbusi0_isr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_isr_t;

/* MBR[0-1] */
#define HYPERBUSI0_MBR0	(HYPERBUSI0.unMBR0.u32Register)  /*@rg@*/
#define HYPERBUSI0_MBR0_A	HYPERBUSI0_MBR0  /*@bfrg@*/

#define HYPERBUSI0_MBR1	(HYPERBUSI0.unMBR1.u32Register)  /*@rg@*/
#define HYPERBUSI0_MBR1_A	HYPERBUSI0_MBR1  /*@bfrg@*/

typedef union un_hyperbusi0_mbrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_mbrn_t;

/* MCR[0-1] */
#define HYPERBUSI0_MCR0	(HYPERBUSI0.unMCR0.u32Register)  /*@rg@*/
#define HYPERBUSI0_MCR0_WRAPSIZE	(HYPERBUSI0.unMCR0.stcField.u2WRAPSIZE)  /*@bf@*/
#define HYPERBUSI0_MCR0_DEVTYPE	(HYPERBUSI0.unMCR0.stcField.u1DEVTYPE)  /*@bf@*/
#define HYPERBUSI0_MCR0_CRT	(HYPERBUSI0.unMCR0.stcField.u1CRT)  /*@bf@*/
#define HYPERBUSI0_MCR0_ACS	(HYPERBUSI0.unMCR0.stcField.u1ACS)  /*@bf@*/
#define HYPERBUSI0_MCR0_CRMO	(HYPERBUSI0.unMCR0.stcField.u1CRMO)  /*@bf@*/

#define HYPERBUSI0_MCR1	(HYPERBUSI0.unMCR1.u32Register)  /*@rg@*/
#define HYPERBUSI0_MCR1_WRAPSIZE	(HYPERBUSI0.unMCR1.stcField.u2WRAPSIZE)  /*@bf@*/
#define HYPERBUSI0_MCR1_DEVTYPE	(HYPERBUSI0.unMCR1.stcField.u1DEVTYPE)  /*@bf@*/
#define HYPERBUSI0_MCR1_CRT	(HYPERBUSI0.unMCR1.stcField.u1CRT)  /*@bf@*/
#define HYPERBUSI0_MCR1_ACS	(HYPERBUSI0.unMCR1.stcField.u1ACS)  /*@bf@*/
#define HYPERBUSI0_MCR1_CRMO	(HYPERBUSI0.unMCR1.stcField.u1CRMO)  /*@bf@*/

typedef struct stc_hyperbusi0_mcrn_field{
    uint_io32_t		u2WRAPSIZE:2;
    uint_io32_t		:2;
    uint_io32_t		u1DEVTYPE:1;
    uint_io32_t		u1CRT:1;
    uint_io32_t		:10;
    uint_io32_t		u1ACS:1;
    uint_io32_t		u1CRMO:1;
    uint_io32_t		:14;
}stc_hyperbusi0_mcrn_field_t;

typedef union un_hyperbusi0_mcrn{
    uint_io32_t		u32Register;
    stc_hyperbusi0_mcrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_mcrn_t;

/* MTR[0-1] */
#define HYPERBUSI0_MTR0	(HYPERBUSI0.unMTR0.u32Register)  /*@rg@*/
#define HYPERBUSI0_MTR0_LTCY	(HYPERBUSI0.unMTR0.stcField.u4LTCY)  /*@bf@*/
#define HYPERBUSI0_MTR0_WCSH	(HYPERBUSI0.unMTR0.stcField.u4WCSH)  /*@bf@*/
#define HYPERBUSI0_MTR0_RCSH	(HYPERBUSI0.unMTR0.stcField.u4RCSH)  /*@bf@*/
#define HYPERBUSI0_MTR0_WCSS	(HYPERBUSI0.unMTR0.stcField.u4WCSS)  /*@bf@*/
#define HYPERBUSI0_MTR0_RCSS	(HYPERBUSI0.unMTR0.stcField.u4RCSS)  /*@bf@*/
#define HYPERBUSI0_MTR0_WCSHI	(HYPERBUSI0.unMTR0.stcField.u4WCSHI)  /*@bf@*/
#define HYPERBUSI0_MTR0_RCSHI	(HYPERBUSI0.unMTR0.stcField.u4RCSHI)  /*@bf@*/

#define HYPERBUSI0_MTR1	(HYPERBUSI0.unMTR1.u32Register)  /*@rg@*/
#define HYPERBUSI0_MTR1_LTCY	(HYPERBUSI0.unMTR1.stcField.u4LTCY)  /*@bf@*/
#define HYPERBUSI0_MTR1_WCSH	(HYPERBUSI0.unMTR1.stcField.u4WCSH)  /*@bf@*/
#define HYPERBUSI0_MTR1_RCSH	(HYPERBUSI0.unMTR1.stcField.u4RCSH)  /*@bf@*/
#define HYPERBUSI0_MTR1_WCSS	(HYPERBUSI0.unMTR1.stcField.u4WCSS)  /*@bf@*/
#define HYPERBUSI0_MTR1_RCSS	(HYPERBUSI0.unMTR1.stcField.u4RCSS)  /*@bf@*/
#define HYPERBUSI0_MTR1_WCSHI	(HYPERBUSI0.unMTR1.stcField.u4WCSHI)  /*@bf@*/
#define HYPERBUSI0_MTR1_RCSHI	(HYPERBUSI0.unMTR1.stcField.u4RCSHI)  /*@bf@*/

typedef struct stc_hyperbusi0_mtrn_field{
    uint_io32_t		u4LTCY:4;
    uint_io32_t		:4;
    uint_io32_t		u4WCSH:4;
    uint_io32_t		u4RCSH:4;
    uint_io32_t		u4WCSS:4;
    uint_io32_t		u4RCSS:4;
    uint_io32_t		u4WCSHI:4;
    uint_io32_t		u4RCSHI:4;
}stc_hyperbusi0_mtrn_field_t;

typedef union un_hyperbusi0_mtrn{
    uint_io32_t		u32Register;
    stc_hyperbusi0_mtrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_mtrn_t;

/* GPOR */
#define HYPERBUSI0_GPOR	(HYPERBUSI0.unGPOR.u32Register)  /*@rg@*/
#define HYPERBUSI0_GPOR_GPO	(HYPERBUSI0.unGPOR.stcField.u2GPO)  /*@bf@*/

typedef struct stc_hyperbusi0_gpor_field{
    uint_io32_t		u2GPO:2;
    uint_io32_t		:30;
}stc_hyperbusi0_gpor_field_t;

typedef union un_hyperbusi0_gpor{
    uint_io32_t		u32Register;
    stc_hyperbusi0_gpor_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_gpor_t;

/* WPR */
#define HYPERBUSI0_WPR	(HYPERBUSI0.unWPR.u32Register)  /*@rg@*/
#define HYPERBUSI0_WPR_WP	(HYPERBUSI0.unWPR.stcField.u1WP)  /*@bf@*/

typedef struct stc_hyperbusi0_wpr_field{
    uint_io32_t		u1WP:1;
    uint_io32_t		:31;
}stc_hyperbusi0_wpr_field_t;

typedef union un_hyperbusi0_wpr{
    uint_io32_t		u32Register;
    stc_hyperbusi0_wpr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_wpr_t;

/* TEST */
#define HYPERBUSI0_TEST	(HYPERBUSI0.unTEST.u32Register)  /*@rg@*/
#define HYPERBUSI0_TEST_RVD	(HYPERBUSI0.unTEST.stcField.u1RVD)  /*@bf@*/

typedef struct stc_hyperbusi0_test_field{
    uint_io32_t		u1RVD:1;
    uint_io32_t		:31;
}stc_hyperbusi0_test_field_t;

typedef union un_hyperbusi0_test{
    uint_io32_t		u32Register;
    stc_hyperbusi0_test_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hyperbusi0_test_t;


typedef struct stc_hyperbusi0{
    un_hyperbusi0_csr_t	unCSR;	/* 0x00000000 */
    un_hyperbusi0_ien_t	unIEN;	/* 0x00000004 */
    un_hyperbusi0_isr_t	unISR;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[4];	/* 0x0000000C */
    un_hyperbusi0_mbrn_t	unMBR0;	/* 0x00000010 */
    un_hyperbusi0_mbrn_t	unMBR1;	/* 0x00000014 */
    uint_io8_t	au8Reserved1[8];	/* 0x00000018 */
    un_hyperbusi0_mcrn_t	unMCR0;	/* 0x00000020 */
    un_hyperbusi0_mcrn_t	unMCR1;	/* 0x00000024 */
    uint_io8_t	au8Reserved2[8];	/* 0x00000028 */
    un_hyperbusi0_mtrn_t	unMTR0;	/* 0x00000030 */
    un_hyperbusi0_mtrn_t	unMTR1;	/* 0x00000034 */
    uint_io8_t	au8Reserved3[8];	/* 0x00000038 */
    un_hyperbusi0_gpor_t	unGPOR;	/* 0x00000040 */
    un_hyperbusi0_wpr_t	unWPR;	/* 0x00000044 */
    un_hyperbusi0_test_t	unTEST;	/* 0x00000048 */
    uint_io8_t	au8Reserved4[948];	/* 0x0000004C */
}stc_hyperbusi0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_hyperbusi0_t	stcHYPERBUSI0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_HYPERBUSI_H */
