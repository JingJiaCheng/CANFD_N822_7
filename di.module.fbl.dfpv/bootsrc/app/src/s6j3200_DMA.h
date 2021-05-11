/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_DMA_H
#define __S6J3200_DMA_H

#include "s6j3200io_basetypes.h"

/* DMA0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define DMA0	stcDMA0
#else /* __IO_DEFINE */
#define DMA0	(*((volatile stc_dma0_t*)0xB4700000))
#endif /* __IO_DEFINE */

/* A[0-15] */
#define DMA0_A0	(DMA0.unA0.u32Register)  /*@rg@*/
#define DMA0_A0_TC	(DMA0.unA0.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A0_TO	(DMA0.unA0.stcField.u4TO)  /*@bf@*/
#define DMA0_A0_BC	(DMA0.unA0.stcField.u4BC)  /*@bf@*/
#define DMA0_A0_BL	(DMA0.unA0.stcField.u2BL)  /*@bf@*/
#define DMA0_A0_AL	(*(volatile uint_io8_t*)0xB700001A)  /*@bfbba@*/
#define DMA0_A0_IS	(DMA0.unA0.stcField.u2IS)  /*@bf@*/
#define DMA0_A0_ST	(*(volatile uint_io8_t*)0xB700001D)  /*@bfbba@*/
#define DMA0_A0_PB	(*(volatile uint_io8_t*)0xB700001E)  /*@bfbba@*/
#define DMA0_A0_EB	(*(volatile uint_io8_t*)0xB700001F)  /*@bfbba@*/

#define DMA0_A1	(DMA0.unA1.u32Register)  /*@rg@*/
#define DMA0_A1_TC	(DMA0.unA1.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A1_TO	(DMA0.unA1.stcField.u4TO)  /*@bf@*/
#define DMA0_A1_BC	(DMA0.unA1.stcField.u4BC)  /*@bf@*/
#define DMA0_A1_BL	(DMA0.unA1.stcField.u2BL)  /*@bf@*/
#define DMA0_A1_AL	(*(volatile uint_io8_t*)0xB700021A)  /*@bfbba@*/
#define DMA0_A1_IS	(DMA0.unA1.stcField.u2IS)  /*@bf@*/
#define DMA0_A1_ST	(*(volatile uint_io8_t*)0xB700021D)  /*@bfbba@*/
#define DMA0_A1_PB	(*(volatile uint_io8_t*)0xB700021E)  /*@bfbba@*/
#define DMA0_A1_EB	(*(volatile uint_io8_t*)0xB700021F)  /*@bfbba@*/

#define DMA0_A2	(DMA0.unA2.u32Register)  /*@rg@*/
#define DMA0_A2_TC	(DMA0.unA2.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A2_TO	(DMA0.unA2.stcField.u4TO)  /*@bf@*/
#define DMA0_A2_BC	(DMA0.unA2.stcField.u4BC)  /*@bf@*/
#define DMA0_A2_BL	(DMA0.unA2.stcField.u2BL)  /*@bf@*/
#define DMA0_A2_AL	(*(volatile uint_io8_t*)0xB700041A)  /*@bfbba@*/
#define DMA0_A2_IS	(DMA0.unA2.stcField.u2IS)  /*@bf@*/
#define DMA0_A2_ST	(*(volatile uint_io8_t*)0xB700041D)  /*@bfbba@*/
#define DMA0_A2_PB	(*(volatile uint_io8_t*)0xB700041E)  /*@bfbba@*/
#define DMA0_A2_EB	(*(volatile uint_io8_t*)0xB700041F)  /*@bfbba@*/

#define DMA0_A3	(DMA0.unA3.u32Register)  /*@rg@*/
#define DMA0_A3_TC	(DMA0.unA3.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A3_TO	(DMA0.unA3.stcField.u4TO)  /*@bf@*/
#define DMA0_A3_BC	(DMA0.unA3.stcField.u4BC)  /*@bf@*/
#define DMA0_A3_BL	(DMA0.unA3.stcField.u2BL)  /*@bf@*/
#define DMA0_A3_AL	(*(volatile uint_io8_t*)0xB700061A)  /*@bfbba@*/
#define DMA0_A3_IS	(DMA0.unA3.stcField.u2IS)  /*@bf@*/
#define DMA0_A3_ST	(*(volatile uint_io8_t*)0xB700061D)  /*@bfbba@*/
#define DMA0_A3_PB	(*(volatile uint_io8_t*)0xB700061E)  /*@bfbba@*/
#define DMA0_A3_EB	(*(volatile uint_io8_t*)0xB700061F)  /*@bfbba@*/

#define DMA0_A4	(DMA0.unA4.u32Register)  /*@rg@*/
#define DMA0_A4_TC	(DMA0.unA4.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A4_TO	(DMA0.unA4.stcField.u4TO)  /*@bf@*/
#define DMA0_A4_BC	(DMA0.unA4.stcField.u4BC)  /*@bf@*/
#define DMA0_A4_BL	(DMA0.unA4.stcField.u2BL)  /*@bf@*/
#define DMA0_A4_AL	(*(volatile uint_io8_t*)0xB700081A)  /*@bfbba@*/
#define DMA0_A4_IS	(DMA0.unA4.stcField.u2IS)  /*@bf@*/
#define DMA0_A4_ST	(*(volatile uint_io8_t*)0xB700081D)  /*@bfbba@*/
#define DMA0_A4_PB	(*(volatile uint_io8_t*)0xB700081E)  /*@bfbba@*/
#define DMA0_A4_EB	(*(volatile uint_io8_t*)0xB700081F)  /*@bfbba@*/

#define DMA0_A5	(DMA0.unA5.u32Register)  /*@rg@*/
#define DMA0_A5_TC	(DMA0.unA5.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A5_TO	(DMA0.unA5.stcField.u4TO)  /*@bf@*/
#define DMA0_A5_BC	(DMA0.unA5.stcField.u4BC)  /*@bf@*/
#define DMA0_A5_BL	(DMA0.unA5.stcField.u2BL)  /*@bf@*/
#define DMA0_A5_AL	(*(volatile uint_io8_t*)0xB7000A1A)  /*@bfbba@*/
#define DMA0_A5_IS	(DMA0.unA5.stcField.u2IS)  /*@bf@*/
#define DMA0_A5_ST	(*(volatile uint_io8_t*)0xB7000A1D)  /*@bfbba@*/
#define DMA0_A5_PB	(*(volatile uint_io8_t*)0xB7000A1E)  /*@bfbba@*/
#define DMA0_A5_EB	(*(volatile uint_io8_t*)0xB7000A1F)  /*@bfbba@*/

#define DMA0_A6	(DMA0.unA6.u32Register)  /*@rg@*/
#define DMA0_A6_TC	(DMA0.unA6.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A6_TO	(DMA0.unA6.stcField.u4TO)  /*@bf@*/
#define DMA0_A6_BC	(DMA0.unA6.stcField.u4BC)  /*@bf@*/
#define DMA0_A6_BL	(DMA0.unA6.stcField.u2BL)  /*@bf@*/
#define DMA0_A6_AL	(*(volatile uint_io8_t*)0xB7000C1A)  /*@bfbba@*/
#define DMA0_A6_IS	(DMA0.unA6.stcField.u2IS)  /*@bf@*/
#define DMA0_A6_ST	(*(volatile uint_io8_t*)0xB7000C1D)  /*@bfbba@*/
#define DMA0_A6_PB	(*(volatile uint_io8_t*)0xB7000C1E)  /*@bfbba@*/
#define DMA0_A6_EB	(*(volatile uint_io8_t*)0xB7000C1F)  /*@bfbba@*/

#define DMA0_A7	(DMA0.unA7.u32Register)  /*@rg@*/
#define DMA0_A7_TC	(DMA0.unA7.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A7_TO	(DMA0.unA7.stcField.u4TO)  /*@bf@*/
#define DMA0_A7_BC	(DMA0.unA7.stcField.u4BC)  /*@bf@*/
#define DMA0_A7_BL	(DMA0.unA7.stcField.u2BL)  /*@bf@*/
#define DMA0_A7_AL	(*(volatile uint_io8_t*)0xB7000E1A)  /*@bfbba@*/
#define DMA0_A7_IS	(DMA0.unA7.stcField.u2IS)  /*@bf@*/
#define DMA0_A7_ST	(*(volatile uint_io8_t*)0xB7000E1D)  /*@bfbba@*/
#define DMA0_A7_PB	(*(volatile uint_io8_t*)0xB7000E1E)  /*@bfbba@*/
#define DMA0_A7_EB	(*(volatile uint_io8_t*)0xB7000E1F)  /*@bfbba@*/

#define DMA0_A8	(DMA0.unA8.u32Register)  /*@rg@*/
#define DMA0_A8_TC	(DMA0.unA8.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A8_TO	(DMA0.unA8.stcField.u4TO)  /*@bf@*/
#define DMA0_A8_BC	(DMA0.unA8.stcField.u4BC)  /*@bf@*/
#define DMA0_A8_BL	(DMA0.unA8.stcField.u2BL)  /*@bf@*/
#define DMA0_A8_AL	(*(volatile uint_io8_t*)0xB700101A)  /*@bfbba@*/
#define DMA0_A8_IS	(DMA0.unA8.stcField.u2IS)  /*@bf@*/
#define DMA0_A8_ST	(*(volatile uint_io8_t*)0xB700101D)  /*@bfbba@*/
#define DMA0_A8_PB	(*(volatile uint_io8_t*)0xB700101E)  /*@bfbba@*/
#define DMA0_A8_EB	(*(volatile uint_io8_t*)0xB700101F)  /*@bfbba@*/

#define DMA0_A9	(DMA0.unA9.u32Register)  /*@rg@*/
#define DMA0_A9_TC	(DMA0.unA9.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A9_TO	(DMA0.unA9.stcField.u4TO)  /*@bf@*/
#define DMA0_A9_BC	(DMA0.unA9.stcField.u4BC)  /*@bf@*/
#define DMA0_A9_BL	(DMA0.unA9.stcField.u2BL)  /*@bf@*/
#define DMA0_A9_AL	(*(volatile uint_io8_t*)0xB700121A)  /*@bfbba@*/
#define DMA0_A9_IS	(DMA0.unA9.stcField.u2IS)  /*@bf@*/
#define DMA0_A9_ST	(*(volatile uint_io8_t*)0xB700121D)  /*@bfbba@*/
#define DMA0_A9_PB	(*(volatile uint_io8_t*)0xB700121E)  /*@bfbba@*/
#define DMA0_A9_EB	(*(volatile uint_io8_t*)0xB700121F)  /*@bfbba@*/

#define DMA0_A10	(DMA0.unA10.u32Register)  /*@rg@*/
#define DMA0_A10_TC	(DMA0.unA10.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A10_TO	(DMA0.unA10.stcField.u4TO)  /*@bf@*/
#define DMA0_A10_BC	(DMA0.unA10.stcField.u4BC)  /*@bf@*/
#define DMA0_A10_BL	(DMA0.unA10.stcField.u2BL)  /*@bf@*/
#define DMA0_A10_AL	(*(volatile uint_io8_t*)0xB700141A)  /*@bfbba@*/
#define DMA0_A10_IS	(DMA0.unA10.stcField.u2IS)  /*@bf@*/
#define DMA0_A10_ST	(*(volatile uint_io8_t*)0xB700141D)  /*@bfbba@*/
#define DMA0_A10_PB	(*(volatile uint_io8_t*)0xB700141E)  /*@bfbba@*/
#define DMA0_A10_EB	(*(volatile uint_io8_t*)0xB700141F)  /*@bfbba@*/

#define DMA0_A11	(DMA0.unA11.u32Register)  /*@rg@*/
#define DMA0_A11_TC	(DMA0.unA11.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A11_TO	(DMA0.unA11.stcField.u4TO)  /*@bf@*/
#define DMA0_A11_BC	(DMA0.unA11.stcField.u4BC)  /*@bf@*/
#define DMA0_A11_BL	(DMA0.unA11.stcField.u2BL)  /*@bf@*/
#define DMA0_A11_AL	(*(volatile uint_io8_t*)0xB700161A)  /*@bfbba@*/
#define DMA0_A11_IS	(DMA0.unA11.stcField.u2IS)  /*@bf@*/
#define DMA0_A11_ST	(*(volatile uint_io8_t*)0xB700161D)  /*@bfbba@*/
#define DMA0_A11_PB	(*(volatile uint_io8_t*)0xB700161E)  /*@bfbba@*/
#define DMA0_A11_EB	(*(volatile uint_io8_t*)0xB700161F)  /*@bfbba@*/

#define DMA0_A12	(DMA0.unA12.u32Register)  /*@rg@*/
#define DMA0_A12_TC	(DMA0.unA12.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A12_TO	(DMA0.unA12.stcField.u4TO)  /*@bf@*/
#define DMA0_A12_BC	(DMA0.unA12.stcField.u4BC)  /*@bf@*/
#define DMA0_A12_BL	(DMA0.unA12.stcField.u2BL)  /*@bf@*/
#define DMA0_A12_AL	(*(volatile uint_io8_t*)0xB700181A)  /*@bfbba@*/
#define DMA0_A12_IS	(DMA0.unA12.stcField.u2IS)  /*@bf@*/
#define DMA0_A12_ST	(*(volatile uint_io8_t*)0xB700181D)  /*@bfbba@*/
#define DMA0_A12_PB	(*(volatile uint_io8_t*)0xB700181E)  /*@bfbba@*/
#define DMA0_A12_EB	(*(volatile uint_io8_t*)0xB700181F)  /*@bfbba@*/

#define DMA0_A13	(DMA0.unA13.u32Register)  /*@rg@*/
#define DMA0_A13_TC	(DMA0.unA13.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A13_TO	(DMA0.unA13.stcField.u4TO)  /*@bf@*/
#define DMA0_A13_BC	(DMA0.unA13.stcField.u4BC)  /*@bf@*/
#define DMA0_A13_BL	(DMA0.unA13.stcField.u2BL)  /*@bf@*/
#define DMA0_A13_AL	(*(volatile uint_io8_t*)0xB7001A1A)  /*@bfbba@*/
#define DMA0_A13_IS	(DMA0.unA13.stcField.u2IS)  /*@bf@*/
#define DMA0_A13_ST	(*(volatile uint_io8_t*)0xB7001A1D)  /*@bfbba@*/
#define DMA0_A13_PB	(*(volatile uint_io8_t*)0xB7001A1E)  /*@bfbba@*/
#define DMA0_A13_EB	(*(volatile uint_io8_t*)0xB7001A1F)  /*@bfbba@*/

#define DMA0_A14	(DMA0.unA14.u32Register)  /*@rg@*/
#define DMA0_A14_TC	(DMA0.unA14.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A14_TO	(DMA0.unA14.stcField.u4TO)  /*@bf@*/
#define DMA0_A14_BC	(DMA0.unA14.stcField.u4BC)  /*@bf@*/
#define DMA0_A14_BL	(DMA0.unA14.stcField.u2BL)  /*@bf@*/
#define DMA0_A14_AL	(*(volatile uint_io8_t*)0xB7001C1A)  /*@bfbba@*/
#define DMA0_A14_IS	(DMA0.unA14.stcField.u2IS)  /*@bf@*/
#define DMA0_A14_ST	(*(volatile uint_io8_t*)0xB7001C1D)  /*@bfbba@*/
#define DMA0_A14_PB	(*(volatile uint_io8_t*)0xB7001C1E)  /*@bfbba@*/
#define DMA0_A14_EB	(*(volatile uint_io8_t*)0xB7001C1F)  /*@bfbba@*/

#define DMA0_A15	(DMA0.unA15.u32Register)  /*@rg@*/
#define DMA0_A15_TC	(DMA0.unA15.au16Halfword[0])  /*@bfhword@*/
#define DMA0_A15_TO	(DMA0.unA15.stcField.u4TO)  /*@bf@*/
#define DMA0_A15_BC	(DMA0.unA15.stcField.u4BC)  /*@bf@*/
#define DMA0_A15_BL	(DMA0.unA15.stcField.u2BL)  /*@bf@*/
#define DMA0_A15_AL	(*(volatile uint_io8_t*)0xB7001E1A)  /*@bfbba@*/
#define DMA0_A15_IS	(DMA0.unA15.stcField.u2IS)  /*@bf@*/
#define DMA0_A15_ST	(*(volatile uint_io8_t*)0xB7001E1D)  /*@bfbba@*/
#define DMA0_A15_PB	(*(volatile uint_io8_t*)0xB7001E1E)  /*@bfbba@*/
#define DMA0_A15_EB	(*(volatile uint_io8_t*)0xB7001E1F)  /*@bfbba@*/

typedef struct stc_dma0_an_field{
    uint_io32_t		u16TC:16;
    uint_io32_t		u4TO:4;
    uint_io32_t		u4BC:4;
    uint_io32_t		u2BL:2;
    uint_io32_t		u1AL:1;
    uint_io32_t		u2IS:2;
    uint_io32_t		u1ST:1;
    uint_io32_t		u1PB:1;
    uint_io32_t		u1EB:1;
}stc_dma0_an_field_t;

typedef union un_dma0_an{
    uint_io32_t		u32Register;
    stc_dma0_an_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_an_t;

/* B[0-15] */
#define DMA0_B0	(DMA0.unB0.u32Register)  /*@rg@*/
#define DMA0_B0_PN	(DMA0.unB0.stcField.u7PN)  /*@bf@*/
#define DMA0_B0_DP	(DMA0.unB0.stcField.u4DP)  /*@bf@*/
#define DMA0_B0_SP	(DMA0.unB0.stcField.u4SP)  /*@bf@*/
#define DMA0_B0_SS	(DMA0.unB0.stcField.u3SS)  /*@bf@*/
#define DMA0_B0_CI	(*(volatile uint_io8_t*)0xB7000033)  /*@bfbba@*/
#define DMA0_B0_EI	(*(volatile uint_io8_t*)0xB7000034)  /*@bfbba@*/
#define DMA0_B0_SR	(*(volatile uint_io8_t*)0xB7000039)  /*@bfbba@*/
#define DMA0_B0_TW	(DMA0.unB0.stcField.u2TW)  /*@bf@*/
#define DMA0_B0_MS	(DMA0.unB0.stcField.u2MS)  /*@bf@*/
#define DMA0_B0_EQ	(*(volatile uint_io8_t*)0xB700003E)  /*@bfbba@*/
#define DMA0_B0_DQ	(*(volatile uint_io8_t*)0xB700003F)  /*@bfbba@*/

#define DMA0_B1	(DMA0.unB1.u32Register)  /*@rg@*/
#define DMA0_B1_PN	(DMA0.unB1.stcField.u7PN)  /*@bf@*/
#define DMA0_B1_DP	(DMA0.unB1.stcField.u4DP)  /*@bf@*/
#define DMA0_B1_SP	(DMA0.unB1.stcField.u4SP)  /*@bf@*/
#define DMA0_B1_SS	(DMA0.unB1.stcField.u3SS)  /*@bf@*/
#define DMA0_B1_CI	(*(volatile uint_io8_t*)0xB7000233)  /*@bfbba@*/
#define DMA0_B1_EI	(*(volatile uint_io8_t*)0xB7000234)  /*@bfbba@*/
#define DMA0_B1_SR	(*(volatile uint_io8_t*)0xB7000239)  /*@bfbba@*/
#define DMA0_B1_TW	(DMA0.unB1.stcField.u2TW)  /*@bf@*/
#define DMA0_B1_MS	(DMA0.unB1.stcField.u2MS)  /*@bf@*/
#define DMA0_B1_EQ	(*(volatile uint_io8_t*)0xB700023E)  /*@bfbba@*/
#define DMA0_B1_DQ	(*(volatile uint_io8_t*)0xB700023F)  /*@bfbba@*/

#define DMA0_B2	(DMA0.unB2.u32Register)  /*@rg@*/
#define DMA0_B2_PN	(DMA0.unB2.stcField.u7PN)  /*@bf@*/
#define DMA0_B2_DP	(DMA0.unB2.stcField.u4DP)  /*@bf@*/
#define DMA0_B2_SP	(DMA0.unB2.stcField.u4SP)  /*@bf@*/
#define DMA0_B2_SS	(DMA0.unB2.stcField.u3SS)  /*@bf@*/
#define DMA0_B2_CI	(*(volatile uint_io8_t*)0xB7000433)  /*@bfbba@*/
#define DMA0_B2_EI	(*(volatile uint_io8_t*)0xB7000434)  /*@bfbba@*/
#define DMA0_B2_SR	(*(volatile uint_io8_t*)0xB7000439)  /*@bfbba@*/
#define DMA0_B2_TW	(DMA0.unB2.stcField.u2TW)  /*@bf@*/
#define DMA0_B2_MS	(DMA0.unB2.stcField.u2MS)  /*@bf@*/
#define DMA0_B2_EQ	(*(volatile uint_io8_t*)0xB700043E)  /*@bfbba@*/
#define DMA0_B2_DQ	(*(volatile uint_io8_t*)0xB700043F)  /*@bfbba@*/

#define DMA0_B3	(DMA0.unB3.u32Register)  /*@rg@*/
#define DMA0_B3_PN	(DMA0.unB3.stcField.u7PN)  /*@bf@*/
#define DMA0_B3_DP	(DMA0.unB3.stcField.u4DP)  /*@bf@*/
#define DMA0_B3_SP	(DMA0.unB3.stcField.u4SP)  /*@bf@*/
#define DMA0_B3_SS	(DMA0.unB3.stcField.u3SS)  /*@bf@*/
#define DMA0_B3_CI	(*(volatile uint_io8_t*)0xB7000633)  /*@bfbba@*/
#define DMA0_B3_EI	(*(volatile uint_io8_t*)0xB7000634)  /*@bfbba@*/
#define DMA0_B3_SR	(*(volatile uint_io8_t*)0xB7000639)  /*@bfbba@*/
#define DMA0_B3_TW	(DMA0.unB3.stcField.u2TW)  /*@bf@*/
#define DMA0_B3_MS	(DMA0.unB3.stcField.u2MS)  /*@bf@*/
#define DMA0_B3_EQ	(*(volatile uint_io8_t*)0xB700063E)  /*@bfbba@*/
#define DMA0_B3_DQ	(*(volatile uint_io8_t*)0xB700063F)  /*@bfbba@*/

#define DMA0_B4	(DMA0.unB4.u32Register)  /*@rg@*/
#define DMA0_B4_PN	(DMA0.unB4.stcField.u7PN)  /*@bf@*/
#define DMA0_B4_DP	(DMA0.unB4.stcField.u4DP)  /*@bf@*/
#define DMA0_B4_SP	(DMA0.unB4.stcField.u4SP)  /*@bf@*/
#define DMA0_B4_SS	(DMA0.unB4.stcField.u3SS)  /*@bf@*/
#define DMA0_B4_CI	(*(volatile uint_io8_t*)0xB7000833)  /*@bfbba@*/
#define DMA0_B4_EI	(*(volatile uint_io8_t*)0xB7000834)  /*@bfbba@*/
#define DMA0_B4_SR	(*(volatile uint_io8_t*)0xB7000839)  /*@bfbba@*/
#define DMA0_B4_TW	(DMA0.unB4.stcField.u2TW)  /*@bf@*/
#define DMA0_B4_MS	(DMA0.unB4.stcField.u2MS)  /*@bf@*/
#define DMA0_B4_EQ	(*(volatile uint_io8_t*)0xB700083E)  /*@bfbba@*/
#define DMA0_B4_DQ	(*(volatile uint_io8_t*)0xB700083F)  /*@bfbba@*/

#define DMA0_B5	(DMA0.unB5.u32Register)  /*@rg@*/
#define DMA0_B5_PN	(DMA0.unB5.stcField.u7PN)  /*@bf@*/
#define DMA0_B5_DP	(DMA0.unB5.stcField.u4DP)  /*@bf@*/
#define DMA0_B5_SP	(DMA0.unB5.stcField.u4SP)  /*@bf@*/
#define DMA0_B5_SS	(DMA0.unB5.stcField.u3SS)  /*@bf@*/
#define DMA0_B5_CI	(*(volatile uint_io8_t*)0xB7000A33)  /*@bfbba@*/
#define DMA0_B5_EI	(*(volatile uint_io8_t*)0xB7000A34)  /*@bfbba@*/
#define DMA0_B5_SR	(*(volatile uint_io8_t*)0xB7000A39)  /*@bfbba@*/
#define DMA0_B5_TW	(DMA0.unB5.stcField.u2TW)  /*@bf@*/
#define DMA0_B5_MS	(DMA0.unB5.stcField.u2MS)  /*@bf@*/
#define DMA0_B5_EQ	(*(volatile uint_io8_t*)0xB7000A3E)  /*@bfbba@*/
#define DMA0_B5_DQ	(*(volatile uint_io8_t*)0xB7000A3F)  /*@bfbba@*/

#define DMA0_B6	(DMA0.unB6.u32Register)  /*@rg@*/
#define DMA0_B6_PN	(DMA0.unB6.stcField.u7PN)  /*@bf@*/
#define DMA0_B6_DP	(DMA0.unB6.stcField.u4DP)  /*@bf@*/
#define DMA0_B6_SP	(DMA0.unB6.stcField.u4SP)  /*@bf@*/
#define DMA0_B6_SS	(DMA0.unB6.stcField.u3SS)  /*@bf@*/
#define DMA0_B6_CI	(*(volatile uint_io8_t*)0xB7000C33)  /*@bfbba@*/
#define DMA0_B6_EI	(*(volatile uint_io8_t*)0xB7000C34)  /*@bfbba@*/
#define DMA0_B6_SR	(*(volatile uint_io8_t*)0xB7000C39)  /*@bfbba@*/
#define DMA0_B6_TW	(DMA0.unB6.stcField.u2TW)  /*@bf@*/
#define DMA0_B6_MS	(DMA0.unB6.stcField.u2MS)  /*@bf@*/
#define DMA0_B6_EQ	(*(volatile uint_io8_t*)0xB7000C3E)  /*@bfbba@*/
#define DMA0_B6_DQ	(*(volatile uint_io8_t*)0xB7000C3F)  /*@bfbba@*/

#define DMA0_B7	(DMA0.unB7.u32Register)  /*@rg@*/
#define DMA0_B7_PN	(DMA0.unB7.stcField.u7PN)  /*@bf@*/
#define DMA0_B7_DP	(DMA0.unB7.stcField.u4DP)  /*@bf@*/
#define DMA0_B7_SP	(DMA0.unB7.stcField.u4SP)  /*@bf@*/
#define DMA0_B7_SS	(DMA0.unB7.stcField.u3SS)  /*@bf@*/
#define DMA0_B7_CI	(*(volatile uint_io8_t*)0xB7000E33)  /*@bfbba@*/
#define DMA0_B7_EI	(*(volatile uint_io8_t*)0xB7000E34)  /*@bfbba@*/
#define DMA0_B7_SR	(*(volatile uint_io8_t*)0xB7000E39)  /*@bfbba@*/
#define DMA0_B7_TW	(DMA0.unB7.stcField.u2TW)  /*@bf@*/
#define DMA0_B7_MS	(DMA0.unB7.stcField.u2MS)  /*@bf@*/
#define DMA0_B7_EQ	(*(volatile uint_io8_t*)0xB7000E3E)  /*@bfbba@*/
#define DMA0_B7_DQ	(*(volatile uint_io8_t*)0xB7000E3F)  /*@bfbba@*/

#define DMA0_B8	(DMA0.unB8.u32Register)  /*@rg@*/
#define DMA0_B8_PN	(DMA0.unB8.stcField.u7PN)  /*@bf@*/
#define DMA0_B8_DP	(DMA0.unB8.stcField.u4DP)  /*@bf@*/
#define DMA0_B8_SP	(DMA0.unB8.stcField.u4SP)  /*@bf@*/
#define DMA0_B8_SS	(DMA0.unB8.stcField.u3SS)  /*@bf@*/
#define DMA0_B8_CI	(*(volatile uint_io8_t*)0xB7001033)  /*@bfbba@*/
#define DMA0_B8_EI	(*(volatile uint_io8_t*)0xB7001034)  /*@bfbba@*/
#define DMA0_B8_SR	(*(volatile uint_io8_t*)0xB7001039)  /*@bfbba@*/
#define DMA0_B8_TW	(DMA0.unB8.stcField.u2TW)  /*@bf@*/
#define DMA0_B8_MS	(DMA0.unB8.stcField.u2MS)  /*@bf@*/
#define DMA0_B8_EQ	(*(volatile uint_io8_t*)0xB700103E)  /*@bfbba@*/
#define DMA0_B8_DQ	(*(volatile uint_io8_t*)0xB700103F)  /*@bfbba@*/

#define DMA0_B9	(DMA0.unB9.u32Register)  /*@rg@*/
#define DMA0_B9_PN	(DMA0.unB9.stcField.u7PN)  /*@bf@*/
#define DMA0_B9_DP	(DMA0.unB9.stcField.u4DP)  /*@bf@*/
#define DMA0_B9_SP	(DMA0.unB9.stcField.u4SP)  /*@bf@*/
#define DMA0_B9_SS	(DMA0.unB9.stcField.u3SS)  /*@bf@*/
#define DMA0_B9_CI	(*(volatile uint_io8_t*)0xB7001233)  /*@bfbba@*/
#define DMA0_B9_EI	(*(volatile uint_io8_t*)0xB7001234)  /*@bfbba@*/
#define DMA0_B9_SR	(*(volatile uint_io8_t*)0xB7001239)  /*@bfbba@*/
#define DMA0_B9_TW	(DMA0.unB9.stcField.u2TW)  /*@bf@*/
#define DMA0_B9_MS	(DMA0.unB9.stcField.u2MS)  /*@bf@*/
#define DMA0_B9_EQ	(*(volatile uint_io8_t*)0xB700123E)  /*@bfbba@*/
#define DMA0_B9_DQ	(*(volatile uint_io8_t*)0xB700123F)  /*@bfbba@*/

#define DMA0_B10	(DMA0.unB10.u32Register)  /*@rg@*/
#define DMA0_B10_PN	(DMA0.unB10.stcField.u7PN)  /*@bf@*/
#define DMA0_B10_DP	(DMA0.unB10.stcField.u4DP)  /*@bf@*/
#define DMA0_B10_SP	(DMA0.unB10.stcField.u4SP)  /*@bf@*/
#define DMA0_B10_SS	(DMA0.unB10.stcField.u3SS)  /*@bf@*/
#define DMA0_B10_CI	(*(volatile uint_io8_t*)0xB7001433)  /*@bfbba@*/
#define DMA0_B10_EI	(*(volatile uint_io8_t*)0xB7001434)  /*@bfbba@*/
#define DMA0_B10_SR	(*(volatile uint_io8_t*)0xB7001439)  /*@bfbba@*/
#define DMA0_B10_TW	(DMA0.unB10.stcField.u2TW)  /*@bf@*/
#define DMA0_B10_MS	(DMA0.unB10.stcField.u2MS)  /*@bf@*/
#define DMA0_B10_EQ	(*(volatile uint_io8_t*)0xB700143E)  /*@bfbba@*/
#define DMA0_B10_DQ	(*(volatile uint_io8_t*)0xB700143F)  /*@bfbba@*/

#define DMA0_B11	(DMA0.unB11.u32Register)  /*@rg@*/
#define DMA0_B11_PN	(DMA0.unB11.stcField.u7PN)  /*@bf@*/
#define DMA0_B11_DP	(DMA0.unB11.stcField.u4DP)  /*@bf@*/
#define DMA0_B11_SP	(DMA0.unB11.stcField.u4SP)  /*@bf@*/
#define DMA0_B11_SS	(DMA0.unB11.stcField.u3SS)  /*@bf@*/
#define DMA0_B11_CI	(*(volatile uint_io8_t*)0xB7001633)  /*@bfbba@*/
#define DMA0_B11_EI	(*(volatile uint_io8_t*)0xB7001634)  /*@bfbba@*/
#define DMA0_B11_SR	(*(volatile uint_io8_t*)0xB7001639)  /*@bfbba@*/
#define DMA0_B11_TW	(DMA0.unB11.stcField.u2TW)  /*@bf@*/
#define DMA0_B11_MS	(DMA0.unB11.stcField.u2MS)  /*@bf@*/
#define DMA0_B11_EQ	(*(volatile uint_io8_t*)0xB700163E)  /*@bfbba@*/
#define DMA0_B11_DQ	(*(volatile uint_io8_t*)0xB700163F)  /*@bfbba@*/

#define DMA0_B12	(DMA0.unB12.u32Register)  /*@rg@*/
#define DMA0_B12_PN	(DMA0.unB12.stcField.u7PN)  /*@bf@*/
#define DMA0_B12_DP	(DMA0.unB12.stcField.u4DP)  /*@bf@*/
#define DMA0_B12_SP	(DMA0.unB12.stcField.u4SP)  /*@bf@*/
#define DMA0_B12_SS	(DMA0.unB12.stcField.u3SS)  /*@bf@*/
#define DMA0_B12_CI	(*(volatile uint_io8_t*)0xB7001833)  /*@bfbba@*/
#define DMA0_B12_EI	(*(volatile uint_io8_t*)0xB7001834)  /*@bfbba@*/
#define DMA0_B12_SR	(*(volatile uint_io8_t*)0xB7001839)  /*@bfbba@*/
#define DMA0_B12_TW	(DMA0.unB12.stcField.u2TW)  /*@bf@*/
#define DMA0_B12_MS	(DMA0.unB12.stcField.u2MS)  /*@bf@*/
#define DMA0_B12_EQ	(*(volatile uint_io8_t*)0xB700183E)  /*@bfbba@*/
#define DMA0_B12_DQ	(*(volatile uint_io8_t*)0xB700183F)  /*@bfbba@*/

#define DMA0_B13	(DMA0.unB13.u32Register)  /*@rg@*/
#define DMA0_B13_PN	(DMA0.unB13.stcField.u7PN)  /*@bf@*/
#define DMA0_B13_DP	(DMA0.unB13.stcField.u4DP)  /*@bf@*/
#define DMA0_B13_SP	(DMA0.unB13.stcField.u4SP)  /*@bf@*/
#define DMA0_B13_SS	(DMA0.unB13.stcField.u3SS)  /*@bf@*/
#define DMA0_B13_CI	(*(volatile uint_io8_t*)0xB7001A33)  /*@bfbba@*/
#define DMA0_B13_EI	(*(volatile uint_io8_t*)0xB7001A34)  /*@bfbba@*/
#define DMA0_B13_SR	(*(volatile uint_io8_t*)0xB7001A39)  /*@bfbba@*/
#define DMA0_B13_TW	(DMA0.unB13.stcField.u2TW)  /*@bf@*/
#define DMA0_B13_MS	(DMA0.unB13.stcField.u2MS)  /*@bf@*/
#define DMA0_B13_EQ	(*(volatile uint_io8_t*)0xB7001A3E)  /*@bfbba@*/
#define DMA0_B13_DQ	(*(volatile uint_io8_t*)0xB7001A3F)  /*@bfbba@*/

#define DMA0_B14	(DMA0.unB14.u32Register)  /*@rg@*/
#define DMA0_B14_PN	(DMA0.unB14.stcField.u7PN)  /*@bf@*/
#define DMA0_B14_DP	(DMA0.unB14.stcField.u4DP)  /*@bf@*/
#define DMA0_B14_SP	(DMA0.unB14.stcField.u4SP)  /*@bf@*/
#define DMA0_B14_SS	(DMA0.unB14.stcField.u3SS)  /*@bf@*/
#define DMA0_B14_CI	(*(volatile uint_io8_t*)0xB7001C33)  /*@bfbba@*/
#define DMA0_B14_EI	(*(volatile uint_io8_t*)0xB7001C34)  /*@bfbba@*/
#define DMA0_B14_SR	(*(volatile uint_io8_t*)0xB7001C39)  /*@bfbba@*/
#define DMA0_B14_TW	(DMA0.unB14.stcField.u2TW)  /*@bf@*/
#define DMA0_B14_MS	(DMA0.unB14.stcField.u2MS)  /*@bf@*/
#define DMA0_B14_EQ	(*(volatile uint_io8_t*)0xB7001C3E)  /*@bfbba@*/
#define DMA0_B14_DQ	(*(volatile uint_io8_t*)0xB7001C3F)  /*@bfbba@*/

#define DMA0_B15	(DMA0.unB15.u32Register)  /*@rg@*/
#define DMA0_B15_PN	(DMA0.unB15.stcField.u7PN)  /*@bf@*/
#define DMA0_B15_DP	(DMA0.unB15.stcField.u4DP)  /*@bf@*/
#define DMA0_B15_SP	(DMA0.unB15.stcField.u4SP)  /*@bf@*/
#define DMA0_B15_SS	(DMA0.unB15.stcField.u3SS)  /*@bf@*/
#define DMA0_B15_CI	(*(volatile uint_io8_t*)0xB7001E33)  /*@bfbba@*/
#define DMA0_B15_EI	(*(volatile uint_io8_t*)0xB7001E34)  /*@bfbba@*/
#define DMA0_B15_SR	(*(volatile uint_io8_t*)0xB7001E39)  /*@bfbba@*/
#define DMA0_B15_TW	(DMA0.unB15.stcField.u2TW)  /*@bf@*/
#define DMA0_B15_MS	(DMA0.unB15.stcField.u2MS)  /*@bf@*/
#define DMA0_B15_EQ	(*(volatile uint_io8_t*)0xB7001E3E)  /*@bfbba@*/
#define DMA0_B15_DQ	(*(volatile uint_io8_t*)0xB7001E3F)  /*@bfbba@*/

typedef struct stc_dma0_bn_field{
    uint_io32_t		u7PN:7;
    uint_io32_t		:1;
    uint_io32_t		u4DP:4;
    uint_io32_t		u4SP:4;
    uint_io32_t		u3SS:3;
    uint_io32_t		u1CI:1;
    uint_io32_t		u1EI:1;
    uint_io32_t		:4;
    uint_io32_t		u1SR:1;
    uint_io32_t		u2TW:2;
    uint_io32_t		u2MS:2;
    uint_io32_t		u1EQ:1;
    uint_io32_t		u1DQ:1;
}stc_dma0_bn_field_t;

typedef union un_dma0_bn{
    uint_io32_t		u32Register;
    stc_dma0_bn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_bn_t;

/* SA[0-15] */
#define DMA0_SA0	(DMA0.unSA0.u32Register)  /*@rg@*/
#define DMA0_SA0_SA	DMA0_SA0  /*@bfrg@*/

#define DMA0_SA1	(DMA0.unSA1.u32Register)  /*@rg@*/
#define DMA0_SA1_SA	DMA0_SA1  /*@bfrg@*/

#define DMA0_SA2	(DMA0.unSA2.u32Register)  /*@rg@*/
#define DMA0_SA2_SA	DMA0_SA2  /*@bfrg@*/

#define DMA0_SA3	(DMA0.unSA3.u32Register)  /*@rg@*/
#define DMA0_SA3_SA	DMA0_SA3  /*@bfrg@*/

#define DMA0_SA4	(DMA0.unSA4.u32Register)  /*@rg@*/
#define DMA0_SA4_SA	DMA0_SA4  /*@bfrg@*/

#define DMA0_SA5	(DMA0.unSA5.u32Register)  /*@rg@*/
#define DMA0_SA5_SA	DMA0_SA5  /*@bfrg@*/

#define DMA0_SA6	(DMA0.unSA6.u32Register)  /*@rg@*/
#define DMA0_SA6_SA	DMA0_SA6  /*@bfrg@*/

#define DMA0_SA7	(DMA0.unSA7.u32Register)  /*@rg@*/
#define DMA0_SA7_SA	DMA0_SA7  /*@bfrg@*/

#define DMA0_SA8	(DMA0.unSA8.u32Register)  /*@rg@*/
#define DMA0_SA8_SA	DMA0_SA8  /*@bfrg@*/

#define DMA0_SA9	(DMA0.unSA9.u32Register)  /*@rg@*/
#define DMA0_SA9_SA	DMA0_SA9  /*@bfrg@*/

#define DMA0_SA10	(DMA0.unSA10.u32Register)  /*@rg@*/
#define DMA0_SA10_SA	DMA0_SA10  /*@bfrg@*/

#define DMA0_SA11	(DMA0.unSA11.u32Register)  /*@rg@*/
#define DMA0_SA11_SA	DMA0_SA11  /*@bfrg@*/

#define DMA0_SA12	(DMA0.unSA12.u32Register)  /*@rg@*/
#define DMA0_SA12_SA	DMA0_SA12  /*@bfrg@*/

#define DMA0_SA13	(DMA0.unSA13.u32Register)  /*@rg@*/
#define DMA0_SA13_SA	DMA0_SA13  /*@bfrg@*/

#define DMA0_SA14	(DMA0.unSA14.u32Register)  /*@rg@*/
#define DMA0_SA14_SA	DMA0_SA14  /*@bfrg@*/

#define DMA0_SA15	(DMA0.unSA15.u32Register)  /*@rg@*/
#define DMA0_SA15_SA	DMA0_SA15  /*@bfrg@*/

typedef union un_dma0_san{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_san_t;

/* DA[0-15] */
#define DMA0_DA0	(DMA0.unDA0.u32Register)  /*@rg@*/
#define DMA0_DA0_DA	DMA0_DA0  /*@bfrg@*/

#define DMA0_DA1	(DMA0.unDA1.u32Register)  /*@rg@*/
#define DMA0_DA1_DA	DMA0_DA1  /*@bfrg@*/

#define DMA0_DA2	(DMA0.unDA2.u32Register)  /*@rg@*/
#define DMA0_DA2_DA	DMA0_DA2  /*@bfrg@*/

#define DMA0_DA3	(DMA0.unDA3.u32Register)  /*@rg@*/
#define DMA0_DA3_DA	DMA0_DA3  /*@bfrg@*/

#define DMA0_DA4	(DMA0.unDA4.u32Register)  /*@rg@*/
#define DMA0_DA4_DA	DMA0_DA4  /*@bfrg@*/

#define DMA0_DA5	(DMA0.unDA5.u32Register)  /*@rg@*/
#define DMA0_DA5_DA	DMA0_DA5  /*@bfrg@*/

#define DMA0_DA6	(DMA0.unDA6.u32Register)  /*@rg@*/
#define DMA0_DA6_DA	DMA0_DA6  /*@bfrg@*/

#define DMA0_DA7	(DMA0.unDA7.u32Register)  /*@rg@*/
#define DMA0_DA7_DA	DMA0_DA7  /*@bfrg@*/

#define DMA0_DA8	(DMA0.unDA8.u32Register)  /*@rg@*/
#define DMA0_DA8_DA	DMA0_DA8  /*@bfrg@*/

#define DMA0_DA9	(DMA0.unDA9.u32Register)  /*@rg@*/
#define DMA0_DA9_DA	DMA0_DA9  /*@bfrg@*/

#define DMA0_DA10	(DMA0.unDA10.u32Register)  /*@rg@*/
#define DMA0_DA10_DA	DMA0_DA10  /*@bfrg@*/

#define DMA0_DA11	(DMA0.unDA11.u32Register)  /*@rg@*/
#define DMA0_DA11_DA	DMA0_DA11  /*@bfrg@*/

#define DMA0_DA12	(DMA0.unDA12.u32Register)  /*@rg@*/
#define DMA0_DA12_DA	DMA0_DA12  /*@bfrg@*/

#define DMA0_DA13	(DMA0.unDA13.u32Register)  /*@rg@*/
#define DMA0_DA13_DA	DMA0_DA13  /*@bfrg@*/

#define DMA0_DA14	(DMA0.unDA14.u32Register)  /*@rg@*/
#define DMA0_DA14_DA	DMA0_DA14  /*@bfrg@*/

#define DMA0_DA15	(DMA0.unDA15.u32Register)  /*@rg@*/
#define DMA0_DA15_DA	DMA0_DA15  /*@bfrg@*/

typedef union un_dma0_dan{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_dan_t;

/* C[0-15] */
#define DMA0_C0	(DMA0.unC0.u32Register)  /*@rg@*/
#define DMA0_C0_CD	(*(volatile uint_io8_t*)0xB7000080)  /*@bfbba@*/
#define DMA0_C0_CE	(*(volatile uint_io8_t*)0xB7000088)  /*@bfbba@*/

#define DMA0_C1	(DMA0.unC1.u32Register)  /*@rg@*/
#define DMA0_C1_CD	(*(volatile uint_io8_t*)0xB7000280)  /*@bfbba@*/
#define DMA0_C1_CE	(*(volatile uint_io8_t*)0xB7000288)  /*@bfbba@*/

#define DMA0_C2	(DMA0.unC2.u32Register)  /*@rg@*/
#define DMA0_C2_CD	(*(volatile uint_io8_t*)0xB7000480)  /*@bfbba@*/
#define DMA0_C2_CE	(*(volatile uint_io8_t*)0xB7000488)  /*@bfbba@*/

#define DMA0_C3	(DMA0.unC3.u32Register)  /*@rg@*/
#define DMA0_C3_CD	(*(volatile uint_io8_t*)0xB7000680)  /*@bfbba@*/
#define DMA0_C3_CE	(*(volatile uint_io8_t*)0xB7000688)  /*@bfbba@*/

#define DMA0_C4	(DMA0.unC4.u32Register)  /*@rg@*/
#define DMA0_C4_CD	(*(volatile uint_io8_t*)0xB7000880)  /*@bfbba@*/
#define DMA0_C4_CE	(*(volatile uint_io8_t*)0xB7000888)  /*@bfbba@*/

#define DMA0_C5	(DMA0.unC5.u32Register)  /*@rg@*/
#define DMA0_C5_CD	(*(volatile uint_io8_t*)0xB7000A80)  /*@bfbba@*/
#define DMA0_C5_CE	(*(volatile uint_io8_t*)0xB7000A88)  /*@bfbba@*/

#define DMA0_C6	(DMA0.unC6.u32Register)  /*@rg@*/
#define DMA0_C6_CD	(*(volatile uint_io8_t*)0xB7000C80)  /*@bfbba@*/
#define DMA0_C6_CE	(*(volatile uint_io8_t*)0xB7000C88)  /*@bfbba@*/

#define DMA0_C7	(DMA0.unC7.u32Register)  /*@rg@*/
#define DMA0_C7_CD	(*(volatile uint_io8_t*)0xB7000E80)  /*@bfbba@*/
#define DMA0_C7_CE	(*(volatile uint_io8_t*)0xB7000E88)  /*@bfbba@*/

#define DMA0_C8	(DMA0.unC8.u32Register)  /*@rg@*/
#define DMA0_C8_CD	(*(volatile uint_io8_t*)0xB7001080)  /*@bfbba@*/
#define DMA0_C8_CE	(*(volatile uint_io8_t*)0xB7001088)  /*@bfbba@*/

#define DMA0_C9	(DMA0.unC9.u32Register)  /*@rg@*/
#define DMA0_C9_CD	(*(volatile uint_io8_t*)0xB7001280)  /*@bfbba@*/
#define DMA0_C9_CE	(*(volatile uint_io8_t*)0xB7001288)  /*@bfbba@*/

#define DMA0_C10	(DMA0.unC10.u32Register)  /*@rg@*/
#define DMA0_C10_CD	(*(volatile uint_io8_t*)0xB7001480)  /*@bfbba@*/
#define DMA0_C10_CE	(*(volatile uint_io8_t*)0xB7001488)  /*@bfbba@*/

#define DMA0_C11	(DMA0.unC11.u32Register)  /*@rg@*/
#define DMA0_C11_CD	(*(volatile uint_io8_t*)0xB7001680)  /*@bfbba@*/
#define DMA0_C11_CE	(*(volatile uint_io8_t*)0xB7001688)  /*@bfbba@*/

#define DMA0_C12	(DMA0.unC12.u32Register)  /*@rg@*/
#define DMA0_C12_CD	(*(volatile uint_io8_t*)0xB7001880)  /*@bfbba@*/
#define DMA0_C12_CE	(*(volatile uint_io8_t*)0xB7001888)  /*@bfbba@*/

#define DMA0_C13	(DMA0.unC13.u32Register)  /*@rg@*/
#define DMA0_C13_CD	(*(volatile uint_io8_t*)0xB7001A80)  /*@bfbba@*/
#define DMA0_C13_CE	(*(volatile uint_io8_t*)0xB7001A88)  /*@bfbba@*/

#define DMA0_C14	(DMA0.unC14.u32Register)  /*@rg@*/
#define DMA0_C14_CD	(*(volatile uint_io8_t*)0xB7001C80)  /*@bfbba@*/
#define DMA0_C14_CE	(*(volatile uint_io8_t*)0xB7001C88)  /*@bfbba@*/

#define DMA0_C15	(DMA0.unC15.u32Register)  /*@rg@*/
#define DMA0_C15_CD	(*(volatile uint_io8_t*)0xB7001E80)  /*@bfbba@*/
#define DMA0_C15_CE	(*(volatile uint_io8_t*)0xB7001E88)  /*@bfbba@*/

typedef struct stc_dma0_cn_field{
    uint_io32_t		u1CD:1;
    uint_io32_t		:7;
    uint_io32_t		u1CE:1;
    uint_io32_t		:23;
}stc_dma0_cn_field_t;

typedef union un_dma0_cn{
    uint_io32_t		u32Register;
    stc_dma0_cn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_cn_t;

/* D[0-15]_1 */
#define DMA0_D0_1	(DMA0.unD0_1.u8Register)  /*@rg@*/
#define DMA0_D0_1_FBD	(*(volatile uint_io8_t*)0xB70000AC)  /*@bfbba@*/
#define DMA0_D0_1_UD	(*(volatile uint_io8_t*)0xB70000AD)  /*@bfbba@*/
#define DMA0_D0_1_DED	(*(volatile uint_io8_t*)0xB70000AE)  /*@bfbba@*/
#define DMA0_D0_1_FD	(*(volatile uint_io8_t*)0xB70000AF)  /*@bfbba@*/

#define DMA0_D1_1	(DMA0.unD1_1.u8Register)  /*@rg@*/
#define DMA0_D1_1_FBD	(*(volatile uint_io8_t*)0xB70002AC)  /*@bfbba@*/
#define DMA0_D1_1_UD	(*(volatile uint_io8_t*)0xB70002AD)  /*@bfbba@*/
#define DMA0_D1_1_DED	(*(volatile uint_io8_t*)0xB70002AE)  /*@bfbba@*/
#define DMA0_D1_1_FD	(*(volatile uint_io8_t*)0xB70002AF)  /*@bfbba@*/

#define DMA0_D2_1	(DMA0.unD2_1.u8Register)  /*@rg@*/
#define DMA0_D2_1_FBD	(*(volatile uint_io8_t*)0xB70004AC)  /*@bfbba@*/
#define DMA0_D2_1_UD	(*(volatile uint_io8_t*)0xB70004AD)  /*@bfbba@*/
#define DMA0_D2_1_DED	(*(volatile uint_io8_t*)0xB70004AE)  /*@bfbba@*/
#define DMA0_D2_1_FD	(*(volatile uint_io8_t*)0xB70004AF)  /*@bfbba@*/

#define DMA0_D3_1	(DMA0.unD3_1.u8Register)  /*@rg@*/
#define DMA0_D3_1_FBD	(*(volatile uint_io8_t*)0xB70006AC)  /*@bfbba@*/
#define DMA0_D3_1_UD	(*(volatile uint_io8_t*)0xB70006AD)  /*@bfbba@*/
#define DMA0_D3_1_DED	(*(volatile uint_io8_t*)0xB70006AE)  /*@bfbba@*/
#define DMA0_D3_1_FD	(*(volatile uint_io8_t*)0xB70006AF)  /*@bfbba@*/

#define DMA0_D4_1	(DMA0.unD4_1.u8Register)  /*@rg@*/
#define DMA0_D4_1_FBD	(*(volatile uint_io8_t*)0xB70008AC)  /*@bfbba@*/
#define DMA0_D4_1_UD	(*(volatile uint_io8_t*)0xB70008AD)  /*@bfbba@*/
#define DMA0_D4_1_DED	(*(volatile uint_io8_t*)0xB70008AE)  /*@bfbba@*/
#define DMA0_D4_1_FD	(*(volatile uint_io8_t*)0xB70008AF)  /*@bfbba@*/

#define DMA0_D5_1	(DMA0.unD5_1.u8Register)  /*@rg@*/
#define DMA0_D5_1_FBD	(*(volatile uint_io8_t*)0xB7000AAC)  /*@bfbba@*/
#define DMA0_D5_1_UD	(*(volatile uint_io8_t*)0xB7000AAD)  /*@bfbba@*/
#define DMA0_D5_1_DED	(*(volatile uint_io8_t*)0xB7000AAE)  /*@bfbba@*/
#define DMA0_D5_1_FD	(*(volatile uint_io8_t*)0xB7000AAF)  /*@bfbba@*/

#define DMA0_D6_1	(DMA0.unD6_1.u8Register)  /*@rg@*/
#define DMA0_D6_1_FBD	(*(volatile uint_io8_t*)0xB7000CAC)  /*@bfbba@*/
#define DMA0_D6_1_UD	(*(volatile uint_io8_t*)0xB7000CAD)  /*@bfbba@*/
#define DMA0_D6_1_DED	(*(volatile uint_io8_t*)0xB7000CAE)  /*@bfbba@*/
#define DMA0_D6_1_FD	(*(volatile uint_io8_t*)0xB7000CAF)  /*@bfbba@*/

#define DMA0_D7_1	(DMA0.unD7_1.u8Register)  /*@rg@*/
#define DMA0_D7_1_FBD	(*(volatile uint_io8_t*)0xB7000EAC)  /*@bfbba@*/
#define DMA0_D7_1_UD	(*(volatile uint_io8_t*)0xB7000EAD)  /*@bfbba@*/
#define DMA0_D7_1_DED	(*(volatile uint_io8_t*)0xB7000EAE)  /*@bfbba@*/
#define DMA0_D7_1_FD	(*(volatile uint_io8_t*)0xB7000EAF)  /*@bfbba@*/

#define DMA0_D8_1	(DMA0.unD8_1.u8Register)  /*@rg@*/
#define DMA0_D8_1_FBD	(*(volatile uint_io8_t*)0xB70010AC)  /*@bfbba@*/
#define DMA0_D8_1_UD	(*(volatile uint_io8_t*)0xB70010AD)  /*@bfbba@*/
#define DMA0_D8_1_DED	(*(volatile uint_io8_t*)0xB70010AE)  /*@bfbba@*/
#define DMA0_D8_1_FD	(*(volatile uint_io8_t*)0xB70010AF)  /*@bfbba@*/

#define DMA0_D9_1	(DMA0.unD9_1.u8Register)  /*@rg@*/
#define DMA0_D9_1_FBD	(*(volatile uint_io8_t*)0xB70012AC)  /*@bfbba@*/
#define DMA0_D9_1_UD	(*(volatile uint_io8_t*)0xB70012AD)  /*@bfbba@*/
#define DMA0_D9_1_DED	(*(volatile uint_io8_t*)0xB70012AE)  /*@bfbba@*/
#define DMA0_D9_1_FD	(*(volatile uint_io8_t*)0xB70012AF)  /*@bfbba@*/

#define DMA0_D10_1	(DMA0.unD10_1.u8Register)  /*@rg@*/
#define DMA0_D10_1_FBD	(*(volatile uint_io8_t*)0xB70014AC)  /*@bfbba@*/
#define DMA0_D10_1_UD	(*(volatile uint_io8_t*)0xB70014AD)  /*@bfbba@*/
#define DMA0_D10_1_DED	(*(volatile uint_io8_t*)0xB70014AE)  /*@bfbba@*/
#define DMA0_D10_1_FD	(*(volatile uint_io8_t*)0xB70014AF)  /*@bfbba@*/

#define DMA0_D11_1	(DMA0.unD11_1.u8Register)  /*@rg@*/
#define DMA0_D11_1_FBD	(*(volatile uint_io8_t*)0xB70016AC)  /*@bfbba@*/
#define DMA0_D11_1_UD	(*(volatile uint_io8_t*)0xB70016AD)  /*@bfbba@*/
#define DMA0_D11_1_DED	(*(volatile uint_io8_t*)0xB70016AE)  /*@bfbba@*/
#define DMA0_D11_1_FD	(*(volatile uint_io8_t*)0xB70016AF)  /*@bfbba@*/

#define DMA0_D12_1	(DMA0.unD12_1.u8Register)  /*@rg@*/
#define DMA0_D12_1_FBD	(*(volatile uint_io8_t*)0xB70018AC)  /*@bfbba@*/
#define DMA0_D12_1_UD	(*(volatile uint_io8_t*)0xB70018AD)  /*@bfbba@*/
#define DMA0_D12_1_DED	(*(volatile uint_io8_t*)0xB70018AE)  /*@bfbba@*/
#define DMA0_D12_1_FD	(*(volatile uint_io8_t*)0xB70018AF)  /*@bfbba@*/

#define DMA0_D13_1	(DMA0.unD13_1.u8Register)  /*@rg@*/
#define DMA0_D13_1_FBD	(*(volatile uint_io8_t*)0xB7001AAC)  /*@bfbba@*/
#define DMA0_D13_1_UD	(*(volatile uint_io8_t*)0xB7001AAD)  /*@bfbba@*/
#define DMA0_D13_1_DED	(*(volatile uint_io8_t*)0xB7001AAE)  /*@bfbba@*/
#define DMA0_D13_1_FD	(*(volatile uint_io8_t*)0xB7001AAF)  /*@bfbba@*/

#define DMA0_D14_1	(DMA0.unD14_1.u8Register)  /*@rg@*/
#define DMA0_D14_1_FBD	(*(volatile uint_io8_t*)0xB7001CAC)  /*@bfbba@*/
#define DMA0_D14_1_UD	(*(volatile uint_io8_t*)0xB7001CAD)  /*@bfbba@*/
#define DMA0_D14_1_DED	(*(volatile uint_io8_t*)0xB7001CAE)  /*@bfbba@*/
#define DMA0_D14_1_FD	(*(volatile uint_io8_t*)0xB7001CAF)  /*@bfbba@*/

#define DMA0_D15_1	(DMA0.unD15_1.u8Register)  /*@rg@*/
#define DMA0_D15_1_FBD	(*(volatile uint_io8_t*)0xB7001EAC)  /*@bfbba@*/
#define DMA0_D15_1_UD	(*(volatile uint_io8_t*)0xB7001EAD)  /*@bfbba@*/
#define DMA0_D15_1_DED	(*(volatile uint_io8_t*)0xB7001EAE)  /*@bfbba@*/
#define DMA0_D15_1_FD	(*(volatile uint_io8_t*)0xB7001EAF)  /*@bfbba@*/

typedef struct stc_dma0_dn_1_field{
    uint_io8_t		:4;
    uint_io8_t		u1FBD:1;
    uint_io8_t		u1UD:1;
    uint_io8_t		u1DED:1;
    uint_io8_t		u1FD:1;
}stc_dma0_dn_1_field_t;

typedef union un_dma0_dn_1{
    uint_io8_t		u8Register;
    stc_dma0_dn_1_field_t		stcField;
}un_dma0_dn_1_t;

/* D[0-15]_3 */
#define DMA0_D0_3	(DMA0.unD0_3.u8Register)  /*@rg@*/
#define DMA0_D0_3_FBS	(*(volatile uint_io8_t*)0xB70000BC)  /*@bfbba@*/
#define DMA0_D0_3_US	(*(volatile uint_io8_t*)0xB70000BD)  /*@bfbba@*/
#define DMA0_D0_3_DES	(*(volatile uint_io8_t*)0xB70000BE)  /*@bfbba@*/
#define DMA0_D0_3_FS	(*(volatile uint_io8_t*)0xB70000BF)  /*@bfbba@*/

#define DMA0_D1_3	(DMA0.unD1_3.u8Register)  /*@rg@*/
#define DMA0_D1_3_FBS	(*(volatile uint_io8_t*)0xB70002BC)  /*@bfbba@*/
#define DMA0_D1_3_US	(*(volatile uint_io8_t*)0xB70002BD)  /*@bfbba@*/
#define DMA0_D1_3_DES	(*(volatile uint_io8_t*)0xB70002BE)  /*@bfbba@*/
#define DMA0_D1_3_FS	(*(volatile uint_io8_t*)0xB70002BF)  /*@bfbba@*/

#define DMA0_D2_3	(DMA0.unD2_3.u8Register)  /*@rg@*/
#define DMA0_D2_3_FBS	(*(volatile uint_io8_t*)0xB70004BC)  /*@bfbba@*/
#define DMA0_D2_3_US	(*(volatile uint_io8_t*)0xB70004BD)  /*@bfbba@*/
#define DMA0_D2_3_DES	(*(volatile uint_io8_t*)0xB70004BE)  /*@bfbba@*/
#define DMA0_D2_3_FS	(*(volatile uint_io8_t*)0xB70004BF)  /*@bfbba@*/

#define DMA0_D3_3	(DMA0.unD3_3.u8Register)  /*@rg@*/
#define DMA0_D3_3_FBS	(*(volatile uint_io8_t*)0xB70006BC)  /*@bfbba@*/
#define DMA0_D3_3_US	(*(volatile uint_io8_t*)0xB70006BD)  /*@bfbba@*/
#define DMA0_D3_3_DES	(*(volatile uint_io8_t*)0xB70006BE)  /*@bfbba@*/
#define DMA0_D3_3_FS	(*(volatile uint_io8_t*)0xB70006BF)  /*@bfbba@*/

#define DMA0_D4_3	(DMA0.unD4_3.u8Register)  /*@rg@*/
#define DMA0_D4_3_FBS	(*(volatile uint_io8_t*)0xB70008BC)  /*@bfbba@*/
#define DMA0_D4_3_US	(*(volatile uint_io8_t*)0xB70008BD)  /*@bfbba@*/
#define DMA0_D4_3_DES	(*(volatile uint_io8_t*)0xB70008BE)  /*@bfbba@*/
#define DMA0_D4_3_FS	(*(volatile uint_io8_t*)0xB70008BF)  /*@bfbba@*/

#define DMA0_D5_3	(DMA0.unD5_3.u8Register)  /*@rg@*/
#define DMA0_D5_3_FBS	(*(volatile uint_io8_t*)0xB7000ABC)  /*@bfbba@*/
#define DMA0_D5_3_US	(*(volatile uint_io8_t*)0xB7000ABD)  /*@bfbba@*/
#define DMA0_D5_3_DES	(*(volatile uint_io8_t*)0xB7000ABE)  /*@bfbba@*/
#define DMA0_D5_3_FS	(*(volatile uint_io8_t*)0xB7000ABF)  /*@bfbba@*/

#define DMA0_D6_3	(DMA0.unD6_3.u8Register)  /*@rg@*/
#define DMA0_D6_3_FBS	(*(volatile uint_io8_t*)0xB7000CBC)  /*@bfbba@*/
#define DMA0_D6_3_US	(*(volatile uint_io8_t*)0xB7000CBD)  /*@bfbba@*/
#define DMA0_D6_3_DES	(*(volatile uint_io8_t*)0xB7000CBE)  /*@bfbba@*/
#define DMA0_D6_3_FS	(*(volatile uint_io8_t*)0xB7000CBF)  /*@bfbba@*/

#define DMA0_D7_3	(DMA0.unD7_3.u8Register)  /*@rg@*/
#define DMA0_D7_3_FBS	(*(volatile uint_io8_t*)0xB7000EBC)  /*@bfbba@*/
#define DMA0_D7_3_US	(*(volatile uint_io8_t*)0xB7000EBD)  /*@bfbba@*/
#define DMA0_D7_3_DES	(*(volatile uint_io8_t*)0xB7000EBE)  /*@bfbba@*/
#define DMA0_D7_3_FS	(*(volatile uint_io8_t*)0xB7000EBF)  /*@bfbba@*/

#define DMA0_D8_3	(DMA0.unD8_3.u8Register)  /*@rg@*/
#define DMA0_D8_3_FBS	(*(volatile uint_io8_t*)0xB70010BC)  /*@bfbba@*/
#define DMA0_D8_3_US	(*(volatile uint_io8_t*)0xB70010BD)  /*@bfbba@*/
#define DMA0_D8_3_DES	(*(volatile uint_io8_t*)0xB70010BE)  /*@bfbba@*/
#define DMA0_D8_3_FS	(*(volatile uint_io8_t*)0xB70010BF)  /*@bfbba@*/

#define DMA0_D9_3	(DMA0.unD9_3.u8Register)  /*@rg@*/
#define DMA0_D9_3_FBS	(*(volatile uint_io8_t*)0xB70012BC)  /*@bfbba@*/
#define DMA0_D9_3_US	(*(volatile uint_io8_t*)0xB70012BD)  /*@bfbba@*/
#define DMA0_D9_3_DES	(*(volatile uint_io8_t*)0xB70012BE)  /*@bfbba@*/
#define DMA0_D9_3_FS	(*(volatile uint_io8_t*)0xB70012BF)  /*@bfbba@*/

#define DMA0_D10_3	(DMA0.unD10_3.u8Register)  /*@rg@*/
#define DMA0_D10_3_FBS	(*(volatile uint_io8_t*)0xB70014BC)  /*@bfbba@*/
#define DMA0_D10_3_US	(*(volatile uint_io8_t*)0xB70014BD)  /*@bfbba@*/
#define DMA0_D10_3_DES	(*(volatile uint_io8_t*)0xB70014BE)  /*@bfbba@*/
#define DMA0_D10_3_FS	(*(volatile uint_io8_t*)0xB70014BF)  /*@bfbba@*/

#define DMA0_D11_3	(DMA0.unD11_3.u8Register)  /*@rg@*/
#define DMA0_D11_3_FBS	(*(volatile uint_io8_t*)0xB70016BC)  /*@bfbba@*/
#define DMA0_D11_3_US	(*(volatile uint_io8_t*)0xB70016BD)  /*@bfbba@*/
#define DMA0_D11_3_DES	(*(volatile uint_io8_t*)0xB70016BE)  /*@bfbba@*/
#define DMA0_D11_3_FS	(*(volatile uint_io8_t*)0xB70016BF)  /*@bfbba@*/

#define DMA0_D12_3	(DMA0.unD12_3.u8Register)  /*@rg@*/
#define DMA0_D12_3_FBS	(*(volatile uint_io8_t*)0xB70018BC)  /*@bfbba@*/
#define DMA0_D12_3_US	(*(volatile uint_io8_t*)0xB70018BD)  /*@bfbba@*/
#define DMA0_D12_3_DES	(*(volatile uint_io8_t*)0xB70018BE)  /*@bfbba@*/
#define DMA0_D12_3_FS	(*(volatile uint_io8_t*)0xB70018BF)  /*@bfbba@*/

#define DMA0_D13_3	(DMA0.unD13_3.u8Register)  /*@rg@*/
#define DMA0_D13_3_FBS	(*(volatile uint_io8_t*)0xB7001ABC)  /*@bfbba@*/
#define DMA0_D13_3_US	(*(volatile uint_io8_t*)0xB7001ABD)  /*@bfbba@*/
#define DMA0_D13_3_DES	(*(volatile uint_io8_t*)0xB7001ABE)  /*@bfbba@*/
#define DMA0_D13_3_FS	(*(volatile uint_io8_t*)0xB7001ABF)  /*@bfbba@*/

#define DMA0_D14_3	(DMA0.unD14_3.u8Register)  /*@rg@*/
#define DMA0_D14_3_FBS	(*(volatile uint_io8_t*)0xB7001CBC)  /*@bfbba@*/
#define DMA0_D14_3_US	(*(volatile uint_io8_t*)0xB7001CBD)  /*@bfbba@*/
#define DMA0_D14_3_DES	(*(volatile uint_io8_t*)0xB7001CBE)  /*@bfbba@*/
#define DMA0_D14_3_FS	(*(volatile uint_io8_t*)0xB7001CBF)  /*@bfbba@*/

#define DMA0_D15_3	(DMA0.unD15_3.u8Register)  /*@rg@*/
#define DMA0_D15_3_FBS	(*(volatile uint_io8_t*)0xB7001EBC)  /*@bfbba@*/
#define DMA0_D15_3_US	(*(volatile uint_io8_t*)0xB7001EBD)  /*@bfbba@*/
#define DMA0_D15_3_DES	(*(volatile uint_io8_t*)0xB7001EBE)  /*@bfbba@*/
#define DMA0_D15_3_FS	(*(volatile uint_io8_t*)0xB7001EBF)  /*@bfbba@*/

typedef struct stc_dma0_dn_3_field{
    uint_io8_t		:4;
    uint_io8_t		u1FBS:1;
    uint_io8_t		u1US:1;
    uint_io8_t		u1DES:1;
    uint_io8_t		u1FS:1;
}stc_dma0_dn_3_field_t;

typedef union un_dma0_dn_3{
    uint_io8_t		u8Register;
    stc_dma0_dn_3_field_t		stcField;
}un_dma0_dn_3_t;

/* SASHDW[0-15] */
#define DMA0_SASHDW0	(DMA0.unSASHDW0.u32Register)  /*@rg@*/
#define DMA0_SASHDW0_SASHDW	DMA0_SASHDW0  /*@bfrg@*/

#define DMA0_SASHDW1	(DMA0.unSASHDW1.u32Register)  /*@rg@*/
#define DMA0_SASHDW1_SASHDW	DMA0_SASHDW1  /*@bfrg@*/

#define DMA0_SASHDW2	(DMA0.unSASHDW2.u32Register)  /*@rg@*/
#define DMA0_SASHDW2_SASHDW	DMA0_SASHDW2  /*@bfrg@*/

#define DMA0_SASHDW3	(DMA0.unSASHDW3.u32Register)  /*@rg@*/
#define DMA0_SASHDW3_SASHDW	DMA0_SASHDW3  /*@bfrg@*/

#define DMA0_SASHDW4	(DMA0.unSASHDW4.u32Register)  /*@rg@*/
#define DMA0_SASHDW4_SASHDW	DMA0_SASHDW4  /*@bfrg@*/

#define DMA0_SASHDW5	(DMA0.unSASHDW5.u32Register)  /*@rg@*/
#define DMA0_SASHDW5_SASHDW	DMA0_SASHDW5  /*@bfrg@*/

#define DMA0_SASHDW6	(DMA0.unSASHDW6.u32Register)  /*@rg@*/
#define DMA0_SASHDW6_SASHDW	DMA0_SASHDW6  /*@bfrg@*/

#define DMA0_SASHDW7	(DMA0.unSASHDW7.u32Register)  /*@rg@*/
#define DMA0_SASHDW7_SASHDW	DMA0_SASHDW7  /*@bfrg@*/

#define DMA0_SASHDW8	(DMA0.unSASHDW8.u32Register)  /*@rg@*/
#define DMA0_SASHDW8_SASHDW	DMA0_SASHDW8  /*@bfrg@*/

#define DMA0_SASHDW9	(DMA0.unSASHDW9.u32Register)  /*@rg@*/
#define DMA0_SASHDW9_SASHDW	DMA0_SASHDW9  /*@bfrg@*/

#define DMA0_SASHDW10	(DMA0.unSASHDW10.u32Register)  /*@rg@*/
#define DMA0_SASHDW10_SASHDW	DMA0_SASHDW10  /*@bfrg@*/

#define DMA0_SASHDW11	(DMA0.unSASHDW11.u32Register)  /*@rg@*/
#define DMA0_SASHDW11_SASHDW	DMA0_SASHDW11  /*@bfrg@*/

#define DMA0_SASHDW12	(DMA0.unSASHDW12.u32Register)  /*@rg@*/
#define DMA0_SASHDW12_SASHDW	DMA0_SASHDW12  /*@bfrg@*/

#define DMA0_SASHDW13	(DMA0.unSASHDW13.u32Register)  /*@rg@*/
#define DMA0_SASHDW13_SASHDW	DMA0_SASHDW13  /*@bfrg@*/

#define DMA0_SASHDW14	(DMA0.unSASHDW14.u32Register)  /*@rg@*/
#define DMA0_SASHDW14_SASHDW	DMA0_SASHDW14  /*@bfrg@*/

#define DMA0_SASHDW15	(DMA0.unSASHDW15.u32Register)  /*@rg@*/
#define DMA0_SASHDW15_SASHDW	DMA0_SASHDW15  /*@bfrg@*/

typedef union un_dma0_sashdwn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_sashdwn_t;

/* DASHDW[0-15] */
#define DMA0_DASHDW0	(DMA0.unDASHDW0.u32Register)  /*@rg@*/
#define DMA0_DASHDW0_DASHDW	DMA0_DASHDW0  /*@bfrg@*/

#define DMA0_DASHDW1	(DMA0.unDASHDW1.u32Register)  /*@rg@*/
#define DMA0_DASHDW1_DASHDW	DMA0_DASHDW1  /*@bfrg@*/

#define DMA0_DASHDW2	(DMA0.unDASHDW2.u32Register)  /*@rg@*/
#define DMA0_DASHDW2_DASHDW	DMA0_DASHDW2  /*@bfrg@*/

#define DMA0_DASHDW3	(DMA0.unDASHDW3.u32Register)  /*@rg@*/
#define DMA0_DASHDW3_DASHDW	DMA0_DASHDW3  /*@bfrg@*/

#define DMA0_DASHDW4	(DMA0.unDASHDW4.u32Register)  /*@rg@*/
#define DMA0_DASHDW4_DASHDW	DMA0_DASHDW4  /*@bfrg@*/

#define DMA0_DASHDW5	(DMA0.unDASHDW5.u32Register)  /*@rg@*/
#define DMA0_DASHDW5_DASHDW	DMA0_DASHDW5  /*@bfrg@*/

#define DMA0_DASHDW6	(DMA0.unDASHDW6.u32Register)  /*@rg@*/
#define DMA0_DASHDW6_DASHDW	DMA0_DASHDW6  /*@bfrg@*/

#define DMA0_DASHDW7	(DMA0.unDASHDW7.u32Register)  /*@rg@*/
#define DMA0_DASHDW7_DASHDW	DMA0_DASHDW7  /*@bfrg@*/

#define DMA0_DASHDW8	(DMA0.unDASHDW8.u32Register)  /*@rg@*/
#define DMA0_DASHDW8_DASHDW	DMA0_DASHDW8  /*@bfrg@*/

#define DMA0_DASHDW9	(DMA0.unDASHDW9.u32Register)  /*@rg@*/
#define DMA0_DASHDW9_DASHDW	DMA0_DASHDW9  /*@bfrg@*/

#define DMA0_DASHDW10	(DMA0.unDASHDW10.u32Register)  /*@rg@*/
#define DMA0_DASHDW10_DASHDW	DMA0_DASHDW10  /*@bfrg@*/

#define DMA0_DASHDW11	(DMA0.unDASHDW11.u32Register)  /*@rg@*/
#define DMA0_DASHDW11_DASHDW	DMA0_DASHDW11  /*@bfrg@*/

#define DMA0_DASHDW12	(DMA0.unDASHDW12.u32Register)  /*@rg@*/
#define DMA0_DASHDW12_DASHDW	DMA0_DASHDW12  /*@bfrg@*/

#define DMA0_DASHDW13	(DMA0.unDASHDW13.u32Register)  /*@rg@*/
#define DMA0_DASHDW13_DASHDW	DMA0_DASHDW13  /*@bfrg@*/

#define DMA0_DASHDW14	(DMA0.unDASHDW14.u32Register)  /*@rg@*/
#define DMA0_DASHDW14_DASHDW	DMA0_DASHDW14  /*@bfrg@*/

#define DMA0_DASHDW15	(DMA0.unDASHDW15.u32Register)  /*@rg@*/
#define DMA0_DASHDW15_DASHDW	DMA0_DASHDW15  /*@bfrg@*/

typedef union un_dma0_dashdwn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_dashdwn_t;

/* E[0-15] */
#define DMA0_E0	(DMA0.unE0.u32Register)  /*@rg@*/
#define DMA0_E0_IC	(DMA0.unE0.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E0_DC	(DMA0.unE0.stcField.u15DC)  /*@bf@*/
#define DMA0_E0_EE	(*(volatile uint_io8_t*)0xB700011F)  /*@bfbba@*/

#define DMA0_E1	(DMA0.unE1.u32Register)  /*@rg@*/
#define DMA0_E1_IC	(DMA0.unE1.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E1_DC	(DMA0.unE1.stcField.u15DC)  /*@bf@*/
#define DMA0_E1_EE	(*(volatile uint_io8_t*)0xB700031F)  /*@bfbba@*/

#define DMA0_E2	(DMA0.unE2.u32Register)  /*@rg@*/
#define DMA0_E2_IC	(DMA0.unE2.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E2_DC	(DMA0.unE2.stcField.u15DC)  /*@bf@*/
#define DMA0_E2_EE	(*(volatile uint_io8_t*)0xB700051F)  /*@bfbba@*/

#define DMA0_E3	(DMA0.unE3.u32Register)  /*@rg@*/
#define DMA0_E3_IC	(DMA0.unE3.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E3_DC	(DMA0.unE3.stcField.u15DC)  /*@bf@*/
#define DMA0_E3_EE	(*(volatile uint_io8_t*)0xB700071F)  /*@bfbba@*/

#define DMA0_E4	(DMA0.unE4.u32Register)  /*@rg@*/
#define DMA0_E4_IC	(DMA0.unE4.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E4_DC	(DMA0.unE4.stcField.u15DC)  /*@bf@*/
#define DMA0_E4_EE	(*(volatile uint_io8_t*)0xB700091F)  /*@bfbba@*/

#define DMA0_E5	(DMA0.unE5.u32Register)  /*@rg@*/
#define DMA0_E5_IC	(DMA0.unE5.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E5_DC	(DMA0.unE5.stcField.u15DC)  /*@bf@*/
#define DMA0_E5_EE	(*(volatile uint_io8_t*)0xB7000B1F)  /*@bfbba@*/

#define DMA0_E6	(DMA0.unE6.u32Register)  /*@rg@*/
#define DMA0_E6_IC	(DMA0.unE6.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E6_DC	(DMA0.unE6.stcField.u15DC)  /*@bf@*/
#define DMA0_E6_EE	(*(volatile uint_io8_t*)0xB7000D1F)  /*@bfbba@*/

#define DMA0_E7	(DMA0.unE7.u32Register)  /*@rg@*/
#define DMA0_E7_IC	(DMA0.unE7.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E7_DC	(DMA0.unE7.stcField.u15DC)  /*@bf@*/
#define DMA0_E7_EE	(*(volatile uint_io8_t*)0xB7000F1F)  /*@bfbba@*/

#define DMA0_E8	(DMA0.unE8.u32Register)  /*@rg@*/
#define DMA0_E8_IC	(DMA0.unE8.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E8_DC	(DMA0.unE8.stcField.u15DC)  /*@bf@*/
#define DMA0_E8_EE	(*(volatile uint_io8_t*)0xB700111F)  /*@bfbba@*/

#define DMA0_E9	(DMA0.unE9.u32Register)  /*@rg@*/
#define DMA0_E9_IC	(DMA0.unE9.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E9_DC	(DMA0.unE9.stcField.u15DC)  /*@bf@*/
#define DMA0_E9_EE	(*(volatile uint_io8_t*)0xB700131F)  /*@bfbba@*/

#define DMA0_E10	(DMA0.unE10.u32Register)  /*@rg@*/
#define DMA0_E10_IC	(DMA0.unE10.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E10_DC	(DMA0.unE10.stcField.u15DC)  /*@bf@*/
#define DMA0_E10_EE	(*(volatile uint_io8_t*)0xB700151F)  /*@bfbba@*/

#define DMA0_E11	(DMA0.unE11.u32Register)  /*@rg@*/
#define DMA0_E11_IC	(DMA0.unE11.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E11_DC	(DMA0.unE11.stcField.u15DC)  /*@bf@*/
#define DMA0_E11_EE	(*(volatile uint_io8_t*)0xB700171F)  /*@bfbba@*/

#define DMA0_E12	(DMA0.unE12.u32Register)  /*@rg@*/
#define DMA0_E12_IC	(DMA0.unE12.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E12_DC	(DMA0.unE12.stcField.u15DC)  /*@bf@*/
#define DMA0_E12_EE	(*(volatile uint_io8_t*)0xB700191F)  /*@bfbba@*/

#define DMA0_E13	(DMA0.unE13.u32Register)  /*@rg@*/
#define DMA0_E13_IC	(DMA0.unE13.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E13_DC	(DMA0.unE13.stcField.u15DC)  /*@bf@*/
#define DMA0_E13_EE	(*(volatile uint_io8_t*)0xB7001B1F)  /*@bfbba@*/

#define DMA0_E14	(DMA0.unE14.u32Register)  /*@rg@*/
#define DMA0_E14_IC	(DMA0.unE14.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E14_DC	(DMA0.unE14.stcField.u15DC)  /*@bf@*/
#define DMA0_E14_EE	(*(volatile uint_io8_t*)0xB7001D1F)  /*@bfbba@*/

#define DMA0_E15	(DMA0.unE15.u32Register)  /*@rg@*/
#define DMA0_E15_IC	(DMA0.unE15.au16Halfword[0])  /*@bfhword@*/
#define DMA0_E15_DC	(DMA0.unE15.stcField.u15DC)  /*@bf@*/
#define DMA0_E15_EE	(*(volatile uint_io8_t*)0xB7001F1F)  /*@bfbba@*/

typedef struct stc_dma0_en_field{
    uint_io32_t		u16IC:16;
    uint_io32_t		u15DC:15;
    uint_io32_t		u1EE:1;
}stc_dma0_en_field_t;

typedef union un_dma0_en{
    uint_io32_t		u32Register;
    stc_dma0_en_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_en_t;

/* R */
#define DMA0_R	(DMA0.unR.u32Register)  /*@rg@*/
#define DMA0_R_DSHS	(*(volatile uint_io8_t*)0xB7008000)  /*@bfbba@*/
#define DMA0_R_DB	(DMA0.unR.stcField.u2DB)  /*@bf@*/
#define DMA0_R_DH	(*(volatile uint_io8_t*)0xB700801A)  /*@bfbba@*/
#define DMA0_R_PR	(DMA0.unR.stcField.u2PR)  /*@bf@*/
#define DMA0_R_DBE	(*(volatile uint_io8_t*)0xB700801D)  /*@bfbba@*/
#define DMA0_R_DSHR	(*(volatile uint_io8_t*)0xB700801E)  /*@bfbba@*/
#define DMA0_R_DE	(*(volatile uint_io8_t*)0xB700801F)  /*@bfbba@*/

typedef struct stc_dma0_r_field{
    uint_io32_t		u1DSHS:1;
    uint_io32_t		:23;
    uint_io32_t		u2DB:2;
    uint_io32_t		u1DH:1;
    uint_io32_t		u2PR:2;
    uint_io32_t		u1DBE:1;
    uint_io32_t		u1DSHR:1;
    uint_io32_t		u1DE:1;
}stc_dma0_r_field_t;

typedef union un_dma0_r{
    uint_io32_t		u32Register;
    stc_dma0_r_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_r_t;

/* DIRQ1 */
#define DMA0_DIRQ1	(DMA0.unDIRQ1.u32Register)  /*@rg@*/
#define DMA0_DIRQ1_DIRQ0	(*(volatile uint_io8_t*)0xB7008020)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ1	(*(volatile uint_io8_t*)0xB7008021)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ2	(*(volatile uint_io8_t*)0xB7008022)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ3	(*(volatile uint_io8_t*)0xB7008023)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ4	(*(volatile uint_io8_t*)0xB7008024)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ5	(*(volatile uint_io8_t*)0xB7008025)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ6	(*(volatile uint_io8_t*)0xB7008026)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ7	(*(volatile uint_io8_t*)0xB7008027)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ8	(*(volatile uint_io8_t*)0xB7008028)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ9	(*(volatile uint_io8_t*)0xB7008029)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ10	(*(volatile uint_io8_t*)0xB700802A)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ11	(*(volatile uint_io8_t*)0xB700802B)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ12	(*(volatile uint_io8_t*)0xB700802C)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ13	(*(volatile uint_io8_t*)0xB700802D)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ14	(*(volatile uint_io8_t*)0xB700802E)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ15	(*(volatile uint_io8_t*)0xB700802F)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ16	(*(volatile uint_io8_t*)0xB7008030)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ17	(*(volatile uint_io8_t*)0xB7008031)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ18	(*(volatile uint_io8_t*)0xB7008032)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ19	(*(volatile uint_io8_t*)0xB7008033)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ20	(*(volatile uint_io8_t*)0xB7008034)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ21	(*(volatile uint_io8_t*)0xB7008035)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ22	(*(volatile uint_io8_t*)0xB7008036)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ23	(*(volatile uint_io8_t*)0xB7008037)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ24	(*(volatile uint_io8_t*)0xB7008038)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ25	(*(volatile uint_io8_t*)0xB7008039)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ26	(*(volatile uint_io8_t*)0xB700803A)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ27	(*(volatile uint_io8_t*)0xB700803B)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ28	(*(volatile uint_io8_t*)0xB700803C)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ29	(*(volatile uint_io8_t*)0xB700803D)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ30	(*(volatile uint_io8_t*)0xB700803E)  /*@bfbba@*/
#define DMA0_DIRQ1_DIRQ31	(*(volatile uint_io8_t*)0xB700803F)  /*@bfbba@*/

typedef struct stc_dma0_dirq1_field{
    uint_io32_t		u1DIRQ0:1;
    uint_io32_t		u1DIRQ1:1;
    uint_io32_t		u1DIRQ2:1;
    uint_io32_t		u1DIRQ3:1;
    uint_io32_t		u1DIRQ4:1;
    uint_io32_t		u1DIRQ5:1;
    uint_io32_t		u1DIRQ6:1;
    uint_io32_t		u1DIRQ7:1;
    uint_io32_t		u1DIRQ8:1;
    uint_io32_t		u1DIRQ9:1;
    uint_io32_t		u1DIRQ10:1;
    uint_io32_t		u1DIRQ11:1;
    uint_io32_t		u1DIRQ12:1;
    uint_io32_t		u1DIRQ13:1;
    uint_io32_t		u1DIRQ14:1;
    uint_io32_t		u1DIRQ15:1;
    uint_io32_t		u1DIRQ16:1;
    uint_io32_t		u1DIRQ17:1;
    uint_io32_t		u1DIRQ18:1;
    uint_io32_t		u1DIRQ19:1;
    uint_io32_t		u1DIRQ20:1;
    uint_io32_t		u1DIRQ21:1;
    uint_io32_t		u1DIRQ22:1;
    uint_io32_t		u1DIRQ23:1;
    uint_io32_t		u1DIRQ24:1;
    uint_io32_t		u1DIRQ25:1;
    uint_io32_t		u1DIRQ26:1;
    uint_io32_t		u1DIRQ27:1;
    uint_io32_t		u1DIRQ28:1;
    uint_io32_t		u1DIRQ29:1;
    uint_io32_t		u1DIRQ30:1;
    uint_io32_t		u1DIRQ31:1;
}stc_dma0_dirq1_field_t;

typedef union un_dma0_dirq1{
    uint_io32_t		u32Register;
    stc_dma0_dirq1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_dirq1_t;

/* DIRQ2 */
#define DMA0_DIRQ2	(DMA0.unDIRQ2.u32Register)  /*@rg@*/
#define DMA0_DIRQ2_DIRQ32	(*(volatile uint_io8_t*)0xB7008040)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ33	(*(volatile uint_io8_t*)0xB7008041)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ34	(*(volatile uint_io8_t*)0xB7008042)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ35	(*(volatile uint_io8_t*)0xB7008043)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ36	(*(volatile uint_io8_t*)0xB7008044)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ37	(*(volatile uint_io8_t*)0xB7008045)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ38	(*(volatile uint_io8_t*)0xB7008046)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ39	(*(volatile uint_io8_t*)0xB7008047)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ40	(*(volatile uint_io8_t*)0xB7008048)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ41	(*(volatile uint_io8_t*)0xB7008049)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ42	(*(volatile uint_io8_t*)0xB700804A)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ43	(*(volatile uint_io8_t*)0xB700804B)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ44	(*(volatile uint_io8_t*)0xB700804C)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ45	(*(volatile uint_io8_t*)0xB700804D)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ46	(*(volatile uint_io8_t*)0xB700804E)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ47	(*(volatile uint_io8_t*)0xB700804F)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ48	(*(volatile uint_io8_t*)0xB7008050)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ49	(*(volatile uint_io8_t*)0xB7008051)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ50	(*(volatile uint_io8_t*)0xB7008052)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ51	(*(volatile uint_io8_t*)0xB7008053)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ52	(*(volatile uint_io8_t*)0xB7008054)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ53	(*(volatile uint_io8_t*)0xB7008055)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ54	(*(volatile uint_io8_t*)0xB7008056)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ55	(*(volatile uint_io8_t*)0xB7008057)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ56	(*(volatile uint_io8_t*)0xB7008058)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ57	(*(volatile uint_io8_t*)0xB7008059)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ58	(*(volatile uint_io8_t*)0xB700805A)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ59	(*(volatile uint_io8_t*)0xB700805B)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ60	(*(volatile uint_io8_t*)0xB700805C)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ61	(*(volatile uint_io8_t*)0xB700805D)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ62	(*(volatile uint_io8_t*)0xB700805E)  /*@bfbba@*/
#define DMA0_DIRQ2_DIRQ63	(*(volatile uint_io8_t*)0xB700805F)  /*@bfbba@*/

typedef struct stc_dma0_dirq2_field{
    uint_io32_t		u1DIRQ32:1;
    uint_io32_t		u1DIRQ33:1;
    uint_io32_t		u1DIRQ34:1;
    uint_io32_t		u1DIRQ35:1;
    uint_io32_t		u1DIRQ36:1;
    uint_io32_t		u1DIRQ37:1;
    uint_io32_t		u1DIRQ38:1;
    uint_io32_t		u1DIRQ39:1;
    uint_io32_t		u1DIRQ40:1;
    uint_io32_t		u1DIRQ41:1;
    uint_io32_t		u1DIRQ42:1;
    uint_io32_t		u1DIRQ43:1;
    uint_io32_t		u1DIRQ44:1;
    uint_io32_t		u1DIRQ45:1;
    uint_io32_t		u1DIRQ46:1;
    uint_io32_t		u1DIRQ47:1;
    uint_io32_t		u1DIRQ48:1;
    uint_io32_t		u1DIRQ49:1;
    uint_io32_t		u1DIRQ50:1;
    uint_io32_t		u1DIRQ51:1;
    uint_io32_t		u1DIRQ52:1;
    uint_io32_t		u1DIRQ53:1;
    uint_io32_t		u1DIRQ54:1;
    uint_io32_t		u1DIRQ55:1;
    uint_io32_t		u1DIRQ56:1;
    uint_io32_t		u1DIRQ57:1;
    uint_io32_t		u1DIRQ58:1;
    uint_io32_t		u1DIRQ59:1;
    uint_io32_t		u1DIRQ60:1;
    uint_io32_t		u1DIRQ61:1;
    uint_io32_t		u1DIRQ62:1;
    uint_io32_t		u1DIRQ63:1;
}stc_dma0_dirq2_field_t;

typedef union un_dma0_dirq2{
    uint_io32_t		u32Register;
    stc_dma0_dirq2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_dirq2_t;

/* EDIRQ1 */
#define DMA0_EDIRQ1	(DMA0.unEDIRQ1.u32Register)  /*@rg@*/
#define DMA0_EDIRQ1_EDIRQ0	(*(volatile uint_io8_t*)0xB7008060)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ1	(*(volatile uint_io8_t*)0xB7008061)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ2	(*(volatile uint_io8_t*)0xB7008062)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ3	(*(volatile uint_io8_t*)0xB7008063)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ4	(*(volatile uint_io8_t*)0xB7008064)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ5	(*(volatile uint_io8_t*)0xB7008065)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ6	(*(volatile uint_io8_t*)0xB7008066)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ7	(*(volatile uint_io8_t*)0xB7008067)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ8	(*(volatile uint_io8_t*)0xB7008068)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ9	(*(volatile uint_io8_t*)0xB7008069)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ10	(*(volatile uint_io8_t*)0xB700806A)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ11	(*(volatile uint_io8_t*)0xB700806B)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ12	(*(volatile uint_io8_t*)0xB700806C)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ13	(*(volatile uint_io8_t*)0xB700806D)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ14	(*(volatile uint_io8_t*)0xB700806E)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ15	(*(volatile uint_io8_t*)0xB700806F)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ16	(*(volatile uint_io8_t*)0xB7008070)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ17	(*(volatile uint_io8_t*)0xB7008071)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ18	(*(volatile uint_io8_t*)0xB7008072)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ19	(*(volatile uint_io8_t*)0xB7008073)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ20	(*(volatile uint_io8_t*)0xB7008074)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ21	(*(volatile uint_io8_t*)0xB7008075)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ22	(*(volatile uint_io8_t*)0xB7008076)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ23	(*(volatile uint_io8_t*)0xB7008077)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ24	(*(volatile uint_io8_t*)0xB7008078)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ25	(*(volatile uint_io8_t*)0xB7008079)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ26	(*(volatile uint_io8_t*)0xB700807A)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ27	(*(volatile uint_io8_t*)0xB700807B)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ28	(*(volatile uint_io8_t*)0xB700807C)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ29	(*(volatile uint_io8_t*)0xB700807D)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ30	(*(volatile uint_io8_t*)0xB700807E)  /*@bfbba@*/
#define DMA0_EDIRQ1_EDIRQ31	(*(volatile uint_io8_t*)0xB700807F)  /*@bfbba@*/

typedef struct stc_dma0_edirq1_field{
    uint_io32_t		u1EDIRQ0:1;
    uint_io32_t		u1EDIRQ1:1;
    uint_io32_t		u1EDIRQ2:1;
    uint_io32_t		u1EDIRQ3:1;
    uint_io32_t		u1EDIRQ4:1;
    uint_io32_t		u1EDIRQ5:1;
    uint_io32_t		u1EDIRQ6:1;
    uint_io32_t		u1EDIRQ7:1;
    uint_io32_t		u1EDIRQ8:1;
    uint_io32_t		u1EDIRQ9:1;
    uint_io32_t		u1EDIRQ10:1;
    uint_io32_t		u1EDIRQ11:1;
    uint_io32_t		u1EDIRQ12:1;
    uint_io32_t		u1EDIRQ13:1;
    uint_io32_t		u1EDIRQ14:1;
    uint_io32_t		u1EDIRQ15:1;
    uint_io32_t		u1EDIRQ16:1;
    uint_io32_t		u1EDIRQ17:1;
    uint_io32_t		u1EDIRQ18:1;
    uint_io32_t		u1EDIRQ19:1;
    uint_io32_t		u1EDIRQ20:1;
    uint_io32_t		u1EDIRQ21:1;
    uint_io32_t		u1EDIRQ22:1;
    uint_io32_t		u1EDIRQ23:1;
    uint_io32_t		u1EDIRQ24:1;
    uint_io32_t		u1EDIRQ25:1;
    uint_io32_t		u1EDIRQ26:1;
    uint_io32_t		u1EDIRQ27:1;
    uint_io32_t		u1EDIRQ28:1;
    uint_io32_t		u1EDIRQ29:1;
    uint_io32_t		u1EDIRQ30:1;
    uint_io32_t		u1EDIRQ31:1;
}stc_dma0_edirq1_field_t;

typedef union un_dma0_edirq1{
    uint_io32_t		u32Register;
    stc_dma0_edirq1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_edirq1_t;

/* EDIRQ2 */
#define DMA0_EDIRQ2	(DMA0.unEDIRQ2.u32Register)  /*@rg@*/
#define DMA0_EDIRQ2_EDIRQ32	(*(volatile uint_io8_t*)0xB7008080)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ33	(*(volatile uint_io8_t*)0xB7008081)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ34	(*(volatile uint_io8_t*)0xB7008082)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ35	(*(volatile uint_io8_t*)0xB7008083)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ36	(*(volatile uint_io8_t*)0xB7008084)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ37	(*(volatile uint_io8_t*)0xB7008085)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ38	(*(volatile uint_io8_t*)0xB7008086)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ39	(*(volatile uint_io8_t*)0xB7008087)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ40	(*(volatile uint_io8_t*)0xB7008088)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ41	(*(volatile uint_io8_t*)0xB7008089)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ42	(*(volatile uint_io8_t*)0xB700808A)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ43	(*(volatile uint_io8_t*)0xB700808B)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ44	(*(volatile uint_io8_t*)0xB700808C)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ45	(*(volatile uint_io8_t*)0xB700808D)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ46	(*(volatile uint_io8_t*)0xB700808E)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ47	(*(volatile uint_io8_t*)0xB700808F)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ48	(*(volatile uint_io8_t*)0xB7008090)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ49	(*(volatile uint_io8_t*)0xB7008091)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ50	(*(volatile uint_io8_t*)0xB7008092)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ51	(*(volatile uint_io8_t*)0xB7008093)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ52	(*(volatile uint_io8_t*)0xB7008094)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ53	(*(volatile uint_io8_t*)0xB7008095)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ54	(*(volatile uint_io8_t*)0xB7008096)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ55	(*(volatile uint_io8_t*)0xB7008097)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ56	(*(volatile uint_io8_t*)0xB7008098)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ57	(*(volatile uint_io8_t*)0xB7008099)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ58	(*(volatile uint_io8_t*)0xB700809A)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ59	(*(volatile uint_io8_t*)0xB700809B)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ60	(*(volatile uint_io8_t*)0xB700809C)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ61	(*(volatile uint_io8_t*)0xB700809D)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ62	(*(volatile uint_io8_t*)0xB700809E)  /*@bfbba@*/
#define DMA0_EDIRQ2_EDIRQ63	(*(volatile uint_io8_t*)0xB700809F)  /*@bfbba@*/

typedef struct stc_dma0_edirq2_field{
    uint_io32_t		u1EDIRQ32:1;
    uint_io32_t		u1EDIRQ33:1;
    uint_io32_t		u1EDIRQ34:1;
    uint_io32_t		u1EDIRQ35:1;
    uint_io32_t		u1EDIRQ36:1;
    uint_io32_t		u1EDIRQ37:1;
    uint_io32_t		u1EDIRQ38:1;
    uint_io32_t		u1EDIRQ39:1;
    uint_io32_t		u1EDIRQ40:1;
    uint_io32_t		u1EDIRQ41:1;
    uint_io32_t		u1EDIRQ42:1;
    uint_io32_t		u1EDIRQ43:1;
    uint_io32_t		u1EDIRQ44:1;
    uint_io32_t		u1EDIRQ45:1;
    uint_io32_t		u1EDIRQ46:1;
    uint_io32_t		u1EDIRQ47:1;
    uint_io32_t		u1EDIRQ48:1;
    uint_io32_t		u1EDIRQ49:1;
    uint_io32_t		u1EDIRQ50:1;
    uint_io32_t		u1EDIRQ51:1;
    uint_io32_t		u1EDIRQ52:1;
    uint_io32_t		u1EDIRQ53:1;
    uint_io32_t		u1EDIRQ54:1;
    uint_io32_t		u1EDIRQ55:1;
    uint_io32_t		u1EDIRQ56:1;
    uint_io32_t		u1EDIRQ57:1;
    uint_io32_t		u1EDIRQ58:1;
    uint_io32_t		u1EDIRQ59:1;
    uint_io32_t		u1EDIRQ60:1;
    uint_io32_t		u1EDIRQ61:1;
    uint_io32_t		u1EDIRQ62:1;
    uint_io32_t		u1EDIRQ63:1;
}stc_dma0_edirq2_field_t;

typedef union un_dma0_edirq2{
    uint_io32_t		u32Register;
    stc_dma0_edirq2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_edirq2_t;

/* ID */
#define DMA0_ID	(DMA0.unID.u32Register)  /*@rg@*/
#define DMA0_ID_MID	DMA0_ID  /*@bfrg@*/

typedef union un_dma0_id{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_id_t;

/* CMICIC[8-511] */
#define DMA0_CMICIC8	(DMA0.unCMICIC8.u32Register)  /*@rg@*/
#define DMA0_CMICIC8_BEHREQACK	(*(volatile uint_io8_t*)0xB7010119)  /*@bfbba@*/
#define DMA0_CMICIC8_BEHSTPACK	(*(volatile uint_io8_t*)0xB701011B)  /*@bfbba@*/

#define DMA0_CMICIC9	(DMA0.unCMICIC9.u32Register)  /*@rg@*/
#define DMA0_CMICIC9_BEHREQACK	(*(volatile uint_io8_t*)0xB7010139)  /*@bfbba@*/
#define DMA0_CMICIC9_BEHSTPACK	(*(volatile uint_io8_t*)0xB701013B)  /*@bfbba@*/

#define DMA0_CMICIC10	(DMA0.unCMICIC10.u32Register)  /*@rg@*/
#define DMA0_CMICIC10_BEHREQACK	(*(volatile uint_io8_t*)0xB7010159)  /*@bfbba@*/
#define DMA0_CMICIC10_BEHSTPACK	(*(volatile uint_io8_t*)0xB701015B)  /*@bfbba@*/

#define DMA0_CMICIC11	(DMA0.unCMICIC11.u32Register)  /*@rg@*/
#define DMA0_CMICIC11_BEHREQACK	(*(volatile uint_io8_t*)0xB7010179)  /*@bfbba@*/
#define DMA0_CMICIC11_BEHSTPACK	(*(volatile uint_io8_t*)0xB701017B)  /*@bfbba@*/

#define DMA0_CMICIC12	(DMA0.unCMICIC12.u32Register)  /*@rg@*/
#define DMA0_CMICIC12_BEHREQACK	(*(volatile uint_io8_t*)0xB7010199)  /*@bfbba@*/
#define DMA0_CMICIC12_BEHSTPACK	(*(volatile uint_io8_t*)0xB701019B)  /*@bfbba@*/

#define DMA0_CMICIC13	(DMA0.unCMICIC13.u32Register)  /*@rg@*/
#define DMA0_CMICIC13_BEHREQACK	(*(volatile uint_io8_t*)0xB70101B9)  /*@bfbba@*/
#define DMA0_CMICIC13_BEHSTPACK	(*(volatile uint_io8_t*)0xB70101BB)  /*@bfbba@*/

#define DMA0_CMICIC14	(DMA0.unCMICIC14.u32Register)  /*@rg@*/
#define DMA0_CMICIC14_BEHREQACK	(*(volatile uint_io8_t*)0xB70101D9)  /*@bfbba@*/
#define DMA0_CMICIC14_BEHSTPACK	(*(volatile uint_io8_t*)0xB70101DB)  /*@bfbba@*/

#define DMA0_CMICIC15	(DMA0.unCMICIC15.u32Register)  /*@rg@*/
#define DMA0_CMICIC15_BEHREQACK	(*(volatile uint_io8_t*)0xB70101F9)  /*@bfbba@*/
#define DMA0_CMICIC15_BEHSTPACK	(*(volatile uint_io8_t*)0xB70101FB)  /*@bfbba@*/

#define DMA0_CMICIC16	(DMA0.unCMICIC16.u32Register)  /*@rg@*/
#define DMA0_CMICIC16_BEHREQACK	(*(volatile uint_io8_t*)0xB7010219)  /*@bfbba@*/
#define DMA0_CMICIC16_BEHSTPACK	(*(volatile uint_io8_t*)0xB701021B)  /*@bfbba@*/

#define DMA0_CMICIC17	(DMA0.unCMICIC17.u32Register)  /*@rg@*/
#define DMA0_CMICIC17_BEHREQACK	(*(volatile uint_io8_t*)0xB7010239)  /*@bfbba@*/
#define DMA0_CMICIC17_BEHSTPACK	(*(volatile uint_io8_t*)0xB701023B)  /*@bfbba@*/

#define DMA0_CMICIC18	(DMA0.unCMICIC18.u32Register)  /*@rg@*/
#define DMA0_CMICIC18_BEHREQACK	(*(volatile uint_io8_t*)0xB7010259)  /*@bfbba@*/
#define DMA0_CMICIC18_BEHSTPACK	(*(volatile uint_io8_t*)0xB701025B)  /*@bfbba@*/

#define DMA0_CMICIC19	(DMA0.unCMICIC19.u32Register)  /*@rg@*/
#define DMA0_CMICIC19_BEHREQACK	(*(volatile uint_io8_t*)0xB7010279)  /*@bfbba@*/
#define DMA0_CMICIC19_BEHSTPACK	(*(volatile uint_io8_t*)0xB701027B)  /*@bfbba@*/

#define DMA0_CMICIC20	(DMA0.unCMICIC20.u32Register)  /*@rg@*/
#define DMA0_CMICIC20_BEHREQACK	(*(volatile uint_io8_t*)0xB7010299)  /*@bfbba@*/
#define DMA0_CMICIC20_BEHSTPACK	(*(volatile uint_io8_t*)0xB701029B)  /*@bfbba@*/

#define DMA0_CMICIC21	(DMA0.unCMICIC21.u32Register)  /*@rg@*/
#define DMA0_CMICIC21_BEHREQACK	(*(volatile uint_io8_t*)0xB70102B9)  /*@bfbba@*/
#define DMA0_CMICIC21_BEHSTPACK	(*(volatile uint_io8_t*)0xB70102BB)  /*@bfbba@*/

#define DMA0_CMICIC22	(DMA0.unCMICIC22.u32Register)  /*@rg@*/
#define DMA0_CMICIC22_BEHREQACK	(*(volatile uint_io8_t*)0xB70102D9)  /*@bfbba@*/
#define DMA0_CMICIC22_BEHSTPACK	(*(volatile uint_io8_t*)0xB70102DB)  /*@bfbba@*/

#define DMA0_CMICIC23	(DMA0.unCMICIC23.u32Register)  /*@rg@*/
#define DMA0_CMICIC23_BEHREQACK	(*(volatile uint_io8_t*)0xB70102F9)  /*@bfbba@*/
#define DMA0_CMICIC23_BEHSTPACK	(*(volatile uint_io8_t*)0xB70102FB)  /*@bfbba@*/

#define DMA0_CMICIC24	(DMA0.unCMICIC24.u32Register)  /*@rg@*/
#define DMA0_CMICIC24_BEHREQACK	(*(volatile uint_io8_t*)0xB7010319)  /*@bfbba@*/
#define DMA0_CMICIC24_BEHSTPACK	(*(volatile uint_io8_t*)0xB701031B)  /*@bfbba@*/

#define DMA0_CMICIC25	(DMA0.unCMICIC25.u32Register)  /*@rg@*/
#define DMA0_CMICIC25_BEHREQACK	(*(volatile uint_io8_t*)0xB7010339)  /*@bfbba@*/
#define DMA0_CMICIC25_BEHSTPACK	(*(volatile uint_io8_t*)0xB701033B)  /*@bfbba@*/

#define DMA0_CMICIC26	(DMA0.unCMICIC26.u32Register)  /*@rg@*/
#define DMA0_CMICIC26_BEHREQACK	(*(volatile uint_io8_t*)0xB7010359)  /*@bfbba@*/
#define DMA0_CMICIC26_BEHSTPACK	(*(volatile uint_io8_t*)0xB701035B)  /*@bfbba@*/

#define DMA0_CMICIC27	(DMA0.unCMICIC27.u32Register)  /*@rg@*/
#define DMA0_CMICIC27_BEHREQACK	(*(volatile uint_io8_t*)0xB7010379)  /*@bfbba@*/
#define DMA0_CMICIC27_BEHSTPACK	(*(volatile uint_io8_t*)0xB701037B)  /*@bfbba@*/

#define DMA0_CMICIC28	(DMA0.unCMICIC28.u32Register)  /*@rg@*/
#define DMA0_CMICIC28_BEHREQACK	(*(volatile uint_io8_t*)0xB7010399)  /*@bfbba@*/
#define DMA0_CMICIC28_BEHSTPACK	(*(volatile uint_io8_t*)0xB701039B)  /*@bfbba@*/

#define DMA0_CMICIC29	(DMA0.unCMICIC29.u32Register)  /*@rg@*/
#define DMA0_CMICIC29_BEHREQACK	(*(volatile uint_io8_t*)0xB70103B9)  /*@bfbba@*/
#define DMA0_CMICIC29_BEHSTPACK	(*(volatile uint_io8_t*)0xB70103BB)  /*@bfbba@*/

#define DMA0_CMICIC30	(DMA0.unCMICIC30.u32Register)  /*@rg@*/
#define DMA0_CMICIC30_BEHREQACK	(*(volatile uint_io8_t*)0xB70103D9)  /*@bfbba@*/
#define DMA0_CMICIC30_BEHSTPACK	(*(volatile uint_io8_t*)0xB70103DB)  /*@bfbba@*/

#define DMA0_CMICIC31	(DMA0.unCMICIC31.u32Register)  /*@rg@*/
#define DMA0_CMICIC31_BEHREQACK	(*(volatile uint_io8_t*)0xB70103F9)  /*@bfbba@*/
#define DMA0_CMICIC31_BEHSTPACK	(*(volatile uint_io8_t*)0xB70103FB)  /*@bfbba@*/

#define DMA0_CMICIC32	(DMA0.unCMICIC32.u32Register)  /*@rg@*/
#define DMA0_CMICIC32_BEHREQACK	(*(volatile uint_io8_t*)0xB7010419)  /*@bfbba@*/
#define DMA0_CMICIC32_BEHSTPACK	(*(volatile uint_io8_t*)0xB701041B)  /*@bfbba@*/

#define DMA0_CMICIC33	(DMA0.unCMICIC33.u32Register)  /*@rg@*/
#define DMA0_CMICIC33_BEHREQACK	(*(volatile uint_io8_t*)0xB7010439)  /*@bfbba@*/
#define DMA0_CMICIC33_BEHSTPACK	(*(volatile uint_io8_t*)0xB701043B)  /*@bfbba@*/

#define DMA0_CMICIC34	(DMA0.unCMICIC34.u32Register)  /*@rg@*/
#define DMA0_CMICIC34_BEHREQACK	(*(volatile uint_io8_t*)0xB7010459)  /*@bfbba@*/
#define DMA0_CMICIC34_BEHSTPACK	(*(volatile uint_io8_t*)0xB701045B)  /*@bfbba@*/

#define DMA0_CMICIC35	(DMA0.unCMICIC35.u32Register)  /*@rg@*/
#define DMA0_CMICIC35_BEHREQACK	(*(volatile uint_io8_t*)0xB7010479)  /*@bfbba@*/
#define DMA0_CMICIC35_BEHSTPACK	(*(volatile uint_io8_t*)0xB701047B)  /*@bfbba@*/

#define DMA0_CMICIC36	(DMA0.unCMICIC36.u32Register)  /*@rg@*/
#define DMA0_CMICIC36_BEHREQACK	(*(volatile uint_io8_t*)0xB7010499)  /*@bfbba@*/
#define DMA0_CMICIC36_BEHSTPACK	(*(volatile uint_io8_t*)0xB701049B)  /*@bfbba@*/

#define DMA0_CMICIC37	(DMA0.unCMICIC37.u32Register)  /*@rg@*/
#define DMA0_CMICIC37_BEHREQACK	(*(volatile uint_io8_t*)0xB70104B9)  /*@bfbba@*/
#define DMA0_CMICIC37_BEHSTPACK	(*(volatile uint_io8_t*)0xB70104BB)  /*@bfbba@*/

#define DMA0_CMICIC38	(DMA0.unCMICIC38.u32Register)  /*@rg@*/
#define DMA0_CMICIC38_BEHREQACK	(*(volatile uint_io8_t*)0xB70104D9)  /*@bfbba@*/
#define DMA0_CMICIC38_BEHSTPACK	(*(volatile uint_io8_t*)0xB70104DB)  /*@bfbba@*/

#define DMA0_CMICIC39	(DMA0.unCMICIC39.u32Register)  /*@rg@*/
#define DMA0_CMICIC39_BEHREQACK	(*(volatile uint_io8_t*)0xB70104F9)  /*@bfbba@*/
#define DMA0_CMICIC39_BEHSTPACK	(*(volatile uint_io8_t*)0xB70104FB)  /*@bfbba@*/

#define DMA0_CMICIC40	(DMA0.unCMICIC40.u32Register)  /*@rg@*/
#define DMA0_CMICIC40_BEHREQACK	(*(volatile uint_io8_t*)0xB7010519)  /*@bfbba@*/
#define DMA0_CMICIC40_BEHSTPACK	(*(volatile uint_io8_t*)0xB701051B)  /*@bfbba@*/

#define DMA0_CMICIC41	(DMA0.unCMICIC41.u32Register)  /*@rg@*/
#define DMA0_CMICIC41_BEHREQACK	(*(volatile uint_io8_t*)0xB7010539)  /*@bfbba@*/
#define DMA0_CMICIC41_BEHSTPACK	(*(volatile uint_io8_t*)0xB701053B)  /*@bfbba@*/

#define DMA0_CMICIC42	(DMA0.unCMICIC42.u32Register)  /*@rg@*/
#define DMA0_CMICIC42_BEHREQACK	(*(volatile uint_io8_t*)0xB7010559)  /*@bfbba@*/
#define DMA0_CMICIC42_BEHSTPACK	(*(volatile uint_io8_t*)0xB701055B)  /*@bfbba@*/

#define DMA0_CMICIC43	(DMA0.unCMICIC43.u32Register)  /*@rg@*/
#define DMA0_CMICIC43_BEHREQACK	(*(volatile uint_io8_t*)0xB7010579)  /*@bfbba@*/
#define DMA0_CMICIC43_BEHSTPACK	(*(volatile uint_io8_t*)0xB701057B)  /*@bfbba@*/

#define DMA0_CMICIC44	(DMA0.unCMICIC44.u32Register)  /*@rg@*/
#define DMA0_CMICIC44_BEHREQACK	(*(volatile uint_io8_t*)0xB7010599)  /*@bfbba@*/
#define DMA0_CMICIC44_BEHSTPACK	(*(volatile uint_io8_t*)0xB701059B)  /*@bfbba@*/

#define DMA0_CMICIC45	(DMA0.unCMICIC45.u32Register)  /*@rg@*/
#define DMA0_CMICIC45_BEHREQACK	(*(volatile uint_io8_t*)0xB70105B9)  /*@bfbba@*/
#define DMA0_CMICIC45_BEHSTPACK	(*(volatile uint_io8_t*)0xB70105BB)  /*@bfbba@*/

#define DMA0_CMICIC46	(DMA0.unCMICIC46.u32Register)  /*@rg@*/
#define DMA0_CMICIC46_BEHREQACK	(*(volatile uint_io8_t*)0xB70105D9)  /*@bfbba@*/
#define DMA0_CMICIC46_BEHSTPACK	(*(volatile uint_io8_t*)0xB70105DB)  /*@bfbba@*/

#define DMA0_CMICIC47	(DMA0.unCMICIC47.u32Register)  /*@rg@*/
#define DMA0_CMICIC47_BEHREQACK	(*(volatile uint_io8_t*)0xB70105F9)  /*@bfbba@*/
#define DMA0_CMICIC47_BEHSTPACK	(*(volatile uint_io8_t*)0xB70105FB)  /*@bfbba@*/

#define DMA0_CMICIC48	(DMA0.unCMICIC48.u32Register)  /*@rg@*/
#define DMA0_CMICIC48_BEHREQACK	(*(volatile uint_io8_t*)0xB7010619)  /*@bfbba@*/
#define DMA0_CMICIC48_BEHSTPACK	(*(volatile uint_io8_t*)0xB701061B)  /*@bfbba@*/

#define DMA0_CMICIC49	(DMA0.unCMICIC49.u32Register)  /*@rg@*/
#define DMA0_CMICIC49_BEHREQACK	(*(volatile uint_io8_t*)0xB7010639)  /*@bfbba@*/
#define DMA0_CMICIC49_BEHSTPACK	(*(volatile uint_io8_t*)0xB701063B)  /*@bfbba@*/

#define DMA0_CMICIC50	(DMA0.unCMICIC50.u32Register)  /*@rg@*/
#define DMA0_CMICIC50_BEHREQACK	(*(volatile uint_io8_t*)0xB7010659)  /*@bfbba@*/
#define DMA0_CMICIC50_BEHSTPACK	(*(volatile uint_io8_t*)0xB701065B)  /*@bfbba@*/

#define DMA0_CMICIC51	(DMA0.unCMICIC51.u32Register)  /*@rg@*/
#define DMA0_CMICIC51_BEHREQACK	(*(volatile uint_io8_t*)0xB7010679)  /*@bfbba@*/
#define DMA0_CMICIC51_BEHSTPACK	(*(volatile uint_io8_t*)0xB701067B)  /*@bfbba@*/

#define DMA0_CMICIC52	(DMA0.unCMICIC52.u32Register)  /*@rg@*/
#define DMA0_CMICIC52_BEHREQACK	(*(volatile uint_io8_t*)0xB7010699)  /*@bfbba@*/
#define DMA0_CMICIC52_BEHSTPACK	(*(volatile uint_io8_t*)0xB701069B)  /*@bfbba@*/

#define DMA0_CMICIC53	(DMA0.unCMICIC53.u32Register)  /*@rg@*/
#define DMA0_CMICIC53_BEHREQACK	(*(volatile uint_io8_t*)0xB70106B9)  /*@bfbba@*/
#define DMA0_CMICIC53_BEHSTPACK	(*(volatile uint_io8_t*)0xB70106BB)  /*@bfbba@*/

#define DMA0_CMICIC54	(DMA0.unCMICIC54.u32Register)  /*@rg@*/
#define DMA0_CMICIC54_BEHREQACK	(*(volatile uint_io8_t*)0xB70106D9)  /*@bfbba@*/
#define DMA0_CMICIC54_BEHSTPACK	(*(volatile uint_io8_t*)0xB70106DB)  /*@bfbba@*/

#define DMA0_CMICIC55	(DMA0.unCMICIC55.u32Register)  /*@rg@*/
#define DMA0_CMICIC55_BEHREQACK	(*(volatile uint_io8_t*)0xB70106F9)  /*@bfbba@*/
#define DMA0_CMICIC55_BEHSTPACK	(*(volatile uint_io8_t*)0xB70106FB)  /*@bfbba@*/

#define DMA0_CMICIC56	(DMA0.unCMICIC56.u32Register)  /*@rg@*/
#define DMA0_CMICIC56_BEHREQACK	(*(volatile uint_io8_t*)0xB7010719)  /*@bfbba@*/
#define DMA0_CMICIC56_BEHSTPACK	(*(volatile uint_io8_t*)0xB701071B)  /*@bfbba@*/

#define DMA0_CMICIC57	(DMA0.unCMICIC57.u32Register)  /*@rg@*/
#define DMA0_CMICIC57_BEHREQACK	(*(volatile uint_io8_t*)0xB7010739)  /*@bfbba@*/
#define DMA0_CMICIC57_BEHSTPACK	(*(volatile uint_io8_t*)0xB701073B)  /*@bfbba@*/

#define DMA0_CMICIC58	(DMA0.unCMICIC58.u32Register)  /*@rg@*/
#define DMA0_CMICIC58_BEHREQACK	(*(volatile uint_io8_t*)0xB7010759)  /*@bfbba@*/
#define DMA0_CMICIC58_BEHSTPACK	(*(volatile uint_io8_t*)0xB701075B)  /*@bfbba@*/

#define DMA0_CMICIC59	(DMA0.unCMICIC59.u32Register)  /*@rg@*/
#define DMA0_CMICIC59_BEHREQACK	(*(volatile uint_io8_t*)0xB7010779)  /*@bfbba@*/
#define DMA0_CMICIC59_BEHSTPACK	(*(volatile uint_io8_t*)0xB701077B)  /*@bfbba@*/

#define DMA0_CMICIC60	(DMA0.unCMICIC60.u32Register)  /*@rg@*/
#define DMA0_CMICIC60_BEHREQACK	(*(volatile uint_io8_t*)0xB7010799)  /*@bfbba@*/
#define DMA0_CMICIC60_BEHSTPACK	(*(volatile uint_io8_t*)0xB701079B)  /*@bfbba@*/

#define DMA0_CMICIC61	(DMA0.unCMICIC61.u32Register)  /*@rg@*/
#define DMA0_CMICIC61_BEHREQACK	(*(volatile uint_io8_t*)0xB70107B9)  /*@bfbba@*/
#define DMA0_CMICIC61_BEHSTPACK	(*(volatile uint_io8_t*)0xB70107BB)  /*@bfbba@*/

#define DMA0_CMICIC62	(DMA0.unCMICIC62.u32Register)  /*@rg@*/
#define DMA0_CMICIC62_BEHREQACK	(*(volatile uint_io8_t*)0xB70107D9)  /*@bfbba@*/
#define DMA0_CMICIC62_BEHSTPACK	(*(volatile uint_io8_t*)0xB70107DB)  /*@bfbba@*/

#define DMA0_CMICIC63	(DMA0.unCMICIC63.u32Register)  /*@rg@*/
#define DMA0_CMICIC63_BEHREQACK	(*(volatile uint_io8_t*)0xB70107F9)  /*@bfbba@*/
#define DMA0_CMICIC63_BEHSTPACK	(*(volatile uint_io8_t*)0xB70107FB)  /*@bfbba@*/

#define DMA0_CMICIC64	(DMA0.unCMICIC64.u32Register)  /*@rg@*/
#define DMA0_CMICIC64_BEHREQACK	(*(volatile uint_io8_t*)0xB7010819)  /*@bfbba@*/
#define DMA0_CMICIC64_BEHSTPACK	(*(volatile uint_io8_t*)0xB701081B)  /*@bfbba@*/

#define DMA0_CMICIC65	(DMA0.unCMICIC65.u32Register)  /*@rg@*/
#define DMA0_CMICIC65_BEHREQACK	(*(volatile uint_io8_t*)0xB7010839)  /*@bfbba@*/
#define DMA0_CMICIC65_BEHSTPACK	(*(volatile uint_io8_t*)0xB701083B)  /*@bfbba@*/

#define DMA0_CMICIC66	(DMA0.unCMICIC66.u32Register)  /*@rg@*/
#define DMA0_CMICIC66_BEHREQACK	(*(volatile uint_io8_t*)0xB7010859)  /*@bfbba@*/
#define DMA0_CMICIC66_BEHSTPACK	(*(volatile uint_io8_t*)0xB701085B)  /*@bfbba@*/

#define DMA0_CMICIC67	(DMA0.unCMICIC67.u32Register)  /*@rg@*/
#define DMA0_CMICIC67_BEHREQACK	(*(volatile uint_io8_t*)0xB7010879)  /*@bfbba@*/
#define DMA0_CMICIC67_BEHSTPACK	(*(volatile uint_io8_t*)0xB701087B)  /*@bfbba@*/

#define DMA0_CMICIC68	(DMA0.unCMICIC68.u32Register)  /*@rg@*/
#define DMA0_CMICIC68_BEHREQACK	(*(volatile uint_io8_t*)0xB7010899)  /*@bfbba@*/
#define DMA0_CMICIC68_BEHSTPACK	(*(volatile uint_io8_t*)0xB701089B)  /*@bfbba@*/

#define DMA0_CMICIC69	(DMA0.unCMICIC69.u32Register)  /*@rg@*/
#define DMA0_CMICIC69_BEHREQACK	(*(volatile uint_io8_t*)0xB70108B9)  /*@bfbba@*/
#define DMA0_CMICIC69_BEHSTPACK	(*(volatile uint_io8_t*)0xB70108BB)  /*@bfbba@*/

#define DMA0_CMICIC70	(DMA0.unCMICIC70.u32Register)  /*@rg@*/
#define DMA0_CMICIC70_BEHREQACK	(*(volatile uint_io8_t*)0xB70108D9)  /*@bfbba@*/
#define DMA0_CMICIC70_BEHSTPACK	(*(volatile uint_io8_t*)0xB70108DB)  /*@bfbba@*/

#define DMA0_CMICIC71	(DMA0.unCMICIC71.u32Register)  /*@rg@*/
#define DMA0_CMICIC71_BEHREQACK	(*(volatile uint_io8_t*)0xB70108F9)  /*@bfbba@*/
#define DMA0_CMICIC71_BEHSTPACK	(*(volatile uint_io8_t*)0xB70108FB)  /*@bfbba@*/

#define DMA0_CMICIC72	(DMA0.unCMICIC72.u32Register)  /*@rg@*/
#define DMA0_CMICIC72_BEHREQACK	(*(volatile uint_io8_t*)0xB7010919)  /*@bfbba@*/
#define DMA0_CMICIC72_BEHSTPACK	(*(volatile uint_io8_t*)0xB701091B)  /*@bfbba@*/

#define DMA0_CMICIC73	(DMA0.unCMICIC73.u32Register)  /*@rg@*/
#define DMA0_CMICIC73_BEHREQACK	(*(volatile uint_io8_t*)0xB7010939)  /*@bfbba@*/
#define DMA0_CMICIC73_BEHSTPACK	(*(volatile uint_io8_t*)0xB701093B)  /*@bfbba@*/

#define DMA0_CMICIC74	(DMA0.unCMICIC74.u32Register)  /*@rg@*/
#define DMA0_CMICIC74_BEHREQACK	(*(volatile uint_io8_t*)0xB7010959)  /*@bfbba@*/
#define DMA0_CMICIC74_BEHSTPACK	(*(volatile uint_io8_t*)0xB701095B)  /*@bfbba@*/

#define DMA0_CMICIC75	(DMA0.unCMICIC75.u32Register)  /*@rg@*/
#define DMA0_CMICIC75_BEHREQACK	(*(volatile uint_io8_t*)0xB7010979)  /*@bfbba@*/
#define DMA0_CMICIC75_BEHSTPACK	(*(volatile uint_io8_t*)0xB701097B)  /*@bfbba@*/

#define DMA0_CMICIC76	(DMA0.unCMICIC76.u32Register)  /*@rg@*/
#define DMA0_CMICIC76_BEHREQACK	(*(volatile uint_io8_t*)0xB7010999)  /*@bfbba@*/
#define DMA0_CMICIC76_BEHSTPACK	(*(volatile uint_io8_t*)0xB701099B)  /*@bfbba@*/

#define DMA0_CMICIC77	(DMA0.unCMICIC77.u32Register)  /*@rg@*/
#define DMA0_CMICIC77_BEHREQACK	(*(volatile uint_io8_t*)0xB70109B9)  /*@bfbba@*/
#define DMA0_CMICIC77_BEHSTPACK	(*(volatile uint_io8_t*)0xB70109BB)  /*@bfbba@*/

#define DMA0_CMICIC78	(DMA0.unCMICIC78.u32Register)  /*@rg@*/
#define DMA0_CMICIC78_BEHREQACK	(*(volatile uint_io8_t*)0xB70109D9)  /*@bfbba@*/
#define DMA0_CMICIC78_BEHSTPACK	(*(volatile uint_io8_t*)0xB70109DB)  /*@bfbba@*/

#define DMA0_CMICIC79	(DMA0.unCMICIC79.u32Register)  /*@rg@*/
#define DMA0_CMICIC79_BEHREQACK	(*(volatile uint_io8_t*)0xB70109F9)  /*@bfbba@*/
#define DMA0_CMICIC79_BEHSTPACK	(*(volatile uint_io8_t*)0xB70109FB)  /*@bfbba@*/

#define DMA0_CMICIC80	(DMA0.unCMICIC80.u32Register)  /*@rg@*/
#define DMA0_CMICIC80_BEHREQACK	(*(volatile uint_io8_t*)0xB7010A19)  /*@bfbba@*/
#define DMA0_CMICIC80_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010A1B)  /*@bfbba@*/

#define DMA0_CMICIC81	(DMA0.unCMICIC81.u32Register)  /*@rg@*/
#define DMA0_CMICIC81_BEHREQACK	(*(volatile uint_io8_t*)0xB7010A39)  /*@bfbba@*/
#define DMA0_CMICIC81_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010A3B)  /*@bfbba@*/

#define DMA0_CMICIC82	(DMA0.unCMICIC82.u32Register)  /*@rg@*/
#define DMA0_CMICIC82_BEHREQACK	(*(volatile uint_io8_t*)0xB7010A59)  /*@bfbba@*/
#define DMA0_CMICIC82_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010A5B)  /*@bfbba@*/

#define DMA0_CMICIC83	(DMA0.unCMICIC83.u32Register)  /*@rg@*/
#define DMA0_CMICIC83_BEHREQACK	(*(volatile uint_io8_t*)0xB7010A79)  /*@bfbba@*/
#define DMA0_CMICIC83_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010A7B)  /*@bfbba@*/

#define DMA0_CMICIC84	(DMA0.unCMICIC84.u32Register)  /*@rg@*/
#define DMA0_CMICIC84_BEHREQACK	(*(volatile uint_io8_t*)0xB7010A99)  /*@bfbba@*/
#define DMA0_CMICIC84_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010A9B)  /*@bfbba@*/

#define DMA0_CMICIC85	(DMA0.unCMICIC85.u32Register)  /*@rg@*/
#define DMA0_CMICIC85_BEHREQACK	(*(volatile uint_io8_t*)0xB7010AB9)  /*@bfbba@*/
#define DMA0_CMICIC85_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010ABB)  /*@bfbba@*/

#define DMA0_CMICIC86	(DMA0.unCMICIC86.u32Register)  /*@rg@*/
#define DMA0_CMICIC86_BEHREQACK	(*(volatile uint_io8_t*)0xB7010AD9)  /*@bfbba@*/
#define DMA0_CMICIC86_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010ADB)  /*@bfbba@*/

#define DMA0_CMICIC87	(DMA0.unCMICIC87.u32Register)  /*@rg@*/
#define DMA0_CMICIC87_BEHREQACK	(*(volatile uint_io8_t*)0xB7010AF9)  /*@bfbba@*/
#define DMA0_CMICIC87_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010AFB)  /*@bfbba@*/

#define DMA0_CMICIC88	(DMA0.unCMICIC88.u32Register)  /*@rg@*/
#define DMA0_CMICIC88_BEHREQACK	(*(volatile uint_io8_t*)0xB7010B19)  /*@bfbba@*/
#define DMA0_CMICIC88_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010B1B)  /*@bfbba@*/

#define DMA0_CMICIC89	(DMA0.unCMICIC89.u32Register)  /*@rg@*/
#define DMA0_CMICIC89_BEHREQACK	(*(volatile uint_io8_t*)0xB7010B39)  /*@bfbba@*/
#define DMA0_CMICIC89_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010B3B)  /*@bfbba@*/

#define DMA0_CMICIC90	(DMA0.unCMICIC90.u32Register)  /*@rg@*/
#define DMA0_CMICIC90_BEHREQACK	(*(volatile uint_io8_t*)0xB7010B59)  /*@bfbba@*/
#define DMA0_CMICIC90_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010B5B)  /*@bfbba@*/

#define DMA0_CMICIC91	(DMA0.unCMICIC91.u32Register)  /*@rg@*/
#define DMA0_CMICIC91_BEHREQACK	(*(volatile uint_io8_t*)0xB7010B79)  /*@bfbba@*/
#define DMA0_CMICIC91_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010B7B)  /*@bfbba@*/

#define DMA0_CMICIC92	(DMA0.unCMICIC92.u32Register)  /*@rg@*/
#define DMA0_CMICIC92_BEHREQACK	(*(volatile uint_io8_t*)0xB7010B99)  /*@bfbba@*/
#define DMA0_CMICIC92_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010B9B)  /*@bfbba@*/

#define DMA0_CMICIC93	(DMA0.unCMICIC93.u32Register)  /*@rg@*/
#define DMA0_CMICIC93_BEHREQACK	(*(volatile uint_io8_t*)0xB7010BB9)  /*@bfbba@*/
#define DMA0_CMICIC93_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010BBB)  /*@bfbba@*/

#define DMA0_CMICIC94	(DMA0.unCMICIC94.u32Register)  /*@rg@*/
#define DMA0_CMICIC94_BEHREQACK	(*(volatile uint_io8_t*)0xB7010BD9)  /*@bfbba@*/
#define DMA0_CMICIC94_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010BDB)  /*@bfbba@*/

#define DMA0_CMICIC95	(DMA0.unCMICIC95.u32Register)  /*@rg@*/
#define DMA0_CMICIC95_BEHREQACK	(*(volatile uint_io8_t*)0xB7010BF9)  /*@bfbba@*/
#define DMA0_CMICIC95_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010BFB)  /*@bfbba@*/

#define DMA0_CMICIC96	(DMA0.unCMICIC96.u32Register)  /*@rg@*/
#define DMA0_CMICIC96_BEHREQACK	(*(volatile uint_io8_t*)0xB7010C19)  /*@bfbba@*/
#define DMA0_CMICIC96_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010C1B)  /*@bfbba@*/

#define DMA0_CMICIC97	(DMA0.unCMICIC97.u32Register)  /*@rg@*/
#define DMA0_CMICIC97_BEHREQACK	(*(volatile uint_io8_t*)0xB7010C39)  /*@bfbba@*/
#define DMA0_CMICIC97_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010C3B)  /*@bfbba@*/

#define DMA0_CMICIC98	(DMA0.unCMICIC98.u32Register)  /*@rg@*/
#define DMA0_CMICIC98_BEHREQACK	(*(volatile uint_io8_t*)0xB7010C59)  /*@bfbba@*/
#define DMA0_CMICIC98_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010C5B)  /*@bfbba@*/

#define DMA0_CMICIC99	(DMA0.unCMICIC99.u32Register)  /*@rg@*/
#define DMA0_CMICIC99_BEHREQACK	(*(volatile uint_io8_t*)0xB7010C79)  /*@bfbba@*/
#define DMA0_CMICIC99_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010C7B)  /*@bfbba@*/

#define DMA0_CMICIC100	(DMA0.unCMICIC100.u32Register)  /*@rg@*/
#define DMA0_CMICIC100_BEHREQACK	(*(volatile uint_io8_t*)0xB7010C99)  /*@bfbba@*/
#define DMA0_CMICIC100_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010C9B)  /*@bfbba@*/

#define DMA0_CMICIC101	(DMA0.unCMICIC101.u32Register)  /*@rg@*/
#define DMA0_CMICIC101_BEHREQACK	(*(volatile uint_io8_t*)0xB7010CB9)  /*@bfbba@*/
#define DMA0_CMICIC101_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010CBB)  /*@bfbba@*/

#define DMA0_CMICIC102	(DMA0.unCMICIC102.u32Register)  /*@rg@*/
#define DMA0_CMICIC102_BEHREQACK	(*(volatile uint_io8_t*)0xB7010CD9)  /*@bfbba@*/
#define DMA0_CMICIC102_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010CDB)  /*@bfbba@*/

#define DMA0_CMICIC103	(DMA0.unCMICIC103.u32Register)  /*@rg@*/
#define DMA0_CMICIC103_BEHREQACK	(*(volatile uint_io8_t*)0xB7010CF9)  /*@bfbba@*/
#define DMA0_CMICIC103_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010CFB)  /*@bfbba@*/

#define DMA0_CMICIC104	(DMA0.unCMICIC104.u32Register)  /*@rg@*/
#define DMA0_CMICIC104_BEHREQACK	(*(volatile uint_io8_t*)0xB7010D19)  /*@bfbba@*/
#define DMA0_CMICIC104_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010D1B)  /*@bfbba@*/

#define DMA0_CMICIC105	(DMA0.unCMICIC105.u32Register)  /*@rg@*/
#define DMA0_CMICIC105_BEHREQACK	(*(volatile uint_io8_t*)0xB7010D39)  /*@bfbba@*/
#define DMA0_CMICIC105_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010D3B)  /*@bfbba@*/

#define DMA0_CMICIC106	(DMA0.unCMICIC106.u32Register)  /*@rg@*/
#define DMA0_CMICIC106_BEHREQACK	(*(volatile uint_io8_t*)0xB7010D59)  /*@bfbba@*/
#define DMA0_CMICIC106_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010D5B)  /*@bfbba@*/

#define DMA0_CMICIC107	(DMA0.unCMICIC107.u32Register)  /*@rg@*/
#define DMA0_CMICIC107_BEHREQACK	(*(volatile uint_io8_t*)0xB7010D79)  /*@bfbba@*/
#define DMA0_CMICIC107_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010D7B)  /*@bfbba@*/

#define DMA0_CMICIC108	(DMA0.unCMICIC108.u32Register)  /*@rg@*/
#define DMA0_CMICIC108_BEHREQACK	(*(volatile uint_io8_t*)0xB7010D99)  /*@bfbba@*/
#define DMA0_CMICIC108_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010D9B)  /*@bfbba@*/

#define DMA0_CMICIC109	(DMA0.unCMICIC109.u32Register)  /*@rg@*/
#define DMA0_CMICIC109_BEHREQACK	(*(volatile uint_io8_t*)0xB7010DB9)  /*@bfbba@*/
#define DMA0_CMICIC109_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010DBB)  /*@bfbba@*/

#define DMA0_CMICIC110	(DMA0.unCMICIC110.u32Register)  /*@rg@*/
#define DMA0_CMICIC110_BEHREQACK	(*(volatile uint_io8_t*)0xB7010DD9)  /*@bfbba@*/
#define DMA0_CMICIC110_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010DDB)  /*@bfbba@*/

#define DMA0_CMICIC111	(DMA0.unCMICIC111.u32Register)  /*@rg@*/
#define DMA0_CMICIC111_BEHREQACK	(*(volatile uint_io8_t*)0xB7010DF9)  /*@bfbba@*/
#define DMA0_CMICIC111_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010DFB)  /*@bfbba@*/

#define DMA0_CMICIC112	(DMA0.unCMICIC112.u32Register)  /*@rg@*/
#define DMA0_CMICIC112_BEHREQACK	(*(volatile uint_io8_t*)0xB7010E19)  /*@bfbba@*/
#define DMA0_CMICIC112_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010E1B)  /*@bfbba@*/

#define DMA0_CMICIC113	(DMA0.unCMICIC113.u32Register)  /*@rg@*/
#define DMA0_CMICIC113_BEHREQACK	(*(volatile uint_io8_t*)0xB7010E39)  /*@bfbba@*/
#define DMA0_CMICIC113_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010E3B)  /*@bfbba@*/

#define DMA0_CMICIC114	(DMA0.unCMICIC114.u32Register)  /*@rg@*/
#define DMA0_CMICIC114_BEHREQACK	(*(volatile uint_io8_t*)0xB7010E59)  /*@bfbba@*/
#define DMA0_CMICIC114_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010E5B)  /*@bfbba@*/

#define DMA0_CMICIC115	(DMA0.unCMICIC115.u32Register)  /*@rg@*/
#define DMA0_CMICIC115_BEHREQACK	(*(volatile uint_io8_t*)0xB7010E79)  /*@bfbba@*/
#define DMA0_CMICIC115_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010E7B)  /*@bfbba@*/

#define DMA0_CMICIC116	(DMA0.unCMICIC116.u32Register)  /*@rg@*/
#define DMA0_CMICIC116_BEHREQACK	(*(volatile uint_io8_t*)0xB7010E99)  /*@bfbba@*/
#define DMA0_CMICIC116_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010E9B)  /*@bfbba@*/

#define DMA0_CMICIC117	(DMA0.unCMICIC117.u32Register)  /*@rg@*/
#define DMA0_CMICIC117_BEHREQACK	(*(volatile uint_io8_t*)0xB7010EB9)  /*@bfbba@*/
#define DMA0_CMICIC117_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010EBB)  /*@bfbba@*/

#define DMA0_CMICIC118	(DMA0.unCMICIC118.u32Register)  /*@rg@*/
#define DMA0_CMICIC118_BEHREQACK	(*(volatile uint_io8_t*)0xB7010ED9)  /*@bfbba@*/
#define DMA0_CMICIC118_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010EDB)  /*@bfbba@*/

#define DMA0_CMICIC119	(DMA0.unCMICIC119.u32Register)  /*@rg@*/
#define DMA0_CMICIC119_BEHREQACK	(*(volatile uint_io8_t*)0xB7010EF9)  /*@bfbba@*/
#define DMA0_CMICIC119_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010EFB)  /*@bfbba@*/

#define DMA0_CMICIC120	(DMA0.unCMICIC120.u32Register)  /*@rg@*/
#define DMA0_CMICIC120_BEHREQACK	(*(volatile uint_io8_t*)0xB7010F19)  /*@bfbba@*/
#define DMA0_CMICIC120_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010F1B)  /*@bfbba@*/

#define DMA0_CMICIC121	(DMA0.unCMICIC121.u32Register)  /*@rg@*/
#define DMA0_CMICIC121_BEHREQACK	(*(volatile uint_io8_t*)0xB7010F39)  /*@bfbba@*/
#define DMA0_CMICIC121_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010F3B)  /*@bfbba@*/

#define DMA0_CMICIC122	(DMA0.unCMICIC122.u32Register)  /*@rg@*/
#define DMA0_CMICIC122_BEHREQACK	(*(volatile uint_io8_t*)0xB7010F59)  /*@bfbba@*/
#define DMA0_CMICIC122_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010F5B)  /*@bfbba@*/

#define DMA0_CMICIC123	(DMA0.unCMICIC123.u32Register)  /*@rg@*/
#define DMA0_CMICIC123_BEHREQACK	(*(volatile uint_io8_t*)0xB7010F79)  /*@bfbba@*/
#define DMA0_CMICIC123_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010F7B)  /*@bfbba@*/

#define DMA0_CMICIC124	(DMA0.unCMICIC124.u32Register)  /*@rg@*/
#define DMA0_CMICIC124_BEHREQACK	(*(volatile uint_io8_t*)0xB7010F99)  /*@bfbba@*/
#define DMA0_CMICIC124_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010F9B)  /*@bfbba@*/

#define DMA0_CMICIC125	(DMA0.unCMICIC125.u32Register)  /*@rg@*/
#define DMA0_CMICIC125_BEHREQACK	(*(volatile uint_io8_t*)0xB7010FB9)  /*@bfbba@*/
#define DMA0_CMICIC125_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010FBB)  /*@bfbba@*/

#define DMA0_CMICIC126	(DMA0.unCMICIC126.u32Register)  /*@rg@*/
#define DMA0_CMICIC126_BEHREQACK	(*(volatile uint_io8_t*)0xB7010FD9)  /*@bfbba@*/
#define DMA0_CMICIC126_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010FDB)  /*@bfbba@*/

#define DMA0_CMICIC127	(DMA0.unCMICIC127.u32Register)  /*@rg@*/
#define DMA0_CMICIC127_BEHREQACK	(*(volatile uint_io8_t*)0xB7010FF9)  /*@bfbba@*/
#define DMA0_CMICIC127_BEHSTPACK	(*(volatile uint_io8_t*)0xB7010FFB)  /*@bfbba@*/

#define DMA0_CMICIC128	(DMA0.unCMICIC128.u32Register)  /*@rg@*/
#define DMA0_CMICIC128_BEHREQACK	(*(volatile uint_io8_t*)0xB7011019)  /*@bfbba@*/
#define DMA0_CMICIC128_BEHSTPACK	(*(volatile uint_io8_t*)0xB701101B)  /*@bfbba@*/

#define DMA0_CMICIC129	(DMA0.unCMICIC129.u32Register)  /*@rg@*/
#define DMA0_CMICIC129_BEHREQACK	(*(volatile uint_io8_t*)0xB7011039)  /*@bfbba@*/
#define DMA0_CMICIC129_BEHSTPACK	(*(volatile uint_io8_t*)0xB701103B)  /*@bfbba@*/

#define DMA0_CMICIC130	(DMA0.unCMICIC130.u32Register)  /*@rg@*/
#define DMA0_CMICIC130_BEHREQACK	(*(volatile uint_io8_t*)0xB7011059)  /*@bfbba@*/
#define DMA0_CMICIC130_BEHSTPACK	(*(volatile uint_io8_t*)0xB701105B)  /*@bfbba@*/

#define DMA0_CMICIC131	(DMA0.unCMICIC131.u32Register)  /*@rg@*/
#define DMA0_CMICIC131_BEHREQACK	(*(volatile uint_io8_t*)0xB7011079)  /*@bfbba@*/
#define DMA0_CMICIC131_BEHSTPACK	(*(volatile uint_io8_t*)0xB701107B)  /*@bfbba@*/

#define DMA0_CMICIC132	(DMA0.unCMICIC132.u32Register)  /*@rg@*/
#define DMA0_CMICIC132_BEHREQACK	(*(volatile uint_io8_t*)0xB7011099)  /*@bfbba@*/
#define DMA0_CMICIC132_BEHSTPACK	(*(volatile uint_io8_t*)0xB701109B)  /*@bfbba@*/

#define DMA0_CMICIC133	(DMA0.unCMICIC133.u32Register)  /*@rg@*/
#define DMA0_CMICIC133_BEHREQACK	(*(volatile uint_io8_t*)0xB70110B9)  /*@bfbba@*/
#define DMA0_CMICIC133_BEHSTPACK	(*(volatile uint_io8_t*)0xB70110BB)  /*@bfbba@*/

#define DMA0_CMICIC134	(DMA0.unCMICIC134.u32Register)  /*@rg@*/
#define DMA0_CMICIC134_BEHREQACK	(*(volatile uint_io8_t*)0xB70110D9)  /*@bfbba@*/
#define DMA0_CMICIC134_BEHSTPACK	(*(volatile uint_io8_t*)0xB70110DB)  /*@bfbba@*/

#define DMA0_CMICIC135	(DMA0.unCMICIC135.u32Register)  /*@rg@*/
#define DMA0_CMICIC135_BEHREQACK	(*(volatile uint_io8_t*)0xB70110F9)  /*@bfbba@*/
#define DMA0_CMICIC135_BEHSTPACK	(*(volatile uint_io8_t*)0xB70110FB)  /*@bfbba@*/

#define DMA0_CMICIC136	(DMA0.unCMICIC136.u32Register)  /*@rg@*/
#define DMA0_CMICIC136_BEHREQACK	(*(volatile uint_io8_t*)0xB7011119)  /*@bfbba@*/
#define DMA0_CMICIC136_BEHSTPACK	(*(volatile uint_io8_t*)0xB701111B)  /*@bfbba@*/

#define DMA0_CMICIC137	(DMA0.unCMICIC137.u32Register)  /*@rg@*/
#define DMA0_CMICIC137_BEHREQACK	(*(volatile uint_io8_t*)0xB7011139)  /*@bfbba@*/
#define DMA0_CMICIC137_BEHSTPACK	(*(volatile uint_io8_t*)0xB701113B)  /*@bfbba@*/

#define DMA0_CMICIC138	(DMA0.unCMICIC138.u32Register)  /*@rg@*/
#define DMA0_CMICIC138_BEHREQACK	(*(volatile uint_io8_t*)0xB7011159)  /*@bfbba@*/
#define DMA0_CMICIC138_BEHSTPACK	(*(volatile uint_io8_t*)0xB701115B)  /*@bfbba@*/

#define DMA0_CMICIC139	(DMA0.unCMICIC139.u32Register)  /*@rg@*/
#define DMA0_CMICIC139_BEHREQACK	(*(volatile uint_io8_t*)0xB7011179)  /*@bfbba@*/
#define DMA0_CMICIC139_BEHSTPACK	(*(volatile uint_io8_t*)0xB701117B)  /*@bfbba@*/

#define DMA0_CMICIC140	(DMA0.unCMICIC140.u32Register)  /*@rg@*/
#define DMA0_CMICIC140_BEHREQACK	(*(volatile uint_io8_t*)0xB7011199)  /*@bfbba@*/
#define DMA0_CMICIC140_BEHSTPACK	(*(volatile uint_io8_t*)0xB701119B)  /*@bfbba@*/

#define DMA0_CMICIC141	(DMA0.unCMICIC141.u32Register)  /*@rg@*/
#define DMA0_CMICIC141_BEHREQACK	(*(volatile uint_io8_t*)0xB70111B9)  /*@bfbba@*/
#define DMA0_CMICIC141_BEHSTPACK	(*(volatile uint_io8_t*)0xB70111BB)  /*@bfbba@*/

#define DMA0_CMICIC142	(DMA0.unCMICIC142.u32Register)  /*@rg@*/
#define DMA0_CMICIC142_BEHREQACK	(*(volatile uint_io8_t*)0xB70111D9)  /*@bfbba@*/
#define DMA0_CMICIC142_BEHSTPACK	(*(volatile uint_io8_t*)0xB70111DB)  /*@bfbba@*/

#define DMA0_CMICIC143	(DMA0.unCMICIC143.u32Register)  /*@rg@*/
#define DMA0_CMICIC143_BEHREQACK	(*(volatile uint_io8_t*)0xB70111F9)  /*@bfbba@*/
#define DMA0_CMICIC143_BEHSTPACK	(*(volatile uint_io8_t*)0xB70111FB)  /*@bfbba@*/

#define DMA0_CMICIC144	(DMA0.unCMICIC144.u32Register)  /*@rg@*/
#define DMA0_CMICIC144_BEHREQACK	(*(volatile uint_io8_t*)0xB7011219)  /*@bfbba@*/
#define DMA0_CMICIC144_BEHSTPACK	(*(volatile uint_io8_t*)0xB701121B)  /*@bfbba@*/

#define DMA0_CMICIC145	(DMA0.unCMICIC145.u32Register)  /*@rg@*/
#define DMA0_CMICIC145_BEHREQACK	(*(volatile uint_io8_t*)0xB7011239)  /*@bfbba@*/
#define DMA0_CMICIC145_BEHSTPACK	(*(volatile uint_io8_t*)0xB701123B)  /*@bfbba@*/

#define DMA0_CMICIC146	(DMA0.unCMICIC146.u32Register)  /*@rg@*/
#define DMA0_CMICIC146_BEHREQACK	(*(volatile uint_io8_t*)0xB7011259)  /*@bfbba@*/
#define DMA0_CMICIC146_BEHSTPACK	(*(volatile uint_io8_t*)0xB701125B)  /*@bfbba@*/

#define DMA0_CMICIC147	(DMA0.unCMICIC147.u32Register)  /*@rg@*/
#define DMA0_CMICIC147_BEHREQACK	(*(volatile uint_io8_t*)0xB7011279)  /*@bfbba@*/
#define DMA0_CMICIC147_BEHSTPACK	(*(volatile uint_io8_t*)0xB701127B)  /*@bfbba@*/

#define DMA0_CMICIC148	(DMA0.unCMICIC148.u32Register)  /*@rg@*/
#define DMA0_CMICIC148_BEHREQACK	(*(volatile uint_io8_t*)0xB7011299)  /*@bfbba@*/
#define DMA0_CMICIC148_BEHSTPACK	(*(volatile uint_io8_t*)0xB701129B)  /*@bfbba@*/

#define DMA0_CMICIC149	(DMA0.unCMICIC149.u32Register)  /*@rg@*/
#define DMA0_CMICIC149_BEHREQACK	(*(volatile uint_io8_t*)0xB70112B9)  /*@bfbba@*/
#define DMA0_CMICIC149_BEHSTPACK	(*(volatile uint_io8_t*)0xB70112BB)  /*@bfbba@*/

#define DMA0_CMICIC150	(DMA0.unCMICIC150.u32Register)  /*@rg@*/
#define DMA0_CMICIC150_BEHREQACK	(*(volatile uint_io8_t*)0xB70112D9)  /*@bfbba@*/
#define DMA0_CMICIC150_BEHSTPACK	(*(volatile uint_io8_t*)0xB70112DB)  /*@bfbba@*/

#define DMA0_CMICIC151	(DMA0.unCMICIC151.u32Register)  /*@rg@*/
#define DMA0_CMICIC151_BEHREQACK	(*(volatile uint_io8_t*)0xB70112F9)  /*@bfbba@*/
#define DMA0_CMICIC151_BEHSTPACK	(*(volatile uint_io8_t*)0xB70112FB)  /*@bfbba@*/

#define DMA0_CMICIC152	(DMA0.unCMICIC152.u32Register)  /*@rg@*/
#define DMA0_CMICIC152_BEHREQACK	(*(volatile uint_io8_t*)0xB7011319)  /*@bfbba@*/
#define DMA0_CMICIC152_BEHSTPACK	(*(volatile uint_io8_t*)0xB701131B)  /*@bfbba@*/

#define DMA0_CMICIC153	(DMA0.unCMICIC153.u32Register)  /*@rg@*/
#define DMA0_CMICIC153_BEHREQACK	(*(volatile uint_io8_t*)0xB7011339)  /*@bfbba@*/
#define DMA0_CMICIC153_BEHSTPACK	(*(volatile uint_io8_t*)0xB701133B)  /*@bfbba@*/

#define DMA0_CMICIC154	(DMA0.unCMICIC154.u32Register)  /*@rg@*/
#define DMA0_CMICIC154_BEHREQACK	(*(volatile uint_io8_t*)0xB7011359)  /*@bfbba@*/
#define DMA0_CMICIC154_BEHSTPACK	(*(volatile uint_io8_t*)0xB701135B)  /*@bfbba@*/

#define DMA0_CMICIC155	(DMA0.unCMICIC155.u32Register)  /*@rg@*/
#define DMA0_CMICIC155_BEHREQACK	(*(volatile uint_io8_t*)0xB7011379)  /*@bfbba@*/
#define DMA0_CMICIC155_BEHSTPACK	(*(volatile uint_io8_t*)0xB701137B)  /*@bfbba@*/

#define DMA0_CMICIC156	(DMA0.unCMICIC156.u32Register)  /*@rg@*/
#define DMA0_CMICIC156_BEHREQACK	(*(volatile uint_io8_t*)0xB7011399)  /*@bfbba@*/
#define DMA0_CMICIC156_BEHSTPACK	(*(volatile uint_io8_t*)0xB701139B)  /*@bfbba@*/

#define DMA0_CMICIC157	(DMA0.unCMICIC157.u32Register)  /*@rg@*/
#define DMA0_CMICIC157_BEHREQACK	(*(volatile uint_io8_t*)0xB70113B9)  /*@bfbba@*/
#define DMA0_CMICIC157_BEHSTPACK	(*(volatile uint_io8_t*)0xB70113BB)  /*@bfbba@*/

#define DMA0_CMICIC158	(DMA0.unCMICIC158.u32Register)  /*@rg@*/
#define DMA0_CMICIC158_BEHREQACK	(*(volatile uint_io8_t*)0xB70113D9)  /*@bfbba@*/
#define DMA0_CMICIC158_BEHSTPACK	(*(volatile uint_io8_t*)0xB70113DB)  /*@bfbba@*/

#define DMA0_CMICIC159	(DMA0.unCMICIC159.u32Register)  /*@rg@*/
#define DMA0_CMICIC159_BEHREQACK	(*(volatile uint_io8_t*)0xB70113F9)  /*@bfbba@*/
#define DMA0_CMICIC159_BEHSTPACK	(*(volatile uint_io8_t*)0xB70113FB)  /*@bfbba@*/

#define DMA0_CMICIC160	(DMA0.unCMICIC160.u32Register)  /*@rg@*/
#define DMA0_CMICIC160_BEHREQACK	(*(volatile uint_io8_t*)0xB7011419)  /*@bfbba@*/
#define DMA0_CMICIC160_BEHSTPACK	(*(volatile uint_io8_t*)0xB701141B)  /*@bfbba@*/

#define DMA0_CMICIC161	(DMA0.unCMICIC161.u32Register)  /*@rg@*/
#define DMA0_CMICIC161_BEHREQACK	(*(volatile uint_io8_t*)0xB7011439)  /*@bfbba@*/
#define DMA0_CMICIC161_BEHSTPACK	(*(volatile uint_io8_t*)0xB701143B)  /*@bfbba@*/

#define DMA0_CMICIC162	(DMA0.unCMICIC162.u32Register)  /*@rg@*/
#define DMA0_CMICIC162_BEHREQACK	(*(volatile uint_io8_t*)0xB7011459)  /*@bfbba@*/
#define DMA0_CMICIC162_BEHSTPACK	(*(volatile uint_io8_t*)0xB701145B)  /*@bfbba@*/

#define DMA0_CMICIC163	(DMA0.unCMICIC163.u32Register)  /*@rg@*/
#define DMA0_CMICIC163_BEHREQACK	(*(volatile uint_io8_t*)0xB7011479)  /*@bfbba@*/
#define DMA0_CMICIC163_BEHSTPACK	(*(volatile uint_io8_t*)0xB701147B)  /*@bfbba@*/

#define DMA0_CMICIC164	(DMA0.unCMICIC164.u32Register)  /*@rg@*/
#define DMA0_CMICIC164_BEHREQACK	(*(volatile uint_io8_t*)0xB7011499)  /*@bfbba@*/
#define DMA0_CMICIC164_BEHSTPACK	(*(volatile uint_io8_t*)0xB701149B)  /*@bfbba@*/

#define DMA0_CMICIC165	(DMA0.unCMICIC165.u32Register)  /*@rg@*/
#define DMA0_CMICIC165_BEHREQACK	(*(volatile uint_io8_t*)0xB70114B9)  /*@bfbba@*/
#define DMA0_CMICIC165_BEHSTPACK	(*(volatile uint_io8_t*)0xB70114BB)  /*@bfbba@*/

#define DMA0_CMICIC166	(DMA0.unCMICIC166.u32Register)  /*@rg@*/
#define DMA0_CMICIC166_BEHREQACK	(*(volatile uint_io8_t*)0xB70114D9)  /*@bfbba@*/
#define DMA0_CMICIC166_BEHSTPACK	(*(volatile uint_io8_t*)0xB70114DB)  /*@bfbba@*/

#define DMA0_CMICIC167	(DMA0.unCMICIC167.u32Register)  /*@rg@*/
#define DMA0_CMICIC167_BEHREQACK	(*(volatile uint_io8_t*)0xB70114F9)  /*@bfbba@*/
#define DMA0_CMICIC167_BEHSTPACK	(*(volatile uint_io8_t*)0xB70114FB)  /*@bfbba@*/

#define DMA0_CMICIC168	(DMA0.unCMICIC168.u32Register)  /*@rg@*/
#define DMA0_CMICIC168_BEHREQACK	(*(volatile uint_io8_t*)0xB7011519)  /*@bfbba@*/
#define DMA0_CMICIC168_BEHSTPACK	(*(volatile uint_io8_t*)0xB701151B)  /*@bfbba@*/

#define DMA0_CMICIC169	(DMA0.unCMICIC169.u32Register)  /*@rg@*/
#define DMA0_CMICIC169_BEHREQACK	(*(volatile uint_io8_t*)0xB7011539)  /*@bfbba@*/
#define DMA0_CMICIC169_BEHSTPACK	(*(volatile uint_io8_t*)0xB701153B)  /*@bfbba@*/

#define DMA0_CMICIC170	(DMA0.unCMICIC170.u32Register)  /*@rg@*/
#define DMA0_CMICIC170_BEHREQACK	(*(volatile uint_io8_t*)0xB7011559)  /*@bfbba@*/
#define DMA0_CMICIC170_BEHSTPACK	(*(volatile uint_io8_t*)0xB701155B)  /*@bfbba@*/

#define DMA0_CMICIC171	(DMA0.unCMICIC171.u32Register)  /*@rg@*/
#define DMA0_CMICIC171_BEHREQACK	(*(volatile uint_io8_t*)0xB7011579)  /*@bfbba@*/
#define DMA0_CMICIC171_BEHSTPACK	(*(volatile uint_io8_t*)0xB701157B)  /*@bfbba@*/

#define DMA0_CMICIC172	(DMA0.unCMICIC172.u32Register)  /*@rg@*/
#define DMA0_CMICIC172_BEHREQACK	(*(volatile uint_io8_t*)0xB7011599)  /*@bfbba@*/
#define DMA0_CMICIC172_BEHSTPACK	(*(volatile uint_io8_t*)0xB701159B)  /*@bfbba@*/

#define DMA0_CMICIC173	(DMA0.unCMICIC173.u32Register)  /*@rg@*/
#define DMA0_CMICIC173_BEHREQACK	(*(volatile uint_io8_t*)0xB70115B9)  /*@bfbba@*/
#define DMA0_CMICIC173_BEHSTPACK	(*(volatile uint_io8_t*)0xB70115BB)  /*@bfbba@*/

#define DMA0_CMICIC174	(DMA0.unCMICIC174.u32Register)  /*@rg@*/
#define DMA0_CMICIC174_BEHREQACK	(*(volatile uint_io8_t*)0xB70115D9)  /*@bfbba@*/
#define DMA0_CMICIC174_BEHSTPACK	(*(volatile uint_io8_t*)0xB70115DB)  /*@bfbba@*/

#define DMA0_CMICIC175	(DMA0.unCMICIC175.u32Register)  /*@rg@*/
#define DMA0_CMICIC175_BEHREQACK	(*(volatile uint_io8_t*)0xB70115F9)  /*@bfbba@*/
#define DMA0_CMICIC175_BEHSTPACK	(*(volatile uint_io8_t*)0xB70115FB)  /*@bfbba@*/

#define DMA0_CMICIC176	(DMA0.unCMICIC176.u32Register)  /*@rg@*/
#define DMA0_CMICIC176_BEHREQACK	(*(volatile uint_io8_t*)0xB7011619)  /*@bfbba@*/
#define DMA0_CMICIC176_BEHSTPACK	(*(volatile uint_io8_t*)0xB701161B)  /*@bfbba@*/

#define DMA0_CMICIC177	(DMA0.unCMICIC177.u32Register)  /*@rg@*/
#define DMA0_CMICIC177_BEHREQACK	(*(volatile uint_io8_t*)0xB7011639)  /*@bfbba@*/
#define DMA0_CMICIC177_BEHSTPACK	(*(volatile uint_io8_t*)0xB701163B)  /*@bfbba@*/

#define DMA0_CMICIC178	(DMA0.unCMICIC178.u32Register)  /*@rg@*/
#define DMA0_CMICIC178_BEHREQACK	(*(volatile uint_io8_t*)0xB7011659)  /*@bfbba@*/
#define DMA0_CMICIC178_BEHSTPACK	(*(volatile uint_io8_t*)0xB701165B)  /*@bfbba@*/

#define DMA0_CMICIC179	(DMA0.unCMICIC179.u32Register)  /*@rg@*/
#define DMA0_CMICIC179_BEHREQACK	(*(volatile uint_io8_t*)0xB7011679)  /*@bfbba@*/
#define DMA0_CMICIC179_BEHSTPACK	(*(volatile uint_io8_t*)0xB701167B)  /*@bfbba@*/

#define DMA0_CMICIC180	(DMA0.unCMICIC180.u32Register)  /*@rg@*/
#define DMA0_CMICIC180_BEHREQACK	(*(volatile uint_io8_t*)0xB7011699)  /*@bfbba@*/
#define DMA0_CMICIC180_BEHSTPACK	(*(volatile uint_io8_t*)0xB701169B)  /*@bfbba@*/

#define DMA0_CMICIC181	(DMA0.unCMICIC181.u32Register)  /*@rg@*/
#define DMA0_CMICIC181_BEHREQACK	(*(volatile uint_io8_t*)0xB70116B9)  /*@bfbba@*/
#define DMA0_CMICIC181_BEHSTPACK	(*(volatile uint_io8_t*)0xB70116BB)  /*@bfbba@*/

#define DMA0_CMICIC182	(DMA0.unCMICIC182.u32Register)  /*@rg@*/
#define DMA0_CMICIC182_BEHREQACK	(*(volatile uint_io8_t*)0xB70116D9)  /*@bfbba@*/
#define DMA0_CMICIC182_BEHSTPACK	(*(volatile uint_io8_t*)0xB70116DB)  /*@bfbba@*/

#define DMA0_CMICIC183	(DMA0.unCMICIC183.u32Register)  /*@rg@*/
#define DMA0_CMICIC183_BEHREQACK	(*(volatile uint_io8_t*)0xB70116F9)  /*@bfbba@*/
#define DMA0_CMICIC183_BEHSTPACK	(*(volatile uint_io8_t*)0xB70116FB)  /*@bfbba@*/

#define DMA0_CMICIC184	(DMA0.unCMICIC184.u32Register)  /*@rg@*/
#define DMA0_CMICIC184_BEHREQACK	(*(volatile uint_io8_t*)0xB7011719)  /*@bfbba@*/
#define DMA0_CMICIC184_BEHSTPACK	(*(volatile uint_io8_t*)0xB701171B)  /*@bfbba@*/

#define DMA0_CMICIC185	(DMA0.unCMICIC185.u32Register)  /*@rg@*/
#define DMA0_CMICIC185_BEHREQACK	(*(volatile uint_io8_t*)0xB7011739)  /*@bfbba@*/
#define DMA0_CMICIC185_BEHSTPACK	(*(volatile uint_io8_t*)0xB701173B)  /*@bfbba@*/

#define DMA0_CMICIC186	(DMA0.unCMICIC186.u32Register)  /*@rg@*/
#define DMA0_CMICIC186_BEHREQACK	(*(volatile uint_io8_t*)0xB7011759)  /*@bfbba@*/
#define DMA0_CMICIC186_BEHSTPACK	(*(volatile uint_io8_t*)0xB701175B)  /*@bfbba@*/

#define DMA0_CMICIC187	(DMA0.unCMICIC187.u32Register)  /*@rg@*/
#define DMA0_CMICIC187_BEHREQACK	(*(volatile uint_io8_t*)0xB7011779)  /*@bfbba@*/
#define DMA0_CMICIC187_BEHSTPACK	(*(volatile uint_io8_t*)0xB701177B)  /*@bfbba@*/

#define DMA0_CMICIC188	(DMA0.unCMICIC188.u32Register)  /*@rg@*/
#define DMA0_CMICIC188_BEHREQACK	(*(volatile uint_io8_t*)0xB7011799)  /*@bfbba@*/
#define DMA0_CMICIC188_BEHSTPACK	(*(volatile uint_io8_t*)0xB701179B)  /*@bfbba@*/

#define DMA0_CMICIC189	(DMA0.unCMICIC189.u32Register)  /*@rg@*/
#define DMA0_CMICIC189_BEHREQACK	(*(volatile uint_io8_t*)0xB70117B9)  /*@bfbba@*/
#define DMA0_CMICIC189_BEHSTPACK	(*(volatile uint_io8_t*)0xB70117BB)  /*@bfbba@*/

#define DMA0_CMICIC190	(DMA0.unCMICIC190.u32Register)  /*@rg@*/
#define DMA0_CMICIC190_BEHREQACK	(*(volatile uint_io8_t*)0xB70117D9)  /*@bfbba@*/
#define DMA0_CMICIC190_BEHSTPACK	(*(volatile uint_io8_t*)0xB70117DB)  /*@bfbba@*/

#define DMA0_CMICIC191	(DMA0.unCMICIC191.u32Register)  /*@rg@*/
#define DMA0_CMICIC191_BEHREQACK	(*(volatile uint_io8_t*)0xB70117F9)  /*@bfbba@*/
#define DMA0_CMICIC191_BEHSTPACK	(*(volatile uint_io8_t*)0xB70117FB)  /*@bfbba@*/

#define DMA0_CMICIC192	(DMA0.unCMICIC192.u32Register)  /*@rg@*/
#define DMA0_CMICIC192_BEHREQACK	(*(volatile uint_io8_t*)0xB7011819)  /*@bfbba@*/
#define DMA0_CMICIC192_BEHSTPACK	(*(volatile uint_io8_t*)0xB701181B)  /*@bfbba@*/

#define DMA0_CMICIC193	(DMA0.unCMICIC193.u32Register)  /*@rg@*/
#define DMA0_CMICIC193_BEHREQACK	(*(volatile uint_io8_t*)0xB7011839)  /*@bfbba@*/
#define DMA0_CMICIC193_BEHSTPACK	(*(volatile uint_io8_t*)0xB701183B)  /*@bfbba@*/

#define DMA0_CMICIC194	(DMA0.unCMICIC194.u32Register)  /*@rg@*/
#define DMA0_CMICIC194_BEHREQACK	(*(volatile uint_io8_t*)0xB7011859)  /*@bfbba@*/
#define DMA0_CMICIC194_BEHSTPACK	(*(volatile uint_io8_t*)0xB701185B)  /*@bfbba@*/

#define DMA0_CMICIC195	(DMA0.unCMICIC195.u32Register)  /*@rg@*/
#define DMA0_CMICIC195_BEHREQACK	(*(volatile uint_io8_t*)0xB7011879)  /*@bfbba@*/
#define DMA0_CMICIC195_BEHSTPACK	(*(volatile uint_io8_t*)0xB701187B)  /*@bfbba@*/

#define DMA0_CMICIC196	(DMA0.unCMICIC196.u32Register)  /*@rg@*/
#define DMA0_CMICIC196_BEHREQACK	(*(volatile uint_io8_t*)0xB7011899)  /*@bfbba@*/
#define DMA0_CMICIC196_BEHSTPACK	(*(volatile uint_io8_t*)0xB701189B)  /*@bfbba@*/

#define DMA0_CMICIC197	(DMA0.unCMICIC197.u32Register)  /*@rg@*/
#define DMA0_CMICIC197_BEHREQACK	(*(volatile uint_io8_t*)0xB70118B9)  /*@bfbba@*/
#define DMA0_CMICIC197_BEHSTPACK	(*(volatile uint_io8_t*)0xB70118BB)  /*@bfbba@*/

#define DMA0_CMICIC198	(DMA0.unCMICIC198.u32Register)  /*@rg@*/
#define DMA0_CMICIC198_BEHREQACK	(*(volatile uint_io8_t*)0xB70118D9)  /*@bfbba@*/
#define DMA0_CMICIC198_BEHSTPACK	(*(volatile uint_io8_t*)0xB70118DB)  /*@bfbba@*/

#define DMA0_CMICIC199	(DMA0.unCMICIC199.u32Register)  /*@rg@*/
#define DMA0_CMICIC199_BEHREQACK	(*(volatile uint_io8_t*)0xB70118F9)  /*@bfbba@*/
#define DMA0_CMICIC199_BEHSTPACK	(*(volatile uint_io8_t*)0xB70118FB)  /*@bfbba@*/

#define DMA0_CMICIC200	(DMA0.unCMICIC200.u32Register)  /*@rg@*/
#define DMA0_CMICIC200_BEHREQACK	(*(volatile uint_io8_t*)0xB7011919)  /*@bfbba@*/
#define DMA0_CMICIC200_BEHSTPACK	(*(volatile uint_io8_t*)0xB701191B)  /*@bfbba@*/

#define DMA0_CMICIC201	(DMA0.unCMICIC201.u32Register)  /*@rg@*/
#define DMA0_CMICIC201_BEHREQACK	(*(volatile uint_io8_t*)0xB7011939)  /*@bfbba@*/
#define DMA0_CMICIC201_BEHSTPACK	(*(volatile uint_io8_t*)0xB701193B)  /*@bfbba@*/

#define DMA0_CMICIC202	(DMA0.unCMICIC202.u32Register)  /*@rg@*/
#define DMA0_CMICIC202_BEHREQACK	(*(volatile uint_io8_t*)0xB7011959)  /*@bfbba@*/
#define DMA0_CMICIC202_BEHSTPACK	(*(volatile uint_io8_t*)0xB701195B)  /*@bfbba@*/

#define DMA0_CMICIC203	(DMA0.unCMICIC203.u32Register)  /*@rg@*/
#define DMA0_CMICIC203_BEHREQACK	(*(volatile uint_io8_t*)0xB7011979)  /*@bfbba@*/
#define DMA0_CMICIC203_BEHSTPACK	(*(volatile uint_io8_t*)0xB701197B)  /*@bfbba@*/

#define DMA0_CMICIC204	(DMA0.unCMICIC204.u32Register)  /*@rg@*/
#define DMA0_CMICIC204_BEHREQACK	(*(volatile uint_io8_t*)0xB7011999)  /*@bfbba@*/
#define DMA0_CMICIC204_BEHSTPACK	(*(volatile uint_io8_t*)0xB701199B)  /*@bfbba@*/

#define DMA0_CMICIC205	(DMA0.unCMICIC205.u32Register)  /*@rg@*/
#define DMA0_CMICIC205_BEHREQACK	(*(volatile uint_io8_t*)0xB70119B9)  /*@bfbba@*/
#define DMA0_CMICIC205_BEHSTPACK	(*(volatile uint_io8_t*)0xB70119BB)  /*@bfbba@*/

#define DMA0_CMICIC206	(DMA0.unCMICIC206.u32Register)  /*@rg@*/
#define DMA0_CMICIC206_BEHREQACK	(*(volatile uint_io8_t*)0xB70119D9)  /*@bfbba@*/
#define DMA0_CMICIC206_BEHSTPACK	(*(volatile uint_io8_t*)0xB70119DB)  /*@bfbba@*/

#define DMA0_CMICIC207	(DMA0.unCMICIC207.u32Register)  /*@rg@*/
#define DMA0_CMICIC207_BEHREQACK	(*(volatile uint_io8_t*)0xB70119F9)  /*@bfbba@*/
#define DMA0_CMICIC207_BEHSTPACK	(*(volatile uint_io8_t*)0xB70119FB)  /*@bfbba@*/

#define DMA0_CMICIC208	(DMA0.unCMICIC208.u32Register)  /*@rg@*/
#define DMA0_CMICIC208_BEHREQACK	(*(volatile uint_io8_t*)0xB7011A19)  /*@bfbba@*/
#define DMA0_CMICIC208_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011A1B)  /*@bfbba@*/

#define DMA0_CMICIC209	(DMA0.unCMICIC209.u32Register)  /*@rg@*/
#define DMA0_CMICIC209_BEHREQACK	(*(volatile uint_io8_t*)0xB7011A39)  /*@bfbba@*/
#define DMA0_CMICIC209_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011A3B)  /*@bfbba@*/

#define DMA0_CMICIC210	(DMA0.unCMICIC210.u32Register)  /*@rg@*/
#define DMA0_CMICIC210_BEHREQACK	(*(volatile uint_io8_t*)0xB7011A59)  /*@bfbba@*/
#define DMA0_CMICIC210_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011A5B)  /*@bfbba@*/

#define DMA0_CMICIC211	(DMA0.unCMICIC211.u32Register)  /*@rg@*/
#define DMA0_CMICIC211_BEHREQACK	(*(volatile uint_io8_t*)0xB7011A79)  /*@bfbba@*/
#define DMA0_CMICIC211_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011A7B)  /*@bfbba@*/

#define DMA0_CMICIC212	(DMA0.unCMICIC212.u32Register)  /*@rg@*/
#define DMA0_CMICIC212_BEHREQACK	(*(volatile uint_io8_t*)0xB7011A99)  /*@bfbba@*/
#define DMA0_CMICIC212_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011A9B)  /*@bfbba@*/

#define DMA0_CMICIC213	(DMA0.unCMICIC213.u32Register)  /*@rg@*/
#define DMA0_CMICIC213_BEHREQACK	(*(volatile uint_io8_t*)0xB7011AB9)  /*@bfbba@*/
#define DMA0_CMICIC213_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011ABB)  /*@bfbba@*/

#define DMA0_CMICIC214	(DMA0.unCMICIC214.u32Register)  /*@rg@*/
#define DMA0_CMICIC214_BEHREQACK	(*(volatile uint_io8_t*)0xB7011AD9)  /*@bfbba@*/
#define DMA0_CMICIC214_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011ADB)  /*@bfbba@*/

#define DMA0_CMICIC215	(DMA0.unCMICIC215.u32Register)  /*@rg@*/
#define DMA0_CMICIC215_BEHREQACK	(*(volatile uint_io8_t*)0xB7011AF9)  /*@bfbba@*/
#define DMA0_CMICIC215_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011AFB)  /*@bfbba@*/

#define DMA0_CMICIC216	(DMA0.unCMICIC216.u32Register)  /*@rg@*/
#define DMA0_CMICIC216_BEHREQACK	(*(volatile uint_io8_t*)0xB7011B19)  /*@bfbba@*/
#define DMA0_CMICIC216_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011B1B)  /*@bfbba@*/

#define DMA0_CMICIC217	(DMA0.unCMICIC217.u32Register)  /*@rg@*/
#define DMA0_CMICIC217_BEHREQACK	(*(volatile uint_io8_t*)0xB7011B39)  /*@bfbba@*/
#define DMA0_CMICIC217_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011B3B)  /*@bfbba@*/

#define DMA0_CMICIC218	(DMA0.unCMICIC218.u32Register)  /*@rg@*/
#define DMA0_CMICIC218_BEHREQACK	(*(volatile uint_io8_t*)0xB7011B59)  /*@bfbba@*/
#define DMA0_CMICIC218_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011B5B)  /*@bfbba@*/

#define DMA0_CMICIC219	(DMA0.unCMICIC219.u32Register)  /*@rg@*/
#define DMA0_CMICIC219_BEHREQACK	(*(volatile uint_io8_t*)0xB7011B79)  /*@bfbba@*/
#define DMA0_CMICIC219_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011B7B)  /*@bfbba@*/

#define DMA0_CMICIC220	(DMA0.unCMICIC220.u32Register)  /*@rg@*/
#define DMA0_CMICIC220_BEHREQACK	(*(volatile uint_io8_t*)0xB7011B99)  /*@bfbba@*/
#define DMA0_CMICIC220_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011B9B)  /*@bfbba@*/

#define DMA0_CMICIC221	(DMA0.unCMICIC221.u32Register)  /*@rg@*/
#define DMA0_CMICIC221_BEHREQACK	(*(volatile uint_io8_t*)0xB7011BB9)  /*@bfbba@*/
#define DMA0_CMICIC221_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011BBB)  /*@bfbba@*/

#define DMA0_CMICIC222	(DMA0.unCMICIC222.u32Register)  /*@rg@*/
#define DMA0_CMICIC222_BEHREQACK	(*(volatile uint_io8_t*)0xB7011BD9)  /*@bfbba@*/
#define DMA0_CMICIC222_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011BDB)  /*@bfbba@*/

#define DMA0_CMICIC223	(DMA0.unCMICIC223.u32Register)  /*@rg@*/
#define DMA0_CMICIC223_BEHREQACK	(*(volatile uint_io8_t*)0xB7011BF9)  /*@bfbba@*/
#define DMA0_CMICIC223_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011BFB)  /*@bfbba@*/

#define DMA0_CMICIC224	(DMA0.unCMICIC224.u32Register)  /*@rg@*/
#define DMA0_CMICIC224_BEHREQACK	(*(volatile uint_io8_t*)0xB7011C19)  /*@bfbba@*/
#define DMA0_CMICIC224_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011C1B)  /*@bfbba@*/

#define DMA0_CMICIC225	(DMA0.unCMICIC225.u32Register)  /*@rg@*/
#define DMA0_CMICIC225_BEHREQACK	(*(volatile uint_io8_t*)0xB7011C39)  /*@bfbba@*/
#define DMA0_CMICIC225_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011C3B)  /*@bfbba@*/

#define DMA0_CMICIC226	(DMA0.unCMICIC226.u32Register)  /*@rg@*/
#define DMA0_CMICIC226_BEHREQACK	(*(volatile uint_io8_t*)0xB7011C59)  /*@bfbba@*/
#define DMA0_CMICIC226_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011C5B)  /*@bfbba@*/

#define DMA0_CMICIC227	(DMA0.unCMICIC227.u32Register)  /*@rg@*/
#define DMA0_CMICIC227_BEHREQACK	(*(volatile uint_io8_t*)0xB7011C79)  /*@bfbba@*/
#define DMA0_CMICIC227_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011C7B)  /*@bfbba@*/

#define DMA0_CMICIC228	(DMA0.unCMICIC228.u32Register)  /*@rg@*/
#define DMA0_CMICIC228_BEHREQACK	(*(volatile uint_io8_t*)0xB7011C99)  /*@bfbba@*/
#define DMA0_CMICIC228_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011C9B)  /*@bfbba@*/

#define DMA0_CMICIC229	(DMA0.unCMICIC229.u32Register)  /*@rg@*/
#define DMA0_CMICIC229_BEHREQACK	(*(volatile uint_io8_t*)0xB7011CB9)  /*@bfbba@*/
#define DMA0_CMICIC229_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011CBB)  /*@bfbba@*/

#define DMA0_CMICIC230	(DMA0.unCMICIC230.u32Register)  /*@rg@*/
#define DMA0_CMICIC230_BEHREQACK	(*(volatile uint_io8_t*)0xB7011CD9)  /*@bfbba@*/
#define DMA0_CMICIC230_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011CDB)  /*@bfbba@*/

#define DMA0_CMICIC231	(DMA0.unCMICIC231.u32Register)  /*@rg@*/
#define DMA0_CMICIC231_BEHREQACK	(*(volatile uint_io8_t*)0xB7011CF9)  /*@bfbba@*/
#define DMA0_CMICIC231_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011CFB)  /*@bfbba@*/

#define DMA0_CMICIC232	(DMA0.unCMICIC232.u32Register)  /*@rg@*/
#define DMA0_CMICIC232_BEHREQACK	(*(volatile uint_io8_t*)0xB7011D19)  /*@bfbba@*/
#define DMA0_CMICIC232_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011D1B)  /*@bfbba@*/

#define DMA0_CMICIC233	(DMA0.unCMICIC233.u32Register)  /*@rg@*/
#define DMA0_CMICIC233_BEHREQACK	(*(volatile uint_io8_t*)0xB7011D39)  /*@bfbba@*/
#define DMA0_CMICIC233_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011D3B)  /*@bfbba@*/

#define DMA0_CMICIC234	(DMA0.unCMICIC234.u32Register)  /*@rg@*/
#define DMA0_CMICIC234_BEHREQACK	(*(volatile uint_io8_t*)0xB7011D59)  /*@bfbba@*/
#define DMA0_CMICIC234_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011D5B)  /*@bfbba@*/

#define DMA0_CMICIC235	(DMA0.unCMICIC235.u32Register)  /*@rg@*/
#define DMA0_CMICIC235_BEHREQACK	(*(volatile uint_io8_t*)0xB7011D79)  /*@bfbba@*/
#define DMA0_CMICIC235_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011D7B)  /*@bfbba@*/

#define DMA0_CMICIC236	(DMA0.unCMICIC236.u32Register)  /*@rg@*/
#define DMA0_CMICIC236_BEHREQACK	(*(volatile uint_io8_t*)0xB7011D99)  /*@bfbba@*/
#define DMA0_CMICIC236_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011D9B)  /*@bfbba@*/

#define DMA0_CMICIC237	(DMA0.unCMICIC237.u32Register)  /*@rg@*/
#define DMA0_CMICIC237_BEHREQACK	(*(volatile uint_io8_t*)0xB7011DB9)  /*@bfbba@*/
#define DMA0_CMICIC237_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011DBB)  /*@bfbba@*/

#define DMA0_CMICIC238	(DMA0.unCMICIC238.u32Register)  /*@rg@*/
#define DMA0_CMICIC238_BEHREQACK	(*(volatile uint_io8_t*)0xB7011DD9)  /*@bfbba@*/
#define DMA0_CMICIC238_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011DDB)  /*@bfbba@*/

#define DMA0_CMICIC239	(DMA0.unCMICIC239.u32Register)  /*@rg@*/
#define DMA0_CMICIC239_BEHREQACK	(*(volatile uint_io8_t*)0xB7011DF9)  /*@bfbba@*/
#define DMA0_CMICIC239_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011DFB)  /*@bfbba@*/

#define DMA0_CMICIC240	(DMA0.unCMICIC240.u32Register)  /*@rg@*/
#define DMA0_CMICIC240_BEHREQACK	(*(volatile uint_io8_t*)0xB7011E19)  /*@bfbba@*/
#define DMA0_CMICIC240_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011E1B)  /*@bfbba@*/

#define DMA0_CMICIC241	(DMA0.unCMICIC241.u32Register)  /*@rg@*/
#define DMA0_CMICIC241_BEHREQACK	(*(volatile uint_io8_t*)0xB7011E39)  /*@bfbba@*/
#define DMA0_CMICIC241_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011E3B)  /*@bfbba@*/

#define DMA0_CMICIC242	(DMA0.unCMICIC242.u32Register)  /*@rg@*/
#define DMA0_CMICIC242_BEHREQACK	(*(volatile uint_io8_t*)0xB7011E59)  /*@bfbba@*/
#define DMA0_CMICIC242_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011E5B)  /*@bfbba@*/

#define DMA0_CMICIC243	(DMA0.unCMICIC243.u32Register)  /*@rg@*/
#define DMA0_CMICIC243_BEHREQACK	(*(volatile uint_io8_t*)0xB7011E79)  /*@bfbba@*/
#define DMA0_CMICIC243_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011E7B)  /*@bfbba@*/

#define DMA0_CMICIC244	(DMA0.unCMICIC244.u32Register)  /*@rg@*/
#define DMA0_CMICIC244_BEHREQACK	(*(volatile uint_io8_t*)0xB7011E99)  /*@bfbba@*/
#define DMA0_CMICIC244_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011E9B)  /*@bfbba@*/

#define DMA0_CMICIC245	(DMA0.unCMICIC245.u32Register)  /*@rg@*/
#define DMA0_CMICIC245_BEHREQACK	(*(volatile uint_io8_t*)0xB7011EB9)  /*@bfbba@*/
#define DMA0_CMICIC245_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011EBB)  /*@bfbba@*/

#define DMA0_CMICIC246	(DMA0.unCMICIC246.u32Register)  /*@rg@*/
#define DMA0_CMICIC246_BEHREQACK	(*(volatile uint_io8_t*)0xB7011ED9)  /*@bfbba@*/
#define DMA0_CMICIC246_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011EDB)  /*@bfbba@*/

#define DMA0_CMICIC247	(DMA0.unCMICIC247.u32Register)  /*@rg@*/
#define DMA0_CMICIC247_BEHREQACK	(*(volatile uint_io8_t*)0xB7011EF9)  /*@bfbba@*/
#define DMA0_CMICIC247_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011EFB)  /*@bfbba@*/

#define DMA0_CMICIC248	(DMA0.unCMICIC248.u32Register)  /*@rg@*/
#define DMA0_CMICIC248_BEHREQACK	(*(volatile uint_io8_t*)0xB7011F19)  /*@bfbba@*/
#define DMA0_CMICIC248_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011F1B)  /*@bfbba@*/

#define DMA0_CMICIC249	(DMA0.unCMICIC249.u32Register)  /*@rg@*/
#define DMA0_CMICIC249_BEHREQACK	(*(volatile uint_io8_t*)0xB7011F39)  /*@bfbba@*/
#define DMA0_CMICIC249_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011F3B)  /*@bfbba@*/

#define DMA0_CMICIC250	(DMA0.unCMICIC250.u32Register)  /*@rg@*/
#define DMA0_CMICIC250_BEHREQACK	(*(volatile uint_io8_t*)0xB7011F59)  /*@bfbba@*/
#define DMA0_CMICIC250_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011F5B)  /*@bfbba@*/

#define DMA0_CMICIC251	(DMA0.unCMICIC251.u32Register)  /*@rg@*/
#define DMA0_CMICIC251_BEHREQACK	(*(volatile uint_io8_t*)0xB7011F79)  /*@bfbba@*/
#define DMA0_CMICIC251_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011F7B)  /*@bfbba@*/

#define DMA0_CMICIC252	(DMA0.unCMICIC252.u32Register)  /*@rg@*/
#define DMA0_CMICIC252_BEHREQACK	(*(volatile uint_io8_t*)0xB7011F99)  /*@bfbba@*/
#define DMA0_CMICIC252_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011F9B)  /*@bfbba@*/

#define DMA0_CMICIC253	(DMA0.unCMICIC253.u32Register)  /*@rg@*/
#define DMA0_CMICIC253_BEHREQACK	(*(volatile uint_io8_t*)0xB7011FB9)  /*@bfbba@*/
#define DMA0_CMICIC253_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011FBB)  /*@bfbba@*/

#define DMA0_CMICIC254	(DMA0.unCMICIC254.u32Register)  /*@rg@*/
#define DMA0_CMICIC254_BEHREQACK	(*(volatile uint_io8_t*)0xB7011FD9)  /*@bfbba@*/
#define DMA0_CMICIC254_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011FDB)  /*@bfbba@*/

#define DMA0_CMICIC255	(DMA0.unCMICIC255.u32Register)  /*@rg@*/
#define DMA0_CMICIC255_BEHREQACK	(*(volatile uint_io8_t*)0xB7011FF9)  /*@bfbba@*/
#define DMA0_CMICIC255_BEHSTPACK	(*(volatile uint_io8_t*)0xB7011FFB)  /*@bfbba@*/

#define DMA0_CMICIC256	(DMA0.unCMICIC256.u32Register)  /*@rg@*/
#define DMA0_CMICIC256_BEHREQACK	(*(volatile uint_io8_t*)0xB7012019)  /*@bfbba@*/
#define DMA0_CMICIC256_BEHSTPACK	(*(volatile uint_io8_t*)0xB701201B)  /*@bfbba@*/

#define DMA0_CMICIC257	(DMA0.unCMICIC257.u32Register)  /*@rg@*/
#define DMA0_CMICIC257_BEHREQACK	(*(volatile uint_io8_t*)0xB7012039)  /*@bfbba@*/
#define DMA0_CMICIC257_BEHSTPACK	(*(volatile uint_io8_t*)0xB701203B)  /*@bfbba@*/

#define DMA0_CMICIC258	(DMA0.unCMICIC258.u32Register)  /*@rg@*/
#define DMA0_CMICIC258_BEHREQACK	(*(volatile uint_io8_t*)0xB7012059)  /*@bfbba@*/
#define DMA0_CMICIC258_BEHSTPACK	(*(volatile uint_io8_t*)0xB701205B)  /*@bfbba@*/

#define DMA0_CMICIC259	(DMA0.unCMICIC259.u32Register)  /*@rg@*/
#define DMA0_CMICIC259_BEHREQACK	(*(volatile uint_io8_t*)0xB7012079)  /*@bfbba@*/
#define DMA0_CMICIC259_BEHSTPACK	(*(volatile uint_io8_t*)0xB701207B)  /*@bfbba@*/

#define DMA0_CMICIC260	(DMA0.unCMICIC260.u32Register)  /*@rg@*/
#define DMA0_CMICIC260_BEHREQACK	(*(volatile uint_io8_t*)0xB7012099)  /*@bfbba@*/
#define DMA0_CMICIC260_BEHSTPACK	(*(volatile uint_io8_t*)0xB701209B)  /*@bfbba@*/

#define DMA0_CMICIC261	(DMA0.unCMICIC261.u32Register)  /*@rg@*/
#define DMA0_CMICIC261_BEHREQACK	(*(volatile uint_io8_t*)0xB70120B9)  /*@bfbba@*/
#define DMA0_CMICIC261_BEHSTPACK	(*(volatile uint_io8_t*)0xB70120BB)  /*@bfbba@*/

#define DMA0_CMICIC262	(DMA0.unCMICIC262.u32Register)  /*@rg@*/
#define DMA0_CMICIC262_BEHREQACK	(*(volatile uint_io8_t*)0xB70120D9)  /*@bfbba@*/
#define DMA0_CMICIC262_BEHSTPACK	(*(volatile uint_io8_t*)0xB70120DB)  /*@bfbba@*/

#define DMA0_CMICIC263	(DMA0.unCMICIC263.u32Register)  /*@rg@*/
#define DMA0_CMICIC263_BEHREQACK	(*(volatile uint_io8_t*)0xB70120F9)  /*@bfbba@*/
#define DMA0_CMICIC263_BEHSTPACK	(*(volatile uint_io8_t*)0xB70120FB)  /*@bfbba@*/

#define DMA0_CMICIC264	(DMA0.unCMICIC264.u32Register)  /*@rg@*/
#define DMA0_CMICIC264_BEHREQACK	(*(volatile uint_io8_t*)0xB7012119)  /*@bfbba@*/
#define DMA0_CMICIC264_BEHSTPACK	(*(volatile uint_io8_t*)0xB701211B)  /*@bfbba@*/

#define DMA0_CMICIC265	(DMA0.unCMICIC265.u32Register)  /*@rg@*/
#define DMA0_CMICIC265_BEHREQACK	(*(volatile uint_io8_t*)0xB7012139)  /*@bfbba@*/
#define DMA0_CMICIC265_BEHSTPACK	(*(volatile uint_io8_t*)0xB701213B)  /*@bfbba@*/

#define DMA0_CMICIC266	(DMA0.unCMICIC266.u32Register)  /*@rg@*/
#define DMA0_CMICIC266_BEHREQACK	(*(volatile uint_io8_t*)0xB7012159)  /*@bfbba@*/
#define DMA0_CMICIC266_BEHSTPACK	(*(volatile uint_io8_t*)0xB701215B)  /*@bfbba@*/

#define DMA0_CMICIC267	(DMA0.unCMICIC267.u32Register)  /*@rg@*/
#define DMA0_CMICIC267_BEHREQACK	(*(volatile uint_io8_t*)0xB7012179)  /*@bfbba@*/
#define DMA0_CMICIC267_BEHSTPACK	(*(volatile uint_io8_t*)0xB701217B)  /*@bfbba@*/

#define DMA0_CMICIC268	(DMA0.unCMICIC268.u32Register)  /*@rg@*/
#define DMA0_CMICIC268_BEHREQACK	(*(volatile uint_io8_t*)0xB7012199)  /*@bfbba@*/
#define DMA0_CMICIC268_BEHSTPACK	(*(volatile uint_io8_t*)0xB701219B)  /*@bfbba@*/

#define DMA0_CMICIC269	(DMA0.unCMICIC269.u32Register)  /*@rg@*/
#define DMA0_CMICIC269_BEHREQACK	(*(volatile uint_io8_t*)0xB70121B9)  /*@bfbba@*/
#define DMA0_CMICIC269_BEHSTPACK	(*(volatile uint_io8_t*)0xB70121BB)  /*@bfbba@*/

#define DMA0_CMICIC270	(DMA0.unCMICIC270.u32Register)  /*@rg@*/
#define DMA0_CMICIC270_BEHREQACK	(*(volatile uint_io8_t*)0xB70121D9)  /*@bfbba@*/
#define DMA0_CMICIC270_BEHSTPACK	(*(volatile uint_io8_t*)0xB70121DB)  /*@bfbba@*/

#define DMA0_CMICIC271	(DMA0.unCMICIC271.u32Register)  /*@rg@*/
#define DMA0_CMICIC271_BEHREQACK	(*(volatile uint_io8_t*)0xB70121F9)  /*@bfbba@*/
#define DMA0_CMICIC271_BEHSTPACK	(*(volatile uint_io8_t*)0xB70121FB)  /*@bfbba@*/

#define DMA0_CMICIC272	(DMA0.unCMICIC272.u32Register)  /*@rg@*/
#define DMA0_CMICIC272_BEHREQACK	(*(volatile uint_io8_t*)0xB7012219)  /*@bfbba@*/
#define DMA0_CMICIC272_BEHSTPACK	(*(volatile uint_io8_t*)0xB701221B)  /*@bfbba@*/

#define DMA0_CMICIC273	(DMA0.unCMICIC273.u32Register)  /*@rg@*/
#define DMA0_CMICIC273_BEHREQACK	(*(volatile uint_io8_t*)0xB7012239)  /*@bfbba@*/
#define DMA0_CMICIC273_BEHSTPACK	(*(volatile uint_io8_t*)0xB701223B)  /*@bfbba@*/

#define DMA0_CMICIC274	(DMA0.unCMICIC274.u32Register)  /*@rg@*/
#define DMA0_CMICIC274_BEHREQACK	(*(volatile uint_io8_t*)0xB7012259)  /*@bfbba@*/
#define DMA0_CMICIC274_BEHSTPACK	(*(volatile uint_io8_t*)0xB701225B)  /*@bfbba@*/

#define DMA0_CMICIC275	(DMA0.unCMICIC275.u32Register)  /*@rg@*/
#define DMA0_CMICIC275_BEHREQACK	(*(volatile uint_io8_t*)0xB7012279)  /*@bfbba@*/
#define DMA0_CMICIC275_BEHSTPACK	(*(volatile uint_io8_t*)0xB701227B)  /*@bfbba@*/

#define DMA0_CMICIC276	(DMA0.unCMICIC276.u32Register)  /*@rg@*/
#define DMA0_CMICIC276_BEHREQACK	(*(volatile uint_io8_t*)0xB7012299)  /*@bfbba@*/
#define DMA0_CMICIC276_BEHSTPACK	(*(volatile uint_io8_t*)0xB701229B)  /*@bfbba@*/

#define DMA0_CMICIC277	(DMA0.unCMICIC277.u32Register)  /*@rg@*/
#define DMA0_CMICIC277_BEHREQACK	(*(volatile uint_io8_t*)0xB70122B9)  /*@bfbba@*/
#define DMA0_CMICIC277_BEHSTPACK	(*(volatile uint_io8_t*)0xB70122BB)  /*@bfbba@*/

#define DMA0_CMICIC278	(DMA0.unCMICIC278.u32Register)  /*@rg@*/
#define DMA0_CMICIC278_BEHREQACK	(*(volatile uint_io8_t*)0xB70122D9)  /*@bfbba@*/
#define DMA0_CMICIC278_BEHSTPACK	(*(volatile uint_io8_t*)0xB70122DB)  /*@bfbba@*/

#define DMA0_CMICIC279	(DMA0.unCMICIC279.u32Register)  /*@rg@*/
#define DMA0_CMICIC279_BEHREQACK	(*(volatile uint_io8_t*)0xB70122F9)  /*@bfbba@*/
#define DMA0_CMICIC279_BEHSTPACK	(*(volatile uint_io8_t*)0xB70122FB)  /*@bfbba@*/

#define DMA0_CMICIC280	(DMA0.unCMICIC280.u32Register)  /*@rg@*/
#define DMA0_CMICIC280_BEHREQACK	(*(volatile uint_io8_t*)0xB7012319)  /*@bfbba@*/
#define DMA0_CMICIC280_BEHSTPACK	(*(volatile uint_io8_t*)0xB701231B)  /*@bfbba@*/

#define DMA0_CMICIC281	(DMA0.unCMICIC281.u32Register)  /*@rg@*/
#define DMA0_CMICIC281_BEHREQACK	(*(volatile uint_io8_t*)0xB7012339)  /*@bfbba@*/
#define DMA0_CMICIC281_BEHSTPACK	(*(volatile uint_io8_t*)0xB701233B)  /*@bfbba@*/

#define DMA0_CMICIC282	(DMA0.unCMICIC282.u32Register)  /*@rg@*/
#define DMA0_CMICIC282_BEHREQACK	(*(volatile uint_io8_t*)0xB7012359)  /*@bfbba@*/
#define DMA0_CMICIC282_BEHSTPACK	(*(volatile uint_io8_t*)0xB701235B)  /*@bfbba@*/

#define DMA0_CMICIC283	(DMA0.unCMICIC283.u32Register)  /*@rg@*/
#define DMA0_CMICIC283_BEHREQACK	(*(volatile uint_io8_t*)0xB7012379)  /*@bfbba@*/
#define DMA0_CMICIC283_BEHSTPACK	(*(volatile uint_io8_t*)0xB701237B)  /*@bfbba@*/

#define DMA0_CMICIC284	(DMA0.unCMICIC284.u32Register)  /*@rg@*/
#define DMA0_CMICIC284_BEHREQACK	(*(volatile uint_io8_t*)0xB7012399)  /*@bfbba@*/
#define DMA0_CMICIC284_BEHSTPACK	(*(volatile uint_io8_t*)0xB701239B)  /*@bfbba@*/

#define DMA0_CMICIC285	(DMA0.unCMICIC285.u32Register)  /*@rg@*/
#define DMA0_CMICIC285_BEHREQACK	(*(volatile uint_io8_t*)0xB70123B9)  /*@bfbba@*/
#define DMA0_CMICIC285_BEHSTPACK	(*(volatile uint_io8_t*)0xB70123BB)  /*@bfbba@*/

#define DMA0_CMICIC286	(DMA0.unCMICIC286.u32Register)  /*@rg@*/
#define DMA0_CMICIC286_BEHREQACK	(*(volatile uint_io8_t*)0xB70123D9)  /*@bfbba@*/
#define DMA0_CMICIC286_BEHSTPACK	(*(volatile uint_io8_t*)0xB70123DB)  /*@bfbba@*/

#define DMA0_CMICIC287	(DMA0.unCMICIC287.u32Register)  /*@rg@*/
#define DMA0_CMICIC287_BEHREQACK	(*(volatile uint_io8_t*)0xB70123F9)  /*@bfbba@*/
#define DMA0_CMICIC287_BEHSTPACK	(*(volatile uint_io8_t*)0xB70123FB)  /*@bfbba@*/

#define DMA0_CMICIC288	(DMA0.unCMICIC288.u32Register)  /*@rg@*/
#define DMA0_CMICIC288_BEHREQACK	(*(volatile uint_io8_t*)0xB7012419)  /*@bfbba@*/
#define DMA0_CMICIC288_BEHSTPACK	(*(volatile uint_io8_t*)0xB701241B)  /*@bfbba@*/

#define DMA0_CMICIC289	(DMA0.unCMICIC289.u32Register)  /*@rg@*/
#define DMA0_CMICIC289_BEHREQACK	(*(volatile uint_io8_t*)0xB7012439)  /*@bfbba@*/
#define DMA0_CMICIC289_BEHSTPACK	(*(volatile uint_io8_t*)0xB701243B)  /*@bfbba@*/

#define DMA0_CMICIC290	(DMA0.unCMICIC290.u32Register)  /*@rg@*/
#define DMA0_CMICIC290_BEHREQACK	(*(volatile uint_io8_t*)0xB7012459)  /*@bfbba@*/
#define DMA0_CMICIC290_BEHSTPACK	(*(volatile uint_io8_t*)0xB701245B)  /*@bfbba@*/

#define DMA0_CMICIC291	(DMA0.unCMICIC291.u32Register)  /*@rg@*/
#define DMA0_CMICIC291_BEHREQACK	(*(volatile uint_io8_t*)0xB7012479)  /*@bfbba@*/
#define DMA0_CMICIC291_BEHSTPACK	(*(volatile uint_io8_t*)0xB701247B)  /*@bfbba@*/

#define DMA0_CMICIC292	(DMA0.unCMICIC292.u32Register)  /*@rg@*/
#define DMA0_CMICIC292_BEHREQACK	(*(volatile uint_io8_t*)0xB7012499)  /*@bfbba@*/
#define DMA0_CMICIC292_BEHSTPACK	(*(volatile uint_io8_t*)0xB701249B)  /*@bfbba@*/

#define DMA0_CMICIC293	(DMA0.unCMICIC293.u32Register)  /*@rg@*/
#define DMA0_CMICIC293_BEHREQACK	(*(volatile uint_io8_t*)0xB70124B9)  /*@bfbba@*/
#define DMA0_CMICIC293_BEHSTPACK	(*(volatile uint_io8_t*)0xB70124BB)  /*@bfbba@*/

#define DMA0_CMICIC294	(DMA0.unCMICIC294.u32Register)  /*@rg@*/
#define DMA0_CMICIC294_BEHREQACK	(*(volatile uint_io8_t*)0xB70124D9)  /*@bfbba@*/
#define DMA0_CMICIC294_BEHSTPACK	(*(volatile uint_io8_t*)0xB70124DB)  /*@bfbba@*/

#define DMA0_CMICIC295	(DMA0.unCMICIC295.u32Register)  /*@rg@*/
#define DMA0_CMICIC295_BEHREQACK	(*(volatile uint_io8_t*)0xB70124F9)  /*@bfbba@*/
#define DMA0_CMICIC295_BEHSTPACK	(*(volatile uint_io8_t*)0xB70124FB)  /*@bfbba@*/

#define DMA0_CMICIC296	(DMA0.unCMICIC296.u32Register)  /*@rg@*/
#define DMA0_CMICIC296_BEHREQACK	(*(volatile uint_io8_t*)0xB7012519)  /*@bfbba@*/
#define DMA0_CMICIC296_BEHSTPACK	(*(volatile uint_io8_t*)0xB701251B)  /*@bfbba@*/

#define DMA0_CMICIC297	(DMA0.unCMICIC297.u32Register)  /*@rg@*/
#define DMA0_CMICIC297_BEHREQACK	(*(volatile uint_io8_t*)0xB7012539)  /*@bfbba@*/
#define DMA0_CMICIC297_BEHSTPACK	(*(volatile uint_io8_t*)0xB701253B)  /*@bfbba@*/

#define DMA0_CMICIC298	(DMA0.unCMICIC298.u32Register)  /*@rg@*/
#define DMA0_CMICIC298_BEHREQACK	(*(volatile uint_io8_t*)0xB7012559)  /*@bfbba@*/
#define DMA0_CMICIC298_BEHSTPACK	(*(volatile uint_io8_t*)0xB701255B)  /*@bfbba@*/

#define DMA0_CMICIC299	(DMA0.unCMICIC299.u32Register)  /*@rg@*/
#define DMA0_CMICIC299_BEHREQACK	(*(volatile uint_io8_t*)0xB7012579)  /*@bfbba@*/
#define DMA0_CMICIC299_BEHSTPACK	(*(volatile uint_io8_t*)0xB701257B)  /*@bfbba@*/

#define DMA0_CMICIC300	(DMA0.unCMICIC300.u32Register)  /*@rg@*/
#define DMA0_CMICIC300_BEHREQACK	(*(volatile uint_io8_t*)0xB7012599)  /*@bfbba@*/
#define DMA0_CMICIC300_BEHSTPACK	(*(volatile uint_io8_t*)0xB701259B)  /*@bfbba@*/

#define DMA0_CMICIC301	(DMA0.unCMICIC301.u32Register)  /*@rg@*/
#define DMA0_CMICIC301_BEHREQACK	(*(volatile uint_io8_t*)0xB70125B9)  /*@bfbba@*/
#define DMA0_CMICIC301_BEHSTPACK	(*(volatile uint_io8_t*)0xB70125BB)  /*@bfbba@*/

#define DMA0_CMICIC302	(DMA0.unCMICIC302.u32Register)  /*@rg@*/
#define DMA0_CMICIC302_BEHREQACK	(*(volatile uint_io8_t*)0xB70125D9)  /*@bfbba@*/
#define DMA0_CMICIC302_BEHSTPACK	(*(volatile uint_io8_t*)0xB70125DB)  /*@bfbba@*/

#define DMA0_CMICIC303	(DMA0.unCMICIC303.u32Register)  /*@rg@*/
#define DMA0_CMICIC303_BEHREQACK	(*(volatile uint_io8_t*)0xB70125F9)  /*@bfbba@*/
#define DMA0_CMICIC303_BEHSTPACK	(*(volatile uint_io8_t*)0xB70125FB)  /*@bfbba@*/

#define DMA0_CMICIC304	(DMA0.unCMICIC304.u32Register)  /*@rg@*/
#define DMA0_CMICIC304_BEHREQACK	(*(volatile uint_io8_t*)0xB7012619)  /*@bfbba@*/
#define DMA0_CMICIC304_BEHSTPACK	(*(volatile uint_io8_t*)0xB701261B)  /*@bfbba@*/

#define DMA0_CMICIC305	(DMA0.unCMICIC305.u32Register)  /*@rg@*/
#define DMA0_CMICIC305_BEHREQACK	(*(volatile uint_io8_t*)0xB7012639)  /*@bfbba@*/
#define DMA0_CMICIC305_BEHSTPACK	(*(volatile uint_io8_t*)0xB701263B)  /*@bfbba@*/

#define DMA0_CMICIC306	(DMA0.unCMICIC306.u32Register)  /*@rg@*/
#define DMA0_CMICIC306_BEHREQACK	(*(volatile uint_io8_t*)0xB7012659)  /*@bfbba@*/
#define DMA0_CMICIC306_BEHSTPACK	(*(volatile uint_io8_t*)0xB701265B)  /*@bfbba@*/

#define DMA0_CMICIC307	(DMA0.unCMICIC307.u32Register)  /*@rg@*/
#define DMA0_CMICIC307_BEHREQACK	(*(volatile uint_io8_t*)0xB7012679)  /*@bfbba@*/
#define DMA0_CMICIC307_BEHSTPACK	(*(volatile uint_io8_t*)0xB701267B)  /*@bfbba@*/

#define DMA0_CMICIC308	(DMA0.unCMICIC308.u32Register)  /*@rg@*/
#define DMA0_CMICIC308_BEHREQACK	(*(volatile uint_io8_t*)0xB7012699)  /*@bfbba@*/
#define DMA0_CMICIC308_BEHSTPACK	(*(volatile uint_io8_t*)0xB701269B)  /*@bfbba@*/

#define DMA0_CMICIC309	(DMA0.unCMICIC309.u32Register)  /*@rg@*/
#define DMA0_CMICIC309_BEHREQACK	(*(volatile uint_io8_t*)0xB70126B9)  /*@bfbba@*/
#define DMA0_CMICIC309_BEHSTPACK	(*(volatile uint_io8_t*)0xB70126BB)  /*@bfbba@*/

#define DMA0_CMICIC310	(DMA0.unCMICIC310.u32Register)  /*@rg@*/
#define DMA0_CMICIC310_BEHREQACK	(*(volatile uint_io8_t*)0xB70126D9)  /*@bfbba@*/
#define DMA0_CMICIC310_BEHSTPACK	(*(volatile uint_io8_t*)0xB70126DB)  /*@bfbba@*/

#define DMA0_CMICIC311	(DMA0.unCMICIC311.u32Register)  /*@rg@*/
#define DMA0_CMICIC311_BEHREQACK	(*(volatile uint_io8_t*)0xB70126F9)  /*@bfbba@*/
#define DMA0_CMICIC311_BEHSTPACK	(*(volatile uint_io8_t*)0xB70126FB)  /*@bfbba@*/

#define DMA0_CMICIC312	(DMA0.unCMICIC312.u32Register)  /*@rg@*/
#define DMA0_CMICIC312_BEHREQACK	(*(volatile uint_io8_t*)0xB7012719)  /*@bfbba@*/
#define DMA0_CMICIC312_BEHSTPACK	(*(volatile uint_io8_t*)0xB701271B)  /*@bfbba@*/

#define DMA0_CMICIC313	(DMA0.unCMICIC313.u32Register)  /*@rg@*/
#define DMA0_CMICIC313_BEHREQACK	(*(volatile uint_io8_t*)0xB7012739)  /*@bfbba@*/
#define DMA0_CMICIC313_BEHSTPACK	(*(volatile uint_io8_t*)0xB701273B)  /*@bfbba@*/

#define DMA0_CMICIC314	(DMA0.unCMICIC314.u32Register)  /*@rg@*/
#define DMA0_CMICIC314_BEHREQACK	(*(volatile uint_io8_t*)0xB7012759)  /*@bfbba@*/
#define DMA0_CMICIC314_BEHSTPACK	(*(volatile uint_io8_t*)0xB701275B)  /*@bfbba@*/

#define DMA0_CMICIC315	(DMA0.unCMICIC315.u32Register)  /*@rg@*/
#define DMA0_CMICIC315_BEHREQACK	(*(volatile uint_io8_t*)0xB7012779)  /*@bfbba@*/
#define DMA0_CMICIC315_BEHSTPACK	(*(volatile uint_io8_t*)0xB701277B)  /*@bfbba@*/

#define DMA0_CMICIC316	(DMA0.unCMICIC316.u32Register)  /*@rg@*/
#define DMA0_CMICIC316_BEHREQACK	(*(volatile uint_io8_t*)0xB7012799)  /*@bfbba@*/
#define DMA0_CMICIC316_BEHSTPACK	(*(volatile uint_io8_t*)0xB701279B)  /*@bfbba@*/

#define DMA0_CMICIC317	(DMA0.unCMICIC317.u32Register)  /*@rg@*/
#define DMA0_CMICIC317_BEHREQACK	(*(volatile uint_io8_t*)0xB70127B9)  /*@bfbba@*/
#define DMA0_CMICIC317_BEHSTPACK	(*(volatile uint_io8_t*)0xB70127BB)  /*@bfbba@*/

#define DMA0_CMICIC318	(DMA0.unCMICIC318.u32Register)  /*@rg@*/
#define DMA0_CMICIC318_BEHREQACK	(*(volatile uint_io8_t*)0xB70127D9)  /*@bfbba@*/
#define DMA0_CMICIC318_BEHSTPACK	(*(volatile uint_io8_t*)0xB70127DB)  /*@bfbba@*/

#define DMA0_CMICIC319	(DMA0.unCMICIC319.u32Register)  /*@rg@*/
#define DMA0_CMICIC319_BEHREQACK	(*(volatile uint_io8_t*)0xB70127F9)  /*@bfbba@*/
#define DMA0_CMICIC319_BEHSTPACK	(*(volatile uint_io8_t*)0xB70127FB)  /*@bfbba@*/

#define DMA0_CMICIC320	(DMA0.unCMICIC320.u32Register)  /*@rg@*/
#define DMA0_CMICIC320_BEHREQACK	(*(volatile uint_io8_t*)0xB7012819)  /*@bfbba@*/
#define DMA0_CMICIC320_BEHSTPACK	(*(volatile uint_io8_t*)0xB701281B)  /*@bfbba@*/

#define DMA0_CMICIC321	(DMA0.unCMICIC321.u32Register)  /*@rg@*/
#define DMA0_CMICIC321_BEHREQACK	(*(volatile uint_io8_t*)0xB7012839)  /*@bfbba@*/
#define DMA0_CMICIC321_BEHSTPACK	(*(volatile uint_io8_t*)0xB701283B)  /*@bfbba@*/

#define DMA0_CMICIC322	(DMA0.unCMICIC322.u32Register)  /*@rg@*/
#define DMA0_CMICIC322_BEHREQACK	(*(volatile uint_io8_t*)0xB7012859)  /*@bfbba@*/
#define DMA0_CMICIC322_BEHSTPACK	(*(volatile uint_io8_t*)0xB701285B)  /*@bfbba@*/

#define DMA0_CMICIC323	(DMA0.unCMICIC323.u32Register)  /*@rg@*/
#define DMA0_CMICIC323_BEHREQACK	(*(volatile uint_io8_t*)0xB7012879)  /*@bfbba@*/
#define DMA0_CMICIC323_BEHSTPACK	(*(volatile uint_io8_t*)0xB701287B)  /*@bfbba@*/

#define DMA0_CMICIC324	(DMA0.unCMICIC324.u32Register)  /*@rg@*/
#define DMA0_CMICIC324_BEHREQACK	(*(volatile uint_io8_t*)0xB7012899)  /*@bfbba@*/
#define DMA0_CMICIC324_BEHSTPACK	(*(volatile uint_io8_t*)0xB701289B)  /*@bfbba@*/

#define DMA0_CMICIC325	(DMA0.unCMICIC325.u32Register)  /*@rg@*/
#define DMA0_CMICIC325_BEHREQACK	(*(volatile uint_io8_t*)0xB70128B9)  /*@bfbba@*/
#define DMA0_CMICIC325_BEHSTPACK	(*(volatile uint_io8_t*)0xB70128BB)  /*@bfbba@*/

#define DMA0_CMICIC326	(DMA0.unCMICIC326.u32Register)  /*@rg@*/
#define DMA0_CMICIC326_BEHREQACK	(*(volatile uint_io8_t*)0xB70128D9)  /*@bfbba@*/
#define DMA0_CMICIC326_BEHSTPACK	(*(volatile uint_io8_t*)0xB70128DB)  /*@bfbba@*/

#define DMA0_CMICIC327	(DMA0.unCMICIC327.u32Register)  /*@rg@*/
#define DMA0_CMICIC327_BEHREQACK	(*(volatile uint_io8_t*)0xB70128F9)  /*@bfbba@*/
#define DMA0_CMICIC327_BEHSTPACK	(*(volatile uint_io8_t*)0xB70128FB)  /*@bfbba@*/

#define DMA0_CMICIC328	(DMA0.unCMICIC328.u32Register)  /*@rg@*/
#define DMA0_CMICIC328_BEHREQACK	(*(volatile uint_io8_t*)0xB7012919)  /*@bfbba@*/
#define DMA0_CMICIC328_BEHSTPACK	(*(volatile uint_io8_t*)0xB701291B)  /*@bfbba@*/

#define DMA0_CMICIC329	(DMA0.unCMICIC329.u32Register)  /*@rg@*/
#define DMA0_CMICIC329_BEHREQACK	(*(volatile uint_io8_t*)0xB7012939)  /*@bfbba@*/
#define DMA0_CMICIC329_BEHSTPACK	(*(volatile uint_io8_t*)0xB701293B)  /*@bfbba@*/

#define DMA0_CMICIC330	(DMA0.unCMICIC330.u32Register)  /*@rg@*/
#define DMA0_CMICIC330_BEHREQACK	(*(volatile uint_io8_t*)0xB7012959)  /*@bfbba@*/
#define DMA0_CMICIC330_BEHSTPACK	(*(volatile uint_io8_t*)0xB701295B)  /*@bfbba@*/

#define DMA0_CMICIC331	(DMA0.unCMICIC331.u32Register)  /*@rg@*/
#define DMA0_CMICIC331_BEHREQACK	(*(volatile uint_io8_t*)0xB7012979)  /*@bfbba@*/
#define DMA0_CMICIC331_BEHSTPACK	(*(volatile uint_io8_t*)0xB701297B)  /*@bfbba@*/

#define DMA0_CMICIC332	(DMA0.unCMICIC332.u32Register)  /*@rg@*/
#define DMA0_CMICIC332_BEHREQACK	(*(volatile uint_io8_t*)0xB7012999)  /*@bfbba@*/
#define DMA0_CMICIC332_BEHSTPACK	(*(volatile uint_io8_t*)0xB701299B)  /*@bfbba@*/

#define DMA0_CMICIC333	(DMA0.unCMICIC333.u32Register)  /*@rg@*/
#define DMA0_CMICIC333_BEHREQACK	(*(volatile uint_io8_t*)0xB70129B9)  /*@bfbba@*/
#define DMA0_CMICIC333_BEHSTPACK	(*(volatile uint_io8_t*)0xB70129BB)  /*@bfbba@*/

#define DMA0_CMICIC334	(DMA0.unCMICIC334.u32Register)  /*@rg@*/
#define DMA0_CMICIC334_BEHREQACK	(*(volatile uint_io8_t*)0xB70129D9)  /*@bfbba@*/
#define DMA0_CMICIC334_BEHSTPACK	(*(volatile uint_io8_t*)0xB70129DB)  /*@bfbba@*/

#define DMA0_CMICIC335	(DMA0.unCMICIC335.u32Register)  /*@rg@*/
#define DMA0_CMICIC335_BEHREQACK	(*(volatile uint_io8_t*)0xB70129F9)  /*@bfbba@*/
#define DMA0_CMICIC335_BEHSTPACK	(*(volatile uint_io8_t*)0xB70129FB)  /*@bfbba@*/

#define DMA0_CMICIC336	(DMA0.unCMICIC336.u32Register)  /*@rg@*/
#define DMA0_CMICIC336_BEHREQACK	(*(volatile uint_io8_t*)0xB7012A19)  /*@bfbba@*/
#define DMA0_CMICIC336_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012A1B)  /*@bfbba@*/

#define DMA0_CMICIC337	(DMA0.unCMICIC337.u32Register)  /*@rg@*/
#define DMA0_CMICIC337_BEHREQACK	(*(volatile uint_io8_t*)0xB7012A39)  /*@bfbba@*/
#define DMA0_CMICIC337_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012A3B)  /*@bfbba@*/

#define DMA0_CMICIC338	(DMA0.unCMICIC338.u32Register)  /*@rg@*/
#define DMA0_CMICIC338_BEHREQACK	(*(volatile uint_io8_t*)0xB7012A59)  /*@bfbba@*/
#define DMA0_CMICIC338_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012A5B)  /*@bfbba@*/

#define DMA0_CMICIC339	(DMA0.unCMICIC339.u32Register)  /*@rg@*/
#define DMA0_CMICIC339_BEHREQACK	(*(volatile uint_io8_t*)0xB7012A79)  /*@bfbba@*/
#define DMA0_CMICIC339_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012A7B)  /*@bfbba@*/

#define DMA0_CMICIC340	(DMA0.unCMICIC340.u32Register)  /*@rg@*/
#define DMA0_CMICIC340_BEHREQACK	(*(volatile uint_io8_t*)0xB7012A99)  /*@bfbba@*/
#define DMA0_CMICIC340_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012A9B)  /*@bfbba@*/

#define DMA0_CMICIC341	(DMA0.unCMICIC341.u32Register)  /*@rg@*/
#define DMA0_CMICIC341_BEHREQACK	(*(volatile uint_io8_t*)0xB7012AB9)  /*@bfbba@*/
#define DMA0_CMICIC341_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012ABB)  /*@bfbba@*/

#define DMA0_CMICIC342	(DMA0.unCMICIC342.u32Register)  /*@rg@*/
#define DMA0_CMICIC342_BEHREQACK	(*(volatile uint_io8_t*)0xB7012AD9)  /*@bfbba@*/
#define DMA0_CMICIC342_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012ADB)  /*@bfbba@*/

#define DMA0_CMICIC343	(DMA0.unCMICIC343.u32Register)  /*@rg@*/
#define DMA0_CMICIC343_BEHREQACK	(*(volatile uint_io8_t*)0xB7012AF9)  /*@bfbba@*/
#define DMA0_CMICIC343_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012AFB)  /*@bfbba@*/

#define DMA0_CMICIC344	(DMA0.unCMICIC344.u32Register)  /*@rg@*/
#define DMA0_CMICIC344_BEHREQACK	(*(volatile uint_io8_t*)0xB7012B19)  /*@bfbba@*/
#define DMA0_CMICIC344_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012B1B)  /*@bfbba@*/

#define DMA0_CMICIC345	(DMA0.unCMICIC345.u32Register)  /*@rg@*/
#define DMA0_CMICIC345_BEHREQACK	(*(volatile uint_io8_t*)0xB7012B39)  /*@bfbba@*/
#define DMA0_CMICIC345_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012B3B)  /*@bfbba@*/

#define DMA0_CMICIC346	(DMA0.unCMICIC346.u32Register)  /*@rg@*/
#define DMA0_CMICIC346_BEHREQACK	(*(volatile uint_io8_t*)0xB7012B59)  /*@bfbba@*/
#define DMA0_CMICIC346_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012B5B)  /*@bfbba@*/

#define DMA0_CMICIC347	(DMA0.unCMICIC347.u32Register)  /*@rg@*/
#define DMA0_CMICIC347_BEHREQACK	(*(volatile uint_io8_t*)0xB7012B79)  /*@bfbba@*/
#define DMA0_CMICIC347_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012B7B)  /*@bfbba@*/

#define DMA0_CMICIC348	(DMA0.unCMICIC348.u32Register)  /*@rg@*/
#define DMA0_CMICIC348_BEHREQACK	(*(volatile uint_io8_t*)0xB7012B99)  /*@bfbba@*/
#define DMA0_CMICIC348_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012B9B)  /*@bfbba@*/

#define DMA0_CMICIC349	(DMA0.unCMICIC349.u32Register)  /*@rg@*/
#define DMA0_CMICIC349_BEHREQACK	(*(volatile uint_io8_t*)0xB7012BB9)  /*@bfbba@*/
#define DMA0_CMICIC349_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012BBB)  /*@bfbba@*/

#define DMA0_CMICIC350	(DMA0.unCMICIC350.u32Register)  /*@rg@*/
#define DMA0_CMICIC350_BEHREQACK	(*(volatile uint_io8_t*)0xB7012BD9)  /*@bfbba@*/
#define DMA0_CMICIC350_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012BDB)  /*@bfbba@*/

#define DMA0_CMICIC351	(DMA0.unCMICIC351.u32Register)  /*@rg@*/
#define DMA0_CMICIC351_BEHREQACK	(*(volatile uint_io8_t*)0xB7012BF9)  /*@bfbba@*/
#define DMA0_CMICIC351_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012BFB)  /*@bfbba@*/

#define DMA0_CMICIC352	(DMA0.unCMICIC352.u32Register)  /*@rg@*/
#define DMA0_CMICIC352_BEHREQACK	(*(volatile uint_io8_t*)0xB7012C19)  /*@bfbba@*/
#define DMA0_CMICIC352_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012C1B)  /*@bfbba@*/

#define DMA0_CMICIC353	(DMA0.unCMICIC353.u32Register)  /*@rg@*/
#define DMA0_CMICIC353_BEHREQACK	(*(volatile uint_io8_t*)0xB7012C39)  /*@bfbba@*/
#define DMA0_CMICIC353_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012C3B)  /*@bfbba@*/

#define DMA0_CMICIC354	(DMA0.unCMICIC354.u32Register)  /*@rg@*/
#define DMA0_CMICIC354_BEHREQACK	(*(volatile uint_io8_t*)0xB7012C59)  /*@bfbba@*/
#define DMA0_CMICIC354_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012C5B)  /*@bfbba@*/

#define DMA0_CMICIC355	(DMA0.unCMICIC355.u32Register)  /*@rg@*/
#define DMA0_CMICIC355_BEHREQACK	(*(volatile uint_io8_t*)0xB7012C79)  /*@bfbba@*/
#define DMA0_CMICIC355_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012C7B)  /*@bfbba@*/

#define DMA0_CMICIC356	(DMA0.unCMICIC356.u32Register)  /*@rg@*/
#define DMA0_CMICIC356_BEHREQACK	(*(volatile uint_io8_t*)0xB7012C99)  /*@bfbba@*/
#define DMA0_CMICIC356_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012C9B)  /*@bfbba@*/

#define DMA0_CMICIC357	(DMA0.unCMICIC357.u32Register)  /*@rg@*/
#define DMA0_CMICIC357_BEHREQACK	(*(volatile uint_io8_t*)0xB7012CB9)  /*@bfbba@*/
#define DMA0_CMICIC357_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012CBB)  /*@bfbba@*/

#define DMA0_CMICIC358	(DMA0.unCMICIC358.u32Register)  /*@rg@*/
#define DMA0_CMICIC358_BEHREQACK	(*(volatile uint_io8_t*)0xB7012CD9)  /*@bfbba@*/
#define DMA0_CMICIC358_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012CDB)  /*@bfbba@*/

#define DMA0_CMICIC359	(DMA0.unCMICIC359.u32Register)  /*@rg@*/
#define DMA0_CMICIC359_BEHREQACK	(*(volatile uint_io8_t*)0xB7012CF9)  /*@bfbba@*/
#define DMA0_CMICIC359_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012CFB)  /*@bfbba@*/

#define DMA0_CMICIC360	(DMA0.unCMICIC360.u32Register)  /*@rg@*/
#define DMA0_CMICIC360_BEHREQACK	(*(volatile uint_io8_t*)0xB7012D19)  /*@bfbba@*/
#define DMA0_CMICIC360_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012D1B)  /*@bfbba@*/

#define DMA0_CMICIC361	(DMA0.unCMICIC361.u32Register)  /*@rg@*/
#define DMA0_CMICIC361_BEHREQACK	(*(volatile uint_io8_t*)0xB7012D39)  /*@bfbba@*/
#define DMA0_CMICIC361_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012D3B)  /*@bfbba@*/

#define DMA0_CMICIC362	(DMA0.unCMICIC362.u32Register)  /*@rg@*/
#define DMA0_CMICIC362_BEHREQACK	(*(volatile uint_io8_t*)0xB7012D59)  /*@bfbba@*/
#define DMA0_CMICIC362_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012D5B)  /*@bfbba@*/

#define DMA0_CMICIC363	(DMA0.unCMICIC363.u32Register)  /*@rg@*/
#define DMA0_CMICIC363_BEHREQACK	(*(volatile uint_io8_t*)0xB7012D79)  /*@bfbba@*/
#define DMA0_CMICIC363_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012D7B)  /*@bfbba@*/

#define DMA0_CMICIC364	(DMA0.unCMICIC364.u32Register)  /*@rg@*/
#define DMA0_CMICIC364_BEHREQACK	(*(volatile uint_io8_t*)0xB7012D99)  /*@bfbba@*/
#define DMA0_CMICIC364_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012D9B)  /*@bfbba@*/

#define DMA0_CMICIC365	(DMA0.unCMICIC365.u32Register)  /*@rg@*/
#define DMA0_CMICIC365_BEHREQACK	(*(volatile uint_io8_t*)0xB7012DB9)  /*@bfbba@*/
#define DMA0_CMICIC365_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012DBB)  /*@bfbba@*/

#define DMA0_CMICIC366	(DMA0.unCMICIC366.u32Register)  /*@rg@*/
#define DMA0_CMICIC366_BEHREQACK	(*(volatile uint_io8_t*)0xB7012DD9)  /*@bfbba@*/
#define DMA0_CMICIC366_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012DDB)  /*@bfbba@*/

#define DMA0_CMICIC367	(DMA0.unCMICIC367.u32Register)  /*@rg@*/
#define DMA0_CMICIC367_BEHREQACK	(*(volatile uint_io8_t*)0xB7012DF9)  /*@bfbba@*/
#define DMA0_CMICIC367_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012DFB)  /*@bfbba@*/

#define DMA0_CMICIC368	(DMA0.unCMICIC368.u32Register)  /*@rg@*/
#define DMA0_CMICIC368_BEHREQACK	(*(volatile uint_io8_t*)0xB7012E19)  /*@bfbba@*/
#define DMA0_CMICIC368_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012E1B)  /*@bfbba@*/

#define DMA0_CMICIC369	(DMA0.unCMICIC369.u32Register)  /*@rg@*/
#define DMA0_CMICIC369_BEHREQACK	(*(volatile uint_io8_t*)0xB7012E39)  /*@bfbba@*/
#define DMA0_CMICIC369_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012E3B)  /*@bfbba@*/

#define DMA0_CMICIC370	(DMA0.unCMICIC370.u32Register)  /*@rg@*/
#define DMA0_CMICIC370_BEHREQACK	(*(volatile uint_io8_t*)0xB7012E59)  /*@bfbba@*/
#define DMA0_CMICIC370_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012E5B)  /*@bfbba@*/

#define DMA0_CMICIC371	(DMA0.unCMICIC371.u32Register)  /*@rg@*/
#define DMA0_CMICIC371_BEHREQACK	(*(volatile uint_io8_t*)0xB7012E79)  /*@bfbba@*/
#define DMA0_CMICIC371_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012E7B)  /*@bfbba@*/

#define DMA0_CMICIC372	(DMA0.unCMICIC372.u32Register)  /*@rg@*/
#define DMA0_CMICIC372_BEHREQACK	(*(volatile uint_io8_t*)0xB7012E99)  /*@bfbba@*/
#define DMA0_CMICIC372_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012E9B)  /*@bfbba@*/

#define DMA0_CMICIC373	(DMA0.unCMICIC373.u32Register)  /*@rg@*/
#define DMA0_CMICIC373_BEHREQACK	(*(volatile uint_io8_t*)0xB7012EB9)  /*@bfbba@*/
#define DMA0_CMICIC373_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012EBB)  /*@bfbba@*/

#define DMA0_CMICIC374	(DMA0.unCMICIC374.u32Register)  /*@rg@*/
#define DMA0_CMICIC374_BEHREQACK	(*(volatile uint_io8_t*)0xB7012ED9)  /*@bfbba@*/
#define DMA0_CMICIC374_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012EDB)  /*@bfbba@*/

#define DMA0_CMICIC375	(DMA0.unCMICIC375.u32Register)  /*@rg@*/
#define DMA0_CMICIC375_BEHREQACK	(*(volatile uint_io8_t*)0xB7012EF9)  /*@bfbba@*/
#define DMA0_CMICIC375_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012EFB)  /*@bfbba@*/

#define DMA0_CMICIC376	(DMA0.unCMICIC376.u32Register)  /*@rg@*/
#define DMA0_CMICIC376_BEHREQACK	(*(volatile uint_io8_t*)0xB7012F19)  /*@bfbba@*/
#define DMA0_CMICIC376_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012F1B)  /*@bfbba@*/

#define DMA0_CMICIC377	(DMA0.unCMICIC377.u32Register)  /*@rg@*/
#define DMA0_CMICIC377_BEHREQACK	(*(volatile uint_io8_t*)0xB7012F39)  /*@bfbba@*/
#define DMA0_CMICIC377_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012F3B)  /*@bfbba@*/

#define DMA0_CMICIC378	(DMA0.unCMICIC378.u32Register)  /*@rg@*/
#define DMA0_CMICIC378_BEHREQACK	(*(volatile uint_io8_t*)0xB7012F59)  /*@bfbba@*/
#define DMA0_CMICIC378_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012F5B)  /*@bfbba@*/

#define DMA0_CMICIC379	(DMA0.unCMICIC379.u32Register)  /*@rg@*/
#define DMA0_CMICIC379_BEHREQACK	(*(volatile uint_io8_t*)0xB7012F79)  /*@bfbba@*/
#define DMA0_CMICIC379_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012F7B)  /*@bfbba@*/

#define DMA0_CMICIC380	(DMA0.unCMICIC380.u32Register)  /*@rg@*/
#define DMA0_CMICIC380_BEHREQACK	(*(volatile uint_io8_t*)0xB7012F99)  /*@bfbba@*/
#define DMA0_CMICIC380_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012F9B)  /*@bfbba@*/

#define DMA0_CMICIC381	(DMA0.unCMICIC381.u32Register)  /*@rg@*/
#define DMA0_CMICIC381_BEHREQACK	(*(volatile uint_io8_t*)0xB7012FB9)  /*@bfbba@*/
#define DMA0_CMICIC381_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012FBB)  /*@bfbba@*/

#define DMA0_CMICIC382	(DMA0.unCMICIC382.u32Register)  /*@rg@*/
#define DMA0_CMICIC382_BEHREQACK	(*(volatile uint_io8_t*)0xB7012FD9)  /*@bfbba@*/
#define DMA0_CMICIC382_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012FDB)  /*@bfbba@*/

#define DMA0_CMICIC383	(DMA0.unCMICIC383.u32Register)  /*@rg@*/
#define DMA0_CMICIC383_BEHREQACK	(*(volatile uint_io8_t*)0xB7012FF9)  /*@bfbba@*/
#define DMA0_CMICIC383_BEHSTPACK	(*(volatile uint_io8_t*)0xB7012FFB)  /*@bfbba@*/

#define DMA0_CMICIC384	(DMA0.unCMICIC384.u32Register)  /*@rg@*/
#define DMA0_CMICIC384_BEHREQACK	(*(volatile uint_io8_t*)0xB7013019)  /*@bfbba@*/
#define DMA0_CMICIC384_BEHSTPACK	(*(volatile uint_io8_t*)0xB701301B)  /*@bfbba@*/

#define DMA0_CMICIC385	(DMA0.unCMICIC385.u32Register)  /*@rg@*/
#define DMA0_CMICIC385_BEHREQACK	(*(volatile uint_io8_t*)0xB7013039)  /*@bfbba@*/
#define DMA0_CMICIC385_BEHSTPACK	(*(volatile uint_io8_t*)0xB701303B)  /*@bfbba@*/

#define DMA0_CMICIC386	(DMA0.unCMICIC386.u32Register)  /*@rg@*/
#define DMA0_CMICIC386_BEHREQACK	(*(volatile uint_io8_t*)0xB7013059)  /*@bfbba@*/
#define DMA0_CMICIC386_BEHSTPACK	(*(volatile uint_io8_t*)0xB701305B)  /*@bfbba@*/

#define DMA0_CMICIC387	(DMA0.unCMICIC387.u32Register)  /*@rg@*/
#define DMA0_CMICIC387_BEHREQACK	(*(volatile uint_io8_t*)0xB7013079)  /*@bfbba@*/
#define DMA0_CMICIC387_BEHSTPACK	(*(volatile uint_io8_t*)0xB701307B)  /*@bfbba@*/

#define DMA0_CMICIC388	(DMA0.unCMICIC388.u32Register)  /*@rg@*/
#define DMA0_CMICIC388_BEHREQACK	(*(volatile uint_io8_t*)0xB7013099)  /*@bfbba@*/
#define DMA0_CMICIC388_BEHSTPACK	(*(volatile uint_io8_t*)0xB701309B)  /*@bfbba@*/

#define DMA0_CMICIC389	(DMA0.unCMICIC389.u32Register)  /*@rg@*/
#define DMA0_CMICIC389_BEHREQACK	(*(volatile uint_io8_t*)0xB70130B9)  /*@bfbba@*/
#define DMA0_CMICIC389_BEHSTPACK	(*(volatile uint_io8_t*)0xB70130BB)  /*@bfbba@*/

#define DMA0_CMICIC390	(DMA0.unCMICIC390.u32Register)  /*@rg@*/
#define DMA0_CMICIC390_BEHREQACK	(*(volatile uint_io8_t*)0xB70130D9)  /*@bfbba@*/
#define DMA0_CMICIC390_BEHSTPACK	(*(volatile uint_io8_t*)0xB70130DB)  /*@bfbba@*/

#define DMA0_CMICIC391	(DMA0.unCMICIC391.u32Register)  /*@rg@*/
#define DMA0_CMICIC391_BEHREQACK	(*(volatile uint_io8_t*)0xB70130F9)  /*@bfbba@*/
#define DMA0_CMICIC391_BEHSTPACK	(*(volatile uint_io8_t*)0xB70130FB)  /*@bfbba@*/

#define DMA0_CMICIC392	(DMA0.unCMICIC392.u32Register)  /*@rg@*/
#define DMA0_CMICIC392_BEHREQACK	(*(volatile uint_io8_t*)0xB7013119)  /*@bfbba@*/
#define DMA0_CMICIC392_BEHSTPACK	(*(volatile uint_io8_t*)0xB701311B)  /*@bfbba@*/

#define DMA0_CMICIC393	(DMA0.unCMICIC393.u32Register)  /*@rg@*/
#define DMA0_CMICIC393_BEHREQACK	(*(volatile uint_io8_t*)0xB7013139)  /*@bfbba@*/
#define DMA0_CMICIC393_BEHSTPACK	(*(volatile uint_io8_t*)0xB701313B)  /*@bfbba@*/

#define DMA0_CMICIC394	(DMA0.unCMICIC394.u32Register)  /*@rg@*/
#define DMA0_CMICIC394_BEHREQACK	(*(volatile uint_io8_t*)0xB7013159)  /*@bfbba@*/
#define DMA0_CMICIC394_BEHSTPACK	(*(volatile uint_io8_t*)0xB701315B)  /*@bfbba@*/

#define DMA0_CMICIC395	(DMA0.unCMICIC395.u32Register)  /*@rg@*/
#define DMA0_CMICIC395_BEHREQACK	(*(volatile uint_io8_t*)0xB7013179)  /*@bfbba@*/
#define DMA0_CMICIC395_BEHSTPACK	(*(volatile uint_io8_t*)0xB701317B)  /*@bfbba@*/

#define DMA0_CMICIC396	(DMA0.unCMICIC396.u32Register)  /*@rg@*/
#define DMA0_CMICIC396_BEHREQACK	(*(volatile uint_io8_t*)0xB7013199)  /*@bfbba@*/
#define DMA0_CMICIC396_BEHSTPACK	(*(volatile uint_io8_t*)0xB701319B)  /*@bfbba@*/

#define DMA0_CMICIC397	(DMA0.unCMICIC397.u32Register)  /*@rg@*/
#define DMA0_CMICIC397_BEHREQACK	(*(volatile uint_io8_t*)0xB70131B9)  /*@bfbba@*/
#define DMA0_CMICIC397_BEHSTPACK	(*(volatile uint_io8_t*)0xB70131BB)  /*@bfbba@*/

#define DMA0_CMICIC398	(DMA0.unCMICIC398.u32Register)  /*@rg@*/
#define DMA0_CMICIC398_BEHREQACK	(*(volatile uint_io8_t*)0xB70131D9)  /*@bfbba@*/
#define DMA0_CMICIC398_BEHSTPACK	(*(volatile uint_io8_t*)0xB70131DB)  /*@bfbba@*/

#define DMA0_CMICIC399	(DMA0.unCMICIC399.u32Register)  /*@rg@*/
#define DMA0_CMICIC399_BEHREQACK	(*(volatile uint_io8_t*)0xB70131F9)  /*@bfbba@*/
#define DMA0_CMICIC399_BEHSTPACK	(*(volatile uint_io8_t*)0xB70131FB)  /*@bfbba@*/

#define DMA0_CMICIC400	(DMA0.unCMICIC400.u32Register)  /*@rg@*/
#define DMA0_CMICIC400_BEHREQACK	(*(volatile uint_io8_t*)0xB7013219)  /*@bfbba@*/
#define DMA0_CMICIC400_BEHSTPACK	(*(volatile uint_io8_t*)0xB701321B)  /*@bfbba@*/

#define DMA0_CMICIC401	(DMA0.unCMICIC401.u32Register)  /*@rg@*/
#define DMA0_CMICIC401_BEHREQACK	(*(volatile uint_io8_t*)0xB7013239)  /*@bfbba@*/
#define DMA0_CMICIC401_BEHSTPACK	(*(volatile uint_io8_t*)0xB701323B)  /*@bfbba@*/

#define DMA0_CMICIC402	(DMA0.unCMICIC402.u32Register)  /*@rg@*/
#define DMA0_CMICIC402_BEHREQACK	(*(volatile uint_io8_t*)0xB7013259)  /*@bfbba@*/
#define DMA0_CMICIC402_BEHSTPACK	(*(volatile uint_io8_t*)0xB701325B)  /*@bfbba@*/

#define DMA0_CMICIC403	(DMA0.unCMICIC403.u32Register)  /*@rg@*/
#define DMA0_CMICIC403_BEHREQACK	(*(volatile uint_io8_t*)0xB7013279)  /*@bfbba@*/
#define DMA0_CMICIC403_BEHSTPACK	(*(volatile uint_io8_t*)0xB701327B)  /*@bfbba@*/

#define DMA0_CMICIC404	(DMA0.unCMICIC404.u32Register)  /*@rg@*/
#define DMA0_CMICIC404_BEHREQACK	(*(volatile uint_io8_t*)0xB7013299)  /*@bfbba@*/
#define DMA0_CMICIC404_BEHSTPACK	(*(volatile uint_io8_t*)0xB701329B)  /*@bfbba@*/

#define DMA0_CMICIC405	(DMA0.unCMICIC405.u32Register)  /*@rg@*/
#define DMA0_CMICIC405_BEHREQACK	(*(volatile uint_io8_t*)0xB70132B9)  /*@bfbba@*/
#define DMA0_CMICIC405_BEHSTPACK	(*(volatile uint_io8_t*)0xB70132BB)  /*@bfbba@*/

#define DMA0_CMICIC406	(DMA0.unCMICIC406.u32Register)  /*@rg@*/
#define DMA0_CMICIC406_BEHREQACK	(*(volatile uint_io8_t*)0xB70132D9)  /*@bfbba@*/
#define DMA0_CMICIC406_BEHSTPACK	(*(volatile uint_io8_t*)0xB70132DB)  /*@bfbba@*/

#define DMA0_CMICIC407	(DMA0.unCMICIC407.u32Register)  /*@rg@*/
#define DMA0_CMICIC407_BEHREQACK	(*(volatile uint_io8_t*)0xB70132F9)  /*@bfbba@*/
#define DMA0_CMICIC407_BEHSTPACK	(*(volatile uint_io8_t*)0xB70132FB)  /*@bfbba@*/

#define DMA0_CMICIC408	(DMA0.unCMICIC408.u32Register)  /*@rg@*/
#define DMA0_CMICIC408_BEHREQACK	(*(volatile uint_io8_t*)0xB7013319)  /*@bfbba@*/
#define DMA0_CMICIC408_BEHSTPACK	(*(volatile uint_io8_t*)0xB701331B)  /*@bfbba@*/

#define DMA0_CMICIC409	(DMA0.unCMICIC409.u32Register)  /*@rg@*/
#define DMA0_CMICIC409_BEHREQACK	(*(volatile uint_io8_t*)0xB7013339)  /*@bfbba@*/
#define DMA0_CMICIC409_BEHSTPACK	(*(volatile uint_io8_t*)0xB701333B)  /*@bfbba@*/

#define DMA0_CMICIC410	(DMA0.unCMICIC410.u32Register)  /*@rg@*/
#define DMA0_CMICIC410_BEHREQACK	(*(volatile uint_io8_t*)0xB7013359)  /*@bfbba@*/
#define DMA0_CMICIC410_BEHSTPACK	(*(volatile uint_io8_t*)0xB701335B)  /*@bfbba@*/

#define DMA0_CMICIC411	(DMA0.unCMICIC411.u32Register)  /*@rg@*/
#define DMA0_CMICIC411_BEHREQACK	(*(volatile uint_io8_t*)0xB7013379)  /*@bfbba@*/
#define DMA0_CMICIC411_BEHSTPACK	(*(volatile uint_io8_t*)0xB701337B)  /*@bfbba@*/

#define DMA0_CMICIC412	(DMA0.unCMICIC412.u32Register)  /*@rg@*/
#define DMA0_CMICIC412_BEHREQACK	(*(volatile uint_io8_t*)0xB7013399)  /*@bfbba@*/
#define DMA0_CMICIC412_BEHSTPACK	(*(volatile uint_io8_t*)0xB701339B)  /*@bfbba@*/

#define DMA0_CMICIC413	(DMA0.unCMICIC413.u32Register)  /*@rg@*/
#define DMA0_CMICIC413_BEHREQACK	(*(volatile uint_io8_t*)0xB70133B9)  /*@bfbba@*/
#define DMA0_CMICIC413_BEHSTPACK	(*(volatile uint_io8_t*)0xB70133BB)  /*@bfbba@*/

#define DMA0_CMICIC414	(DMA0.unCMICIC414.u32Register)  /*@rg@*/
#define DMA0_CMICIC414_BEHREQACK	(*(volatile uint_io8_t*)0xB70133D9)  /*@bfbba@*/
#define DMA0_CMICIC414_BEHSTPACK	(*(volatile uint_io8_t*)0xB70133DB)  /*@bfbba@*/

#define DMA0_CMICIC415	(DMA0.unCMICIC415.u32Register)  /*@rg@*/
#define DMA0_CMICIC415_BEHREQACK	(*(volatile uint_io8_t*)0xB70133F9)  /*@bfbba@*/
#define DMA0_CMICIC415_BEHSTPACK	(*(volatile uint_io8_t*)0xB70133FB)  /*@bfbba@*/

#define DMA0_CMICIC416	(DMA0.unCMICIC416.u32Register)  /*@rg@*/
#define DMA0_CMICIC416_BEHREQACK	(*(volatile uint_io8_t*)0xB7013419)  /*@bfbba@*/
#define DMA0_CMICIC416_BEHSTPACK	(*(volatile uint_io8_t*)0xB701341B)  /*@bfbba@*/

#define DMA0_CMICIC417	(DMA0.unCMICIC417.u32Register)  /*@rg@*/
#define DMA0_CMICIC417_BEHREQACK	(*(volatile uint_io8_t*)0xB7013439)  /*@bfbba@*/
#define DMA0_CMICIC417_BEHSTPACK	(*(volatile uint_io8_t*)0xB701343B)  /*@bfbba@*/

#define DMA0_CMICIC418	(DMA0.unCMICIC418.u32Register)  /*@rg@*/
#define DMA0_CMICIC418_BEHREQACK	(*(volatile uint_io8_t*)0xB7013459)  /*@bfbba@*/
#define DMA0_CMICIC418_BEHSTPACK	(*(volatile uint_io8_t*)0xB701345B)  /*@bfbba@*/

#define DMA0_CMICIC419	(DMA0.unCMICIC419.u32Register)  /*@rg@*/
#define DMA0_CMICIC419_BEHREQACK	(*(volatile uint_io8_t*)0xB7013479)  /*@bfbba@*/
#define DMA0_CMICIC419_BEHSTPACK	(*(volatile uint_io8_t*)0xB701347B)  /*@bfbba@*/

#define DMA0_CMICIC420	(DMA0.unCMICIC420.u32Register)  /*@rg@*/
#define DMA0_CMICIC420_BEHREQACK	(*(volatile uint_io8_t*)0xB7013499)  /*@bfbba@*/
#define DMA0_CMICIC420_BEHSTPACK	(*(volatile uint_io8_t*)0xB701349B)  /*@bfbba@*/

#define DMA0_CMICIC421	(DMA0.unCMICIC421.u32Register)  /*@rg@*/
#define DMA0_CMICIC421_BEHREQACK	(*(volatile uint_io8_t*)0xB70134B9)  /*@bfbba@*/
#define DMA0_CMICIC421_BEHSTPACK	(*(volatile uint_io8_t*)0xB70134BB)  /*@bfbba@*/

#define DMA0_CMICIC422	(DMA0.unCMICIC422.u32Register)  /*@rg@*/
#define DMA0_CMICIC422_BEHREQACK	(*(volatile uint_io8_t*)0xB70134D9)  /*@bfbba@*/
#define DMA0_CMICIC422_BEHSTPACK	(*(volatile uint_io8_t*)0xB70134DB)  /*@bfbba@*/

#define DMA0_CMICIC423	(DMA0.unCMICIC423.u32Register)  /*@rg@*/
#define DMA0_CMICIC423_BEHREQACK	(*(volatile uint_io8_t*)0xB70134F9)  /*@bfbba@*/
#define DMA0_CMICIC423_BEHSTPACK	(*(volatile uint_io8_t*)0xB70134FB)  /*@bfbba@*/

#define DMA0_CMICIC424	(DMA0.unCMICIC424.u32Register)  /*@rg@*/
#define DMA0_CMICIC424_BEHREQACK	(*(volatile uint_io8_t*)0xB7013519)  /*@bfbba@*/
#define DMA0_CMICIC424_BEHSTPACK	(*(volatile uint_io8_t*)0xB701351B)  /*@bfbba@*/

#define DMA0_CMICIC425	(DMA0.unCMICIC425.u32Register)  /*@rg@*/
#define DMA0_CMICIC425_BEHREQACK	(*(volatile uint_io8_t*)0xB7013539)  /*@bfbba@*/
#define DMA0_CMICIC425_BEHSTPACK	(*(volatile uint_io8_t*)0xB701353B)  /*@bfbba@*/

#define DMA0_CMICIC426	(DMA0.unCMICIC426.u32Register)  /*@rg@*/
#define DMA0_CMICIC426_BEHREQACK	(*(volatile uint_io8_t*)0xB7013559)  /*@bfbba@*/
#define DMA0_CMICIC426_BEHSTPACK	(*(volatile uint_io8_t*)0xB701355B)  /*@bfbba@*/

#define DMA0_CMICIC427	(DMA0.unCMICIC427.u32Register)  /*@rg@*/
#define DMA0_CMICIC427_BEHREQACK	(*(volatile uint_io8_t*)0xB7013579)  /*@bfbba@*/
#define DMA0_CMICIC427_BEHSTPACK	(*(volatile uint_io8_t*)0xB701357B)  /*@bfbba@*/

#define DMA0_CMICIC428	(DMA0.unCMICIC428.u32Register)  /*@rg@*/
#define DMA0_CMICIC428_BEHREQACK	(*(volatile uint_io8_t*)0xB7013599)  /*@bfbba@*/
#define DMA0_CMICIC428_BEHSTPACK	(*(volatile uint_io8_t*)0xB701359B)  /*@bfbba@*/

#define DMA0_CMICIC429	(DMA0.unCMICIC429.u32Register)  /*@rg@*/
#define DMA0_CMICIC429_BEHREQACK	(*(volatile uint_io8_t*)0xB70135B9)  /*@bfbba@*/
#define DMA0_CMICIC429_BEHSTPACK	(*(volatile uint_io8_t*)0xB70135BB)  /*@bfbba@*/

#define DMA0_CMICIC430	(DMA0.unCMICIC430.u32Register)  /*@rg@*/
#define DMA0_CMICIC430_BEHREQACK	(*(volatile uint_io8_t*)0xB70135D9)  /*@bfbba@*/
#define DMA0_CMICIC430_BEHSTPACK	(*(volatile uint_io8_t*)0xB70135DB)  /*@bfbba@*/

#define DMA0_CMICIC431	(DMA0.unCMICIC431.u32Register)  /*@rg@*/
#define DMA0_CMICIC431_BEHREQACK	(*(volatile uint_io8_t*)0xB70135F9)  /*@bfbba@*/
#define DMA0_CMICIC431_BEHSTPACK	(*(volatile uint_io8_t*)0xB70135FB)  /*@bfbba@*/

#define DMA0_CMICIC432	(DMA0.unCMICIC432.u32Register)  /*@rg@*/
#define DMA0_CMICIC432_BEHREQACK	(*(volatile uint_io8_t*)0xB7013619)  /*@bfbba@*/
#define DMA0_CMICIC432_BEHSTPACK	(*(volatile uint_io8_t*)0xB701361B)  /*@bfbba@*/

#define DMA0_CMICIC433	(DMA0.unCMICIC433.u32Register)  /*@rg@*/
#define DMA0_CMICIC433_BEHREQACK	(*(volatile uint_io8_t*)0xB7013639)  /*@bfbba@*/
#define DMA0_CMICIC433_BEHSTPACK	(*(volatile uint_io8_t*)0xB701363B)  /*@bfbba@*/

#define DMA0_CMICIC434	(DMA0.unCMICIC434.u32Register)  /*@rg@*/
#define DMA0_CMICIC434_BEHREQACK	(*(volatile uint_io8_t*)0xB7013659)  /*@bfbba@*/
#define DMA0_CMICIC434_BEHSTPACK	(*(volatile uint_io8_t*)0xB701365B)  /*@bfbba@*/

#define DMA0_CMICIC435	(DMA0.unCMICIC435.u32Register)  /*@rg@*/
#define DMA0_CMICIC435_BEHREQACK	(*(volatile uint_io8_t*)0xB7013679)  /*@bfbba@*/
#define DMA0_CMICIC435_BEHSTPACK	(*(volatile uint_io8_t*)0xB701367B)  /*@bfbba@*/

#define DMA0_CMICIC436	(DMA0.unCMICIC436.u32Register)  /*@rg@*/
#define DMA0_CMICIC436_BEHREQACK	(*(volatile uint_io8_t*)0xB7013699)  /*@bfbba@*/
#define DMA0_CMICIC436_BEHSTPACK	(*(volatile uint_io8_t*)0xB701369B)  /*@bfbba@*/

#define DMA0_CMICIC437	(DMA0.unCMICIC437.u32Register)  /*@rg@*/
#define DMA0_CMICIC437_BEHREQACK	(*(volatile uint_io8_t*)0xB70136B9)  /*@bfbba@*/
#define DMA0_CMICIC437_BEHSTPACK	(*(volatile uint_io8_t*)0xB70136BB)  /*@bfbba@*/

#define DMA0_CMICIC438	(DMA0.unCMICIC438.u32Register)  /*@rg@*/
#define DMA0_CMICIC438_BEHREQACK	(*(volatile uint_io8_t*)0xB70136D9)  /*@bfbba@*/
#define DMA0_CMICIC438_BEHSTPACK	(*(volatile uint_io8_t*)0xB70136DB)  /*@bfbba@*/

#define DMA0_CMICIC439	(DMA0.unCMICIC439.u32Register)  /*@rg@*/
#define DMA0_CMICIC439_BEHREQACK	(*(volatile uint_io8_t*)0xB70136F9)  /*@bfbba@*/
#define DMA0_CMICIC439_BEHSTPACK	(*(volatile uint_io8_t*)0xB70136FB)  /*@bfbba@*/

#define DMA0_CMICIC440	(DMA0.unCMICIC440.u32Register)  /*@rg@*/
#define DMA0_CMICIC440_BEHREQACK	(*(volatile uint_io8_t*)0xB7013719)  /*@bfbba@*/
#define DMA0_CMICIC440_BEHSTPACK	(*(volatile uint_io8_t*)0xB701371B)  /*@bfbba@*/

#define DMA0_CMICIC441	(DMA0.unCMICIC441.u32Register)  /*@rg@*/
#define DMA0_CMICIC441_BEHREQACK	(*(volatile uint_io8_t*)0xB7013739)  /*@bfbba@*/
#define DMA0_CMICIC441_BEHSTPACK	(*(volatile uint_io8_t*)0xB701373B)  /*@bfbba@*/

#define DMA0_CMICIC442	(DMA0.unCMICIC442.u32Register)  /*@rg@*/
#define DMA0_CMICIC442_BEHREQACK	(*(volatile uint_io8_t*)0xB7013759)  /*@bfbba@*/
#define DMA0_CMICIC442_BEHSTPACK	(*(volatile uint_io8_t*)0xB701375B)  /*@bfbba@*/

#define DMA0_CMICIC443	(DMA0.unCMICIC443.u32Register)  /*@rg@*/
#define DMA0_CMICIC443_BEHREQACK	(*(volatile uint_io8_t*)0xB7013779)  /*@bfbba@*/
#define DMA0_CMICIC443_BEHSTPACK	(*(volatile uint_io8_t*)0xB701377B)  /*@bfbba@*/

#define DMA0_CMICIC444	(DMA0.unCMICIC444.u32Register)  /*@rg@*/
#define DMA0_CMICIC444_BEHREQACK	(*(volatile uint_io8_t*)0xB7013799)  /*@bfbba@*/
#define DMA0_CMICIC444_BEHSTPACK	(*(volatile uint_io8_t*)0xB701379B)  /*@bfbba@*/

#define DMA0_CMICIC445	(DMA0.unCMICIC445.u32Register)  /*@rg@*/
#define DMA0_CMICIC445_BEHREQACK	(*(volatile uint_io8_t*)0xB70137B9)  /*@bfbba@*/
#define DMA0_CMICIC445_BEHSTPACK	(*(volatile uint_io8_t*)0xB70137BB)  /*@bfbba@*/

#define DMA0_CMICIC446	(DMA0.unCMICIC446.u32Register)  /*@rg@*/
#define DMA0_CMICIC446_BEHREQACK	(*(volatile uint_io8_t*)0xB70137D9)  /*@bfbba@*/
#define DMA0_CMICIC446_BEHSTPACK	(*(volatile uint_io8_t*)0xB70137DB)  /*@bfbba@*/

#define DMA0_CMICIC447	(DMA0.unCMICIC447.u32Register)  /*@rg@*/
#define DMA0_CMICIC447_BEHREQACK	(*(volatile uint_io8_t*)0xB70137F9)  /*@bfbba@*/
#define DMA0_CMICIC447_BEHSTPACK	(*(volatile uint_io8_t*)0xB70137FB)  /*@bfbba@*/

#define DMA0_CMICIC448	(DMA0.unCMICIC448.u32Register)  /*@rg@*/
#define DMA0_CMICIC448_BEHREQACK	(*(volatile uint_io8_t*)0xB7013819)  /*@bfbba@*/
#define DMA0_CMICIC448_BEHSTPACK	(*(volatile uint_io8_t*)0xB701381B)  /*@bfbba@*/

#define DMA0_CMICIC449	(DMA0.unCMICIC449.u32Register)  /*@rg@*/
#define DMA0_CMICIC449_BEHREQACK	(*(volatile uint_io8_t*)0xB7013839)  /*@bfbba@*/
#define DMA0_CMICIC449_BEHSTPACK	(*(volatile uint_io8_t*)0xB701383B)  /*@bfbba@*/

#define DMA0_CMICIC450	(DMA0.unCMICIC450.u32Register)  /*@rg@*/
#define DMA0_CMICIC450_BEHREQACK	(*(volatile uint_io8_t*)0xB7013859)  /*@bfbba@*/
#define DMA0_CMICIC450_BEHSTPACK	(*(volatile uint_io8_t*)0xB701385B)  /*@bfbba@*/

#define DMA0_CMICIC451	(DMA0.unCMICIC451.u32Register)  /*@rg@*/
#define DMA0_CMICIC451_BEHREQACK	(*(volatile uint_io8_t*)0xB7013879)  /*@bfbba@*/
#define DMA0_CMICIC451_BEHSTPACK	(*(volatile uint_io8_t*)0xB701387B)  /*@bfbba@*/

#define DMA0_CMICIC452	(DMA0.unCMICIC452.u32Register)  /*@rg@*/
#define DMA0_CMICIC452_BEHREQACK	(*(volatile uint_io8_t*)0xB7013899)  /*@bfbba@*/
#define DMA0_CMICIC452_BEHSTPACK	(*(volatile uint_io8_t*)0xB701389B)  /*@bfbba@*/

#define DMA0_CMICIC453	(DMA0.unCMICIC453.u32Register)  /*@rg@*/
#define DMA0_CMICIC453_BEHREQACK	(*(volatile uint_io8_t*)0xB70138B9)  /*@bfbba@*/
#define DMA0_CMICIC453_BEHSTPACK	(*(volatile uint_io8_t*)0xB70138BB)  /*@bfbba@*/

#define DMA0_CMICIC454	(DMA0.unCMICIC454.u32Register)  /*@rg@*/
#define DMA0_CMICIC454_BEHREQACK	(*(volatile uint_io8_t*)0xB70138D9)  /*@bfbba@*/
#define DMA0_CMICIC454_BEHSTPACK	(*(volatile uint_io8_t*)0xB70138DB)  /*@bfbba@*/

#define DMA0_CMICIC455	(DMA0.unCMICIC455.u32Register)  /*@rg@*/
#define DMA0_CMICIC455_BEHREQACK	(*(volatile uint_io8_t*)0xB70138F9)  /*@bfbba@*/
#define DMA0_CMICIC455_BEHSTPACK	(*(volatile uint_io8_t*)0xB70138FB)  /*@bfbba@*/

#define DMA0_CMICIC456	(DMA0.unCMICIC456.u32Register)  /*@rg@*/
#define DMA0_CMICIC456_BEHREQACK	(*(volatile uint_io8_t*)0xB7013919)  /*@bfbba@*/
#define DMA0_CMICIC456_BEHSTPACK	(*(volatile uint_io8_t*)0xB701391B)  /*@bfbba@*/

#define DMA0_CMICIC457	(DMA0.unCMICIC457.u32Register)  /*@rg@*/
#define DMA0_CMICIC457_BEHREQACK	(*(volatile uint_io8_t*)0xB7013939)  /*@bfbba@*/
#define DMA0_CMICIC457_BEHSTPACK	(*(volatile uint_io8_t*)0xB701393B)  /*@bfbba@*/

#define DMA0_CMICIC458	(DMA0.unCMICIC458.u32Register)  /*@rg@*/
#define DMA0_CMICIC458_BEHREQACK	(*(volatile uint_io8_t*)0xB7013959)  /*@bfbba@*/
#define DMA0_CMICIC458_BEHSTPACK	(*(volatile uint_io8_t*)0xB701395B)  /*@bfbba@*/

#define DMA0_CMICIC459	(DMA0.unCMICIC459.u32Register)  /*@rg@*/
#define DMA0_CMICIC459_BEHREQACK	(*(volatile uint_io8_t*)0xB7013979)  /*@bfbba@*/
#define DMA0_CMICIC459_BEHSTPACK	(*(volatile uint_io8_t*)0xB701397B)  /*@bfbba@*/

#define DMA0_CMICIC460	(DMA0.unCMICIC460.u32Register)  /*@rg@*/
#define DMA0_CMICIC460_BEHREQACK	(*(volatile uint_io8_t*)0xB7013999)  /*@bfbba@*/
#define DMA0_CMICIC460_BEHSTPACK	(*(volatile uint_io8_t*)0xB701399B)  /*@bfbba@*/

#define DMA0_CMICIC461	(DMA0.unCMICIC461.u32Register)  /*@rg@*/
#define DMA0_CMICIC461_BEHREQACK	(*(volatile uint_io8_t*)0xB70139B9)  /*@bfbba@*/
#define DMA0_CMICIC461_BEHSTPACK	(*(volatile uint_io8_t*)0xB70139BB)  /*@bfbba@*/

#define DMA0_CMICIC462	(DMA0.unCMICIC462.u32Register)  /*@rg@*/
#define DMA0_CMICIC462_BEHREQACK	(*(volatile uint_io8_t*)0xB70139D9)  /*@bfbba@*/
#define DMA0_CMICIC462_BEHSTPACK	(*(volatile uint_io8_t*)0xB70139DB)  /*@bfbba@*/

#define DMA0_CMICIC463	(DMA0.unCMICIC463.u32Register)  /*@rg@*/
#define DMA0_CMICIC463_BEHREQACK	(*(volatile uint_io8_t*)0xB70139F9)  /*@bfbba@*/
#define DMA0_CMICIC463_BEHSTPACK	(*(volatile uint_io8_t*)0xB70139FB)  /*@bfbba@*/

#define DMA0_CMICIC464	(DMA0.unCMICIC464.u32Register)  /*@rg@*/
#define DMA0_CMICIC464_BEHREQACK	(*(volatile uint_io8_t*)0xB7013A19)  /*@bfbba@*/
#define DMA0_CMICIC464_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013A1B)  /*@bfbba@*/

#define DMA0_CMICIC465	(DMA0.unCMICIC465.u32Register)  /*@rg@*/
#define DMA0_CMICIC465_BEHREQACK	(*(volatile uint_io8_t*)0xB7013A39)  /*@bfbba@*/
#define DMA0_CMICIC465_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013A3B)  /*@bfbba@*/

#define DMA0_CMICIC466	(DMA0.unCMICIC466.u32Register)  /*@rg@*/
#define DMA0_CMICIC466_BEHREQACK	(*(volatile uint_io8_t*)0xB7013A59)  /*@bfbba@*/
#define DMA0_CMICIC466_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013A5B)  /*@bfbba@*/

#define DMA0_CMICIC467	(DMA0.unCMICIC467.u32Register)  /*@rg@*/
#define DMA0_CMICIC467_BEHREQACK	(*(volatile uint_io8_t*)0xB7013A79)  /*@bfbba@*/
#define DMA0_CMICIC467_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013A7B)  /*@bfbba@*/

#define DMA0_CMICIC468	(DMA0.unCMICIC468.u32Register)  /*@rg@*/
#define DMA0_CMICIC468_BEHREQACK	(*(volatile uint_io8_t*)0xB7013A99)  /*@bfbba@*/
#define DMA0_CMICIC468_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013A9B)  /*@bfbba@*/

#define DMA0_CMICIC469	(DMA0.unCMICIC469.u32Register)  /*@rg@*/
#define DMA0_CMICIC469_BEHREQACK	(*(volatile uint_io8_t*)0xB7013AB9)  /*@bfbba@*/
#define DMA0_CMICIC469_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013ABB)  /*@bfbba@*/

#define DMA0_CMICIC470	(DMA0.unCMICIC470.u32Register)  /*@rg@*/
#define DMA0_CMICIC470_BEHREQACK	(*(volatile uint_io8_t*)0xB7013AD9)  /*@bfbba@*/
#define DMA0_CMICIC470_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013ADB)  /*@bfbba@*/

#define DMA0_CMICIC471	(DMA0.unCMICIC471.u32Register)  /*@rg@*/
#define DMA0_CMICIC471_BEHREQACK	(*(volatile uint_io8_t*)0xB7013AF9)  /*@bfbba@*/
#define DMA0_CMICIC471_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013AFB)  /*@bfbba@*/

#define DMA0_CMICIC472	(DMA0.unCMICIC472.u32Register)  /*@rg@*/
#define DMA0_CMICIC472_BEHREQACK	(*(volatile uint_io8_t*)0xB7013B19)  /*@bfbba@*/
#define DMA0_CMICIC472_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013B1B)  /*@bfbba@*/

#define DMA0_CMICIC473	(DMA0.unCMICIC473.u32Register)  /*@rg@*/
#define DMA0_CMICIC473_BEHREQACK	(*(volatile uint_io8_t*)0xB7013B39)  /*@bfbba@*/
#define DMA0_CMICIC473_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013B3B)  /*@bfbba@*/

#define DMA0_CMICIC474	(DMA0.unCMICIC474.u32Register)  /*@rg@*/
#define DMA0_CMICIC474_BEHREQACK	(*(volatile uint_io8_t*)0xB7013B59)  /*@bfbba@*/
#define DMA0_CMICIC474_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013B5B)  /*@bfbba@*/

#define DMA0_CMICIC475	(DMA0.unCMICIC475.u32Register)  /*@rg@*/
#define DMA0_CMICIC475_BEHREQACK	(*(volatile uint_io8_t*)0xB7013B79)  /*@bfbba@*/
#define DMA0_CMICIC475_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013B7B)  /*@bfbba@*/

#define DMA0_CMICIC476	(DMA0.unCMICIC476.u32Register)  /*@rg@*/
#define DMA0_CMICIC476_BEHREQACK	(*(volatile uint_io8_t*)0xB7013B99)  /*@bfbba@*/
#define DMA0_CMICIC476_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013B9B)  /*@bfbba@*/

#define DMA0_CMICIC477	(DMA0.unCMICIC477.u32Register)  /*@rg@*/
#define DMA0_CMICIC477_BEHREQACK	(*(volatile uint_io8_t*)0xB7013BB9)  /*@bfbba@*/
#define DMA0_CMICIC477_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013BBB)  /*@bfbba@*/

#define DMA0_CMICIC478	(DMA0.unCMICIC478.u32Register)  /*@rg@*/
#define DMA0_CMICIC478_BEHREQACK	(*(volatile uint_io8_t*)0xB7013BD9)  /*@bfbba@*/
#define DMA0_CMICIC478_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013BDB)  /*@bfbba@*/

#define DMA0_CMICIC479	(DMA0.unCMICIC479.u32Register)  /*@rg@*/
#define DMA0_CMICIC479_BEHREQACK	(*(volatile uint_io8_t*)0xB7013BF9)  /*@bfbba@*/
#define DMA0_CMICIC479_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013BFB)  /*@bfbba@*/

#define DMA0_CMICIC480	(DMA0.unCMICIC480.u32Register)  /*@rg@*/
#define DMA0_CMICIC480_BEHREQACK	(*(volatile uint_io8_t*)0xB7013C19)  /*@bfbba@*/
#define DMA0_CMICIC480_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013C1B)  /*@bfbba@*/

#define DMA0_CMICIC481	(DMA0.unCMICIC481.u32Register)  /*@rg@*/
#define DMA0_CMICIC481_BEHREQACK	(*(volatile uint_io8_t*)0xB7013C39)  /*@bfbba@*/
#define DMA0_CMICIC481_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013C3B)  /*@bfbba@*/

#define DMA0_CMICIC482	(DMA0.unCMICIC482.u32Register)  /*@rg@*/
#define DMA0_CMICIC482_BEHREQACK	(*(volatile uint_io8_t*)0xB7013C59)  /*@bfbba@*/
#define DMA0_CMICIC482_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013C5B)  /*@bfbba@*/

#define DMA0_CMICIC483	(DMA0.unCMICIC483.u32Register)  /*@rg@*/
#define DMA0_CMICIC483_BEHREQACK	(*(volatile uint_io8_t*)0xB7013C79)  /*@bfbba@*/
#define DMA0_CMICIC483_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013C7B)  /*@bfbba@*/

#define DMA0_CMICIC484	(DMA0.unCMICIC484.u32Register)  /*@rg@*/
#define DMA0_CMICIC484_BEHREQACK	(*(volatile uint_io8_t*)0xB7013C99)  /*@bfbba@*/
#define DMA0_CMICIC484_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013C9B)  /*@bfbba@*/

#define DMA0_CMICIC485	(DMA0.unCMICIC485.u32Register)  /*@rg@*/
#define DMA0_CMICIC485_BEHREQACK	(*(volatile uint_io8_t*)0xB7013CB9)  /*@bfbba@*/
#define DMA0_CMICIC485_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013CBB)  /*@bfbba@*/

#define DMA0_CMICIC486	(DMA0.unCMICIC486.u32Register)  /*@rg@*/
#define DMA0_CMICIC486_BEHREQACK	(*(volatile uint_io8_t*)0xB7013CD9)  /*@bfbba@*/
#define DMA0_CMICIC486_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013CDB)  /*@bfbba@*/

#define DMA0_CMICIC487	(DMA0.unCMICIC487.u32Register)  /*@rg@*/
#define DMA0_CMICIC487_BEHREQACK	(*(volatile uint_io8_t*)0xB7013CF9)  /*@bfbba@*/
#define DMA0_CMICIC487_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013CFB)  /*@bfbba@*/

#define DMA0_CMICIC488	(DMA0.unCMICIC488.u32Register)  /*@rg@*/
#define DMA0_CMICIC488_BEHREQACK	(*(volatile uint_io8_t*)0xB7013D19)  /*@bfbba@*/
#define DMA0_CMICIC488_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013D1B)  /*@bfbba@*/

#define DMA0_CMICIC489	(DMA0.unCMICIC489.u32Register)  /*@rg@*/
#define DMA0_CMICIC489_BEHREQACK	(*(volatile uint_io8_t*)0xB7013D39)  /*@bfbba@*/
#define DMA0_CMICIC489_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013D3B)  /*@bfbba@*/

#define DMA0_CMICIC490	(DMA0.unCMICIC490.u32Register)  /*@rg@*/
#define DMA0_CMICIC490_BEHREQACK	(*(volatile uint_io8_t*)0xB7013D59)  /*@bfbba@*/
#define DMA0_CMICIC490_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013D5B)  /*@bfbba@*/

#define DMA0_CMICIC491	(DMA0.unCMICIC491.u32Register)  /*@rg@*/
#define DMA0_CMICIC491_BEHREQACK	(*(volatile uint_io8_t*)0xB7013D79)  /*@bfbba@*/
#define DMA0_CMICIC491_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013D7B)  /*@bfbba@*/

#define DMA0_CMICIC492	(DMA0.unCMICIC492.u32Register)  /*@rg@*/
#define DMA0_CMICIC492_BEHREQACK	(*(volatile uint_io8_t*)0xB7013D99)  /*@bfbba@*/
#define DMA0_CMICIC492_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013D9B)  /*@bfbba@*/

#define DMA0_CMICIC493	(DMA0.unCMICIC493.u32Register)  /*@rg@*/
#define DMA0_CMICIC493_BEHREQACK	(*(volatile uint_io8_t*)0xB7013DB9)  /*@bfbba@*/
#define DMA0_CMICIC493_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013DBB)  /*@bfbba@*/

#define DMA0_CMICIC494	(DMA0.unCMICIC494.u32Register)  /*@rg@*/
#define DMA0_CMICIC494_BEHREQACK	(*(volatile uint_io8_t*)0xB7013DD9)  /*@bfbba@*/
#define DMA0_CMICIC494_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013DDB)  /*@bfbba@*/

#define DMA0_CMICIC495	(DMA0.unCMICIC495.u32Register)  /*@rg@*/
#define DMA0_CMICIC495_BEHREQACK	(*(volatile uint_io8_t*)0xB7013DF9)  /*@bfbba@*/
#define DMA0_CMICIC495_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013DFB)  /*@bfbba@*/

#define DMA0_CMICIC496	(DMA0.unCMICIC496.u32Register)  /*@rg@*/
#define DMA0_CMICIC496_BEHREQACK	(*(volatile uint_io8_t*)0xB7013E19)  /*@bfbba@*/
#define DMA0_CMICIC496_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013E1B)  /*@bfbba@*/

#define DMA0_CMICIC497	(DMA0.unCMICIC497.u32Register)  /*@rg@*/
#define DMA0_CMICIC497_BEHREQACK	(*(volatile uint_io8_t*)0xB7013E39)  /*@bfbba@*/
#define DMA0_CMICIC497_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013E3B)  /*@bfbba@*/

#define DMA0_CMICIC498	(DMA0.unCMICIC498.u32Register)  /*@rg@*/
#define DMA0_CMICIC498_BEHREQACK	(*(volatile uint_io8_t*)0xB7013E59)  /*@bfbba@*/
#define DMA0_CMICIC498_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013E5B)  /*@bfbba@*/

#define DMA0_CMICIC499	(DMA0.unCMICIC499.u32Register)  /*@rg@*/
#define DMA0_CMICIC499_BEHREQACK	(*(volatile uint_io8_t*)0xB7013E79)  /*@bfbba@*/
#define DMA0_CMICIC499_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013E7B)  /*@bfbba@*/

#define DMA0_CMICIC500	(DMA0.unCMICIC500.u32Register)  /*@rg@*/
#define DMA0_CMICIC500_BEHREQACK	(*(volatile uint_io8_t*)0xB7013E99)  /*@bfbba@*/
#define DMA0_CMICIC500_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013E9B)  /*@bfbba@*/

#define DMA0_CMICIC501	(DMA0.unCMICIC501.u32Register)  /*@rg@*/
#define DMA0_CMICIC501_BEHREQACK	(*(volatile uint_io8_t*)0xB7013EB9)  /*@bfbba@*/
#define DMA0_CMICIC501_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013EBB)  /*@bfbba@*/

#define DMA0_CMICIC502	(DMA0.unCMICIC502.u32Register)  /*@rg@*/
#define DMA0_CMICIC502_BEHREQACK	(*(volatile uint_io8_t*)0xB7013ED9)  /*@bfbba@*/
#define DMA0_CMICIC502_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013EDB)  /*@bfbba@*/

#define DMA0_CMICIC503	(DMA0.unCMICIC503.u32Register)  /*@rg@*/
#define DMA0_CMICIC503_BEHREQACK	(*(volatile uint_io8_t*)0xB7013EF9)  /*@bfbba@*/
#define DMA0_CMICIC503_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013EFB)  /*@bfbba@*/

#define DMA0_CMICIC504	(DMA0.unCMICIC504.u32Register)  /*@rg@*/
#define DMA0_CMICIC504_BEHREQACK	(*(volatile uint_io8_t*)0xB7013F19)  /*@bfbba@*/
#define DMA0_CMICIC504_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013F1B)  /*@bfbba@*/

#define DMA0_CMICIC505	(DMA0.unCMICIC505.u32Register)  /*@rg@*/
#define DMA0_CMICIC505_BEHREQACK	(*(volatile uint_io8_t*)0xB7013F39)  /*@bfbba@*/
#define DMA0_CMICIC505_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013F3B)  /*@bfbba@*/

#define DMA0_CMICIC506	(DMA0.unCMICIC506.u32Register)  /*@rg@*/
#define DMA0_CMICIC506_BEHREQACK	(*(volatile uint_io8_t*)0xB7013F59)  /*@bfbba@*/
#define DMA0_CMICIC506_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013F5B)  /*@bfbba@*/

#define DMA0_CMICIC507	(DMA0.unCMICIC507.u32Register)  /*@rg@*/
#define DMA0_CMICIC507_BEHREQACK	(*(volatile uint_io8_t*)0xB7013F79)  /*@bfbba@*/
#define DMA0_CMICIC507_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013F7B)  /*@bfbba@*/

#define DMA0_CMICIC508	(DMA0.unCMICIC508.u32Register)  /*@rg@*/
#define DMA0_CMICIC508_BEHREQACK	(*(volatile uint_io8_t*)0xB7013F99)  /*@bfbba@*/
#define DMA0_CMICIC508_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013F9B)  /*@bfbba@*/

#define DMA0_CMICIC509	(DMA0.unCMICIC509.u32Register)  /*@rg@*/
#define DMA0_CMICIC509_BEHREQACK	(*(volatile uint_io8_t*)0xB7013FB9)  /*@bfbba@*/
#define DMA0_CMICIC509_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013FBB)  /*@bfbba@*/

#define DMA0_CMICIC510	(DMA0.unCMICIC510.u32Register)  /*@rg@*/
#define DMA0_CMICIC510_BEHREQACK	(*(volatile uint_io8_t*)0xB7013FD9)  /*@bfbba@*/
#define DMA0_CMICIC510_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013FDB)  /*@bfbba@*/

#define DMA0_CMICIC511	(DMA0.unCMICIC511.u32Register)  /*@rg@*/
#define DMA0_CMICIC511_BEHREQACK	(*(volatile uint_io8_t*)0xB7013FF9)  /*@bfbba@*/
#define DMA0_CMICIC511_BEHSTPACK	(*(volatile uint_io8_t*)0xB7013FFB)  /*@bfbba@*/

typedef struct stc_dma0_cmicicn_field{
    uint_io32_t		:25;
    uint_io32_t		u1BEHREQACK:1;
    uint_io32_t		:1;
    uint_io32_t		u1BEHSTPACK:1;
    uint_io32_t		:4;
}stc_dma0_cmicicn_field_t;

typedef union un_dma0_cmicicn{
    uint_io32_t		u32Register;
    stc_dma0_cmicicn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_cmicicn_t;

/* CMCHIC[0-15] */
#define DMA0_CMCHIC0	(DMA0.unCMCHIC0.u32Register)  /*@rg@*/
#define DMA0_CMCHIC0_CI	(DMA0.unCMCHIC0.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC0_RLSLOT	(DMA0.unCMCHIC0.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC0_RLESEL	(DMA0.unCMCHIC0.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC1	(DMA0.unCMCHIC1.u32Register)  /*@rg@*/
#define DMA0_CMCHIC1_CI	(DMA0.unCMCHIC1.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC1_RLSLOT	(DMA0.unCMCHIC1.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC1_RLESEL	(DMA0.unCMCHIC1.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC2	(DMA0.unCMCHIC2.u32Register)  /*@rg@*/
#define DMA0_CMCHIC2_CI	(DMA0.unCMCHIC2.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC2_RLSLOT	(DMA0.unCMCHIC2.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC2_RLESEL	(DMA0.unCMCHIC2.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC3	(DMA0.unCMCHIC3.u32Register)  /*@rg@*/
#define DMA0_CMCHIC3_CI	(DMA0.unCMCHIC3.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC3_RLSLOT	(DMA0.unCMCHIC3.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC3_RLESEL	(DMA0.unCMCHIC3.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC4	(DMA0.unCMCHIC4.u32Register)  /*@rg@*/
#define DMA0_CMCHIC4_CI	(DMA0.unCMCHIC4.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC4_RLSLOT	(DMA0.unCMCHIC4.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC4_RLESEL	(DMA0.unCMCHIC4.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC5	(DMA0.unCMCHIC5.u32Register)  /*@rg@*/
#define DMA0_CMCHIC5_CI	(DMA0.unCMCHIC5.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC5_RLSLOT	(DMA0.unCMCHIC5.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC5_RLESEL	(DMA0.unCMCHIC5.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC6	(DMA0.unCMCHIC6.u32Register)  /*@rg@*/
#define DMA0_CMCHIC6_CI	(DMA0.unCMCHIC6.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC6_RLSLOT	(DMA0.unCMCHIC6.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC6_RLESEL	(DMA0.unCMCHIC6.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC7	(DMA0.unCMCHIC7.u32Register)  /*@rg@*/
#define DMA0_CMCHIC7_CI	(DMA0.unCMCHIC7.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC7_RLSLOT	(DMA0.unCMCHIC7.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC7_RLESEL	(DMA0.unCMCHIC7.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC8	(DMA0.unCMCHIC8.u32Register)  /*@rg@*/
#define DMA0_CMCHIC8_CI	(DMA0.unCMCHIC8.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC8_RLSLOT	(DMA0.unCMCHIC8.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC8_RLESEL	(DMA0.unCMCHIC8.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC9	(DMA0.unCMCHIC9.u32Register)  /*@rg@*/
#define DMA0_CMCHIC9_CI	(DMA0.unCMCHIC9.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC9_RLSLOT	(DMA0.unCMCHIC9.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC9_RLESEL	(DMA0.unCMCHIC9.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC10	(DMA0.unCMCHIC10.u32Register)  /*@rg@*/
#define DMA0_CMCHIC10_CI	(DMA0.unCMCHIC10.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC10_RLSLOT	(DMA0.unCMCHIC10.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC10_RLESEL	(DMA0.unCMCHIC10.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC11	(DMA0.unCMCHIC11.u32Register)  /*@rg@*/
#define DMA0_CMCHIC11_CI	(DMA0.unCMCHIC11.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC11_RLSLOT	(DMA0.unCMCHIC11.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC11_RLESEL	(DMA0.unCMCHIC11.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC12	(DMA0.unCMCHIC12.u32Register)  /*@rg@*/
#define DMA0_CMCHIC12_CI	(DMA0.unCMCHIC12.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC12_RLSLOT	(DMA0.unCMCHIC12.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC12_RLESEL	(DMA0.unCMCHIC12.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC13	(DMA0.unCMCHIC13.u32Register)  /*@rg@*/
#define DMA0_CMCHIC13_CI	(DMA0.unCMCHIC13.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC13_RLSLOT	(DMA0.unCMCHIC13.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC13_RLESEL	(DMA0.unCMCHIC13.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC14	(DMA0.unCMCHIC14.u32Register)  /*@rg@*/
#define DMA0_CMCHIC14_CI	(DMA0.unCMCHIC14.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC14_RLSLOT	(DMA0.unCMCHIC14.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC14_RLESEL	(DMA0.unCMCHIC14.stcField.u6RLESEL)  /*@bf@*/

#define DMA0_CMCHIC15	(DMA0.unCMCHIC15.u32Register)  /*@rg@*/
#define DMA0_CMCHIC15_CI	(DMA0.unCMCHIC15.stcField.u9CI)  /*@bf@*/
#define DMA0_CMCHIC15_RLSLOT	(DMA0.unCMCHIC15.stcField.u3RLSLOT)  /*@bf@*/
#define DMA0_CMCHIC15_RLESEL	(DMA0.unCMCHIC15.stcField.u6RLESEL)  /*@bf@*/

typedef struct stc_dma0_cmchicn_field{
    uint_io32_t		u9CI:9;
    uint_io32_t		:7;
    uint_io32_t		u3RLSLOT:3;
    uint_io32_t		:5;
    uint_io32_t		u6RLESEL:6;
    uint_io32_t		:2;
}stc_dma0_cmchicn_field_t;

typedef union un_dma0_cmchicn{
    uint_io32_t		u32Register;
    stc_dma0_cmchicn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dma0_cmchicn_t;


typedef struct stc_dma0{
    un_dma0_an_t	unA0;	/* 0x00000000 */
    un_dma0_bn_t	unB0;	/* 0x00000004 */
    un_dma0_san_t	unSA0;	/* 0x00000008 */
    un_dma0_dan_t	unDA0;	/* 0x0000000C */
    un_dma0_cn_t	unC0;	/* 0x00000010 */
    uint_io8_t	au8Reserved0[1];	/* 0x00000014 */
    un_dma0_dn_1_t	unD0_1;	/* 0x00000015 */
    uint_io8_t	au8Reserved16[1];	/* 0x00000016 */
    un_dma0_dn_3_t	unD0_3;	/* 0x00000017 */
    un_dma0_sashdwn_t	unSASHDW0;	/* 0x00000018 */
    un_dma0_dashdwn_t	unDASHDW0;	/* 0x0000001C */
    un_dma0_en_t	unE0;	/* 0x00000020 */
    uint_io8_t	au8Reserved32[28];	/* 0x00000024 */
    un_dma0_an_t	unA1;	/* 0x00000040 */
    un_dma0_bn_t	unB1;	/* 0x00000044 */
    un_dma0_san_t	unSA1;	/* 0x00000048 */
    un_dma0_dan_t	unDA1;	/* 0x0000004C */
    un_dma0_cn_t	unC1;	/* 0x00000050 */
    uint_io8_t	au8Reserved1[1];	/* 0x00000054 */
    un_dma0_dn_1_t	unD1_1;	/* 0x00000055 */
    uint_io8_t	au8Reserved17[1];	/* 0x00000056 */
    un_dma0_dn_3_t	unD1_3;	/* 0x00000057 */
    un_dma0_sashdwn_t	unSASHDW1;	/* 0x00000058 */
    un_dma0_dashdwn_t	unDASHDW1;	/* 0x0000005C */
    un_dma0_en_t	unE1;	/* 0x00000060 */
    uint_io8_t	au8Reserved33[28];	/* 0x00000064 */
    un_dma0_an_t	unA2;	/* 0x00000080 */
    un_dma0_bn_t	unB2;	/* 0x00000084 */
    un_dma0_san_t	unSA2;	/* 0x00000088 */
    un_dma0_dan_t	unDA2;	/* 0x0000008C */
    un_dma0_cn_t	unC2;	/* 0x00000090 */
    uint_io8_t	au8Reserved2[1];	/* 0x00000094 */
    un_dma0_dn_1_t	unD2_1;	/* 0x00000095 */
    uint_io8_t	au8Reserved18[1];	/* 0x00000096 */
    un_dma0_dn_3_t	unD2_3;	/* 0x00000097 */
    un_dma0_sashdwn_t	unSASHDW2;	/* 0x00000098 */
    un_dma0_dashdwn_t	unDASHDW2;	/* 0x0000009C */
    un_dma0_en_t	unE2;	/* 0x000000A0 */
    uint_io8_t	au8Reserved34[28];	/* 0x000000A4 */
    un_dma0_an_t	unA3;	/* 0x000000C0 */
    un_dma0_bn_t	unB3;	/* 0x000000C4 */
    un_dma0_san_t	unSA3;	/* 0x000000C8 */
    un_dma0_dan_t	unDA3;	/* 0x000000CC */
    un_dma0_cn_t	unC3;	/* 0x000000D0 */
    uint_io8_t	au8Reserved3[1];	/* 0x000000D4 */
    un_dma0_dn_1_t	unD3_1;	/* 0x000000D5 */
    uint_io8_t	au8Reserved19[1];	/* 0x000000D6 */
    un_dma0_dn_3_t	unD3_3;	/* 0x000000D7 */
    un_dma0_sashdwn_t	unSASHDW3;	/* 0x000000D8 */
    un_dma0_dashdwn_t	unDASHDW3;	/* 0x000000DC */
    un_dma0_en_t	unE3;	/* 0x000000E0 */
    uint_io8_t	au8Reserved35[28];	/* 0x000000E4 */
    un_dma0_an_t	unA4;	/* 0x00000100 */
    un_dma0_bn_t	unB4;	/* 0x00000104 */
    un_dma0_san_t	unSA4;	/* 0x00000108 */
    un_dma0_dan_t	unDA4;	/* 0x0000010C */
    un_dma0_cn_t	unC4;	/* 0x00000110 */
    uint_io8_t	au8Reserved4[1];	/* 0x00000114 */
    un_dma0_dn_1_t	unD4_1;	/* 0x00000115 */
    uint_io8_t	au8Reserved20[1];	/* 0x00000116 */
    un_dma0_dn_3_t	unD4_3;	/* 0x00000117 */
    un_dma0_sashdwn_t	unSASHDW4;	/* 0x00000118 */
    un_dma0_dashdwn_t	unDASHDW4;	/* 0x0000011C */
    un_dma0_en_t	unE4;	/* 0x00000120 */
    uint_io8_t	au8Reserved36[28];	/* 0x00000124 */
    un_dma0_an_t	unA5;	/* 0x00000140 */
    un_dma0_bn_t	unB5;	/* 0x00000144 */
    un_dma0_san_t	unSA5;	/* 0x00000148 */
    un_dma0_dan_t	unDA5;	/* 0x0000014C */
    un_dma0_cn_t	unC5;	/* 0x00000150 */
    uint_io8_t	au8Reserved5[1];	/* 0x00000154 */
    un_dma0_dn_1_t	unD5_1;	/* 0x00000155 */
    uint_io8_t	au8Reserved21[1];	/* 0x00000156 */
    un_dma0_dn_3_t	unD5_3;	/* 0x00000157 */
    un_dma0_sashdwn_t	unSASHDW5;	/* 0x00000158 */
    un_dma0_dashdwn_t	unDASHDW5;	/* 0x0000015C */
    un_dma0_en_t	unE5;	/* 0x00000160 */
    uint_io8_t	au8Reserved37[28];	/* 0x00000164 */
    un_dma0_an_t	unA6;	/* 0x00000180 */
    un_dma0_bn_t	unB6;	/* 0x00000184 */
    un_dma0_san_t	unSA6;	/* 0x00000188 */
    un_dma0_dan_t	unDA6;	/* 0x0000018C */
    un_dma0_cn_t	unC6;	/* 0x00000190 */
    uint_io8_t	au8Reserved6[1];	/* 0x00000194 */
    un_dma0_dn_1_t	unD6_1;	/* 0x00000195 */
    uint_io8_t	au8Reserved22[1];	/* 0x00000196 */
    un_dma0_dn_3_t	unD6_3;	/* 0x00000197 */
    un_dma0_sashdwn_t	unSASHDW6;	/* 0x00000198 */
    un_dma0_dashdwn_t	unDASHDW6;	/* 0x0000019C */
    un_dma0_en_t	unE6;	/* 0x000001A0 */
    uint_io8_t	au8Reserved38[28];	/* 0x000001A4 */
    un_dma0_an_t	unA7;	/* 0x000001C0 */
    un_dma0_bn_t	unB7;	/* 0x000001C4 */
    un_dma0_san_t	unSA7;	/* 0x000001C8 */
    un_dma0_dan_t	unDA7;	/* 0x000001CC */
    un_dma0_cn_t	unC7;	/* 0x000001D0 */
    uint_io8_t	au8Reserved7[1];	/* 0x000001D4 */
    un_dma0_dn_1_t	unD7_1;	/* 0x000001D5 */
    uint_io8_t	au8Reserved23[1];	/* 0x000001D6 */
    un_dma0_dn_3_t	unD7_3;	/* 0x000001D7 */
    un_dma0_sashdwn_t	unSASHDW7;	/* 0x000001D8 */
    un_dma0_dashdwn_t	unDASHDW7;	/* 0x000001DC */
    un_dma0_en_t	unE7;	/* 0x000001E0 */
    uint_io8_t	au8Reserved39[28];	/* 0x000001E4 */
    un_dma0_an_t	unA8;	/* 0x00000200 */
    un_dma0_bn_t	unB8;	/* 0x00000204 */
    un_dma0_san_t	unSA8;	/* 0x00000208 */
    un_dma0_dan_t	unDA8;	/* 0x0000020C */
    un_dma0_cn_t	unC8;	/* 0x00000210 */
    uint_io8_t	au8Reserved8[1];	/* 0x00000214 */
    un_dma0_dn_1_t	unD8_1;	/* 0x00000215 */
    uint_io8_t	au8Reserved24[1];	/* 0x00000216 */
    un_dma0_dn_3_t	unD8_3;	/* 0x00000217 */
    un_dma0_sashdwn_t	unSASHDW8;	/* 0x00000218 */
    un_dma0_dashdwn_t	unDASHDW8;	/* 0x0000021C */
    un_dma0_en_t	unE8;	/* 0x00000220 */
    uint_io8_t	au8Reserved40[28];	/* 0x00000224 */
    un_dma0_an_t	unA9;	/* 0x00000240 */
    un_dma0_bn_t	unB9;	/* 0x00000244 */
    un_dma0_san_t	unSA9;	/* 0x00000248 */
    un_dma0_dan_t	unDA9;	/* 0x0000024C */
    un_dma0_cn_t	unC9;	/* 0x00000250 */
    uint_io8_t	au8Reserved9[1];	/* 0x00000254 */
    un_dma0_dn_1_t	unD9_1;	/* 0x00000255 */
    uint_io8_t	au8Reserved25[1];	/* 0x00000256 */
    un_dma0_dn_3_t	unD9_3;	/* 0x00000257 */
    un_dma0_sashdwn_t	unSASHDW9;	/* 0x00000258 */
    un_dma0_dashdwn_t	unDASHDW9;	/* 0x0000025C */
    un_dma0_en_t	unE9;	/* 0x00000260 */
    uint_io8_t	au8Reserved41[28];	/* 0x00000264 */
    un_dma0_an_t	unA10;	/* 0x00000280 */
    un_dma0_bn_t	unB10;	/* 0x00000284 */
    un_dma0_san_t	unSA10;	/* 0x00000288 */
    un_dma0_dan_t	unDA10;	/* 0x0000028C */
    un_dma0_cn_t	unC10;	/* 0x00000290 */
    uint_io8_t	au8Reserved10[1];	/* 0x00000294 */
    un_dma0_dn_1_t	unD10_1;	/* 0x00000295 */
    uint_io8_t	au8Reserved26[1];	/* 0x00000296 */
    un_dma0_dn_3_t	unD10_3;	/* 0x00000297 */
    un_dma0_sashdwn_t	unSASHDW10;	/* 0x00000298 */
    un_dma0_dashdwn_t	unDASHDW10;	/* 0x0000029C */
    un_dma0_en_t	unE10;	/* 0x000002A0 */
    uint_io8_t	au8Reserved42[28];	/* 0x000002A4 */
    un_dma0_an_t	unA11;	/* 0x000002C0 */
    un_dma0_bn_t	unB11;	/* 0x000002C4 */
    un_dma0_san_t	unSA11;	/* 0x000002C8 */
    un_dma0_dan_t	unDA11;	/* 0x000002CC */
    un_dma0_cn_t	unC11;	/* 0x000002D0 */
    uint_io8_t	au8Reserved11[1];	/* 0x000002D4 */
    un_dma0_dn_1_t	unD11_1;	/* 0x000002D5 */
    uint_io8_t	au8Reserved27[1];	/* 0x000002D6 */
    un_dma0_dn_3_t	unD11_3;	/* 0x000002D7 */
    un_dma0_sashdwn_t	unSASHDW11;	/* 0x000002D8 */
    un_dma0_dashdwn_t	unDASHDW11;	/* 0x000002DC */
    un_dma0_en_t	unE11;	/* 0x000002E0 */
    uint_io8_t	au8Reserved43[28];	/* 0x000002E4 */
    un_dma0_an_t	unA12;	/* 0x00000300 */
    un_dma0_bn_t	unB12;	/* 0x00000304 */
    un_dma0_san_t	unSA12;	/* 0x00000308 */
    un_dma0_dan_t	unDA12;	/* 0x0000030C */
    un_dma0_cn_t	unC12;	/* 0x00000310 */
    uint_io8_t	au8Reserved12[1];	/* 0x00000314 */
    un_dma0_dn_1_t	unD12_1;	/* 0x00000315 */
    uint_io8_t	au8Reserved28[1];	/* 0x00000316 */
    un_dma0_dn_3_t	unD12_3;	/* 0x00000317 */
    un_dma0_sashdwn_t	unSASHDW12;	/* 0x00000318 */
    un_dma0_dashdwn_t	unDASHDW12;	/* 0x0000031C */
    un_dma0_en_t	unE12;	/* 0x00000320 */
    uint_io8_t	au8Reserved44[28];	/* 0x00000324 */
    un_dma0_an_t	unA13;	/* 0x00000340 */
    un_dma0_bn_t	unB13;	/* 0x00000344 */
    un_dma0_san_t	unSA13;	/* 0x00000348 */
    un_dma0_dan_t	unDA13;	/* 0x0000034C */
    un_dma0_cn_t	unC13;	/* 0x00000350 */
    uint_io8_t	au8Reserved13[1];	/* 0x00000354 */
    un_dma0_dn_1_t	unD13_1;	/* 0x00000355 */
    uint_io8_t	au8Reserved29[1];	/* 0x00000356 */
    un_dma0_dn_3_t	unD13_3;	/* 0x00000357 */
    un_dma0_sashdwn_t	unSASHDW13;	/* 0x00000358 */
    un_dma0_dashdwn_t	unDASHDW13;	/* 0x0000035C */
    un_dma0_en_t	unE13;	/* 0x00000360 */
    uint_io8_t	au8Reserved45[28];	/* 0x00000364 */
    un_dma0_an_t	unA14;	/* 0x00000380 */
    un_dma0_bn_t	unB14;	/* 0x00000384 */
    un_dma0_san_t	unSA14;	/* 0x00000388 */
    un_dma0_dan_t	unDA14;	/* 0x0000038C */
    un_dma0_cn_t	unC14;	/* 0x00000390 */
    uint_io8_t	au8Reserved14[1];	/* 0x00000394 */
    un_dma0_dn_1_t	unD14_1;	/* 0x00000395 */
    uint_io8_t	au8Reserved30[1];	/* 0x00000396 */
    un_dma0_dn_3_t	unD14_3;	/* 0x00000397 */
    un_dma0_sashdwn_t	unSASHDW14;	/* 0x00000398 */
    un_dma0_dashdwn_t	unDASHDW14;	/* 0x0000039C */
    un_dma0_en_t	unE14;	/* 0x000003A0 */
    uint_io8_t	au8Reserved46[28];	/* 0x000003A4 */
    un_dma0_an_t	unA15;	/* 0x000003C0 */
    un_dma0_bn_t	unB15;	/* 0x000003C4 */
    un_dma0_san_t	unSA15;	/* 0x000003C8 */
    un_dma0_dan_t	unDA15;	/* 0x000003CC */
    un_dma0_cn_t	unC15;	/* 0x000003D0 */
    uint_io8_t	au8Reserved15[1];	/* 0x000003D4 */
    un_dma0_dn_1_t	unD15_1;	/* 0x000003D5 */
    uint_io8_t	au8Reserved31[1];	/* 0x000003D6 */
    un_dma0_dn_3_t	unD15_3;	/* 0x000003D7 */
    un_dma0_sashdwn_t	unSASHDW15;	/* 0x000003D8 */
    un_dma0_dashdwn_t	unDASHDW15;	/* 0x000003DC */
    un_dma0_en_t	unE15;	/* 0x000003E0 */
    uint_io8_t	au8Reserved47[28];	/* 0x000003E4 */
    uint_io8_t	au8Reserved48[3072];	/* 0x00000400 */
    un_dma0_r_t	unR;	/* 0x00001000 */
    un_dma0_dirq1_t	unDIRQ1;	/* 0x00001004 */
    un_dma0_dirq2_t	unDIRQ2;	/* 0x00001008 */
    un_dma0_edirq1_t	unEDIRQ1;	/* 0x0000100C */
    un_dma0_edirq2_t	unEDIRQ2;	/* 0x00001010 */
    un_dma0_id_t	unID;	/* 0x00001014 */
    uint_io8_t	au8Reserved49[4104];	/* 0x00001018 */
    un_dma0_cmicicn_t	unCMICIC8;	/* 0x00002020 */
    un_dma0_cmicicn_t	unCMICIC9;	/* 0x00002024 */
    un_dma0_cmicicn_t	unCMICIC10;	/* 0x00002028 */
    un_dma0_cmicicn_t	unCMICIC11;	/* 0x0000202C */
    un_dma0_cmicicn_t	unCMICIC12;	/* 0x00002030 */
    un_dma0_cmicicn_t	unCMICIC13;	/* 0x00002034 */
    un_dma0_cmicicn_t	unCMICIC14;	/* 0x00002038 */
    un_dma0_cmicicn_t	unCMICIC15;	/* 0x0000203C */
    un_dma0_cmicicn_t	unCMICIC16;	/* 0x00002040 */
    un_dma0_cmicicn_t	unCMICIC17;	/* 0x00002044 */
    un_dma0_cmicicn_t	unCMICIC18;	/* 0x00002048 */
    un_dma0_cmicicn_t	unCMICIC19;	/* 0x0000204C */
    un_dma0_cmicicn_t	unCMICIC20;	/* 0x00002050 */
    un_dma0_cmicicn_t	unCMICIC21;	/* 0x00002054 */
    un_dma0_cmicicn_t	unCMICIC22;	/* 0x00002058 */
    un_dma0_cmicicn_t	unCMICIC23;	/* 0x0000205C */
    un_dma0_cmicicn_t	unCMICIC24;	/* 0x00002060 */
    un_dma0_cmicicn_t	unCMICIC25;	/* 0x00002064 */
    un_dma0_cmicicn_t	unCMICIC26;	/* 0x00002068 */
    un_dma0_cmicicn_t	unCMICIC27;	/* 0x0000206C */
    un_dma0_cmicicn_t	unCMICIC28;	/* 0x00002070 */
    un_dma0_cmicicn_t	unCMICIC29;	/* 0x00002074 */
    un_dma0_cmicicn_t	unCMICIC30;	/* 0x00002078 */
    un_dma0_cmicicn_t	unCMICIC31;	/* 0x0000207C */
    un_dma0_cmicicn_t	unCMICIC32;	/* 0x00002080 */
    un_dma0_cmicicn_t	unCMICIC33;	/* 0x00002084 */
    un_dma0_cmicicn_t	unCMICIC34;	/* 0x00002088 */
    un_dma0_cmicicn_t	unCMICIC35;	/* 0x0000208C */
    un_dma0_cmicicn_t	unCMICIC36;	/* 0x00002090 */
    un_dma0_cmicicn_t	unCMICIC37;	/* 0x00002094 */
    un_dma0_cmicicn_t	unCMICIC38;	/* 0x00002098 */
    un_dma0_cmicicn_t	unCMICIC39;	/* 0x0000209C */
    un_dma0_cmicicn_t	unCMICIC40;	/* 0x000020A0 */
    un_dma0_cmicicn_t	unCMICIC41;	/* 0x000020A4 */
    un_dma0_cmicicn_t	unCMICIC42;	/* 0x000020A8 */
    un_dma0_cmicicn_t	unCMICIC43;	/* 0x000020AC */
    un_dma0_cmicicn_t	unCMICIC44;	/* 0x000020B0 */
    un_dma0_cmicicn_t	unCMICIC45;	/* 0x000020B4 */
    un_dma0_cmicicn_t	unCMICIC46;	/* 0x000020B8 */
    un_dma0_cmicicn_t	unCMICIC47;	/* 0x000020BC */
    un_dma0_cmicicn_t	unCMICIC48;	/* 0x000020C0 */
    un_dma0_cmicicn_t	unCMICIC49;	/* 0x000020C4 */
    un_dma0_cmicicn_t	unCMICIC50;	/* 0x000020C8 */
    un_dma0_cmicicn_t	unCMICIC51;	/* 0x000020CC */
    un_dma0_cmicicn_t	unCMICIC52;	/* 0x000020D0 */
    un_dma0_cmicicn_t	unCMICIC53;	/* 0x000020D4 */
    un_dma0_cmicicn_t	unCMICIC54;	/* 0x000020D8 */
    un_dma0_cmicicn_t	unCMICIC55;	/* 0x000020DC */
    un_dma0_cmicicn_t	unCMICIC56;	/* 0x000020E0 */
    un_dma0_cmicicn_t	unCMICIC57;	/* 0x000020E4 */
    un_dma0_cmicicn_t	unCMICIC58;	/* 0x000020E8 */
    un_dma0_cmicicn_t	unCMICIC59;	/* 0x000020EC */
    un_dma0_cmicicn_t	unCMICIC60;	/* 0x000020F0 */
    un_dma0_cmicicn_t	unCMICIC61;	/* 0x000020F4 */
    un_dma0_cmicicn_t	unCMICIC62;	/* 0x000020F8 */
    un_dma0_cmicicn_t	unCMICIC63;	/* 0x000020FC */
    un_dma0_cmicicn_t	unCMICIC64;	/* 0x00002100 */
    un_dma0_cmicicn_t	unCMICIC65;	/* 0x00002104 */
    un_dma0_cmicicn_t	unCMICIC66;	/* 0x00002108 */
    un_dma0_cmicicn_t	unCMICIC67;	/* 0x0000210C */
    un_dma0_cmicicn_t	unCMICIC68;	/* 0x00002110 */
    un_dma0_cmicicn_t	unCMICIC69;	/* 0x00002114 */
    un_dma0_cmicicn_t	unCMICIC70;	/* 0x00002118 */
    un_dma0_cmicicn_t	unCMICIC71;	/* 0x0000211C */
    un_dma0_cmicicn_t	unCMICIC72;	/* 0x00002120 */
    un_dma0_cmicicn_t	unCMICIC73;	/* 0x00002124 */
    un_dma0_cmicicn_t	unCMICIC74;	/* 0x00002128 */
    un_dma0_cmicicn_t	unCMICIC75;	/* 0x0000212C */
    un_dma0_cmicicn_t	unCMICIC76;	/* 0x00002130 */
    un_dma0_cmicicn_t	unCMICIC77;	/* 0x00002134 */
    un_dma0_cmicicn_t	unCMICIC78;	/* 0x00002138 */
    un_dma0_cmicicn_t	unCMICIC79;	/* 0x0000213C */
    un_dma0_cmicicn_t	unCMICIC80;	/* 0x00002140 */
    un_dma0_cmicicn_t	unCMICIC81;	/* 0x00002144 */
    un_dma0_cmicicn_t	unCMICIC82;	/* 0x00002148 */
    un_dma0_cmicicn_t	unCMICIC83;	/* 0x0000214C */
    un_dma0_cmicicn_t	unCMICIC84;	/* 0x00002150 */
    un_dma0_cmicicn_t	unCMICIC85;	/* 0x00002154 */
    un_dma0_cmicicn_t	unCMICIC86;	/* 0x00002158 */
    un_dma0_cmicicn_t	unCMICIC87;	/* 0x0000215C */
    un_dma0_cmicicn_t	unCMICIC88;	/* 0x00002160 */
    un_dma0_cmicicn_t	unCMICIC89;	/* 0x00002164 */
    un_dma0_cmicicn_t	unCMICIC90;	/* 0x00002168 */
    un_dma0_cmicicn_t	unCMICIC91;	/* 0x0000216C */
    un_dma0_cmicicn_t	unCMICIC92;	/* 0x00002170 */
    un_dma0_cmicicn_t	unCMICIC93;	/* 0x00002174 */
    un_dma0_cmicicn_t	unCMICIC94;	/* 0x00002178 */
    un_dma0_cmicicn_t	unCMICIC95;	/* 0x0000217C */
    un_dma0_cmicicn_t	unCMICIC96;	/* 0x00002180 */
    un_dma0_cmicicn_t	unCMICIC97;	/* 0x00002184 */
    un_dma0_cmicicn_t	unCMICIC98;	/* 0x00002188 */
    un_dma0_cmicicn_t	unCMICIC99;	/* 0x0000218C */
    un_dma0_cmicicn_t	unCMICIC100;	/* 0x00002190 */
    un_dma0_cmicicn_t	unCMICIC101;	/* 0x00002194 */
    un_dma0_cmicicn_t	unCMICIC102;	/* 0x00002198 */
    un_dma0_cmicicn_t	unCMICIC103;	/* 0x0000219C */
    un_dma0_cmicicn_t	unCMICIC104;	/* 0x000021A0 */
    un_dma0_cmicicn_t	unCMICIC105;	/* 0x000021A4 */
    un_dma0_cmicicn_t	unCMICIC106;	/* 0x000021A8 */
    un_dma0_cmicicn_t	unCMICIC107;	/* 0x000021AC */
    un_dma0_cmicicn_t	unCMICIC108;	/* 0x000021B0 */
    un_dma0_cmicicn_t	unCMICIC109;	/* 0x000021B4 */
    un_dma0_cmicicn_t	unCMICIC110;	/* 0x000021B8 */
    un_dma0_cmicicn_t	unCMICIC111;	/* 0x000021BC */
    un_dma0_cmicicn_t	unCMICIC112;	/* 0x000021C0 */
    un_dma0_cmicicn_t	unCMICIC113;	/* 0x000021C4 */
    un_dma0_cmicicn_t	unCMICIC114;	/* 0x000021C8 */
    un_dma0_cmicicn_t	unCMICIC115;	/* 0x000021CC */
    un_dma0_cmicicn_t	unCMICIC116;	/* 0x000021D0 */
    un_dma0_cmicicn_t	unCMICIC117;	/* 0x000021D4 */
    un_dma0_cmicicn_t	unCMICIC118;	/* 0x000021D8 */
    un_dma0_cmicicn_t	unCMICIC119;	/* 0x000021DC */
    un_dma0_cmicicn_t	unCMICIC120;	/* 0x000021E0 */
    un_dma0_cmicicn_t	unCMICIC121;	/* 0x000021E4 */
    un_dma0_cmicicn_t	unCMICIC122;	/* 0x000021E8 */
    un_dma0_cmicicn_t	unCMICIC123;	/* 0x000021EC */
    un_dma0_cmicicn_t	unCMICIC124;	/* 0x000021F0 */
    un_dma0_cmicicn_t	unCMICIC125;	/* 0x000021F4 */
    un_dma0_cmicicn_t	unCMICIC126;	/* 0x000021F8 */
    un_dma0_cmicicn_t	unCMICIC127;	/* 0x000021FC */
    un_dma0_cmicicn_t	unCMICIC128;	/* 0x00002200 */
    un_dma0_cmicicn_t	unCMICIC129;	/* 0x00002204 */
    un_dma0_cmicicn_t	unCMICIC130;	/* 0x00002208 */
    un_dma0_cmicicn_t	unCMICIC131;	/* 0x0000220C */
    un_dma0_cmicicn_t	unCMICIC132;	/* 0x00002210 */
    un_dma0_cmicicn_t	unCMICIC133;	/* 0x00002214 */
    un_dma0_cmicicn_t	unCMICIC134;	/* 0x00002218 */
    un_dma0_cmicicn_t	unCMICIC135;	/* 0x0000221C */
    un_dma0_cmicicn_t	unCMICIC136;	/* 0x00002220 */
    un_dma0_cmicicn_t	unCMICIC137;	/* 0x00002224 */
    un_dma0_cmicicn_t	unCMICIC138;	/* 0x00002228 */
    un_dma0_cmicicn_t	unCMICIC139;	/* 0x0000222C */
    un_dma0_cmicicn_t	unCMICIC140;	/* 0x00002230 */
    un_dma0_cmicicn_t	unCMICIC141;	/* 0x00002234 */
    un_dma0_cmicicn_t	unCMICIC142;	/* 0x00002238 */
    un_dma0_cmicicn_t	unCMICIC143;	/* 0x0000223C */
    un_dma0_cmicicn_t	unCMICIC144;	/* 0x00002240 */
    un_dma0_cmicicn_t	unCMICIC145;	/* 0x00002244 */
    un_dma0_cmicicn_t	unCMICIC146;	/* 0x00002248 */
    un_dma0_cmicicn_t	unCMICIC147;	/* 0x0000224C */
    un_dma0_cmicicn_t	unCMICIC148;	/* 0x00002250 */
    un_dma0_cmicicn_t	unCMICIC149;	/* 0x00002254 */
    un_dma0_cmicicn_t	unCMICIC150;	/* 0x00002258 */
    un_dma0_cmicicn_t	unCMICIC151;	/* 0x0000225C */
    un_dma0_cmicicn_t	unCMICIC152;	/* 0x00002260 */
    un_dma0_cmicicn_t	unCMICIC153;	/* 0x00002264 */
    un_dma0_cmicicn_t	unCMICIC154;	/* 0x00002268 */
    un_dma0_cmicicn_t	unCMICIC155;	/* 0x0000226C */
    un_dma0_cmicicn_t	unCMICIC156;	/* 0x00002270 */
    un_dma0_cmicicn_t	unCMICIC157;	/* 0x00002274 */
    un_dma0_cmicicn_t	unCMICIC158;	/* 0x00002278 */
    un_dma0_cmicicn_t	unCMICIC159;	/* 0x0000227C */
    un_dma0_cmicicn_t	unCMICIC160;	/* 0x00002280 */
    un_dma0_cmicicn_t	unCMICIC161;	/* 0x00002284 */
    un_dma0_cmicicn_t	unCMICIC162;	/* 0x00002288 */
    un_dma0_cmicicn_t	unCMICIC163;	/* 0x0000228C */
    un_dma0_cmicicn_t	unCMICIC164;	/* 0x00002290 */
    un_dma0_cmicicn_t	unCMICIC165;	/* 0x00002294 */
    un_dma0_cmicicn_t	unCMICIC166;	/* 0x00002298 */
    un_dma0_cmicicn_t	unCMICIC167;	/* 0x0000229C */
    un_dma0_cmicicn_t	unCMICIC168;	/* 0x000022A0 */
    un_dma0_cmicicn_t	unCMICIC169;	/* 0x000022A4 */
    un_dma0_cmicicn_t	unCMICIC170;	/* 0x000022A8 */
    un_dma0_cmicicn_t	unCMICIC171;	/* 0x000022AC */
    un_dma0_cmicicn_t	unCMICIC172;	/* 0x000022B0 */
    un_dma0_cmicicn_t	unCMICIC173;	/* 0x000022B4 */
    un_dma0_cmicicn_t	unCMICIC174;	/* 0x000022B8 */
    un_dma0_cmicicn_t	unCMICIC175;	/* 0x000022BC */
    un_dma0_cmicicn_t	unCMICIC176;	/* 0x000022C0 */
    un_dma0_cmicicn_t	unCMICIC177;	/* 0x000022C4 */
    un_dma0_cmicicn_t	unCMICIC178;	/* 0x000022C8 */
    un_dma0_cmicicn_t	unCMICIC179;	/* 0x000022CC */
    un_dma0_cmicicn_t	unCMICIC180;	/* 0x000022D0 */
    un_dma0_cmicicn_t	unCMICIC181;	/* 0x000022D4 */
    un_dma0_cmicicn_t	unCMICIC182;	/* 0x000022D8 */
    un_dma0_cmicicn_t	unCMICIC183;	/* 0x000022DC */
    un_dma0_cmicicn_t	unCMICIC184;	/* 0x000022E0 */
    un_dma0_cmicicn_t	unCMICIC185;	/* 0x000022E4 */
    un_dma0_cmicicn_t	unCMICIC186;	/* 0x000022E8 */
    un_dma0_cmicicn_t	unCMICIC187;	/* 0x000022EC */
    un_dma0_cmicicn_t	unCMICIC188;	/* 0x000022F0 */
    un_dma0_cmicicn_t	unCMICIC189;	/* 0x000022F4 */
    un_dma0_cmicicn_t	unCMICIC190;	/* 0x000022F8 */
    un_dma0_cmicicn_t	unCMICIC191;	/* 0x000022FC */
    un_dma0_cmicicn_t	unCMICIC192;	/* 0x00002300 */
    un_dma0_cmicicn_t	unCMICIC193;	/* 0x00002304 */
    un_dma0_cmicicn_t	unCMICIC194;	/* 0x00002308 */
    un_dma0_cmicicn_t	unCMICIC195;	/* 0x0000230C */
    un_dma0_cmicicn_t	unCMICIC196;	/* 0x00002310 */
    un_dma0_cmicicn_t	unCMICIC197;	/* 0x00002314 */
    un_dma0_cmicicn_t	unCMICIC198;	/* 0x00002318 */
    un_dma0_cmicicn_t	unCMICIC199;	/* 0x0000231C */
    un_dma0_cmicicn_t	unCMICIC200;	/* 0x00002320 */
    un_dma0_cmicicn_t	unCMICIC201;	/* 0x00002324 */
    un_dma0_cmicicn_t	unCMICIC202;	/* 0x00002328 */
    un_dma0_cmicicn_t	unCMICIC203;	/* 0x0000232C */
    un_dma0_cmicicn_t	unCMICIC204;	/* 0x00002330 */
    un_dma0_cmicicn_t	unCMICIC205;	/* 0x00002334 */
    un_dma0_cmicicn_t	unCMICIC206;	/* 0x00002338 */
    un_dma0_cmicicn_t	unCMICIC207;	/* 0x0000233C */
    un_dma0_cmicicn_t	unCMICIC208;	/* 0x00002340 */
    un_dma0_cmicicn_t	unCMICIC209;	/* 0x00002344 */
    un_dma0_cmicicn_t	unCMICIC210;	/* 0x00002348 */
    un_dma0_cmicicn_t	unCMICIC211;	/* 0x0000234C */
    un_dma0_cmicicn_t	unCMICIC212;	/* 0x00002350 */
    un_dma0_cmicicn_t	unCMICIC213;	/* 0x00002354 */
    un_dma0_cmicicn_t	unCMICIC214;	/* 0x00002358 */
    un_dma0_cmicicn_t	unCMICIC215;	/* 0x0000235C */
    un_dma0_cmicicn_t	unCMICIC216;	/* 0x00002360 */
    un_dma0_cmicicn_t	unCMICIC217;	/* 0x00002364 */
    un_dma0_cmicicn_t	unCMICIC218;	/* 0x00002368 */
    un_dma0_cmicicn_t	unCMICIC219;	/* 0x0000236C */
    un_dma0_cmicicn_t	unCMICIC220;	/* 0x00002370 */
    un_dma0_cmicicn_t	unCMICIC221;	/* 0x00002374 */
    un_dma0_cmicicn_t	unCMICIC222;	/* 0x00002378 */
    un_dma0_cmicicn_t	unCMICIC223;	/* 0x0000237C */
    un_dma0_cmicicn_t	unCMICIC224;	/* 0x00002380 */
    un_dma0_cmicicn_t	unCMICIC225;	/* 0x00002384 */
    un_dma0_cmicicn_t	unCMICIC226;	/* 0x00002388 */
    un_dma0_cmicicn_t	unCMICIC227;	/* 0x0000238C */
    un_dma0_cmicicn_t	unCMICIC228;	/* 0x00002390 */
    un_dma0_cmicicn_t	unCMICIC229;	/* 0x00002394 */
    un_dma0_cmicicn_t	unCMICIC230;	/* 0x00002398 */
    un_dma0_cmicicn_t	unCMICIC231;	/* 0x0000239C */
    un_dma0_cmicicn_t	unCMICIC232;	/* 0x000023A0 */
    un_dma0_cmicicn_t	unCMICIC233;	/* 0x000023A4 */
    un_dma0_cmicicn_t	unCMICIC234;	/* 0x000023A8 */
    un_dma0_cmicicn_t	unCMICIC235;	/* 0x000023AC */
    un_dma0_cmicicn_t	unCMICIC236;	/* 0x000023B0 */
    un_dma0_cmicicn_t	unCMICIC237;	/* 0x000023B4 */
    un_dma0_cmicicn_t	unCMICIC238;	/* 0x000023B8 */
    un_dma0_cmicicn_t	unCMICIC239;	/* 0x000023BC */
    un_dma0_cmicicn_t	unCMICIC240;	/* 0x000023C0 */
    un_dma0_cmicicn_t	unCMICIC241;	/* 0x000023C4 */
    un_dma0_cmicicn_t	unCMICIC242;	/* 0x000023C8 */
    un_dma0_cmicicn_t	unCMICIC243;	/* 0x000023CC */
    un_dma0_cmicicn_t	unCMICIC244;	/* 0x000023D0 */
    un_dma0_cmicicn_t	unCMICIC245;	/* 0x000023D4 */
    un_dma0_cmicicn_t	unCMICIC246;	/* 0x000023D8 */
    un_dma0_cmicicn_t	unCMICIC247;	/* 0x000023DC */
    un_dma0_cmicicn_t	unCMICIC248;	/* 0x000023E0 */
    un_dma0_cmicicn_t	unCMICIC249;	/* 0x000023E4 */
    un_dma0_cmicicn_t	unCMICIC250;	/* 0x000023E8 */
    un_dma0_cmicicn_t	unCMICIC251;	/* 0x000023EC */
    un_dma0_cmicicn_t	unCMICIC252;	/* 0x000023F0 */
    un_dma0_cmicicn_t	unCMICIC253;	/* 0x000023F4 */
    un_dma0_cmicicn_t	unCMICIC254;	/* 0x000023F8 */
    un_dma0_cmicicn_t	unCMICIC255;	/* 0x000023FC */
    un_dma0_cmicicn_t	unCMICIC256;	/* 0x00002400 */
    un_dma0_cmicicn_t	unCMICIC257;	/* 0x00002404 */
    un_dma0_cmicicn_t	unCMICIC258;	/* 0x00002408 */
    un_dma0_cmicicn_t	unCMICIC259;	/* 0x0000240C */
    un_dma0_cmicicn_t	unCMICIC260;	/* 0x00002410 */
    un_dma0_cmicicn_t	unCMICIC261;	/* 0x00002414 */
    un_dma0_cmicicn_t	unCMICIC262;	/* 0x00002418 */
    un_dma0_cmicicn_t	unCMICIC263;	/* 0x0000241C */
    un_dma0_cmicicn_t	unCMICIC264;	/* 0x00002420 */
    un_dma0_cmicicn_t	unCMICIC265;	/* 0x00002424 */
    un_dma0_cmicicn_t	unCMICIC266;	/* 0x00002428 */
    un_dma0_cmicicn_t	unCMICIC267;	/* 0x0000242C */
    un_dma0_cmicicn_t	unCMICIC268;	/* 0x00002430 */
    un_dma0_cmicicn_t	unCMICIC269;	/* 0x00002434 */
    un_dma0_cmicicn_t	unCMICIC270;	/* 0x00002438 */
    un_dma0_cmicicn_t	unCMICIC271;	/* 0x0000243C */
    un_dma0_cmicicn_t	unCMICIC272;	/* 0x00002440 */
    un_dma0_cmicicn_t	unCMICIC273;	/* 0x00002444 */
    un_dma0_cmicicn_t	unCMICIC274;	/* 0x00002448 */
    un_dma0_cmicicn_t	unCMICIC275;	/* 0x0000244C */
    un_dma0_cmicicn_t	unCMICIC276;	/* 0x00002450 */
    un_dma0_cmicicn_t	unCMICIC277;	/* 0x00002454 */
    un_dma0_cmicicn_t	unCMICIC278;	/* 0x00002458 */
    un_dma0_cmicicn_t	unCMICIC279;	/* 0x0000245C */
    un_dma0_cmicicn_t	unCMICIC280;	/* 0x00002460 */
    un_dma0_cmicicn_t	unCMICIC281;	/* 0x00002464 */
    un_dma0_cmicicn_t	unCMICIC282;	/* 0x00002468 */
    un_dma0_cmicicn_t	unCMICIC283;	/* 0x0000246C */
    un_dma0_cmicicn_t	unCMICIC284;	/* 0x00002470 */
    un_dma0_cmicicn_t	unCMICIC285;	/* 0x00002474 */
    un_dma0_cmicicn_t	unCMICIC286;	/* 0x00002478 */
    un_dma0_cmicicn_t	unCMICIC287;	/* 0x0000247C */
    un_dma0_cmicicn_t	unCMICIC288;	/* 0x00002480 */
    un_dma0_cmicicn_t	unCMICIC289;	/* 0x00002484 */
    un_dma0_cmicicn_t	unCMICIC290;	/* 0x00002488 */
    un_dma0_cmicicn_t	unCMICIC291;	/* 0x0000248C */
    un_dma0_cmicicn_t	unCMICIC292;	/* 0x00002490 */
    un_dma0_cmicicn_t	unCMICIC293;	/* 0x00002494 */
    un_dma0_cmicicn_t	unCMICIC294;	/* 0x00002498 */
    un_dma0_cmicicn_t	unCMICIC295;	/* 0x0000249C */
    un_dma0_cmicicn_t	unCMICIC296;	/* 0x000024A0 */
    un_dma0_cmicicn_t	unCMICIC297;	/* 0x000024A4 */
    un_dma0_cmicicn_t	unCMICIC298;	/* 0x000024A8 */
    un_dma0_cmicicn_t	unCMICIC299;	/* 0x000024AC */
    un_dma0_cmicicn_t	unCMICIC300;	/* 0x000024B0 */
    un_dma0_cmicicn_t	unCMICIC301;	/* 0x000024B4 */
    un_dma0_cmicicn_t	unCMICIC302;	/* 0x000024B8 */
    un_dma0_cmicicn_t	unCMICIC303;	/* 0x000024BC */
    un_dma0_cmicicn_t	unCMICIC304;	/* 0x000024C0 */
    un_dma0_cmicicn_t	unCMICIC305;	/* 0x000024C4 */
    un_dma0_cmicicn_t	unCMICIC306;	/* 0x000024C8 */
    un_dma0_cmicicn_t	unCMICIC307;	/* 0x000024CC */
    un_dma0_cmicicn_t	unCMICIC308;	/* 0x000024D0 */
    un_dma0_cmicicn_t	unCMICIC309;	/* 0x000024D4 */
    un_dma0_cmicicn_t	unCMICIC310;	/* 0x000024D8 */
    un_dma0_cmicicn_t	unCMICIC311;	/* 0x000024DC */
    un_dma0_cmicicn_t	unCMICIC312;	/* 0x000024E0 */
    un_dma0_cmicicn_t	unCMICIC313;	/* 0x000024E4 */
    un_dma0_cmicicn_t	unCMICIC314;	/* 0x000024E8 */
    un_dma0_cmicicn_t	unCMICIC315;	/* 0x000024EC */
    un_dma0_cmicicn_t	unCMICIC316;	/* 0x000024F0 */
    un_dma0_cmicicn_t	unCMICIC317;	/* 0x000024F4 */
    un_dma0_cmicicn_t	unCMICIC318;	/* 0x000024F8 */
    un_dma0_cmicicn_t	unCMICIC319;	/* 0x000024FC */
    un_dma0_cmicicn_t	unCMICIC320;	/* 0x00002500 */
    un_dma0_cmicicn_t	unCMICIC321;	/* 0x00002504 */
    un_dma0_cmicicn_t	unCMICIC322;	/* 0x00002508 */
    un_dma0_cmicicn_t	unCMICIC323;	/* 0x0000250C */
    un_dma0_cmicicn_t	unCMICIC324;	/* 0x00002510 */
    un_dma0_cmicicn_t	unCMICIC325;	/* 0x00002514 */
    un_dma0_cmicicn_t	unCMICIC326;	/* 0x00002518 */
    un_dma0_cmicicn_t	unCMICIC327;	/* 0x0000251C */
    un_dma0_cmicicn_t	unCMICIC328;	/* 0x00002520 */
    un_dma0_cmicicn_t	unCMICIC329;	/* 0x00002524 */
    un_dma0_cmicicn_t	unCMICIC330;	/* 0x00002528 */
    un_dma0_cmicicn_t	unCMICIC331;	/* 0x0000252C */
    un_dma0_cmicicn_t	unCMICIC332;	/* 0x00002530 */
    un_dma0_cmicicn_t	unCMICIC333;	/* 0x00002534 */
    un_dma0_cmicicn_t	unCMICIC334;	/* 0x00002538 */
    un_dma0_cmicicn_t	unCMICIC335;	/* 0x0000253C */
    un_dma0_cmicicn_t	unCMICIC336;	/* 0x00002540 */
    un_dma0_cmicicn_t	unCMICIC337;	/* 0x00002544 */
    un_dma0_cmicicn_t	unCMICIC338;	/* 0x00002548 */
    un_dma0_cmicicn_t	unCMICIC339;	/* 0x0000254C */
    un_dma0_cmicicn_t	unCMICIC340;	/* 0x00002550 */
    un_dma0_cmicicn_t	unCMICIC341;	/* 0x00002554 */
    un_dma0_cmicicn_t	unCMICIC342;	/* 0x00002558 */
    un_dma0_cmicicn_t	unCMICIC343;	/* 0x0000255C */
    un_dma0_cmicicn_t	unCMICIC344;	/* 0x00002560 */
    un_dma0_cmicicn_t	unCMICIC345;	/* 0x00002564 */
    un_dma0_cmicicn_t	unCMICIC346;	/* 0x00002568 */
    un_dma0_cmicicn_t	unCMICIC347;	/* 0x0000256C */
    un_dma0_cmicicn_t	unCMICIC348;	/* 0x00002570 */
    un_dma0_cmicicn_t	unCMICIC349;	/* 0x00002574 */
    un_dma0_cmicicn_t	unCMICIC350;	/* 0x00002578 */
    un_dma0_cmicicn_t	unCMICIC351;	/* 0x0000257C */
    un_dma0_cmicicn_t	unCMICIC352;	/* 0x00002580 */
    un_dma0_cmicicn_t	unCMICIC353;	/* 0x00002584 */
    un_dma0_cmicicn_t	unCMICIC354;	/* 0x00002588 */
    un_dma0_cmicicn_t	unCMICIC355;	/* 0x0000258C */
    un_dma0_cmicicn_t	unCMICIC356;	/* 0x00002590 */
    un_dma0_cmicicn_t	unCMICIC357;	/* 0x00002594 */
    un_dma0_cmicicn_t	unCMICIC358;	/* 0x00002598 */
    un_dma0_cmicicn_t	unCMICIC359;	/* 0x0000259C */
    un_dma0_cmicicn_t	unCMICIC360;	/* 0x000025A0 */
    un_dma0_cmicicn_t	unCMICIC361;	/* 0x000025A4 */
    un_dma0_cmicicn_t	unCMICIC362;	/* 0x000025A8 */
    un_dma0_cmicicn_t	unCMICIC363;	/* 0x000025AC */
    un_dma0_cmicicn_t	unCMICIC364;	/* 0x000025B0 */
    un_dma0_cmicicn_t	unCMICIC365;	/* 0x000025B4 */
    un_dma0_cmicicn_t	unCMICIC366;	/* 0x000025B8 */
    un_dma0_cmicicn_t	unCMICIC367;	/* 0x000025BC */
    un_dma0_cmicicn_t	unCMICIC368;	/* 0x000025C0 */
    un_dma0_cmicicn_t	unCMICIC369;	/* 0x000025C4 */
    un_dma0_cmicicn_t	unCMICIC370;	/* 0x000025C8 */
    un_dma0_cmicicn_t	unCMICIC371;	/* 0x000025CC */
    un_dma0_cmicicn_t	unCMICIC372;	/* 0x000025D0 */
    un_dma0_cmicicn_t	unCMICIC373;	/* 0x000025D4 */
    un_dma0_cmicicn_t	unCMICIC374;	/* 0x000025D8 */
    un_dma0_cmicicn_t	unCMICIC375;	/* 0x000025DC */
    un_dma0_cmicicn_t	unCMICIC376;	/* 0x000025E0 */
    un_dma0_cmicicn_t	unCMICIC377;	/* 0x000025E4 */
    un_dma0_cmicicn_t	unCMICIC378;	/* 0x000025E8 */
    un_dma0_cmicicn_t	unCMICIC379;	/* 0x000025EC */
    un_dma0_cmicicn_t	unCMICIC380;	/* 0x000025F0 */
    un_dma0_cmicicn_t	unCMICIC381;	/* 0x000025F4 */
    un_dma0_cmicicn_t	unCMICIC382;	/* 0x000025F8 */
    un_dma0_cmicicn_t	unCMICIC383;	/* 0x000025FC */
    un_dma0_cmicicn_t	unCMICIC384;	/* 0x00002600 */
    un_dma0_cmicicn_t	unCMICIC385;	/* 0x00002604 */
    un_dma0_cmicicn_t	unCMICIC386;	/* 0x00002608 */
    un_dma0_cmicicn_t	unCMICIC387;	/* 0x0000260C */
    un_dma0_cmicicn_t	unCMICIC388;	/* 0x00002610 */
    un_dma0_cmicicn_t	unCMICIC389;	/* 0x00002614 */
    un_dma0_cmicicn_t	unCMICIC390;	/* 0x00002618 */
    un_dma0_cmicicn_t	unCMICIC391;	/* 0x0000261C */
    un_dma0_cmicicn_t	unCMICIC392;	/* 0x00002620 */
    un_dma0_cmicicn_t	unCMICIC393;	/* 0x00002624 */
    un_dma0_cmicicn_t	unCMICIC394;	/* 0x00002628 */
    un_dma0_cmicicn_t	unCMICIC395;	/* 0x0000262C */
    un_dma0_cmicicn_t	unCMICIC396;	/* 0x00002630 */
    un_dma0_cmicicn_t	unCMICIC397;	/* 0x00002634 */
    un_dma0_cmicicn_t	unCMICIC398;	/* 0x00002638 */
    un_dma0_cmicicn_t	unCMICIC399;	/* 0x0000263C */
    un_dma0_cmicicn_t	unCMICIC400;	/* 0x00002640 */
    un_dma0_cmicicn_t	unCMICIC401;	/* 0x00002644 */
    un_dma0_cmicicn_t	unCMICIC402;	/* 0x00002648 */
    un_dma0_cmicicn_t	unCMICIC403;	/* 0x0000264C */
    un_dma0_cmicicn_t	unCMICIC404;	/* 0x00002650 */
    un_dma0_cmicicn_t	unCMICIC405;	/* 0x00002654 */
    un_dma0_cmicicn_t	unCMICIC406;	/* 0x00002658 */
    un_dma0_cmicicn_t	unCMICIC407;	/* 0x0000265C */
    un_dma0_cmicicn_t	unCMICIC408;	/* 0x00002660 */
    un_dma0_cmicicn_t	unCMICIC409;	/* 0x00002664 */
    un_dma0_cmicicn_t	unCMICIC410;	/* 0x00002668 */
    un_dma0_cmicicn_t	unCMICIC411;	/* 0x0000266C */
    un_dma0_cmicicn_t	unCMICIC412;	/* 0x00002670 */
    un_dma0_cmicicn_t	unCMICIC413;	/* 0x00002674 */
    un_dma0_cmicicn_t	unCMICIC414;	/* 0x00002678 */
    un_dma0_cmicicn_t	unCMICIC415;	/* 0x0000267C */
    un_dma0_cmicicn_t	unCMICIC416;	/* 0x00002680 */
    un_dma0_cmicicn_t	unCMICIC417;	/* 0x00002684 */
    un_dma0_cmicicn_t	unCMICIC418;	/* 0x00002688 */
    un_dma0_cmicicn_t	unCMICIC419;	/* 0x0000268C */
    un_dma0_cmicicn_t	unCMICIC420;	/* 0x00002690 */
    un_dma0_cmicicn_t	unCMICIC421;	/* 0x00002694 */
    un_dma0_cmicicn_t	unCMICIC422;	/* 0x00002698 */
    un_dma0_cmicicn_t	unCMICIC423;	/* 0x0000269C */
    un_dma0_cmicicn_t	unCMICIC424;	/* 0x000026A0 */
    un_dma0_cmicicn_t	unCMICIC425;	/* 0x000026A4 */
    un_dma0_cmicicn_t	unCMICIC426;	/* 0x000026A8 */
    un_dma0_cmicicn_t	unCMICIC427;	/* 0x000026AC */
    un_dma0_cmicicn_t	unCMICIC428;	/* 0x000026B0 */
    un_dma0_cmicicn_t	unCMICIC429;	/* 0x000026B4 */
    un_dma0_cmicicn_t	unCMICIC430;	/* 0x000026B8 */
    un_dma0_cmicicn_t	unCMICIC431;	/* 0x000026BC */
    un_dma0_cmicicn_t	unCMICIC432;	/* 0x000026C0 */
    un_dma0_cmicicn_t	unCMICIC433;	/* 0x000026C4 */
    un_dma0_cmicicn_t	unCMICIC434;	/* 0x000026C8 */
    un_dma0_cmicicn_t	unCMICIC435;	/* 0x000026CC */
    un_dma0_cmicicn_t	unCMICIC436;	/* 0x000026D0 */
    un_dma0_cmicicn_t	unCMICIC437;	/* 0x000026D4 */
    un_dma0_cmicicn_t	unCMICIC438;	/* 0x000026D8 */
    un_dma0_cmicicn_t	unCMICIC439;	/* 0x000026DC */
    un_dma0_cmicicn_t	unCMICIC440;	/* 0x000026E0 */
    un_dma0_cmicicn_t	unCMICIC441;	/* 0x000026E4 */
    un_dma0_cmicicn_t	unCMICIC442;	/* 0x000026E8 */
    un_dma0_cmicicn_t	unCMICIC443;	/* 0x000026EC */
    un_dma0_cmicicn_t	unCMICIC444;	/* 0x000026F0 */
    un_dma0_cmicicn_t	unCMICIC445;	/* 0x000026F4 */
    un_dma0_cmicicn_t	unCMICIC446;	/* 0x000026F8 */
    un_dma0_cmicicn_t	unCMICIC447;	/* 0x000026FC */
    un_dma0_cmicicn_t	unCMICIC448;	/* 0x00002700 */
    un_dma0_cmicicn_t	unCMICIC449;	/* 0x00002704 */
    un_dma0_cmicicn_t	unCMICIC450;	/* 0x00002708 */
    un_dma0_cmicicn_t	unCMICIC451;	/* 0x0000270C */
    un_dma0_cmicicn_t	unCMICIC452;	/* 0x00002710 */
    un_dma0_cmicicn_t	unCMICIC453;	/* 0x00002714 */
    un_dma0_cmicicn_t	unCMICIC454;	/* 0x00002718 */
    un_dma0_cmicicn_t	unCMICIC455;	/* 0x0000271C */
    un_dma0_cmicicn_t	unCMICIC456;	/* 0x00002720 */
    un_dma0_cmicicn_t	unCMICIC457;	/* 0x00002724 */
    un_dma0_cmicicn_t	unCMICIC458;	/* 0x00002728 */
    un_dma0_cmicicn_t	unCMICIC459;	/* 0x0000272C */
    un_dma0_cmicicn_t	unCMICIC460;	/* 0x00002730 */
    un_dma0_cmicicn_t	unCMICIC461;	/* 0x00002734 */
    un_dma0_cmicicn_t	unCMICIC462;	/* 0x00002738 */
    un_dma0_cmicicn_t	unCMICIC463;	/* 0x0000273C */
    un_dma0_cmicicn_t	unCMICIC464;	/* 0x00002740 */
    un_dma0_cmicicn_t	unCMICIC465;	/* 0x00002744 */
    un_dma0_cmicicn_t	unCMICIC466;	/* 0x00002748 */
    un_dma0_cmicicn_t	unCMICIC467;	/* 0x0000274C */
    un_dma0_cmicicn_t	unCMICIC468;	/* 0x00002750 */
    un_dma0_cmicicn_t	unCMICIC469;	/* 0x00002754 */
    un_dma0_cmicicn_t	unCMICIC470;	/* 0x00002758 */
    un_dma0_cmicicn_t	unCMICIC471;	/* 0x0000275C */
    un_dma0_cmicicn_t	unCMICIC472;	/* 0x00002760 */
    un_dma0_cmicicn_t	unCMICIC473;	/* 0x00002764 */
    un_dma0_cmicicn_t	unCMICIC474;	/* 0x00002768 */
    un_dma0_cmicicn_t	unCMICIC475;	/* 0x0000276C */
    un_dma0_cmicicn_t	unCMICIC476;	/* 0x00002770 */
    un_dma0_cmicicn_t	unCMICIC477;	/* 0x00002774 */
    un_dma0_cmicicn_t	unCMICIC478;	/* 0x00002778 */
    un_dma0_cmicicn_t	unCMICIC479;	/* 0x0000277C */
    un_dma0_cmicicn_t	unCMICIC480;	/* 0x00002780 */
    un_dma0_cmicicn_t	unCMICIC481;	/* 0x00002784 */
    un_dma0_cmicicn_t	unCMICIC482;	/* 0x00002788 */
    un_dma0_cmicicn_t	unCMICIC483;	/* 0x0000278C */
    un_dma0_cmicicn_t	unCMICIC484;	/* 0x00002790 */
    un_dma0_cmicicn_t	unCMICIC485;	/* 0x00002794 */
    un_dma0_cmicicn_t	unCMICIC486;	/* 0x00002798 */
    un_dma0_cmicicn_t	unCMICIC487;	/* 0x0000279C */
    un_dma0_cmicicn_t	unCMICIC488;	/* 0x000027A0 */
    un_dma0_cmicicn_t	unCMICIC489;	/* 0x000027A4 */
    un_dma0_cmicicn_t	unCMICIC490;	/* 0x000027A8 */
    un_dma0_cmicicn_t	unCMICIC491;	/* 0x000027AC */
    un_dma0_cmicicn_t	unCMICIC492;	/* 0x000027B0 */
    un_dma0_cmicicn_t	unCMICIC493;	/* 0x000027B4 */
    un_dma0_cmicicn_t	unCMICIC494;	/* 0x000027B8 */
    un_dma0_cmicicn_t	unCMICIC495;	/* 0x000027BC */
    un_dma0_cmicicn_t	unCMICIC496;	/* 0x000027C0 */
    un_dma0_cmicicn_t	unCMICIC497;	/* 0x000027C4 */
    un_dma0_cmicicn_t	unCMICIC498;	/* 0x000027C8 */
    un_dma0_cmicicn_t	unCMICIC499;	/* 0x000027CC */
    un_dma0_cmicicn_t	unCMICIC500;	/* 0x000027D0 */
    un_dma0_cmicicn_t	unCMICIC501;	/* 0x000027D4 */
    un_dma0_cmicicn_t	unCMICIC502;	/* 0x000027D8 */
    un_dma0_cmicicn_t	unCMICIC503;	/* 0x000027DC */
    un_dma0_cmicicn_t	unCMICIC504;	/* 0x000027E0 */
    un_dma0_cmicicn_t	unCMICIC505;	/* 0x000027E4 */
    un_dma0_cmicicn_t	unCMICIC506;	/* 0x000027E8 */
    un_dma0_cmicicn_t	unCMICIC507;	/* 0x000027EC */
    un_dma0_cmicicn_t	unCMICIC508;	/* 0x000027F0 */
    un_dma0_cmicicn_t	unCMICIC509;	/* 0x000027F4 */
    un_dma0_cmicicn_t	unCMICIC510;	/* 0x000027F8 */
    un_dma0_cmicicn_t	unCMICIC511;	/* 0x000027FC */
    un_dma0_cmchicn_t	unCMCHIC0;	/* 0x00002800 */
    un_dma0_cmchicn_t	unCMCHIC1;	/* 0x00002804 */
    un_dma0_cmchicn_t	unCMCHIC2;	/* 0x00002808 */
    un_dma0_cmchicn_t	unCMCHIC3;	/* 0x0000280C */
    un_dma0_cmchicn_t	unCMCHIC4;	/* 0x00002810 */
    un_dma0_cmchicn_t	unCMCHIC5;	/* 0x00002814 */
    un_dma0_cmchicn_t	unCMCHIC6;	/* 0x00002818 */
    un_dma0_cmchicn_t	unCMCHIC7;	/* 0x0000281C */
    un_dma0_cmchicn_t	unCMCHIC8;	/* 0x00002820 */
    un_dma0_cmchicn_t	unCMCHIC9;	/* 0x00002824 */
    un_dma0_cmchicn_t	unCMCHIC10;	/* 0x00002828 */
    un_dma0_cmchicn_t	unCMCHIC11;	/* 0x0000282C */
    un_dma0_cmchicn_t	unCMCHIC12;	/* 0x00002830 */
    un_dma0_cmchicn_t	unCMCHIC13;	/* 0x00002834 */
    un_dma0_cmchicn_t	unCMCHIC14;	/* 0x00002838 */
    un_dma0_cmchicn_t	unCMCHIC15;	/* 0x0000283C */
    uint_io8_t	au8Reserved50[6080];	/* 0x00002840 */
}stc_dma0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_dma0_t	stcDMA0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 16384(0x4000) bytes */


#endif /* __S6J3200_DMA_H */
