/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MCG_H
#define __S6J3200_MCG_H

#include "s6j3200io_basetypes.h"

/* MCG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MCG	stcMCG
#else /* __IO_DEFINE */
#define MCG	(*((volatile stc_mcg_t*)0xB0688800))
#endif /* __IO_DEFINE */

/* IRSR0 */
#define MCG_IRSR0	(MCG.unIRSR0.u32Register)  /*@rg@*/
#define MCG_IRSR0_NMI_LVD	(*(volatile uint_io8_t*)0xB0C44000)  /*@bfbba@*/
#define MCG_IRSR0_NMI_SCU	(*(volatile uint_io8_t*)0xB0C44001)  /*@bfbba@*/
#define MCG_IRSR0_NMI_HWDG	(*(volatile uint_io8_t*)0xB0C44002)  /*@bfbba@*/
#define MCG_IRSR0_NMI_EXTINT	(*(volatile uint_io8_t*)0xB0C44003)  /*@bfbba@*/
#define MCG_IRSR0_IRQ_HWDG	(*(volatile uint_io8_t*)0xB0C44008)  /*@bfbba@*/
#define MCG_IRSR0_IRQ_SCU	(*(volatile uint_io8_t*)0xB0C44009)  /*@bfbba@*/
#define MCG_IRSR0_IRQ_RTC	(*(volatile uint_io8_t*)0xB0C4400A)  /*@bfbba@*/
#define MCG_IRSR0_IRQ_SCT_CR	(*(volatile uint_io8_t*)0xB0C44010)  /*@bfbba@*/
#define MCG_IRSR0_IRQ_SCT_SCR	(*(volatile uint_io8_t*)0xB0C44011)  /*@bfbba@*/
#define MCG_IRSR0_IRQ_SCT_MAIN	(*(volatile uint_io8_t*)0xB0C44012)  /*@bfbba@*/
#define MCG_IRSR0_IRQ_SCT_SUB	(*(volatile uint_io8_t*)0xB0C44013)  /*@bfbba@*/
#define MCG_IRSR0_IRQ_PW	(*(volatile uint_io8_t*)0xB0C44018)  /*@bfbba@*/

typedef struct stc_mcg_irsr0_field{
    uint_io32_t		u1NMI_LVD:1;
    uint_io32_t		u1NMI_SCU:1;
    uint_io32_t		u1NMI_HWDG:1;
    uint_io32_t		u1NMI_EXTINT:1;
    uint_io32_t		:4;
    uint_io32_t		u1IRQ_HWDG:1;
    uint_io32_t		u1IRQ_SCU:1;
    uint_io32_t		u1IRQ_RTC:1;
    uint_io32_t		:5;
    uint_io32_t		u1IRQ_SCT_CR:1;
    uint_io32_t		u1IRQ_SCT_SCR:1;
    uint_io32_t		u1IRQ_SCT_MAIN:1;
    uint_io32_t		u1IRQ_SCT_SUB:1;
    uint_io32_t		:4;
    uint_io32_t		u1IRQ_PW:1;
    uint_io32_t		:7;
}stc_mcg_irsr0_field_t;

