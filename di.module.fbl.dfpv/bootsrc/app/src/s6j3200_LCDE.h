/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_LCDE_H
#define __S6J3200_LCDE_H

#include "s6j3200io_basetypes.h"

/* LCDE base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define LCDE	stcLCDE
#else /* __IO_DEFINE */
#define LCDE	(*((volatile stc_lcde_t*)0xB0641000))
#endif /* __IO_DEFINE */

/* LCD_KEYCDR */
#define LCDE_LCD_KEYCDR	(LCDE.unLCD_KEYCDR.u32Register)  /*@rg@*/

typedef union un_lcde_lcd_keycdr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_lcde_lcd_keycdr_t;

/* SEGER */
#define LCDE_SEGER	(LCDE.unSEGER.u32Register)  /*@rg@*/
#define LCDE_SEGER_SEGE24	(*(volatile uint_io8_t*)0xB0A08020)  /*@bfbba@*/
#define LCDE_SEGER_SEGE25	(*(volatile uint_io8_t*)0xB0A08021)  /*@bfbba@*/
#define LCDE_SEGER_SEGE26	(*(volatile uint_io8_t*)0xB0A08022)  /*@bfbba@*/
#define LCDE_SEGER_SEGE27	(*(volatile uint_io8_t*)0xB0A08023)  /*@bfbba@*/
#define LCDE_SEGER_SEGE28	(*(volatile uint_io8_t*)0xB0A08024)  /*@bfbba@*/
#define LCDE_SEGER_SEGE29	(*(volatile uint_io8_t*)0xB0A08025)  /*@bfbba@*/
#define LCDE_SEGER_SEGE30	(*(volatile uint_io8_t*)0xB0A08026)  /*@bfbba@*/
#define LCDE_SEGER_SEGE31	(*(volatile uint_io8_t*)0xB0A08027)  /*@bfbba@*/
#define LCDE_SEGER_SEGE16	(*(volatile uint_io8_t*)0xB0A08028)  /*@bfbba@*/
#define LCDE_SEGER_SEGE17	(*(volatile uint_io8_t*)0xB0A08029)  /*@bfbba@*/
#define LCDE_SEGER_SEGE18	(*(volatile uint_io8_t*)0xB0A0802A)  /*@bfbba@*/
#define LCDE_SEGER_SEGE19	(*(volatile uint_io8_t*)0xB0A0802B)  /*@bfbba@*/
#define LCDE_SEGER_SEGE20	(*(volatile uint_io8_t*)0xB0A0802C)  /*@bfbba@*/
#define LCDE_SEGER_SEGE21	(*(volatile uint_io8_t*)0xB0A0802D)  /*@bfbba@*/
#define LCDE_SEGER_SEGE22	(*(volatile uint_io8_t*)0xB0A0802E)  /*@bfbba@*/
#define LCDE_SEGER_SEGE23	(*(volatile uint_io8_t*)0xB0A0802F)  /*@bfbba@*/
#define LCDE_SEGER_SEGE8	(*(volatile uint_io8_t*)0xB0A08030)  /*@bfbba@*/
#define LCDE_SEGER_SEGE9	(*(volatile uint_io8_t*)0xB0A08031)  /*@bfbba@*/
#define LCDE_SEGER_SEGE10	(*(volatile uint_io8_t*)0xB0A08032)  /*@bfbba@*/
#define LCDE_SEGER_SEGE11	(*(volatile uint_io8_t*)0xB0A08033)  /*@bfbba@*/
#define LCDE_SEGER_SEGE12	(*(volatile uint_io8_t*)0xB0A08034)  /*@bfbba@*/
#define LCDE_SEGER_SEGE13	(*(volatile uint_io8_t*)0xB0A08035)  /*@bfbba@*/
#define LCDE_SEGER_SEGE14	(*(volatile uint_io8_t*)0xB0A08036)  /*@bfbba@*/
#define LCDE_SEGER_SEGE15	(*(volatile uint_io8_t*)0xB0A08037)  /*@bfbba@*/
#define LCDE_SEGER_SEGE0	(*(volatile uint_io8_t*)0xB0A08038)  /*@bfbba@*/
#define LCDE_SEGER_SEGE1	(*(volatile uint_io8_t*)0xB0A08039)  /*@bfbba@*/
#define LCDE_SEGER_SEGE2	(*(volatile uint_io8_t*)0xB0A0803A)  /*@bfbba@*/
#define LCDE_SEGER_SEGE3	(*(volatile uint_io8_t*)0xB0A0803B)  /*@bfbba@*/
#define LCDE_SEGER_SEGE4	(*(volatile uint_io8_t*)0xB0A0803C)  /*@bfbba@*/
#define LCDE_SEGER_SEGE5	(*(volatile uint_io8_t*)0xB0A0803D)  /*@bfbba@*/
#define LCDE_SEGER_SEGE6	(*(volatile uint_io8_t*)0xB0A0803E)  /*@bfbba@*/
#define LCDE_SEGER_SEGE7	(*(volatile uint_io8_t*)0xB0A0803F)  /*@bfbba@*/

