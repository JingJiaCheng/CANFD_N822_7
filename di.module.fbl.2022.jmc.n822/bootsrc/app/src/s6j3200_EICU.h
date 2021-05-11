/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_EICU_H
#define __S6J3200_EICU_H

#include "s6j3200io_basetypes.h"

/* EICU0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define EICU0	stcEICU0
#else /* __IO_DEFINE */
#define EICU0	(*((volatile stc_eicu0_t*)0xB0688000))
#endif /* __IO_DEFINE */

/* CNFGR */
#define EICU0_CNFGR	(EICU0.unCNFGR.u32Register)  /*@rg@*/
#define EICU0_CNFGR_CLKSEL	(EICU0.unCNFGR.stcField.u2CLKSEL)  /*@bf@*/
#define EICU0_CNFGR_PRESCALE	(EICU0.unCNFGR.stcField.u6PRESCALE)  /*@bf@*/
#define EICU0_CNFGR_OBSCH	(EICU0.unCNFGR.stcField.u5OBSCH)  /*@bf@*/
#define EICU0_CNFGR_BUSY	(*(volatile uint_io8_t*)0xB0C40016)  /*@bfbba@*/
#define EICU0_CNFGR_DATAVALID	(*(volatile uint_io8_t*)0xB0C40017)  /*@bfbba@*/
#define EICU0_CNFGR_DATARESET	(*(volatile uint_io8_t*)0xB0C40018)  /*@bfbba@*/
#define EICU0_CNFGR_OBSEN	(*(volatile uint_io8_t*)0xB0C40019)  /*@bfbba@*/
#define EICU0_CNFGR_IRQEN	(*(volatile uint_io8_t*)0xB0C4001A)  /*@bfbba@*/

typedef struct stc_eicu0_cnfgr_field{
    uint_io32_t		u2CLKSEL:2;
    uint_io32_t		u6PRESCALE:6;
    uint_io32_t		:8;
    uint_io32_t		u5OBSCH:5;
    uint_io32_t		:1;
    uint_io32_t		u1BUSY:1;
    uint_io32_t		u1DATAVALID:1;
    uint_io32_t		u1DATARESET:1;
    uint_io32_t		u1OBSEN:1;
    uint_io32_t		u1IRQEN:1;
    uint_io32_t		:5;
}stc_eicu0_cnfgr_field_t;