typedef union un_mcg_irsr0{
    uint_io32_t		u32Register;
    stc_mcg_irsr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_irsr0_t;

/* IRSR1 */
#define MCG_IRSR1	(MCG.unIRSR1.u32Register)  /*@rg@*/
#define MCG_IRSR1_IRQ_EXTINT	MCG_IRSR1  /*@bfrg@*/

typedef union un_mcg_irsr1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_irsr1_t;

/* IRSR2 */
#define MCG_IRSR2	(MCG.unIRSR2.u32Register)  /*@rg@*/
#define MCG_IRSR2_NMI_RAMDE	(*(volatile uint_io8_t*)0xB0C44040)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_RAMSE	(*(volatile uint_io8_t*)0xB0C44041)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_RAMTC	(*(volatile uint_io8_t*)0xB0C44042)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_RAMTE	(*(volatile uint_io8_t*)0xB0C44043)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_RAMIC	(*(volatile uint_io8_t*)0xB0C44044)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_EICU	(*(volatile uint_io8_t*)0xB0C44048)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_CRCAL	(*(volatile uint_io8_t*)0xB0C44049)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_RLT0	(*(volatile uint_io8_t*)0xB0C44050)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_RLT1	(*(volatile uint_io8_t*)0xB0C44051)  /*@bfbba@*/
#define MCG_IRSR2_IRQ_RLT2	(*(volatile uint_io8_t*)0xB0C44052)  /*@bfbba@*/

typedef struct stc_mcg_irsr2_field{
    uint_io32_t		u1NMI_RAMDE:1;
    uint_io32_t		u1IRQ_RAMSE:1;
    uint_io32_t		u1IRQ_RAMTC:1;
    uint_io32_t		u1IRQ_RAMTE:1;
    uint_io32_t		u1IRQ_RAMIC:1;
    uint_io32_t		:3;
    uint_io32_t		u1IRQ_EICU:1;
    uint_io32_t		u1IRQ_CRCAL:1;
    uint_io32_t		:6;
    uint_io32_t		u1IRQ_RLT0:1;
    uint_io32_t		u1IRQ_RLT1:1;
    uint_io32_t		u1IRQ_RLT2:1;
    uint_io32_t		:13;
}stc_mcg_irsr2_field_t;

typedef union un_mcg_irsr2{
    uint_io32_t		u32Register;
    stc_mcg_irsr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_irsr2_t;

/* IRSR3 */
#define MCG_IRSR3	(MCG.unIRSR3.u32Register)  /*@rg@*/
#define MCG_IRSR3_IRQ_MFS0_TIRQ	(*(volatile uint_io8_t*)0xB0C44060)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MFS1_TIRQ	(*(volatile uint_io8_t*)0xB0C44061)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MFS2_TIRQ	(*(volatile uint_io8_t*)0xB0C44062)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MFS0_RIRQ	(*(volatile uint_io8_t*)0xB0C44064)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MFS1_RIRQ	(*(volatile uint_io8_t*)0xB0C44065)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MFS2_RIRQ	(*(volatile uint_io8_t*)0xB0C44066)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MFS0_SIRQ	(*(volatile uint_io8_t*)0xB0C44068)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MFS1_SIRQ	(*(volatile uint_io8_t*)0xB0C44069)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MFS2_SIRQ	(*(volatile uint_io8_t*)0xB0C4406A)  /*@bfbba@*/
#define MCG_IRSR3_NMI_MCAN0_DE	(*(volatile uint_io8_t*)0xB0C44070)  /*@bfbba@*/
#define MCG_IRSR3_NMI_MCAN1_DE	(*(volatile uint_io8_t*)0xB0C44071)  /*@bfbba@*/
#define MCG_IRSR3_NMI_MCAN2_DE	(*(volatile uint_io8_t*)0xB0C44072)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN0_SE	(*(volatile uint_io8_t*)0xB0C44074)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN1_SE	(*(volatile uint_io8_t*)0xB0C44075)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN2_SE	(*(volatile uint_io8_t*)0xB0C44076)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN0_INT0	(*(volatile uint_io8_t*)0xB0C44078)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN1_INT0	(*(volatile uint_io8_t*)0xB0C44079)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN2_INT0	(*(volatile uint_io8_t*)0xB0C4407A)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN0_INT1	(*(volatile uint_io8_t*)0xB0C4407C)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN1_INT1	(*(volatile uint_io8_t*)0xB0C4407D)  /*@bfbba@*/
#define MCG_IRSR3_IRQ_MCAN2_INT1	(*(volatile uint_io8_t*)0xB0C4407E)  /*@bfbba@*/

typedef struct stc_mcg_irsr3_field{
    uint_io32_t		u1IRQ_MFS0_TIRQ:1;
    uint_io32_t		u1IRQ_MFS1_TIRQ:1;
    uint_io32_t		u1IRQ_MFS2_TIRQ:1;
    uint_io32_t		:1;
    uint_io32_t		u1IRQ_MFS0_RIRQ:1;
    uint_io32_t		u1IRQ_MFS1_RIRQ:1;
    uint_io32_t		u1IRQ_MFS2_RIRQ:1;
    uint_io32_t		:1;
    uint_io32_t		u1IRQ_MFS0_SIRQ:1;
    uint_io32_t		u1IRQ_MFS1_SIRQ:1;
    uint_io32_t		u1IRQ_MFS2_SIRQ:1;
    uint_io32_t		:5;
    uint_io32_t		u1NMI_MCAN0_DE:1;
    uint_io32_t		u1NMI_MCAN1_DE:1;
    uint_io32_t		u1NMI_MCAN2_DE:1;
    uint_io32_t		:1;
    uint_io32_t		u1IRQ_MCAN0_SE:1;
    uint_io32_t		u1IRQ_MCAN1_SE:1;
    uint_io32_t		u1IRQ_MCAN2_SE:1;
    uint_io32_t		:1;
    uint_io32_t		u1IRQ_MCAN0_INT0:1;
    uint_io32_t		u1IRQ_MCAN1_INT0:1;
    uint_io32_t		u1IRQ_MCAN2_INT0:1;
    uint_io32_t		:1;
    uint_io32_t		u1IRQ_MCAN0_INT1:1;
    uint_io32_t		u1IRQ_MCAN1_INT1:1;
    uint_io32_t		u1IRQ_MCAN2_INT1:1;
    uint_io32_t		:1;
}stc_mcg_irsr3_field_t;

typedef union un_mcg_irsr3{
    uint_io32_t		u32Register;
    stc_mcg_irsr3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_irsr3_t;

/* IRSR4 */
#define MCG_IRSR4	(MCG.unIRSR4.u32Register)  /*@rg@*/
#define MCG_IRSR4_IRQ_MFS0_TEIRQ	(*(volatile uint_io8_t*)0xB0C44080)  /*@bfbba@*/
#define MCG_IRSR4_IRQ_MFS1_TEIRQ	(*(volatile uint_io8_t*)0xB0C44081)  /*@bfbba@*/
#define MCG_IRSR4_IRQ_MFS2_TEIRQ	(*(volatile uint_io8_t*)0xB0C44082)  /*@bfbba@*/
#define MCG_IRSR4_IRQ_MFS0_REIRQ	(*(volatile uint_io8_t*)0xB0C44084)  /*@bfbba@*/
#define MCG_IRSR4_IRQ_MFS1_REIRQ	(*(volatile uint_io8_t*)0xB0C44085)  /*@bfbba@*/
#define MCG_IRSR4_IRQ_MFS2_REIRQ	(*(volatile uint_io8_t*)0xB0C44086)  /*@bfbba@*/

typedef struct stc_mcg_irsr4_field{
    uint_io32_t		u1IRQ_MFS0_TEIRQ:1;
    uint_io32_t		u1IRQ_MFS1_TEIRQ:1;
    uint_io32_t		u1IRQ_MFS2_TEIRQ:1;
    uint_io32_t		:1;
    uint_io32_t		u1IRQ_MFS0_REIRQ:1;
    uint_io32_t		u1IRQ_MFS1_REIRQ:1;
    uint_io32_t		u1IRQ_MFS2_REIRQ:1;
    uint_io32_t		:25;
}stc_mcg_irsr4_field_t;

typedef union un_mcg_irsr4{
    uint_io32_t		u32Register;
    stc_mcg_irsr4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_irsr4_t;


typedef struct stc_mcg{
    un_mcg_irsr0_t	unIRSR0;	/* 0x00000000 */
    un_mcg_irsr1_t	unIRSR1;	/* 0x00000004 */
    un_mcg_irsr2_t	unIRSR2;	/* 0x00000008 */
    un_mcg_irsr3_t	unIRSR3;	/* 0x0000000C */
    un_mcg_irsr4_t	unIRSR4;	/* 0x00000010 */
    uint_io8_t	au8Reserved0[1004];	/* 0x00000014 */
}stc_mcg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mcg_t	stcMCG;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_MCG_H */