typedef struct stc_lcde_seger_field{
    uint_io32_t		u1SEGE24:1;
    uint_io32_t		u1SEGE25:1;
    uint_io32_t		u1SEGE26:1;
    uint_io32_t		u1SEGE27:1;
    uint_io32_t		u1SEGE28:1;
    uint_io32_t		u1SEGE29:1;
    uint_io32_t		u1SEGE30:1;
    uint_io32_t		u1SEGE31:1;
    uint_io32_t		u1SEGE16:1;
    uint_io32_t		u1SEGE17:1;
    uint_io32_t		u1SEGE18:1;
    uint_io32_t		u1SEGE19:1;
    uint_io32_t		u1SEGE20:1;
    uint_io32_t		u1SEGE21:1;
    uint_io32_t		u1SEGE22:1;
    uint_io32_t		u1SEGE23:1;
    uint_io32_t		u1SEGE8:1;
    uint_io32_t		u1SEGE9:1;
    uint_io32_t		u1SEGE10:1;
    uint_io32_t		u1SEGE11:1;
    uint_io32_t		u1SEGE12:1;
    uint_io32_t		u1SEGE13:1;
    uint_io32_t		u1SEGE14:1;
    uint_io32_t		u1SEGE15:1;
    uint_io32_t		u1SEGE0:1;
    uint_io32_t		u1SEGE1:1;
    uint_io32_t		u1SEGE2:1;
    uint_io32_t		u1SEGE3:1;
    uint_io32_t		u1SEGE4:1;
    uint_io32_t		u1SEGE5:1;
    uint_io32_t		u1SEGE6:1;
    uint_io32_t		u1SEGE7:1;
}stc_lcde_seger_field_t;

typedef union un_lcde_seger{
    uint_io32_t		u32Register;
    stc_lcde_seger_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_lcde_seger_t;

/* COMVER */
#define LCDE_COMVER	(LCDE.unCOMVER.u32Register)  /*@rg@*/
#define LCDE_COMVER_COME0	(*(volatile uint_io8_t*)0xB0A08058)  /*@bfbba@*/
#define LCDE_COMVER_COME1	(*(volatile uint_io8_t*)0xB0A08059)  /*@bfbba@*/
#define LCDE_COMVER_COME2	(*(volatile uint_io8_t*)0xB0A0805A)  /*@bfbba@*/
#define LCDE_COMVER_COME3	(*(volatile uint_io8_t*)0xB0A0805B)  /*@bfbba@*/
#define LCDE_COMVER_VE0	(*(volatile uint_io8_t*)0xB0A0805C)  /*@bfbba@*/
#define LCDE_COMVER_VE1	(*(volatile uint_io8_t*)0xB0A0805D)  /*@bfbba@*/
#define LCDE_COMVER_VE2	(*(volatile uint_io8_t*)0xB0A0805E)  /*@bfbba@*/
#define LCDE_COMVER_VE3	(*(volatile uint_io8_t*)0xB0A0805F)  /*@bfbba@*/

typedef struct stc_lcde_comver_field{
    uint_io32_t		:24;
    uint_io32_t		u1COME0:1;
    uint_io32_t		u1COME1:1;
    uint_io32_t		u1COME2:1;
    uint_io32_t		u1COME3:1;
    uint_io32_t		u1VE0:1;
    uint_io32_t		u1VE1:1;
    uint_io32_t		u1VE2:1;
    uint_io32_t		u1VE3:1;
}stc_lcde_comver_field_t;

typedef union un_lcde_comver{
    uint_io32_t		u32Register;
    stc_lcde_comver_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_lcde_comver_t;


typedef struct stc_lcde{
    un_lcde_lcd_keycdr_t	unLCD_KEYCDR;	/* 0x00000000 */
    un_lcde_seger_t	unSEGER;	/* 0x00000004 */
    un_lcde_comver_t	unCOMVER;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[4084];	/* 0x0000000C */
}stc_lcde_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_lcde_t	stcLCDE;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 4096(0x1000) bytes */


#endif /* __S6J3200_LCDE_H */
