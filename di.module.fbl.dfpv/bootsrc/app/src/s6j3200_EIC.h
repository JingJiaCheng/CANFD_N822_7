/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_EIC_H
#define __S6J3200_EIC_H

#include "s6j3200io_basetypes.h"

/* EIC00 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define EIC00	stcEIC00
#else /* __IO_DEFINE */
#define EIC00	(*((volatile stc_eic00_t*)0xB0620000))
#endif /* __IO_DEFINE */

/* ENIR */
#define EIC00_ENIR	(EIC00.unENIR.u32Register)  /*@rg@*/
#define EIC00_ENIR_EN0	(*(volatile uint_io8_t*)0xB0900000)  /*@bfbba@*/
#define EIC00_ENIR_EN1	(*(volatile uint_io8_t*)0xB0900001)  /*@bfbba@*/
#define EIC00_ENIR_EN2	(*(volatile uint_io8_t*)0xB0900002)  /*@bfbba@*/
#define EIC00_ENIR_EN3	(*(volatile uint_io8_t*)0xB0900003)  /*@bfbba@*/
#define EIC00_ENIR_EN4	(*(volatile uint_io8_t*)0xB0900004)  /*@bfbba@*/
#define EIC00_ENIR_EN5	(*(volatile uint_io8_t*)0xB0900005)  /*@bfbba@*/
#define EIC00_ENIR_EN6	(*(volatile uint_io8_t*)0xB0900006)  /*@bfbba@*/
#define EIC00_ENIR_EN7	(*(volatile uint_io8_t*)0xB0900007)  /*@bfbba@*/
#define EIC00_ENIR_EN8	(*(volatile uint_io8_t*)0xB0900008)  /*@bfbba@*/
#define EIC00_ENIR_EN9	(*(volatile uint_io8_t*)0xB0900009)  /*@bfbba@*/
#define EIC00_ENIR_EN10	(*(volatile uint_io8_t*)0xB090000A)  /*@bfbba@*/
#define EIC00_ENIR_EN11	(*(volatile uint_io8_t*)0xB090000B)  /*@bfbba@*/
#define EIC00_ENIR_EN12	(*(volatile uint_io8_t*)0xB090000C)  /*@bfbba@*/
#define EIC00_ENIR_EN13	(*(volatile uint_io8_t*)0xB090000D)  /*@bfbba@*/
#define EIC00_ENIR_EN14	(*(volatile uint_io8_t*)0xB090000E)  /*@bfbba@*/
#define EIC00_ENIR_EN15	(*(volatile uint_io8_t*)0xB090000F)  /*@bfbba@*/
#define EIC00_ENIR_EN16	(*(volatile uint_io8_t*)0xB0900010)  /*@bfbba@*/
#define EIC00_ENIR_EN17	(*(volatile uint_io8_t*)0xB0900011)  /*@bfbba@*/
#define EIC00_ENIR_EN18	(*(volatile uint_io8_t*)0xB0900012)  /*@bfbba@*/
#define EIC00_ENIR_EN19	(*(volatile uint_io8_t*)0xB0900013)  /*@bfbba@*/
#define EIC00_ENIR_EN20	(*(volatile uint_io8_t*)0xB0900014)  /*@bfbba@*/
#define EIC00_ENIR_EN21	(*(volatile uint_io8_t*)0xB0900015)  /*@bfbba@*/
#define EIC00_ENIR_EN22	(*(volatile uint_io8_t*)0xB0900016)  /*@bfbba@*/
#define EIC00_ENIR_EN23	(*(volatile uint_io8_t*)0xB0900017)  /*@bfbba@*/
#define EIC00_ENIR_EN24	(*(volatile uint_io8_t*)0xB0900018)  /*@bfbba@*/
#define EIC00_ENIR_EN25	(*(volatile uint_io8_t*)0xB0900019)  /*@bfbba@*/
#define EIC00_ENIR_EN26	(*(volatile uint_io8_t*)0xB090001A)  /*@bfbba@*/
#define EIC00_ENIR_EN27	(*(volatile uint_io8_t*)0xB090001B)  /*@bfbba@*/
#define EIC00_ENIR_EN28	(*(volatile uint_io8_t*)0xB090001C)  /*@bfbba@*/
#define EIC00_ENIR_EN29	(*(volatile uint_io8_t*)0xB090001D)  /*@bfbba@*/
#define EIC00_ENIR_EN30	(*(volatile uint_io8_t*)0xB090001E)  /*@bfbba@*/
#define EIC00_ENIR_EN31	(*(volatile uint_io8_t*)0xB090001F)  /*@bfbba@*/

typedef struct stc_eic00_enir_field{
    uint_io32_t		u1EN0:1;
    uint_io32_t		u1EN1:1;
    uint_io32_t		u1EN2:1;
    uint_io32_t		u1EN3:1;
    uint_io32_t		u1EN4:1;
    uint_io32_t		u1EN5:1;
    uint_io32_t		u1EN6:1;
    uint_io32_t		u1EN7:1;
    uint_io32_t		u1EN8:1;
    uint_io32_t		u1EN9:1;
    uint_io32_t		u1EN10:1;
    uint_io32_t		u1EN11:1;
    uint_io32_t		u1EN12:1;
    uint_io32_t		u1EN13:1;
    uint_io32_t		u1EN14:1;
    uint_io32_t		u1EN15:1;
    uint_io32_t		u1EN16:1;
    uint_io32_t		u1EN17:1;
    uint_io32_t		u1EN18:1;
    uint_io32_t		u1EN19:1;
    uint_io32_t		u1EN20:1;
    uint_io32_t		u1EN21:1;
    uint_io32_t		u1EN22:1;
    uint_io32_t		u1EN23:1;
    uint_io32_t		u1EN24:1;
    uint_io32_t		u1EN25:1;
    uint_io32_t		u1EN26:1;
    uint_io32_t		u1EN27:1;
    uint_io32_t		u1EN28:1;
    uint_io32_t		u1EN29:1;
    uint_io32_t		u1EN30:1;
    uint_io32_t		u1EN31:1;
}stc_eic00_enir_field_t;

