/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_CRC_H
#define __S6J3200_CRC_H

#include "s6j3200io_basetypes.h"

/* CRC[00-03] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define CRC00	stcCRC[0]
#define CRC01	stcCRC[1]
#define CRC02	stcCRC[2]
#define CRC03	stcCRC[3]
#else /* __IO_DEFINE */
#define CRC00	(*((volatile stc_crcn_t*)0xB4718000))
#define CRC01	(*((volatile stc_crcn_t*)0xB4718400))
#define CRC02	(*((volatile stc_crcn_t*)0xB4718800))
#define CRC03	(*((volatile stc_crcn_t*)0xB4718C00))
#endif /* __IO_DEFINE */

/* CRCCR */
#define CRC00_CRCCR	(CRC00.unCRCCR.u8Register)  /*@rg@*/
#define CRC00_CRCCR_INIT	(*(volatile uint_io8_t*)0xB70C0000)  /*@bfbba@*/
#define CRC00_CRCCR_CRC32	(*(volatile uint_io8_t*)0xB70C0001)  /*@bfbba@*/
#define CRC00_CRCCR_LTLEND	(*(volatile uint_io8_t*)0xB70C0002)  /*@bfbba@*/
#define CRC00_CRCCR_LSBFST	(*(volatile uint_io8_t*)0xB70C0003)  /*@bfbba@*/
#define CRC00_CRCCR_CRCLTE	(*(volatile uint_io8_t*)0xB70C0004)  /*@bfbba@*/
#define CRC00_CRCCR_CRCLSF	(*(volatile uint_io8_t*)0xB70C0005)  /*@bfbba@*/
#define CRC00_CRCCR_FXOR	(*(volatile uint_io8_t*)0xB70C0006)  /*@bfbba@*/

#define CRC01_CRCCR	(CRC01.unCRCCR.u8Register)  /*@rg@*/
#define CRC01_CRCCR_INIT	(*(volatile uint_io8_t*)0xB70C2000)  /*@bfbba@*/
#define CRC01_CRCCR_CRC32	(*(volatile uint_io8_t*)0xB70C2001)  /*@bfbba@*/
#define CRC01_CRCCR_LTLEND	(*(volatile uint_io8_t*)0xB70C2002)  /*@bfbba@*/
#define CRC01_CRCCR_LSBFST	(*(volatile uint_io8_t*)0xB70C2003)  /*@bfbba@*/
#define CRC01_CRCCR_CRCLTE	(*(volatile uint_io8_t*)0xB70C2004)  /*@bfbba@*/
#define CRC01_CRCCR_CRCLSF	(*(volatile uint_io8_t*)0xB70C2005)  /*@bfbba@*/
#define CRC01_CRCCR_FXOR	(*(volatile uint_io8_t*)0xB70C2006)  /*@bfbba@*/

#define CRC02_CRCCR	(CRC02.unCRCCR.u8Register)  /*@rg@*/
#define CRC02_CRCCR_INIT	(*(volatile uint_io8_t*)0xB70C4000)  /*@bfbba@*/
#define CRC02_CRCCR_CRC32	(*(volatile uint_io8_t*)0xB70C4001)  /*@bfbba@*/
#define CRC02_CRCCR_LTLEND	(*(volatile uint_io8_t*)0xB70C4002)  /*@bfbba@*/
#define CRC02_CRCCR_LSBFST	(*(volatile uint_io8_t*)0xB70C4003)  /*@bfbba@*/
#define CRC02_CRCCR_CRCLTE	(*(volatile uint_io8_t*)0xB70C4004)  /*@bfbba@*/
#define CRC02_CRCCR_CRCLSF	(*(volatile uint_io8_t*)0xB70C4005)  /*@bfbba@*/
#define CRC02_CRCCR_FXOR	(*(volatile uint_io8_t*)0xB70C4006)  /*@bfbba@*/

