/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_PCMPWM_H
#define __S6J3200_PCMPWM_H

#include "s6j3200io_basetypes.h"

/* PCMPWM0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define PCMPWM0	stcPCMPWM0
#else /* __IO_DEFINE */
#define PCMPWM0	(*((volatile stc_pcmpwm0_t*)0xB8020800))
#endif /* __IO_DEFINE */

/* CONTROL */
#define PCMPWM0_CONTROL	(PCMPWM0.unCONTROL.u32Register)  /*@rg@*/
#define PCMPWM0_CONTROL_EN	(PCMPWM0.unCONTROL.stcField.u1EN)  /*@bf@*/
#define PCMPWM0_CONTROL_DMAEN	(PCMPWM0.unCONTROL.stcField.u1DMAEN)  /*@bf@*/
#define PCMPWM0_CONTROL_DBGEN	(PCMPWM0.unCONTROL.stcField.u1DBGEN)  /*@bf@*/
#define PCMPWM0_CONTROL_STEREO	(PCMPWM0.unCONTROL.stcField.u1STEREO)  /*@bf@*/
#define PCMPWM0_CONTROL_MODE	(PCMPWM0.unCONTROL.stcField.u2MODE)  /*@bf@*/
#define PCMPWM0_CONTROL_DOUBLE	(PCMPWM0.unCONTROL.stcField.u1DOUBLE)  /*@bf@*/
#define PCMPWM0_CONTROL_FEST	(PCMPWM0.unCONTROL.stcField.u5FEST)  /*@bf@*/
#define PCMPWM0_CONTROL_DTVAL	(PCMPWM0.unCONTROL.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_pcmpwm0_control_field{
    uint_io32_t		u1EN:1;
    uint_io32_t		:7;
    uint_io32_t		u1DMAEN:1;
    uint_io32_t		u1DBGEN:1;
    uint_io32_t		u1STEREO:1;
    uint_io32_t		u2MODE:2;
    uint_io32_t		u1DOUBLE:1;
    uint_io32_t		:2;
    uint_io32_t		u5FEST:5;
    uint_io32_t		:3;
    uint_io32_t		u8DTVAL:8;
}stc_pcmpwm0_control_field_t;