typedef union un_eic00_enir{
    uint_io32_t		u32Register;
    stc_eic00_enir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_enir_t;

/* ENISR */
#define EIC00_ENISR	(EIC00.unENISR.u32Register)  /*@rg@*/
#define EIC00_ENISR_ENS0	(*(volatile uint_io8_t*)0xB0900020)  /*@bfbba@*/
#define EIC00_ENISR_ENS1	(*(volatile uint_io8_t*)0xB0900021)  /*@bfbba@*/
#define EIC00_ENISR_ENS2	(*(volatile uint_io8_t*)0xB0900022)  /*@bfbba@*/
#define EIC00_ENISR_ENS3	(*(volatile uint_io8_t*)0xB0900023)  /*@bfbba@*/
#define EIC00_ENISR_ENS4	(*(volatile uint_io8_t*)0xB0900024)  /*@bfbba@*/
#define EIC00_ENISR_ENS5	(*(volatile uint_io8_t*)0xB0900025)  /*@bfbba@*/
#define EIC00_ENISR_ENS6	(*(volatile uint_io8_t*)0xB0900026)  /*@bfbba@*/
#define EIC00_ENISR_ENS7	(*(volatile uint_io8_t*)0xB0900027)  /*@bfbba@*/
#define EIC00_ENISR_ENS8	(*(volatile uint_io8_t*)0xB0900028)  /*@bfbba@*/
#define EIC00_ENISR_ENS9	(*(volatile uint_io8_t*)0xB0900029)  /*@bfbba@*/
#define EIC00_ENISR_ENS10	(*(volatile uint_io8_t*)0xB090002A)  /*@bfbba@*/
#define EIC00_ENISR_ENS11	(*(volatile uint_io8_t*)0xB090002B)  /*@bfbba@*/
#define EIC00_ENISR_ENS12	(*(volatile uint_io8_t*)0xB090002C)  /*@bfbba@*/
#define EIC00_ENISR_ENS13	(*(volatile uint_io8_t*)0xB090002D)  /*@bfbba@*/
#define EIC00_ENISR_ENS14	(*(volatile uint_io8_t*)0xB090002E)  /*@bfbba@*/
#define EIC00_ENISR_ENS15	(*(volatile uint_io8_t*)0xB090002F)  /*@bfbba@*/
#define EIC00_ENISR_ENS16	(*(volatile uint_io8_t*)0xB0900030)  /*@bfbba@*/
#define EIC00_ENISR_ENS17	(*(volatile uint_io8_t*)0xB0900031)  /*@bfbba@*/
#define EIC00_ENISR_ENS18	(*(volatile uint_io8_t*)0xB0900032)  /*@bfbba@*/
#define EIC00_ENISR_ENS19	(*(volatile uint_io8_t*)0xB0900033)  /*@bfbba@*/
#define EIC00_ENISR_ENS20	(*(volatile uint_io8_t*)0xB0900034)  /*@bfbba@*/
#define EIC00_ENISR_ENS21	(*(volatile uint_io8_t*)0xB0900035)  /*@bfbba@*/
#define EIC00_ENISR_ENS22	(*(volatile uint_io8_t*)0xB0900036)  /*@bfbba@*/
#define EIC00_ENISR_ENS23	(*(volatile uint_io8_t*)0xB0900037)  /*@bfbba@*/
#define EIC00_ENISR_ENS24	(*(volatile uint_io8_t*)0xB0900038)  /*@bfbba@*/
#define EIC00_ENISR_ENS25	(*(volatile uint_io8_t*)0xB0900039)  /*@bfbba@*/
#define EIC00_ENISR_ENS26	(*(volatile uint_io8_t*)0xB090003A)  /*@bfbba@*/
#define EIC00_ENISR_ENS27	(*(volatile uint_io8_t*)0xB090003B)  /*@bfbba@*/
#define EIC00_ENISR_ENS28	(*(volatile uint_io8_t*)0xB090003C)  /*@bfbba@*/
#define EIC00_ENISR_ENS29	(*(volatile uint_io8_t*)0xB090003D)  /*@bfbba@*/
#define EIC00_ENISR_ENS30	(*(volatile uint_io8_t*)0xB090003E)  /*@bfbba@*/
#define EIC00_ENISR_ENS31	(*(volatile uint_io8_t*)0xB090003F)  /*@bfbba@*/

typedef struct stc_eic00_enisr_field{
    uint_io32_t		u1ENS0:1;
    uint_io32_t		u1ENS1:1;
    uint_io32_t		u1ENS2:1;
    uint_io32_t		u1ENS3:1;
    uint_io32_t		u1ENS4:1;
    uint_io32_t		u1ENS5:1;
    uint_io32_t		u1ENS6:1;
    uint_io32_t		u1ENS7:1;
    uint_io32_t		u1ENS8:1;
    uint_io32_t		u1ENS9:1;
    uint_io32_t		u1ENS10:1;
    uint_io32_t		u1ENS11:1;
    uint_io32_t		u1ENS12:1;
    uint_io32_t		u1ENS13:1;
    uint_io32_t		u1ENS14:1;
    uint_io32_t		u1ENS15:1;
    uint_io32_t		u1ENS16:1;
    uint_io32_t		u1ENS17:1;
    uint_io32_t		u1ENS18:1;
    uint_io32_t		u1ENS19:1;
    uint_io32_t		u1ENS20:1;
    uint_io32_t		u1ENS21:1;
    uint_io32_t		u1ENS22:1;
    uint_io32_t		u1ENS23:1;
    uint_io32_t		u1ENS24:1;
    uint_io32_t		u1ENS25:1;
    uint_io32_t		u1ENS26:1;
    uint_io32_t		u1ENS27:1;
    uint_io32_t		u1ENS28:1;
    uint_io32_t		u1ENS29:1;
    uint_io32_t		u1ENS30:1;
    uint_io32_t		u1ENS31:1;
}stc_eic00_enisr_field_t;

typedef union un_eic00_enisr{
    uint_io32_t		u32Register;
    stc_eic00_enisr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_enisr_t;

/* ENICR */
#define EIC00_ENICR	(EIC00.unENICR.u32Register)  /*@rg@*/
#define EIC00_ENICR_ENC0	(*(volatile uint_io8_t*)0xB0900040)  /*@bfbba@*/
#define EIC00_ENICR_ENC1	(*(volatile uint_io8_t*)0xB0900041)  /*@bfbba@*/
#define EIC00_ENICR_ENC2	(*(volatile uint_io8_t*)0xB0900042)  /*@bfbba@*/
#define EIC00_ENICR_ENC3	(*(volatile uint_io8_t*)0xB0900043)  /*@bfbba@*/
#define EIC00_ENICR_ENC4	(*(volatile uint_io8_t*)0xB0900044)  /*@bfbba@*/
#define EIC00_ENICR_ENC5	(*(volatile uint_io8_t*)0xB0900045)  /*@bfbba@*/
#define EIC00_ENICR_ENC6	(*(volatile uint_io8_t*)0xB0900046)  /*@bfbba@*/
#define EIC00_ENICR_ENC7	(*(volatile uint_io8_t*)0xB0900047)  /*@bfbba@*/
#define EIC00_ENICR_ENC8	(*(volatile uint_io8_t*)0xB0900048)  /*@bfbba@*/
#define EIC00_ENICR_ENC9	(*(volatile uint_io8_t*)0xB0900049)  /*@bfbba@*/
#define EIC00_ENICR_ENC10	(*(volatile uint_io8_t*)0xB090004A)  /*@bfbba@*/
#define EIC00_ENICR_ENC11	(*(volatile uint_io8_t*)0xB090004B)  /*@bfbba@*/
#define EIC00_ENICR_ENC12	(*(volatile uint_io8_t*)0xB090004C)  /*@bfbba@*/
#define EIC00_ENICR_ENC13	(*(volatile uint_io8_t*)0xB090004D)  /*@bfbba@*/
#define EIC00_ENICR_ENC14	(*(volatile uint_io8_t*)0xB090004E)  /*@bfbba@*/
#define EIC00_ENICR_ENC15	(*(volatile uint_io8_t*)0xB090004F)  /*@bfbba@*/
#define EIC00_ENICR_ENC16	(*(volatile uint_io8_t*)0xB0900050)  /*@bfbba@*/
#define EIC00_ENICR_ENC17	(*(volatile uint_io8_t*)0xB0900051)  /*@bfbba@*/
#define EIC00_ENICR_ENC18	(*(volatile uint_io8_t*)0xB0900052)  /*@bfbba@*/
#define EIC00_ENICR_ENC19	(*(volatile uint_io8_t*)0xB0900053)  /*@bfbba@*/
#define EIC00_ENICR_ENC20	(*(volatile uint_io8_t*)0xB0900054)  /*@bfbba@*/
#define EIC00_ENICR_ENC21	(*(volatile uint_io8_t*)0xB0900055)  /*@bfbba@*/
#define EIC00_ENICR_ENC22	(*(volatile uint_io8_t*)0xB0900056)  /*@bfbba@*/
#define EIC00_ENICR_ENC23	(*(volatile uint_io8_t*)0xB0900057)  /*@bfbba@*/
#define EIC00_ENICR_ENC24	(*(volatile uint_io8_t*)0xB0900058)  /*@bfbba@*/
#define EIC00_ENICR_ENC25	(*(volatile uint_io8_t*)0xB0900059)  /*@bfbba@*/
#define EIC00_ENICR_ENC26	(*(volatile uint_io8_t*)0xB090005A)  /*@bfbba@*/
#define EIC00_ENICR_ENC27	(*(volatile uint_io8_t*)0xB090005B)  /*@bfbba@*/
#define EIC00_ENICR_ENC28	(*(volatile uint_io8_t*)0xB090005C)  /*@bfbba@*/
#define EIC00_ENICR_ENC29	(*(volatile uint_io8_t*)0xB090005D)  /*@bfbba@*/
#define EIC00_ENICR_ENC30	(*(volatile uint_io8_t*)0xB090005E)  /*@bfbba@*/
#define EIC00_ENICR_ENC31	(*(volatile uint_io8_t*)0xB090005F)  /*@bfbba@*/

typedef struct stc_eic00_enicr_field{
    uint_io32_t		u1ENC0:1;
    uint_io32_t		u1ENC1:1;
    uint_io32_t		u1ENC2:1;
    uint_io32_t		u1ENC3:1;
    uint_io32_t		u1ENC4:1;
    uint_io32_t		u1ENC5:1;
    uint_io32_t		u1ENC6:1;
    uint_io32_t		u1ENC7:1;
    uint_io32_t		u1ENC8:1;
    uint_io32_t		u1ENC9:1;
    uint_io32_t		u1ENC10:1;
    uint_io32_t		u1ENC11:1;
    uint_io32_t		u1ENC12:1;
    uint_io32_t		u1ENC13:1;
    uint_io32_t		u1ENC14:1;
    uint_io32_t		u1ENC15:1;
    uint_io32_t		u1ENC16:1;
    uint_io32_t		u1ENC17:1;
    uint_io32_t		u1ENC18:1;
    uint_io32_t		u1ENC19:1;
    uint_io32_t		u1ENC20:1;
    uint_io32_t		u1ENC21:1;
    uint_io32_t		u1ENC22:1;
    uint_io32_t		u1ENC23:1;
    uint_io32_t		u1ENC24:1;
    uint_io32_t		u1ENC25:1;
    uint_io32_t		u1ENC26:1;
    uint_io32_t		u1ENC27:1;
    uint_io32_t		u1ENC28:1;
    uint_io32_t		u1ENC29:1;
    uint_io32_t		u1ENC30:1;
    uint_io32_t		u1ENC31:1;
}stc_eic00_enicr_field_t;

typedef union un_eic00_enicr{
    uint_io32_t		u32Register;
    stc_eic00_enicr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_enicr_t;

/* EIRR */
#define EIC00_EIRR	(EIC00.unEIRR.u32Register)  /*@rg@*/
#define EIC00_EIRR_ER0	(*(volatile uint_io8_t*)0xB0900060)  /*@bfbba@*/
#define EIC00_EIRR_ER1	(*(volatile uint_io8_t*)0xB0900061)  /*@bfbba@*/
#define EIC00_EIRR_ER2	(*(volatile uint_io8_t*)0xB0900062)  /*@bfbba@*/
#define EIC00_EIRR_ER3	(*(volatile uint_io8_t*)0xB0900063)  /*@bfbba@*/
#define EIC00_EIRR_ER4	(*(volatile uint_io8_t*)0xB0900064)  /*@bfbba@*/
#define EIC00_EIRR_ER5	(*(volatile uint_io8_t*)0xB0900065)  /*@bfbba@*/
#define EIC00_EIRR_ER6	(*(volatile uint_io8_t*)0xB0900066)  /*@bfbba@*/
#define EIC00_EIRR_ER7	(*(volatile uint_io8_t*)0xB0900067)  /*@bfbba@*/
#define EIC00_EIRR_ER8	(*(volatile uint_io8_t*)0xB0900068)  /*@bfbba@*/
#define EIC00_EIRR_ER9	(*(volatile uint_io8_t*)0xB0900069)  /*@bfbba@*/
#define EIC00_EIRR_ER10	(*(volatile uint_io8_t*)0xB090006A)  /*@bfbba@*/
#define EIC00_EIRR_ER11	(*(volatile uint_io8_t*)0xB090006B)  /*@bfbba@*/
#define EIC00_EIRR_ER12	(*(volatile uint_io8_t*)0xB090006C)  /*@bfbba@*/
#define EIC00_EIRR_ER13	(*(volatile uint_io8_t*)0xB090006D)  /*@bfbba@*/
#define EIC00_EIRR_ER14	(*(volatile uint_io8_t*)0xB090006E)  /*@bfbba@*/
#define EIC00_EIRR_ER15	(*(volatile uint_io8_t*)0xB090006F)  /*@bfbba@*/
#define EIC00_EIRR_ER16	(*(volatile uint_io8_t*)0xB0900070)  /*@bfbba@*/
#define EIC00_EIRR_ER17	(*(volatile uint_io8_t*)0xB0900071)  /*@bfbba@*/
#define EIC00_EIRR_ER18	(*(volatile uint_io8_t*)0xB0900072)  /*@bfbba@*/
#define EIC00_EIRR_ER19	(*(volatile uint_io8_t*)0xB0900073)  /*@bfbba@*/
#define EIC00_EIRR_ER20	(*(volatile uint_io8_t*)0xB0900074)  /*@bfbba@*/
#define EIC00_EIRR_ER21	(*(volatile uint_io8_t*)0xB0900075)  /*@bfbba@*/
#define EIC00_EIRR_ER22	(*(volatile uint_io8_t*)0xB0900076)  /*@bfbba@*/
#define EIC00_EIRR_ER23	(*(volatile uint_io8_t*)0xB0900077)  /*@bfbba@*/
#define EIC00_EIRR_ER24	(*(volatile uint_io8_t*)0xB0900078)  /*@bfbba@*/
#define EIC00_EIRR_ER25	(*(volatile uint_io8_t*)0xB0900079)  /*@bfbba@*/
#define EIC00_EIRR_ER26	(*(volatile uint_io8_t*)0xB090007A)  /*@bfbba@*/
#define EIC00_EIRR_ER27	(*(volatile uint_io8_t*)0xB090007B)  /*@bfbba@*/
#define EIC00_EIRR_ER28	(*(volatile uint_io8_t*)0xB090007C)  /*@bfbba@*/
#define EIC00_EIRR_ER29	(*(volatile uint_io8_t*)0xB090007D)  /*@bfbba@*/
#define EIC00_EIRR_ER30	(*(volatile uint_io8_t*)0xB090007E)  /*@bfbba@*/
#define EIC00_EIRR_ER31	(*(volatile uint_io8_t*)0xB090007F)  /*@bfbba@*/

typedef struct stc_eic00_eirr_field{
    uint_io32_t		u1ER0:1;
    uint_io32_t		u1ER1:1;
    uint_io32_t		u1ER2:1;
    uint_io32_t		u1ER3:1;
    uint_io32_t		u1ER4:1;
    uint_io32_t		u1ER5:1;
    uint_io32_t		u1ER6:1;
    uint_io32_t		u1ER7:1;
    uint_io32_t		u1ER8:1;
    uint_io32_t		u1ER9:1;
    uint_io32_t		u1ER10:1;
    uint_io32_t		u1ER11:1;
    uint_io32_t		u1ER12:1;
    uint_io32_t		u1ER13:1;
    uint_io32_t		u1ER14:1;
    uint_io32_t		u1ER15:1;
    uint_io32_t		u1ER16:1;
    uint_io32_t		u1ER17:1;
    uint_io32_t		u1ER18:1;
    uint_io32_t		u1ER19:1;
    uint_io32_t		u1ER20:1;
    uint_io32_t		u1ER21:1;
    uint_io32_t		u1ER22:1;
    uint_io32_t		u1ER23:1;
    uint_io32_t		u1ER24:1;
    uint_io32_t		u1ER25:1;
    uint_io32_t		u1ER26:1;
    uint_io32_t		u1ER27:1;
    uint_io32_t		u1ER28:1;
    uint_io32_t		u1ER29:1;
    uint_io32_t		u1ER30:1;
    uint_io32_t		u1ER31:1;
}stc_eic00_eirr_field_t;

typedef union un_eic00_eirr{
    uint_io32_t		u32Register;
    stc_eic00_eirr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_eirr_t;

/* EIRCR */
#define EIC00_EIRCR	(EIC00.unEIRCR.u32Register)  /*@rg@*/
#define EIC00_EIRCR_ERC0	(*(volatile uint_io8_t*)0xB0900080)  /*@bfbba@*/
#define EIC00_EIRCR_ERC1	(*(volatile uint_io8_t*)0xB0900081)  /*@bfbba@*/
#define EIC00_EIRCR_ERC2	(*(volatile uint_io8_t*)0xB0900082)  /*@bfbba@*/
#define EIC00_EIRCR_ERC3	(*(volatile uint_io8_t*)0xB0900083)  /*@bfbba@*/
#define EIC00_EIRCR_ERC4	(*(volatile uint_io8_t*)0xB0900084)  /*@bfbba@*/
#define EIC00_EIRCR_ERC5	(*(volatile uint_io8_t*)0xB0900085)  /*@bfbba@*/
#define EIC00_EIRCR_ERC6	(*(volatile uint_io8_t*)0xB0900086)  /*@bfbba@*/
#define EIC00_EIRCR_ERC7	(*(volatile uint_io8_t*)0xB0900087)  /*@bfbba@*/
#define EIC00_EIRCR_ERC8	(*(volatile uint_io8_t*)0xB0900088)  /*@bfbba@*/
#define EIC00_EIRCR_ERC9	(*(volatile uint_io8_t*)0xB0900089)  /*@bfbba@*/
#define EIC00_EIRCR_ERC10	(*(volatile uint_io8_t*)0xB090008A)  /*@bfbba@*/
#define EIC00_EIRCR_ERC11	(*(volatile uint_io8_t*)0xB090008B)  /*@bfbba@*/
#define EIC00_EIRCR_ERC12	(*(volatile uint_io8_t*)0xB090008C)  /*@bfbba@*/
#define EIC00_EIRCR_ERC13	(*(volatile uint_io8_t*)0xB090008D)  /*@bfbba@*/
#define EIC00_EIRCR_ERC14	(*(volatile uint_io8_t*)0xB090008E)  /*@bfbba@*/
#define EIC00_EIRCR_ERC15	(*(volatile uint_io8_t*)0xB090008F)  /*@bfbba@*/
#define EIC00_EIRCR_ERC16	(*(volatile uint_io8_t*)0xB0900090)  /*@bfbba@*/
#define EIC00_EIRCR_ERC17	(*(volatile uint_io8_t*)0xB0900091)  /*@bfbba@*/
#define EIC00_EIRCR_ERC18	(*(volatile uint_io8_t*)0xB0900092)  /*@bfbba@*/
#define EIC00_EIRCR_ERC19	(*(volatile uint_io8_t*)0xB0900093)  /*@bfbba@*/
#define EIC00_EIRCR_ERC20	(*(volatile uint_io8_t*)0xB0900094)  /*@bfbba@*/
#define EIC00_EIRCR_ERC21	(*(volatile uint_io8_t*)0xB0900095)  /*@bfbba@*/
#define EIC00_EIRCR_ERC22	(*(volatile uint_io8_t*)0xB0900096)  /*@bfbba@*/
#define EIC00_EIRCR_ERC23	(*(volatile uint_io8_t*)0xB0900097)  /*@bfbba@*/
#define EIC00_EIRCR_ERC24	(*(volatile uint_io8_t*)0xB0900098)  /*@bfbba@*/
#define EIC00_EIRCR_ERC25	(*(volatile uint_io8_t*)0xB0900099)  /*@bfbba@*/
#define EIC00_EIRCR_ERC26	(*(volatile uint_io8_t*)0xB090009A)  /*@bfbba@*/
#define EIC00_EIRCR_ERC27	(*(volatile uint_io8_t*)0xB090009B)  /*@bfbba@*/
#define EIC00_EIRCR_ERC28	(*(volatile uint_io8_t*)0xB090009C)  /*@bfbba@*/
#define EIC00_EIRCR_ERC29	(*(volatile uint_io8_t*)0xB090009D)  /*@bfbba@*/
#define EIC00_EIRCR_ERC30	(*(volatile uint_io8_t*)0xB090009E)  /*@bfbba@*/
#define EIC00_EIRCR_ERC31	(*(volatile uint_io8_t*)0xB090009F)  /*@bfbba@*/

typedef struct stc_eic00_eircr_field{
    uint_io32_t		u1ERC0:1;
    uint_io32_t		u1ERC1:1;
    uint_io32_t		u1ERC2:1;
    uint_io32_t		u1ERC3:1;
    uint_io32_t		u1ERC4:1;
    uint_io32_t		u1ERC5:1;
    uint_io32_t		u1ERC6:1;
    uint_io32_t		u1ERC7:1;
    uint_io32_t		u1ERC8:1;
    uint_io32_t		u1ERC9:1;
    uint_io32_t		u1ERC10:1;
    uint_io32_t		u1ERC11:1;
    uint_io32_t		u1ERC12:1;
    uint_io32_t		u1ERC13:1;
    uint_io32_t		u1ERC14:1;
    uint_io32_t		u1ERC15:1;
    uint_io32_t		u1ERC16:1;
    uint_io32_t		u1ERC17:1;
    uint_io32_t		u1ERC18:1;
    uint_io32_t		u1ERC19:1;
    uint_io32_t		u1ERC20:1;
    uint_io32_t		u1ERC21:1;
    uint_io32_t		u1ERC22:1;
    uint_io32_t		u1ERC23:1;
    uint_io32_t		u1ERC24:1;
    uint_io32_t		u1ERC25:1;
    uint_io32_t		u1ERC26:1;
    uint_io32_t		u1ERC27:1;
    uint_io32_t		u1ERC28:1;
    uint_io32_t		u1ERC29:1;
    uint_io32_t		u1ERC30:1;
    uint_io32_t		u1ERC31:1;
}stc_eic00_eircr_field_t;

typedef union un_eic00_eircr{
    uint_io32_t		u32Register;
    stc_eic00_eircr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_eircr_t;

/* NFER */
#define EIC00_NFER	(EIC00.unNFER.u32Register)  /*@rg@*/
#define EIC00_NFER_NFE0	(*(volatile uint_io8_t*)0xB09000A0)  /*@bfbba@*/
#define EIC00_NFER_NFE1	(*(volatile uint_io8_t*)0xB09000A1)  /*@bfbba@*/
#define EIC00_NFER_NFE2	(*(volatile uint_io8_t*)0xB09000A2)  /*@bfbba@*/
#define EIC00_NFER_NFE3	(*(volatile uint_io8_t*)0xB09000A3)  /*@bfbba@*/
#define EIC00_NFER_NFE4	(*(volatile uint_io8_t*)0xB09000A4)  /*@bfbba@*/
#define EIC00_NFER_NFE5	(*(volatile uint_io8_t*)0xB09000A5)  /*@bfbba@*/
#define EIC00_NFER_NFE6	(*(volatile uint_io8_t*)0xB09000A6)  /*@bfbba@*/
#define EIC00_NFER_NFE7	(*(volatile uint_io8_t*)0xB09000A7)  /*@bfbba@*/
#define EIC00_NFER_NFE8	(*(volatile uint_io8_t*)0xB09000A8)  /*@bfbba@*/
#define EIC00_NFER_NFE9	(*(volatile uint_io8_t*)0xB09000A9)  /*@bfbba@*/
#define EIC00_NFER_NFE10	(*(volatile uint_io8_t*)0xB09000AA)  /*@bfbba@*/
#define EIC00_NFER_NFE11	(*(volatile uint_io8_t*)0xB09000AB)  /*@bfbba@*/
#define EIC00_NFER_NFE12	(*(volatile uint_io8_t*)0xB09000AC)  /*@bfbba@*/
#define EIC00_NFER_NFE13	(*(volatile uint_io8_t*)0xB09000AD)  /*@bfbba@*/
#define EIC00_NFER_NFE14	(*(volatile uint_io8_t*)0xB09000AE)  /*@bfbba@*/
#define EIC00_NFER_NFE15	(*(volatile uint_io8_t*)0xB09000AF)  /*@bfbba@*/
#define EIC00_NFER_NFE16	(*(volatile uint_io8_t*)0xB09000B0)  /*@bfbba@*/
#define EIC00_NFER_NFE17	(*(volatile uint_io8_t*)0xB09000B1)  /*@bfbba@*/
#define EIC00_NFER_NFE18	(*(volatile uint_io8_t*)0xB09000B2)  /*@bfbba@*/
#define EIC00_NFER_NFE19	(*(volatile uint_io8_t*)0xB09000B3)  /*@bfbba@*/
#define EIC00_NFER_NFE20	(*(volatile uint_io8_t*)0xB09000B4)  /*@bfbba@*/
#define EIC00_NFER_NFE21	(*(volatile uint_io8_t*)0xB09000B5)  /*@bfbba@*/
#define EIC00_NFER_NFE22	(*(volatile uint_io8_t*)0xB09000B6)  /*@bfbba@*/
#define EIC00_NFER_NFE23	(*(volatile uint_io8_t*)0xB09000B7)  /*@bfbba@*/
#define EIC00_NFER_NFE24	(*(volatile uint_io8_t*)0xB09000B8)  /*@bfbba@*/
#define EIC00_NFER_NFE25	(*(volatile uint_io8_t*)0xB09000B9)  /*@bfbba@*/
#define EIC00_NFER_NFE26	(*(volatile uint_io8_t*)0xB09000BA)  /*@bfbba@*/
#define EIC00_NFER_NFE27	(*(volatile uint_io8_t*)0xB09000BB)  /*@bfbba@*/
#define EIC00_NFER_NFE28	(*(volatile uint_io8_t*)0xB09000BC)  /*@bfbba@*/
#define EIC00_NFER_NFE29	(*(volatile uint_io8_t*)0xB09000BD)  /*@bfbba@*/
#define EIC00_NFER_NFE30	(*(volatile uint_io8_t*)0xB09000BE)  /*@bfbba@*/
#define EIC00_NFER_NFE31	(*(volatile uint_io8_t*)0xB09000BF)  /*@bfbba@*/

typedef struct stc_eic00_nfer_field{
    uint_io32_t		u1NFE0:1;
    uint_io32_t		u1NFE1:1;
    uint_io32_t		u1NFE2:1;
    uint_io32_t		u1NFE3:1;
    uint_io32_t		u1NFE4:1;
    uint_io32_t		u1NFE5:1;
    uint_io32_t		u1NFE6:1;
    uint_io32_t		u1NFE7:1;
    uint_io32_t		u1NFE8:1;
    uint_io32_t		u1NFE9:1;
    uint_io32_t		u1NFE10:1;
    uint_io32_t		u1NFE11:1;
    uint_io32_t		u1NFE12:1;
    uint_io32_t		u1NFE13:1;
    uint_io32_t		u1NFE14:1;
    uint_io32_t		u1NFE15:1;
    uint_io32_t		u1NFE16:1;
    uint_io32_t		u1NFE17:1;
    uint_io32_t		u1NFE18:1;
    uint_io32_t		u1NFE19:1;
    uint_io32_t		u1NFE20:1;
    uint_io32_t		u1NFE21:1;
    uint_io32_t		u1NFE22:1;
    uint_io32_t		u1NFE23:1;
    uint_io32_t		u1NFE24:1;
    uint_io32_t		u1NFE25:1;
    uint_io32_t		u1NFE26:1;
    uint_io32_t		u1NFE27:1;
    uint_io32_t		u1NFE28:1;
    uint_io32_t		u1NFE29:1;
    uint_io32_t		u1NFE30:1;
    uint_io32_t		u1NFE31:1;
}stc_eic00_nfer_field_t;

typedef union un_eic00_nfer{
    uint_io32_t		u32Register;
    stc_eic00_nfer_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_nfer_t;

/* NFESR */
#define EIC00_NFESR	(EIC00.unNFESR.u32Register)  /*@rg@*/
#define EIC00_NFESR_NFES0	(*(volatile uint_io8_t*)0xB09000C0)  /*@bfbba@*/
#define EIC00_NFESR_NFES1	(*(volatile uint_io8_t*)0xB09000C1)  /*@bfbba@*/
#define EIC00_NFESR_NFES2	(*(volatile uint_io8_t*)0xB09000C2)  /*@bfbba@*/
#define EIC00_NFESR_NFES3	(*(volatile uint_io8_t*)0xB09000C3)  /*@bfbba@*/
#define EIC00_NFESR_NFES4	(*(volatile uint_io8_t*)0xB09000C4)  /*@bfbba@*/
#define EIC00_NFESR_NFES5	(*(volatile uint_io8_t*)0xB09000C5)  /*@bfbba@*/
#define EIC00_NFESR_NFES6	(*(volatile uint_io8_t*)0xB09000C6)  /*@bfbba@*/
#define EIC00_NFESR_NFES7	(*(volatile uint_io8_t*)0xB09000C7)  /*@bfbba@*/
#define EIC00_NFESR_NFES8	(*(volatile uint_io8_t*)0xB09000C8)  /*@bfbba@*/
#define EIC00_NFESR_NFES9	(*(volatile uint_io8_t*)0xB09000C9)  /*@bfbba@*/
#define EIC00_NFESR_NFES10	(*(volatile uint_io8_t*)0xB09000CA)  /*@bfbba@*/
#define EIC00_NFESR_NFES11	(*(volatile uint_io8_t*)0xB09000CB)  /*@bfbba@*/
#define EIC00_NFESR_NFES12	(*(volatile uint_io8_t*)0xB09000CC)  /*@bfbba@*/
#define EIC00_NFESR_NFES13	(*(volatile uint_io8_t*)0xB09000CD)  /*@bfbba@*/
#define EIC00_NFESR_NFES14	(*(volatile uint_io8_t*)0xB09000CE)  /*@bfbba@*/
#define EIC00_NFESR_NFES15	(*(volatile uint_io8_t*)0xB09000CF)  /*@bfbba@*/
#define EIC00_NFESR_NFES16	(*(volatile uint_io8_t*)0xB09000D0)  /*@bfbba@*/
#define EIC00_NFESR_NFES17	(*(volatile uint_io8_t*)0xB09000D1)  /*@bfbba@*/
#define EIC00_NFESR_NFES18	(*(volatile uint_io8_t*)0xB09000D2)  /*@bfbba@*/
#define EIC00_NFESR_NFES19	(*(volatile uint_io8_t*)0xB09000D3)  /*@bfbba@*/
#define EIC00_NFESR_NFES20	(*(volatile uint_io8_t*)0xB09000D4)  /*@bfbba@*/
#define EIC00_NFESR_NFES21	(*(volatile uint_io8_t*)0xB09000D5)  /*@bfbba@*/
#define EIC00_NFESR_NFES22	(*(volatile uint_io8_t*)0xB09000D6)  /*@bfbba@*/
#define EIC00_NFESR_NFES23	(*(volatile uint_io8_t*)0xB09000D7)  /*@bfbba@*/
#define EIC00_NFESR_NFES24	(*(volatile uint_io8_t*)0xB09000D8)  /*@bfbba@*/
#define EIC00_NFESR_NFES25	(*(volatile uint_io8_t*)0xB09000D9)  /*@bfbba@*/
#define EIC00_NFESR_NFES26	(*(volatile uint_io8_t*)0xB09000DA)  /*@bfbba@*/
#define EIC00_NFESR_NFES27	(*(volatile uint_io8_t*)0xB09000DB)  /*@bfbba@*/
#define EIC00_NFESR_NFES28	(*(volatile uint_io8_t*)0xB09000DC)  /*@bfbba@*/
#define EIC00_NFESR_NFES29	(*(volatile uint_io8_t*)0xB09000DD)  /*@bfbba@*/
#define EIC00_NFESR_NFES30	(*(volatile uint_io8_t*)0xB09000DE)  /*@bfbba@*/
#define EIC00_NFESR_NFES31	(*(volatile uint_io8_t*)0xB09000DF)  /*@bfbba@*/

typedef struct stc_eic00_nfesr_field{
    uint_io32_t		u1NFES0:1;
    uint_io32_t		u1NFES1:1;
    uint_io32_t		u1NFES2:1;
    uint_io32_t		u1NFES3:1;
    uint_io32_t		u1NFES4:1;
    uint_io32_t		u1NFES5:1;
    uint_io32_t		u1NFES6:1;
    uint_io32_t		u1NFES7:1;
    uint_io32_t		u1NFES8:1;
    uint_io32_t		u1NFES9:1;
    uint_io32_t		u1NFES10:1;
    uint_io32_t		u1NFES11:1;
    uint_io32_t		u1NFES12:1;
    uint_io32_t		u1NFES13:1;
    uint_io32_t		u1NFES14:1;
    uint_io32_t		u1NFES15:1;
    uint_io32_t		u1NFES16:1;
    uint_io32_t		u1NFES17:1;
    uint_io32_t		u1NFES18:1;
    uint_io32_t		u1NFES19:1;
    uint_io32_t		u1NFES20:1;
    uint_io32_t		u1NFES21:1;
    uint_io32_t		u1NFES22:1;
    uint_io32_t		u1NFES23:1;
    uint_io32_t		u1NFES24:1;
    uint_io32_t		u1NFES25:1;
    uint_io32_t		u1NFES26:1;
    uint_io32_t		u1NFES27:1;
    uint_io32_t		u1NFES28:1;
    uint_io32_t		u1NFES29:1;
    uint_io32_t		u1NFES30:1;
    uint_io32_t		u1NFES31:1;
}stc_eic00_nfesr_field_t;

typedef union un_eic00_nfesr{
    uint_io32_t		u32Register;
    stc_eic00_nfesr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_nfesr_t;

/* NFECR */
#define EIC00_NFECR	(EIC00.unNFECR.u32Register)  /*@rg@*/
#define EIC00_NFECR_NFEC0	(*(volatile uint_io8_t*)0xB09000E0)  /*@bfbba@*/
#define EIC00_NFECR_NFEC1	(*(volatile uint_io8_t*)0xB09000E1)  /*@bfbba@*/
#define EIC00_NFECR_NFEC2	(*(volatile uint_io8_t*)0xB09000E2)  /*@bfbba@*/
#define EIC00_NFECR_NFEC3	(*(volatile uint_io8_t*)0xB09000E3)  /*@bfbba@*/
#define EIC00_NFECR_NFEC4	(*(volatile uint_io8_t*)0xB09000E4)  /*@bfbba@*/
#define EIC00_NFECR_NFEC5	(*(volatile uint_io8_t*)0xB09000E5)  /*@bfbba@*/
#define EIC00_NFECR_NFEC6	(*(volatile uint_io8_t*)0xB09000E6)  /*@bfbba@*/
#define EIC00_NFECR_NFEC7	(*(volatile uint_io8_t*)0xB09000E7)  /*@bfbba@*/
#define EIC00_NFECR_NFEC8	(*(volatile uint_io8_t*)0xB09000E8)  /*@bfbba@*/
#define EIC00_NFECR_NFEC9	(*(volatile uint_io8_t*)0xB09000E9)  /*@bfbba@*/
#define EIC00_NFECR_NFEC10	(*(volatile uint_io8_t*)0xB09000EA)  /*@bfbba@*/
#define EIC00_NFECR_NFEC11	(*(volatile uint_io8_t*)0xB09000EB)  /*@bfbba@*/
#define EIC00_NFECR_NFEC12	(*(volatile uint_io8_t*)0xB09000EC)  /*@bfbba@*/
#define EIC00_NFECR_NFEC13	(*(volatile uint_io8_t*)0xB09000ED)  /*@bfbba@*/
#define EIC00_NFECR_NFEC14	(*(volatile uint_io8_t*)0xB09000EE)  /*@bfbba@*/
#define EIC00_NFECR_NFEC15	(*(volatile uint_io8_t*)0xB09000EF)  /*@bfbba@*/
#define EIC00_NFECR_NFEC16	(*(volatile uint_io8_t*)0xB09000F0)  /*@bfbba@*/
#define EIC00_NFECR_NFEC17	(*(volatile uint_io8_t*)0xB09000F1)  /*@bfbba@*/
#define EIC00_NFECR_NFEC18	(*(volatile uint_io8_t*)0xB09000F2)  /*@bfbba@*/
#define EIC00_NFECR_NFEC19	(*(volatile uint_io8_t*)0xB09000F3)  /*@bfbba@*/
#define EIC00_NFECR_NFEC20	(*(volatile uint_io8_t*)0xB09000F4)  /*@bfbba@*/
#define EIC00_NFECR_NFEC21	(*(volatile uint_io8_t*)0xB09000F5)  /*@bfbba@*/
#define EIC00_NFECR_NFEC22	(*(volatile uint_io8_t*)0xB09000F6)  /*@bfbba@*/
#define EIC00_NFECR_NFEC23	(*(volatile uint_io8_t*)0xB09000F7)  /*@bfbba@*/
#define EIC00_NFECR_NFEC24	(*(volatile uint_io8_t*)0xB09000F8)  /*@bfbba@*/
#define EIC00_NFECR_NFEC25	(*(volatile uint_io8_t*)0xB09000F9)  /*@bfbba@*/
#define EIC00_NFECR_NFEC26	(*(volatile uint_io8_t*)0xB09000FA)  /*@bfbba@*/
#define EIC00_NFECR_NFEC27	(*(volatile uint_io8_t*)0xB09000FB)  /*@bfbba@*/
#define EIC00_NFECR_NFEC28	(*(volatile uint_io8_t*)0xB09000FC)  /*@bfbba@*/
#define EIC00_NFECR_NFEC29	(*(volatile uint_io8_t*)0xB09000FD)  /*@bfbba@*/
#define EIC00_NFECR_NFEC30	(*(volatile uint_io8_t*)0xB09000FE)  /*@bfbba@*/
#define EIC00_NFECR_NFEC31	(*(volatile uint_io8_t*)0xB09000FF)  /*@bfbba@*/

typedef struct stc_eic00_nfecr_field{
    uint_io32_t		u1NFEC0:1;
    uint_io32_t		u1NFEC1:1;
    uint_io32_t		u1NFEC2:1;
    uint_io32_t		u1NFEC3:1;
    uint_io32_t		u1NFEC4:1;
    uint_io32_t		u1NFEC5:1;
    uint_io32_t		u1NFEC6:1;
    uint_io32_t		u1NFEC7:1;
    uint_io32_t		u1NFEC8:1;
    uint_io32_t		u1NFEC9:1;
    uint_io32_t		u1NFEC10:1;
    uint_io32_t		u1NFEC11:1;
    uint_io32_t		u1NFEC12:1;
    uint_io32_t		u1NFEC13:1;
    uint_io32_t		u1NFEC14:1;
    uint_io32_t		u1NFEC15:1;
    uint_io32_t		u1NFEC16:1;
    uint_io32_t		u1NFEC17:1;
    uint_io32_t		u1NFEC18:1;
    uint_io32_t		u1NFEC19:1;
    uint_io32_t		u1NFEC20:1;
    uint_io32_t		u1NFEC21:1;
    uint_io32_t		u1NFEC22:1;
    uint_io32_t		u1NFEC23:1;
    uint_io32_t		u1NFEC24:1;
    uint_io32_t		u1NFEC25:1;
    uint_io32_t		u1NFEC26:1;
    uint_io32_t		u1NFEC27:1;
    uint_io32_t		u1NFEC28:1;
    uint_io32_t		u1NFEC29:1;
    uint_io32_t		u1NFEC30:1;
    uint_io32_t		u1NFEC31:1;
}stc_eic00_nfecr_field_t;

typedef union un_eic00_nfecr{
    uint_io32_t		u32Register;
    stc_eic00_nfecr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_nfecr_t;

/* ELVR[0-3] */
#define EIC00_ELVR0	(EIC00.unELVR0.u32Register)  /*@rg@*/
#define EIC00_ELVR0_LA0	(*(volatile uint_io8_t*)0xB0900100)  /*@bfbba@*/
#define EIC00_ELVR0_LB0	(*(volatile uint_io8_t*)0xB0900101)  /*@bfbba@*/
#define EIC00_ELVR0_LC0	(*(volatile uint_io8_t*)0xB0900102)  /*@bfbba@*/
#define EIC00_ELVR0_LA1	(*(volatile uint_io8_t*)0xB0900104)  /*@bfbba@*/
#define EIC00_ELVR0_LB1	(*(volatile uint_io8_t*)0xB0900105)  /*@bfbba@*/
#define EIC00_ELVR0_LC1	(*(volatile uint_io8_t*)0xB0900106)  /*@bfbba@*/
#define EIC00_ELVR0_LA2	(*(volatile uint_io8_t*)0xB0900108)  /*@bfbba@*/
#define EIC00_ELVR0_LB2	(*(volatile uint_io8_t*)0xB0900109)  /*@bfbba@*/
#define EIC00_ELVR0_LC2	(*(volatile uint_io8_t*)0xB090010A)  /*@bfbba@*/
#define EIC00_ELVR0_LA3	(*(volatile uint_io8_t*)0xB090010C)  /*@bfbba@*/
#define EIC00_ELVR0_LB3	(*(volatile uint_io8_t*)0xB090010D)  /*@bfbba@*/
#define EIC00_ELVR0_LC3	(*(volatile uint_io8_t*)0xB090010E)  /*@bfbba@*/
#define EIC00_ELVR0_LA4	(*(volatile uint_io8_t*)0xB0900110)  /*@bfbba@*/
#define EIC00_ELVR0_LB4	(*(volatile uint_io8_t*)0xB0900111)  /*@bfbba@*/
#define EIC00_ELVR0_LC4	(*(volatile uint_io8_t*)0xB0900112)  /*@bfbba@*/
#define EIC00_ELVR0_LA5	(*(volatile uint_io8_t*)0xB0900114)  /*@bfbba@*/
#define EIC00_ELVR0_LB5	(*(volatile uint_io8_t*)0xB0900115)  /*@bfbba@*/
#define EIC00_ELVR0_LC5	(*(volatile uint_io8_t*)0xB0900116)  /*@bfbba@*/
#define EIC00_ELVR0_LA6	(*(volatile uint_io8_t*)0xB0900118)  /*@bfbba@*/
#define EIC00_ELVR0_LB6	(*(volatile uint_io8_t*)0xB0900119)  /*@bfbba@*/
#define EIC00_ELVR0_LC6	(*(volatile uint_io8_t*)0xB090011A)  /*@bfbba@*/
#define EIC00_ELVR0_LA7	(*(volatile uint_io8_t*)0xB090011C)  /*@bfbba@*/
#define EIC00_ELVR0_LB7	(*(volatile uint_io8_t*)0xB090011D)  /*@bfbba@*/
#define EIC00_ELVR0_LC7	(*(volatile uint_io8_t*)0xB090011E)  /*@bfbba@*/

#define EIC00_ELVR1	(EIC00.unELVR1.u32Register)  /*@rg@*/
#define EIC00_ELVR1_LA0	(*(volatile uint_io8_t*)0xB0900120)  /*@bfbba@*/
#define EIC00_ELVR1_LB0	(*(volatile uint_io8_t*)0xB0900121)  /*@bfbba@*/
#define EIC00_ELVR1_LC0	(*(volatile uint_io8_t*)0xB0900122)  /*@bfbba@*/
#define EIC00_ELVR1_LA1	(*(volatile uint_io8_t*)0xB0900124)  /*@bfbba@*/
#define EIC00_ELVR1_LB1	(*(volatile uint_io8_t*)0xB0900125)  /*@bfbba@*/
#define EIC00_ELVR1_LC1	(*(volatile uint_io8_t*)0xB0900126)  /*@bfbba@*/
#define EIC00_ELVR1_LA2	(*(volatile uint_io8_t*)0xB0900128)  /*@bfbba@*/
#define EIC00_ELVR1_LB2	(*(volatile uint_io8_t*)0xB0900129)  /*@bfbba@*/
#define EIC00_ELVR1_LC2	(*(volatile uint_io8_t*)0xB090012A)  /*@bfbba@*/
#define EIC00_ELVR1_LA3	(*(volatile uint_io8_t*)0xB090012C)  /*@bfbba@*/
#define EIC00_ELVR1_LB3	(*(volatile uint_io8_t*)0xB090012D)  /*@bfbba@*/
#define EIC00_ELVR1_LC3	(*(volatile uint_io8_t*)0xB090012E)  /*@bfbba@*/
#define EIC00_ELVR1_LA4	(*(volatile uint_io8_t*)0xB0900130)  /*@bfbba@*/
#define EIC00_ELVR1_LB4	(*(volatile uint_io8_t*)0xB0900131)  /*@bfbba@*/
#define EIC00_ELVR1_LC4	(*(volatile uint_io8_t*)0xB0900132)  /*@bfbba@*/
#define EIC00_ELVR1_LA5	(*(volatile uint_io8_t*)0xB0900134)  /*@bfbba@*/
#define EIC00_ELVR1_LB5	(*(volatile uint_io8_t*)0xB0900135)  /*@bfbba@*/
#define EIC00_ELVR1_LC5	(*(volatile uint_io8_t*)0xB0900136)  /*@bfbba@*/
#define EIC00_ELVR1_LA6	(*(volatile uint_io8_t*)0xB0900138)  /*@bfbba@*/
#define EIC00_ELVR1_LB6	(*(volatile uint_io8_t*)0xB0900139)  /*@bfbba@*/
#define EIC00_ELVR1_LC6	(*(volatile uint_io8_t*)0xB090013A)  /*@bfbba@*/
#define EIC00_ELVR1_LA7	(*(volatile uint_io8_t*)0xB090013C)  /*@bfbba@*/
#define EIC00_ELVR1_LB7	(*(volatile uint_io8_t*)0xB090013D)  /*@bfbba@*/
#define EIC00_ELVR1_LC7	(*(volatile uint_io8_t*)0xB090013E)  /*@bfbba@*/

#define EIC00_ELVR2	(EIC00.unELVR2.u32Register)  /*@rg@*/
#define EIC00_ELVR2_LA0	(*(volatile uint_io8_t*)0xB0900140)  /*@bfbba@*/
#define EIC00_ELVR2_LB0	(*(volatile uint_io8_t*)0xB0900141)  /*@bfbba@*/
#define EIC00_ELVR2_LC0	(*(volatile uint_io8_t*)0xB0900142)  /*@bfbba@*/
#define EIC00_ELVR2_LA1	(*(volatile uint_io8_t*)0xB0900144)  /*@bfbba@*/
#define EIC00_ELVR2_LB1	(*(volatile uint_io8_t*)0xB0900145)  /*@bfbba@*/
#define EIC00_ELVR2_LC1	(*(volatile uint_io8_t*)0xB0900146)  /*@bfbba@*/
#define EIC00_ELVR2_LA2	(*(volatile uint_io8_t*)0xB0900148)  /*@bfbba@*/
#define EIC00_ELVR2_LB2	(*(volatile uint_io8_t*)0xB0900149)  /*@bfbba@*/
#define EIC00_ELVR2_LC2	(*(volatile uint_io8_t*)0xB090014A)  /*@bfbba@*/
#define EIC00_ELVR2_LA3	(*(volatile uint_io8_t*)0xB090014C)  /*@bfbba@*/
#define EIC00_ELVR2_LB3	(*(volatile uint_io8_t*)0xB090014D)  /*@bfbba@*/
#define EIC00_ELVR2_LC3	(*(volatile uint_io8_t*)0xB090014E)  /*@bfbba@*/
#define EIC00_ELVR2_LA4	(*(volatile uint_io8_t*)0xB0900150)  /*@bfbba@*/
#define EIC00_ELVR2_LB4	(*(volatile uint_io8_t*)0xB0900151)  /*@bfbba@*/
#define EIC00_ELVR2_LC4	(*(volatile uint_io8_t*)0xB0900152)  /*@bfbba@*/
#define EIC00_ELVR2_LA5	(*(volatile uint_io8_t*)0xB0900154)  /*@bfbba@*/
#define EIC00_ELVR2_LB5	(*(volatile uint_io8_t*)0xB0900155)  /*@bfbba@*/
#define EIC00_ELVR2_LC5	(*(volatile uint_io8_t*)0xB0900156)  /*@bfbba@*/
#define EIC00_ELVR2_LA6	(*(volatile uint_io8_t*)0xB0900158)  /*@bfbba@*/
#define EIC00_ELVR2_LB6	(*(volatile uint_io8_t*)0xB0900159)  /*@bfbba@*/
#define EIC00_ELVR2_LC6	(*(volatile uint_io8_t*)0xB090015A)  /*@bfbba@*/
#define EIC00_ELVR2_LA7	(*(volatile uint_io8_t*)0xB090015C)  /*@bfbba@*/
#define EIC00_ELVR2_LB7	(*(volatile uint_io8_t*)0xB090015D)  /*@bfbba@*/
#define EIC00_ELVR2_LC7	(*(volatile uint_io8_t*)0xB090015E)  /*@bfbba@*/

#define EIC00_ELVR3	(EIC00.unELVR3.u32Register)  /*@rg@*/
#define EIC00_ELVR3_LA0	(*(volatile uint_io8_t*)0xB0900160)  /*@bfbba@*/
#define EIC00_ELVR3_LB0	(*(volatile uint_io8_t*)0xB0900161)  /*@bfbba@*/
#define EIC00_ELVR3_LC0	(*(volatile uint_io8_t*)0xB0900162)  /*@bfbba@*/
#define EIC00_ELVR3_LA1	(*(volatile uint_io8_t*)0xB0900164)  /*@bfbba@*/
#define EIC00_ELVR3_LB1	(*(volatile uint_io8_t*)0xB0900165)  /*@bfbba@*/
#define EIC00_ELVR3_LC1	(*(volatile uint_io8_t*)0xB0900166)  /*@bfbba@*/
#define EIC00_ELVR3_LA2	(*(volatile uint_io8_t*)0xB0900168)  /*@bfbba@*/
#define EIC00_ELVR3_LB2	(*(volatile uint_io8_t*)0xB0900169)  /*@bfbba@*/
#define EIC00_ELVR3_LC2	(*(volatile uint_io8_t*)0xB090016A)  /*@bfbba@*/
#define EIC00_ELVR3_LA3	(*(volatile uint_io8_t*)0xB090016C)  /*@bfbba@*/
#define EIC00_ELVR3_LB3	(*(volatile uint_io8_t*)0xB090016D)  /*@bfbba@*/
#define EIC00_ELVR3_LC3	(*(volatile uint_io8_t*)0xB090016E)  /*@bfbba@*/
#define EIC00_ELVR3_LA4	(*(volatile uint_io8_t*)0xB0900170)  /*@bfbba@*/
#define EIC00_ELVR3_LB4	(*(volatile uint_io8_t*)0xB0900171)  /*@bfbba@*/
#define EIC00_ELVR3_LC4	(*(volatile uint_io8_t*)0xB0900172)  /*@bfbba@*/
#define EIC00_ELVR3_LA5	(*(volatile uint_io8_t*)0xB0900174)  /*@bfbba@*/
#define EIC00_ELVR3_LB5	(*(volatile uint_io8_t*)0xB0900175)  /*@bfbba@*/
#define EIC00_ELVR3_LC5	(*(volatile uint_io8_t*)0xB0900176)  /*@bfbba@*/
#define EIC00_ELVR3_LA6	(*(volatile uint_io8_t*)0xB0900178)  /*@bfbba@*/
#define EIC00_ELVR3_LB6	(*(volatile uint_io8_t*)0xB0900179)  /*@bfbba@*/
#define EIC00_ELVR3_LC6	(*(volatile uint_io8_t*)0xB090017A)  /*@bfbba@*/
#define EIC00_ELVR3_LA7	(*(volatile uint_io8_t*)0xB090017C)  /*@bfbba@*/
#define EIC00_ELVR3_LB7	(*(volatile uint_io8_t*)0xB090017D)  /*@bfbba@*/
#define EIC00_ELVR3_LC7	(*(volatile uint_io8_t*)0xB090017E)  /*@bfbba@*/

typedef struct stc_eic00_elvrn_field{
    uint_io32_t		u1LA0:1;
    uint_io32_t		u1LB0:1;
    uint_io32_t		u1LC0:1;
    uint_io32_t		:1;
    uint_io32_t		u1LA1:1;
    uint_io32_t		u1LB1:1;
    uint_io32_t		u1LC1:1;
    uint_io32_t		:1;
    uint_io32_t		u1LA2:1;
    uint_io32_t		u1LB2:1;
    uint_io32_t		u1LC2:1;
    uint_io32_t		:1;
    uint_io32_t		u1LA3:1;
    uint_io32_t		u1LB3:1;
    uint_io32_t		u1LC3:1;
    uint_io32_t		:1;
    uint_io32_t		u1LA4:1;
    uint_io32_t		u1LB4:1;
    uint_io32_t		u1LC4:1;
    uint_io32_t		:1;
    uint_io32_t		u1LA5:1;
    uint_io32_t		u1LB5:1;
    uint_io32_t		u1LC5:1;
    uint_io32_t		:1;
    uint_io32_t		u1LA6:1;
    uint_io32_t		u1LB6:1;
    uint_io32_t		u1LC6:1;
    uint_io32_t		:1;
    uint_io32_t		u1LA7:1;
    uint_io32_t		u1LB7:1;
    uint_io32_t		u1LC7:1;
    uint_io32_t		:1;
}stc_eic00_elvrn_field_t;

typedef union un_eic00_elvrn{
    uint_io32_t		u32Register;
    stc_eic00_elvrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_elvrn_t;

/* NMIR */
#define EIC00_NMIR	(EIC00.unNMIR.u32Register)  /*@rg@*/
#define EIC00_NMIR_NMIINT	(*(volatile uint_io8_t*)0xB0900180)  /*@bfbba@*/
#define EIC00_NMIR_NMICLR	(*(volatile uint_io8_t*)0xB0900188)  /*@bfbba@*/

typedef struct stc_eic00_nmir_field{
    uint_io32_t		u1NMIINT:1;
    uint_io32_t		:7;
    uint_io32_t		u1NMICLR:1;
    uint_io32_t		:23;
}stc_eic00_nmir_field_t;

typedef union un_eic00_nmir{
    uint_io32_t		u32Register;
    stc_eic00_nmir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_nmir_t;

/* DRER */
#define EIC00_DRER	(EIC00.unDRER.u32Register)  /*@rg@*/
#define EIC00_DRER_DRE0	(*(volatile uint_io8_t*)0xB09001A0)  /*@bfbba@*/
#define EIC00_DRER_DRE1	(*(volatile uint_io8_t*)0xB09001A1)  /*@bfbba@*/
#define EIC00_DRER_DRE2	(*(volatile uint_io8_t*)0xB09001A2)  /*@bfbba@*/
#define EIC00_DRER_DRE3	(*(volatile uint_io8_t*)0xB09001A3)  /*@bfbba@*/
#define EIC00_DRER_DRE4	(*(volatile uint_io8_t*)0xB09001A4)  /*@bfbba@*/
#define EIC00_DRER_DRE5	(*(volatile uint_io8_t*)0xB09001A5)  /*@bfbba@*/
#define EIC00_DRER_DRE6	(*(volatile uint_io8_t*)0xB09001A6)  /*@bfbba@*/
#define EIC00_DRER_DRE7	(*(volatile uint_io8_t*)0xB09001A7)  /*@bfbba@*/
#define EIC00_DRER_DRE8	(*(volatile uint_io8_t*)0xB09001A8)  /*@bfbba@*/
#define EIC00_DRER_DRE9	(*(volatile uint_io8_t*)0xB09001A9)  /*@bfbba@*/
#define EIC00_DRER_DRE10	(*(volatile uint_io8_t*)0xB09001AA)  /*@bfbba@*/
#define EIC00_DRER_DRE11	(*(volatile uint_io8_t*)0xB09001AB)  /*@bfbba@*/
#define EIC00_DRER_DRE12	(*(volatile uint_io8_t*)0xB09001AC)  /*@bfbba@*/
#define EIC00_DRER_DRE13	(*(volatile uint_io8_t*)0xB09001AD)  /*@bfbba@*/
#define EIC00_DRER_DRE14	(*(volatile uint_io8_t*)0xB09001AE)  /*@bfbba@*/
#define EIC00_DRER_DRE15	(*(volatile uint_io8_t*)0xB09001AF)  /*@bfbba@*/
#define EIC00_DRER_DRE16	(*(volatile uint_io8_t*)0xB09001B0)  /*@bfbba@*/
#define EIC00_DRER_DRE17	(*(volatile uint_io8_t*)0xB09001B1)  /*@bfbba@*/
#define EIC00_DRER_DRE18	(*(volatile uint_io8_t*)0xB09001B2)  /*@bfbba@*/
#define EIC00_DRER_DRE19	(*(volatile uint_io8_t*)0xB09001B3)  /*@bfbba@*/
#define EIC00_DRER_DRE20	(*(volatile uint_io8_t*)0xB09001B4)  /*@bfbba@*/
#define EIC00_DRER_DRE21	(*(volatile uint_io8_t*)0xB09001B5)  /*@bfbba@*/
#define EIC00_DRER_DRE22	(*(volatile uint_io8_t*)0xB09001B6)  /*@bfbba@*/
#define EIC00_DRER_DRE23	(*(volatile uint_io8_t*)0xB09001B7)  /*@bfbba@*/
#define EIC00_DRER_DRE24	(*(volatile uint_io8_t*)0xB09001B8)  /*@bfbba@*/
#define EIC00_DRER_DRE25	(*(volatile uint_io8_t*)0xB09001B9)  /*@bfbba@*/
#define EIC00_DRER_DRE26	(*(volatile uint_io8_t*)0xB09001BA)  /*@bfbba@*/
#define EIC00_DRER_DRE27	(*(volatile uint_io8_t*)0xB09001BB)  /*@bfbba@*/
#define EIC00_DRER_DRE28	(*(volatile uint_io8_t*)0xB09001BC)  /*@bfbba@*/
#define EIC00_DRER_DRE29	(*(volatile uint_io8_t*)0xB09001BD)  /*@bfbba@*/
#define EIC00_DRER_DRE30	(*(volatile uint_io8_t*)0xB09001BE)  /*@bfbba@*/
#define EIC00_DRER_DRE31	(*(volatile uint_io8_t*)0xB09001BF)  /*@bfbba@*/

typedef struct stc_eic00_drer_field{
    uint_io32_t		u1DRE0:1;
    uint_io32_t		u1DRE1:1;
    uint_io32_t		u1DRE2:1;
    uint_io32_t		u1DRE3:1;
    uint_io32_t		u1DRE4:1;
    uint_io32_t		u1DRE5:1;
    uint_io32_t		u1DRE6:1;
    uint_io32_t		u1DRE7:1;
    uint_io32_t		u1DRE8:1;
    uint_io32_t		u1DRE9:1;
    uint_io32_t		u1DRE10:1;
    uint_io32_t		u1DRE11:1;
    uint_io32_t		u1DRE12:1;
    uint_io32_t		u1DRE13:1;
    uint_io32_t		u1DRE14:1;
    uint_io32_t		u1DRE15:1;
    uint_io32_t		u1DRE16:1;
    uint_io32_t		u1DRE17:1;
    uint_io32_t		u1DRE18:1;
    uint_io32_t		u1DRE19:1;
    uint_io32_t		u1DRE20:1;
    uint_io32_t		u1DRE21:1;
    uint_io32_t		u1DRE22:1;
    uint_io32_t		u1DRE23:1;
    uint_io32_t		u1DRE24:1;
    uint_io32_t		u1DRE25:1;
    uint_io32_t		u1DRE26:1;
    uint_io32_t		u1DRE27:1;
    uint_io32_t		u1DRE28:1;
    uint_io32_t		u1DRE29:1;
    uint_io32_t		u1DRE30:1;
    uint_io32_t		u1DRE31:1;
}stc_eic00_drer_field_t;

typedef union un_eic00_drer{
    uint_io32_t		u32Register;
    stc_eic00_drer_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_drer_t;

/* DRESR */
#define EIC00_DRESR	(EIC00.unDRESR.u32Register)  /*@rg@*/
#define EIC00_DRESR_DRES0	(*(volatile uint_io8_t*)0xB09001C0)  /*@bfbba@*/
#define EIC00_DRESR_DRES1	(*(volatile uint_io8_t*)0xB09001C1)  /*@bfbba@*/
#define EIC00_DRESR_DRES2	(*(volatile uint_io8_t*)0xB09001C2)  /*@bfbba@*/
#define EIC00_DRESR_DRES3	(*(volatile uint_io8_t*)0xB09001C3)  /*@bfbba@*/
#define EIC00_DRESR_DRES4	(*(volatile uint_io8_t*)0xB09001C4)  /*@bfbba@*/
#define EIC00_DRESR_DRES5	(*(volatile uint_io8_t*)0xB09001C5)  /*@bfbba@*/
#define EIC00_DRESR_DRES6	(*(volatile uint_io8_t*)0xB09001C6)  /*@bfbba@*/
#define EIC00_DRESR_DRES7	(*(volatile uint_io8_t*)0xB09001C7)  /*@bfbba@*/
#define EIC00_DRESR_DRES8	(*(volatile uint_io8_t*)0xB09001C8)  /*@bfbba@*/
#define EIC00_DRESR_DRES9	(*(volatile uint_io8_t*)0xB09001C9)  /*@bfbba@*/
#define EIC00_DRESR_DRES10	(*(volatile uint_io8_t*)0xB09001CA)  /*@bfbba@*/
#define EIC00_DRESR_DRES11	(*(volatile uint_io8_t*)0xB09001CB)  /*@bfbba@*/
#define EIC00_DRESR_DRES12	(*(volatile uint_io8_t*)0xB09001CC)  /*@bfbba@*/
#define EIC00_DRESR_DRES13	(*(volatile uint_io8_t*)0xB09001CD)  /*@bfbba@*/
#define EIC00_DRESR_DRES14	(*(volatile uint_io8_t*)0xB09001CE)  /*@bfbba@*/
#define EIC00_DRESR_DRES15	(*(volatile uint_io8_t*)0xB09001CF)  /*@bfbba@*/
#define EIC00_DRESR_DRES16	(*(volatile uint_io8_t*)0xB09001D0)  /*@bfbba@*/
#define EIC00_DRESR_DRES17	(*(volatile uint_io8_t*)0xB09001D1)  /*@bfbba@*/
#define EIC00_DRESR_DRES18	(*(volatile uint_io8_t*)0xB09001D2)  /*@bfbba@*/
#define EIC00_DRESR_DRES19	(*(volatile uint_io8_t*)0xB09001D3)  /*@bfbba@*/
#define EIC00_DRESR_DRES20	(*(volatile uint_io8_t*)0xB09001D4)  /*@bfbba@*/
#define EIC00_DRESR_DRES21	(*(volatile uint_io8_t*)0xB09001D5)  /*@bfbba@*/
#define EIC00_DRESR_DRES22	(*(volatile uint_io8_t*)0xB09001D6)  /*@bfbba@*/
#define EIC00_DRESR_DRES23	(*(volatile uint_io8_t*)0xB09001D7)  /*@bfbba@*/
#define EIC00_DRESR_DRES24	(*(volatile uint_io8_t*)0xB09001D8)  /*@bfbba@*/
#define EIC00_DRESR_DRES25	(*(volatile uint_io8_t*)0xB09001D9)  /*@bfbba@*/
#define EIC00_DRESR_DRES26	(*(volatile uint_io8_t*)0xB09001DA)  /*@bfbba@*/
#define EIC00_DRESR_DRES27	(*(volatile uint_io8_t*)0xB09001DB)  /*@bfbba@*/
#define EIC00_DRESR_DRES28	(*(volatile uint_io8_t*)0xB09001DC)  /*@bfbba@*/
#define EIC00_DRESR_DRES29	(*(volatile uint_io8_t*)0xB09001DD)  /*@bfbba@*/
#define EIC00_DRESR_DRES30	(*(volatile uint_io8_t*)0xB09001DE)  /*@bfbba@*/
#define EIC00_DRESR_DRES31	(*(volatile uint_io8_t*)0xB09001DF)  /*@bfbba@*/

typedef struct stc_eic00_dresr_field{
    uint_io32_t		u1DRES0:1;
    uint_io32_t		u1DRES1:1;
    uint_io32_t		u1DRES2:1;
    uint_io32_t		u1DRES3:1;
    uint_io32_t		u1DRES4:1;
    uint_io32_t		u1DRES5:1;
    uint_io32_t		u1DRES6:1;
    uint_io32_t		u1DRES7:1;
    uint_io32_t		u1DRES8:1;
    uint_io32_t		u1DRES9:1;
    uint_io32_t		u1DRES10:1;
    uint_io32_t		u1DRES11:1;
    uint_io32_t		u1DRES12:1;
    uint_io32_t		u1DRES13:1;
    uint_io32_t		u1DRES14:1;
    uint_io32_t		u1DRES15:1;
    uint_io32_t		u1DRES16:1;
    uint_io32_t		u1DRES17:1;
    uint_io32_t		u1DRES18:1;
    uint_io32_t		u1DRES19:1;
    uint_io32_t		u1DRES20:1;
    uint_io32_t		u1DRES21:1;
    uint_io32_t		u1DRES22:1;
    uint_io32_t		u1DRES23:1;
    uint_io32_t		u1DRES24:1;
    uint_io32_t		u1DRES25:1;
    uint_io32_t		u1DRES26:1;
    uint_io32_t		u1DRES27:1;
    uint_io32_t		u1DRES28:1;
    uint_io32_t		u1DRES29:1;
    uint_io32_t		u1DRES30:1;
    uint_io32_t		u1DRES31:1;
}stc_eic00_dresr_field_t;

typedef union un_eic00_dresr{
    uint_io32_t		u32Register;
    stc_eic00_dresr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_dresr_t;

/* DRECR */
#define EIC00_DRECR	(EIC00.unDRECR.u32Register)  /*@rg@*/
#define EIC00_DRECR_DREC0	(*(volatile uint_io8_t*)0xB09001E0)  /*@bfbba@*/
#define EIC00_DRECR_DREC1	(*(volatile uint_io8_t*)0xB09001E1)  /*@bfbba@*/
#define EIC00_DRECR_DREC2	(*(volatile uint_io8_t*)0xB09001E2)  /*@bfbba@*/
#define EIC00_DRECR_DREC3	(*(volatile uint_io8_t*)0xB09001E3)  /*@bfbba@*/
#define EIC00_DRECR_DREC4	(*(volatile uint_io8_t*)0xB09001E4)  /*@bfbba@*/
#define EIC00_DRECR_DREC5	(*(volatile uint_io8_t*)0xB09001E5)  /*@bfbba@*/
#define EIC00_DRECR_DREC6	(*(volatile uint_io8_t*)0xB09001E6)  /*@bfbba@*/
#define EIC00_DRECR_DREC7	(*(volatile uint_io8_t*)0xB09001E7)  /*@bfbba@*/
#define EIC00_DRECR_DREC8	(*(volatile uint_io8_t*)0xB09001E8)  /*@bfbba@*/
#define EIC00_DRECR_DREC9	(*(volatile uint_io8_t*)0xB09001E9)  /*@bfbba@*/
#define EIC00_DRECR_DREC10	(*(volatile uint_io8_t*)0xB09001EA)  /*@bfbba@*/
#define EIC00_DRECR_DREC11	(*(volatile uint_io8_t*)0xB09001EB)  /*@bfbba@*/
#define EIC00_DRECR_DREC12	(*(volatile uint_io8_t*)0xB09001EC)  /*@bfbba@*/
#define EIC00_DRECR_DREC13	(*(volatile uint_io8_t*)0xB09001ED)  /*@bfbba@*/
#define EIC00_DRECR_DREC14	(*(volatile uint_io8_t*)0xB09001EE)  /*@bfbba@*/
#define EIC00_DRECR_DREC15	(*(volatile uint_io8_t*)0xB09001EF)  /*@bfbba@*/
#define EIC00_DRECR_DREC16	(*(volatile uint_io8_t*)0xB09001F0)  /*@bfbba@*/
#define EIC00_DRECR_DREC17	(*(volatile uint_io8_t*)0xB09001F1)  /*@bfbba@*/
#define EIC00_DRECR_DREC18	(*(volatile uint_io8_t*)0xB09001F2)  /*@bfbba@*/
#define EIC00_DRECR_DREC19	(*(volatile uint_io8_t*)0xB09001F3)  /*@bfbba@*/
#define EIC00_DRECR_DREC20	(*(volatile uint_io8_t*)0xB09001F4)  /*@bfbba@*/
#define EIC00_DRECR_DREC21	(*(volatile uint_io8_t*)0xB09001F5)  /*@bfbba@*/
#define EIC00_DRECR_DREC22	(*(volatile uint_io8_t*)0xB09001F6)  /*@bfbba@*/
#define EIC00_DRECR_DREC23	(*(volatile uint_io8_t*)0xB09001F7)  /*@bfbba@*/
#define EIC00_DRECR_DREC24	(*(volatile uint_io8_t*)0xB09001F8)  /*@bfbba@*/
#define EIC00_DRECR_DREC25	(*(volatile uint_io8_t*)0xB09001F9)  /*@bfbba@*/
#define EIC00_DRECR_DREC26	(*(volatile uint_io8_t*)0xB09001FA)  /*@bfbba@*/
#define EIC00_DRECR_DREC27	(*(volatile uint_io8_t*)0xB09001FB)  /*@bfbba@*/
#define EIC00_DRECR_DREC28	(*(volatile uint_io8_t*)0xB09001FC)  /*@bfbba@*/
#define EIC00_DRECR_DREC29	(*(volatile uint_io8_t*)0xB09001FD)  /*@bfbba@*/
#define EIC00_DRECR_DREC30	(*(volatile uint_io8_t*)0xB09001FE)  /*@bfbba@*/
#define EIC00_DRECR_DREC31	(*(volatile uint_io8_t*)0xB09001FF)  /*@bfbba@*/

typedef struct stc_eic00_drecr_field{
    uint_io32_t		u1DREC0:1;
    uint_io32_t		u1DREC1:1;
    uint_io32_t		u1DREC2:1;
    uint_io32_t		u1DREC3:1;
    uint_io32_t		u1DREC4:1;
    uint_io32_t		u1DREC5:1;
    uint_io32_t		u1DREC6:1;
    uint_io32_t		u1DREC7:1;
    uint_io32_t		u1DREC8:1;
    uint_io32_t		u1DREC9:1;
    uint_io32_t		u1DREC10:1;
    uint_io32_t		u1DREC11:1;
    uint_io32_t		u1DREC12:1;
    uint_io32_t		u1DREC13:1;
    uint_io32_t		u1DREC14:1;
    uint_io32_t		u1DREC15:1;
    uint_io32_t		u1DREC16:1;
    uint_io32_t		u1DREC17:1;
    uint_io32_t		u1DREC18:1;
    uint_io32_t		u1DREC19:1;
    uint_io32_t		u1DREC20:1;
    uint_io32_t		u1DREC21:1;
    uint_io32_t		u1DREC22:1;
    uint_io32_t		u1DREC23:1;
    uint_io32_t		u1DREC24:1;
    uint_io32_t		u1DREC25:1;
    uint_io32_t		u1DREC26:1;
    uint_io32_t		u1DREC27:1;
    uint_io32_t		u1DREC28:1;
    uint_io32_t		u1DREC29:1;
    uint_io32_t		u1DREC30:1;
    uint_io32_t		u1DREC31:1;
}stc_eic00_drecr_field_t;

typedef union un_eic00_drecr{
    uint_io32_t		u32Register;
    stc_eic00_drecr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_drecr_t;

/* DRFR */
#define EIC00_DRFR	(EIC00.unDRFR.u32Register)  /*@rg@*/
#define EIC00_DRFR_DRF0	(*(volatile uint_io8_t*)0xB0900200)  /*@bfbba@*/
#define EIC00_DRFR_DRF1	(*(volatile uint_io8_t*)0xB0900201)  /*@bfbba@*/
#define EIC00_DRFR_DRF2	(*(volatile uint_io8_t*)0xB0900202)  /*@bfbba@*/
#define EIC00_DRFR_DRF3	(*(volatile uint_io8_t*)0xB0900203)  /*@bfbba@*/
#define EIC00_DRFR_DRF4	(*(volatile uint_io8_t*)0xB0900204)  /*@bfbba@*/
#define EIC00_DRFR_DRF5	(*(volatile uint_io8_t*)0xB0900205)  /*@bfbba@*/
#define EIC00_DRFR_DRF6	(*(volatile uint_io8_t*)0xB0900206)  /*@bfbba@*/
#define EIC00_DRFR_DRF7	(*(volatile uint_io8_t*)0xB0900207)  /*@bfbba@*/
#define EIC00_DRFR_DRF8	(*(volatile uint_io8_t*)0xB0900208)  /*@bfbba@*/
#define EIC00_DRFR_DRF9	(*(volatile uint_io8_t*)0xB0900209)  /*@bfbba@*/
#define EIC00_DRFR_DRF10	(*(volatile uint_io8_t*)0xB090020A)  /*@bfbba@*/
#define EIC00_DRFR_DRF11	(*(volatile uint_io8_t*)0xB090020B)  /*@bfbba@*/
#define EIC00_DRFR_DRF12	(*(volatile uint_io8_t*)0xB090020C)  /*@bfbba@*/
#define EIC00_DRFR_DRF13	(*(volatile uint_io8_t*)0xB090020D)  /*@bfbba@*/
#define EIC00_DRFR_DRF14	(*(volatile uint_io8_t*)0xB090020E)  /*@bfbba@*/
#define EIC00_DRFR_DRF15	(*(volatile uint_io8_t*)0xB090020F)  /*@bfbba@*/
#define EIC00_DRFR_DRF16	(*(volatile uint_io8_t*)0xB0900210)  /*@bfbba@*/
#define EIC00_DRFR_DRF17	(*(volatile uint_io8_t*)0xB0900211)  /*@bfbba@*/
#define EIC00_DRFR_DRF18	(*(volatile uint_io8_t*)0xB0900212)  /*@bfbba@*/
#define EIC00_DRFR_DRF19	(*(volatile uint_io8_t*)0xB0900213)  /*@bfbba@*/
#define EIC00_DRFR_DRF20	(*(volatile uint_io8_t*)0xB0900214)  /*@bfbba@*/
#define EIC00_DRFR_DRF21	(*(volatile uint_io8_t*)0xB0900215)  /*@bfbba@*/
#define EIC00_DRFR_DRF22	(*(volatile uint_io8_t*)0xB0900216)  /*@bfbba@*/
#define EIC00_DRFR_DRF23	(*(volatile uint_io8_t*)0xB0900217)  /*@bfbba@*/
#define EIC00_DRFR_DRF24	(*(volatile uint_io8_t*)0xB0900218)  /*@bfbba@*/
#define EIC00_DRFR_DRF25	(*(volatile uint_io8_t*)0xB0900219)  /*@bfbba@*/
#define EIC00_DRFR_DRF26	(*(volatile uint_io8_t*)0xB090021A)  /*@bfbba@*/
#define EIC00_DRFR_DRF27	(*(volatile uint_io8_t*)0xB090021B)  /*@bfbba@*/
#define EIC00_DRFR_DRF28	(*(volatile uint_io8_t*)0xB090021C)  /*@bfbba@*/
#define EIC00_DRFR_DRF29	(*(volatile uint_io8_t*)0xB090021D)  /*@bfbba@*/
#define EIC00_DRFR_DRF30	(*(volatile uint_io8_t*)0xB090021E)  /*@bfbba@*/
#define EIC00_DRFR_DRF31	(*(volatile uint_io8_t*)0xB090021F)  /*@bfbba@*/

typedef struct stc_eic00_drfr_field{
    uint_io32_t		u1DRF0:1;
    uint_io32_t		u1DRF1:1;
    uint_io32_t		u1DRF2:1;
    uint_io32_t		u1DRF3:1;
    uint_io32_t		u1DRF4:1;
    uint_io32_t		u1DRF5:1;
    uint_io32_t		u1DRF6:1;
    uint_io32_t		u1DRF7:1;
    uint_io32_t		u1DRF8:1;
    uint_io32_t		u1DRF9:1;
    uint_io32_t		u1DRF10:1;
    uint_io32_t		u1DRF11:1;
    uint_io32_t		u1DRF12:1;
    uint_io32_t		u1DRF13:1;
    uint_io32_t		u1DRF14:1;
    uint_io32_t		u1DRF15:1;
    uint_io32_t		u1DRF16:1;
    uint_io32_t		u1DRF17:1;
    uint_io32_t		u1DRF18:1;
    uint_io32_t		u1DRF19:1;
    uint_io32_t		u1DRF20:1;
    uint_io32_t		u1DRF21:1;
    uint_io32_t		u1DRF22:1;
    uint_io32_t		u1DRF23:1;
    uint_io32_t		u1DRF24:1;
    uint_io32_t		u1DRF25:1;
    uint_io32_t		u1DRF26:1;
    uint_io32_t		u1DRF27:1;
    uint_io32_t		u1DRF28:1;
    uint_io32_t		u1DRF29:1;
    uint_io32_t		u1DRF30:1;
    uint_io32_t		u1DRF31:1;
}stc_eic00_drfr_field_t;

typedef union un_eic00_drfr{
    uint_io32_t		u32Register;
    stc_eic00_drfr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_eic00_drfr_t;


typedef struct stc_eic00{
    un_eic00_enir_t	unENIR;	/* 0x00000000 */
    un_eic00_enisr_t	unENISR;	/* 0x00000004 */
    un_eic00_enicr_t	unENICR;	/* 0x00000008 */
    un_eic00_eirr_t	unEIRR;	/* 0x0000000C */
    un_eic00_eircr_t	unEIRCR;	/* 0x00000010 */
    un_eic00_nfer_t	unNFER;	/* 0x00000014 */
    un_eic00_nfesr_t	unNFESR;	/* 0x00000018 */
    un_eic00_nfecr_t	unNFECR;	/* 0x0000001C */
    un_eic00_elvrn_t	unELVR0;	/* 0x00000020 */
    un_eic00_elvrn_t	unELVR1;	/* 0x00000024 */
    un_eic00_elvrn_t	unELVR2;	/* 0x00000028 */
    un_eic00_elvrn_t	unELVR3;	/* 0x0000002C */
    un_eic00_nmir_t	unNMIR;	/* 0x00000030 */
    un_eic00_drer_t	unDRER;	/* 0x00000034 */
    un_eic00_dresr_t	unDRESR;	/* 0x00000038 */
    un_eic00_drecr_t	unDRECR;	/* 0x0000003C */
    un_eic00_drfr_t	unDRFR;	/* 0x00000040 */
    uint_io8_t	au8Reserved0[65468];	/* 0x00000044 */
}stc_eic00_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_eic00_t	stcEIC00;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 65536(0x10000) bytes */


#endif /* __S6J3200_EIC_H */