#define CRC03_CRCCR	(CRC03.unCRCCR.u8Register)  /*@rg@*/
#define CRC03_CRCCR_INIT	(*(volatile uint_io8_t*)0xB70C6000)  /*@bfbba@*/
#define CRC03_CRCCR_CRC32	(*(volatile uint_io8_t*)0xB70C6001)  /*@bfbba@*/
#define CRC03_CRCCR_LTLEND	(*(volatile uint_io8_t*)0xB70C6002)  /*@bfbba@*/
#define CRC03_CRCCR_LSBFST	(*(volatile uint_io8_t*)0xB70C6003)  /*@bfbba@*/
#define CRC03_CRCCR_CRCLTE	(*(volatile uint_io8_t*)0xB70C6004)  /*@bfbba@*/
#define CRC03_CRCCR_CRCLSF	(*(volatile uint_io8_t*)0xB70C6005)  /*@bfbba@*/
#define CRC03_CRCCR_FXOR	(*(volatile uint_io8_t*)0xB70C6006)  /*@bfbba@*/

typedef struct stc_crcn_crccr_field{
    uint_io8_t		u1INIT:1;
    uint_io8_t		u1CRC32:1;
    uint_io8_t		u1LTLEND:1;
    uint_io8_t		u1LSBFST:1;
    uint_io8_t		u1CRCLTE:1;
    uint_io8_t		u1CRCLSF:1;
    uint_io8_t		u1FXOR:1;
    uint_io8_t		:1;
}stc_crcn_crccr_field_t;

typedef union un_crcn_crccr{
    uint_io8_t		u8Register;
    stc_crcn_crccr_field_t		stcField;
}un_crcn_crccr_t;

/* CRCINIT */
#define CRC00_CRCINIT	(CRC00.unCRCINIT.u32Register)  /*@rg@*/
#define CRC00_CRCINIT_D	CRC00_CRCINIT  /*@bfrg@*/

#define CRC01_CRCINIT	(CRC01.unCRCINIT.u32Register)  /*@rg@*/
#define CRC01_CRCINIT_D	CRC01_CRCINIT  /*@bfrg@*/

#define CRC02_CRCINIT	(CRC02.unCRCINIT.u32Register)  /*@rg@*/
#define CRC02_CRCINIT_D	CRC02_CRCINIT  /*@bfrg@*/

#define CRC03_CRCINIT	(CRC03.unCRCINIT.u32Register)  /*@rg@*/
#define CRC03_CRCINIT_D	CRC03_CRCINIT  /*@bfrg@*/

typedef union un_crcn_crcinit{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crcn_crcinit_t;

/* CRCIN */
#define CRC00_CRCIN	(CRC00.unCRCIN.u32Register)  /*@rg@*/
#define CRC00_CRCIN_D	CRC00_CRCIN  /*@bfrg@*/

#define CRC01_CRCIN	(CRC01.unCRCIN.u32Register)  /*@rg@*/
#define CRC01_CRCIN_D	CRC01_CRCIN  /*@bfrg@*/

#define CRC02_CRCIN	(CRC02.unCRCIN.u32Register)  /*@rg@*/
#define CRC02_CRCIN_D	CRC02_CRCIN  /*@bfrg@*/

#define CRC03_CRCIN	(CRC03.unCRCIN.u32Register)  /*@rg@*/
#define CRC03_CRCIN_D	CRC03_CRCIN  /*@bfrg@*/

typedef union un_crcn_crcin{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crcn_crcin_t;

/* CRCR */
#define CRC00_CRCR	(CRC00.unCRCR.u32Register)  /*@rg@*/
#define CRC00_CRCR_D	CRC00_CRCR  /*@bfrg@*/

#define CRC01_CRCR	(CRC01.unCRCR.u32Register)  /*@rg@*/
#define CRC01_CRCR_D	CRC01_CRCR  /*@bfrg@*/

#define CRC02_CRCR	(CRC02.unCRCR.u32Register)  /*@rg@*/
#define CRC02_CRCR_D	CRC02_CRCR  /*@bfrg@*/

#define CRC03_CRCR	(CRC03.unCRCR.u32Register)  /*@rg@*/
#define CRC03_CRCR_D	CRC03_CRCR  /*@bfrg@*/

typedef union un_crcn_crcr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crcn_crcr_t;


typedef struct stc_crcn{
    un_crcn_crccr_t	unCRCCR;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[3];	/* 0x00000001 */
    un_crcn_crcinit_t	unCRCINIT;	/* 0x00000004 */
    un_crcn_crcin_t	unCRCIN;	/* 0x00000008 */
    un_crcn_crcr_t	unCRCR;	/* 0x0000000C */
    uint_io8_t	au8Reserved1[1008];	/* 0x00000010 */
}stc_crcn_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_crcn_t	stcCRC[4];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_CRC_H */
