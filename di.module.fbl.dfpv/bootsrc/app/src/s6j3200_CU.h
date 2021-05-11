/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_CU_H
#define __S6J3200_CU_H

#include "s6j3200io_basetypes.h"

/* CU base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define CU	stcCU
#else /* __IO_DEFINE */
#define CU	(*((volatile stc_cu_t*)0xB0688400))
#endif /* __IO_DEFINE */

/* CUCR1 */
#define CU_CUCR1	(CU.unCUCR1.u16Register)  /*@rg@*/
#define CU_CUCR1_INTEN	(*(volatile uint_io8_t*)0xB0C42000)  /*@bfbba@*/
#define CU_CUCR1_INT	(*(volatile uint_io8_t*)0xB0C42001)  /*@bfbba@*/
#define CU_CUCR1_STRT	(*(volatile uint_io8_t*)0xB0C42004)  /*@bfbba@*/

typedef struct stc_cu_cucr1_field{
    uint_io16_t		u1INTEN:1;
    uint_io16_t		u1INT:1;
    uint_io16_t		:2;
    uint_io16_t		u1STRT:1;
    uint_io16_t		:11;
}stc_cu_cucr1_field_t;

typedef union un_cu_cucr1{
    uint_io16_t		u16Register;
    stc_cu_cucr1_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cu_cucr1_t;

/* CUTD1 */
#define CU_CUTD1	(CU.unCUTD1.u16Register)  /*@rg@*/
#define CU_CUTD1_TDD	CU_CUTD1  /*@bfrg@*/

typedef union un_cu_cutd1{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cu_cutd1_t;

/* CUTR1 */
#define CU_CUTR1	(CU.unCUTR1.u32Register)  /*@rg@*/
#define CU_CUTR1_TDR	(CU.unCUTR1.stcField.u24TDR)  /*@bf@*/

typedef struct stc_cu_cutr1_field{
    uint_io32_t		u24TDR:24;
    uint_io32_t		:8;
}stc_cu_cutr1_field_t;

typedef union un_cu_cutr1{
    uint_io32_t		u32Register;
    stc_cu_cutr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cu_cutr1_t;

/* CUCRC1 */
#define CU_CUCRC1	(CU.unCUCRC1.u32Register)  /*@rg@*/
#define CU_CUCRC1_INTC	(*(volatile uint_io8_t*)0xB0C42041)  /*@bfbba@*/

typedef struct stc_cu_cucrc1_field{
    uint_io32_t		:1;
    uint_io32_t		u1INTC:1;
    uint_io32_t		:30;
}stc_cu_cucrc1_field_t;

typedef union un_cu_cucrc1{
    uint_io32_t		u32Register;
    stc_cu_cucrc1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cu_cucrc1_t;


typedef struct stc_cu{
    un_cu_cucr1_t	unCUCR1;	/* 0x00000000 */
    un_cu_cutd1_t	unCUTD1;	/* 0x00000002 */
    un_cu_cutr1_t	unCUTR1;	/* 0x00000004 */
    un_cu_cucrc1_t	unCUCRC1;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[1012];	/* 0x0000000C */
}stc_cu_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_cu_t	stcCU;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_CU_H */
