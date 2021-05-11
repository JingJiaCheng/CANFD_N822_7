/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_BURIF_H
#define __S6J3200_BURIF_H

#include "s6j3200io_basetypes.h"

/* BURIF base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BURIF	stcBURIF
#else /* __IO_DEFINE */
#define BURIF	(*((volatile stc_burif_t*)0xB0680000))
#endif /* __IO_DEFINE */

/* UNLOCK */
#define BURIF_UNLOCK	(BURIF.unUNLOCK.u32Register)  /*@rg@*/
#define BURIF_UNLOCK_UNLOCK	BURIF_UNLOCK  /*@bfrg@*/

typedef union un_burif_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_burif_unlock_t;

/* STATUS */
#define BURIF_STATUS	(BURIF.unSTATUS.u32Register)  /*@rg@*/
#define BURIF_STATUS_TM_EEACC	(*(volatile uint_io8_t*)0xB0C00020)  /*@bfbba@*/
#define BURIF_STATUS_TM_ESKPC	(*(volatile uint_io8_t*)0xB0C00021)  /*@bfbba@*/
#define BURIF_STATUS_TM_ESKPG	(*(volatile uint_io8_t*)0xB0C00022)  /*@bfbba@*/
#define BURIF_STATUS_LOCKSTATUS	(*(volatile uint_io8_t*)0xB0C00028)  /*@bfbba@*/

typedef struct stc_burif_status_field{
    uint_io32_t		u1TM_EEACC:1;
    uint_io32_t		u1TM_ESKPC:1;
    uint_io32_t		u1TM_ESKPG:1;
    uint_io32_t		:5;
    uint_io32_t		u1LOCKSTATUS:1;
    uint_io32_t		:23;
}stc_burif_status_field_t;