typedef union un_eicu0_cnfgr{
    uint_io32_t		u32Register;
    stc_eicu0_cnfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eicu0_cnfgr_t;

/* IRENR */
#define EICU0_IRENR	(EICU0.unIRENR.u32Register)  /*@rg@*/
#define EICU0_IRENR_IREN0	(*(volatile uint_io8_t*)0xB0C40020)  /*@bfbba@*/
#define EICU0_IRENR_IREN1	(*(volatile uint_io8_t*)0xB0C40021)  /*@bfbba@*/
#define EICU0_IRENR_IREN2	(*(volatile uint_io8_t*)0xB0C40022)  /*@bfbba@*/
#define EICU0_IRENR_IREN3	(*(volatile uint_io8_t*)0xB0C40023)  /*@bfbba@*/
#define EICU0_IRENR_IREN4	(*(volatile uint_io8_t*)0xB0C40024)  /*@bfbba@*/
#define EICU0_IRENR_IREN5	(*(volatile uint_io8_t*)0xB0C40025)  /*@bfbba@*/
#define EICU0_IRENR_IREN6	(*(volatile uint_io8_t*)0xB0C40026)  /*@bfbba@*/
#define EICU0_IRENR_IREN7	(*(volatile uint_io8_t*)0xB0C40027)  /*@bfbba@*/
#define EICU0_IRENR_IREN8	(*(volatile uint_io8_t*)0xB0C40028)  /*@bfbba@*/
#define EICU0_IRENR_IREN9	(*(volatile uint_io8_t*)0xB0C40029)  /*@bfbba@*/
#define EICU0_IRENR_IREN10	(*(volatile uint_io8_t*)0xB0C4002A)  /*@bfbba@*/
#define EICU0_IRENR_IREN11	(*(volatile uint_io8_t*)0xB0C4002B)  /*@bfbba@*/
#define EICU0_IRENR_IREN12	(*(volatile uint_io8_t*)0xB0C4002C)  /*@bfbba@*/
#define EICU0_IRENR_IREN13	(*(volatile uint_io8_t*)0xB0C4002D)  /*@bfbba@*/
#define EICU0_IRENR_IREN14	(*(volatile uint_io8_t*)0xB0C4002E)  /*@bfbba@*/
#define EICU0_IRENR_IREN15	(*(volatile uint_io8_t*)0xB0C4002F)  /*@bfbba@*/
#define EICU0_IRENR_IREN16	(*(volatile uint_io8_t*)0xB0C40030)  /*@bfbba@*/
#define EICU0_IRENR_IREN17	(*(volatile uint_io8_t*)0xB0C40031)  /*@bfbba@*/
#define EICU0_IRENR_IREN18	(*(volatile uint_io8_t*)0xB0C40032)  /*@bfbba@*/
#define EICU0_IRENR_IREN19	(*(volatile uint_io8_t*)0xB0C40033)  /*@bfbba@*/
#define EICU0_IRENR_IREN20	(*(volatile uint_io8_t*)0xB0C40034)  /*@bfbba@*/
#define EICU0_IRENR_IREN21	(*(volatile uint_io8_t*)0xB0C40035)  /*@bfbba@*/
#define EICU0_IRENR_IREN22	(*(volatile uint_io8_t*)0xB0C40036)  /*@bfbba@*/
#define EICU0_IRENR_IREN23	(*(volatile uint_io8_t*)0xB0C40037)  /*@bfbba@*/
#define EICU0_IRENR_IREN24	(*(volatile uint_io8_t*)0xB0C40038)  /*@bfbba@*/
#define EICU0_IRENR_IREN25	(*(volatile uint_io8_t*)0xB0C40039)  /*@bfbba@*/
#define EICU0_IRENR_IREN26	(*(volatile uint_io8_t*)0xB0C4003A)  /*@bfbba@*/
#define EICU0_IRENR_IREN27	(*(volatile uint_io8_t*)0xB0C4003B)  /*@bfbba@*/
#define EICU0_IRENR_IREN28	(*(volatile uint_io8_t*)0xB0C4003C)  /*@bfbba@*/
#define EICU0_IRENR_IREN29	(*(volatile uint_io8_t*)0xB0C4003D)  /*@bfbba@*/
#define EICU0_IRENR_IREN30	(*(volatile uint_io8_t*)0xB0C4003E)  /*@bfbba@*/
#define EICU0_IRENR_IREN31	(*(volatile uint_io8_t*)0xB0C4003F)  /*@bfbba@*/

typedef struct stc_eicu0_irenr_field{
    uint_io32_t		u1IREN0:1;
    uint_io32_t		u1IREN1:1;
    uint_io32_t		u1IREN2:1;
    uint_io32_t		u1IREN3:1;
    uint_io32_t		u1IREN4:1;
    uint_io32_t		u1IREN5:1;
    uint_io32_t		u1IREN6:1;
    uint_io32_t		u1IREN7:1;
    uint_io32_t		u1IREN8:1;
    uint_io32_t		u1IREN9:1;
    uint_io32_t		u1IREN10:1;
    uint_io32_t		u1IREN11:1;
    uint_io32_t		u1IREN12:1;
    uint_io32_t		u1IREN13:1;
    uint_io32_t		u1IREN14:1;
    uint_io32_t		u1IREN15:1;
    uint_io32_t		u1IREN16:1;
    uint_io32_t		u1IREN17:1;
    uint_io32_t		u1IREN18:1;
    uint_io32_t		u1IREN19:1;
    uint_io32_t		u1IREN20:1;
    uint_io32_t		u1IREN21:1;
    uint_io32_t		u1IREN22:1;
    uint_io32_t		u1IREN23:1;
    uint_io32_t		u1IREN24:1;
    uint_io32_t		u1IREN25:1;
    uint_io32_t		u1IREN26:1;
    uint_io32_t		u1IREN27:1;
    uint_io32_t		u1IREN28:1;
    uint_io32_t		u1IREN29:1;
    uint_io32_t		u1IREN30:1;
    uint_io32_t		u1IREN31:1;
}stc_eicu0_irenr_field_t;

typedef union un_eicu0_irenr{
    uint_io32_t		u32Register;
    stc_eicu0_irenr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eicu0_irenr_t;

/* SPLR[0-7] */
#define EICU0_SPLR0	(EICU0.unSPLR0.u32Register)  /*@rg@*/
#define EICU0_SPLR0_SPL0	(*(volatile uint_io8_t*)0xB0C40040)  /*@bfbba@*/
#define EICU0_SPLR0_SPL1	(*(volatile uint_io8_t*)0xB0C40041)  /*@bfbba@*/
#define EICU0_SPLR0_SPL2	(*(volatile uint_io8_t*)0xB0C40042)  /*@bfbba@*/
#define EICU0_SPLR0_SPL3	(*(volatile uint_io8_t*)0xB0C40043)  /*@bfbba@*/
#define EICU0_SPLR0_SPL4	(*(volatile uint_io8_t*)0xB0C40044)  /*@bfbba@*/
#define EICU0_SPLR0_SPL5	(*(volatile uint_io8_t*)0xB0C40045)  /*@bfbba@*/
#define EICU0_SPLR0_SPL6	(*(volatile uint_io8_t*)0xB0C40046)  /*@bfbba@*/
#define EICU0_SPLR0_SPL7	(*(volatile uint_io8_t*)0xB0C40047)  /*@bfbba@*/
#define EICU0_SPLR0_SPL8	(*(volatile uint_io8_t*)0xB0C40048)  /*@bfbba@*/
#define EICU0_SPLR0_SPL9	(*(volatile uint_io8_t*)0xB0C40049)  /*@bfbba@*/
#define EICU0_SPLR0_SPL10	(*(volatile uint_io8_t*)0xB0C4004A)  /*@bfbba@*/
#define EICU0_SPLR0_SPL11	(*(volatile uint_io8_t*)0xB0C4004B)  /*@bfbba@*/
#define EICU0_SPLR0_SPL12	(*(volatile uint_io8_t*)0xB0C4004C)  /*@bfbba@*/
#define EICU0_SPLR0_SPL13	(*(volatile uint_io8_t*)0xB0C4004D)  /*@bfbba@*/
#define EICU0_SPLR0_SPL14	(*(volatile uint_io8_t*)0xB0C4004E)  /*@bfbba@*/
#define EICU0_SPLR0_SPL15	(*(volatile uint_io8_t*)0xB0C4004F)  /*@bfbba@*/
#define EICU0_SPLR0_SPL16	(*(volatile uint_io8_t*)0xB0C40050)  /*@bfbba@*/
#define EICU0_SPLR0_SPL17	(*(volatile uint_io8_t*)0xB0C40051)  /*@bfbba@*/
#define EICU0_SPLR0_SPL18	(*(volatile uint_io8_t*)0xB0C40052)  /*@bfbba@*/
#define EICU0_SPLR0_SPL19	(*(volatile uint_io8_t*)0xB0C40053)  /*@bfbba@*/
#define EICU0_SPLR0_SPL20	(*(volatile uint_io8_t*)0xB0C40054)  /*@bfbba@*/
#define EICU0_SPLR0_SPL21	(*(volatile uint_io8_t*)0xB0C40055)  /*@bfbba@*/
#define EICU0_SPLR0_SPL22	(*(volatile uint_io8_t*)0xB0C40056)  /*@bfbba@*/
#define EICU0_SPLR0_SPL23	(*(volatile uint_io8_t*)0xB0C40057)  /*@bfbba@*/
#define EICU0_SPLR0_SPL24	(*(volatile uint_io8_t*)0xB0C40058)  /*@bfbba@*/
#define EICU0_SPLR0_SPL25	(*(volatile uint_io8_t*)0xB0C40059)  /*@bfbba@*/
#define EICU0_SPLR0_SPL26	(*(volatile uint_io8_t*)0xB0C4005A)  /*@bfbba@*/
#define EICU0_SPLR0_SPL27	(*(volatile uint_io8_t*)0xB0C4005B)  /*@bfbba@*/
#define EICU0_SPLR0_SPL28	(*(volatile uint_io8_t*)0xB0C4005C)  /*@bfbba@*/
#define EICU0_SPLR0_SPL29	(*(volatile uint_io8_t*)0xB0C4005D)  /*@bfbba@*/
#define EICU0_SPLR0_SPL30	(*(volatile uint_io8_t*)0xB0C4005E)  /*@bfbba@*/
#define EICU0_SPLR0_SPL31	(*(volatile uint_io8_t*)0xB0C4005F)  /*@bfbba@*/

#define EICU0_SPLR1	(EICU0.unSPLR1.u32Register)  /*@rg@*/
#define EICU0_SPLR1_SPL0	(*(volatile uint_io8_t*)0xB0C40060)  /*@bfbba@*/
#define EICU0_SPLR1_SPL1	(*(volatile uint_io8_t*)0xB0C40061)  /*@bfbba@*/
#define EICU0_SPLR1_SPL2	(*(volatile uint_io8_t*)0xB0C40062)  /*@bfbba@*/
#define EICU0_SPLR1_SPL3	(*(volatile uint_io8_t*)0xB0C40063)  /*@bfbba@*/
#define EICU0_SPLR1_SPL4	(*(volatile uint_io8_t*)0xB0C40064)  /*@bfbba@*/
#define EICU0_SPLR1_SPL5	(*(volatile uint_io8_t*)0xB0C40065)  /*@bfbba@*/
#define EICU0_SPLR1_SPL6	(*(volatile uint_io8_t*)0xB0C40066)  /*@bfbba@*/
#define EICU0_SPLR1_SPL7	(*(volatile uint_io8_t*)0xB0C40067)  /*@bfbba@*/
#define EICU0_SPLR1_SPL8	(*(volatile uint_io8_t*)0xB0C40068)  /*@bfbba@*/
#define EICU0_SPLR1_SPL9	(*(volatile uint_io8_t*)0xB0C40069)  /*@bfbba@*/
#define EICU0_SPLR1_SPL10	(*(volatile uint_io8_t*)0xB0C4006A)  /*@bfbba@*/
#define EICU0_SPLR1_SPL11	(*(volatile uint_io8_t*)0xB0C4006B)  /*@bfbba@*/
#define EICU0_SPLR1_SPL12	(*(volatile uint_io8_t*)0xB0C4006C)  /*@bfbba@*/
#define EICU0_SPLR1_SPL13	(*(volatile uint_io8_t*)0xB0C4006D)  /*@bfbba@*/
#define EICU0_SPLR1_SPL14	(*(volatile uint_io8_t*)0xB0C4006E)  /*@bfbba@*/
#define EICU0_SPLR1_SPL15	(*(volatile uint_io8_t*)0xB0C4006F)  /*@bfbba@*/
#define EICU0_SPLR1_SPL16	(*(volatile uint_io8_t*)0xB0C40070)  /*@bfbba@*/
#define EICU0_SPLR1_SPL17	(*(volatile uint_io8_t*)0xB0C40071)  /*@bfbba@*/
#define EICU0_SPLR1_SPL18	(*(volatile uint_io8_t*)0xB0C40072)  /*@bfbba@*/
#define EICU0_SPLR1_SPL19	(*(volatile uint_io8_t*)0xB0C40073)  /*@bfbba@*/
#define EICU0_SPLR1_SPL20	(*(volatile uint_io8_t*)0xB0C40074)  /*@bfbba@*/
#define EICU0_SPLR1_SPL21	(*(volatile uint_io8_t*)0xB0C40075)  /*@bfbba@*/
#define EICU0_SPLR1_SPL22	(*(volatile uint_io8_t*)0xB0C40076)  /*@bfbba@*/
#define EICU0_SPLR1_SPL23	(*(volatile uint_io8_t*)0xB0C40077)  /*@bfbba@*/
#define EICU0_SPLR1_SPL24	(*(volatile uint_io8_t*)0xB0C40078)  /*@bfbba@*/
#define EICU0_SPLR1_SPL25	(*(volatile uint_io8_t*)0xB0C40079)  /*@bfbba@*/
#define EICU0_SPLR1_SPL26	(*(volatile uint_io8_t*)0xB0C4007A)  /*@bfbba@*/
#define EICU0_SPLR1_SPL27	(*(volatile uint_io8_t*)0xB0C4007B)  /*@bfbba@*/
#define EICU0_SPLR1_SPL28	(*(volatile uint_io8_t*)0xB0C4007C)  /*@bfbba@*/
#define EICU0_SPLR1_SPL29	(*(volatile uint_io8_t*)0xB0C4007D)  /*@bfbba@*/
#define EICU0_SPLR1_SPL30	(*(volatile uint_io8_t*)0xB0C4007E)  /*@bfbba@*/
#define EICU0_SPLR1_SPL31	(*(volatile uint_io8_t*)0xB0C4007F)  /*@bfbba@*/

#define EICU0_SPLR2	(EICU0.unSPLR2.u32Register)  /*@rg@*/
#define EICU0_SPLR2_SPL0	(*(volatile uint_io8_t*)0xB0C40080)  /*@bfbba@*/
#define EICU0_SPLR2_SPL1	(*(volatile uint_io8_t*)0xB0C40081)  /*@bfbba@*/
#define EICU0_SPLR2_SPL2	(*(volatile uint_io8_t*)0xB0C40082)  /*@bfbba@*/
#define EICU0_SPLR2_SPL3	(*(volatile uint_io8_t*)0xB0C40083)  /*@bfbba@*/
#define EICU0_SPLR2_SPL4	(*(volatile uint_io8_t*)0xB0C40084)  /*@bfbba@*/
#define EICU0_SPLR2_SPL5	(*(volatile uint_io8_t*)0xB0C40085)  /*@bfbba@*/
#define EICU0_SPLR2_SPL6	(*(volatile uint_io8_t*)0xB0C40086)  /*@bfbba@*/
#define EICU0_SPLR2_SPL7	(*(volatile uint_io8_t*)0xB0C40087)  /*@bfbba@*/
#define EICU0_SPLR2_SPL8	(*(volatile uint_io8_t*)0xB0C40088)  /*@bfbba@*/
#define EICU0_SPLR2_SPL9	(*(volatile uint_io8_t*)0xB0C40089)  /*@bfbba@*/
#define EICU0_SPLR2_SPL10	(*(volatile uint_io8_t*)0xB0C4008A)  /*@bfbba@*/
#define EICU0_SPLR2_SPL11	(*(volatile uint_io8_t*)0xB0C4008B)  /*@bfbba@*/
#define EICU0_SPLR2_SPL12	(*(volatile uint_io8_t*)0xB0C4008C)  /*@bfbba@*/
#define EICU0_SPLR2_SPL13	(*(volatile uint_io8_t*)0xB0C4008D)  /*@bfbba@*/
#define EICU0_SPLR2_SPL14	(*(volatile uint_io8_t*)0xB0C4008E)  /*@bfbba@*/
#define EICU0_SPLR2_SPL15	(*(volatile uint_io8_t*)0xB0C4008F)  /*@bfbba@*/
#define EICU0_SPLR2_SPL16	(*(volatile uint_io8_t*)0xB0C40090)  /*@bfbba@*/
#define EICU0_SPLR2_SPL17	(*(volatile uint_io8_t*)0xB0C40091)  /*@bfbba@*/
#define EICU0_SPLR2_SPL18	(*(volatile uint_io8_t*)0xB0C40092)  /*@bfbba@*/
#define EICU0_SPLR2_SPL19	(*(volatile uint_io8_t*)0xB0C40093)  /*@bfbba@*/
#define EICU0_SPLR2_SPL20	(*(volatile uint_io8_t*)0xB0C40094)  /*@bfbba@*/
#define EICU0_SPLR2_SPL21	(*(volatile uint_io8_t*)0xB0C40095)  /*@bfbba@*/
#define EICU0_SPLR2_SPL22	(*(volatile uint_io8_t*)0xB0C40096)  /*@bfbba@*/
#define EICU0_SPLR2_SPL23	(*(volatile uint_io8_t*)0xB0C40097)  /*@bfbba@*/
#define EICU0_SPLR2_SPL24	(*(volatile uint_io8_t*)0xB0C40098)  /*@bfbba@*/
#define EICU0_SPLR2_SPL25	(*(volatile uint_io8_t*)0xB0C40099)  /*@bfbba@*/
#define EICU0_SPLR2_SPL26	(*(volatile uint_io8_t*)0xB0C4009A)  /*@bfbba@*/
#define EICU0_SPLR2_SPL27	(*(volatile uint_io8_t*)0xB0C4009B)  /*@bfbba@*/
#define EICU0_SPLR2_SPL28	(*(volatile uint_io8_t*)0xB0C4009C)  /*@bfbba@*/
#define EICU0_SPLR2_SPL29	(*(volatile uint_io8_t*)0xB0C4009D)  /*@bfbba@*/
#define EICU0_SPLR2_SPL30	(*(volatile uint_io8_t*)0xB0C4009E)  /*@bfbba@*/
#define EICU0_SPLR2_SPL31	(*(volatile uint_io8_t*)0xB0C4009F)  /*@bfbba@*/

#define EICU0_SPLR3	(EICU0.unSPLR3.u32Register)  /*@rg@*/
#define EICU0_SPLR3_SPL0	(*(volatile uint_io8_t*)0xB0C400A0)  /*@bfbba@*/
#define EICU0_SPLR3_SPL1	(*(volatile uint_io8_t*)0xB0C400A1)  /*@bfbba@*/
#define EICU0_SPLR3_SPL2	(*(volatile uint_io8_t*)0xB0C400A2)  /*@bfbba@*/
#define EICU0_SPLR3_SPL3	(*(volatile uint_io8_t*)0xB0C400A3)  /*@bfbba@*/
#define EICU0_SPLR3_SPL4	(*(volatile uint_io8_t*)0xB0C400A4)  /*@bfbba@*/
#define EICU0_SPLR3_SPL5	(*(volatile uint_io8_t*)0xB0C400A5)  /*@bfbba@*/
#define EICU0_SPLR3_SPL6	(*(volatile uint_io8_t*)0xB0C400A6)  /*@bfbba@*/
#define EICU0_SPLR3_SPL7	(*(volatile uint_io8_t*)0xB0C400A7)  /*@bfbba@*/
#define EICU0_SPLR3_SPL8	(*(volatile uint_io8_t*)0xB0C400A8)  /*@bfbba@*/
#define EICU0_SPLR3_SPL9	(*(volatile uint_io8_t*)0xB0C400A9)  /*@bfbba@*/
#define EICU0_SPLR3_SPL10	(*(volatile uint_io8_t*)0xB0C400AA)  /*@bfbba@*/
#define EICU0_SPLR3_SPL11	(*(volatile uint_io8_t*)0xB0C400AB)  /*@bfbba@*/
#define EICU0_SPLR3_SPL12	(*(volatile uint_io8_t*)0xB0C400AC)  /*@bfbba@*/
#define EICU0_SPLR3_SPL13	(*(volatile uint_io8_t*)0xB0C400AD)  /*@bfbba@*/
#define EICU0_SPLR3_SPL14	(*(volatile uint_io8_t*)0xB0C400AE)  /*@bfbba@*/
#define EICU0_SPLR3_SPL15	(*(volatile uint_io8_t*)0xB0C400AF)  /*@bfbba@*/
#define EICU0_SPLR3_SPL16	(*(volatile uint_io8_t*)0xB0C400B0)  /*@bfbba@*/
#define EICU0_SPLR3_SPL17	(*(volatile uint_io8_t*)0xB0C400B1)  /*@bfbba@*/
#define EICU0_SPLR3_SPL18	(*(volatile uint_io8_t*)0xB0C400B2)  /*@bfbba@*/
#define EICU0_SPLR3_SPL19	(*(volatile uint_io8_t*)0xB0C400B3)  /*@bfbba@*/
#define EICU0_SPLR3_SPL20	(*(volatile uint_io8_t*)0xB0C400B4)  /*@bfbba@*/
#define EICU0_SPLR3_SPL21	(*(volatile uint_io8_t*)0xB0C400B5)  /*@bfbba@*/
#define EICU0_SPLR3_SPL22	(*(volatile uint_io8_t*)0xB0C400B6)  /*@bfbba@*/
#define EICU0_SPLR3_SPL23	(*(volatile uint_io8_t*)0xB0C400B7)  /*@bfbba@*/
#define EICU0_SPLR3_SPL24	(*(volatile uint_io8_t*)0xB0C400B8)  /*@bfbba@*/
#define EICU0_SPLR3_SPL25	(*(volatile uint_io8_t*)0xB0C400B9)  /*@bfbba@*/
#define EICU0_SPLR3_SPL26	(*(volatile uint_io8_t*)0xB0C400BA)  /*@bfbba@*/
#define EICU0_SPLR3_SPL27	(*(volatile uint_io8_t*)0xB0C400BB)  /*@bfbba@*/
#define EICU0_SPLR3_SPL28	(*(volatile uint_io8_t*)0xB0C400BC)  /*@bfbba@*/
#define EICU0_SPLR3_SPL29	(*(volatile uint_io8_t*)0xB0C400BD)  /*@bfbba@*/
#define EICU0_SPLR3_SPL30	(*(volatile uint_io8_t*)0xB0C400BE)  /*@bfbba@*/
#define EICU0_SPLR3_SPL31	(*(volatile uint_io8_t*)0xB0C400BF)  /*@bfbba@*/

#define EICU0_SPLR4	(EICU0.unSPLR4.u32Register)  /*@rg@*/
#define EICU0_SPLR4_SPL0	(*(volatile uint_io8_t*)0xB0C400C0)  /*@bfbba@*/
#define EICU0_SPLR4_SPL1	(*(volatile uint_io8_t*)0xB0C400C1)  /*@bfbba@*/
#define EICU0_SPLR4_SPL2	(*(volatile uint_io8_t*)0xB0C400C2)  /*@bfbba@*/
#define EICU0_SPLR4_SPL3	(*(volatile uint_io8_t*)0xB0C400C3)  /*@bfbba@*/
#define EICU0_SPLR4_SPL4	(*(volatile uint_io8_t*)0xB0C400C4)  /*@bfbba@*/
#define EICU0_SPLR4_SPL5	(*(volatile uint_io8_t*)0xB0C400C5)  /*@bfbba@*/
#define EICU0_SPLR4_SPL6	(*(volatile uint_io8_t*)0xB0C400C6)  /*@bfbba@*/
#define EICU0_SPLR4_SPL7	(*(volatile uint_io8_t*)0xB0C400C7)  /*@bfbba@*/
#define EICU0_SPLR4_SPL8	(*(volatile uint_io8_t*)0xB0C400C8)  /*@bfbba@*/
#define EICU0_SPLR4_SPL9	(*(volatile uint_io8_t*)0xB0C400C9)  /*@bfbba@*/
#define EICU0_SPLR4_SPL10	(*(volatile uint_io8_t*)0xB0C400CA)  /*@bfbba@*/
#define EICU0_SPLR4_SPL11	(*(volatile uint_io8_t*)0xB0C400CB)  /*@bfbba@*/
#define EICU0_SPLR4_SPL12	(*(volatile uint_io8_t*)0xB0C400CC)  /*@bfbba@*/
#define EICU0_SPLR4_SPL13	(*(volatile uint_io8_t*)0xB0C400CD)  /*@bfbba@*/
#define EICU0_SPLR4_SPL14	(*(volatile uint_io8_t*)0xB0C400CE)  /*@bfbba@*/
#define EICU0_SPLR4_SPL15	(*(volatile uint_io8_t*)0xB0C400CF)  /*@bfbba@*/
#define EICU0_SPLR4_SPL16	(*(volatile uint_io8_t*)0xB0C400D0)  /*@bfbba@*/
#define EICU0_SPLR4_SPL17	(*(volatile uint_io8_t*)0xB0C400D1)  /*@bfbba@*/
#define EICU0_SPLR4_SPL18	(*(volatile uint_io8_t*)0xB0C400D2)  /*@bfbba@*/
#define EICU0_SPLR4_SPL19	(*(volatile uint_io8_t*)0xB0C400D3)  /*@bfbba@*/
#define EICU0_SPLR4_SPL20	(*(volatile uint_io8_t*)0xB0C400D4)  /*@bfbba@*/
#define EICU0_SPLR4_SPL21	(*(volatile uint_io8_t*)0xB0C400D5)  /*@bfbba@*/
#define EICU0_SPLR4_SPL22	(*(volatile uint_io8_t*)0xB0C400D6)  /*@bfbba@*/
#define EICU0_SPLR4_SPL23	(*(volatile uint_io8_t*)0xB0C400D7)  /*@bfbba@*/
#define EICU0_SPLR4_SPL24	(*(volatile uint_io8_t*)0xB0C400D8)  /*@bfbba@*/
#define EICU0_SPLR4_SPL25	(*(volatile uint_io8_t*)0xB0C400D9)  /*@bfbba@*/
#define EICU0_SPLR4_SPL26	(*(volatile uint_io8_t*)0xB0C400DA)  /*@bfbba@*/
#define EICU0_SPLR4_SPL27	(*(volatile uint_io8_t*)0xB0C400DB)  /*@bfbba@*/
#define EICU0_SPLR4_SPL28	(*(volatile uint_io8_t*)0xB0C400DC)  /*@bfbba@*/
#define EICU0_SPLR4_SPL29	(*(volatile uint_io8_t*)0xB0C400DD)  /*@bfbba@*/
#define EICU0_SPLR4_SPL30	(*(volatile uint_io8_t*)0xB0C400DE)  /*@bfbba@*/
#define EICU0_SPLR4_SPL31	(*(volatile uint_io8_t*)0xB0C400DF)  /*@bfbba@*/

#define EICU0_SPLR5	(EICU0.unSPLR5.u32Register)  /*@rg@*/
#define EICU0_SPLR5_SPL0	(*(volatile uint_io8_t*)0xB0C400E0)  /*@bfbba@*/
#define EICU0_SPLR5_SPL1	(*(volatile uint_io8_t*)0xB0C400E1)  /*@bfbba@*/
#define EICU0_SPLR5_SPL2	(*(volatile uint_io8_t*)0xB0C400E2)  /*@bfbba@*/
#define EICU0_SPLR5_SPL3	(*(volatile uint_io8_t*)0xB0C400E3)  /*@bfbba@*/
#define EICU0_SPLR5_SPL4	(*(volatile uint_io8_t*)0xB0C400E4)  /*@bfbba@*/
#define EICU0_SPLR5_SPL5	(*(volatile uint_io8_t*)0xB0C400E5)  /*@bfbba@*/
#define EICU0_SPLR5_SPL6	(*(volatile uint_io8_t*)0xB0C400E6)  /*@bfbba@*/
#define EICU0_SPLR5_SPL7	(*(volatile uint_io8_t*)0xB0C400E7)  /*@bfbba@*/
#define EICU0_SPLR5_SPL8	(*(volatile uint_io8_t*)0xB0C400E8)  /*@bfbba@*/
#define EICU0_SPLR5_SPL9	(*(volatile uint_io8_t*)0xB0C400E9)  /*@bfbba@*/
#define EICU0_SPLR5_SPL10	(*(volatile uint_io8_t*)0xB0C400EA)  /*@bfbba@*/
#define EICU0_SPLR5_SPL11	(*(volatile uint_io8_t*)0xB0C400EB)  /*@bfbba@*/
#define EICU0_SPLR5_SPL12	(*(volatile uint_io8_t*)0xB0C400EC)  /*@bfbba@*/
#define EICU0_SPLR5_SPL13	(*(volatile uint_io8_t*)0xB0C400ED)  /*@bfbba@*/
#define EICU0_SPLR5_SPL14	(*(volatile uint_io8_t*)0xB0C400EE)  /*@bfbba@*/
#define EICU0_SPLR5_SPL15	(*(volatile uint_io8_t*)0xB0C400EF)  /*@bfbba@*/
#define EICU0_SPLR5_SPL16	(*(volatile uint_io8_t*)0xB0C400F0)  /*@bfbba@*/
#define EICU0_SPLR5_SPL17	(*(volatile uint_io8_t*)0xB0C400F1)  /*@bfbba@*/
#define EICU0_SPLR5_SPL18	(*(volatile uint_io8_t*)0xB0C400F2)  /*@bfbba@*/
#define EICU0_SPLR5_SPL19	(*(volatile uint_io8_t*)0xB0C400F3)  /*@bfbba@*/
#define EICU0_SPLR5_SPL20	(*(volatile uint_io8_t*)0xB0C400F4)  /*@bfbba@*/
#define EICU0_SPLR5_SPL21	(*(volatile uint_io8_t*)0xB0C400F5)  /*@bfbba@*/
#define EICU0_SPLR5_SPL22	(*(volatile uint_io8_t*)0xB0C400F6)  /*@bfbba@*/
#define EICU0_SPLR5_SPL23	(*(volatile uint_io8_t*)0xB0C400F7)  /*@bfbba@*/
#define EICU0_SPLR5_SPL24	(*(volatile uint_io8_t*)0xB0C400F8)  /*@bfbba@*/
#define EICU0_SPLR5_SPL25	(*(volatile uint_io8_t*)0xB0C400F9)  /*@bfbba@*/
#define EICU0_SPLR5_SPL26	(*(volatile uint_io8_t*)0xB0C400FA)  /*@bfbba@*/
#define EICU0_SPLR5_SPL27	(*(volatile uint_io8_t*)0xB0C400FB)  /*@bfbba@*/
#define EICU0_SPLR5_SPL28	(*(volatile uint_io8_t*)0xB0C400FC)  /*@bfbba@*/
#define EICU0_SPLR5_SPL29	(*(volatile uint_io8_t*)0xB0C400FD)  /*@bfbba@*/
#define EICU0_SPLR5_SPL30	(*(volatile uint_io8_t*)0xB0C400FE)  /*@bfbba@*/
#define EICU0_SPLR5_SPL31	(*(volatile uint_io8_t*)0xB0C400FF)  /*@bfbba@*/

#define EICU0_SPLR6	(EICU0.unSPLR6.u32Register)  /*@rg@*/
#define EICU0_SPLR6_SPL0	(*(volatile uint_io8_t*)0xB0C40100)  /*@bfbba@*/
#define EICU0_SPLR6_SPL1	(*(volatile uint_io8_t*)0xB0C40101)  /*@bfbba@*/
#define EICU0_SPLR6_SPL2	(*(volatile uint_io8_t*)0xB0C40102)  /*@bfbba@*/
#define EICU0_SPLR6_SPL3	(*(volatile uint_io8_t*)0xB0C40103)  /*@bfbba@*/
#define EICU0_SPLR6_SPL4	(*(volatile uint_io8_t*)0xB0C40104)  /*@bfbba@*/
#define EICU0_SPLR6_SPL5	(*(volatile uint_io8_t*)0xB0C40105)  /*@bfbba@*/
#define EICU0_SPLR6_SPL6	(*(volatile uint_io8_t*)0xB0C40106)  /*@bfbba@*/
#define EICU0_SPLR6_SPL7	(*(volatile uint_io8_t*)0xB0C40107)  /*@bfbba@*/
#define EICU0_SPLR6_SPL8	(*(volatile uint_io8_t*)0xB0C40108)  /*@bfbba@*/
#define EICU0_SPLR6_SPL9	(*(volatile uint_io8_t*)0xB0C40109)  /*@bfbba@*/
#define EICU0_SPLR6_SPL10	(*(volatile uint_io8_t*)0xB0C4010A)  /*@bfbba@*/
#define EICU0_SPLR6_SPL11	(*(volatile uint_io8_t*)0xB0C4010B)  /*@bfbba@*/
#define EICU0_SPLR6_SPL12	(*(volatile uint_io8_t*)0xB0C4010C)  /*@bfbba@*/
#define EICU0_SPLR6_SPL13	(*(volatile uint_io8_t*)0xB0C4010D)  /*@bfbba@*/
#define EICU0_SPLR6_SPL14	(*(volatile uint_io8_t*)0xB0C4010E)  /*@bfbba@*/
#define EICU0_SPLR6_SPL15	(*(volatile uint_io8_t*)0xB0C4010F)  /*@bfbba@*/
#define EICU0_SPLR6_SPL16	(*(volatile uint_io8_t*)0xB0C40110)  /*@bfbba@*/
#define EICU0_SPLR6_SPL17	(*(volatile uint_io8_t*)0xB0C40111)  /*@bfbba@*/
#define EICU0_SPLR6_SPL18	(*(volatile uint_io8_t*)0xB0C40112)  /*@bfbba@*/
#define EICU0_SPLR6_SPL19	(*(volatile uint_io8_t*)0xB0C40113)  /*@bfbba@*/
#define EICU0_SPLR6_SPL20	(*(volatile uint_io8_t*)0xB0C40114)  /*@bfbba@*/
#define EICU0_SPLR6_SPL21	(*(volatile uint_io8_t*)0xB0C40115)  /*@bfbba@*/
#define EICU0_SPLR6_SPL22	(*(volatile uint_io8_t*)0xB0C40116)  /*@bfbba@*/
#define EICU0_SPLR6_SPL23	(*(volatile uint_io8_t*)0xB0C40117)  /*@bfbba@*/
#define EICU0_SPLR6_SPL24	(*(volatile uint_io8_t*)0xB0C40118)  /*@bfbba@*/
#define EICU0_SPLR6_SPL25	(*(volatile uint_io8_t*)0xB0C40119)  /*@bfbba@*/
#define EICU0_SPLR6_SPL26	(*(volatile uint_io8_t*)0xB0C4011A)  /*@bfbba@*/
#define EICU0_SPLR6_SPL27	(*(volatile uint_io8_t*)0xB0C4011B)  /*@bfbba@*/
#define EICU0_SPLR6_SPL28	(*(volatile uint_io8_t*)0xB0C4011C)  /*@bfbba@*/
#define EICU0_SPLR6_SPL29	(*(volatile uint_io8_t*)0xB0C4011D)  /*@bfbba@*/
#define EICU0_SPLR6_SPL30	(*(volatile uint_io8_t*)0xB0C4011E)  /*@bfbba@*/
#define EICU0_SPLR6_SPL31	(*(volatile uint_io8_t*)0xB0C4011F)  /*@bfbba@*/

#define EICU0_SPLR7	(EICU0.unSPLR7.u32Register)  /*@rg@*/
#define EICU0_SPLR7_SPL0	(*(volatile uint_io8_t*)0xB0C40120)  /*@bfbba@*/
#define EICU0_SPLR7_SPL1	(*(volatile uint_io8_t*)0xB0C40121)  /*@bfbba@*/
#define EICU0_SPLR7_SPL2	(*(volatile uint_io8_t*)0xB0C40122)  /*@bfbba@*/
#define EICU0_SPLR7_SPL3	(*(volatile uint_io8_t*)0xB0C40123)  /*@bfbba@*/
#define EICU0_SPLR7_SPL4	(*(volatile uint_io8_t*)0xB0C40124)  /*@bfbba@*/
#define EICU0_SPLR7_SPL5	(*(volatile uint_io8_t*)0xB0C40125)  /*@bfbba@*/
#define EICU0_SPLR7_SPL6	(*(volatile uint_io8_t*)0xB0C40126)  /*@bfbba@*/
#define EICU0_SPLR7_SPL7	(*(volatile uint_io8_t*)0xB0C40127)  /*@bfbba@*/
#define EICU0_SPLR7_SPL8	(*(volatile uint_io8_t*)0xB0C40128)  /*@bfbba@*/
#define EICU0_SPLR7_SPL9	(*(volatile uint_io8_t*)0xB0C40129)  /*@bfbba@*/
#define EICU0_SPLR7_SPL10	(*(volatile uint_io8_t*)0xB0C4012A)  /*@bfbba@*/
#define EICU0_SPLR7_SPL11	(*(volatile uint_io8_t*)0xB0C4012B)  /*@bfbba@*/
#define EICU0_SPLR7_SPL12	(*(volatile uint_io8_t*)0xB0C4012C)  /*@bfbba@*/
#define EICU0_SPLR7_SPL13	(*(volatile uint_io8_t*)0xB0C4012D)  /*@bfbba@*/
#define EICU0_SPLR7_SPL14	(*(volatile uint_io8_t*)0xB0C4012E)  /*@bfbba@*/
#define EICU0_SPLR7_SPL15	(*(volatile uint_io8_t*)0xB0C4012F)  /*@bfbba@*/
#define EICU0_SPLR7_SPL16	(*(volatile uint_io8_t*)0xB0C40130)  /*@bfbba@*/
#define EICU0_SPLR7_SPL17	(*(volatile uint_io8_t*)0xB0C40131)  /*@bfbba@*/
#define EICU0_SPLR7_SPL18	(*(volatile uint_io8_t*)0xB0C40132)  /*@bfbba@*/
#define EICU0_SPLR7_SPL19	(*(volatile uint_io8_t*)0xB0C40133)  /*@bfbba@*/
#define EICU0_SPLR7_SPL20	(*(volatile uint_io8_t*)0xB0C40134)  /*@bfbba@*/
#define EICU0_SPLR7_SPL21	(*(volatile uint_io8_t*)0xB0C40135)  /*@bfbba@*/
#define EICU0_SPLR7_SPL22	(*(volatile uint_io8_t*)0xB0C40136)  /*@bfbba@*/
#define EICU0_SPLR7_SPL23	(*(volatile uint_io8_t*)0xB0C40137)  /*@bfbba@*/
#define EICU0_SPLR7_SPL24	(*(volatile uint_io8_t*)0xB0C40138)  /*@bfbba@*/
#define EICU0_SPLR7_SPL25	(*(volatile uint_io8_t*)0xB0C40139)  /*@bfbba@*/
#define EICU0_SPLR7_SPL26	(*(volatile uint_io8_t*)0xB0C4013A)  /*@bfbba@*/
#define EICU0_SPLR7_SPL27	(*(volatile uint_io8_t*)0xB0C4013B)  /*@bfbba@*/
#define EICU0_SPLR7_SPL28	(*(volatile uint_io8_t*)0xB0C4013C)  /*@bfbba@*/
#define EICU0_SPLR7_SPL29	(*(volatile uint_io8_t*)0xB0C4013D)  /*@bfbba@*/
#define EICU0_SPLR7_SPL30	(*(volatile uint_io8_t*)0xB0C4013E)  /*@bfbba@*/
#define EICU0_SPLR7_SPL31	(*(volatile uint_io8_t*)0xB0C4013F)  /*@bfbba@*/

typedef struct stc_eicu0_splrn_field{
    uint_io32_t		u1SPL0:1;
    uint_io32_t		u1SPL1:1;
    uint_io32_t		u1SPL2:1;
    uint_io32_t		u1SPL3:1;
    uint_io32_t		u1SPL4:1;
    uint_io32_t		u1SPL5:1;
    uint_io32_t		u1SPL6:1;
    uint_io32_t		u1SPL7:1;
    uint_io32_t		u1SPL8:1;
    uint_io32_t		u1SPL9:1;
    uint_io32_t		u1SPL10:1;
    uint_io32_t		u1SPL11:1;
    uint_io32_t		u1SPL12:1;
    uint_io32_t		u1SPL13:1;
    uint_io32_t		u1SPL14:1;
    uint_io32_t		u1SPL15:1;
    uint_io32_t		u1SPL16:1;
    uint_io32_t		u1SPL17:1;
    uint_io32_t		u1SPL18:1;
    uint_io32_t		u1SPL19:1;
    uint_io32_t		u1SPL20:1;
    uint_io32_t		u1SPL21:1;
    uint_io32_t		u1SPL22:1;
    uint_io32_t		u1SPL23:1;
    uint_io32_t		u1SPL24:1;
    uint_io32_t		u1SPL25:1;
    uint_io32_t		u1SPL26:1;
    uint_io32_t		u1SPL27:1;
    uint_io32_t		u1SPL28:1;
    uint_io32_t		u1SPL29:1;
    uint_io32_t		u1SPL30:1;
    uint_io32_t		u1SPL31:1;
}stc_eicu0_splrn_field_t;

typedef union un_eicu0_splrn{
    uint_io32_t		u32Register;
    stc_eicu0_splrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eicu0_splrn_t;


typedef struct stc_eicu0{
    un_eicu0_cnfgr_t	unCNFGR;	/* 0x00000000 */
    un_eicu0_irenr_t	unIRENR;	/* 0x00000004 */
    un_eicu0_splrn_t	unSPLR0;	/* 0x00000008 */
    un_eicu0_splrn_t	unSPLR1;	/* 0x0000000C */
    un_eicu0_splrn_t	unSPLR2;	/* 0x00000010 */
    un_eicu0_splrn_t	unSPLR3;	/* 0x00000014 */
    un_eicu0_splrn_t	unSPLR4;	/* 0x00000018 */
    un_eicu0_splrn_t	unSPLR5;	/* 0x0000001C */
    un_eicu0_splrn_t	unSPLR6;	/* 0x00000020 */
    un_eicu0_splrn_t	unSPLR7;	/* 0x00000024 */
    uint_io8_t	au8Reserved0[984];	/* 0x00000028 */
}stc_eicu0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_eicu0_t	stcEICU0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_EICU_H */