typedef union un_pcmpwm0_control{
    uint_io32_t		u32Register;
    stc_pcmpwm0_control_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_control_t;

/* OCTRL */
#define PCMPWM0_OCTRL	(PCMPWM0.unOCTRL.u32Register)  /*@rg@*/
#define PCMPWM0_OCTRL_EN0	(PCMPWM0.unOCTRL.stcField.u1EN0)  /*@bf@*/
#define PCMPWM0_OCTRL_EN1	(PCMPWM0.unOCTRL.stcField.u1EN1)  /*@bf@*/
#define PCMPWM0_OCTRL_LEVL0	(PCMPWM0.unOCTRL.stcField.u1LEVL0)  /*@bf@*/
#define PCMPWM0_OCTRL_LEVL1	(PCMPWM0.unOCTRL.stcField.u1LEVL1)  /*@bf@*/

typedef struct stc_pcmpwm0_octrl_field{
    uint_io32_t		u1EN0:1;
    uint_io32_t		u1EN1:1;
    uint_io32_t		:14;
    uint_io32_t		u1LEVL0:1;
    uint_io32_t		u1LEVL1:1;
    uint_io32_t		:14;
}stc_pcmpwm0_octrl_field_t;

typedef union un_pcmpwm0_octrl{
    uint_io32_t		u32Register;
    stc_pcmpwm0_octrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_octrl_t;

/* CLKSEL */
#define PCMPWM0_CLKSEL	(PCMPWM0.unCLKSEL.u32Register)  /*@rg@*/
#define PCMPWM0_CLKSEL_CLK_SEL	(PCMPWM0.unCLKSEL.stcField.u2CLK_SEL)  /*@bf@*/

typedef struct stc_pcmpwm0_clksel_field{
    uint_io32_t		u2CLK_SEL:2;
    uint_io32_t		:30;
}stc_pcmpwm0_clksel_field_t;

typedef union un_pcmpwm0_clksel{
    uint_io32_t		u32Register;
    stc_pcmpwm0_clksel_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_clksel_t;

/* COUNTP */
#define PCMPWM0_COUNTP	(PCMPWM0.unCOUNTP.u32Register)  /*@rg@*/
#define PCMPWM0_COUNTP_COUNTP	(PCMPWM0.unCOUNTP.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_pcmpwm0_countp_field{
    uint_io32_t		u16COUNTP:16;
    uint_io32_t		:16;
}stc_pcmpwm0_countp_field_t;

typedef union un_pcmpwm0_countp{
    uint_io32_t		u32Register;
    stc_pcmpwm0_countp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_countp_t;

/* PCMOFFS */
#define PCMPWM0_PCMOFFS	(PCMPWM0.unPCMOFFS.u32Register)  /*@rg@*/
#define PCMPWM0_PCMOFFS_PCM_OFFS	(PCMPWM0.unPCMOFFS.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_pcmpwm0_pcmoffs_field{
    uint_io32_t		u16PCM_OFFS:16;
    uint_io32_t		:16;
}stc_pcmpwm0_pcmoffs_field_t;

typedef union un_pcmpwm0_pcmoffs{
    uint_io32_t		u32Register;
    stc_pcmpwm0_pcmoffs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_pcmoffs_t;

/* INTREN */
#define PCMPWM0_INTREN	(PCMPWM0.unINTREN.u32Register)  /*@rg@*/
#define PCMPWM0_INTREN_DREQ	(PCMPWM0.unINTREN.stcField.u1DREQ)  /*@bf@*/
#define PCMPWM0_INTREN_OVFL	(PCMPWM0.unINTREN.stcField.u1OVFL)  /*@bf@*/
#define PCMPWM0_INTREN_UDRN	(PCMPWM0.unINTREN.stcField.u1UDRN)  /*@bf@*/
#define PCMPWM0_INTREN_DMA_ERR	(PCMPWM0.unINTREN.stcField.u1DMA_ERR)  /*@bf@*/

typedef struct stc_pcmpwm0_intren_field{
    uint_io32_t		u1DREQ:1;
    uint_io32_t		u1OVFL:1;
    uint_io32_t		u1UDRN:1;
    uint_io32_t		u1DMA_ERR:1;
    uint_io32_t		:28;
}stc_pcmpwm0_intren_field_t;

typedef union un_pcmpwm0_intren{
    uint_io32_t		u32Register;
    stc_pcmpwm0_intren_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_intren_t;

/* INTRSTAT */
#define PCMPWM0_INTRSTAT	(PCMPWM0.unINTRSTAT.u32Register)  /*@rg@*/
#define PCMPWM0_INTRSTAT_DREQ	(PCMPWM0.unINTRSTAT.stcField.u1DREQ)  /*@bf@*/
#define PCMPWM0_INTRSTAT_OVFL	(PCMPWM0.unINTRSTAT.stcField.u1OVFL)  /*@bf@*/
#define PCMPWM0_INTRSTAT_UDRN	(PCMPWM0.unINTRSTAT.stcField.u1UDRN)  /*@bf@*/
#define PCMPWM0_INTRSTAT_DMA_ERR	(PCMPWM0.unINTRSTAT.stcField.u1DMA_ERR)  /*@bf@*/

typedef struct stc_pcmpwm0_intrstat_field{
    uint_io32_t		u1DREQ:1;
    uint_io32_t		u1OVFL:1;
    uint_io32_t		u1UDRN:1;
    uint_io32_t		u1DMA_ERR:1;
    uint_io32_t		:28;
}stc_pcmpwm0_intrstat_field_t;

typedef union un_pcmpwm0_intrstat{
    uint_io32_t		u32Register;
    stc_pcmpwm0_intrstat_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_intrstat_t;

/* INTRCLR */
#define PCMPWM0_INTRCLR	(PCMPWM0.unINTRCLR.u32Register)  /*@rg@*/
#define PCMPWM0_INTRCLR_DREQ	(PCMPWM0.unINTRCLR.stcField.u1DREQ)  /*@bf@*/
#define PCMPWM0_INTRCLR_OVFL	(PCMPWM0.unINTRCLR.stcField.u1OVFL)  /*@bf@*/
#define PCMPWM0_INTRCLR_UDRN	(PCMPWM0.unINTRCLR.stcField.u1UDRN)  /*@bf@*/
#define PCMPWM0_INTRCLR_DMA_ERR	(PCMPWM0.unINTRCLR.stcField.u1DMA_ERR)  /*@bf@*/

typedef struct stc_pcmpwm0_intrclr_field{
    uint_io32_t		u1DREQ:1;
    uint_io32_t		u1OVFL:1;
    uint_io32_t		u1UDRN:1;
    uint_io32_t		u1DMA_ERR:1;
    uint_io32_t		:28;
}stc_pcmpwm0_intrclr_field_t;

typedef union un_pcmpwm0_intrclr{
    uint_io32_t		u32Register;
    stc_pcmpwm0_intrclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_intrclr_t;

/* DATA[0-15] */
#define PCMPWM0_DATA0	(PCMPWM0.unDATA0.u32Register)  /*@rg@*/

#define PCMPWM0_DATA1	(PCMPWM0.unDATA1.u32Register)  /*@rg@*/

#define PCMPWM0_DATA2	(PCMPWM0.unDATA2.u32Register)  /*@rg@*/

#define PCMPWM0_DATA3	(PCMPWM0.unDATA3.u32Register)  /*@rg@*/

#define PCMPWM0_DATA4	(PCMPWM0.unDATA4.u32Register)  /*@rg@*/

#define PCMPWM0_DATA5	(PCMPWM0.unDATA5.u32Register)  /*@rg@*/

#define PCMPWM0_DATA6	(PCMPWM0.unDATA6.u32Register)  /*@rg@*/

#define PCMPWM0_DATA7	(PCMPWM0.unDATA7.u32Register)  /*@rg@*/

#define PCMPWM0_DATA8	(PCMPWM0.unDATA8.u32Register)  /*@rg@*/

#define PCMPWM0_DATA9	(PCMPWM0.unDATA9.u32Register)  /*@rg@*/

#define PCMPWM0_DATA10	(PCMPWM0.unDATA10.u32Register)  /*@rg@*/

#define PCMPWM0_DATA11	(PCMPWM0.unDATA11.u32Register)  /*@rg@*/

#define PCMPWM0_DATA12	(PCMPWM0.unDATA12.u32Register)  /*@rg@*/

#define PCMPWM0_DATA13	(PCMPWM0.unDATA13.u32Register)  /*@rg@*/

#define PCMPWM0_DATA14	(PCMPWM0.unDATA14.u32Register)  /*@rg@*/

#define PCMPWM0_DATA15	(PCMPWM0.unDATA15.u32Register)  /*@rg@*/

typedef union un_pcmpwm0_datan{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_pcmpwm0_datan_t;


typedef struct stc_pcmpwm0{
    un_pcmpwm0_control_t	unCONTROL;	/* 0x00000000 */
    un_pcmpwm0_octrl_t	unOCTRL;	/* 0x00000004 */
    un_pcmpwm0_clksel_t	unCLKSEL;	/* 0x00000008 */
    un_pcmpwm0_countp_t	unCOUNTP;	/* 0x0000000C */
    un_pcmpwm0_pcmoffs_t	unPCMOFFS;	/* 0x00000010 */
    un_pcmpwm0_intren_t	unINTREN;	/* 0x00000014 */
    un_pcmpwm0_intrstat_t	unINTRSTAT;	/* 0x00000018 */
    un_pcmpwm0_intrclr_t	unINTRCLR;	/* 0x0000001C */
    uint_io8_t	au8Reserved0[32];	/* 0x00000020 */
    un_pcmpwm0_datan_t	unDATA0;	/* 0x00000040 */
    un_pcmpwm0_datan_t	unDATA1;	/* 0x00000044 */
    un_pcmpwm0_datan_t	unDATA2;	/* 0x00000048 */
    un_pcmpwm0_datan_t	unDATA3;	/* 0x0000004C */
    un_pcmpwm0_datan_t	unDATA4;	/* 0x00000050 */
    un_pcmpwm0_datan_t	unDATA5;	/* 0x00000054 */
    un_pcmpwm0_datan_t	unDATA6;	/* 0x00000058 */
    un_pcmpwm0_datan_t	unDATA7;	/* 0x0000005C */
    un_pcmpwm0_datan_t	unDATA8;	/* 0x00000060 */
    un_pcmpwm0_datan_t	unDATA9;	/* 0x00000064 */
    un_pcmpwm0_datan_t	unDATA10;	/* 0x00000068 */
    un_pcmpwm0_datan_t	unDATA11;	/* 0x0000006C */
    un_pcmpwm0_datan_t	unDATA12;	/* 0x00000070 */
    un_pcmpwm0_datan_t	unDATA13;	/* 0x00000074 */
    un_pcmpwm0_datan_t	unDATA14;	/* 0x00000078 */
    un_pcmpwm0_datan_t	unDATA15;	/* 0x0000007C */
    uint_io8_t	au8Reserved1[896];	/* 0x00000080 */
}stc_pcmpwm0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_pcmpwm0_t	stcPCMPWM0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_PCMPWM_H */