typedef union un_burif_status{
    uint_io32_t		u32Register;
    stc_burif_status_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_burif_status_t;

/* DEEAR */
#define BURIF_DEEAR	(BURIF.unDEEAR.u16Register)  /*@rg@*/
#define BURIF_DEEAR_ERR_ADDR	(BURIF.unDEEAR.stcField.u15ERR_ADDR)  /*@bf@*/

typedef struct stc_burif_deear_field{
    uint_io16_t		u15ERR_ADDR:15;
    uint_io16_t		:1;
}stc_burif_deear_field_t;

typedef union un_burif_deear{
    uint_io16_t		u16Register;
    stc_burif_deear_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_burif_deear_t;

/* SEEAR */
#define BURIF_SEEAR	(BURIF.unSEEAR.u16Register)  /*@rg@*/
#define BURIF_SEEAR_ERR_ADDR	(BURIF.unSEEAR.stcField.u15ERR_ADDR)  /*@bf@*/

typedef struct stc_burif_seear_field{
    uint_io16_t		u15ERR_ADDR:15;
    uint_io16_t		:1;
}stc_burif_seear_field_t;

typedef union un_burif_seear{
    uint_io16_t		u16Register;
    stc_burif_seear_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_burif_seear_t;

/* EFEAR */
#define BURIF_EFEAR	(BURIF.unEFEAR.u16Register)  /*@rg@*/
#define BURIF_EFEAR_ERR_ADDR	(BURIF.unEFEAR.stcField.u15ERR_ADDR)  /*@bf@*/

typedef struct stc_burif_efear_field{
    uint_io16_t		u15ERR_ADDR:15;
    uint_io16_t		:1;
}stc_burif_efear_field_t;

typedef union un_burif_efear{
    uint_io16_t		u16Register;
    stc_burif_efear_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_burif_efear_t;

/* EECSR */
#define BURIF_EECSR	(BURIF.unEECSR.u8Register)  /*@rg@*/
#define BURIF_EECSR_SEI	(*(volatile uint_io8_t*)0xB0C00078)  /*@bfbba@*/
#define BURIF_EECSR_SEIE	(*(volatile uint_io8_t*)0xB0C00079)  /*@bfbba@*/
#define BURIF_EECSR_DEI	(*(volatile uint_io8_t*)0xB0C0007A)  /*@bfbba@*/
#define BURIF_EECSR_DEIE	(*(volatile uint_io8_t*)0xB0C0007B)  /*@bfbba@*/

typedef struct stc_burif_eecsr_field{
    uint_io8_t		u1SEI:1;
    uint_io8_t		u1SEIE:1;
    uint_io8_t		u1DEI:1;
    uint_io8_t		u1DEIE:1;
    uint_io8_t		:4;
}stc_burif_eecsr_field_t;

typedef union un_burif_eecsr{
    uint_io8_t		u8Register;
    stc_burif_eecsr_field_t		stcField;
}un_burif_eecsr_t;

/* EFECR_0 */
#define BURIF_EFECR_0	(BURIF.unEFECR_0.u8Register)  /*@rg@*/
#define BURIF_EFECR_0_EI	BURIF_EFECR_0  /*@bfrg@*/

typedef union un_burif_efecr_0{
    uint_io8_t		u8Register;
}un_burif_efecr_0_t;

/* EFECR_1 */
#define BURIF_EFECR_1	(BURIF.unEFECR_1.u8Register)  /*@rg@*/
#define BURIF_EFECR_1_EY	BURIF_EFECR_1  /*@bfrg@*/

typedef union un_burif_efecr_1{
    uint_io8_t		u8Register;
}un_burif_efecr_1_t;

/* EFECR_2 */
#define BURIF_EFECR_2	(BURIF.unEFECR_2.u8Register)  /*@rg@*/
#define BURIF_EFECR_2_FERR	(*(volatile uint_io8_t*)0xB0C00090)  /*@bfbba@*/

typedef struct stc_burif_efecr_2_field{
    uint_io8_t		u1FERR:1;
    uint_io8_t		:7;
}stc_burif_efecr_2_field_t;

typedef union un_burif_efecr_2{
    uint_io8_t		u8Register;
    stc_burif_efecr_2_field_t		stcField;
}un_burif_efecr_2_t;

/* EDPCR */
#define BURIF_EDPCR	(BURIF.unEDPCR.u8Register)  /*@rg@*/
#define BURIF_EDPCR_EACC	(*(volatile uint_io8_t*)0xB0C00098)  /*@bfbba@*/
#define BURIF_EDPCR_SKPC	(*(volatile uint_io8_t*)0xB0C00099)  /*@bfbba@*/
#define BURIF_EDPCR_SKPG	(*(volatile uint_io8_t*)0xB0C0009A)  /*@bfbba@*/

typedef struct stc_burif_edpcr_field{
    uint_io8_t		u1EACC:1;
    uint_io8_t		u1SKPC:1;
    uint_io8_t		u1SKPG:1;
    uint_io8_t		:5;
}stc_burif_edpcr_field_t;

typedef union un_burif_edpcr{
    uint_io8_t		u8Register;
    stc_burif_edpcr_field_t		stcField;
}un_burif_edpcr_t;

/* ECCTKCCR */
#define BURIF_ECCTKCCR	(BURIF.unECCTKCCR.u8Register)  /*@rg@*/
#define BURIF_ECCTKCCR_TM_EEACC	(*(volatile uint_io8_t*)0xB0C000A0)  /*@bfbba@*/
#define BURIF_ECCTKCCR_TM_ESKPC	(*(volatile uint_io8_t*)0xB0C000A1)  /*@bfbba@*/
#define BURIF_ECCTKCCR_TM_ESKPG	(*(volatile uint_io8_t*)0xB0C000A2)  /*@bfbba@*/

typedef struct stc_burif_ecctkccr_field{
    uint_io8_t		u1TM_EEACC:1;
    uint_io8_t		u1TM_ESKPC:1;
    uint_io8_t		u1TM_ESKPG:1;
    uint_io8_t		:5;
}stc_burif_ecctkccr_field_t;

typedef union un_burif_ecctkccr{
    uint_io8_t		u8Register;
    stc_burif_ecctkccr_field_t		stcField;
}un_burif_ecctkccr_t;

/* TEAR[0-2] */
#define BURIF_TEAR0	(BURIF.unTEAR0.u32Register)  /*@rg@*/
#define BURIF_TEAR0_ERR_ADDR	(BURIF.unTEAR0.stcField.u15ERR_ADDR)  /*@bf@*/
#define BURIF_TEAR0_TER	(BURIF.unTEAR0.stcField.u3TER)  /*@bf@*/

#define BURIF_TEAR1	(BURIF.unTEAR1.u32Register)  /*@rg@*/
#define BURIF_TEAR1_ERR_ADDR	(BURIF.unTEAR1.stcField.u15ERR_ADDR)  /*@bf@*/
#define BURIF_TEAR1_TER	(BURIF.unTEAR1.stcField.u3TER)  /*@bf@*/

#define BURIF_TEAR2	(BURIF.unTEAR2.u32Register)  /*@rg@*/
#define BURIF_TEAR2_ERR_ADDR	(BURIF.unTEAR2.stcField.u15ERR_ADDR)  /*@bf@*/
#define BURIF_TEAR2_TER	(BURIF.unTEAR2.stcField.u3TER)  /*@bf@*/

typedef struct stc_burif_tearn_field{
    uint_io32_t		u15ERR_ADDR:15;
    uint_io32_t		:14;
    uint_io32_t		u3TER:3;
}stc_burif_tearn_field_t;

typedef union un_burif_tearn{
    uint_io32_t		u32Register;
    stc_burif_tearn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_burif_tearn_t;

/* TASAR */
#define BURIF_TASAR	(BURIF.unTASAR.u16Register)  /*@rg@*/
#define BURIF_TASAR_SADDR	(BURIF.unTASAR.stcField.u15SADDR)  /*@bf@*/

typedef struct stc_burif_tasar_field{
    uint_io16_t		u15SADDR:15;
    uint_io16_t		:1;
}stc_burif_tasar_field_t;

typedef union un_burif_tasar{
    uint_io16_t		u16Register;
    stc_burif_tasar_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_burif_tasar_t;

/* TAEAR */
#define BURIF_TAEAR	(BURIF.unTAEAR.u16Register)  /*@rg@*/
#define BURIF_TAEAR_EADDR	(BURIF.unTAEAR.stcField.u15EADDR)  /*@bf@*/

typedef struct stc_burif_taear_field{
    uint_io16_t		u15EADDR:15;
    uint_io16_t		:1;
}stc_burif_taear_field_t;

typedef union un_burif_taear{
    uint_io16_t		u16Register;
    stc_burif_taear_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_burif_taear_t;

/* TTCR */
#define BURIF_TTCR	(BURIF.unTTCR.u16Register)  /*@rg@*/
#define BURIF_TTCR_TRUN	(*(volatile uint_io8_t*)0xB0C00140)  /*@bfbba@*/
#define BURIF_TTCR_TTYP	(BURIF.unTTCR.stcField.u3TTYP)  /*@bf@*/
#define BURIF_TTCR_TCI	(*(volatile uint_io8_t*)0xB0C00144)  /*@bfbba@*/
#define BURIF_TTCR_TCIE	(*(volatile uint_io8_t*)0xB0C00145)  /*@bfbba@*/
#define BURIF_TTCR_TEI	(*(volatile uint_io8_t*)0xB0C00146)  /*@bfbba@*/
#define BURIF_TTCR_TEIE	(*(volatile uint_io8_t*)0xB0C00147)  /*@bfbba@*/
#define BURIF_TTCR_OVFLW	(*(volatile uint_io8_t*)0xB0C00148)  /*@bfbba@*/
#define BURIF_TTCR_TSTAT	(*(volatile uint_io8_t*)0xB0C00149)  /*@bfbba@*/

typedef struct stc_burif_ttcr_field{
    uint_io16_t		u1TRUN:1;
    uint_io16_t		u3TTYP:3;
    uint_io16_t		u1TCI:1;
    uint_io16_t		u1TCIE:1;
    uint_io16_t		u1TEI:1;
    uint_io16_t		u1TEIE:1;
    uint_io16_t		u1OVFLW:1;
    uint_io16_t		u1TSTAT:1;
    uint_io16_t		:6;
}stc_burif_ttcr_field_t;

typedef union un_burif_ttcr{
    uint_io16_t		u16Register;
    stc_burif_ttcr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_burif_ttcr_t;

/* TICR */
#define BURIF_TICR	(BURIF.unTICR.u8Register)  /*@rg@*/
#define BURIF_TICR_IRUN	(*(volatile uint_io8_t*)0xB0C00150)  /*@bfbba@*/
#define BURIF_TICR_ITYP	(*(volatile uint_io8_t*)0xB0C00151)  /*@bfbba@*/
#define BURIF_TICR_ICI	(*(volatile uint_io8_t*)0xB0C00152)  /*@bfbba@*/
#define BURIF_TICR_ICIE	(*(volatile uint_io8_t*)0xB0C00153)  /*@bfbba@*/

typedef struct stc_burif_ticr_field{
    uint_io8_t		u1IRUN:1;
    uint_io8_t		u1ITYP:1;
    uint_io8_t		u1ICI:1;
    uint_io8_t		u1ICIE:1;
    uint_io8_t		:4;
}stc_burif_ticr_field_t;

typedef union un_burif_ticr{
    uint_io8_t		u8Register;
    stc_burif_ticr_field_t		stcField;
}un_burif_ticr_t;

/* TFECR */
#define BURIF_TFECR	(BURIF.unTFECR.u8Register)  /*@rg@*/
#define BURIF_TFECR_ETYP	(BURIF.unTFECR.stcField.u3ETYP)  /*@bf@*/
#define BURIF_TFECR_FERR	(*(volatile uint_io8_t*)0xB0C0015B)  /*@bfbba@*/

typedef struct stc_burif_tfecr_field{
    uint_io8_t		u3ETYP:3;
    uint_io8_t		u1FERR:1;
    uint_io8_t		:4;
}stc_burif_tfecr_field_t;

typedef union un_burif_tfecr{
    uint_io8_t		u8Register;
    stc_burif_tfecr_field_t		stcField;
}un_burif_tfecr_t;

/* TKCCR */
#define BURIF_TKCCR	(BURIF.unTKCCR.u8Register)  /*@rg@*/
#define BURIF_TKCCR_CODE	(BURIF.unTKCCR.stcField.u2CODE)  /*@bf@*/

typedef struct stc_burif_tkccr_field{
    uint_io8_t		u2CODE:2;
    uint_io8_t		:6;
}stc_burif_tkccr_field_t;

typedef union un_burif_tkccr{
    uint_io8_t		u8Register;
    stc_burif_tkccr_field_t		stcField;
}un_burif_tkccr_t;

/* TSRCR */
#define BURIF_TSRCR	(BURIF.unTSRCR.u8Register)  /*@rg@*/
#define BURIF_TSRCR_SRST	(*(volatile uint_io8_t*)0xB0C0017F)  /*@bfbba@*/

typedef struct stc_burif_tsrcr_field{
    uint_io8_t		:7;
    uint_io8_t		u1SRST:1;
}stc_burif_tsrcr_field_t;

typedef union un_burif_tsrcr{
    uint_io8_t		u8Register;
    stc_burif_tsrcr_field_t		stcField;
}un_burif_tsrcr_t;

/* EVENTCLR */
#define BURIF_EVENTCLR	(BURIF.unEVENTCLR.u32Register)  /*@rg@*/
#define BURIF_EVENTCLR_TCICLR	(*(volatile uint_io8_t*)0xB0C00184)  /*@bfbba@*/
#define BURIF_EVENTCLR_TEICLR	(*(volatile uint_io8_t*)0xB0C00186)  /*@bfbba@*/
#define BURIF_EVENTCLR_ICICLR	(*(volatile uint_io8_t*)0xB0C00192)  /*@bfbba@*/
#define BURIF_EVENTCLR_SEICLR	(*(volatile uint_io8_t*)0xB0C00198)  /*@bfbba@*/
#define BURIF_EVENTCLR_DEICLR	(*(volatile uint_io8_t*)0xB0C0019A)  /*@bfbba@*/

typedef struct stc_burif_eventclr_field{
    uint_io32_t		:4;
    uint_io32_t		u1TCICLR:1;
    uint_io32_t		:1;
    uint_io32_t		u1TEICLR:1;
    uint_io32_t		:11;
    uint_io32_t		u1ICICLR:1;
    uint_io32_t		:5;
    uint_io32_t		u1SEICLR:1;
    uint_io32_t		:1;
    uint_io32_t		u1DEICLR:1;
    uint_io32_t		:5;
}stc_burif_eventclr_field_t;

typedef union un_burif_eventclr{
    uint_io32_t		u32Register;
    stc_burif_eventclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_burif_eventclr_t;


typedef struct stc_burif{
    un_burif_unlock_t	unUNLOCK;	/* 0x00000000 */
    un_burif_status_t	unSTATUS;	/* 0x00000004 */
    un_burif_deear_t	unDEEAR;	/* 0x00000008 */
    un_burif_seear_t	unSEEAR;	/* 0x0000000A */
    un_burif_efear_t	unEFEAR;	/* 0x0000000C */
    uint_io8_t	au8Reserved0[1];	/* 0x0000000E */
    un_burif_eecsr_t	unEECSR;	/* 0x0000000F */
    un_burif_efecr_0_t	unEFECR_0;	/* 0x00000010 */
    un_burif_efecr_1_t	unEFECR_1;	/* 0x00000011 */
    un_burif_efecr_2_t	unEFECR_2;	/* 0x00000012 */
    un_burif_edpcr_t	unEDPCR;	/* 0x00000013 */
    un_burif_ecctkccr_t	unECCTKCCR;	/* 0x00000014 */
    uint_io8_t	au8Reserved1[3];	/* 0x00000015 */
    un_burif_tearn_t	unTEAR0;	/* 0x00000018 */
    un_burif_tearn_t	unTEAR1;	/* 0x0000001C */
    un_burif_tearn_t	unTEAR2;	/* 0x00000020 */
    un_burif_tasar_t	unTASAR;	/* 0x00000024 */
    un_burif_taear_t	unTAEAR;	/* 0x00000026 */
    un_burif_ttcr_t	unTTCR;	/* 0x00000028 */
    un_burif_ticr_t	unTICR;	/* 0x0000002A */
    un_burif_tfecr_t	unTFECR;	/* 0x0000002B */
    un_burif_tkccr_t	unTKCCR;	/* 0x0000002C */
    uint_io8_t	au8Reserved2[2];	/* 0x0000002D */
    un_burif_tsrcr_t	unTSRCR;	/* 0x0000002F */
    un_burif_eventclr_t	unEVENTCLR;	/* 0x00000030 */
    uint_io8_t	au8Reserved3[32716];	/* 0x00000034 */
}stc_burif_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_burif_t	stcBURIF;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


#endif /* __S6J3200_BURIF_H */
