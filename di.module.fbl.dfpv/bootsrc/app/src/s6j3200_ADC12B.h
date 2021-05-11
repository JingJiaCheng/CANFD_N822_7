/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_ADC12B_H
#define __S6J3200_ADC12B_H

#include "s6j3200io_basetypes.h"

/* ADC12B0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define ADC12B0	stcADC12B0
#else /* __IO_DEFINE */
#define ADC12B0	(*((volatile stc_adc12b0_t*)0xB48C0000))
#endif /* __IO_DEFINE */

/* CHCTRL[0-63] */
#define ADC12B0_CHCTRL0	(ADC12B0.unCHCTRL0.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL0_ANIN	(ADC12B0.unCHCTRL0.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL0_TRGTYP	(ADC12B0.unCHCTRL0.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL0_CHPRI	(ADC12B0.unCHCTRL0.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL0_RSMRST	(ADC12B0.unCHCTRL0.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL0_DP	(*(volatile uint_io8_t*)0xB7E0000E)  /*@bfbba@*/
#define ADC12B0_CHCTRL0_SMTIME	(ADC12B0.unCHCTRL0.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL0_RCSEL	(ADC12B0.unCHCTRL0.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL0_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00016)  /*@bfbba@*/
#define ADC12B0_CHCTRL0_RCEN	(*(volatile uint_io8_t*)0xB7E00017)  /*@bfbba@*/
#define ADC12B0_CHCTRL0_SWTRG	(*(volatile uint_io8_t*)0xB7E00018)  /*@bfbba@*/
#define ADC12B0_CHCTRL0_TRGCL	(*(volatile uint_io8_t*)0xB7E00019)  /*@bfbba@*/

#define ADC12B0_CHCTRL1	(ADC12B0.unCHCTRL1.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL1_ANIN	(ADC12B0.unCHCTRL1.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL1_TRGTYP	(ADC12B0.unCHCTRL1.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL1_CHPRI	(ADC12B0.unCHCTRL1.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL1_RSMRST	(ADC12B0.unCHCTRL1.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL1_DP	(*(volatile uint_io8_t*)0xB7E0002E)  /*@bfbba@*/
#define ADC12B0_CHCTRL1_SMTIME	(ADC12B0.unCHCTRL1.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL1_RCSEL	(ADC12B0.unCHCTRL1.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL1_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00036)  /*@bfbba@*/
#define ADC12B0_CHCTRL1_RCEN	(*(volatile uint_io8_t*)0xB7E00037)  /*@bfbba@*/
#define ADC12B0_CHCTRL1_SWTRG	(*(volatile uint_io8_t*)0xB7E00038)  /*@bfbba@*/
#define ADC12B0_CHCTRL1_TRGCL	(*(volatile uint_io8_t*)0xB7E00039)  /*@bfbba@*/

#define ADC12B0_CHCTRL2	(ADC12B0.unCHCTRL2.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL2_ANIN	(ADC12B0.unCHCTRL2.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL2_TRGTYP	(ADC12B0.unCHCTRL2.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL2_CHPRI	(ADC12B0.unCHCTRL2.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL2_RSMRST	(ADC12B0.unCHCTRL2.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL2_DP	(*(volatile uint_io8_t*)0xB7E0004E)  /*@bfbba@*/
#define ADC12B0_CHCTRL2_SMTIME	(ADC12B0.unCHCTRL2.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL2_RCSEL	(ADC12B0.unCHCTRL2.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL2_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00056)  /*@bfbba@*/
#define ADC12B0_CHCTRL2_RCEN	(*(volatile uint_io8_t*)0xB7E00057)  /*@bfbba@*/
#define ADC12B0_CHCTRL2_SWTRG	(*(volatile uint_io8_t*)0xB7E00058)  /*@bfbba@*/
#define ADC12B0_CHCTRL2_TRGCL	(*(volatile uint_io8_t*)0xB7E00059)  /*@bfbba@*/

#define ADC12B0_CHCTRL3	(ADC12B0.unCHCTRL3.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL3_ANIN	(ADC12B0.unCHCTRL3.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL3_TRGTYP	(ADC12B0.unCHCTRL3.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL3_CHPRI	(ADC12B0.unCHCTRL3.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL3_RSMRST	(ADC12B0.unCHCTRL3.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL3_DP	(*(volatile uint_io8_t*)0xB7E0006E)  /*@bfbba@*/
#define ADC12B0_CHCTRL3_SMTIME	(ADC12B0.unCHCTRL3.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL3_RCSEL	(ADC12B0.unCHCTRL3.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL3_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00076)  /*@bfbba@*/
#define ADC12B0_CHCTRL3_RCEN	(*(volatile uint_io8_t*)0xB7E00077)  /*@bfbba@*/
#define ADC12B0_CHCTRL3_SWTRG	(*(volatile uint_io8_t*)0xB7E00078)  /*@bfbba@*/
#define ADC12B0_CHCTRL3_TRGCL	(*(volatile uint_io8_t*)0xB7E00079)  /*@bfbba@*/

#define ADC12B0_CHCTRL4	(ADC12B0.unCHCTRL4.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL4_ANIN	(ADC12B0.unCHCTRL4.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL4_TRGTYP	(ADC12B0.unCHCTRL4.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL4_CHPRI	(ADC12B0.unCHCTRL4.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL4_RSMRST	(ADC12B0.unCHCTRL4.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL4_DP	(*(volatile uint_io8_t*)0xB7E0008E)  /*@bfbba@*/
#define ADC12B0_CHCTRL4_SMTIME	(ADC12B0.unCHCTRL4.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL4_RCSEL	(ADC12B0.unCHCTRL4.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL4_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00096)  /*@bfbba@*/
#define ADC12B0_CHCTRL4_RCEN	(*(volatile uint_io8_t*)0xB7E00097)  /*@bfbba@*/
#define ADC12B0_CHCTRL4_SWTRG	(*(volatile uint_io8_t*)0xB7E00098)  /*@bfbba@*/
#define ADC12B0_CHCTRL4_TRGCL	(*(volatile uint_io8_t*)0xB7E00099)  /*@bfbba@*/

#define ADC12B0_CHCTRL5	(ADC12B0.unCHCTRL5.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL5_ANIN	(ADC12B0.unCHCTRL5.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL5_TRGTYP	(ADC12B0.unCHCTRL5.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL5_CHPRI	(ADC12B0.unCHCTRL5.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL5_RSMRST	(ADC12B0.unCHCTRL5.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL5_DP	(*(volatile uint_io8_t*)0xB7E000AE)  /*@bfbba@*/
#define ADC12B0_CHCTRL5_SMTIME	(ADC12B0.unCHCTRL5.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL5_RCSEL	(ADC12B0.unCHCTRL5.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL5_RCINVSEL	(*(volatile uint_io8_t*)0xB7E000B6)  /*@bfbba@*/
#define ADC12B0_CHCTRL5_RCEN	(*(volatile uint_io8_t*)0xB7E000B7)  /*@bfbba@*/
#define ADC12B0_CHCTRL5_SWTRG	(*(volatile uint_io8_t*)0xB7E000B8)  /*@bfbba@*/
#define ADC12B0_CHCTRL5_TRGCL	(*(volatile uint_io8_t*)0xB7E000B9)  /*@bfbba@*/

#define ADC12B0_CHCTRL6	(ADC12B0.unCHCTRL6.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL6_ANIN	(ADC12B0.unCHCTRL6.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL6_TRGTYP	(ADC12B0.unCHCTRL6.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL6_CHPRI	(ADC12B0.unCHCTRL6.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL6_RSMRST	(ADC12B0.unCHCTRL6.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL6_DP	(*(volatile uint_io8_t*)0xB7E000CE)  /*@bfbba@*/
#define ADC12B0_CHCTRL6_SMTIME	(ADC12B0.unCHCTRL6.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL6_RCSEL	(ADC12B0.unCHCTRL6.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL6_RCINVSEL	(*(volatile uint_io8_t*)0xB7E000D6)  /*@bfbba@*/
#define ADC12B0_CHCTRL6_RCEN	(*(volatile uint_io8_t*)0xB7E000D7)  /*@bfbba@*/
#define ADC12B0_CHCTRL6_SWTRG	(*(volatile uint_io8_t*)0xB7E000D8)  /*@bfbba@*/
#define ADC12B0_CHCTRL6_TRGCL	(*(volatile uint_io8_t*)0xB7E000D9)  /*@bfbba@*/

#define ADC12B0_CHCTRL7	(ADC12B0.unCHCTRL7.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL7_ANIN	(ADC12B0.unCHCTRL7.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL7_TRGTYP	(ADC12B0.unCHCTRL7.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL7_CHPRI	(ADC12B0.unCHCTRL7.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL7_RSMRST	(ADC12B0.unCHCTRL7.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL7_DP	(*(volatile uint_io8_t*)0xB7E000EE)  /*@bfbba@*/
#define ADC12B0_CHCTRL7_SMTIME	(ADC12B0.unCHCTRL7.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL7_RCSEL	(ADC12B0.unCHCTRL7.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL7_RCINVSEL	(*(volatile uint_io8_t*)0xB7E000F6)  /*@bfbba@*/
#define ADC12B0_CHCTRL7_RCEN	(*(volatile uint_io8_t*)0xB7E000F7)  /*@bfbba@*/
#define ADC12B0_CHCTRL7_SWTRG	(*(volatile uint_io8_t*)0xB7E000F8)  /*@bfbba@*/
#define ADC12B0_CHCTRL7_TRGCL	(*(volatile uint_io8_t*)0xB7E000F9)  /*@bfbba@*/

#define ADC12B0_CHCTRL8	(ADC12B0.unCHCTRL8.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL8_ANIN	(ADC12B0.unCHCTRL8.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL8_TRGTYP	(ADC12B0.unCHCTRL8.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL8_CHPRI	(ADC12B0.unCHCTRL8.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL8_RSMRST	(ADC12B0.unCHCTRL8.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL8_DP	(*(volatile uint_io8_t*)0xB7E0010E)  /*@bfbba@*/
#define ADC12B0_CHCTRL8_SMTIME	(ADC12B0.unCHCTRL8.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL8_RCSEL	(ADC12B0.unCHCTRL8.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL8_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00116)  /*@bfbba@*/
#define ADC12B0_CHCTRL8_RCEN	(*(volatile uint_io8_t*)0xB7E00117)  /*@bfbba@*/
#define ADC12B0_CHCTRL8_SWTRG	(*(volatile uint_io8_t*)0xB7E00118)  /*@bfbba@*/
#define ADC12B0_CHCTRL8_TRGCL	(*(volatile uint_io8_t*)0xB7E00119)  /*@bfbba@*/

#define ADC12B0_CHCTRL9	(ADC12B0.unCHCTRL9.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL9_ANIN	(ADC12B0.unCHCTRL9.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL9_TRGTYP	(ADC12B0.unCHCTRL9.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL9_CHPRI	(ADC12B0.unCHCTRL9.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL9_RSMRST	(ADC12B0.unCHCTRL9.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL9_DP	(*(volatile uint_io8_t*)0xB7E0012E)  /*@bfbba@*/
#define ADC12B0_CHCTRL9_SMTIME	(ADC12B0.unCHCTRL9.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL9_RCSEL	(ADC12B0.unCHCTRL9.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL9_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00136)  /*@bfbba@*/
#define ADC12B0_CHCTRL9_RCEN	(*(volatile uint_io8_t*)0xB7E00137)  /*@bfbba@*/
#define ADC12B0_CHCTRL9_SWTRG	(*(volatile uint_io8_t*)0xB7E00138)  /*@bfbba@*/
#define ADC12B0_CHCTRL9_TRGCL	(*(volatile uint_io8_t*)0xB7E00139)  /*@bfbba@*/

#define ADC12B0_CHCTRL10	(ADC12B0.unCHCTRL10.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL10_ANIN	(ADC12B0.unCHCTRL10.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL10_TRGTYP	(ADC12B0.unCHCTRL10.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL10_CHPRI	(ADC12B0.unCHCTRL10.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL10_RSMRST	(ADC12B0.unCHCTRL10.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL10_DP	(*(volatile uint_io8_t*)0xB7E0014E)  /*@bfbba@*/
#define ADC12B0_CHCTRL10_SMTIME	(ADC12B0.unCHCTRL10.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL10_RCSEL	(ADC12B0.unCHCTRL10.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL10_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00156)  /*@bfbba@*/
#define ADC12B0_CHCTRL10_RCEN	(*(volatile uint_io8_t*)0xB7E00157)  /*@bfbba@*/
#define ADC12B0_CHCTRL10_SWTRG	(*(volatile uint_io8_t*)0xB7E00158)  /*@bfbba@*/
#define ADC12B0_CHCTRL10_TRGCL	(*(volatile uint_io8_t*)0xB7E00159)  /*@bfbba@*/

#define ADC12B0_CHCTRL11	(ADC12B0.unCHCTRL11.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL11_ANIN	(ADC12B0.unCHCTRL11.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL11_TRGTYP	(ADC12B0.unCHCTRL11.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL11_CHPRI	(ADC12B0.unCHCTRL11.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL11_RSMRST	(ADC12B0.unCHCTRL11.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL11_DP	(*(volatile uint_io8_t*)0xB7E0016E)  /*@bfbba@*/
#define ADC12B0_CHCTRL11_SMTIME	(ADC12B0.unCHCTRL11.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL11_RCSEL	(ADC12B0.unCHCTRL11.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL11_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00176)  /*@bfbba@*/
#define ADC12B0_CHCTRL11_RCEN	(*(volatile uint_io8_t*)0xB7E00177)  /*@bfbba@*/
#define ADC12B0_CHCTRL11_SWTRG	(*(volatile uint_io8_t*)0xB7E00178)  /*@bfbba@*/
#define ADC12B0_CHCTRL11_TRGCL	(*(volatile uint_io8_t*)0xB7E00179)  /*@bfbba@*/

#define ADC12B0_CHCTRL12	(ADC12B0.unCHCTRL12.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL12_ANIN	(ADC12B0.unCHCTRL12.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL12_TRGTYP	(ADC12B0.unCHCTRL12.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL12_CHPRI	(ADC12B0.unCHCTRL12.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL12_RSMRST	(ADC12B0.unCHCTRL12.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL12_DP	(*(volatile uint_io8_t*)0xB7E0018E)  /*@bfbba@*/
#define ADC12B0_CHCTRL12_SMTIME	(ADC12B0.unCHCTRL12.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL12_RCSEL	(ADC12B0.unCHCTRL12.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL12_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00196)  /*@bfbba@*/
#define ADC12B0_CHCTRL12_RCEN	(*(volatile uint_io8_t*)0xB7E00197)  /*@bfbba@*/
#define ADC12B0_CHCTRL12_SWTRG	(*(volatile uint_io8_t*)0xB7E00198)  /*@bfbba@*/
#define ADC12B0_CHCTRL12_TRGCL	(*(volatile uint_io8_t*)0xB7E00199)  /*@bfbba@*/

#define ADC12B0_CHCTRL13	(ADC12B0.unCHCTRL13.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL13_ANIN	(ADC12B0.unCHCTRL13.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL13_TRGTYP	(ADC12B0.unCHCTRL13.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL13_CHPRI	(ADC12B0.unCHCTRL13.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL13_RSMRST	(ADC12B0.unCHCTRL13.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL13_DP	(*(volatile uint_io8_t*)0xB7E001AE)  /*@bfbba@*/
#define ADC12B0_CHCTRL13_SMTIME	(ADC12B0.unCHCTRL13.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL13_RCSEL	(ADC12B0.unCHCTRL13.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL13_RCINVSEL	(*(volatile uint_io8_t*)0xB7E001B6)  /*@bfbba@*/
#define ADC12B0_CHCTRL13_RCEN	(*(volatile uint_io8_t*)0xB7E001B7)  /*@bfbba@*/
#define ADC12B0_CHCTRL13_SWTRG	(*(volatile uint_io8_t*)0xB7E001B8)  /*@bfbba@*/
#define ADC12B0_CHCTRL13_TRGCL	(*(volatile uint_io8_t*)0xB7E001B9)  /*@bfbba@*/

#define ADC12B0_CHCTRL14	(ADC12B0.unCHCTRL14.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL14_ANIN	(ADC12B0.unCHCTRL14.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL14_TRGTYP	(ADC12B0.unCHCTRL14.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL14_CHPRI	(ADC12B0.unCHCTRL14.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL14_RSMRST	(ADC12B0.unCHCTRL14.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL14_DP	(*(volatile uint_io8_t*)0xB7E001CE)  /*@bfbba@*/
#define ADC12B0_CHCTRL14_SMTIME	(ADC12B0.unCHCTRL14.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL14_RCSEL	(ADC12B0.unCHCTRL14.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL14_RCINVSEL	(*(volatile uint_io8_t*)0xB7E001D6)  /*@bfbba@*/
#define ADC12B0_CHCTRL14_RCEN	(*(volatile uint_io8_t*)0xB7E001D7)  /*@bfbba@*/
#define ADC12B0_CHCTRL14_SWTRG	(*(volatile uint_io8_t*)0xB7E001D8)  /*@bfbba@*/
#define ADC12B0_CHCTRL14_TRGCL	(*(volatile uint_io8_t*)0xB7E001D9)  /*@bfbba@*/

#define ADC12B0_CHCTRL15	(ADC12B0.unCHCTRL15.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL15_ANIN	(ADC12B0.unCHCTRL15.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL15_TRGTYP	(ADC12B0.unCHCTRL15.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL15_CHPRI	(ADC12B0.unCHCTRL15.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL15_RSMRST	(ADC12B0.unCHCTRL15.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL15_DP	(*(volatile uint_io8_t*)0xB7E001EE)  /*@bfbba@*/
#define ADC12B0_CHCTRL15_SMTIME	(ADC12B0.unCHCTRL15.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL15_RCSEL	(ADC12B0.unCHCTRL15.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL15_RCINVSEL	(*(volatile uint_io8_t*)0xB7E001F6)  /*@bfbba@*/
#define ADC12B0_CHCTRL15_RCEN	(*(volatile uint_io8_t*)0xB7E001F7)  /*@bfbba@*/
#define ADC12B0_CHCTRL15_SWTRG	(*(volatile uint_io8_t*)0xB7E001F8)  /*@bfbba@*/
#define ADC12B0_CHCTRL15_TRGCL	(*(volatile uint_io8_t*)0xB7E001F9)  /*@bfbba@*/

#define ADC12B0_CHCTRL16	(ADC12B0.unCHCTRL16.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL16_ANIN	(ADC12B0.unCHCTRL16.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL16_TRGTYP	(ADC12B0.unCHCTRL16.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL16_CHPRI	(ADC12B0.unCHCTRL16.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL16_RSMRST	(ADC12B0.unCHCTRL16.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL16_DP	(*(volatile uint_io8_t*)0xB7E0020E)  /*@bfbba@*/
#define ADC12B0_CHCTRL16_SMTIME	(ADC12B0.unCHCTRL16.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL16_RCSEL	(ADC12B0.unCHCTRL16.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL16_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00216)  /*@bfbba@*/
#define ADC12B0_CHCTRL16_RCEN	(*(volatile uint_io8_t*)0xB7E00217)  /*@bfbba@*/
#define ADC12B0_CHCTRL16_SWTRG	(*(volatile uint_io8_t*)0xB7E00218)  /*@bfbba@*/
#define ADC12B0_CHCTRL16_TRGCL	(*(volatile uint_io8_t*)0xB7E00219)  /*@bfbba@*/

#define ADC12B0_CHCTRL17	(ADC12B0.unCHCTRL17.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL17_ANIN	(ADC12B0.unCHCTRL17.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL17_TRGTYP	(ADC12B0.unCHCTRL17.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL17_CHPRI	(ADC12B0.unCHCTRL17.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL17_RSMRST	(ADC12B0.unCHCTRL17.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL17_DP	(*(volatile uint_io8_t*)0xB7E0022E)  /*@bfbba@*/
#define ADC12B0_CHCTRL17_SMTIME	(ADC12B0.unCHCTRL17.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL17_RCSEL	(ADC12B0.unCHCTRL17.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL17_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00236)  /*@bfbba@*/
#define ADC12B0_CHCTRL17_RCEN	(*(volatile uint_io8_t*)0xB7E00237)  /*@bfbba@*/
#define ADC12B0_CHCTRL17_SWTRG	(*(volatile uint_io8_t*)0xB7E00238)  /*@bfbba@*/
#define ADC12B0_CHCTRL17_TRGCL	(*(volatile uint_io8_t*)0xB7E00239)  /*@bfbba@*/

#define ADC12B0_CHCTRL18	(ADC12B0.unCHCTRL18.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL18_ANIN	(ADC12B0.unCHCTRL18.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL18_TRGTYP	(ADC12B0.unCHCTRL18.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL18_CHPRI	(ADC12B0.unCHCTRL18.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL18_RSMRST	(ADC12B0.unCHCTRL18.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL18_DP	(*(volatile uint_io8_t*)0xB7E0024E)  /*@bfbba@*/
#define ADC12B0_CHCTRL18_SMTIME	(ADC12B0.unCHCTRL18.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL18_RCSEL	(ADC12B0.unCHCTRL18.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL18_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00256)  /*@bfbba@*/
#define ADC12B0_CHCTRL18_RCEN	(*(volatile uint_io8_t*)0xB7E00257)  /*@bfbba@*/
#define ADC12B0_CHCTRL18_SWTRG	(*(volatile uint_io8_t*)0xB7E00258)  /*@bfbba@*/
#define ADC12B0_CHCTRL18_TRGCL	(*(volatile uint_io8_t*)0xB7E00259)  /*@bfbba@*/

#define ADC12B0_CHCTRL19	(ADC12B0.unCHCTRL19.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL19_ANIN	(ADC12B0.unCHCTRL19.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL19_TRGTYP	(ADC12B0.unCHCTRL19.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL19_CHPRI	(ADC12B0.unCHCTRL19.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL19_RSMRST	(ADC12B0.unCHCTRL19.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL19_DP	(*(volatile uint_io8_t*)0xB7E0026E)  /*@bfbba@*/
#define ADC12B0_CHCTRL19_SMTIME	(ADC12B0.unCHCTRL19.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL19_RCSEL	(ADC12B0.unCHCTRL19.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL19_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00276)  /*@bfbba@*/
#define ADC12B0_CHCTRL19_RCEN	(*(volatile uint_io8_t*)0xB7E00277)  /*@bfbba@*/
#define ADC12B0_CHCTRL19_SWTRG	(*(volatile uint_io8_t*)0xB7E00278)  /*@bfbba@*/
#define ADC12B0_CHCTRL19_TRGCL	(*(volatile uint_io8_t*)0xB7E00279)  /*@bfbba@*/

#define ADC12B0_CHCTRL20	(ADC12B0.unCHCTRL20.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL20_ANIN	(ADC12B0.unCHCTRL20.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL20_TRGTYP	(ADC12B0.unCHCTRL20.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL20_CHPRI	(ADC12B0.unCHCTRL20.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL20_RSMRST	(ADC12B0.unCHCTRL20.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL20_DP	(*(volatile uint_io8_t*)0xB7E0028E)  /*@bfbba@*/
#define ADC12B0_CHCTRL20_SMTIME	(ADC12B0.unCHCTRL20.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL20_RCSEL	(ADC12B0.unCHCTRL20.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL20_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00296)  /*@bfbba@*/
#define ADC12B0_CHCTRL20_RCEN	(*(volatile uint_io8_t*)0xB7E00297)  /*@bfbba@*/
#define ADC12B0_CHCTRL20_SWTRG	(*(volatile uint_io8_t*)0xB7E00298)  /*@bfbba@*/
#define ADC12B0_CHCTRL20_TRGCL	(*(volatile uint_io8_t*)0xB7E00299)  /*@bfbba@*/

#define ADC12B0_CHCTRL21	(ADC12B0.unCHCTRL21.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL21_ANIN	(ADC12B0.unCHCTRL21.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL21_TRGTYP	(ADC12B0.unCHCTRL21.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL21_CHPRI	(ADC12B0.unCHCTRL21.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL21_RSMRST	(ADC12B0.unCHCTRL21.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL21_DP	(*(volatile uint_io8_t*)0xB7E002AE)  /*@bfbba@*/
#define ADC12B0_CHCTRL21_SMTIME	(ADC12B0.unCHCTRL21.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL21_RCSEL	(ADC12B0.unCHCTRL21.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL21_RCINVSEL	(*(volatile uint_io8_t*)0xB7E002B6)  /*@bfbba@*/
#define ADC12B0_CHCTRL21_RCEN	(*(volatile uint_io8_t*)0xB7E002B7)  /*@bfbba@*/
#define ADC12B0_CHCTRL21_SWTRG	(*(volatile uint_io8_t*)0xB7E002B8)  /*@bfbba@*/
#define ADC12B0_CHCTRL21_TRGCL	(*(volatile uint_io8_t*)0xB7E002B9)  /*@bfbba@*/

#define ADC12B0_CHCTRL22	(ADC12B0.unCHCTRL22.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL22_ANIN	(ADC12B0.unCHCTRL22.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL22_TRGTYP	(ADC12B0.unCHCTRL22.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL22_CHPRI	(ADC12B0.unCHCTRL22.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL22_RSMRST	(ADC12B0.unCHCTRL22.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL22_DP	(*(volatile uint_io8_t*)0xB7E002CE)  /*@bfbba@*/
#define ADC12B0_CHCTRL22_SMTIME	(ADC12B0.unCHCTRL22.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL22_RCSEL	(ADC12B0.unCHCTRL22.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL22_RCINVSEL	(*(volatile uint_io8_t*)0xB7E002D6)  /*@bfbba@*/
#define ADC12B0_CHCTRL22_RCEN	(*(volatile uint_io8_t*)0xB7E002D7)  /*@bfbba@*/
#define ADC12B0_CHCTRL22_SWTRG	(*(volatile uint_io8_t*)0xB7E002D8)  /*@bfbba@*/
#define ADC12B0_CHCTRL22_TRGCL	(*(volatile uint_io8_t*)0xB7E002D9)  /*@bfbba@*/

#define ADC12B0_CHCTRL23	(ADC12B0.unCHCTRL23.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL23_ANIN	(ADC12B0.unCHCTRL23.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL23_TRGTYP	(ADC12B0.unCHCTRL23.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL23_CHPRI	(ADC12B0.unCHCTRL23.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL23_RSMRST	(ADC12B0.unCHCTRL23.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL23_DP	(*(volatile uint_io8_t*)0xB7E002EE)  /*@bfbba@*/
#define ADC12B0_CHCTRL23_SMTIME	(ADC12B0.unCHCTRL23.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL23_RCSEL	(ADC12B0.unCHCTRL23.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL23_RCINVSEL	(*(volatile uint_io8_t*)0xB7E002F6)  /*@bfbba@*/
#define ADC12B0_CHCTRL23_RCEN	(*(volatile uint_io8_t*)0xB7E002F7)  /*@bfbba@*/
#define ADC12B0_CHCTRL23_SWTRG	(*(volatile uint_io8_t*)0xB7E002F8)  /*@bfbba@*/
#define ADC12B0_CHCTRL23_TRGCL	(*(volatile uint_io8_t*)0xB7E002F9)  /*@bfbba@*/

#define ADC12B0_CHCTRL24	(ADC12B0.unCHCTRL24.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL24_ANIN	(ADC12B0.unCHCTRL24.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL24_TRGTYP	(ADC12B0.unCHCTRL24.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL24_CHPRI	(ADC12B0.unCHCTRL24.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL24_RSMRST	(ADC12B0.unCHCTRL24.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL24_DP	(*(volatile uint_io8_t*)0xB7E0030E)  /*@bfbba@*/
#define ADC12B0_CHCTRL24_SMTIME	(ADC12B0.unCHCTRL24.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL24_RCSEL	(ADC12B0.unCHCTRL24.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL24_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00316)  /*@bfbba@*/
#define ADC12B0_CHCTRL24_RCEN	(*(volatile uint_io8_t*)0xB7E00317)  /*@bfbba@*/
#define ADC12B0_CHCTRL24_SWTRG	(*(volatile uint_io8_t*)0xB7E00318)  /*@bfbba@*/
#define ADC12B0_CHCTRL24_TRGCL	(*(volatile uint_io8_t*)0xB7E00319)  /*@bfbba@*/

#define ADC12B0_CHCTRL25	(ADC12B0.unCHCTRL25.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL25_ANIN	(ADC12B0.unCHCTRL25.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL25_TRGTYP	(ADC12B0.unCHCTRL25.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL25_CHPRI	(ADC12B0.unCHCTRL25.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL25_RSMRST	(ADC12B0.unCHCTRL25.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL25_DP	(*(volatile uint_io8_t*)0xB7E0032E)  /*@bfbba@*/
#define ADC12B0_CHCTRL25_SMTIME	(ADC12B0.unCHCTRL25.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL25_RCSEL	(ADC12B0.unCHCTRL25.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL25_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00336)  /*@bfbba@*/
#define ADC12B0_CHCTRL25_RCEN	(*(volatile uint_io8_t*)0xB7E00337)  /*@bfbba@*/
#define ADC12B0_CHCTRL25_SWTRG	(*(volatile uint_io8_t*)0xB7E00338)  /*@bfbba@*/
#define ADC12B0_CHCTRL25_TRGCL	(*(volatile uint_io8_t*)0xB7E00339)  /*@bfbba@*/

#define ADC12B0_CHCTRL26	(ADC12B0.unCHCTRL26.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL26_ANIN	(ADC12B0.unCHCTRL26.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL26_TRGTYP	(ADC12B0.unCHCTRL26.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL26_CHPRI	(ADC12B0.unCHCTRL26.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL26_RSMRST	(ADC12B0.unCHCTRL26.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL26_DP	(*(volatile uint_io8_t*)0xB7E0034E)  /*@bfbba@*/
#define ADC12B0_CHCTRL26_SMTIME	(ADC12B0.unCHCTRL26.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL26_RCSEL	(ADC12B0.unCHCTRL26.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL26_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00356)  /*@bfbba@*/
#define ADC12B0_CHCTRL26_RCEN	(*(volatile uint_io8_t*)0xB7E00357)  /*@bfbba@*/
#define ADC12B0_CHCTRL26_SWTRG	(*(volatile uint_io8_t*)0xB7E00358)  /*@bfbba@*/
#define ADC12B0_CHCTRL26_TRGCL	(*(volatile uint_io8_t*)0xB7E00359)  /*@bfbba@*/

#define ADC12B0_CHCTRL27	(ADC12B0.unCHCTRL27.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL27_ANIN	(ADC12B0.unCHCTRL27.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL27_TRGTYP	(ADC12B0.unCHCTRL27.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL27_CHPRI	(ADC12B0.unCHCTRL27.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL27_RSMRST	(ADC12B0.unCHCTRL27.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL27_DP	(*(volatile uint_io8_t*)0xB7E0036E)  /*@bfbba@*/
#define ADC12B0_CHCTRL27_SMTIME	(ADC12B0.unCHCTRL27.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL27_RCSEL	(ADC12B0.unCHCTRL27.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL27_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00376)  /*@bfbba@*/
#define ADC12B0_CHCTRL27_RCEN	(*(volatile uint_io8_t*)0xB7E00377)  /*@bfbba@*/
#define ADC12B0_CHCTRL27_SWTRG	(*(volatile uint_io8_t*)0xB7E00378)  /*@bfbba@*/
#define ADC12B0_CHCTRL27_TRGCL	(*(volatile uint_io8_t*)0xB7E00379)  /*@bfbba@*/

#define ADC12B0_CHCTRL28	(ADC12B0.unCHCTRL28.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL28_ANIN	(ADC12B0.unCHCTRL28.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL28_TRGTYP	(ADC12B0.unCHCTRL28.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL28_CHPRI	(ADC12B0.unCHCTRL28.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL28_RSMRST	(ADC12B0.unCHCTRL28.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL28_DP	(*(volatile uint_io8_t*)0xB7E0038E)  /*@bfbba@*/
#define ADC12B0_CHCTRL28_SMTIME	(ADC12B0.unCHCTRL28.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL28_RCSEL	(ADC12B0.unCHCTRL28.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL28_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00396)  /*@bfbba@*/
#define ADC12B0_CHCTRL28_RCEN	(*(volatile uint_io8_t*)0xB7E00397)  /*@bfbba@*/
#define ADC12B0_CHCTRL28_SWTRG	(*(volatile uint_io8_t*)0xB7E00398)  /*@bfbba@*/
#define ADC12B0_CHCTRL28_TRGCL	(*(volatile uint_io8_t*)0xB7E00399)  /*@bfbba@*/

#define ADC12B0_CHCTRL29	(ADC12B0.unCHCTRL29.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL29_ANIN	(ADC12B0.unCHCTRL29.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL29_TRGTYP	(ADC12B0.unCHCTRL29.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL29_CHPRI	(ADC12B0.unCHCTRL29.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL29_RSMRST	(ADC12B0.unCHCTRL29.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL29_DP	(*(volatile uint_io8_t*)0xB7E003AE)  /*@bfbba@*/
#define ADC12B0_CHCTRL29_SMTIME	(ADC12B0.unCHCTRL29.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL29_RCSEL	(ADC12B0.unCHCTRL29.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL29_RCINVSEL	(*(volatile uint_io8_t*)0xB7E003B6)  /*@bfbba@*/
#define ADC12B0_CHCTRL29_RCEN	(*(volatile uint_io8_t*)0xB7E003B7)  /*@bfbba@*/
#define ADC12B0_CHCTRL29_SWTRG	(*(volatile uint_io8_t*)0xB7E003B8)  /*@bfbba@*/
#define ADC12B0_CHCTRL29_TRGCL	(*(volatile uint_io8_t*)0xB7E003B9)  /*@bfbba@*/

#define ADC12B0_CHCTRL30	(ADC12B0.unCHCTRL30.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL30_ANIN	(ADC12B0.unCHCTRL30.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL30_TRGTYP	(ADC12B0.unCHCTRL30.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL30_CHPRI	(ADC12B0.unCHCTRL30.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL30_RSMRST	(ADC12B0.unCHCTRL30.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL30_DP	(*(volatile uint_io8_t*)0xB7E003CE)  /*@bfbba@*/
#define ADC12B0_CHCTRL30_SMTIME	(ADC12B0.unCHCTRL30.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL30_RCSEL	(ADC12B0.unCHCTRL30.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL30_RCINVSEL	(*(volatile uint_io8_t*)0xB7E003D6)  /*@bfbba@*/
#define ADC12B0_CHCTRL30_RCEN	(*(volatile uint_io8_t*)0xB7E003D7)  /*@bfbba@*/
#define ADC12B0_CHCTRL30_SWTRG	(*(volatile uint_io8_t*)0xB7E003D8)  /*@bfbba@*/
#define ADC12B0_CHCTRL30_TRGCL	(*(volatile uint_io8_t*)0xB7E003D9)  /*@bfbba@*/

#define ADC12B0_CHCTRL31	(ADC12B0.unCHCTRL31.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL31_ANIN	(ADC12B0.unCHCTRL31.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL31_TRGTYP	(ADC12B0.unCHCTRL31.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL31_CHPRI	(ADC12B0.unCHCTRL31.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL31_RSMRST	(ADC12B0.unCHCTRL31.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL31_DP	(*(volatile uint_io8_t*)0xB7E003EE)  /*@bfbba@*/
#define ADC12B0_CHCTRL31_SMTIME	(ADC12B0.unCHCTRL31.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL31_RCSEL	(ADC12B0.unCHCTRL31.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL31_RCINVSEL	(*(volatile uint_io8_t*)0xB7E003F6)  /*@bfbba@*/
#define ADC12B0_CHCTRL31_RCEN	(*(volatile uint_io8_t*)0xB7E003F7)  /*@bfbba@*/
#define ADC12B0_CHCTRL31_SWTRG	(*(volatile uint_io8_t*)0xB7E003F8)  /*@bfbba@*/
#define ADC12B0_CHCTRL31_TRGCL	(*(volatile uint_io8_t*)0xB7E003F9)  /*@bfbba@*/

#define ADC12B0_CHCTRL32	(ADC12B0.unCHCTRL32.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL32_ANIN	(ADC12B0.unCHCTRL32.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL32_TRGTYP	(ADC12B0.unCHCTRL32.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL32_CHPRI	(ADC12B0.unCHCTRL32.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL32_RSMRST	(ADC12B0.unCHCTRL32.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL32_DP	(*(volatile uint_io8_t*)0xB7E0040E)  /*@bfbba@*/
#define ADC12B0_CHCTRL32_SMTIME	(ADC12B0.unCHCTRL32.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL32_RCSEL	(ADC12B0.unCHCTRL32.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL32_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00416)  /*@bfbba@*/
#define ADC12B0_CHCTRL32_RCEN	(*(volatile uint_io8_t*)0xB7E00417)  /*@bfbba@*/
#define ADC12B0_CHCTRL32_SWTRG	(*(volatile uint_io8_t*)0xB7E00418)  /*@bfbba@*/
#define ADC12B0_CHCTRL32_TRGCL	(*(volatile uint_io8_t*)0xB7E00419)  /*@bfbba@*/

#define ADC12B0_CHCTRL33	(ADC12B0.unCHCTRL33.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL33_ANIN	(ADC12B0.unCHCTRL33.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL33_TRGTYP	(ADC12B0.unCHCTRL33.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL33_CHPRI	(ADC12B0.unCHCTRL33.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL33_RSMRST	(ADC12B0.unCHCTRL33.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL33_DP	(*(volatile uint_io8_t*)0xB7E0042E)  /*@bfbba@*/
#define ADC12B0_CHCTRL33_SMTIME	(ADC12B0.unCHCTRL33.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL33_RCSEL	(ADC12B0.unCHCTRL33.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL33_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00436)  /*@bfbba@*/
#define ADC12B0_CHCTRL33_RCEN	(*(volatile uint_io8_t*)0xB7E00437)  /*@bfbba@*/
#define ADC12B0_CHCTRL33_SWTRG	(*(volatile uint_io8_t*)0xB7E00438)  /*@bfbba@*/
#define ADC12B0_CHCTRL33_TRGCL	(*(volatile uint_io8_t*)0xB7E00439)  /*@bfbba@*/

#define ADC12B0_CHCTRL34	(ADC12B0.unCHCTRL34.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL34_ANIN	(ADC12B0.unCHCTRL34.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL34_TRGTYP	(ADC12B0.unCHCTRL34.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL34_CHPRI	(ADC12B0.unCHCTRL34.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL34_RSMRST	(ADC12B0.unCHCTRL34.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL34_DP	(*(volatile uint_io8_t*)0xB7E0044E)  /*@bfbba@*/
#define ADC12B0_CHCTRL34_SMTIME	(ADC12B0.unCHCTRL34.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL34_RCSEL	(ADC12B0.unCHCTRL34.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL34_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00456)  /*@bfbba@*/
#define ADC12B0_CHCTRL34_RCEN	(*(volatile uint_io8_t*)0xB7E00457)  /*@bfbba@*/
#define ADC12B0_CHCTRL34_SWTRG	(*(volatile uint_io8_t*)0xB7E00458)  /*@bfbba@*/
#define ADC12B0_CHCTRL34_TRGCL	(*(volatile uint_io8_t*)0xB7E00459)  /*@bfbba@*/

#define ADC12B0_CHCTRL35	(ADC12B0.unCHCTRL35.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL35_ANIN	(ADC12B0.unCHCTRL35.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL35_TRGTYP	(ADC12B0.unCHCTRL35.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL35_CHPRI	(ADC12B0.unCHCTRL35.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL35_RSMRST	(ADC12B0.unCHCTRL35.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL35_DP	(*(volatile uint_io8_t*)0xB7E0046E)  /*@bfbba@*/
#define ADC12B0_CHCTRL35_SMTIME	(ADC12B0.unCHCTRL35.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL35_RCSEL	(ADC12B0.unCHCTRL35.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL35_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00476)  /*@bfbba@*/
#define ADC12B0_CHCTRL35_RCEN	(*(volatile uint_io8_t*)0xB7E00477)  /*@bfbba@*/
#define ADC12B0_CHCTRL35_SWTRG	(*(volatile uint_io8_t*)0xB7E00478)  /*@bfbba@*/
#define ADC12B0_CHCTRL35_TRGCL	(*(volatile uint_io8_t*)0xB7E00479)  /*@bfbba@*/

#define ADC12B0_CHCTRL36	(ADC12B0.unCHCTRL36.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL36_ANIN	(ADC12B0.unCHCTRL36.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL36_TRGTYP	(ADC12B0.unCHCTRL36.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL36_CHPRI	(ADC12B0.unCHCTRL36.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL36_RSMRST	(ADC12B0.unCHCTRL36.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL36_DP	(*(volatile uint_io8_t*)0xB7E0048E)  /*@bfbba@*/
#define ADC12B0_CHCTRL36_SMTIME	(ADC12B0.unCHCTRL36.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL36_RCSEL	(ADC12B0.unCHCTRL36.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL36_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00496)  /*@bfbba@*/
#define ADC12B0_CHCTRL36_RCEN	(*(volatile uint_io8_t*)0xB7E00497)  /*@bfbba@*/
#define ADC12B0_CHCTRL36_SWTRG	(*(volatile uint_io8_t*)0xB7E00498)  /*@bfbba@*/
#define ADC12B0_CHCTRL36_TRGCL	(*(volatile uint_io8_t*)0xB7E00499)  /*@bfbba@*/

#define ADC12B0_CHCTRL37	(ADC12B0.unCHCTRL37.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL37_ANIN	(ADC12B0.unCHCTRL37.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL37_TRGTYP	(ADC12B0.unCHCTRL37.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL37_CHPRI	(ADC12B0.unCHCTRL37.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL37_RSMRST	(ADC12B0.unCHCTRL37.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL37_DP	(*(volatile uint_io8_t*)0xB7E004AE)  /*@bfbba@*/
#define ADC12B0_CHCTRL37_SMTIME	(ADC12B0.unCHCTRL37.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL37_RCSEL	(ADC12B0.unCHCTRL37.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL37_RCINVSEL	(*(volatile uint_io8_t*)0xB7E004B6)  /*@bfbba@*/
#define ADC12B0_CHCTRL37_RCEN	(*(volatile uint_io8_t*)0xB7E004B7)  /*@bfbba@*/
#define ADC12B0_CHCTRL37_SWTRG	(*(volatile uint_io8_t*)0xB7E004B8)  /*@bfbba@*/
#define ADC12B0_CHCTRL37_TRGCL	(*(volatile uint_io8_t*)0xB7E004B9)  /*@bfbba@*/

#define ADC12B0_CHCTRL38	(ADC12B0.unCHCTRL38.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL38_ANIN	(ADC12B0.unCHCTRL38.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL38_TRGTYP	(ADC12B0.unCHCTRL38.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL38_CHPRI	(ADC12B0.unCHCTRL38.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL38_RSMRST	(ADC12B0.unCHCTRL38.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL38_DP	(*(volatile uint_io8_t*)0xB7E004CE)  /*@bfbba@*/
#define ADC12B0_CHCTRL38_SMTIME	(ADC12B0.unCHCTRL38.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL38_RCSEL	(ADC12B0.unCHCTRL38.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL38_RCINVSEL	(*(volatile uint_io8_t*)0xB7E004D6)  /*@bfbba@*/
#define ADC12B0_CHCTRL38_RCEN	(*(volatile uint_io8_t*)0xB7E004D7)  /*@bfbba@*/
#define ADC12B0_CHCTRL38_SWTRG	(*(volatile uint_io8_t*)0xB7E004D8)  /*@bfbba@*/
#define ADC12B0_CHCTRL38_TRGCL	(*(volatile uint_io8_t*)0xB7E004D9)  /*@bfbba@*/

#define ADC12B0_CHCTRL39	(ADC12B0.unCHCTRL39.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL39_ANIN	(ADC12B0.unCHCTRL39.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL39_TRGTYP	(ADC12B0.unCHCTRL39.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL39_CHPRI	(ADC12B0.unCHCTRL39.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL39_RSMRST	(ADC12B0.unCHCTRL39.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL39_DP	(*(volatile uint_io8_t*)0xB7E004EE)  /*@bfbba@*/
#define ADC12B0_CHCTRL39_SMTIME	(ADC12B0.unCHCTRL39.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL39_RCSEL	(ADC12B0.unCHCTRL39.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL39_RCINVSEL	(*(volatile uint_io8_t*)0xB7E004F6)  /*@bfbba@*/
#define ADC12B0_CHCTRL39_RCEN	(*(volatile uint_io8_t*)0xB7E004F7)  /*@bfbba@*/
#define ADC12B0_CHCTRL39_SWTRG	(*(volatile uint_io8_t*)0xB7E004F8)  /*@bfbba@*/
#define ADC12B0_CHCTRL39_TRGCL	(*(volatile uint_io8_t*)0xB7E004F9)  /*@bfbba@*/

#define ADC12B0_CHCTRL40	(ADC12B0.unCHCTRL40.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL40_ANIN	(ADC12B0.unCHCTRL40.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL40_TRGTYP	(ADC12B0.unCHCTRL40.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL40_CHPRI	(ADC12B0.unCHCTRL40.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL40_RSMRST	(ADC12B0.unCHCTRL40.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL40_DP	(*(volatile uint_io8_t*)0xB7E0050E)  /*@bfbba@*/
#define ADC12B0_CHCTRL40_SMTIME	(ADC12B0.unCHCTRL40.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL40_RCSEL	(ADC12B0.unCHCTRL40.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL40_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00516)  /*@bfbba@*/
#define ADC12B0_CHCTRL40_RCEN	(*(volatile uint_io8_t*)0xB7E00517)  /*@bfbba@*/
#define ADC12B0_CHCTRL40_SWTRG	(*(volatile uint_io8_t*)0xB7E00518)  /*@bfbba@*/
#define ADC12B0_CHCTRL40_TRGCL	(*(volatile uint_io8_t*)0xB7E00519)  /*@bfbba@*/

#define ADC12B0_CHCTRL41	(ADC12B0.unCHCTRL41.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL41_ANIN	(ADC12B0.unCHCTRL41.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL41_TRGTYP	(ADC12B0.unCHCTRL41.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL41_CHPRI	(ADC12B0.unCHCTRL41.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL41_RSMRST	(ADC12B0.unCHCTRL41.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL41_DP	(*(volatile uint_io8_t*)0xB7E0052E)  /*@bfbba@*/
#define ADC12B0_CHCTRL41_SMTIME	(ADC12B0.unCHCTRL41.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL41_RCSEL	(ADC12B0.unCHCTRL41.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL41_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00536)  /*@bfbba@*/
#define ADC12B0_CHCTRL41_RCEN	(*(volatile uint_io8_t*)0xB7E00537)  /*@bfbba@*/
#define ADC12B0_CHCTRL41_SWTRG	(*(volatile uint_io8_t*)0xB7E00538)  /*@bfbba@*/
#define ADC12B0_CHCTRL41_TRGCL	(*(volatile uint_io8_t*)0xB7E00539)  /*@bfbba@*/

#define ADC12B0_CHCTRL42	(ADC12B0.unCHCTRL42.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL42_ANIN	(ADC12B0.unCHCTRL42.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL42_TRGTYP	(ADC12B0.unCHCTRL42.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL42_CHPRI	(ADC12B0.unCHCTRL42.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL42_RSMRST	(ADC12B0.unCHCTRL42.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL42_DP	(*(volatile uint_io8_t*)0xB7E0054E)  /*@bfbba@*/
#define ADC12B0_CHCTRL42_SMTIME	(ADC12B0.unCHCTRL42.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL42_RCSEL	(ADC12B0.unCHCTRL42.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL42_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00556)  /*@bfbba@*/
#define ADC12B0_CHCTRL42_RCEN	(*(volatile uint_io8_t*)0xB7E00557)  /*@bfbba@*/
#define ADC12B0_CHCTRL42_SWTRG	(*(volatile uint_io8_t*)0xB7E00558)  /*@bfbba@*/
#define ADC12B0_CHCTRL42_TRGCL	(*(volatile uint_io8_t*)0xB7E00559)  /*@bfbba@*/

#define ADC12B0_CHCTRL43	(ADC12B0.unCHCTRL43.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL43_ANIN	(ADC12B0.unCHCTRL43.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL43_TRGTYP	(ADC12B0.unCHCTRL43.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL43_CHPRI	(ADC12B0.unCHCTRL43.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL43_RSMRST	(ADC12B0.unCHCTRL43.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL43_DP	(*(volatile uint_io8_t*)0xB7E0056E)  /*@bfbba@*/
#define ADC12B0_CHCTRL43_SMTIME	(ADC12B0.unCHCTRL43.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL43_RCSEL	(ADC12B0.unCHCTRL43.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL43_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00576)  /*@bfbba@*/
#define ADC12B0_CHCTRL43_RCEN	(*(volatile uint_io8_t*)0xB7E00577)  /*@bfbba@*/
#define ADC12B0_CHCTRL43_SWTRG	(*(volatile uint_io8_t*)0xB7E00578)  /*@bfbba@*/
#define ADC12B0_CHCTRL43_TRGCL	(*(volatile uint_io8_t*)0xB7E00579)  /*@bfbba@*/

#define ADC12B0_CHCTRL44	(ADC12B0.unCHCTRL44.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL44_ANIN	(ADC12B0.unCHCTRL44.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL44_TRGTYP	(ADC12B0.unCHCTRL44.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL44_CHPRI	(ADC12B0.unCHCTRL44.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL44_RSMRST	(ADC12B0.unCHCTRL44.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL44_DP	(*(volatile uint_io8_t*)0xB7E0058E)  /*@bfbba@*/
#define ADC12B0_CHCTRL44_SMTIME	(ADC12B0.unCHCTRL44.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL44_RCSEL	(ADC12B0.unCHCTRL44.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL44_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00596)  /*@bfbba@*/
#define ADC12B0_CHCTRL44_RCEN	(*(volatile uint_io8_t*)0xB7E00597)  /*@bfbba@*/
#define ADC12B0_CHCTRL44_SWTRG	(*(volatile uint_io8_t*)0xB7E00598)  /*@bfbba@*/
#define ADC12B0_CHCTRL44_TRGCL	(*(volatile uint_io8_t*)0xB7E00599)  /*@bfbba@*/

#define ADC12B0_CHCTRL45	(ADC12B0.unCHCTRL45.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL45_ANIN	(ADC12B0.unCHCTRL45.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL45_TRGTYP	(ADC12B0.unCHCTRL45.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL45_CHPRI	(ADC12B0.unCHCTRL45.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL45_RSMRST	(ADC12B0.unCHCTRL45.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL45_DP	(*(volatile uint_io8_t*)0xB7E005AE)  /*@bfbba@*/
#define ADC12B0_CHCTRL45_SMTIME	(ADC12B0.unCHCTRL45.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL45_RCSEL	(ADC12B0.unCHCTRL45.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL45_RCINVSEL	(*(volatile uint_io8_t*)0xB7E005B6)  /*@bfbba@*/
#define ADC12B0_CHCTRL45_RCEN	(*(volatile uint_io8_t*)0xB7E005B7)  /*@bfbba@*/
#define ADC12B0_CHCTRL45_SWTRG	(*(volatile uint_io8_t*)0xB7E005B8)  /*@bfbba@*/
#define ADC12B0_CHCTRL45_TRGCL	(*(volatile uint_io8_t*)0xB7E005B9)  /*@bfbba@*/

#define ADC12B0_CHCTRL46	(ADC12B0.unCHCTRL46.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL46_ANIN	(ADC12B0.unCHCTRL46.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL46_TRGTYP	(ADC12B0.unCHCTRL46.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL46_CHPRI	(ADC12B0.unCHCTRL46.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL46_RSMRST	(ADC12B0.unCHCTRL46.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL46_DP	(*(volatile uint_io8_t*)0xB7E005CE)  /*@bfbba@*/
#define ADC12B0_CHCTRL46_SMTIME	(ADC12B0.unCHCTRL46.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL46_RCSEL	(ADC12B0.unCHCTRL46.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL46_RCINVSEL	(*(volatile uint_io8_t*)0xB7E005D6)  /*@bfbba@*/
#define ADC12B0_CHCTRL46_RCEN	(*(volatile uint_io8_t*)0xB7E005D7)  /*@bfbba@*/
#define ADC12B0_CHCTRL46_SWTRG	(*(volatile uint_io8_t*)0xB7E005D8)  /*@bfbba@*/
#define ADC12B0_CHCTRL46_TRGCL	(*(volatile uint_io8_t*)0xB7E005D9)  /*@bfbba@*/

#define ADC12B0_CHCTRL47	(ADC12B0.unCHCTRL47.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL47_ANIN	(ADC12B0.unCHCTRL47.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL47_TRGTYP	(ADC12B0.unCHCTRL47.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL47_CHPRI	(ADC12B0.unCHCTRL47.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL47_RSMRST	(ADC12B0.unCHCTRL47.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL47_DP	(*(volatile uint_io8_t*)0xB7E005EE)  /*@bfbba@*/
#define ADC12B0_CHCTRL47_SMTIME	(ADC12B0.unCHCTRL47.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL47_RCSEL	(ADC12B0.unCHCTRL47.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL47_RCINVSEL	(*(volatile uint_io8_t*)0xB7E005F6)  /*@bfbba@*/
#define ADC12B0_CHCTRL47_RCEN	(*(volatile uint_io8_t*)0xB7E005F7)  /*@bfbba@*/
#define ADC12B0_CHCTRL47_SWTRG	(*(volatile uint_io8_t*)0xB7E005F8)  /*@bfbba@*/
#define ADC12B0_CHCTRL47_TRGCL	(*(volatile uint_io8_t*)0xB7E005F9)  /*@bfbba@*/

#define ADC12B0_CHCTRL48	(ADC12B0.unCHCTRL48.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL48_ANIN	(ADC12B0.unCHCTRL48.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL48_TRGTYP	(ADC12B0.unCHCTRL48.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL48_CHPRI	(ADC12B0.unCHCTRL48.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL48_RSMRST	(ADC12B0.unCHCTRL48.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL48_DP	(*(volatile uint_io8_t*)0xB7E0060E)  /*@bfbba@*/
#define ADC12B0_CHCTRL48_SMTIME	(ADC12B0.unCHCTRL48.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL48_RCSEL	(ADC12B0.unCHCTRL48.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL48_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00616)  /*@bfbba@*/
#define ADC12B0_CHCTRL48_RCEN	(*(volatile uint_io8_t*)0xB7E00617)  /*@bfbba@*/
#define ADC12B0_CHCTRL48_SWTRG	(*(volatile uint_io8_t*)0xB7E00618)  /*@bfbba@*/
#define ADC12B0_CHCTRL48_TRGCL	(*(volatile uint_io8_t*)0xB7E00619)  /*@bfbba@*/

#define ADC12B0_CHCTRL49	(ADC12B0.unCHCTRL49.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL49_ANIN	(ADC12B0.unCHCTRL49.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL49_TRGTYP	(ADC12B0.unCHCTRL49.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL49_CHPRI	(ADC12B0.unCHCTRL49.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL49_RSMRST	(ADC12B0.unCHCTRL49.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL49_DP	(*(volatile uint_io8_t*)0xB7E0062E)  /*@bfbba@*/
#define ADC12B0_CHCTRL49_SMTIME	(ADC12B0.unCHCTRL49.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL49_RCSEL	(ADC12B0.unCHCTRL49.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL49_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00636)  /*@bfbba@*/
#define ADC12B0_CHCTRL49_RCEN	(*(volatile uint_io8_t*)0xB7E00637)  /*@bfbba@*/
#define ADC12B0_CHCTRL49_SWTRG	(*(volatile uint_io8_t*)0xB7E00638)  /*@bfbba@*/
#define ADC12B0_CHCTRL49_TRGCL	(*(volatile uint_io8_t*)0xB7E00639)  /*@bfbba@*/

#define ADC12B0_CHCTRL50	(ADC12B0.unCHCTRL50.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL50_ANIN	(ADC12B0.unCHCTRL50.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL50_TRGTYP	(ADC12B0.unCHCTRL50.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL50_CHPRI	(ADC12B0.unCHCTRL50.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL50_RSMRST	(ADC12B0.unCHCTRL50.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL50_DP	(*(volatile uint_io8_t*)0xB7E0064E)  /*@bfbba@*/
#define ADC12B0_CHCTRL50_SMTIME	(ADC12B0.unCHCTRL50.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL50_RCSEL	(ADC12B0.unCHCTRL50.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL50_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00656)  /*@bfbba@*/
#define ADC12B0_CHCTRL50_RCEN	(*(volatile uint_io8_t*)0xB7E00657)  /*@bfbba@*/
#define ADC12B0_CHCTRL50_SWTRG	(*(volatile uint_io8_t*)0xB7E00658)  /*@bfbba@*/
#define ADC12B0_CHCTRL50_TRGCL	(*(volatile uint_io8_t*)0xB7E00659)  /*@bfbba@*/

#define ADC12B0_CHCTRL51	(ADC12B0.unCHCTRL51.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL51_ANIN	(ADC12B0.unCHCTRL51.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL51_TRGTYP	(ADC12B0.unCHCTRL51.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL51_CHPRI	(ADC12B0.unCHCTRL51.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL51_RSMRST	(ADC12B0.unCHCTRL51.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL51_DP	(*(volatile uint_io8_t*)0xB7E0066E)  /*@bfbba@*/
#define ADC12B0_CHCTRL51_SMTIME	(ADC12B0.unCHCTRL51.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL51_RCSEL	(ADC12B0.unCHCTRL51.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL51_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00676)  /*@bfbba@*/
#define ADC12B0_CHCTRL51_RCEN	(*(volatile uint_io8_t*)0xB7E00677)  /*@bfbba@*/
#define ADC12B0_CHCTRL51_SWTRG	(*(volatile uint_io8_t*)0xB7E00678)  /*@bfbba@*/
#define ADC12B0_CHCTRL51_TRGCL	(*(volatile uint_io8_t*)0xB7E00679)  /*@bfbba@*/

#define ADC12B0_CHCTRL52	(ADC12B0.unCHCTRL52.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL52_ANIN	(ADC12B0.unCHCTRL52.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL52_TRGTYP	(ADC12B0.unCHCTRL52.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL52_CHPRI	(ADC12B0.unCHCTRL52.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL52_RSMRST	(ADC12B0.unCHCTRL52.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL52_DP	(*(volatile uint_io8_t*)0xB7E0068E)  /*@bfbba@*/
#define ADC12B0_CHCTRL52_SMTIME	(ADC12B0.unCHCTRL52.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL52_RCSEL	(ADC12B0.unCHCTRL52.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL52_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00696)  /*@bfbba@*/
#define ADC12B0_CHCTRL52_RCEN	(*(volatile uint_io8_t*)0xB7E00697)  /*@bfbba@*/
#define ADC12B0_CHCTRL52_SWTRG	(*(volatile uint_io8_t*)0xB7E00698)  /*@bfbba@*/
#define ADC12B0_CHCTRL52_TRGCL	(*(volatile uint_io8_t*)0xB7E00699)  /*@bfbba@*/

#define ADC12B0_CHCTRL53	(ADC12B0.unCHCTRL53.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL53_ANIN	(ADC12B0.unCHCTRL53.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL53_TRGTYP	(ADC12B0.unCHCTRL53.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL53_CHPRI	(ADC12B0.unCHCTRL53.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL53_RSMRST	(ADC12B0.unCHCTRL53.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL53_DP	(*(volatile uint_io8_t*)0xB7E006AE)  /*@bfbba@*/
#define ADC12B0_CHCTRL53_SMTIME	(ADC12B0.unCHCTRL53.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL53_RCSEL	(ADC12B0.unCHCTRL53.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL53_RCINVSEL	(*(volatile uint_io8_t*)0xB7E006B6)  /*@bfbba@*/
#define ADC12B0_CHCTRL53_RCEN	(*(volatile uint_io8_t*)0xB7E006B7)  /*@bfbba@*/
#define ADC12B0_CHCTRL53_SWTRG	(*(volatile uint_io8_t*)0xB7E006B8)  /*@bfbba@*/
#define ADC12B0_CHCTRL53_TRGCL	(*(volatile uint_io8_t*)0xB7E006B9)  /*@bfbba@*/

#define ADC12B0_CHCTRL54	(ADC12B0.unCHCTRL54.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL54_ANIN	(ADC12B0.unCHCTRL54.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL54_TRGTYP	(ADC12B0.unCHCTRL54.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL54_CHPRI	(ADC12B0.unCHCTRL54.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL54_RSMRST	(ADC12B0.unCHCTRL54.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL54_DP	(*(volatile uint_io8_t*)0xB7E006CE)  /*@bfbba@*/
#define ADC12B0_CHCTRL54_SMTIME	(ADC12B0.unCHCTRL54.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL54_RCSEL	(ADC12B0.unCHCTRL54.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL54_RCINVSEL	(*(volatile uint_io8_t*)0xB7E006D6)  /*@bfbba@*/
#define ADC12B0_CHCTRL54_RCEN	(*(volatile uint_io8_t*)0xB7E006D7)  /*@bfbba@*/
#define ADC12B0_CHCTRL54_SWTRG	(*(volatile uint_io8_t*)0xB7E006D8)  /*@bfbba@*/
#define ADC12B0_CHCTRL54_TRGCL	(*(volatile uint_io8_t*)0xB7E006D9)  /*@bfbba@*/

#define ADC12B0_CHCTRL55	(ADC12B0.unCHCTRL55.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL55_ANIN	(ADC12B0.unCHCTRL55.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL55_TRGTYP	(ADC12B0.unCHCTRL55.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL55_CHPRI	(ADC12B0.unCHCTRL55.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL55_RSMRST	(ADC12B0.unCHCTRL55.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL55_DP	(*(volatile uint_io8_t*)0xB7E006EE)  /*@bfbba@*/
#define ADC12B0_CHCTRL55_SMTIME	(ADC12B0.unCHCTRL55.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL55_RCSEL	(ADC12B0.unCHCTRL55.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL55_RCINVSEL	(*(volatile uint_io8_t*)0xB7E006F6)  /*@bfbba@*/
#define ADC12B0_CHCTRL55_RCEN	(*(volatile uint_io8_t*)0xB7E006F7)  /*@bfbba@*/
#define ADC12B0_CHCTRL55_SWTRG	(*(volatile uint_io8_t*)0xB7E006F8)  /*@bfbba@*/
#define ADC12B0_CHCTRL55_TRGCL	(*(volatile uint_io8_t*)0xB7E006F9)  /*@bfbba@*/

#define ADC12B0_CHCTRL56	(ADC12B0.unCHCTRL56.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL56_ANIN	(ADC12B0.unCHCTRL56.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL56_TRGTYP	(ADC12B0.unCHCTRL56.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL56_CHPRI	(ADC12B0.unCHCTRL56.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL56_RSMRST	(ADC12B0.unCHCTRL56.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL56_DP	(*(volatile uint_io8_t*)0xB7E0070E)  /*@bfbba@*/
#define ADC12B0_CHCTRL56_SMTIME	(ADC12B0.unCHCTRL56.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL56_RCSEL	(ADC12B0.unCHCTRL56.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL56_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00716)  /*@bfbba@*/
#define ADC12B0_CHCTRL56_RCEN	(*(volatile uint_io8_t*)0xB7E00717)  /*@bfbba@*/
#define ADC12B0_CHCTRL56_SWTRG	(*(volatile uint_io8_t*)0xB7E00718)  /*@bfbba@*/
#define ADC12B0_CHCTRL56_TRGCL	(*(volatile uint_io8_t*)0xB7E00719)  /*@bfbba@*/

#define ADC12B0_CHCTRL57	(ADC12B0.unCHCTRL57.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL57_ANIN	(ADC12B0.unCHCTRL57.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL57_TRGTYP	(ADC12B0.unCHCTRL57.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL57_CHPRI	(ADC12B0.unCHCTRL57.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL57_RSMRST	(ADC12B0.unCHCTRL57.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL57_DP	(*(volatile uint_io8_t*)0xB7E0072E)  /*@bfbba@*/
#define ADC12B0_CHCTRL57_SMTIME	(ADC12B0.unCHCTRL57.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL57_RCSEL	(ADC12B0.unCHCTRL57.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL57_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00736)  /*@bfbba@*/
#define ADC12B0_CHCTRL57_RCEN	(*(volatile uint_io8_t*)0xB7E00737)  /*@bfbba@*/
#define ADC12B0_CHCTRL57_SWTRG	(*(volatile uint_io8_t*)0xB7E00738)  /*@bfbba@*/
#define ADC12B0_CHCTRL57_TRGCL	(*(volatile uint_io8_t*)0xB7E00739)  /*@bfbba@*/

#define ADC12B0_CHCTRL58	(ADC12B0.unCHCTRL58.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL58_ANIN	(ADC12B0.unCHCTRL58.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL58_TRGTYP	(ADC12B0.unCHCTRL58.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL58_CHPRI	(ADC12B0.unCHCTRL58.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL58_RSMRST	(ADC12B0.unCHCTRL58.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL58_DP	(*(volatile uint_io8_t*)0xB7E0074E)  /*@bfbba@*/
#define ADC12B0_CHCTRL58_SMTIME	(ADC12B0.unCHCTRL58.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL58_RCSEL	(ADC12B0.unCHCTRL58.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL58_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00756)  /*@bfbba@*/
#define ADC12B0_CHCTRL58_RCEN	(*(volatile uint_io8_t*)0xB7E00757)  /*@bfbba@*/
#define ADC12B0_CHCTRL58_SWTRG	(*(volatile uint_io8_t*)0xB7E00758)  /*@bfbba@*/
#define ADC12B0_CHCTRL58_TRGCL	(*(volatile uint_io8_t*)0xB7E00759)  /*@bfbba@*/

#define ADC12B0_CHCTRL59	(ADC12B0.unCHCTRL59.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL59_ANIN	(ADC12B0.unCHCTRL59.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL59_TRGTYP	(ADC12B0.unCHCTRL59.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL59_CHPRI	(ADC12B0.unCHCTRL59.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL59_RSMRST	(ADC12B0.unCHCTRL59.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL59_DP	(*(volatile uint_io8_t*)0xB7E0076E)  /*@bfbba@*/
#define ADC12B0_CHCTRL59_SMTIME	(ADC12B0.unCHCTRL59.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL59_RCSEL	(ADC12B0.unCHCTRL59.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL59_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00776)  /*@bfbba@*/
#define ADC12B0_CHCTRL59_RCEN	(*(volatile uint_io8_t*)0xB7E00777)  /*@bfbba@*/
#define ADC12B0_CHCTRL59_SWTRG	(*(volatile uint_io8_t*)0xB7E00778)  /*@bfbba@*/
#define ADC12B0_CHCTRL59_TRGCL	(*(volatile uint_io8_t*)0xB7E00779)  /*@bfbba@*/

#define ADC12B0_CHCTRL60	(ADC12B0.unCHCTRL60.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL60_ANIN	(ADC12B0.unCHCTRL60.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL60_TRGTYP	(ADC12B0.unCHCTRL60.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL60_CHPRI	(ADC12B0.unCHCTRL60.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL60_RSMRST	(ADC12B0.unCHCTRL60.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL60_DP	(*(volatile uint_io8_t*)0xB7E0078E)  /*@bfbba@*/
#define ADC12B0_CHCTRL60_SMTIME	(ADC12B0.unCHCTRL60.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL60_RCSEL	(ADC12B0.unCHCTRL60.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL60_RCINVSEL	(*(volatile uint_io8_t*)0xB7E00796)  /*@bfbba@*/
#define ADC12B0_CHCTRL60_RCEN	(*(volatile uint_io8_t*)0xB7E00797)  /*@bfbba@*/
#define ADC12B0_CHCTRL60_SWTRG	(*(volatile uint_io8_t*)0xB7E00798)  /*@bfbba@*/
#define ADC12B0_CHCTRL60_TRGCL	(*(volatile uint_io8_t*)0xB7E00799)  /*@bfbba@*/

#define ADC12B0_CHCTRL61	(ADC12B0.unCHCTRL61.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL61_ANIN	(ADC12B0.unCHCTRL61.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL61_TRGTYP	(ADC12B0.unCHCTRL61.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL61_CHPRI	(ADC12B0.unCHCTRL61.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL61_RSMRST	(ADC12B0.unCHCTRL61.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL61_DP	(*(volatile uint_io8_t*)0xB7E007AE)  /*@bfbba@*/
#define ADC12B0_CHCTRL61_SMTIME	(ADC12B0.unCHCTRL61.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL61_RCSEL	(ADC12B0.unCHCTRL61.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL61_RCINVSEL	(*(volatile uint_io8_t*)0xB7E007B6)  /*@bfbba@*/
#define ADC12B0_CHCTRL61_RCEN	(*(volatile uint_io8_t*)0xB7E007B7)  /*@bfbba@*/
#define ADC12B0_CHCTRL61_SWTRG	(*(volatile uint_io8_t*)0xB7E007B8)  /*@bfbba@*/
#define ADC12B0_CHCTRL61_TRGCL	(*(volatile uint_io8_t*)0xB7E007B9)  /*@bfbba@*/

#define ADC12B0_CHCTRL62	(ADC12B0.unCHCTRL62.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL62_ANIN	(ADC12B0.unCHCTRL62.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL62_TRGTYP	(ADC12B0.unCHCTRL62.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL62_CHPRI	(ADC12B0.unCHCTRL62.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL62_RSMRST	(ADC12B0.unCHCTRL62.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL62_DP	(*(volatile uint_io8_t*)0xB7E007CE)  /*@bfbba@*/
#define ADC12B0_CHCTRL62_SMTIME	(ADC12B0.unCHCTRL62.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL62_RCSEL	(ADC12B0.unCHCTRL62.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL62_RCINVSEL	(*(volatile uint_io8_t*)0xB7E007D6)  /*@bfbba@*/
#define ADC12B0_CHCTRL62_RCEN	(*(volatile uint_io8_t*)0xB7E007D7)  /*@bfbba@*/
#define ADC12B0_CHCTRL62_SWTRG	(*(volatile uint_io8_t*)0xB7E007D8)  /*@bfbba@*/
#define ADC12B0_CHCTRL62_TRGCL	(*(volatile uint_io8_t*)0xB7E007D9)  /*@bfbba@*/

#define ADC12B0_CHCTRL63	(ADC12B0.unCHCTRL63.u32Register)  /*@rg@*/
#define ADC12B0_CHCTRL63_ANIN	(ADC12B0.unCHCTRL63.stcField.u6ANIN)  /*@bf@*/
#define ADC12B0_CHCTRL63_TRGTYP	(ADC12B0.unCHCTRL63.stcField.u2TRGTYP)  /*@bf@*/
#define ADC12B0_CHCTRL63_CHPRI	(ADC12B0.unCHCTRL63.stcField.u4CHPRI)  /*@bf@*/
#define ADC12B0_CHCTRL63_RSMRST	(ADC12B0.unCHCTRL63.stcField.u2RSMRST)  /*@bf@*/
#define ADC12B0_CHCTRL63_DP	(*(volatile uint_io8_t*)0xB7E007EE)  /*@bfbba@*/
#define ADC12B0_CHCTRL63_SMTIME	(ADC12B0.unCHCTRL63.stcField.u2SMTIME)  /*@bf@*/
#define ADC12B0_CHCTRL63_RCSEL	(ADC12B0.unCHCTRL63.stcField.u3RCSEL)  /*@bf@*/
#define ADC12B0_CHCTRL63_RCINVSEL	(*(volatile uint_io8_t*)0xB7E007F6)  /*@bfbba@*/
#define ADC12B0_CHCTRL63_RCEN	(*(volatile uint_io8_t*)0xB7E007F7)  /*@bfbba@*/
#define ADC12B0_CHCTRL63_SWTRG	(*(volatile uint_io8_t*)0xB7E007F8)  /*@bfbba@*/
#define ADC12B0_CHCTRL63_TRGCL	(*(volatile uint_io8_t*)0xB7E007F9)  /*@bfbba@*/

typedef struct stc_adc12b0_chctrln_field{
    uint_io32_t		u6ANIN:6;
    uint_io32_t		u2TRGTYP:2;
    uint_io32_t		u4CHPRI:4;
    uint_io32_t		u2RSMRST:2;
    uint_io32_t		u1DP:1;
    uint_io32_t		:1;
    uint_io32_t		u2SMTIME:2;
    uint_io32_t		u3RCSEL:3;
    uint_io32_t		:1;
    uint_io32_t		u1RCINVSEL:1;
    uint_io32_t		u1RCEN:1;
    uint_io32_t		u1SWTRG:1;
    uint_io32_t		u1TRGCL:1;
    uint_io32_t		:6;
}stc_adc12b0_chctrln_field_t;

typedef union un_adc12b0_chctrln{
    uint_io32_t		u32Register;
    stc_adc12b0_chctrln_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_chctrln_t;

/* CHSTAT[0-63] */
#define ADC12B0_CHSTAT0	(ADC12B0.unCHSTAT0.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT0_TRGST	(*(volatile uint_io8_t*)0xB7E00800)  /*@bfbba@*/
#define ADC12B0_CHSTAT0_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00801)  /*@bfbba@*/
#define ADC12B0_CHSTAT0_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00802)  /*@bfbba@*/
#define ADC12B0_CHSTAT0_RCIRQ	(*(volatile uint_io8_t*)0xB7E00803)  /*@bfbba@*/
#define ADC12B0_CHSTAT0_PCIRQ	(*(volatile uint_io8_t*)0xB7E00804)  /*@bfbba@*/
#define ADC12B0_CHSTAT0_RCOTF	(*(volatile uint_io8_t*)0xB7E00805)  /*@bfbba@*/

#define ADC12B0_CHSTAT1	(ADC12B0.unCHSTAT1.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT1_TRGST	(*(volatile uint_io8_t*)0xB7E00810)  /*@bfbba@*/
#define ADC12B0_CHSTAT1_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00811)  /*@bfbba@*/
#define ADC12B0_CHSTAT1_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00812)  /*@bfbba@*/
#define ADC12B0_CHSTAT1_RCIRQ	(*(volatile uint_io8_t*)0xB7E00813)  /*@bfbba@*/
#define ADC12B0_CHSTAT1_PCIRQ	(*(volatile uint_io8_t*)0xB7E00814)  /*@bfbba@*/
#define ADC12B0_CHSTAT1_RCOTF	(*(volatile uint_io8_t*)0xB7E00815)  /*@bfbba@*/

#define ADC12B0_CHSTAT2	(ADC12B0.unCHSTAT2.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT2_TRGST	(*(volatile uint_io8_t*)0xB7E00820)  /*@bfbba@*/
#define ADC12B0_CHSTAT2_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00821)  /*@bfbba@*/
#define ADC12B0_CHSTAT2_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00822)  /*@bfbba@*/
#define ADC12B0_CHSTAT2_RCIRQ	(*(volatile uint_io8_t*)0xB7E00823)  /*@bfbba@*/
#define ADC12B0_CHSTAT2_PCIRQ	(*(volatile uint_io8_t*)0xB7E00824)  /*@bfbba@*/
#define ADC12B0_CHSTAT2_RCOTF	(*(volatile uint_io8_t*)0xB7E00825)  /*@bfbba@*/

#define ADC12B0_CHSTAT3	(ADC12B0.unCHSTAT3.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT3_TRGST	(*(volatile uint_io8_t*)0xB7E00830)  /*@bfbba@*/
#define ADC12B0_CHSTAT3_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00831)  /*@bfbba@*/
#define ADC12B0_CHSTAT3_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00832)  /*@bfbba@*/
#define ADC12B0_CHSTAT3_RCIRQ	(*(volatile uint_io8_t*)0xB7E00833)  /*@bfbba@*/
#define ADC12B0_CHSTAT3_PCIRQ	(*(volatile uint_io8_t*)0xB7E00834)  /*@bfbba@*/
#define ADC12B0_CHSTAT3_RCOTF	(*(volatile uint_io8_t*)0xB7E00835)  /*@bfbba@*/

#define ADC12B0_CHSTAT4	(ADC12B0.unCHSTAT4.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT4_TRGST	(*(volatile uint_io8_t*)0xB7E00840)  /*@bfbba@*/
#define ADC12B0_CHSTAT4_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00841)  /*@bfbba@*/
#define ADC12B0_CHSTAT4_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00842)  /*@bfbba@*/
#define ADC12B0_CHSTAT4_RCIRQ	(*(volatile uint_io8_t*)0xB7E00843)  /*@bfbba@*/
#define ADC12B0_CHSTAT4_PCIRQ	(*(volatile uint_io8_t*)0xB7E00844)  /*@bfbba@*/
#define ADC12B0_CHSTAT4_RCOTF	(*(volatile uint_io8_t*)0xB7E00845)  /*@bfbba@*/

#define ADC12B0_CHSTAT5	(ADC12B0.unCHSTAT5.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT5_TRGST	(*(volatile uint_io8_t*)0xB7E00850)  /*@bfbba@*/
#define ADC12B0_CHSTAT5_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00851)  /*@bfbba@*/
#define ADC12B0_CHSTAT5_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00852)  /*@bfbba@*/
#define ADC12B0_CHSTAT5_RCIRQ	(*(volatile uint_io8_t*)0xB7E00853)  /*@bfbba@*/
#define ADC12B0_CHSTAT5_PCIRQ	(*(volatile uint_io8_t*)0xB7E00854)  /*@bfbba@*/
#define ADC12B0_CHSTAT5_RCOTF	(*(volatile uint_io8_t*)0xB7E00855)  /*@bfbba@*/

#define ADC12B0_CHSTAT6	(ADC12B0.unCHSTAT6.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT6_TRGST	(*(volatile uint_io8_t*)0xB7E00860)  /*@bfbba@*/
#define ADC12B0_CHSTAT6_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00861)  /*@bfbba@*/
#define ADC12B0_CHSTAT6_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00862)  /*@bfbba@*/
#define ADC12B0_CHSTAT6_RCIRQ	(*(volatile uint_io8_t*)0xB7E00863)  /*@bfbba@*/
#define ADC12B0_CHSTAT6_PCIRQ	(*(volatile uint_io8_t*)0xB7E00864)  /*@bfbba@*/
#define ADC12B0_CHSTAT6_RCOTF	(*(volatile uint_io8_t*)0xB7E00865)  /*@bfbba@*/

#define ADC12B0_CHSTAT7	(ADC12B0.unCHSTAT7.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT7_TRGST	(*(volatile uint_io8_t*)0xB7E00870)  /*@bfbba@*/
#define ADC12B0_CHSTAT7_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00871)  /*@bfbba@*/
#define ADC12B0_CHSTAT7_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00872)  /*@bfbba@*/
#define ADC12B0_CHSTAT7_RCIRQ	(*(volatile uint_io8_t*)0xB7E00873)  /*@bfbba@*/
#define ADC12B0_CHSTAT7_PCIRQ	(*(volatile uint_io8_t*)0xB7E00874)  /*@bfbba@*/
#define ADC12B0_CHSTAT7_RCOTF	(*(volatile uint_io8_t*)0xB7E00875)  /*@bfbba@*/

#define ADC12B0_CHSTAT8	(ADC12B0.unCHSTAT8.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT8_TRGST	(*(volatile uint_io8_t*)0xB7E00880)  /*@bfbba@*/
#define ADC12B0_CHSTAT8_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00881)  /*@bfbba@*/
#define ADC12B0_CHSTAT8_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00882)  /*@bfbba@*/
#define ADC12B0_CHSTAT8_RCIRQ	(*(volatile uint_io8_t*)0xB7E00883)  /*@bfbba@*/
#define ADC12B0_CHSTAT8_PCIRQ	(*(volatile uint_io8_t*)0xB7E00884)  /*@bfbba@*/
#define ADC12B0_CHSTAT8_RCOTF	(*(volatile uint_io8_t*)0xB7E00885)  /*@bfbba@*/

#define ADC12B0_CHSTAT9	(ADC12B0.unCHSTAT9.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT9_TRGST	(*(volatile uint_io8_t*)0xB7E00890)  /*@bfbba@*/
#define ADC12B0_CHSTAT9_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00891)  /*@bfbba@*/
#define ADC12B0_CHSTAT9_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00892)  /*@bfbba@*/
#define ADC12B0_CHSTAT9_RCIRQ	(*(volatile uint_io8_t*)0xB7E00893)  /*@bfbba@*/
#define ADC12B0_CHSTAT9_PCIRQ	(*(volatile uint_io8_t*)0xB7E00894)  /*@bfbba@*/
#define ADC12B0_CHSTAT9_RCOTF	(*(volatile uint_io8_t*)0xB7E00895)  /*@bfbba@*/

#define ADC12B0_CHSTAT10	(ADC12B0.unCHSTAT10.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT10_TRGST	(*(volatile uint_io8_t*)0xB7E008A0)  /*@bfbba@*/
#define ADC12B0_CHSTAT10_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E008A1)  /*@bfbba@*/
#define ADC12B0_CHSTAT10_GRPIRQ	(*(volatile uint_io8_t*)0xB7E008A2)  /*@bfbba@*/
#define ADC12B0_CHSTAT10_RCIRQ	(*(volatile uint_io8_t*)0xB7E008A3)  /*@bfbba@*/
#define ADC12B0_CHSTAT10_PCIRQ	(*(volatile uint_io8_t*)0xB7E008A4)  /*@bfbba@*/
#define ADC12B0_CHSTAT10_RCOTF	(*(volatile uint_io8_t*)0xB7E008A5)  /*@bfbba@*/

#define ADC12B0_CHSTAT11	(ADC12B0.unCHSTAT11.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT11_TRGST	(*(volatile uint_io8_t*)0xB7E008B0)  /*@bfbba@*/
#define ADC12B0_CHSTAT11_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E008B1)  /*@bfbba@*/
#define ADC12B0_CHSTAT11_GRPIRQ	(*(volatile uint_io8_t*)0xB7E008B2)  /*@bfbba@*/
#define ADC12B0_CHSTAT11_RCIRQ	(*(volatile uint_io8_t*)0xB7E008B3)  /*@bfbba@*/
#define ADC12B0_CHSTAT11_PCIRQ	(*(volatile uint_io8_t*)0xB7E008B4)  /*@bfbba@*/
#define ADC12B0_CHSTAT11_RCOTF	(*(volatile uint_io8_t*)0xB7E008B5)  /*@bfbba@*/

#define ADC12B0_CHSTAT12	(ADC12B0.unCHSTAT12.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT12_TRGST	(*(volatile uint_io8_t*)0xB7E008C0)  /*@bfbba@*/
#define ADC12B0_CHSTAT12_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E008C1)  /*@bfbba@*/
#define ADC12B0_CHSTAT12_GRPIRQ	(*(volatile uint_io8_t*)0xB7E008C2)  /*@bfbba@*/
#define ADC12B0_CHSTAT12_RCIRQ	(*(volatile uint_io8_t*)0xB7E008C3)  /*@bfbba@*/
#define ADC12B0_CHSTAT12_PCIRQ	(*(volatile uint_io8_t*)0xB7E008C4)  /*@bfbba@*/
#define ADC12B0_CHSTAT12_RCOTF	(*(volatile uint_io8_t*)0xB7E008C5)  /*@bfbba@*/

#define ADC12B0_CHSTAT13	(ADC12B0.unCHSTAT13.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT13_TRGST	(*(volatile uint_io8_t*)0xB7E008D0)  /*@bfbba@*/
#define ADC12B0_CHSTAT13_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E008D1)  /*@bfbba@*/
#define ADC12B0_CHSTAT13_GRPIRQ	(*(volatile uint_io8_t*)0xB7E008D2)  /*@bfbba@*/
#define ADC12B0_CHSTAT13_RCIRQ	(*(volatile uint_io8_t*)0xB7E008D3)  /*@bfbba@*/
#define ADC12B0_CHSTAT13_PCIRQ	(*(volatile uint_io8_t*)0xB7E008D4)  /*@bfbba@*/
#define ADC12B0_CHSTAT13_RCOTF	(*(volatile uint_io8_t*)0xB7E008D5)  /*@bfbba@*/

#define ADC12B0_CHSTAT14	(ADC12B0.unCHSTAT14.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT14_TRGST	(*(volatile uint_io8_t*)0xB7E008E0)  /*@bfbba@*/
#define ADC12B0_CHSTAT14_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E008E1)  /*@bfbba@*/
#define ADC12B0_CHSTAT14_GRPIRQ	(*(volatile uint_io8_t*)0xB7E008E2)  /*@bfbba@*/
#define ADC12B0_CHSTAT14_RCIRQ	(*(volatile uint_io8_t*)0xB7E008E3)  /*@bfbba@*/
#define ADC12B0_CHSTAT14_PCIRQ	(*(volatile uint_io8_t*)0xB7E008E4)  /*@bfbba@*/
#define ADC12B0_CHSTAT14_RCOTF	(*(volatile uint_io8_t*)0xB7E008E5)  /*@bfbba@*/

#define ADC12B0_CHSTAT15	(ADC12B0.unCHSTAT15.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT15_TRGST	(*(volatile uint_io8_t*)0xB7E008F0)  /*@bfbba@*/
#define ADC12B0_CHSTAT15_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E008F1)  /*@bfbba@*/
#define ADC12B0_CHSTAT15_GRPIRQ	(*(volatile uint_io8_t*)0xB7E008F2)  /*@bfbba@*/
#define ADC12B0_CHSTAT15_RCIRQ	(*(volatile uint_io8_t*)0xB7E008F3)  /*@bfbba@*/
#define ADC12B0_CHSTAT15_PCIRQ	(*(volatile uint_io8_t*)0xB7E008F4)  /*@bfbba@*/
#define ADC12B0_CHSTAT15_RCOTF	(*(volatile uint_io8_t*)0xB7E008F5)  /*@bfbba@*/

#define ADC12B0_CHSTAT16	(ADC12B0.unCHSTAT16.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT16_TRGST	(*(volatile uint_io8_t*)0xB7E00900)  /*@bfbba@*/
#define ADC12B0_CHSTAT16_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00901)  /*@bfbba@*/
#define ADC12B0_CHSTAT16_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00902)  /*@bfbba@*/
#define ADC12B0_CHSTAT16_RCIRQ	(*(volatile uint_io8_t*)0xB7E00903)  /*@bfbba@*/
#define ADC12B0_CHSTAT16_PCIRQ	(*(volatile uint_io8_t*)0xB7E00904)  /*@bfbba@*/
#define ADC12B0_CHSTAT16_RCOTF	(*(volatile uint_io8_t*)0xB7E00905)  /*@bfbba@*/

#define ADC12B0_CHSTAT17	(ADC12B0.unCHSTAT17.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT17_TRGST	(*(volatile uint_io8_t*)0xB7E00910)  /*@bfbba@*/
#define ADC12B0_CHSTAT17_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00911)  /*@bfbba@*/
#define ADC12B0_CHSTAT17_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00912)  /*@bfbba@*/
#define ADC12B0_CHSTAT17_RCIRQ	(*(volatile uint_io8_t*)0xB7E00913)  /*@bfbba@*/
#define ADC12B0_CHSTAT17_PCIRQ	(*(volatile uint_io8_t*)0xB7E00914)  /*@bfbba@*/
#define ADC12B0_CHSTAT17_RCOTF	(*(volatile uint_io8_t*)0xB7E00915)  /*@bfbba@*/

#define ADC12B0_CHSTAT18	(ADC12B0.unCHSTAT18.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT18_TRGST	(*(volatile uint_io8_t*)0xB7E00920)  /*@bfbba@*/
#define ADC12B0_CHSTAT18_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00921)  /*@bfbba@*/
#define ADC12B0_CHSTAT18_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00922)  /*@bfbba@*/
#define ADC12B0_CHSTAT18_RCIRQ	(*(volatile uint_io8_t*)0xB7E00923)  /*@bfbba@*/
#define ADC12B0_CHSTAT18_PCIRQ	(*(volatile uint_io8_t*)0xB7E00924)  /*@bfbba@*/
#define ADC12B0_CHSTAT18_RCOTF	(*(volatile uint_io8_t*)0xB7E00925)  /*@bfbba@*/

#define ADC12B0_CHSTAT19	(ADC12B0.unCHSTAT19.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT19_TRGST	(*(volatile uint_io8_t*)0xB7E00930)  /*@bfbba@*/
#define ADC12B0_CHSTAT19_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00931)  /*@bfbba@*/
#define ADC12B0_CHSTAT19_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00932)  /*@bfbba@*/
#define ADC12B0_CHSTAT19_RCIRQ	(*(volatile uint_io8_t*)0xB7E00933)  /*@bfbba@*/
#define ADC12B0_CHSTAT19_PCIRQ	(*(volatile uint_io8_t*)0xB7E00934)  /*@bfbba@*/
#define ADC12B0_CHSTAT19_RCOTF	(*(volatile uint_io8_t*)0xB7E00935)  /*@bfbba@*/

#define ADC12B0_CHSTAT20	(ADC12B0.unCHSTAT20.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT20_TRGST	(*(volatile uint_io8_t*)0xB7E00940)  /*@bfbba@*/
#define ADC12B0_CHSTAT20_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00941)  /*@bfbba@*/
#define ADC12B0_CHSTAT20_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00942)  /*@bfbba@*/
#define ADC12B0_CHSTAT20_RCIRQ	(*(volatile uint_io8_t*)0xB7E00943)  /*@bfbba@*/
#define ADC12B0_CHSTAT20_PCIRQ	(*(volatile uint_io8_t*)0xB7E00944)  /*@bfbba@*/
#define ADC12B0_CHSTAT20_RCOTF	(*(volatile uint_io8_t*)0xB7E00945)  /*@bfbba@*/

#define ADC12B0_CHSTAT21	(ADC12B0.unCHSTAT21.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT21_TRGST	(*(volatile uint_io8_t*)0xB7E00950)  /*@bfbba@*/
#define ADC12B0_CHSTAT21_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00951)  /*@bfbba@*/
#define ADC12B0_CHSTAT21_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00952)  /*@bfbba@*/
#define ADC12B0_CHSTAT21_RCIRQ	(*(volatile uint_io8_t*)0xB7E00953)  /*@bfbba@*/
#define ADC12B0_CHSTAT21_PCIRQ	(*(volatile uint_io8_t*)0xB7E00954)  /*@bfbba@*/
#define ADC12B0_CHSTAT21_RCOTF	(*(volatile uint_io8_t*)0xB7E00955)  /*@bfbba@*/

#define ADC12B0_CHSTAT22	(ADC12B0.unCHSTAT22.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT22_TRGST	(*(volatile uint_io8_t*)0xB7E00960)  /*@bfbba@*/
#define ADC12B0_CHSTAT22_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00961)  /*@bfbba@*/
#define ADC12B0_CHSTAT22_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00962)  /*@bfbba@*/
#define ADC12B0_CHSTAT22_RCIRQ	(*(volatile uint_io8_t*)0xB7E00963)  /*@bfbba@*/
#define ADC12B0_CHSTAT22_PCIRQ	(*(volatile uint_io8_t*)0xB7E00964)  /*@bfbba@*/
#define ADC12B0_CHSTAT22_RCOTF	(*(volatile uint_io8_t*)0xB7E00965)  /*@bfbba@*/

#define ADC12B0_CHSTAT23	(ADC12B0.unCHSTAT23.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT23_TRGST	(*(volatile uint_io8_t*)0xB7E00970)  /*@bfbba@*/
#define ADC12B0_CHSTAT23_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00971)  /*@bfbba@*/
#define ADC12B0_CHSTAT23_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00972)  /*@bfbba@*/
#define ADC12B0_CHSTAT23_RCIRQ	(*(volatile uint_io8_t*)0xB7E00973)  /*@bfbba@*/
#define ADC12B0_CHSTAT23_PCIRQ	(*(volatile uint_io8_t*)0xB7E00974)  /*@bfbba@*/
#define ADC12B0_CHSTAT23_RCOTF	(*(volatile uint_io8_t*)0xB7E00975)  /*@bfbba@*/

#define ADC12B0_CHSTAT24	(ADC12B0.unCHSTAT24.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT24_TRGST	(*(volatile uint_io8_t*)0xB7E00980)  /*@bfbba@*/
#define ADC12B0_CHSTAT24_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00981)  /*@bfbba@*/
#define ADC12B0_CHSTAT24_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00982)  /*@bfbba@*/
#define ADC12B0_CHSTAT24_RCIRQ	(*(volatile uint_io8_t*)0xB7E00983)  /*@bfbba@*/
#define ADC12B0_CHSTAT24_PCIRQ	(*(volatile uint_io8_t*)0xB7E00984)  /*@bfbba@*/
#define ADC12B0_CHSTAT24_RCOTF	(*(volatile uint_io8_t*)0xB7E00985)  /*@bfbba@*/

#define ADC12B0_CHSTAT25	(ADC12B0.unCHSTAT25.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT25_TRGST	(*(volatile uint_io8_t*)0xB7E00990)  /*@bfbba@*/
#define ADC12B0_CHSTAT25_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00991)  /*@bfbba@*/
#define ADC12B0_CHSTAT25_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00992)  /*@bfbba@*/
#define ADC12B0_CHSTAT25_RCIRQ	(*(volatile uint_io8_t*)0xB7E00993)  /*@bfbba@*/
#define ADC12B0_CHSTAT25_PCIRQ	(*(volatile uint_io8_t*)0xB7E00994)  /*@bfbba@*/
#define ADC12B0_CHSTAT25_RCOTF	(*(volatile uint_io8_t*)0xB7E00995)  /*@bfbba@*/

#define ADC12B0_CHSTAT26	(ADC12B0.unCHSTAT26.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT26_TRGST	(*(volatile uint_io8_t*)0xB7E009A0)  /*@bfbba@*/
#define ADC12B0_CHSTAT26_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E009A1)  /*@bfbba@*/
#define ADC12B0_CHSTAT26_GRPIRQ	(*(volatile uint_io8_t*)0xB7E009A2)  /*@bfbba@*/
#define ADC12B0_CHSTAT26_RCIRQ	(*(volatile uint_io8_t*)0xB7E009A3)  /*@bfbba@*/
#define ADC12B0_CHSTAT26_PCIRQ	(*(volatile uint_io8_t*)0xB7E009A4)  /*@bfbba@*/
#define ADC12B0_CHSTAT26_RCOTF	(*(volatile uint_io8_t*)0xB7E009A5)  /*@bfbba@*/

#define ADC12B0_CHSTAT27	(ADC12B0.unCHSTAT27.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT27_TRGST	(*(volatile uint_io8_t*)0xB7E009B0)  /*@bfbba@*/
#define ADC12B0_CHSTAT27_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E009B1)  /*@bfbba@*/
#define ADC12B0_CHSTAT27_GRPIRQ	(*(volatile uint_io8_t*)0xB7E009B2)  /*@bfbba@*/
#define ADC12B0_CHSTAT27_RCIRQ	(*(volatile uint_io8_t*)0xB7E009B3)  /*@bfbba@*/
#define ADC12B0_CHSTAT27_PCIRQ	(*(volatile uint_io8_t*)0xB7E009B4)  /*@bfbba@*/
#define ADC12B0_CHSTAT27_RCOTF	(*(volatile uint_io8_t*)0xB7E009B5)  /*@bfbba@*/

#define ADC12B0_CHSTAT28	(ADC12B0.unCHSTAT28.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT28_TRGST	(*(volatile uint_io8_t*)0xB7E009C0)  /*@bfbba@*/
#define ADC12B0_CHSTAT28_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E009C1)  /*@bfbba@*/
#define ADC12B0_CHSTAT28_GRPIRQ	(*(volatile uint_io8_t*)0xB7E009C2)  /*@bfbba@*/
#define ADC12B0_CHSTAT28_RCIRQ	(*(volatile uint_io8_t*)0xB7E009C3)  /*@bfbba@*/
#define ADC12B0_CHSTAT28_PCIRQ	(*(volatile uint_io8_t*)0xB7E009C4)  /*@bfbba@*/
#define ADC12B0_CHSTAT28_RCOTF	(*(volatile uint_io8_t*)0xB7E009C5)  /*@bfbba@*/

#define ADC12B0_CHSTAT29	(ADC12B0.unCHSTAT29.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT29_TRGST	(*(volatile uint_io8_t*)0xB7E009D0)  /*@bfbba@*/
#define ADC12B0_CHSTAT29_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E009D1)  /*@bfbba@*/
#define ADC12B0_CHSTAT29_GRPIRQ	(*(volatile uint_io8_t*)0xB7E009D2)  /*@bfbba@*/
#define ADC12B0_CHSTAT29_RCIRQ	(*(volatile uint_io8_t*)0xB7E009D3)  /*@bfbba@*/
#define ADC12B0_CHSTAT29_PCIRQ	(*(volatile uint_io8_t*)0xB7E009D4)  /*@bfbba@*/
#define ADC12B0_CHSTAT29_RCOTF	(*(volatile uint_io8_t*)0xB7E009D5)  /*@bfbba@*/

#define ADC12B0_CHSTAT30	(ADC12B0.unCHSTAT30.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT30_TRGST	(*(volatile uint_io8_t*)0xB7E009E0)  /*@bfbba@*/
#define ADC12B0_CHSTAT30_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E009E1)  /*@bfbba@*/
#define ADC12B0_CHSTAT30_GRPIRQ	(*(volatile uint_io8_t*)0xB7E009E2)  /*@bfbba@*/
#define ADC12B0_CHSTAT30_RCIRQ	(*(volatile uint_io8_t*)0xB7E009E3)  /*@bfbba@*/
#define ADC12B0_CHSTAT30_PCIRQ	(*(volatile uint_io8_t*)0xB7E009E4)  /*@bfbba@*/
#define ADC12B0_CHSTAT30_RCOTF	(*(volatile uint_io8_t*)0xB7E009E5)  /*@bfbba@*/

#define ADC12B0_CHSTAT31	(ADC12B0.unCHSTAT31.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT31_TRGST	(*(volatile uint_io8_t*)0xB7E009F0)  /*@bfbba@*/
#define ADC12B0_CHSTAT31_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E009F1)  /*@bfbba@*/
#define ADC12B0_CHSTAT31_GRPIRQ	(*(volatile uint_io8_t*)0xB7E009F2)  /*@bfbba@*/
#define ADC12B0_CHSTAT31_RCIRQ	(*(volatile uint_io8_t*)0xB7E009F3)  /*@bfbba@*/
#define ADC12B0_CHSTAT31_PCIRQ	(*(volatile uint_io8_t*)0xB7E009F4)  /*@bfbba@*/
#define ADC12B0_CHSTAT31_RCOTF	(*(volatile uint_io8_t*)0xB7E009F5)  /*@bfbba@*/

#define ADC12B0_CHSTAT32	(ADC12B0.unCHSTAT32.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT32_TRGST	(*(volatile uint_io8_t*)0xB7E00A00)  /*@bfbba@*/
#define ADC12B0_CHSTAT32_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A01)  /*@bfbba@*/
#define ADC12B0_CHSTAT32_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A02)  /*@bfbba@*/
#define ADC12B0_CHSTAT32_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A03)  /*@bfbba@*/
#define ADC12B0_CHSTAT32_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A04)  /*@bfbba@*/
#define ADC12B0_CHSTAT32_RCOTF	(*(volatile uint_io8_t*)0xB7E00A05)  /*@bfbba@*/

#define ADC12B0_CHSTAT33	(ADC12B0.unCHSTAT33.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT33_TRGST	(*(volatile uint_io8_t*)0xB7E00A10)  /*@bfbba@*/
#define ADC12B0_CHSTAT33_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A11)  /*@bfbba@*/
#define ADC12B0_CHSTAT33_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A12)  /*@bfbba@*/
#define ADC12B0_CHSTAT33_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A13)  /*@bfbba@*/
#define ADC12B0_CHSTAT33_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A14)  /*@bfbba@*/
#define ADC12B0_CHSTAT33_RCOTF	(*(volatile uint_io8_t*)0xB7E00A15)  /*@bfbba@*/

#define ADC12B0_CHSTAT34	(ADC12B0.unCHSTAT34.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT34_TRGST	(*(volatile uint_io8_t*)0xB7E00A20)  /*@bfbba@*/
#define ADC12B0_CHSTAT34_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A21)  /*@bfbba@*/
#define ADC12B0_CHSTAT34_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A22)  /*@bfbba@*/
#define ADC12B0_CHSTAT34_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A23)  /*@bfbba@*/
#define ADC12B0_CHSTAT34_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A24)  /*@bfbba@*/
#define ADC12B0_CHSTAT34_RCOTF	(*(volatile uint_io8_t*)0xB7E00A25)  /*@bfbba@*/

#define ADC12B0_CHSTAT35	(ADC12B0.unCHSTAT35.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT35_TRGST	(*(volatile uint_io8_t*)0xB7E00A30)  /*@bfbba@*/
#define ADC12B0_CHSTAT35_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A31)  /*@bfbba@*/
#define ADC12B0_CHSTAT35_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A32)  /*@bfbba@*/
#define ADC12B0_CHSTAT35_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A33)  /*@bfbba@*/
#define ADC12B0_CHSTAT35_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A34)  /*@bfbba@*/
#define ADC12B0_CHSTAT35_RCOTF	(*(volatile uint_io8_t*)0xB7E00A35)  /*@bfbba@*/

#define ADC12B0_CHSTAT36	(ADC12B0.unCHSTAT36.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT36_TRGST	(*(volatile uint_io8_t*)0xB7E00A40)  /*@bfbba@*/
#define ADC12B0_CHSTAT36_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A41)  /*@bfbba@*/
#define ADC12B0_CHSTAT36_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A42)  /*@bfbba@*/
#define ADC12B0_CHSTAT36_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A43)  /*@bfbba@*/
#define ADC12B0_CHSTAT36_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A44)  /*@bfbba@*/
#define ADC12B0_CHSTAT36_RCOTF	(*(volatile uint_io8_t*)0xB7E00A45)  /*@bfbba@*/

#define ADC12B0_CHSTAT37	(ADC12B0.unCHSTAT37.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT37_TRGST	(*(volatile uint_io8_t*)0xB7E00A50)  /*@bfbba@*/
#define ADC12B0_CHSTAT37_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A51)  /*@bfbba@*/
#define ADC12B0_CHSTAT37_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A52)  /*@bfbba@*/
#define ADC12B0_CHSTAT37_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A53)  /*@bfbba@*/
#define ADC12B0_CHSTAT37_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A54)  /*@bfbba@*/
#define ADC12B0_CHSTAT37_RCOTF	(*(volatile uint_io8_t*)0xB7E00A55)  /*@bfbba@*/

#define ADC12B0_CHSTAT38	(ADC12B0.unCHSTAT38.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT38_TRGST	(*(volatile uint_io8_t*)0xB7E00A60)  /*@bfbba@*/
#define ADC12B0_CHSTAT38_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A61)  /*@bfbba@*/
#define ADC12B0_CHSTAT38_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A62)  /*@bfbba@*/
#define ADC12B0_CHSTAT38_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A63)  /*@bfbba@*/
#define ADC12B0_CHSTAT38_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A64)  /*@bfbba@*/
#define ADC12B0_CHSTAT38_RCOTF	(*(volatile uint_io8_t*)0xB7E00A65)  /*@bfbba@*/

#define ADC12B0_CHSTAT39	(ADC12B0.unCHSTAT39.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT39_TRGST	(*(volatile uint_io8_t*)0xB7E00A70)  /*@bfbba@*/
#define ADC12B0_CHSTAT39_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A71)  /*@bfbba@*/
#define ADC12B0_CHSTAT39_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A72)  /*@bfbba@*/
#define ADC12B0_CHSTAT39_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A73)  /*@bfbba@*/
#define ADC12B0_CHSTAT39_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A74)  /*@bfbba@*/
#define ADC12B0_CHSTAT39_RCOTF	(*(volatile uint_io8_t*)0xB7E00A75)  /*@bfbba@*/

#define ADC12B0_CHSTAT40	(ADC12B0.unCHSTAT40.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT40_TRGST	(*(volatile uint_io8_t*)0xB7E00A80)  /*@bfbba@*/
#define ADC12B0_CHSTAT40_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A81)  /*@bfbba@*/
#define ADC12B0_CHSTAT40_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A82)  /*@bfbba@*/
#define ADC12B0_CHSTAT40_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A83)  /*@bfbba@*/
#define ADC12B0_CHSTAT40_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A84)  /*@bfbba@*/
#define ADC12B0_CHSTAT40_RCOTF	(*(volatile uint_io8_t*)0xB7E00A85)  /*@bfbba@*/

#define ADC12B0_CHSTAT41	(ADC12B0.unCHSTAT41.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT41_TRGST	(*(volatile uint_io8_t*)0xB7E00A90)  /*@bfbba@*/
#define ADC12B0_CHSTAT41_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00A91)  /*@bfbba@*/
#define ADC12B0_CHSTAT41_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00A92)  /*@bfbba@*/
#define ADC12B0_CHSTAT41_RCIRQ	(*(volatile uint_io8_t*)0xB7E00A93)  /*@bfbba@*/
#define ADC12B0_CHSTAT41_PCIRQ	(*(volatile uint_io8_t*)0xB7E00A94)  /*@bfbba@*/
#define ADC12B0_CHSTAT41_RCOTF	(*(volatile uint_io8_t*)0xB7E00A95)  /*@bfbba@*/

#define ADC12B0_CHSTAT42	(ADC12B0.unCHSTAT42.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT42_TRGST	(*(volatile uint_io8_t*)0xB7E00AA0)  /*@bfbba@*/
#define ADC12B0_CHSTAT42_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00AA1)  /*@bfbba@*/
#define ADC12B0_CHSTAT42_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00AA2)  /*@bfbba@*/
#define ADC12B0_CHSTAT42_RCIRQ	(*(volatile uint_io8_t*)0xB7E00AA3)  /*@bfbba@*/
#define ADC12B0_CHSTAT42_PCIRQ	(*(volatile uint_io8_t*)0xB7E00AA4)  /*@bfbba@*/
#define ADC12B0_CHSTAT42_RCOTF	(*(volatile uint_io8_t*)0xB7E00AA5)  /*@bfbba@*/

#define ADC12B0_CHSTAT43	(ADC12B0.unCHSTAT43.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT43_TRGST	(*(volatile uint_io8_t*)0xB7E00AB0)  /*@bfbba@*/
#define ADC12B0_CHSTAT43_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00AB1)  /*@bfbba@*/
#define ADC12B0_CHSTAT43_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00AB2)  /*@bfbba@*/
#define ADC12B0_CHSTAT43_RCIRQ	(*(volatile uint_io8_t*)0xB7E00AB3)  /*@bfbba@*/
#define ADC12B0_CHSTAT43_PCIRQ	(*(volatile uint_io8_t*)0xB7E00AB4)  /*@bfbba@*/
#define ADC12B0_CHSTAT43_RCOTF	(*(volatile uint_io8_t*)0xB7E00AB5)  /*@bfbba@*/

#define ADC12B0_CHSTAT44	(ADC12B0.unCHSTAT44.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT44_TRGST	(*(volatile uint_io8_t*)0xB7E00AC0)  /*@bfbba@*/
#define ADC12B0_CHSTAT44_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00AC1)  /*@bfbba@*/
#define ADC12B0_CHSTAT44_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00AC2)  /*@bfbba@*/
#define ADC12B0_CHSTAT44_RCIRQ	(*(volatile uint_io8_t*)0xB7E00AC3)  /*@bfbba@*/
#define ADC12B0_CHSTAT44_PCIRQ	(*(volatile uint_io8_t*)0xB7E00AC4)  /*@bfbba@*/
#define ADC12B0_CHSTAT44_RCOTF	(*(volatile uint_io8_t*)0xB7E00AC5)  /*@bfbba@*/

#define ADC12B0_CHSTAT45	(ADC12B0.unCHSTAT45.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT45_TRGST	(*(volatile uint_io8_t*)0xB7E00AD0)  /*@bfbba@*/
#define ADC12B0_CHSTAT45_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00AD1)  /*@bfbba@*/
#define ADC12B0_CHSTAT45_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00AD2)  /*@bfbba@*/
#define ADC12B0_CHSTAT45_RCIRQ	(*(volatile uint_io8_t*)0xB7E00AD3)  /*@bfbba@*/
#define ADC12B0_CHSTAT45_PCIRQ	(*(volatile uint_io8_t*)0xB7E00AD4)  /*@bfbba@*/
#define ADC12B0_CHSTAT45_RCOTF	(*(volatile uint_io8_t*)0xB7E00AD5)  /*@bfbba@*/

#define ADC12B0_CHSTAT46	(ADC12B0.unCHSTAT46.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT46_TRGST	(*(volatile uint_io8_t*)0xB7E00AE0)  /*@bfbba@*/
#define ADC12B0_CHSTAT46_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00AE1)  /*@bfbba@*/
#define ADC12B0_CHSTAT46_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00AE2)  /*@bfbba@*/
#define ADC12B0_CHSTAT46_RCIRQ	(*(volatile uint_io8_t*)0xB7E00AE3)  /*@bfbba@*/
#define ADC12B0_CHSTAT46_PCIRQ	(*(volatile uint_io8_t*)0xB7E00AE4)  /*@bfbba@*/
#define ADC12B0_CHSTAT46_RCOTF	(*(volatile uint_io8_t*)0xB7E00AE5)  /*@bfbba@*/

#define ADC12B0_CHSTAT47	(ADC12B0.unCHSTAT47.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT47_TRGST	(*(volatile uint_io8_t*)0xB7E00AF0)  /*@bfbba@*/
#define ADC12B0_CHSTAT47_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00AF1)  /*@bfbba@*/
#define ADC12B0_CHSTAT47_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00AF2)  /*@bfbba@*/
#define ADC12B0_CHSTAT47_RCIRQ	(*(volatile uint_io8_t*)0xB7E00AF3)  /*@bfbba@*/
#define ADC12B0_CHSTAT47_PCIRQ	(*(volatile uint_io8_t*)0xB7E00AF4)  /*@bfbba@*/
#define ADC12B0_CHSTAT47_RCOTF	(*(volatile uint_io8_t*)0xB7E00AF5)  /*@bfbba@*/

#define ADC12B0_CHSTAT48	(ADC12B0.unCHSTAT48.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT48_TRGST	(*(volatile uint_io8_t*)0xB7E00B00)  /*@bfbba@*/
#define ADC12B0_CHSTAT48_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B01)  /*@bfbba@*/
#define ADC12B0_CHSTAT48_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B02)  /*@bfbba@*/
#define ADC12B0_CHSTAT48_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B03)  /*@bfbba@*/
#define ADC12B0_CHSTAT48_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B04)  /*@bfbba@*/
#define ADC12B0_CHSTAT48_RCOTF	(*(volatile uint_io8_t*)0xB7E00B05)  /*@bfbba@*/

#define ADC12B0_CHSTAT49	(ADC12B0.unCHSTAT49.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT49_TRGST	(*(volatile uint_io8_t*)0xB7E00B10)  /*@bfbba@*/
#define ADC12B0_CHSTAT49_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B11)  /*@bfbba@*/
#define ADC12B0_CHSTAT49_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B12)  /*@bfbba@*/
#define ADC12B0_CHSTAT49_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B13)  /*@bfbba@*/
#define ADC12B0_CHSTAT49_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B14)  /*@bfbba@*/
#define ADC12B0_CHSTAT49_RCOTF	(*(volatile uint_io8_t*)0xB7E00B15)  /*@bfbba@*/

#define ADC12B0_CHSTAT50	(ADC12B0.unCHSTAT50.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT50_TRGST	(*(volatile uint_io8_t*)0xB7E00B20)  /*@bfbba@*/
#define ADC12B0_CHSTAT50_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B21)  /*@bfbba@*/
#define ADC12B0_CHSTAT50_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B22)  /*@bfbba@*/
#define ADC12B0_CHSTAT50_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B23)  /*@bfbba@*/
#define ADC12B0_CHSTAT50_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B24)  /*@bfbba@*/
#define ADC12B0_CHSTAT50_RCOTF	(*(volatile uint_io8_t*)0xB7E00B25)  /*@bfbba@*/

#define ADC12B0_CHSTAT51	(ADC12B0.unCHSTAT51.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT51_TRGST	(*(volatile uint_io8_t*)0xB7E00B30)  /*@bfbba@*/
#define ADC12B0_CHSTAT51_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B31)  /*@bfbba@*/
#define ADC12B0_CHSTAT51_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B32)  /*@bfbba@*/
#define ADC12B0_CHSTAT51_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B33)  /*@bfbba@*/
#define ADC12B0_CHSTAT51_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B34)  /*@bfbba@*/
#define ADC12B0_CHSTAT51_RCOTF	(*(volatile uint_io8_t*)0xB7E00B35)  /*@bfbba@*/

#define ADC12B0_CHSTAT52	(ADC12B0.unCHSTAT52.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT52_TRGST	(*(volatile uint_io8_t*)0xB7E00B40)  /*@bfbba@*/
#define ADC12B0_CHSTAT52_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B41)  /*@bfbba@*/
#define ADC12B0_CHSTAT52_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B42)  /*@bfbba@*/
#define ADC12B0_CHSTAT52_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B43)  /*@bfbba@*/
#define ADC12B0_CHSTAT52_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B44)  /*@bfbba@*/
#define ADC12B0_CHSTAT52_RCOTF	(*(volatile uint_io8_t*)0xB7E00B45)  /*@bfbba@*/

#define ADC12B0_CHSTAT53	(ADC12B0.unCHSTAT53.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT53_TRGST	(*(volatile uint_io8_t*)0xB7E00B50)  /*@bfbba@*/
#define ADC12B0_CHSTAT53_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B51)  /*@bfbba@*/
#define ADC12B0_CHSTAT53_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B52)  /*@bfbba@*/
#define ADC12B0_CHSTAT53_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B53)  /*@bfbba@*/
#define ADC12B0_CHSTAT53_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B54)  /*@bfbba@*/
#define ADC12B0_CHSTAT53_RCOTF	(*(volatile uint_io8_t*)0xB7E00B55)  /*@bfbba@*/

#define ADC12B0_CHSTAT54	(ADC12B0.unCHSTAT54.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT54_TRGST	(*(volatile uint_io8_t*)0xB7E00B60)  /*@bfbba@*/
#define ADC12B0_CHSTAT54_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B61)  /*@bfbba@*/
#define ADC12B0_CHSTAT54_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B62)  /*@bfbba@*/
#define ADC12B0_CHSTAT54_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B63)  /*@bfbba@*/
#define ADC12B0_CHSTAT54_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B64)  /*@bfbba@*/
#define ADC12B0_CHSTAT54_RCOTF	(*(volatile uint_io8_t*)0xB7E00B65)  /*@bfbba@*/

#define ADC12B0_CHSTAT55	(ADC12B0.unCHSTAT55.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT55_TRGST	(*(volatile uint_io8_t*)0xB7E00B70)  /*@bfbba@*/
#define ADC12B0_CHSTAT55_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B71)  /*@bfbba@*/
#define ADC12B0_CHSTAT55_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B72)  /*@bfbba@*/
#define ADC12B0_CHSTAT55_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B73)  /*@bfbba@*/
#define ADC12B0_CHSTAT55_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B74)  /*@bfbba@*/
#define ADC12B0_CHSTAT55_RCOTF	(*(volatile uint_io8_t*)0xB7E00B75)  /*@bfbba@*/

#define ADC12B0_CHSTAT56	(ADC12B0.unCHSTAT56.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT56_TRGST	(*(volatile uint_io8_t*)0xB7E00B80)  /*@bfbba@*/
#define ADC12B0_CHSTAT56_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B81)  /*@bfbba@*/
#define ADC12B0_CHSTAT56_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B82)  /*@bfbba@*/
#define ADC12B0_CHSTAT56_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B83)  /*@bfbba@*/
#define ADC12B0_CHSTAT56_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B84)  /*@bfbba@*/
#define ADC12B0_CHSTAT56_RCOTF	(*(volatile uint_io8_t*)0xB7E00B85)  /*@bfbba@*/

#define ADC12B0_CHSTAT57	(ADC12B0.unCHSTAT57.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT57_TRGST	(*(volatile uint_io8_t*)0xB7E00B90)  /*@bfbba@*/
#define ADC12B0_CHSTAT57_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00B91)  /*@bfbba@*/
#define ADC12B0_CHSTAT57_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00B92)  /*@bfbba@*/
#define ADC12B0_CHSTAT57_RCIRQ	(*(volatile uint_io8_t*)0xB7E00B93)  /*@bfbba@*/
#define ADC12B0_CHSTAT57_PCIRQ	(*(volatile uint_io8_t*)0xB7E00B94)  /*@bfbba@*/
#define ADC12B0_CHSTAT57_RCOTF	(*(volatile uint_io8_t*)0xB7E00B95)  /*@bfbba@*/

#define ADC12B0_CHSTAT58	(ADC12B0.unCHSTAT58.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT58_TRGST	(*(volatile uint_io8_t*)0xB7E00BA0)  /*@bfbba@*/
#define ADC12B0_CHSTAT58_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00BA1)  /*@bfbba@*/
#define ADC12B0_CHSTAT58_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00BA2)  /*@bfbba@*/
#define ADC12B0_CHSTAT58_RCIRQ	(*(volatile uint_io8_t*)0xB7E00BA3)  /*@bfbba@*/
#define ADC12B0_CHSTAT58_PCIRQ	(*(volatile uint_io8_t*)0xB7E00BA4)  /*@bfbba@*/
#define ADC12B0_CHSTAT58_RCOTF	(*(volatile uint_io8_t*)0xB7E00BA5)  /*@bfbba@*/

#define ADC12B0_CHSTAT59	(ADC12B0.unCHSTAT59.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT59_TRGST	(*(volatile uint_io8_t*)0xB7E00BB0)  /*@bfbba@*/
#define ADC12B0_CHSTAT59_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00BB1)  /*@bfbba@*/
#define ADC12B0_CHSTAT59_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00BB2)  /*@bfbba@*/
#define ADC12B0_CHSTAT59_RCIRQ	(*(volatile uint_io8_t*)0xB7E00BB3)  /*@bfbba@*/
#define ADC12B0_CHSTAT59_PCIRQ	(*(volatile uint_io8_t*)0xB7E00BB4)  /*@bfbba@*/
#define ADC12B0_CHSTAT59_RCOTF	(*(volatile uint_io8_t*)0xB7E00BB5)  /*@bfbba@*/

#define ADC12B0_CHSTAT60	(ADC12B0.unCHSTAT60.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT60_TRGST	(*(volatile uint_io8_t*)0xB7E00BC0)  /*@bfbba@*/
#define ADC12B0_CHSTAT60_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00BC1)  /*@bfbba@*/
#define ADC12B0_CHSTAT60_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00BC2)  /*@bfbba@*/
#define ADC12B0_CHSTAT60_RCIRQ	(*(volatile uint_io8_t*)0xB7E00BC3)  /*@bfbba@*/
#define ADC12B0_CHSTAT60_PCIRQ	(*(volatile uint_io8_t*)0xB7E00BC4)  /*@bfbba@*/
#define ADC12B0_CHSTAT60_RCOTF	(*(volatile uint_io8_t*)0xB7E00BC5)  /*@bfbba@*/

#define ADC12B0_CHSTAT61	(ADC12B0.unCHSTAT61.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT61_TRGST	(*(volatile uint_io8_t*)0xB7E00BD0)  /*@bfbba@*/
#define ADC12B0_CHSTAT61_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00BD1)  /*@bfbba@*/
#define ADC12B0_CHSTAT61_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00BD2)  /*@bfbba@*/
#define ADC12B0_CHSTAT61_RCIRQ	(*(volatile uint_io8_t*)0xB7E00BD3)  /*@bfbba@*/
#define ADC12B0_CHSTAT61_PCIRQ	(*(volatile uint_io8_t*)0xB7E00BD4)  /*@bfbba@*/
#define ADC12B0_CHSTAT61_RCOTF	(*(volatile uint_io8_t*)0xB7E00BD5)  /*@bfbba@*/

#define ADC12B0_CHSTAT62	(ADC12B0.unCHSTAT62.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT62_TRGST	(*(volatile uint_io8_t*)0xB7E00BE0)  /*@bfbba@*/
#define ADC12B0_CHSTAT62_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00BE1)  /*@bfbba@*/
#define ADC12B0_CHSTAT62_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00BE2)  /*@bfbba@*/
#define ADC12B0_CHSTAT62_RCIRQ	(*(volatile uint_io8_t*)0xB7E00BE3)  /*@bfbba@*/
#define ADC12B0_CHSTAT62_PCIRQ	(*(volatile uint_io8_t*)0xB7E00BE4)  /*@bfbba@*/
#define ADC12B0_CHSTAT62_RCOTF	(*(volatile uint_io8_t*)0xB7E00BE5)  /*@bfbba@*/

#define ADC12B0_CHSTAT63	(ADC12B0.unCHSTAT63.u16Register)  /*@rg@*/
#define ADC12B0_CHSTAT63_TRGST	(*(volatile uint_io8_t*)0xB7E00BF0)  /*@bfbba@*/
#define ADC12B0_CHSTAT63_CDONEIRQ	(*(volatile uint_io8_t*)0xB7E00BF1)  /*@bfbba@*/
#define ADC12B0_CHSTAT63_GRPIRQ	(*(volatile uint_io8_t*)0xB7E00BF2)  /*@bfbba@*/
#define ADC12B0_CHSTAT63_RCIRQ	(*(volatile uint_io8_t*)0xB7E00BF3)  /*@bfbba@*/
#define ADC12B0_CHSTAT63_PCIRQ	(*(volatile uint_io8_t*)0xB7E00BF4)  /*@bfbba@*/
#define ADC12B0_CHSTAT63_RCOTF	(*(volatile uint_io8_t*)0xB7E00BF5)  /*@bfbba@*/

typedef struct stc_adc12b0_chstatn_field{
    uint_io16_t		u1TRGST:1;
    uint_io16_t		u1CDONEIRQ:1;
    uint_io16_t		u1GRPIRQ:1;
    uint_io16_t		u1RCIRQ:1;
    uint_io16_t		u1PCIRQ:1;
    uint_io16_t		u1RCOTF:1;
    uint_io16_t		:10;
}stc_adc12b0_chstatn_field_t;

typedef union un_adc12b0_chstatn{
    uint_io16_t		u16Register;
    stc_adc12b0_chstatn_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_chstatn_t;

/* CD[0-3] */
#define ADC12B0_CD0	(ADC12B0.unCD0.u16Register)  /*@rg@*/
#define ADC12B0_CD0_D	ADC12B0_CD0  /*@bfrg@*/

#define ADC12B0_CD1	(ADC12B0.unCD1.u16Register)  /*@rg@*/
#define ADC12B0_CD1_D	ADC12B0_CD1  /*@bfrg@*/

#define ADC12B0_CD2	(ADC12B0.unCD2.u16Register)  /*@rg@*/
#define ADC12B0_CD2_D	ADC12B0_CD2  /*@bfrg@*/

#define ADC12B0_CD3	(ADC12B0.unCD3.u16Register)  /*@rg@*/
#define ADC12B0_CD3_D	ADC12B0_CD3  /*@bfrg@*/

typedef union un_adc12b0_cdn{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_adc12b0_cdn_t;

/* CD[4-63] */
#define ADC12B0_CD4	(ADC12B0.unCD4.u16Register)  /*@rg@*/
#define ADC12B0_CD4_D	(ADC12B0.unCD4.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD5	(ADC12B0.unCD5.u16Register)  /*@rg@*/
#define ADC12B0_CD5_D	(ADC12B0.unCD5.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD6	(ADC12B0.unCD6.u16Register)  /*@rg@*/
#define ADC12B0_CD6_D	(ADC12B0.unCD6.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD7	(ADC12B0.unCD7.u16Register)  /*@rg@*/
#define ADC12B0_CD7_D	(ADC12B0.unCD7.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD8	(ADC12B0.unCD8.u16Register)  /*@rg@*/
#define ADC12B0_CD8_D	(ADC12B0.unCD8.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD9	(ADC12B0.unCD9.u16Register)  /*@rg@*/
#define ADC12B0_CD9_D	(ADC12B0.unCD9.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD10	(ADC12B0.unCD10.u16Register)  /*@rg@*/
#define ADC12B0_CD10_D	(ADC12B0.unCD10.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD11	(ADC12B0.unCD11.u16Register)  /*@rg@*/
#define ADC12B0_CD11_D	(ADC12B0.unCD11.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD12	(ADC12B0.unCD12.u16Register)  /*@rg@*/
#define ADC12B0_CD12_D	(ADC12B0.unCD12.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD13	(ADC12B0.unCD13.u16Register)  /*@rg@*/
#define ADC12B0_CD13_D	(ADC12B0.unCD13.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD14	(ADC12B0.unCD14.u16Register)  /*@rg@*/
#define ADC12B0_CD14_D	(ADC12B0.unCD14.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD15	(ADC12B0.unCD15.u16Register)  /*@rg@*/
#define ADC12B0_CD15_D	(ADC12B0.unCD15.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD16	(ADC12B0.unCD16.u16Register)  /*@rg@*/
#define ADC12B0_CD16_D	(ADC12B0.unCD16.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD17	(ADC12B0.unCD17.u16Register)  /*@rg@*/
#define ADC12B0_CD17_D	(ADC12B0.unCD17.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD18	(ADC12B0.unCD18.u16Register)  /*@rg@*/
#define ADC12B0_CD18_D	(ADC12B0.unCD18.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD19	(ADC12B0.unCD19.u16Register)  /*@rg@*/
#define ADC12B0_CD19_D	(ADC12B0.unCD19.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD20	(ADC12B0.unCD20.u16Register)  /*@rg@*/
#define ADC12B0_CD20_D	(ADC12B0.unCD20.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD21	(ADC12B0.unCD21.u16Register)  /*@rg@*/
#define ADC12B0_CD21_D	(ADC12B0.unCD21.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD22	(ADC12B0.unCD22.u16Register)  /*@rg@*/
#define ADC12B0_CD22_D	(ADC12B0.unCD22.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD23	(ADC12B0.unCD23.u16Register)  /*@rg@*/
#define ADC12B0_CD23_D	(ADC12B0.unCD23.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD24	(ADC12B0.unCD24.u16Register)  /*@rg@*/
#define ADC12B0_CD24_D	(ADC12B0.unCD24.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD25	(ADC12B0.unCD25.u16Register)  /*@rg@*/
#define ADC12B0_CD25_D	(ADC12B0.unCD25.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD26	(ADC12B0.unCD26.u16Register)  /*@rg@*/
#define ADC12B0_CD26_D	(ADC12B0.unCD26.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD27	(ADC12B0.unCD27.u16Register)  /*@rg@*/
#define ADC12B0_CD27_D	(ADC12B0.unCD27.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD28	(ADC12B0.unCD28.u16Register)  /*@rg@*/
#define ADC12B0_CD28_D	(ADC12B0.unCD28.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD29	(ADC12B0.unCD29.u16Register)  /*@rg@*/
#define ADC12B0_CD29_D	(ADC12B0.unCD29.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD30	(ADC12B0.unCD30.u16Register)  /*@rg@*/
#define ADC12B0_CD30_D	(ADC12B0.unCD30.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD31	(ADC12B0.unCD31.u16Register)  /*@rg@*/
#define ADC12B0_CD31_D	(ADC12B0.unCD31.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD32	(ADC12B0.unCD32.u16Register)  /*@rg@*/
#define ADC12B0_CD32_D	(ADC12B0.unCD32.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD33	(ADC12B0.unCD33.u16Register)  /*@rg@*/
#define ADC12B0_CD33_D	(ADC12B0.unCD33.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD34	(ADC12B0.unCD34.u16Register)  /*@rg@*/
#define ADC12B0_CD34_D	(ADC12B0.unCD34.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD35	(ADC12B0.unCD35.u16Register)  /*@rg@*/
#define ADC12B0_CD35_D	(ADC12B0.unCD35.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD36	(ADC12B0.unCD36.u16Register)  /*@rg@*/
#define ADC12B0_CD36_D	(ADC12B0.unCD36.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD37	(ADC12B0.unCD37.u16Register)  /*@rg@*/
#define ADC12B0_CD37_D	(ADC12B0.unCD37.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD38	(ADC12B0.unCD38.u16Register)  /*@rg@*/
#define ADC12B0_CD38_D	(ADC12B0.unCD38.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD39	(ADC12B0.unCD39.u16Register)  /*@rg@*/
#define ADC12B0_CD39_D	(ADC12B0.unCD39.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD40	(ADC12B0.unCD40.u16Register)  /*@rg@*/
#define ADC12B0_CD40_D	(ADC12B0.unCD40.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD41	(ADC12B0.unCD41.u16Register)  /*@rg@*/
#define ADC12B0_CD41_D	(ADC12B0.unCD41.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD42	(ADC12B0.unCD42.u16Register)  /*@rg@*/
#define ADC12B0_CD42_D	(ADC12B0.unCD42.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD43	(ADC12B0.unCD43.u16Register)  /*@rg@*/
#define ADC12B0_CD43_D	(ADC12B0.unCD43.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD44	(ADC12B0.unCD44.u16Register)  /*@rg@*/
#define ADC12B0_CD44_D	(ADC12B0.unCD44.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD45	(ADC12B0.unCD45.u16Register)  /*@rg@*/
#define ADC12B0_CD45_D	(ADC12B0.unCD45.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD46	(ADC12B0.unCD46.u16Register)  /*@rg@*/
#define ADC12B0_CD46_D	(ADC12B0.unCD46.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD47	(ADC12B0.unCD47.u16Register)  /*@rg@*/
#define ADC12B0_CD47_D	(ADC12B0.unCD47.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD48	(ADC12B0.unCD48.u16Register)  /*@rg@*/
#define ADC12B0_CD48_D	(ADC12B0.unCD48.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD49	(ADC12B0.unCD49.u16Register)  /*@rg@*/
#define ADC12B0_CD49_D	(ADC12B0.unCD49.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD50	(ADC12B0.unCD50.u16Register)  /*@rg@*/
#define ADC12B0_CD50_D	(ADC12B0.unCD50.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD51	(ADC12B0.unCD51.u16Register)  /*@rg@*/
#define ADC12B0_CD51_D	(ADC12B0.unCD51.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD52	(ADC12B0.unCD52.u16Register)  /*@rg@*/
#define ADC12B0_CD52_D	(ADC12B0.unCD52.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD53	(ADC12B0.unCD53.u16Register)  /*@rg@*/
#define ADC12B0_CD53_D	(ADC12B0.unCD53.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD54	(ADC12B0.unCD54.u16Register)  /*@rg@*/
#define ADC12B0_CD54_D	(ADC12B0.unCD54.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD55	(ADC12B0.unCD55.u16Register)  /*@rg@*/
#define ADC12B0_CD55_D	(ADC12B0.unCD55.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD56	(ADC12B0.unCD56.u16Register)  /*@rg@*/
#define ADC12B0_CD56_D	(ADC12B0.unCD56.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD57	(ADC12B0.unCD57.u16Register)  /*@rg@*/
#define ADC12B0_CD57_D	(ADC12B0.unCD57.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD58	(ADC12B0.unCD58.u16Register)  /*@rg@*/
#define ADC12B0_CD58_D	(ADC12B0.unCD58.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD59	(ADC12B0.unCD59.u16Register)  /*@rg@*/
#define ADC12B0_CD59_D	(ADC12B0.unCD59.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD60	(ADC12B0.unCD60.u16Register)  /*@rg@*/
#define ADC12B0_CD60_D	(ADC12B0.unCD60.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD61	(ADC12B0.unCD61.u16Register)  /*@rg@*/
#define ADC12B0_CD61_D	(ADC12B0.unCD61.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD62	(ADC12B0.unCD62.u16Register)  /*@rg@*/
#define ADC12B0_CD62_D	(ADC12B0.unCD62.stcField.u12D)  /*@bf@*/

#define ADC12B0_CD63	(ADC12B0.unCD63.u16Register)  /*@rg@*/
#define ADC12B0_CD63_D	(ADC12B0.unCD63.stcField.u12D)  /*@bf@*/

typedef struct stc_adc12b0_cdn_1_field{
    uint_io16_t		u12D:12;
    uint_io16_t		:4;
}stc_adc12b0_cdn_1_field_t;

typedef union un_adc12b0_cdn_1{
    uint_io16_t		u16Register;
    stc_adc12b0_cdn_1_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_cdn_1_t;

/* PCCTRL[0-63] */
#define ADC12B0_PCCTRL0	(ADC12B0.unPCCTRL0.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL0_PCTPRL	(ADC12B0.unPCCTRL0.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL0_PCTPCT	(ADC12B0.unPCCTRL0.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL0_PCTNRL	(ADC12B0.unPCCTRL0.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL0_PCTNCT	(ADC12B0.unPCCTRL0.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL1	(ADC12B0.unPCCTRL1.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL1_PCTPRL	(ADC12B0.unPCCTRL1.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL1_PCTPCT	(ADC12B0.unPCCTRL1.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL1_PCTNRL	(ADC12B0.unPCCTRL1.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL1_PCTNCT	(ADC12B0.unPCCTRL1.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL2	(ADC12B0.unPCCTRL2.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL2_PCTPRL	(ADC12B0.unPCCTRL2.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL2_PCTPCT	(ADC12B0.unPCCTRL2.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL2_PCTNRL	(ADC12B0.unPCCTRL2.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL2_PCTNCT	(ADC12B0.unPCCTRL2.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL3	(ADC12B0.unPCCTRL3.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL3_PCTPRL	(ADC12B0.unPCCTRL3.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL3_PCTPCT	(ADC12B0.unPCCTRL3.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL3_PCTNRL	(ADC12B0.unPCCTRL3.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL3_PCTNCT	(ADC12B0.unPCCTRL3.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL4	(ADC12B0.unPCCTRL4.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL4_PCTPRL	(ADC12B0.unPCCTRL4.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL4_PCTPCT	(ADC12B0.unPCCTRL4.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL4_PCTNRL	(ADC12B0.unPCCTRL4.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL4_PCTNCT	(ADC12B0.unPCCTRL4.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL5	(ADC12B0.unPCCTRL5.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL5_PCTPRL	(ADC12B0.unPCCTRL5.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL5_PCTPCT	(ADC12B0.unPCCTRL5.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL5_PCTNRL	(ADC12B0.unPCCTRL5.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL5_PCTNCT	(ADC12B0.unPCCTRL5.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL6	(ADC12B0.unPCCTRL6.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL6_PCTPRL	(ADC12B0.unPCCTRL6.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL6_PCTPCT	(ADC12B0.unPCCTRL6.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL6_PCTNRL	(ADC12B0.unPCCTRL6.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL6_PCTNCT	(ADC12B0.unPCCTRL6.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL7	(ADC12B0.unPCCTRL7.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL7_PCTPRL	(ADC12B0.unPCCTRL7.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL7_PCTPCT	(ADC12B0.unPCCTRL7.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL7_PCTNRL	(ADC12B0.unPCCTRL7.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL7_PCTNCT	(ADC12B0.unPCCTRL7.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL8	(ADC12B0.unPCCTRL8.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL8_PCTPRL	(ADC12B0.unPCCTRL8.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL8_PCTPCT	(ADC12B0.unPCCTRL8.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL8_PCTNRL	(ADC12B0.unPCCTRL8.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL8_PCTNCT	(ADC12B0.unPCCTRL8.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL9	(ADC12B0.unPCCTRL9.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL9_PCTPRL	(ADC12B0.unPCCTRL9.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL9_PCTPCT	(ADC12B0.unPCCTRL9.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL9_PCTNRL	(ADC12B0.unPCCTRL9.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL9_PCTNCT	(ADC12B0.unPCCTRL9.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL10	(ADC12B0.unPCCTRL10.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL10_PCTPRL	(ADC12B0.unPCCTRL10.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL10_PCTPCT	(ADC12B0.unPCCTRL10.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL10_PCTNRL	(ADC12B0.unPCCTRL10.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL10_PCTNCT	(ADC12B0.unPCCTRL10.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL11	(ADC12B0.unPCCTRL11.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL11_PCTPRL	(ADC12B0.unPCCTRL11.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL11_PCTPCT	(ADC12B0.unPCCTRL11.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL11_PCTNRL	(ADC12B0.unPCCTRL11.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL11_PCTNCT	(ADC12B0.unPCCTRL11.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL12	(ADC12B0.unPCCTRL12.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL12_PCTPRL	(ADC12B0.unPCCTRL12.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL12_PCTPCT	(ADC12B0.unPCCTRL12.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL12_PCTNRL	(ADC12B0.unPCCTRL12.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL12_PCTNCT	(ADC12B0.unPCCTRL12.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL13	(ADC12B0.unPCCTRL13.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL13_PCTPRL	(ADC12B0.unPCCTRL13.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL13_PCTPCT	(ADC12B0.unPCCTRL13.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL13_PCTNRL	(ADC12B0.unPCCTRL13.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL13_PCTNCT	(ADC12B0.unPCCTRL13.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL14	(ADC12B0.unPCCTRL14.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL14_PCTPRL	(ADC12B0.unPCCTRL14.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL14_PCTPCT	(ADC12B0.unPCCTRL14.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL14_PCTNRL	(ADC12B0.unPCCTRL14.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL14_PCTNCT	(ADC12B0.unPCCTRL14.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL15	(ADC12B0.unPCCTRL15.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL15_PCTPRL	(ADC12B0.unPCCTRL15.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL15_PCTPCT	(ADC12B0.unPCCTRL15.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL15_PCTNRL	(ADC12B0.unPCCTRL15.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL15_PCTNCT	(ADC12B0.unPCCTRL15.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL16	(ADC12B0.unPCCTRL16.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL16_PCTPRL	(ADC12B0.unPCCTRL16.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL16_PCTPCT	(ADC12B0.unPCCTRL16.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL16_PCTNRL	(ADC12B0.unPCCTRL16.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL16_PCTNCT	(ADC12B0.unPCCTRL16.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL17	(ADC12B0.unPCCTRL17.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL17_PCTPRL	(ADC12B0.unPCCTRL17.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL17_PCTPCT	(ADC12B0.unPCCTRL17.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL17_PCTNRL	(ADC12B0.unPCCTRL17.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL17_PCTNCT	(ADC12B0.unPCCTRL17.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL18	(ADC12B0.unPCCTRL18.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL18_PCTPRL	(ADC12B0.unPCCTRL18.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL18_PCTPCT	(ADC12B0.unPCCTRL18.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL18_PCTNRL	(ADC12B0.unPCCTRL18.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL18_PCTNCT	(ADC12B0.unPCCTRL18.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL19	(ADC12B0.unPCCTRL19.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL19_PCTPRL	(ADC12B0.unPCCTRL19.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL19_PCTPCT	(ADC12B0.unPCCTRL19.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL19_PCTNRL	(ADC12B0.unPCCTRL19.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL19_PCTNCT	(ADC12B0.unPCCTRL19.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL20	(ADC12B0.unPCCTRL20.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL20_PCTPRL	(ADC12B0.unPCCTRL20.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL20_PCTPCT	(ADC12B0.unPCCTRL20.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL20_PCTNRL	(ADC12B0.unPCCTRL20.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL20_PCTNCT	(ADC12B0.unPCCTRL20.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL21	(ADC12B0.unPCCTRL21.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL21_PCTPRL	(ADC12B0.unPCCTRL21.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL21_PCTPCT	(ADC12B0.unPCCTRL21.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL21_PCTNRL	(ADC12B0.unPCCTRL21.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL21_PCTNCT	(ADC12B0.unPCCTRL21.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL22	(ADC12B0.unPCCTRL22.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL22_PCTPRL	(ADC12B0.unPCCTRL22.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL22_PCTPCT	(ADC12B0.unPCCTRL22.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL22_PCTNRL	(ADC12B0.unPCCTRL22.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL22_PCTNCT	(ADC12B0.unPCCTRL22.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL23	(ADC12B0.unPCCTRL23.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL23_PCTPRL	(ADC12B0.unPCCTRL23.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL23_PCTPCT	(ADC12B0.unPCCTRL23.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL23_PCTNRL	(ADC12B0.unPCCTRL23.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL23_PCTNCT	(ADC12B0.unPCCTRL23.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL24	(ADC12B0.unPCCTRL24.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL24_PCTPRL	(ADC12B0.unPCCTRL24.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL24_PCTPCT	(ADC12B0.unPCCTRL24.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL24_PCTNRL	(ADC12B0.unPCCTRL24.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL24_PCTNCT	(ADC12B0.unPCCTRL24.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL25	(ADC12B0.unPCCTRL25.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL25_PCTPRL	(ADC12B0.unPCCTRL25.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL25_PCTPCT	(ADC12B0.unPCCTRL25.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL25_PCTNRL	(ADC12B0.unPCCTRL25.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL25_PCTNCT	(ADC12B0.unPCCTRL25.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL26	(ADC12B0.unPCCTRL26.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL26_PCTPRL	(ADC12B0.unPCCTRL26.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL26_PCTPCT	(ADC12B0.unPCCTRL26.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL26_PCTNRL	(ADC12B0.unPCCTRL26.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL26_PCTNCT	(ADC12B0.unPCCTRL26.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL27	(ADC12B0.unPCCTRL27.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL27_PCTPRL	(ADC12B0.unPCCTRL27.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL27_PCTPCT	(ADC12B0.unPCCTRL27.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL27_PCTNRL	(ADC12B0.unPCCTRL27.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL27_PCTNCT	(ADC12B0.unPCCTRL27.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL28	(ADC12B0.unPCCTRL28.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL28_PCTPRL	(ADC12B0.unPCCTRL28.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL28_PCTPCT	(ADC12B0.unPCCTRL28.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL28_PCTNRL	(ADC12B0.unPCCTRL28.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL28_PCTNCT	(ADC12B0.unPCCTRL28.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL29	(ADC12B0.unPCCTRL29.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL29_PCTPRL	(ADC12B0.unPCCTRL29.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL29_PCTPCT	(ADC12B0.unPCCTRL29.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL29_PCTNRL	(ADC12B0.unPCCTRL29.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL29_PCTNCT	(ADC12B0.unPCCTRL29.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL30	(ADC12B0.unPCCTRL30.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL30_PCTPRL	(ADC12B0.unPCCTRL30.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL30_PCTPCT	(ADC12B0.unPCCTRL30.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL30_PCTNRL	(ADC12B0.unPCCTRL30.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL30_PCTNCT	(ADC12B0.unPCCTRL30.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL31	(ADC12B0.unPCCTRL31.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL31_PCTPRL	(ADC12B0.unPCCTRL31.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL31_PCTPCT	(ADC12B0.unPCCTRL31.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL31_PCTNRL	(ADC12B0.unPCCTRL31.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL31_PCTNCT	(ADC12B0.unPCCTRL31.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL32	(ADC12B0.unPCCTRL32.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL32_PCTPRL	(ADC12B0.unPCCTRL32.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL32_PCTPCT	(ADC12B0.unPCCTRL32.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL32_PCTNRL	(ADC12B0.unPCCTRL32.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL32_PCTNCT	(ADC12B0.unPCCTRL32.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL33	(ADC12B0.unPCCTRL33.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL33_PCTPRL	(ADC12B0.unPCCTRL33.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL33_PCTPCT	(ADC12B0.unPCCTRL33.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL33_PCTNRL	(ADC12B0.unPCCTRL33.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL33_PCTNCT	(ADC12B0.unPCCTRL33.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL34	(ADC12B0.unPCCTRL34.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL34_PCTPRL	(ADC12B0.unPCCTRL34.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL34_PCTPCT	(ADC12B0.unPCCTRL34.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL34_PCTNRL	(ADC12B0.unPCCTRL34.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL34_PCTNCT	(ADC12B0.unPCCTRL34.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL35	(ADC12B0.unPCCTRL35.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL35_PCTPRL	(ADC12B0.unPCCTRL35.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL35_PCTPCT	(ADC12B0.unPCCTRL35.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL35_PCTNRL	(ADC12B0.unPCCTRL35.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL35_PCTNCT	(ADC12B0.unPCCTRL35.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL36	(ADC12B0.unPCCTRL36.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL36_PCTPRL	(ADC12B0.unPCCTRL36.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL36_PCTPCT	(ADC12B0.unPCCTRL36.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL36_PCTNRL	(ADC12B0.unPCCTRL36.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL36_PCTNCT	(ADC12B0.unPCCTRL36.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL37	(ADC12B0.unPCCTRL37.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL37_PCTPRL	(ADC12B0.unPCCTRL37.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL37_PCTPCT	(ADC12B0.unPCCTRL37.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL37_PCTNRL	(ADC12B0.unPCCTRL37.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL37_PCTNCT	(ADC12B0.unPCCTRL37.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL38	(ADC12B0.unPCCTRL38.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL38_PCTPRL	(ADC12B0.unPCCTRL38.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL38_PCTPCT	(ADC12B0.unPCCTRL38.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL38_PCTNRL	(ADC12B0.unPCCTRL38.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL38_PCTNCT	(ADC12B0.unPCCTRL38.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL39	(ADC12B0.unPCCTRL39.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL39_PCTPRL	(ADC12B0.unPCCTRL39.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL39_PCTPCT	(ADC12B0.unPCCTRL39.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL39_PCTNRL	(ADC12B0.unPCCTRL39.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL39_PCTNCT	(ADC12B0.unPCCTRL39.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL40	(ADC12B0.unPCCTRL40.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL40_PCTPRL	(ADC12B0.unPCCTRL40.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL40_PCTPCT	(ADC12B0.unPCCTRL40.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL40_PCTNRL	(ADC12B0.unPCCTRL40.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL40_PCTNCT	(ADC12B0.unPCCTRL40.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL41	(ADC12B0.unPCCTRL41.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL41_PCTPRL	(ADC12B0.unPCCTRL41.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL41_PCTPCT	(ADC12B0.unPCCTRL41.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL41_PCTNRL	(ADC12B0.unPCCTRL41.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL41_PCTNCT	(ADC12B0.unPCCTRL41.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL42	(ADC12B0.unPCCTRL42.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL42_PCTPRL	(ADC12B0.unPCCTRL42.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL42_PCTPCT	(ADC12B0.unPCCTRL42.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL42_PCTNRL	(ADC12B0.unPCCTRL42.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL42_PCTNCT	(ADC12B0.unPCCTRL42.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL43	(ADC12B0.unPCCTRL43.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL43_PCTPRL	(ADC12B0.unPCCTRL43.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL43_PCTPCT	(ADC12B0.unPCCTRL43.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL43_PCTNRL	(ADC12B0.unPCCTRL43.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL43_PCTNCT	(ADC12B0.unPCCTRL43.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL44	(ADC12B0.unPCCTRL44.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL44_PCTPRL	(ADC12B0.unPCCTRL44.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL44_PCTPCT	(ADC12B0.unPCCTRL44.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL44_PCTNRL	(ADC12B0.unPCCTRL44.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL44_PCTNCT	(ADC12B0.unPCCTRL44.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL45	(ADC12B0.unPCCTRL45.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL45_PCTPRL	(ADC12B0.unPCCTRL45.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL45_PCTPCT	(ADC12B0.unPCCTRL45.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL45_PCTNRL	(ADC12B0.unPCCTRL45.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL45_PCTNCT	(ADC12B0.unPCCTRL45.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL46	(ADC12B0.unPCCTRL46.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL46_PCTPRL	(ADC12B0.unPCCTRL46.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL46_PCTPCT	(ADC12B0.unPCCTRL46.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL46_PCTNRL	(ADC12B0.unPCCTRL46.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL46_PCTNCT	(ADC12B0.unPCCTRL46.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL47	(ADC12B0.unPCCTRL47.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL47_PCTPRL	(ADC12B0.unPCCTRL47.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL47_PCTPCT	(ADC12B0.unPCCTRL47.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL47_PCTNRL	(ADC12B0.unPCCTRL47.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL47_PCTNCT	(ADC12B0.unPCCTRL47.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL48	(ADC12B0.unPCCTRL48.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL48_PCTPRL	(ADC12B0.unPCCTRL48.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL48_PCTPCT	(ADC12B0.unPCCTRL48.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL48_PCTNRL	(ADC12B0.unPCCTRL48.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL48_PCTNCT	(ADC12B0.unPCCTRL48.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL49	(ADC12B0.unPCCTRL49.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL49_PCTPRL	(ADC12B0.unPCCTRL49.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL49_PCTPCT	(ADC12B0.unPCCTRL49.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL49_PCTNRL	(ADC12B0.unPCCTRL49.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL49_PCTNCT	(ADC12B0.unPCCTRL49.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL50	(ADC12B0.unPCCTRL50.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL50_PCTPRL	(ADC12B0.unPCCTRL50.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL50_PCTPCT	(ADC12B0.unPCCTRL50.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL50_PCTNRL	(ADC12B0.unPCCTRL50.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL50_PCTNCT	(ADC12B0.unPCCTRL50.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL51	(ADC12B0.unPCCTRL51.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL51_PCTPRL	(ADC12B0.unPCCTRL51.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL51_PCTPCT	(ADC12B0.unPCCTRL51.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL51_PCTNRL	(ADC12B0.unPCCTRL51.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL51_PCTNCT	(ADC12B0.unPCCTRL51.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL52	(ADC12B0.unPCCTRL52.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL52_PCTPRL	(ADC12B0.unPCCTRL52.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL52_PCTPCT	(ADC12B0.unPCCTRL52.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL52_PCTNRL	(ADC12B0.unPCCTRL52.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL52_PCTNCT	(ADC12B0.unPCCTRL52.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL53	(ADC12B0.unPCCTRL53.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL53_PCTPRL	(ADC12B0.unPCCTRL53.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL53_PCTPCT	(ADC12B0.unPCCTRL53.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL53_PCTNRL	(ADC12B0.unPCCTRL53.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL53_PCTNCT	(ADC12B0.unPCCTRL53.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL54	(ADC12B0.unPCCTRL54.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL54_PCTPRL	(ADC12B0.unPCCTRL54.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL54_PCTPCT	(ADC12B0.unPCCTRL54.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL54_PCTNRL	(ADC12B0.unPCCTRL54.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL54_PCTNCT	(ADC12B0.unPCCTRL54.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL55	(ADC12B0.unPCCTRL55.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL55_PCTPRL	(ADC12B0.unPCCTRL55.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL55_PCTPCT	(ADC12B0.unPCCTRL55.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL55_PCTNRL	(ADC12B0.unPCCTRL55.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL55_PCTNCT	(ADC12B0.unPCCTRL55.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL56	(ADC12B0.unPCCTRL56.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL56_PCTPRL	(ADC12B0.unPCCTRL56.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL56_PCTPCT	(ADC12B0.unPCCTRL56.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL56_PCTNRL	(ADC12B0.unPCCTRL56.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL56_PCTNCT	(ADC12B0.unPCCTRL56.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL57	(ADC12B0.unPCCTRL57.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL57_PCTPRL	(ADC12B0.unPCCTRL57.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL57_PCTPCT	(ADC12B0.unPCCTRL57.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL57_PCTNRL	(ADC12B0.unPCCTRL57.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL57_PCTNCT	(ADC12B0.unPCCTRL57.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL58	(ADC12B0.unPCCTRL58.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL58_PCTPRL	(ADC12B0.unPCCTRL58.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL58_PCTPCT	(ADC12B0.unPCCTRL58.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL58_PCTNRL	(ADC12B0.unPCCTRL58.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL58_PCTNCT	(ADC12B0.unPCCTRL58.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL59	(ADC12B0.unPCCTRL59.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL59_PCTPRL	(ADC12B0.unPCCTRL59.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL59_PCTPCT	(ADC12B0.unPCCTRL59.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL59_PCTNRL	(ADC12B0.unPCCTRL59.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL59_PCTNCT	(ADC12B0.unPCCTRL59.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL60	(ADC12B0.unPCCTRL60.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL60_PCTPRL	(ADC12B0.unPCCTRL60.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL60_PCTPCT	(ADC12B0.unPCCTRL60.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL60_PCTNRL	(ADC12B0.unPCCTRL60.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL60_PCTNCT	(ADC12B0.unPCCTRL60.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL61	(ADC12B0.unPCCTRL61.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL61_PCTPRL	(ADC12B0.unPCCTRL61.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL61_PCTPCT	(ADC12B0.unPCCTRL61.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL61_PCTNRL	(ADC12B0.unPCCTRL61.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL61_PCTNCT	(ADC12B0.unPCCTRL61.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL62	(ADC12B0.unPCCTRL62.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL62_PCTPRL	(ADC12B0.unPCCTRL62.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL62_PCTPCT	(ADC12B0.unPCCTRL62.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL62_PCTNRL	(ADC12B0.unPCCTRL62.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL62_PCTNCT	(ADC12B0.unPCCTRL62.stcField.u5PCTNCT)  /*@bf@*/

#define ADC12B0_PCCTRL63	(ADC12B0.unPCCTRL63.u32Register)  /*@rg@*/
#define ADC12B0_PCCTRL63_PCTPRL	(ADC12B0.unPCCTRL63.au8Byte[0])  /*@bfbyte@*/
#define ADC12B0_PCCTRL63_PCTPCT	(ADC12B0.unPCCTRL63.au8Byte[1])  /*@bfbyte@*/
#define ADC12B0_PCCTRL63_PCTNRL	(ADC12B0.unPCCTRL63.stcField.u5PCTNRL)  /*@bf@*/
#define ADC12B0_PCCTRL63_PCTNCT	(ADC12B0.unPCCTRL63.stcField.u5PCTNCT)  /*@bf@*/

typedef struct stc_adc12b0_pcctrln_field{
    uint_io32_t		u8PCTPRL:8;
    uint_io32_t		u8PCTPCT:8;
    uint_io32_t		u5PCTNRL:5;
    uint_io32_t		:3;
    uint_io32_t		u5PCTNCT:5;
    uint_io32_t		:3;
}stc_adc12b0_pcctrln_field_t;

typedef union un_adc12b0_pcctrln{
    uint_io32_t		u32Register;
    stc_adc12b0_pcctrln_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_pcctrln_t;

/* CDONEIRQ0 */
#define ADC12B0_CDONEIRQ0	(ADC12B0.unCDONEIRQ0.u32Register)  /*@rg@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ0	(*(volatile uint_io8_t*)0xB7E01800)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ1	(*(volatile uint_io8_t*)0xB7E01801)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ2	(*(volatile uint_io8_t*)0xB7E01802)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ3	(*(volatile uint_io8_t*)0xB7E01803)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ4	(*(volatile uint_io8_t*)0xB7E01804)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ5	(*(volatile uint_io8_t*)0xB7E01805)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ6	(*(volatile uint_io8_t*)0xB7E01806)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ7	(*(volatile uint_io8_t*)0xB7E01807)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ8	(*(volatile uint_io8_t*)0xB7E01808)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ9	(*(volatile uint_io8_t*)0xB7E01809)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ10	(*(volatile uint_io8_t*)0xB7E0180A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ11	(*(volatile uint_io8_t*)0xB7E0180B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ12	(*(volatile uint_io8_t*)0xB7E0180C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ13	(*(volatile uint_io8_t*)0xB7E0180D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ14	(*(volatile uint_io8_t*)0xB7E0180E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ15	(*(volatile uint_io8_t*)0xB7E0180F)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ16	(*(volatile uint_io8_t*)0xB7E01810)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ17	(*(volatile uint_io8_t*)0xB7E01811)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ18	(*(volatile uint_io8_t*)0xB7E01812)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ19	(*(volatile uint_io8_t*)0xB7E01813)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ20	(*(volatile uint_io8_t*)0xB7E01814)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ21	(*(volatile uint_io8_t*)0xB7E01815)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ22	(*(volatile uint_io8_t*)0xB7E01816)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ23	(*(volatile uint_io8_t*)0xB7E01817)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ24	(*(volatile uint_io8_t*)0xB7E01818)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ25	(*(volatile uint_io8_t*)0xB7E01819)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ26	(*(volatile uint_io8_t*)0xB7E0181A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ27	(*(volatile uint_io8_t*)0xB7E0181B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ28	(*(volatile uint_io8_t*)0xB7E0181C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ29	(*(volatile uint_io8_t*)0xB7E0181D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ30	(*(volatile uint_io8_t*)0xB7E0181E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ0_CDONEIRQ31	(*(volatile uint_io8_t*)0xB7E0181F)  /*@bfbba@*/

typedef struct stc_adc12b0_cdoneirq0_field{
    uint_io32_t		u1CDONEIRQ0:1;
    uint_io32_t		u1CDONEIRQ1:1;
    uint_io32_t		u1CDONEIRQ2:1;
    uint_io32_t		u1CDONEIRQ3:1;
    uint_io32_t		u1CDONEIRQ4:1;
    uint_io32_t		u1CDONEIRQ5:1;
    uint_io32_t		u1CDONEIRQ6:1;
    uint_io32_t		u1CDONEIRQ7:1;
    uint_io32_t		u1CDONEIRQ8:1;
    uint_io32_t		u1CDONEIRQ9:1;
    uint_io32_t		u1CDONEIRQ10:1;
    uint_io32_t		u1CDONEIRQ11:1;
    uint_io32_t		u1CDONEIRQ12:1;
    uint_io32_t		u1CDONEIRQ13:1;
    uint_io32_t		u1CDONEIRQ14:1;
    uint_io32_t		u1CDONEIRQ15:1;
    uint_io32_t		u1CDONEIRQ16:1;
    uint_io32_t		u1CDONEIRQ17:1;
    uint_io32_t		u1CDONEIRQ18:1;
    uint_io32_t		u1CDONEIRQ19:1;
    uint_io32_t		u1CDONEIRQ20:1;
    uint_io32_t		u1CDONEIRQ21:1;
    uint_io32_t		u1CDONEIRQ22:1;
    uint_io32_t		u1CDONEIRQ23:1;
    uint_io32_t		u1CDONEIRQ24:1;
    uint_io32_t		u1CDONEIRQ25:1;
    uint_io32_t		u1CDONEIRQ26:1;
    uint_io32_t		u1CDONEIRQ27:1;
    uint_io32_t		u1CDONEIRQ28:1;
    uint_io32_t		u1CDONEIRQ29:1;
    uint_io32_t		u1CDONEIRQ30:1;
    uint_io32_t		u1CDONEIRQ31:1;
}stc_adc12b0_cdoneirq0_field_t;

typedef union un_adc12b0_cdoneirq0{
    uint_io32_t		u32Register;
    stc_adc12b0_cdoneirq0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_cdoneirq0_t;

/* CDONEIRQ1 */
#define ADC12B0_CDONEIRQ1	(ADC12B0.unCDONEIRQ1.u32Register)  /*@rg@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ32	(*(volatile uint_io8_t*)0xB7E01820)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ33	(*(volatile uint_io8_t*)0xB7E01821)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ34	(*(volatile uint_io8_t*)0xB7E01822)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ35	(*(volatile uint_io8_t*)0xB7E01823)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ36	(*(volatile uint_io8_t*)0xB7E01824)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ37	(*(volatile uint_io8_t*)0xB7E01825)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ38	(*(volatile uint_io8_t*)0xB7E01826)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ39	(*(volatile uint_io8_t*)0xB7E01827)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ40	(*(volatile uint_io8_t*)0xB7E01828)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ41	(*(volatile uint_io8_t*)0xB7E01829)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ42	(*(volatile uint_io8_t*)0xB7E0182A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ43	(*(volatile uint_io8_t*)0xB7E0182B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ44	(*(volatile uint_io8_t*)0xB7E0182C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ45	(*(volatile uint_io8_t*)0xB7E0182D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ46	(*(volatile uint_io8_t*)0xB7E0182E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ47	(*(volatile uint_io8_t*)0xB7E0182F)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ48	(*(volatile uint_io8_t*)0xB7E01830)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ49	(*(volatile uint_io8_t*)0xB7E01831)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ50	(*(volatile uint_io8_t*)0xB7E01832)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ51	(*(volatile uint_io8_t*)0xB7E01833)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ52	(*(volatile uint_io8_t*)0xB7E01834)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ53	(*(volatile uint_io8_t*)0xB7E01835)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ54	(*(volatile uint_io8_t*)0xB7E01836)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ55	(*(volatile uint_io8_t*)0xB7E01837)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ56	(*(volatile uint_io8_t*)0xB7E01838)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ57	(*(volatile uint_io8_t*)0xB7E01839)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ58	(*(volatile uint_io8_t*)0xB7E0183A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ59	(*(volatile uint_io8_t*)0xB7E0183B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ60	(*(volatile uint_io8_t*)0xB7E0183C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ61	(*(volatile uint_io8_t*)0xB7E0183D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ62	(*(volatile uint_io8_t*)0xB7E0183E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQ1_CDONEIRQ63	(*(volatile uint_io8_t*)0xB7E0183F)  /*@bfbba@*/

typedef struct stc_adc12b0_cdoneirq1_field{
    uint_io32_t		u1CDONEIRQ32:1;
    uint_io32_t		u1CDONEIRQ33:1;
    uint_io32_t		u1CDONEIRQ34:1;
    uint_io32_t		u1CDONEIRQ35:1;
    uint_io32_t		u1CDONEIRQ36:1;
    uint_io32_t		u1CDONEIRQ37:1;
    uint_io32_t		u1CDONEIRQ38:1;
    uint_io32_t		u1CDONEIRQ39:1;
    uint_io32_t		u1CDONEIRQ40:1;
    uint_io32_t		u1CDONEIRQ41:1;
    uint_io32_t		u1CDONEIRQ42:1;
    uint_io32_t		u1CDONEIRQ43:1;
    uint_io32_t		u1CDONEIRQ44:1;
    uint_io32_t		u1CDONEIRQ45:1;
    uint_io32_t		u1CDONEIRQ46:1;
    uint_io32_t		u1CDONEIRQ47:1;
    uint_io32_t		u1CDONEIRQ48:1;
    uint_io32_t		u1CDONEIRQ49:1;
    uint_io32_t		u1CDONEIRQ50:1;
    uint_io32_t		u1CDONEIRQ51:1;
    uint_io32_t		u1CDONEIRQ52:1;
    uint_io32_t		u1CDONEIRQ53:1;
    uint_io32_t		u1CDONEIRQ54:1;
    uint_io32_t		u1CDONEIRQ55:1;
    uint_io32_t		u1CDONEIRQ56:1;
    uint_io32_t		u1CDONEIRQ57:1;
    uint_io32_t		u1CDONEIRQ58:1;
    uint_io32_t		u1CDONEIRQ59:1;
    uint_io32_t		u1CDONEIRQ60:1;
    uint_io32_t		u1CDONEIRQ61:1;
    uint_io32_t		u1CDONEIRQ62:1;
    uint_io32_t		u1CDONEIRQ63:1;
}stc_adc12b0_cdoneirq1_field_t;

typedef union un_adc12b0_cdoneirq1{
    uint_io32_t		u32Register;
    stc_adc12b0_cdoneirq1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_cdoneirq1_t;

/* CDONEIRQE0 */
#define ADC12B0_CDONEIRQE0	(ADC12B0.unCDONEIRQE0.u32Register)  /*@rg@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE0	(*(volatile uint_io8_t*)0xB7E01840)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE1	(*(volatile uint_io8_t*)0xB7E01841)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE2	(*(volatile uint_io8_t*)0xB7E01842)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE3	(*(volatile uint_io8_t*)0xB7E01843)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE4	(*(volatile uint_io8_t*)0xB7E01844)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE5	(*(volatile uint_io8_t*)0xB7E01845)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE6	(*(volatile uint_io8_t*)0xB7E01846)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE7	(*(volatile uint_io8_t*)0xB7E01847)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE8	(*(volatile uint_io8_t*)0xB7E01848)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE9	(*(volatile uint_io8_t*)0xB7E01849)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE10	(*(volatile uint_io8_t*)0xB7E0184A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE11	(*(volatile uint_io8_t*)0xB7E0184B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE12	(*(volatile uint_io8_t*)0xB7E0184C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE13	(*(volatile uint_io8_t*)0xB7E0184D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE14	(*(volatile uint_io8_t*)0xB7E0184E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE15	(*(volatile uint_io8_t*)0xB7E0184F)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE16	(*(volatile uint_io8_t*)0xB7E01850)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE17	(*(volatile uint_io8_t*)0xB7E01851)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE18	(*(volatile uint_io8_t*)0xB7E01852)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE19	(*(volatile uint_io8_t*)0xB7E01853)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE20	(*(volatile uint_io8_t*)0xB7E01854)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE21	(*(volatile uint_io8_t*)0xB7E01855)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE22	(*(volatile uint_io8_t*)0xB7E01856)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE23	(*(volatile uint_io8_t*)0xB7E01857)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE24	(*(volatile uint_io8_t*)0xB7E01858)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE25	(*(volatile uint_io8_t*)0xB7E01859)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE26	(*(volatile uint_io8_t*)0xB7E0185A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE27	(*(volatile uint_io8_t*)0xB7E0185B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE28	(*(volatile uint_io8_t*)0xB7E0185C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE29	(*(volatile uint_io8_t*)0xB7E0185D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE30	(*(volatile uint_io8_t*)0xB7E0185E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE0_CDONEIRQE31	(*(volatile uint_io8_t*)0xB7E0185F)  /*@bfbba@*/

typedef struct stc_adc12b0_cdoneirqe0_field{
    uint_io32_t		u1CDONEIRQE0:1;
    uint_io32_t		u1CDONEIRQE1:1;
    uint_io32_t		u1CDONEIRQE2:1;
    uint_io32_t		u1CDONEIRQE3:1;
    uint_io32_t		u1CDONEIRQE4:1;
    uint_io32_t		u1CDONEIRQE5:1;
    uint_io32_t		u1CDONEIRQE6:1;
    uint_io32_t		u1CDONEIRQE7:1;
    uint_io32_t		u1CDONEIRQE8:1;
    uint_io32_t		u1CDONEIRQE9:1;
    uint_io32_t		u1CDONEIRQE10:1;
    uint_io32_t		u1CDONEIRQE11:1;
    uint_io32_t		u1CDONEIRQE12:1;
    uint_io32_t		u1CDONEIRQE13:1;
    uint_io32_t		u1CDONEIRQE14:1;
    uint_io32_t		u1CDONEIRQE15:1;
    uint_io32_t		u1CDONEIRQE16:1;
    uint_io32_t		u1CDONEIRQE17:1;
    uint_io32_t		u1CDONEIRQE18:1;
    uint_io32_t		u1CDONEIRQE19:1;
    uint_io32_t		u1CDONEIRQE20:1;
    uint_io32_t		u1CDONEIRQE21:1;
    uint_io32_t		u1CDONEIRQE22:1;
    uint_io32_t		u1CDONEIRQE23:1;
    uint_io32_t		u1CDONEIRQE24:1;
    uint_io32_t		u1CDONEIRQE25:1;
    uint_io32_t		u1CDONEIRQE26:1;
    uint_io32_t		u1CDONEIRQE27:1;
    uint_io32_t		u1CDONEIRQE28:1;
    uint_io32_t		u1CDONEIRQE29:1;
    uint_io32_t		u1CDONEIRQE30:1;
    uint_io32_t		u1CDONEIRQE31:1;
}stc_adc12b0_cdoneirqe0_field_t;

typedef union un_adc12b0_cdoneirqe0{
    uint_io32_t		u32Register;
    stc_adc12b0_cdoneirqe0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_cdoneirqe0_t;

/* CDONEIRQE1 */
#define ADC12B0_CDONEIRQE1	(ADC12B0.unCDONEIRQE1.u32Register)  /*@rg@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE32	(*(volatile uint_io8_t*)0xB7E01860)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE33	(*(volatile uint_io8_t*)0xB7E01861)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE34	(*(volatile uint_io8_t*)0xB7E01862)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE35	(*(volatile uint_io8_t*)0xB7E01863)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE36	(*(volatile uint_io8_t*)0xB7E01864)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE37	(*(volatile uint_io8_t*)0xB7E01865)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE38	(*(volatile uint_io8_t*)0xB7E01866)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE39	(*(volatile uint_io8_t*)0xB7E01867)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE40	(*(volatile uint_io8_t*)0xB7E01868)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE41	(*(volatile uint_io8_t*)0xB7E01869)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE42	(*(volatile uint_io8_t*)0xB7E0186A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE43	(*(volatile uint_io8_t*)0xB7E0186B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE44	(*(volatile uint_io8_t*)0xB7E0186C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE45	(*(volatile uint_io8_t*)0xB7E0186D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE46	(*(volatile uint_io8_t*)0xB7E0186E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE47	(*(volatile uint_io8_t*)0xB7E0186F)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE48	(*(volatile uint_io8_t*)0xB7E01870)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE49	(*(volatile uint_io8_t*)0xB7E01871)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE50	(*(volatile uint_io8_t*)0xB7E01872)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE51	(*(volatile uint_io8_t*)0xB7E01873)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE52	(*(volatile uint_io8_t*)0xB7E01874)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE53	(*(volatile uint_io8_t*)0xB7E01875)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE54	(*(volatile uint_io8_t*)0xB7E01876)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE55	(*(volatile uint_io8_t*)0xB7E01877)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE56	(*(volatile uint_io8_t*)0xB7E01878)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE57	(*(volatile uint_io8_t*)0xB7E01879)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE58	(*(volatile uint_io8_t*)0xB7E0187A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE59	(*(volatile uint_io8_t*)0xB7E0187B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE60	(*(volatile uint_io8_t*)0xB7E0187C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE61	(*(volatile uint_io8_t*)0xB7E0187D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE62	(*(volatile uint_io8_t*)0xB7E0187E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQE1_CDONEIRQE63	(*(volatile uint_io8_t*)0xB7E0187F)  /*@bfbba@*/

typedef struct stc_adc12b0_cdoneirqe1_field{
    uint_io32_t		u1CDONEIRQE32:1;
    uint_io32_t		u1CDONEIRQE33:1;
    uint_io32_t		u1CDONEIRQE34:1;
    uint_io32_t		u1CDONEIRQE35:1;
    uint_io32_t		u1CDONEIRQE36:1;
    uint_io32_t		u1CDONEIRQE37:1;
    uint_io32_t		u1CDONEIRQE38:1;
    uint_io32_t		u1CDONEIRQE39:1;
    uint_io32_t		u1CDONEIRQE40:1;
    uint_io32_t		u1CDONEIRQE41:1;
    uint_io32_t		u1CDONEIRQE42:1;
    uint_io32_t		u1CDONEIRQE43:1;
    uint_io32_t		u1CDONEIRQE44:1;
    uint_io32_t		u1CDONEIRQE45:1;
    uint_io32_t		u1CDONEIRQE46:1;
    uint_io32_t		u1CDONEIRQE47:1;
    uint_io32_t		u1CDONEIRQE48:1;
    uint_io32_t		u1CDONEIRQE49:1;
    uint_io32_t		u1CDONEIRQE50:1;
    uint_io32_t		u1CDONEIRQE51:1;
    uint_io32_t		u1CDONEIRQE52:1;
    uint_io32_t		u1CDONEIRQE53:1;
    uint_io32_t		u1CDONEIRQE54:1;
    uint_io32_t		u1CDONEIRQE55:1;
    uint_io32_t		u1CDONEIRQE56:1;
    uint_io32_t		u1CDONEIRQE57:1;
    uint_io32_t		u1CDONEIRQE58:1;
    uint_io32_t		u1CDONEIRQE59:1;
    uint_io32_t		u1CDONEIRQE60:1;
    uint_io32_t		u1CDONEIRQE61:1;
    uint_io32_t		u1CDONEIRQE62:1;
    uint_io32_t		u1CDONEIRQE63:1;
}stc_adc12b0_cdoneirqe1_field_t;

typedef union un_adc12b0_cdoneirqe1{
    uint_io32_t		u32Register;
    stc_adc12b0_cdoneirqe1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_cdoneirqe1_t;

/* CDONEIRQC0 */
#define ADC12B0_CDONEIRQC0	(ADC12B0.unCDONEIRQC0.u32Register)  /*@rg@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC0	(*(volatile uint_io8_t*)0xB7E01880)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC1	(*(volatile uint_io8_t*)0xB7E01881)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC2	(*(volatile uint_io8_t*)0xB7E01882)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC3	(*(volatile uint_io8_t*)0xB7E01883)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC4	(*(volatile uint_io8_t*)0xB7E01884)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC5	(*(volatile uint_io8_t*)0xB7E01885)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC6	(*(volatile uint_io8_t*)0xB7E01886)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC7	(*(volatile uint_io8_t*)0xB7E01887)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC8	(*(volatile uint_io8_t*)0xB7E01888)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC9	(*(volatile uint_io8_t*)0xB7E01889)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC10	(*(volatile uint_io8_t*)0xB7E0188A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC11	(*(volatile uint_io8_t*)0xB7E0188B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC12	(*(volatile uint_io8_t*)0xB7E0188C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC13	(*(volatile uint_io8_t*)0xB7E0188D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC14	(*(volatile uint_io8_t*)0xB7E0188E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC15	(*(volatile uint_io8_t*)0xB7E0188F)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC16	(*(volatile uint_io8_t*)0xB7E01890)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC17	(*(volatile uint_io8_t*)0xB7E01891)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC18	(*(volatile uint_io8_t*)0xB7E01892)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC19	(*(volatile uint_io8_t*)0xB7E01893)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC20	(*(volatile uint_io8_t*)0xB7E01894)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC21	(*(volatile uint_io8_t*)0xB7E01895)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC22	(*(volatile uint_io8_t*)0xB7E01896)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC23	(*(volatile uint_io8_t*)0xB7E01897)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC24	(*(volatile uint_io8_t*)0xB7E01898)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC25	(*(volatile uint_io8_t*)0xB7E01899)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC26	(*(volatile uint_io8_t*)0xB7E0189A)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC27	(*(volatile uint_io8_t*)0xB7E0189B)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC28	(*(volatile uint_io8_t*)0xB7E0189C)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC29	(*(volatile uint_io8_t*)0xB7E0189D)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC30	(*(volatile uint_io8_t*)0xB7E0189E)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC0_CDONEIRQC31	(*(volatile uint_io8_t*)0xB7E0189F)  /*@bfbba@*/

typedef struct stc_adc12b0_cdoneirqc0_field{
    uint_io32_t		u1CDONEIRQC0:1;
    uint_io32_t		u1CDONEIRQC1:1;
    uint_io32_t		u1CDONEIRQC2:1;
    uint_io32_t		u1CDONEIRQC3:1;
    uint_io32_t		u1CDONEIRQC4:1;
    uint_io32_t		u1CDONEIRQC5:1;
    uint_io32_t		u1CDONEIRQC6:1;
    uint_io32_t		u1CDONEIRQC7:1;
    uint_io32_t		u1CDONEIRQC8:1;
    uint_io32_t		u1CDONEIRQC9:1;
    uint_io32_t		u1CDONEIRQC10:1;
    uint_io32_t		u1CDONEIRQC11:1;
    uint_io32_t		u1CDONEIRQC12:1;
    uint_io32_t		u1CDONEIRQC13:1;
    uint_io32_t		u1CDONEIRQC14:1;
    uint_io32_t		u1CDONEIRQC15:1;
    uint_io32_t		u1CDONEIRQC16:1;
    uint_io32_t		u1CDONEIRQC17:1;
    uint_io32_t		u1CDONEIRQC18:1;
    uint_io32_t		u1CDONEIRQC19:1;
    uint_io32_t		u1CDONEIRQC20:1;
    uint_io32_t		u1CDONEIRQC21:1;
    uint_io32_t		u1CDONEIRQC22:1;
    uint_io32_t		u1CDONEIRQC23:1;
    uint_io32_t		u1CDONEIRQC24:1;
    uint_io32_t		u1CDONEIRQC25:1;
    uint_io32_t		u1CDONEIRQC26:1;
    uint_io32_t		u1CDONEIRQC27:1;
    uint_io32_t		u1CDONEIRQC28:1;
    uint_io32_t		u1CDONEIRQC29:1;
    uint_io32_t		u1CDONEIRQC30:1;
    uint_io32_t		u1CDONEIRQC31:1;
}stc_adc12b0_cdoneirqc0_field_t;

typedef union un_adc12b0_cdoneirqc0{
    uint_io32_t		u32Register;
    stc_adc12b0_cdoneirqc0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_cdoneirqc0_t;

/* CDONEIRQC1 */
#define ADC12B0_CDONEIRQC1	(ADC12B0.unCDONEIRQC1.u32Register)  /*@rg@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC32	(*(volatile uint_io8_t*)0xB7E018A0)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC33	(*(volatile uint_io8_t*)0xB7E018A1)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC34	(*(volatile uint_io8_t*)0xB7E018A2)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC35	(*(volatile uint_io8_t*)0xB7E018A3)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC36	(*(volatile uint_io8_t*)0xB7E018A4)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC37	(*(volatile uint_io8_t*)0xB7E018A5)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC38	(*(volatile uint_io8_t*)0xB7E018A6)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC39	(*(volatile uint_io8_t*)0xB7E018A7)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC40	(*(volatile uint_io8_t*)0xB7E018A8)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC41	(*(volatile uint_io8_t*)0xB7E018A9)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC42	(*(volatile uint_io8_t*)0xB7E018AA)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC43	(*(volatile uint_io8_t*)0xB7E018AB)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC44	(*(volatile uint_io8_t*)0xB7E018AC)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC45	(*(volatile uint_io8_t*)0xB7E018AD)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC46	(*(volatile uint_io8_t*)0xB7E018AE)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC47	(*(volatile uint_io8_t*)0xB7E018AF)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC48	(*(volatile uint_io8_t*)0xB7E018B0)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC49	(*(volatile uint_io8_t*)0xB7E018B1)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC50	(*(volatile uint_io8_t*)0xB7E018B2)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC51	(*(volatile uint_io8_t*)0xB7E018B3)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC52	(*(volatile uint_io8_t*)0xB7E018B4)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC53	(*(volatile uint_io8_t*)0xB7E018B5)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC54	(*(volatile uint_io8_t*)0xB7E018B6)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC55	(*(volatile uint_io8_t*)0xB7E018B7)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC56	(*(volatile uint_io8_t*)0xB7E018B8)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC57	(*(volatile uint_io8_t*)0xB7E018B9)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC58	(*(volatile uint_io8_t*)0xB7E018BA)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC59	(*(volatile uint_io8_t*)0xB7E018BB)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC60	(*(volatile uint_io8_t*)0xB7E018BC)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC61	(*(volatile uint_io8_t*)0xB7E018BD)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC62	(*(volatile uint_io8_t*)0xB7E018BE)  /*@bfbba@*/
#define ADC12B0_CDONEIRQC1_CDONEIRQC63	(*(volatile uint_io8_t*)0xB7E018BF)  /*@bfbba@*/

typedef struct stc_adc12b0_cdoneirqc1_field{
    uint_io32_t		u1CDONEIRQC32:1;
    uint_io32_t		u1CDONEIRQC33:1;
    uint_io32_t		u1CDONEIRQC34:1;
    uint_io32_t		u1CDONEIRQC35:1;
    uint_io32_t		u1CDONEIRQC36:1;
    uint_io32_t		u1CDONEIRQC37:1;
    uint_io32_t		u1CDONEIRQC38:1;
    uint_io32_t		u1CDONEIRQC39:1;
    uint_io32_t		u1CDONEIRQC40:1;
    uint_io32_t		u1CDONEIRQC41:1;
    uint_io32_t		u1CDONEIRQC42:1;
    uint_io32_t		u1CDONEIRQC43:1;
    uint_io32_t		u1CDONEIRQC44:1;
    uint_io32_t		u1CDONEIRQC45:1;
    uint_io32_t		u1CDONEIRQC46:1;
    uint_io32_t		u1CDONEIRQC47:1;
    uint_io32_t		u1CDONEIRQC48:1;
    uint_io32_t		u1CDONEIRQC49:1;
    uint_io32_t		u1CDONEIRQC50:1;
    uint_io32_t		u1CDONEIRQC51:1;
    uint_io32_t		u1CDONEIRQC52:1;
    uint_io32_t		u1CDONEIRQC53:1;
    uint_io32_t		u1CDONEIRQC54:1;
    uint_io32_t		u1CDONEIRQC55:1;
    uint_io32_t		u1CDONEIRQC56:1;
    uint_io32_t		u1CDONEIRQC57:1;
    uint_io32_t		u1CDONEIRQC58:1;
    uint_io32_t		u1CDONEIRQC59:1;
    uint_io32_t		u1CDONEIRQC60:1;
    uint_io32_t		u1CDONEIRQC61:1;
    uint_io32_t		u1CDONEIRQC62:1;
    uint_io32_t		u1CDONEIRQC63:1;
}stc_adc12b0_cdoneirqc1_field_t;

typedef union un_adc12b0_cdoneirqc1{
    uint_io32_t		u32Register;
    stc_adc12b0_cdoneirqc1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_cdoneirqc1_t;

/* GRPIRQ0 */
#define ADC12B0_GRPIRQ0	(ADC12B0.unGRPIRQ0.u32Register)  /*@rg@*/
#define ADC12B0_GRPIRQ0_GRPIRQ0	(*(volatile uint_io8_t*)0xB7E018C0)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ1	(*(volatile uint_io8_t*)0xB7E018C1)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ2	(*(volatile uint_io8_t*)0xB7E018C2)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ3	(*(volatile uint_io8_t*)0xB7E018C3)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ4	(*(volatile uint_io8_t*)0xB7E018C4)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ5	(*(volatile uint_io8_t*)0xB7E018C5)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ6	(*(volatile uint_io8_t*)0xB7E018C6)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ7	(*(volatile uint_io8_t*)0xB7E018C7)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ8	(*(volatile uint_io8_t*)0xB7E018C8)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ9	(*(volatile uint_io8_t*)0xB7E018C9)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ10	(*(volatile uint_io8_t*)0xB7E018CA)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ11	(*(volatile uint_io8_t*)0xB7E018CB)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ12	(*(volatile uint_io8_t*)0xB7E018CC)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ13	(*(volatile uint_io8_t*)0xB7E018CD)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ14	(*(volatile uint_io8_t*)0xB7E018CE)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ15	(*(volatile uint_io8_t*)0xB7E018CF)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ16	(*(volatile uint_io8_t*)0xB7E018D0)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ17	(*(volatile uint_io8_t*)0xB7E018D1)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ18	(*(volatile uint_io8_t*)0xB7E018D2)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ19	(*(volatile uint_io8_t*)0xB7E018D3)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ20	(*(volatile uint_io8_t*)0xB7E018D4)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ21	(*(volatile uint_io8_t*)0xB7E018D5)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ22	(*(volatile uint_io8_t*)0xB7E018D6)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ23	(*(volatile uint_io8_t*)0xB7E018D7)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ24	(*(volatile uint_io8_t*)0xB7E018D8)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ25	(*(volatile uint_io8_t*)0xB7E018D9)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ26	(*(volatile uint_io8_t*)0xB7E018DA)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ27	(*(volatile uint_io8_t*)0xB7E018DB)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ28	(*(volatile uint_io8_t*)0xB7E018DC)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ29	(*(volatile uint_io8_t*)0xB7E018DD)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ30	(*(volatile uint_io8_t*)0xB7E018DE)  /*@bfbba@*/
#define ADC12B0_GRPIRQ0_GRPIRQ31	(*(volatile uint_io8_t*)0xB7E018DF)  /*@bfbba@*/

typedef struct stc_adc12b0_grpirq0_field{
    uint_io32_t		u1GRPIRQ0:1;
    uint_io32_t		u1GRPIRQ1:1;
    uint_io32_t		u1GRPIRQ2:1;
    uint_io32_t		u1GRPIRQ3:1;
    uint_io32_t		u1GRPIRQ4:1;
    uint_io32_t		u1GRPIRQ5:1;
    uint_io32_t		u1GRPIRQ6:1;
    uint_io32_t		u1GRPIRQ7:1;
    uint_io32_t		u1GRPIRQ8:1;
    uint_io32_t		u1GRPIRQ9:1;
    uint_io32_t		u1GRPIRQ10:1;
    uint_io32_t		u1GRPIRQ11:1;
    uint_io32_t		u1GRPIRQ12:1;
    uint_io32_t		u1GRPIRQ13:1;
    uint_io32_t		u1GRPIRQ14:1;
    uint_io32_t		u1GRPIRQ15:1;
    uint_io32_t		u1GRPIRQ16:1;
    uint_io32_t		u1GRPIRQ17:1;
    uint_io32_t		u1GRPIRQ18:1;
    uint_io32_t		u1GRPIRQ19:1;
    uint_io32_t		u1GRPIRQ20:1;
    uint_io32_t		u1GRPIRQ21:1;
    uint_io32_t		u1GRPIRQ22:1;
    uint_io32_t		u1GRPIRQ23:1;
    uint_io32_t		u1GRPIRQ24:1;
    uint_io32_t		u1GRPIRQ25:1;
    uint_io32_t		u1GRPIRQ26:1;
    uint_io32_t		u1GRPIRQ27:1;
    uint_io32_t		u1GRPIRQ28:1;
    uint_io32_t		u1GRPIRQ29:1;
    uint_io32_t		u1GRPIRQ30:1;
    uint_io32_t		u1GRPIRQ31:1;
}stc_adc12b0_grpirq0_field_t;

typedef union un_adc12b0_grpirq0{
    uint_io32_t		u32Register;
    stc_adc12b0_grpirq0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_grpirq0_t;

/* GRPIRQ1 */
#define ADC12B0_GRPIRQ1	(ADC12B0.unGRPIRQ1.u32Register)  /*@rg@*/
#define ADC12B0_GRPIRQ1_GRPIRQ32	(*(volatile uint_io8_t*)0xB7E018E0)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ33	(*(volatile uint_io8_t*)0xB7E018E1)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ34	(*(volatile uint_io8_t*)0xB7E018E2)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ35	(*(volatile uint_io8_t*)0xB7E018E3)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ36	(*(volatile uint_io8_t*)0xB7E018E4)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ37	(*(volatile uint_io8_t*)0xB7E018E5)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ38	(*(volatile uint_io8_t*)0xB7E018E6)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ39	(*(volatile uint_io8_t*)0xB7E018E7)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ40	(*(volatile uint_io8_t*)0xB7E018E8)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ41	(*(volatile uint_io8_t*)0xB7E018E9)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ42	(*(volatile uint_io8_t*)0xB7E018EA)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ43	(*(volatile uint_io8_t*)0xB7E018EB)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ44	(*(volatile uint_io8_t*)0xB7E018EC)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ45	(*(volatile uint_io8_t*)0xB7E018ED)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ46	(*(volatile uint_io8_t*)0xB7E018EE)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ47	(*(volatile uint_io8_t*)0xB7E018EF)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ48	(*(volatile uint_io8_t*)0xB7E018F0)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ49	(*(volatile uint_io8_t*)0xB7E018F1)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ50	(*(volatile uint_io8_t*)0xB7E018F2)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ51	(*(volatile uint_io8_t*)0xB7E018F3)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ52	(*(volatile uint_io8_t*)0xB7E018F4)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ53	(*(volatile uint_io8_t*)0xB7E018F5)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ54	(*(volatile uint_io8_t*)0xB7E018F6)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ55	(*(volatile uint_io8_t*)0xB7E018F7)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ56	(*(volatile uint_io8_t*)0xB7E018F8)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ57	(*(volatile uint_io8_t*)0xB7E018F9)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ58	(*(volatile uint_io8_t*)0xB7E018FA)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ59	(*(volatile uint_io8_t*)0xB7E018FB)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ60	(*(volatile uint_io8_t*)0xB7E018FC)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ61	(*(volatile uint_io8_t*)0xB7E018FD)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ62	(*(volatile uint_io8_t*)0xB7E018FE)  /*@bfbba@*/
#define ADC12B0_GRPIRQ1_GRPIRQ63	(*(volatile uint_io8_t*)0xB7E018FF)  /*@bfbba@*/

typedef struct stc_adc12b0_grpirq1_field{
    uint_io32_t		u1GRPIRQ32:1;
    uint_io32_t		u1GRPIRQ33:1;
    uint_io32_t		u1GRPIRQ34:1;
    uint_io32_t		u1GRPIRQ35:1;
    uint_io32_t		u1GRPIRQ36:1;
    uint_io32_t		u1GRPIRQ37:1;
    uint_io32_t		u1GRPIRQ38:1;
    uint_io32_t		u1GRPIRQ39:1;
    uint_io32_t		u1GRPIRQ40:1;
    uint_io32_t		u1GRPIRQ41:1;
    uint_io32_t		u1GRPIRQ42:1;
    uint_io32_t		u1GRPIRQ43:1;
    uint_io32_t		u1GRPIRQ44:1;
    uint_io32_t		u1GRPIRQ45:1;
    uint_io32_t		u1GRPIRQ46:1;
    uint_io32_t		u1GRPIRQ47:1;
    uint_io32_t		u1GRPIRQ48:1;
    uint_io32_t		u1GRPIRQ49:1;
    uint_io32_t		u1GRPIRQ50:1;
    uint_io32_t		u1GRPIRQ51:1;
    uint_io32_t		u1GRPIRQ52:1;
    uint_io32_t		u1GRPIRQ53:1;
    uint_io32_t		u1GRPIRQ54:1;
    uint_io32_t		u1GRPIRQ55:1;
    uint_io32_t		u1GRPIRQ56:1;
    uint_io32_t		u1GRPIRQ57:1;
    uint_io32_t		u1GRPIRQ58:1;
    uint_io32_t		u1GRPIRQ59:1;
    uint_io32_t		u1GRPIRQ60:1;
    uint_io32_t		u1GRPIRQ61:1;
    uint_io32_t		u1GRPIRQ62:1;
    uint_io32_t		u1GRPIRQ63:1;
}stc_adc12b0_grpirq1_field_t;

typedef union un_adc12b0_grpirq1{
    uint_io32_t		u32Register;
    stc_adc12b0_grpirq1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_grpirq1_t;

/* GRPIRQE0 */
#define ADC12B0_GRPIRQE0	(ADC12B0.unGRPIRQE0.u32Register)  /*@rg@*/
#define ADC12B0_GRPIRQE0_GRPIRQE0	(*(volatile uint_io8_t*)0xB7E01900)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE1	(*(volatile uint_io8_t*)0xB7E01901)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE2	(*(volatile uint_io8_t*)0xB7E01902)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE3	(*(volatile uint_io8_t*)0xB7E01903)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE4	(*(volatile uint_io8_t*)0xB7E01904)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE5	(*(volatile uint_io8_t*)0xB7E01905)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE6	(*(volatile uint_io8_t*)0xB7E01906)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE7	(*(volatile uint_io8_t*)0xB7E01907)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE8	(*(volatile uint_io8_t*)0xB7E01908)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE9	(*(volatile uint_io8_t*)0xB7E01909)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE10	(*(volatile uint_io8_t*)0xB7E0190A)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE11	(*(volatile uint_io8_t*)0xB7E0190B)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE12	(*(volatile uint_io8_t*)0xB7E0190C)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE13	(*(volatile uint_io8_t*)0xB7E0190D)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE14	(*(volatile uint_io8_t*)0xB7E0190E)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE15	(*(volatile uint_io8_t*)0xB7E0190F)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE16	(*(volatile uint_io8_t*)0xB7E01910)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE17	(*(volatile uint_io8_t*)0xB7E01911)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE18	(*(volatile uint_io8_t*)0xB7E01912)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE19	(*(volatile uint_io8_t*)0xB7E01913)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE20	(*(volatile uint_io8_t*)0xB7E01914)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE21	(*(volatile uint_io8_t*)0xB7E01915)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE22	(*(volatile uint_io8_t*)0xB7E01916)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE23	(*(volatile uint_io8_t*)0xB7E01917)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE24	(*(volatile uint_io8_t*)0xB7E01918)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE25	(*(volatile uint_io8_t*)0xB7E01919)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE26	(*(volatile uint_io8_t*)0xB7E0191A)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE27	(*(volatile uint_io8_t*)0xB7E0191B)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE28	(*(volatile uint_io8_t*)0xB7E0191C)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE29	(*(volatile uint_io8_t*)0xB7E0191D)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE30	(*(volatile uint_io8_t*)0xB7E0191E)  /*@bfbba@*/
#define ADC12B0_GRPIRQE0_GRPIRQE31	(*(volatile uint_io8_t*)0xB7E0191F)  /*@bfbba@*/

typedef struct stc_adc12b0_grpirqe0_field{
    uint_io32_t		u1GRPIRQE0:1;
    uint_io32_t		u1GRPIRQE1:1;
    uint_io32_t		u1GRPIRQE2:1;
    uint_io32_t		u1GRPIRQE3:1;
    uint_io32_t		u1GRPIRQE4:1;
    uint_io32_t		u1GRPIRQE5:1;
    uint_io32_t		u1GRPIRQE6:1;
    uint_io32_t		u1GRPIRQE7:1;
    uint_io32_t		u1GRPIRQE8:1;
    uint_io32_t		u1GRPIRQE9:1;
    uint_io32_t		u1GRPIRQE10:1;
    uint_io32_t		u1GRPIRQE11:1;
    uint_io32_t		u1GRPIRQE12:1;
    uint_io32_t		u1GRPIRQE13:1;
    uint_io32_t		u1GRPIRQE14:1;
    uint_io32_t		u1GRPIRQE15:1;
    uint_io32_t		u1GRPIRQE16:1;
    uint_io32_t		u1GRPIRQE17:1;
    uint_io32_t		u1GRPIRQE18:1;
    uint_io32_t		u1GRPIRQE19:1;
    uint_io32_t		u1GRPIRQE20:1;
    uint_io32_t		u1GRPIRQE21:1;
    uint_io32_t		u1GRPIRQE22:1;
    uint_io32_t		u1GRPIRQE23:1;
    uint_io32_t		u1GRPIRQE24:1;
    uint_io32_t		u1GRPIRQE25:1;
    uint_io32_t		u1GRPIRQE26:1;
    uint_io32_t		u1GRPIRQE27:1;
    uint_io32_t		u1GRPIRQE28:1;
    uint_io32_t		u1GRPIRQE29:1;
    uint_io32_t		u1GRPIRQE30:1;
    uint_io32_t		u1GRPIRQE31:1;
}stc_adc12b0_grpirqe0_field_t;

typedef union un_adc12b0_grpirqe0{
    uint_io32_t		u32Register;
    stc_adc12b0_grpirqe0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_grpirqe0_t;

/* GRPIRQE1 */
#define ADC12B0_GRPIRQE1	(ADC12B0.unGRPIRQE1.u32Register)  /*@rg@*/
#define ADC12B0_GRPIRQE1_GRPIRQE32	(*(volatile uint_io8_t*)0xB7E01920)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE33	(*(volatile uint_io8_t*)0xB7E01921)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE34	(*(volatile uint_io8_t*)0xB7E01922)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE35	(*(volatile uint_io8_t*)0xB7E01923)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE36	(*(volatile uint_io8_t*)0xB7E01924)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE37	(*(volatile uint_io8_t*)0xB7E01925)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE38	(*(volatile uint_io8_t*)0xB7E01926)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE39	(*(volatile uint_io8_t*)0xB7E01927)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE40	(*(volatile uint_io8_t*)0xB7E01928)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE41	(*(volatile uint_io8_t*)0xB7E01929)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE42	(*(volatile uint_io8_t*)0xB7E0192A)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE43	(*(volatile uint_io8_t*)0xB7E0192B)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE44	(*(volatile uint_io8_t*)0xB7E0192C)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE45	(*(volatile uint_io8_t*)0xB7E0192D)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE46	(*(volatile uint_io8_t*)0xB7E0192E)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE47	(*(volatile uint_io8_t*)0xB7E0192F)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE48	(*(volatile uint_io8_t*)0xB7E01930)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE49	(*(volatile uint_io8_t*)0xB7E01931)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE50	(*(volatile uint_io8_t*)0xB7E01932)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE51	(*(volatile uint_io8_t*)0xB7E01933)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE52	(*(volatile uint_io8_t*)0xB7E01934)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE53	(*(volatile uint_io8_t*)0xB7E01935)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE54	(*(volatile uint_io8_t*)0xB7E01936)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE55	(*(volatile uint_io8_t*)0xB7E01937)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE56	(*(volatile uint_io8_t*)0xB7E01938)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE57	(*(volatile uint_io8_t*)0xB7E01939)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE58	(*(volatile uint_io8_t*)0xB7E0193A)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE59	(*(volatile uint_io8_t*)0xB7E0193B)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE60	(*(volatile uint_io8_t*)0xB7E0193C)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE61	(*(volatile uint_io8_t*)0xB7E0193D)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE62	(*(volatile uint_io8_t*)0xB7E0193E)  /*@bfbba@*/
#define ADC12B0_GRPIRQE1_GRPIRQE63	(*(volatile uint_io8_t*)0xB7E0193F)  /*@bfbba@*/

typedef struct stc_adc12b0_grpirqe1_field{
    uint_io32_t		u1GRPIRQE32:1;
    uint_io32_t		u1GRPIRQE33:1;
    uint_io32_t		u1GRPIRQE34:1;
    uint_io32_t		u1GRPIRQE35:1;
    uint_io32_t		u1GRPIRQE36:1;
    uint_io32_t		u1GRPIRQE37:1;
    uint_io32_t		u1GRPIRQE38:1;
    uint_io32_t		u1GRPIRQE39:1;
    uint_io32_t		u1GRPIRQE40:1;
    uint_io32_t		u1GRPIRQE41:1;
    uint_io32_t		u1GRPIRQE42:1;
    uint_io32_t		u1GRPIRQE43:1;
    uint_io32_t		u1GRPIRQE44:1;
    uint_io32_t		u1GRPIRQE45:1;
    uint_io32_t		u1GRPIRQE46:1;
    uint_io32_t		u1GRPIRQE47:1;
    uint_io32_t		u1GRPIRQE48:1;
    uint_io32_t		u1GRPIRQE49:1;
    uint_io32_t		u1GRPIRQE50:1;
    uint_io32_t		u1GRPIRQE51:1;
    uint_io32_t		u1GRPIRQE52:1;
    uint_io32_t		u1GRPIRQE53:1;
    uint_io32_t		u1GRPIRQE54:1;
    uint_io32_t		u1GRPIRQE55:1;
    uint_io32_t		u1GRPIRQE56:1;
    uint_io32_t		u1GRPIRQE57:1;
    uint_io32_t		u1GRPIRQE58:1;
    uint_io32_t		u1GRPIRQE59:1;
    uint_io32_t		u1GRPIRQE60:1;
    uint_io32_t		u1GRPIRQE61:1;
    uint_io32_t		u1GRPIRQE62:1;
    uint_io32_t		u1GRPIRQE63:1;
}stc_adc12b0_grpirqe1_field_t;

typedef union un_adc12b0_grpirqe1{
    uint_io32_t		u32Register;
    stc_adc12b0_grpirqe1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_grpirqe1_t;

/* GRPIRQC0 */
#define ADC12B0_GRPIRQC0	(ADC12B0.unGRPIRQC0.u32Register)  /*@rg@*/
#define ADC12B0_GRPIRQC0_GRPIRQC0	(*(volatile uint_io8_t*)0xB7E01940)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC1	(*(volatile uint_io8_t*)0xB7E01941)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC2	(*(volatile uint_io8_t*)0xB7E01942)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC3	(*(volatile uint_io8_t*)0xB7E01943)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC4	(*(volatile uint_io8_t*)0xB7E01944)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC5	(*(volatile uint_io8_t*)0xB7E01945)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC6	(*(volatile uint_io8_t*)0xB7E01946)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC7	(*(volatile uint_io8_t*)0xB7E01947)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC8	(*(volatile uint_io8_t*)0xB7E01948)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC9	(*(volatile uint_io8_t*)0xB7E01949)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC10	(*(volatile uint_io8_t*)0xB7E0194A)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC11	(*(volatile uint_io8_t*)0xB7E0194B)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC12	(*(volatile uint_io8_t*)0xB7E0194C)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC13	(*(volatile uint_io8_t*)0xB7E0194D)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC14	(*(volatile uint_io8_t*)0xB7E0194E)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC15	(*(volatile uint_io8_t*)0xB7E0194F)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC16	(*(volatile uint_io8_t*)0xB7E01950)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC17	(*(volatile uint_io8_t*)0xB7E01951)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC18	(*(volatile uint_io8_t*)0xB7E01952)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC19	(*(volatile uint_io8_t*)0xB7E01953)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC20	(*(volatile uint_io8_t*)0xB7E01954)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC21	(*(volatile uint_io8_t*)0xB7E01955)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC22	(*(volatile uint_io8_t*)0xB7E01956)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC23	(*(volatile uint_io8_t*)0xB7E01957)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC24	(*(volatile uint_io8_t*)0xB7E01958)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC25	(*(volatile uint_io8_t*)0xB7E01959)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC26	(*(volatile uint_io8_t*)0xB7E0195A)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC27	(*(volatile uint_io8_t*)0xB7E0195B)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC28	(*(volatile uint_io8_t*)0xB7E0195C)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC29	(*(volatile uint_io8_t*)0xB7E0195D)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC30	(*(volatile uint_io8_t*)0xB7E0195E)  /*@bfbba@*/
#define ADC12B0_GRPIRQC0_GRPIRQC31	(*(volatile uint_io8_t*)0xB7E0195F)  /*@bfbba@*/

typedef struct stc_adc12b0_grpirqc0_field{
    uint_io32_t		u1GRPIRQC0:1;
    uint_io32_t		u1GRPIRQC1:1;
    uint_io32_t		u1GRPIRQC2:1;
    uint_io32_t		u1GRPIRQC3:1;
    uint_io32_t		u1GRPIRQC4:1;
    uint_io32_t		u1GRPIRQC5:1;
    uint_io32_t		u1GRPIRQC6:1;
    uint_io32_t		u1GRPIRQC7:1;
    uint_io32_t		u1GRPIRQC8:1;
    uint_io32_t		u1GRPIRQC9:1;
    uint_io32_t		u1GRPIRQC10:1;
    uint_io32_t		u1GRPIRQC11:1;
    uint_io32_t		u1GRPIRQC12:1;
    uint_io32_t		u1GRPIRQC13:1;
    uint_io32_t		u1GRPIRQC14:1;
    uint_io32_t		u1GRPIRQC15:1;
    uint_io32_t		u1GRPIRQC16:1;
    uint_io32_t		u1GRPIRQC17:1;
    uint_io32_t		u1GRPIRQC18:1;
    uint_io32_t		u1GRPIRQC19:1;
    uint_io32_t		u1GRPIRQC20:1;
    uint_io32_t		u1GRPIRQC21:1;
    uint_io32_t		u1GRPIRQC22:1;
    uint_io32_t		u1GRPIRQC23:1;
    uint_io32_t		u1GRPIRQC24:1;
    uint_io32_t		u1GRPIRQC25:1;
    uint_io32_t		u1GRPIRQC26:1;
    uint_io32_t		u1GRPIRQC27:1;
    uint_io32_t		u1GRPIRQC28:1;
    uint_io32_t		u1GRPIRQC29:1;
    uint_io32_t		u1GRPIRQC30:1;
    uint_io32_t		u1GRPIRQC31:1;
}stc_adc12b0_grpirqc0_field_t;

typedef union un_adc12b0_grpirqc0{
    uint_io32_t		u32Register;
    stc_adc12b0_grpirqc0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_grpirqc0_t;

/* GRPIRQC1 */
#define ADC12B0_GRPIRQC1	(ADC12B0.unGRPIRQC1.u32Register)  /*@rg@*/
#define ADC12B0_GRPIRQC1_GRPIRQC32	(*(volatile uint_io8_t*)0xB7E01960)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC33	(*(volatile uint_io8_t*)0xB7E01961)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC34	(*(volatile uint_io8_t*)0xB7E01962)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC35	(*(volatile uint_io8_t*)0xB7E01963)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC36	(*(volatile uint_io8_t*)0xB7E01964)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC37	(*(volatile uint_io8_t*)0xB7E01965)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC38	(*(volatile uint_io8_t*)0xB7E01966)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC39	(*(volatile uint_io8_t*)0xB7E01967)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC40	(*(volatile uint_io8_t*)0xB7E01968)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC41	(*(volatile uint_io8_t*)0xB7E01969)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC42	(*(volatile uint_io8_t*)0xB7E0196A)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC43	(*(volatile uint_io8_t*)0xB7E0196B)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC44	(*(volatile uint_io8_t*)0xB7E0196C)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC45	(*(volatile uint_io8_t*)0xB7E0196D)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC46	(*(volatile uint_io8_t*)0xB7E0196E)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC47	(*(volatile uint_io8_t*)0xB7E0196F)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC48	(*(volatile uint_io8_t*)0xB7E01970)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC49	(*(volatile uint_io8_t*)0xB7E01971)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC50	(*(volatile uint_io8_t*)0xB7E01972)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC51	(*(volatile uint_io8_t*)0xB7E01973)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC52	(*(volatile uint_io8_t*)0xB7E01974)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC53	(*(volatile uint_io8_t*)0xB7E01975)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC54	(*(volatile uint_io8_t*)0xB7E01976)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC55	(*(volatile uint_io8_t*)0xB7E01977)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC56	(*(volatile uint_io8_t*)0xB7E01978)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC57	(*(volatile uint_io8_t*)0xB7E01979)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC58	(*(volatile uint_io8_t*)0xB7E0197A)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC59	(*(volatile uint_io8_t*)0xB7E0197B)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC60	(*(volatile uint_io8_t*)0xB7E0197C)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC61	(*(volatile uint_io8_t*)0xB7E0197D)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC62	(*(volatile uint_io8_t*)0xB7E0197E)  /*@bfbba@*/
#define ADC12B0_GRPIRQC1_GRPIRQC63	(*(volatile uint_io8_t*)0xB7E0197F)  /*@bfbba@*/

typedef struct stc_adc12b0_grpirqc1_field{
    uint_io32_t		u1GRPIRQC32:1;
    uint_io32_t		u1GRPIRQC33:1;
    uint_io32_t		u1GRPIRQC34:1;
    uint_io32_t		u1GRPIRQC35:1;
    uint_io32_t		u1GRPIRQC36:1;
    uint_io32_t		u1GRPIRQC37:1;
    uint_io32_t		u1GRPIRQC38:1;
    uint_io32_t		u1GRPIRQC39:1;
    uint_io32_t		u1GRPIRQC40:1;
    uint_io32_t		u1GRPIRQC41:1;
    uint_io32_t		u1GRPIRQC42:1;
    uint_io32_t		u1GRPIRQC43:1;
    uint_io32_t		u1GRPIRQC44:1;
    uint_io32_t		u1GRPIRQC45:1;
    uint_io32_t		u1GRPIRQC46:1;
    uint_io32_t		u1GRPIRQC47:1;
    uint_io32_t		u1GRPIRQC48:1;
    uint_io32_t		u1GRPIRQC49:1;
    uint_io32_t		u1GRPIRQC50:1;
    uint_io32_t		u1GRPIRQC51:1;
    uint_io32_t		u1GRPIRQC52:1;
    uint_io32_t		u1GRPIRQC53:1;
    uint_io32_t		u1GRPIRQC54:1;
    uint_io32_t		u1GRPIRQC55:1;
    uint_io32_t		u1GRPIRQC56:1;
    uint_io32_t		u1GRPIRQC57:1;
    uint_io32_t		u1GRPIRQC58:1;
    uint_io32_t		u1GRPIRQC59:1;
    uint_io32_t		u1GRPIRQC60:1;
    uint_io32_t		u1GRPIRQC61:1;
    uint_io32_t		u1GRPIRQC62:1;
    uint_io32_t		u1GRPIRQC63:1;
}stc_adc12b0_grpirqc1_field_t;

typedef union un_adc12b0_grpirqc1{
    uint_io32_t		u32Register;
    stc_adc12b0_grpirqc1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_grpirqc1_t;

/* RCIRQ0 */
#define ADC12B0_RCIRQ0	(ADC12B0.unRCIRQ0.u32Register)  /*@rg@*/
#define ADC12B0_RCIRQ0_RCIRQ0	(*(volatile uint_io8_t*)0xB7E01980)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ1	(*(volatile uint_io8_t*)0xB7E01981)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ2	(*(volatile uint_io8_t*)0xB7E01982)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ3	(*(volatile uint_io8_t*)0xB7E01983)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ4	(*(volatile uint_io8_t*)0xB7E01984)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ5	(*(volatile uint_io8_t*)0xB7E01985)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ6	(*(volatile uint_io8_t*)0xB7E01986)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ7	(*(volatile uint_io8_t*)0xB7E01987)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ8	(*(volatile uint_io8_t*)0xB7E01988)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ9	(*(volatile uint_io8_t*)0xB7E01989)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ10	(*(volatile uint_io8_t*)0xB7E0198A)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ11	(*(volatile uint_io8_t*)0xB7E0198B)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ12	(*(volatile uint_io8_t*)0xB7E0198C)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ13	(*(volatile uint_io8_t*)0xB7E0198D)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ14	(*(volatile uint_io8_t*)0xB7E0198E)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ15	(*(volatile uint_io8_t*)0xB7E0198F)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ16	(*(volatile uint_io8_t*)0xB7E01990)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ17	(*(volatile uint_io8_t*)0xB7E01991)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ18	(*(volatile uint_io8_t*)0xB7E01992)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ19	(*(volatile uint_io8_t*)0xB7E01993)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ20	(*(volatile uint_io8_t*)0xB7E01994)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ21	(*(volatile uint_io8_t*)0xB7E01995)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ22	(*(volatile uint_io8_t*)0xB7E01996)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ23	(*(volatile uint_io8_t*)0xB7E01997)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ24	(*(volatile uint_io8_t*)0xB7E01998)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ25	(*(volatile uint_io8_t*)0xB7E01999)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ26	(*(volatile uint_io8_t*)0xB7E0199A)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ27	(*(volatile uint_io8_t*)0xB7E0199B)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ28	(*(volatile uint_io8_t*)0xB7E0199C)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ29	(*(volatile uint_io8_t*)0xB7E0199D)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ30	(*(volatile uint_io8_t*)0xB7E0199E)  /*@bfbba@*/
#define ADC12B0_RCIRQ0_RCIRQ31	(*(volatile uint_io8_t*)0xB7E0199F)  /*@bfbba@*/

typedef struct stc_adc12b0_rcirq0_field{
    uint_io32_t		u1RCIRQ0:1;
    uint_io32_t		u1RCIRQ1:1;
    uint_io32_t		u1RCIRQ2:1;
    uint_io32_t		u1RCIRQ3:1;
    uint_io32_t		u1RCIRQ4:1;
    uint_io32_t		u1RCIRQ5:1;
    uint_io32_t		u1RCIRQ6:1;
    uint_io32_t		u1RCIRQ7:1;
    uint_io32_t		u1RCIRQ8:1;
    uint_io32_t		u1RCIRQ9:1;
    uint_io32_t		u1RCIRQ10:1;
    uint_io32_t		u1RCIRQ11:1;
    uint_io32_t		u1RCIRQ12:1;
    uint_io32_t		u1RCIRQ13:1;
    uint_io32_t		u1RCIRQ14:1;
    uint_io32_t		u1RCIRQ15:1;
    uint_io32_t		u1RCIRQ16:1;
    uint_io32_t		u1RCIRQ17:1;
    uint_io32_t		u1RCIRQ18:1;
    uint_io32_t		u1RCIRQ19:1;
    uint_io32_t		u1RCIRQ20:1;
    uint_io32_t		u1RCIRQ21:1;
    uint_io32_t		u1RCIRQ22:1;
    uint_io32_t		u1RCIRQ23:1;
    uint_io32_t		u1RCIRQ24:1;
    uint_io32_t		u1RCIRQ25:1;
    uint_io32_t		u1RCIRQ26:1;
    uint_io32_t		u1RCIRQ27:1;
    uint_io32_t		u1RCIRQ28:1;
    uint_io32_t		u1RCIRQ29:1;
    uint_io32_t		u1RCIRQ30:1;
    uint_io32_t		u1RCIRQ31:1;
}stc_adc12b0_rcirq0_field_t;

typedef union un_adc12b0_rcirq0{
    uint_io32_t		u32Register;
    stc_adc12b0_rcirq0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_rcirq0_t;

/* RCIRQ1 */
#define ADC12B0_RCIRQ1	(ADC12B0.unRCIRQ1.u32Register)  /*@rg@*/
#define ADC12B0_RCIRQ1_RCIRQ32	(*(volatile uint_io8_t*)0xB7E019A0)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ33	(*(volatile uint_io8_t*)0xB7E019A1)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ34	(*(volatile uint_io8_t*)0xB7E019A2)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ35	(*(volatile uint_io8_t*)0xB7E019A3)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ36	(*(volatile uint_io8_t*)0xB7E019A4)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ37	(*(volatile uint_io8_t*)0xB7E019A5)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ38	(*(volatile uint_io8_t*)0xB7E019A6)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ39	(*(volatile uint_io8_t*)0xB7E019A7)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ40	(*(volatile uint_io8_t*)0xB7E019A8)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ41	(*(volatile uint_io8_t*)0xB7E019A9)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ42	(*(volatile uint_io8_t*)0xB7E019AA)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ43	(*(volatile uint_io8_t*)0xB7E019AB)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ44	(*(volatile uint_io8_t*)0xB7E019AC)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ45	(*(volatile uint_io8_t*)0xB7E019AD)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ46	(*(volatile uint_io8_t*)0xB7E019AE)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ47	(*(volatile uint_io8_t*)0xB7E019AF)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ48	(*(volatile uint_io8_t*)0xB7E019B0)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ49	(*(volatile uint_io8_t*)0xB7E019B1)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ50	(*(volatile uint_io8_t*)0xB7E019B2)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ51	(*(volatile uint_io8_t*)0xB7E019B3)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ52	(*(volatile uint_io8_t*)0xB7E019B4)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ53	(*(volatile uint_io8_t*)0xB7E019B5)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ54	(*(volatile uint_io8_t*)0xB7E019B6)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ55	(*(volatile uint_io8_t*)0xB7E019B7)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ56	(*(volatile uint_io8_t*)0xB7E019B8)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ57	(*(volatile uint_io8_t*)0xB7E019B9)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ58	(*(volatile uint_io8_t*)0xB7E019BA)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ59	(*(volatile uint_io8_t*)0xB7E019BB)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ60	(*(volatile uint_io8_t*)0xB7E019BC)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ61	(*(volatile uint_io8_t*)0xB7E019BD)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ62	(*(volatile uint_io8_t*)0xB7E019BE)  /*@bfbba@*/
#define ADC12B0_RCIRQ1_RCIRQ63	(*(volatile uint_io8_t*)0xB7E019BF)  /*@bfbba@*/

typedef struct stc_adc12b0_rcirq1_field{
    uint_io32_t		u1RCIRQ32:1;
    uint_io32_t		u1RCIRQ33:1;
    uint_io32_t		u1RCIRQ34:1;
    uint_io32_t		u1RCIRQ35:1;
    uint_io32_t		u1RCIRQ36:1;
    uint_io32_t		u1RCIRQ37:1;
    uint_io32_t		u1RCIRQ38:1;
    uint_io32_t		u1RCIRQ39:1;
    uint_io32_t		u1RCIRQ40:1;
    uint_io32_t		u1RCIRQ41:1;
    uint_io32_t		u1RCIRQ42:1;
    uint_io32_t		u1RCIRQ43:1;
    uint_io32_t		u1RCIRQ44:1;
    uint_io32_t		u1RCIRQ45:1;
    uint_io32_t		u1RCIRQ46:1;
    uint_io32_t		u1RCIRQ47:1;
    uint_io32_t		u1RCIRQ48:1;
    uint_io32_t		u1RCIRQ49:1;
    uint_io32_t		u1RCIRQ50:1;
    uint_io32_t		u1RCIRQ51:1;
    uint_io32_t		u1RCIRQ52:1;
    uint_io32_t		u1RCIRQ53:1;
    uint_io32_t		u1RCIRQ54:1;
    uint_io32_t		u1RCIRQ55:1;
    uint_io32_t		u1RCIRQ56:1;
    uint_io32_t		u1RCIRQ57:1;
    uint_io32_t		u1RCIRQ58:1;
    uint_io32_t		u1RCIRQ59:1;
    uint_io32_t		u1RCIRQ60:1;
    uint_io32_t		u1RCIRQ61:1;
    uint_io32_t		u1RCIRQ62:1;
    uint_io32_t		u1RCIRQ63:1;
}stc_adc12b0_rcirq1_field_t;

typedef union un_adc12b0_rcirq1{
    uint_io32_t		u32Register;
    stc_adc12b0_rcirq1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_rcirq1_t;

/* RCIRQE0 */
#define ADC12B0_RCIRQE0	(ADC12B0.unRCIRQE0.u32Register)  /*@rg@*/
#define ADC12B0_RCIRQE0_RCIRQE0	(*(volatile uint_io8_t*)0xB7E019C0)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE1	(*(volatile uint_io8_t*)0xB7E019C1)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE2	(*(volatile uint_io8_t*)0xB7E019C2)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE3	(*(volatile uint_io8_t*)0xB7E019C3)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE4	(*(volatile uint_io8_t*)0xB7E019C4)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE5	(*(volatile uint_io8_t*)0xB7E019C5)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE6	(*(volatile uint_io8_t*)0xB7E019C6)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE7	(*(volatile uint_io8_t*)0xB7E019C7)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE8	(*(volatile uint_io8_t*)0xB7E019C8)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE9	(*(volatile uint_io8_t*)0xB7E019C9)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE10	(*(volatile uint_io8_t*)0xB7E019CA)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE11	(*(volatile uint_io8_t*)0xB7E019CB)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE12	(*(volatile uint_io8_t*)0xB7E019CC)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE13	(*(volatile uint_io8_t*)0xB7E019CD)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE14	(*(volatile uint_io8_t*)0xB7E019CE)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE15	(*(volatile uint_io8_t*)0xB7E019CF)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE16	(*(volatile uint_io8_t*)0xB7E019D0)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE17	(*(volatile uint_io8_t*)0xB7E019D1)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE18	(*(volatile uint_io8_t*)0xB7E019D2)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE19	(*(volatile uint_io8_t*)0xB7E019D3)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE20	(*(volatile uint_io8_t*)0xB7E019D4)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE21	(*(volatile uint_io8_t*)0xB7E019D5)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE22	(*(volatile uint_io8_t*)0xB7E019D6)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE23	(*(volatile uint_io8_t*)0xB7E019D7)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE24	(*(volatile uint_io8_t*)0xB7E019D8)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE25	(*(volatile uint_io8_t*)0xB7E019D9)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE26	(*(volatile uint_io8_t*)0xB7E019DA)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE27	(*(volatile uint_io8_t*)0xB7E019DB)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE28	(*(volatile uint_io8_t*)0xB7E019DC)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE29	(*(volatile uint_io8_t*)0xB7E019DD)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE30	(*(volatile uint_io8_t*)0xB7E019DE)  /*@bfbba@*/
#define ADC12B0_RCIRQE0_RCIRQE31	(*(volatile uint_io8_t*)0xB7E019DF)  /*@bfbba@*/

typedef struct stc_adc12b0_rcirqe0_field{
    uint_io32_t		u1RCIRQE0:1;
    uint_io32_t		u1RCIRQE1:1;
    uint_io32_t		u1RCIRQE2:1;
    uint_io32_t		u1RCIRQE3:1;
    uint_io32_t		u1RCIRQE4:1;
    uint_io32_t		u1RCIRQE5:1;
    uint_io32_t		u1RCIRQE6:1;
    uint_io32_t		u1RCIRQE7:1;
    uint_io32_t		u1RCIRQE8:1;
    uint_io32_t		u1RCIRQE9:1;
    uint_io32_t		u1RCIRQE10:1;
    uint_io32_t		u1RCIRQE11:1;
    uint_io32_t		u1RCIRQE12:1;
    uint_io32_t		u1RCIRQE13:1;
    uint_io32_t		u1RCIRQE14:1;
    uint_io32_t		u1RCIRQE15:1;
    uint_io32_t		u1RCIRQE16:1;
    uint_io32_t		u1RCIRQE17:1;
    uint_io32_t		u1RCIRQE18:1;
    uint_io32_t		u1RCIRQE19:1;
    uint_io32_t		u1RCIRQE20:1;
    uint_io32_t		u1RCIRQE21:1;
    uint_io32_t		u1RCIRQE22:1;
    uint_io32_t		u1RCIRQE23:1;
    uint_io32_t		u1RCIRQE24:1;
    uint_io32_t		u1RCIRQE25:1;
    uint_io32_t		u1RCIRQE26:1;
    uint_io32_t		u1RCIRQE27:1;
    uint_io32_t		u1RCIRQE28:1;
    uint_io32_t		u1RCIRQE29:1;
    uint_io32_t		u1RCIRQE30:1;
    uint_io32_t		u1RCIRQE31:1;
}stc_adc12b0_rcirqe0_field_t;

typedef union un_adc12b0_rcirqe0{
    uint_io32_t		u32Register;
    stc_adc12b0_rcirqe0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_rcirqe0_t;

/* RCIRQE1 */
#define ADC12B0_RCIRQE1	(ADC12B0.unRCIRQE1.u32Register)  /*@rg@*/
#define ADC12B0_RCIRQE1_RCIRQE32	(*(volatile uint_io8_t*)0xB7E019E0)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE33	(*(volatile uint_io8_t*)0xB7E019E1)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE34	(*(volatile uint_io8_t*)0xB7E019E2)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE35	(*(volatile uint_io8_t*)0xB7E019E3)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE36	(*(volatile uint_io8_t*)0xB7E019E4)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE37	(*(volatile uint_io8_t*)0xB7E019E5)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE38	(*(volatile uint_io8_t*)0xB7E019E6)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE39	(*(volatile uint_io8_t*)0xB7E019E7)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE40	(*(volatile uint_io8_t*)0xB7E019E8)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE41	(*(volatile uint_io8_t*)0xB7E019E9)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE42	(*(volatile uint_io8_t*)0xB7E019EA)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE43	(*(volatile uint_io8_t*)0xB7E019EB)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE44	(*(volatile uint_io8_t*)0xB7E019EC)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE45	(*(volatile uint_io8_t*)0xB7E019ED)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE46	(*(volatile uint_io8_t*)0xB7E019EE)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE47	(*(volatile uint_io8_t*)0xB7E019EF)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE48	(*(volatile uint_io8_t*)0xB7E019F0)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE49	(*(volatile uint_io8_t*)0xB7E019F1)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE50	(*(volatile uint_io8_t*)0xB7E019F2)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE51	(*(volatile uint_io8_t*)0xB7E019F3)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE52	(*(volatile uint_io8_t*)0xB7E019F4)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE53	(*(volatile uint_io8_t*)0xB7E019F5)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE54	(*(volatile uint_io8_t*)0xB7E019F6)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE55	(*(volatile uint_io8_t*)0xB7E019F7)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE56	(*(volatile uint_io8_t*)0xB7E019F8)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE57	(*(volatile uint_io8_t*)0xB7E019F9)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE58	(*(volatile uint_io8_t*)0xB7E019FA)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE59	(*(volatile uint_io8_t*)0xB7E019FB)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE60	(*(volatile uint_io8_t*)0xB7E019FC)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE61	(*(volatile uint_io8_t*)0xB7E019FD)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE62	(*(volatile uint_io8_t*)0xB7E019FE)  /*@bfbba@*/
#define ADC12B0_RCIRQE1_RCIRQE63	(*(volatile uint_io8_t*)0xB7E019FF)  /*@bfbba@*/

typedef struct stc_adc12b0_rcirqe1_field{
    uint_io32_t		u1RCIRQE32:1;
    uint_io32_t		u1RCIRQE33:1;
    uint_io32_t		u1RCIRQE34:1;
    uint_io32_t		u1RCIRQE35:1;
    uint_io32_t		u1RCIRQE36:1;
    uint_io32_t		u1RCIRQE37:1;
    uint_io32_t		u1RCIRQE38:1;
    uint_io32_t		u1RCIRQE39:1;
    uint_io32_t		u1RCIRQE40:1;
    uint_io32_t		u1RCIRQE41:1;
    uint_io32_t		u1RCIRQE42:1;
    uint_io32_t		u1RCIRQE43:1;
    uint_io32_t		u1RCIRQE44:1;
    uint_io32_t		u1RCIRQE45:1;
    uint_io32_t		u1RCIRQE46:1;
    uint_io32_t		u1RCIRQE47:1;
    uint_io32_t		u1RCIRQE48:1;
    uint_io32_t		u1RCIRQE49:1;
    uint_io32_t		u1RCIRQE50:1;
    uint_io32_t		u1RCIRQE51:1;
    uint_io32_t		u1RCIRQE52:1;
    uint_io32_t		u1RCIRQE53:1;
    uint_io32_t		u1RCIRQE54:1;
    uint_io32_t		u1RCIRQE55:1;
    uint_io32_t		u1RCIRQE56:1;
    uint_io32_t		u1RCIRQE57:1;
    uint_io32_t		u1RCIRQE58:1;
    uint_io32_t		u1RCIRQE59:1;
    uint_io32_t		u1RCIRQE60:1;
    uint_io32_t		u1RCIRQE61:1;
    uint_io32_t		u1RCIRQE62:1;
    uint_io32_t		u1RCIRQE63:1;
}stc_adc12b0_rcirqe1_field_t;

typedef union un_adc12b0_rcirqe1{
    uint_io32_t		u32Register;
    stc_adc12b0_rcirqe1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_rcirqe1_t;

/* RCIRQC0 */
#define ADC12B0_RCIRQC0	(ADC12B0.unRCIRQC0.u32Register)  /*@rg@*/
#define ADC12B0_RCIRQC0_RCIRQC0	(*(volatile uint_io8_t*)0xB7E01A00)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC1	(*(volatile uint_io8_t*)0xB7E01A01)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC2	(*(volatile uint_io8_t*)0xB7E01A02)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC3	(*(volatile uint_io8_t*)0xB7E01A03)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC4	(*(volatile uint_io8_t*)0xB7E01A04)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC5	(*(volatile uint_io8_t*)0xB7E01A05)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC6	(*(volatile uint_io8_t*)0xB7E01A06)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC7	(*(volatile uint_io8_t*)0xB7E01A07)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC8	(*(volatile uint_io8_t*)0xB7E01A08)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC9	(*(volatile uint_io8_t*)0xB7E01A09)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC10	(*(volatile uint_io8_t*)0xB7E01A0A)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC11	(*(volatile uint_io8_t*)0xB7E01A0B)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC12	(*(volatile uint_io8_t*)0xB7E01A0C)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC13	(*(volatile uint_io8_t*)0xB7E01A0D)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC14	(*(volatile uint_io8_t*)0xB7E01A0E)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC15	(*(volatile uint_io8_t*)0xB7E01A0F)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC16	(*(volatile uint_io8_t*)0xB7E01A10)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC17	(*(volatile uint_io8_t*)0xB7E01A11)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC18	(*(volatile uint_io8_t*)0xB7E01A12)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC19	(*(volatile uint_io8_t*)0xB7E01A13)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC20	(*(volatile uint_io8_t*)0xB7E01A14)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC21	(*(volatile uint_io8_t*)0xB7E01A15)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC22	(*(volatile uint_io8_t*)0xB7E01A16)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC23	(*(volatile uint_io8_t*)0xB7E01A17)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC24	(*(volatile uint_io8_t*)0xB7E01A18)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC25	(*(volatile uint_io8_t*)0xB7E01A19)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC26	(*(volatile uint_io8_t*)0xB7E01A1A)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC27	(*(volatile uint_io8_t*)0xB7E01A1B)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC28	(*(volatile uint_io8_t*)0xB7E01A1C)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC29	(*(volatile uint_io8_t*)0xB7E01A1D)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC30	(*(volatile uint_io8_t*)0xB7E01A1E)  /*@bfbba@*/
#define ADC12B0_RCIRQC0_RCIRQC31	(*(volatile uint_io8_t*)0xB7E01A1F)  /*@bfbba@*/

typedef struct stc_adc12b0_rcirqc0_field{
    uint_io32_t		u1RCIRQC0:1;
    uint_io32_t		u1RCIRQC1:1;
    uint_io32_t		u1RCIRQC2:1;
    uint_io32_t		u1RCIRQC3:1;
    uint_io32_t		u1RCIRQC4:1;
    uint_io32_t		u1RCIRQC5:1;
    uint_io32_t		u1RCIRQC6:1;
    uint_io32_t		u1RCIRQC7:1;
    uint_io32_t		u1RCIRQC8:1;
    uint_io32_t		u1RCIRQC9:1;
    uint_io32_t		u1RCIRQC10:1;
    uint_io32_t		u1RCIRQC11:1;
    uint_io32_t		u1RCIRQC12:1;
    uint_io32_t		u1RCIRQC13:1;
    uint_io32_t		u1RCIRQC14:1;
    uint_io32_t		u1RCIRQC15:1;
    uint_io32_t		u1RCIRQC16:1;
    uint_io32_t		u1RCIRQC17:1;
    uint_io32_t		u1RCIRQC18:1;
    uint_io32_t		u1RCIRQC19:1;
    uint_io32_t		u1RCIRQC20:1;
    uint_io32_t		u1RCIRQC21:1;
    uint_io32_t		u1RCIRQC22:1;
    uint_io32_t		u1RCIRQC23:1;
    uint_io32_t		u1RCIRQC24:1;
    uint_io32_t		u1RCIRQC25:1;
    uint_io32_t		u1RCIRQC26:1;
    uint_io32_t		u1RCIRQC27:1;
    uint_io32_t		u1RCIRQC28:1;
    uint_io32_t		u1RCIRQC29:1;
    uint_io32_t		u1RCIRQC30:1;
    uint_io32_t		u1RCIRQC31:1;
}stc_adc12b0_rcirqc0_field_t;

typedef union un_adc12b0_rcirqc0{
    uint_io32_t		u32Register;
    stc_adc12b0_rcirqc0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_rcirqc0_t;

/* RCIRQC1 */
#define ADC12B0_RCIRQC1	(ADC12B0.unRCIRQC1.u32Register)  /*@rg@*/
#define ADC12B0_RCIRQC1_RCIRQC32	(*(volatile uint_io8_t*)0xB7E01A20)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC33	(*(volatile uint_io8_t*)0xB7E01A21)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC34	(*(volatile uint_io8_t*)0xB7E01A22)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC35	(*(volatile uint_io8_t*)0xB7E01A23)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC36	(*(volatile uint_io8_t*)0xB7E01A24)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC37	(*(volatile uint_io8_t*)0xB7E01A25)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC38	(*(volatile uint_io8_t*)0xB7E01A26)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC39	(*(volatile uint_io8_t*)0xB7E01A27)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC40	(*(volatile uint_io8_t*)0xB7E01A28)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC41	(*(volatile uint_io8_t*)0xB7E01A29)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC42	(*(volatile uint_io8_t*)0xB7E01A2A)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC43	(*(volatile uint_io8_t*)0xB7E01A2B)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC44	(*(volatile uint_io8_t*)0xB7E01A2C)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC45	(*(volatile uint_io8_t*)0xB7E01A2D)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC46	(*(volatile uint_io8_t*)0xB7E01A2E)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC47	(*(volatile uint_io8_t*)0xB7E01A2F)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC48	(*(volatile uint_io8_t*)0xB7E01A30)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC49	(*(volatile uint_io8_t*)0xB7E01A31)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC50	(*(volatile uint_io8_t*)0xB7E01A32)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC51	(*(volatile uint_io8_t*)0xB7E01A33)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC52	(*(volatile uint_io8_t*)0xB7E01A34)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC53	(*(volatile uint_io8_t*)0xB7E01A35)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC54	(*(volatile uint_io8_t*)0xB7E01A36)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC55	(*(volatile uint_io8_t*)0xB7E01A37)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC56	(*(volatile uint_io8_t*)0xB7E01A38)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC57	(*(volatile uint_io8_t*)0xB7E01A39)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC58	(*(volatile uint_io8_t*)0xB7E01A3A)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC59	(*(volatile uint_io8_t*)0xB7E01A3B)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC60	(*(volatile uint_io8_t*)0xB7E01A3C)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC61	(*(volatile uint_io8_t*)0xB7E01A3D)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC62	(*(volatile uint_io8_t*)0xB7E01A3E)  /*@bfbba@*/
#define ADC12B0_RCIRQC1_RCIRQC63	(*(volatile uint_io8_t*)0xB7E01A3F)  /*@bfbba@*/

typedef struct stc_adc12b0_rcirqc1_field{
    uint_io32_t		u1RCIRQC32:1;
    uint_io32_t		u1RCIRQC33:1;
    uint_io32_t		u1RCIRQC34:1;
    uint_io32_t		u1RCIRQC35:1;
    uint_io32_t		u1RCIRQC36:1;
    uint_io32_t		u1RCIRQC37:1;
    uint_io32_t		u1RCIRQC38:1;
    uint_io32_t		u1RCIRQC39:1;
    uint_io32_t		u1RCIRQC40:1;
    uint_io32_t		u1RCIRQC41:1;
    uint_io32_t		u1RCIRQC42:1;
    uint_io32_t		u1RCIRQC43:1;
    uint_io32_t		u1RCIRQC44:1;
    uint_io32_t		u1RCIRQC45:1;
    uint_io32_t		u1RCIRQC46:1;
    uint_io32_t		u1RCIRQC47:1;
    uint_io32_t		u1RCIRQC48:1;
    uint_io32_t		u1RCIRQC49:1;
    uint_io32_t		u1RCIRQC50:1;
    uint_io32_t		u1RCIRQC51:1;
    uint_io32_t		u1RCIRQC52:1;
    uint_io32_t		u1RCIRQC53:1;
    uint_io32_t		u1RCIRQC54:1;
    uint_io32_t		u1RCIRQC55:1;
    uint_io32_t		u1RCIRQC56:1;
    uint_io32_t		u1RCIRQC57:1;
    uint_io32_t		u1RCIRQC58:1;
    uint_io32_t		u1RCIRQC59:1;
    uint_io32_t		u1RCIRQC60:1;
    uint_io32_t		u1RCIRQC61:1;
    uint_io32_t		u1RCIRQC62:1;
    uint_io32_t		u1RCIRQC63:1;
}stc_adc12b0_rcirqc1_field_t;

typedef union un_adc12b0_rcirqc1{
    uint_io32_t		u32Register;
    stc_adc12b0_rcirqc1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_rcirqc1_t;

/* PCIRQ0 */
#define ADC12B0_PCIRQ0	(ADC12B0.unPCIRQ0.u32Register)  /*@rg@*/
#define ADC12B0_PCIRQ0_PCIRQ0	(*(volatile uint_io8_t*)0xB7E01A40)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ1	(*(volatile uint_io8_t*)0xB7E01A41)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ2	(*(volatile uint_io8_t*)0xB7E01A42)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ3	(*(volatile uint_io8_t*)0xB7E01A43)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ4	(*(volatile uint_io8_t*)0xB7E01A44)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ5	(*(volatile uint_io8_t*)0xB7E01A45)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ6	(*(volatile uint_io8_t*)0xB7E01A46)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ7	(*(volatile uint_io8_t*)0xB7E01A47)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ8	(*(volatile uint_io8_t*)0xB7E01A48)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ9	(*(volatile uint_io8_t*)0xB7E01A49)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ10	(*(volatile uint_io8_t*)0xB7E01A4A)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ11	(*(volatile uint_io8_t*)0xB7E01A4B)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ12	(*(volatile uint_io8_t*)0xB7E01A4C)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ13	(*(volatile uint_io8_t*)0xB7E01A4D)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ14	(*(volatile uint_io8_t*)0xB7E01A4E)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ15	(*(volatile uint_io8_t*)0xB7E01A4F)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ16	(*(volatile uint_io8_t*)0xB7E01A50)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ17	(*(volatile uint_io8_t*)0xB7E01A51)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ18	(*(volatile uint_io8_t*)0xB7E01A52)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ19	(*(volatile uint_io8_t*)0xB7E01A53)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ20	(*(volatile uint_io8_t*)0xB7E01A54)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ21	(*(volatile uint_io8_t*)0xB7E01A55)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ22	(*(volatile uint_io8_t*)0xB7E01A56)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ23	(*(volatile uint_io8_t*)0xB7E01A57)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ24	(*(volatile uint_io8_t*)0xB7E01A58)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ25	(*(volatile uint_io8_t*)0xB7E01A59)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ26	(*(volatile uint_io8_t*)0xB7E01A5A)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ27	(*(volatile uint_io8_t*)0xB7E01A5B)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ28	(*(volatile uint_io8_t*)0xB7E01A5C)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ29	(*(volatile uint_io8_t*)0xB7E01A5D)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ30	(*(volatile uint_io8_t*)0xB7E01A5E)  /*@bfbba@*/
#define ADC12B0_PCIRQ0_PCIRQ31	(*(volatile uint_io8_t*)0xB7E01A5F)  /*@bfbba@*/

typedef struct stc_adc12b0_pcirq0_field{
    uint_io32_t		u1PCIRQ0:1;
    uint_io32_t		u1PCIRQ1:1;
    uint_io32_t		u1PCIRQ2:1;
    uint_io32_t		u1PCIRQ3:1;
    uint_io32_t		u1PCIRQ4:1;
    uint_io32_t		u1PCIRQ5:1;
    uint_io32_t		u1PCIRQ6:1;
    uint_io32_t		u1PCIRQ7:1;
    uint_io32_t		u1PCIRQ8:1;
    uint_io32_t		u1PCIRQ9:1;
    uint_io32_t		u1PCIRQ10:1;
    uint_io32_t		u1PCIRQ11:1;
    uint_io32_t		u1PCIRQ12:1;
    uint_io32_t		u1PCIRQ13:1;
    uint_io32_t		u1PCIRQ14:1;
    uint_io32_t		u1PCIRQ15:1;
    uint_io32_t		u1PCIRQ16:1;
    uint_io32_t		u1PCIRQ17:1;
    uint_io32_t		u1PCIRQ18:1;
    uint_io32_t		u1PCIRQ19:1;
    uint_io32_t		u1PCIRQ20:1;
    uint_io32_t		u1PCIRQ21:1;
    uint_io32_t		u1PCIRQ22:1;
    uint_io32_t		u1PCIRQ23:1;
    uint_io32_t		u1PCIRQ24:1;
    uint_io32_t		u1PCIRQ25:1;
    uint_io32_t		u1PCIRQ26:1;
    uint_io32_t		u1PCIRQ27:1;
    uint_io32_t		u1PCIRQ28:1;
    uint_io32_t		u1PCIRQ29:1;
    uint_io32_t		u1PCIRQ30:1;
    uint_io32_t		u1PCIRQ31:1;
}stc_adc12b0_pcirq0_field_t;

typedef union un_adc12b0_pcirq0{
    uint_io32_t		u32Register;
    stc_adc12b0_pcirq0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_pcirq0_t;

/* PCIRQ1 */
#define ADC12B0_PCIRQ1	(ADC12B0.unPCIRQ1.u32Register)  /*@rg@*/
#define ADC12B0_PCIRQ1_PCIRQ32	(*(volatile uint_io8_t*)0xB7E01A60)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ33	(*(volatile uint_io8_t*)0xB7E01A61)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ34	(*(volatile uint_io8_t*)0xB7E01A62)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ35	(*(volatile uint_io8_t*)0xB7E01A63)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ36	(*(volatile uint_io8_t*)0xB7E01A64)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ37	(*(volatile uint_io8_t*)0xB7E01A65)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ38	(*(volatile uint_io8_t*)0xB7E01A66)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ39	(*(volatile uint_io8_t*)0xB7E01A67)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ40	(*(volatile uint_io8_t*)0xB7E01A68)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ41	(*(volatile uint_io8_t*)0xB7E01A69)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ42	(*(volatile uint_io8_t*)0xB7E01A6A)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ43	(*(volatile uint_io8_t*)0xB7E01A6B)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ44	(*(volatile uint_io8_t*)0xB7E01A6C)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ45	(*(volatile uint_io8_t*)0xB7E01A6D)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ46	(*(volatile uint_io8_t*)0xB7E01A6E)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ47	(*(volatile uint_io8_t*)0xB7E01A6F)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ48	(*(volatile uint_io8_t*)0xB7E01A70)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ49	(*(volatile uint_io8_t*)0xB7E01A71)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ50	(*(volatile uint_io8_t*)0xB7E01A72)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ51	(*(volatile uint_io8_t*)0xB7E01A73)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ52	(*(volatile uint_io8_t*)0xB7E01A74)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ53	(*(volatile uint_io8_t*)0xB7E01A75)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ54	(*(volatile uint_io8_t*)0xB7E01A76)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ55	(*(volatile uint_io8_t*)0xB7E01A77)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ56	(*(volatile uint_io8_t*)0xB7E01A78)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ57	(*(volatile uint_io8_t*)0xB7E01A79)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ58	(*(volatile uint_io8_t*)0xB7E01A7A)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ59	(*(volatile uint_io8_t*)0xB7E01A7B)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ60	(*(volatile uint_io8_t*)0xB7E01A7C)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ61	(*(volatile uint_io8_t*)0xB7E01A7D)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ62	(*(volatile uint_io8_t*)0xB7E01A7E)  /*@bfbba@*/
#define ADC12B0_PCIRQ1_PCIRQ63	(*(volatile uint_io8_t*)0xB7E01A7F)  /*@bfbba@*/

typedef struct stc_adc12b0_pcirq1_field{
    uint_io32_t		u1PCIRQ32:1;
    uint_io32_t		u1PCIRQ33:1;
    uint_io32_t		u1PCIRQ34:1;
    uint_io32_t		u1PCIRQ35:1;
    uint_io32_t		u1PCIRQ36:1;
    uint_io32_t		u1PCIRQ37:1;
    uint_io32_t		u1PCIRQ38:1;
    uint_io32_t		u1PCIRQ39:1;
    uint_io32_t		u1PCIRQ40:1;
    uint_io32_t		u1PCIRQ41:1;
    uint_io32_t		u1PCIRQ42:1;
    uint_io32_t		u1PCIRQ43:1;
    uint_io32_t		u1PCIRQ44:1;
    uint_io32_t		u1PCIRQ45:1;
    uint_io32_t		u1PCIRQ46:1;
    uint_io32_t		u1PCIRQ47:1;
    uint_io32_t		u1PCIRQ48:1;
    uint_io32_t		u1PCIRQ49:1;
    uint_io32_t		u1PCIRQ50:1;
    uint_io32_t		u1PCIRQ51:1;
    uint_io32_t		u1PCIRQ52:1;
    uint_io32_t		u1PCIRQ53:1;
    uint_io32_t		u1PCIRQ54:1;
    uint_io32_t		u1PCIRQ55:1;
    uint_io32_t		u1PCIRQ56:1;
    uint_io32_t		u1PCIRQ57:1;
    uint_io32_t		u1PCIRQ58:1;
    uint_io32_t		u1PCIRQ59:1;
    uint_io32_t		u1PCIRQ60:1;
    uint_io32_t		u1PCIRQ61:1;
    uint_io32_t		u1PCIRQ62:1;
    uint_io32_t		u1PCIRQ63:1;
}stc_adc12b0_pcirq1_field_t;

typedef union un_adc12b0_pcirq1{
    uint_io32_t		u32Register;
    stc_adc12b0_pcirq1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_pcirq1_t;

/* PCIRQE0 */
#define ADC12B0_PCIRQE0	(ADC12B0.unPCIRQE0.u32Register)  /*@rg@*/
#define ADC12B0_PCIRQE0_PCIRQE0	(*(volatile uint_io8_t*)0xB7E01A80)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE1	(*(volatile uint_io8_t*)0xB7E01A81)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE2	(*(volatile uint_io8_t*)0xB7E01A82)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE3	(*(volatile uint_io8_t*)0xB7E01A83)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE4	(*(volatile uint_io8_t*)0xB7E01A84)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE5	(*(volatile uint_io8_t*)0xB7E01A85)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE6	(*(volatile uint_io8_t*)0xB7E01A86)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE7	(*(volatile uint_io8_t*)0xB7E01A87)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE8	(*(volatile uint_io8_t*)0xB7E01A88)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE9	(*(volatile uint_io8_t*)0xB7E01A89)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE10	(*(volatile uint_io8_t*)0xB7E01A8A)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE11	(*(volatile uint_io8_t*)0xB7E01A8B)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE12	(*(volatile uint_io8_t*)0xB7E01A8C)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE13	(*(volatile uint_io8_t*)0xB7E01A8D)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE14	(*(volatile uint_io8_t*)0xB7E01A8E)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE15	(*(volatile uint_io8_t*)0xB7E01A8F)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE16	(*(volatile uint_io8_t*)0xB7E01A90)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE17	(*(volatile uint_io8_t*)0xB7E01A91)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE18	(*(volatile uint_io8_t*)0xB7E01A92)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE19	(*(volatile uint_io8_t*)0xB7E01A93)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE20	(*(volatile uint_io8_t*)0xB7E01A94)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE21	(*(volatile uint_io8_t*)0xB7E01A95)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE22	(*(volatile uint_io8_t*)0xB7E01A96)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE23	(*(volatile uint_io8_t*)0xB7E01A97)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE24	(*(volatile uint_io8_t*)0xB7E01A98)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE25	(*(volatile uint_io8_t*)0xB7E01A99)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE26	(*(volatile uint_io8_t*)0xB7E01A9A)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE27	(*(volatile uint_io8_t*)0xB7E01A9B)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE28	(*(volatile uint_io8_t*)0xB7E01A9C)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE29	(*(volatile uint_io8_t*)0xB7E01A9D)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE30	(*(volatile uint_io8_t*)0xB7E01A9E)  /*@bfbba@*/
#define ADC12B0_PCIRQE0_PCIRQE31	(*(volatile uint_io8_t*)0xB7E01A9F)  /*@bfbba@*/

typedef struct stc_adc12b0_pcirqe0_field{
    uint_io32_t		u1PCIRQE0:1;
    uint_io32_t		u1PCIRQE1:1;
    uint_io32_t		u1PCIRQE2:1;
    uint_io32_t		u1PCIRQE3:1;
    uint_io32_t		u1PCIRQE4:1;
    uint_io32_t		u1PCIRQE5:1;
    uint_io32_t		u1PCIRQE6:1;
    uint_io32_t		u1PCIRQE7:1;
    uint_io32_t		u1PCIRQE8:1;
    uint_io32_t		u1PCIRQE9:1;
    uint_io32_t		u1PCIRQE10:1;
    uint_io32_t		u1PCIRQE11:1;
    uint_io32_t		u1PCIRQE12:1;
    uint_io32_t		u1PCIRQE13:1;
    uint_io32_t		u1PCIRQE14:1;
    uint_io32_t		u1PCIRQE15:1;
    uint_io32_t		u1PCIRQE16:1;
    uint_io32_t		u1PCIRQE17:1;
    uint_io32_t		u1PCIRQE18:1;
    uint_io32_t		u1PCIRQE19:1;
    uint_io32_t		u1PCIRQE20:1;
    uint_io32_t		u1PCIRQE21:1;
    uint_io32_t		u1PCIRQE22:1;
    uint_io32_t		u1PCIRQE23:1;
    uint_io32_t		u1PCIRQE24:1;
    uint_io32_t		u1PCIRQE25:1;
    uint_io32_t		u1PCIRQE26:1;
    uint_io32_t		u1PCIRQE27:1;
    uint_io32_t		u1PCIRQE28:1;
    uint_io32_t		u1PCIRQE29:1;
    uint_io32_t		u1PCIRQE30:1;
    uint_io32_t		u1PCIRQE31:1;
}stc_adc12b0_pcirqe0_field_t;

typedef union un_adc12b0_pcirqe0{
    uint_io32_t		u32Register;
    stc_adc12b0_pcirqe0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_pcirqe0_t;

/* PCIRQE1 */
#define ADC12B0_PCIRQE1	(ADC12B0.unPCIRQE1.u32Register)  /*@rg@*/
#define ADC12B0_PCIRQE1_PCIRQE32	(*(volatile uint_io8_t*)0xB7E01AA0)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE33	(*(volatile uint_io8_t*)0xB7E01AA1)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE34	(*(volatile uint_io8_t*)0xB7E01AA2)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE35	(*(volatile uint_io8_t*)0xB7E01AA3)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE36	(*(volatile uint_io8_t*)0xB7E01AA4)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE37	(*(volatile uint_io8_t*)0xB7E01AA5)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE38	(*(volatile uint_io8_t*)0xB7E01AA6)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE39	(*(volatile uint_io8_t*)0xB7E01AA7)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE40	(*(volatile uint_io8_t*)0xB7E01AA8)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE41	(*(volatile uint_io8_t*)0xB7E01AA9)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE42	(*(volatile uint_io8_t*)0xB7E01AAA)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE43	(*(volatile uint_io8_t*)0xB7E01AAB)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE44	(*(volatile uint_io8_t*)0xB7E01AAC)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE45	(*(volatile uint_io8_t*)0xB7E01AAD)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE46	(*(volatile uint_io8_t*)0xB7E01AAE)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE47	(*(volatile uint_io8_t*)0xB7E01AAF)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE48	(*(volatile uint_io8_t*)0xB7E01AB0)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE49	(*(volatile uint_io8_t*)0xB7E01AB1)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE50	(*(volatile uint_io8_t*)0xB7E01AB2)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE51	(*(volatile uint_io8_t*)0xB7E01AB3)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE52	(*(volatile uint_io8_t*)0xB7E01AB4)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE53	(*(volatile uint_io8_t*)0xB7E01AB5)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE54	(*(volatile uint_io8_t*)0xB7E01AB6)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE55	(*(volatile uint_io8_t*)0xB7E01AB7)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE56	(*(volatile uint_io8_t*)0xB7E01AB8)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE57	(*(volatile uint_io8_t*)0xB7E01AB9)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE58	(*(volatile uint_io8_t*)0xB7E01ABA)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE59	(*(volatile uint_io8_t*)0xB7E01ABB)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE60	(*(volatile uint_io8_t*)0xB7E01ABC)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE61	(*(volatile uint_io8_t*)0xB7E01ABD)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE62	(*(volatile uint_io8_t*)0xB7E01ABE)  /*@bfbba@*/
#define ADC12B0_PCIRQE1_PCIRQE63	(*(volatile uint_io8_t*)0xB7E01ABF)  /*@bfbba@*/

typedef struct stc_adc12b0_pcirqe1_field{
    uint_io32_t		u1PCIRQE32:1;
    uint_io32_t		u1PCIRQE33:1;
    uint_io32_t		u1PCIRQE34:1;
    uint_io32_t		u1PCIRQE35:1;
    uint_io32_t		u1PCIRQE36:1;
    uint_io32_t		u1PCIRQE37:1;
    uint_io32_t		u1PCIRQE38:1;
    uint_io32_t		u1PCIRQE39:1;
    uint_io32_t		u1PCIRQE40:1;
    uint_io32_t		u1PCIRQE41:1;
    uint_io32_t		u1PCIRQE42:1;
    uint_io32_t		u1PCIRQE43:1;
    uint_io32_t		u1PCIRQE44:1;
    uint_io32_t		u1PCIRQE45:1;
    uint_io32_t		u1PCIRQE46:1;
    uint_io32_t		u1PCIRQE47:1;
    uint_io32_t		u1PCIRQE48:1;
    uint_io32_t		u1PCIRQE49:1;
    uint_io32_t		u1PCIRQE50:1;
    uint_io32_t		u1PCIRQE51:1;
    uint_io32_t		u1PCIRQE52:1;
    uint_io32_t		u1PCIRQE53:1;
    uint_io32_t		u1PCIRQE54:1;
    uint_io32_t		u1PCIRQE55:1;
    uint_io32_t		u1PCIRQE56:1;
    uint_io32_t		u1PCIRQE57:1;
    uint_io32_t		u1PCIRQE58:1;
    uint_io32_t		u1PCIRQE59:1;
    uint_io32_t		u1PCIRQE60:1;
    uint_io32_t		u1PCIRQE61:1;
    uint_io32_t		u1PCIRQE62:1;
    uint_io32_t		u1PCIRQE63:1;
}stc_adc12b0_pcirqe1_field_t;

typedef union un_adc12b0_pcirqe1{
    uint_io32_t		u32Register;
    stc_adc12b0_pcirqe1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_pcirqe1_t;

/* PCIRQC0 */
#define ADC12B0_PCIRQC0	(ADC12B0.unPCIRQC0.u32Register)  /*@rg@*/
#define ADC12B0_PCIRQC0_PCIRQC0	(*(volatile uint_io8_t*)0xB7E01AC0)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC1	(*(volatile uint_io8_t*)0xB7E01AC1)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC2	(*(volatile uint_io8_t*)0xB7E01AC2)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC3	(*(volatile uint_io8_t*)0xB7E01AC3)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC4	(*(volatile uint_io8_t*)0xB7E01AC4)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC5	(*(volatile uint_io8_t*)0xB7E01AC5)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC6	(*(volatile uint_io8_t*)0xB7E01AC6)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC7	(*(volatile uint_io8_t*)0xB7E01AC7)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC8	(*(volatile uint_io8_t*)0xB7E01AC8)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC9	(*(volatile uint_io8_t*)0xB7E01AC9)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC10	(*(volatile uint_io8_t*)0xB7E01ACA)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC11	(*(volatile uint_io8_t*)0xB7E01ACB)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC12	(*(volatile uint_io8_t*)0xB7E01ACC)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC13	(*(volatile uint_io8_t*)0xB7E01ACD)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC14	(*(volatile uint_io8_t*)0xB7E01ACE)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC15	(*(volatile uint_io8_t*)0xB7E01ACF)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC16	(*(volatile uint_io8_t*)0xB7E01AD0)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC17	(*(volatile uint_io8_t*)0xB7E01AD1)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC18	(*(volatile uint_io8_t*)0xB7E01AD2)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC19	(*(volatile uint_io8_t*)0xB7E01AD3)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC20	(*(volatile uint_io8_t*)0xB7E01AD4)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC21	(*(volatile uint_io8_t*)0xB7E01AD5)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC22	(*(volatile uint_io8_t*)0xB7E01AD6)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC23	(*(volatile uint_io8_t*)0xB7E01AD7)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC24	(*(volatile uint_io8_t*)0xB7E01AD8)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC25	(*(volatile uint_io8_t*)0xB7E01AD9)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC26	(*(volatile uint_io8_t*)0xB7E01ADA)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC27	(*(volatile uint_io8_t*)0xB7E01ADB)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC28	(*(volatile uint_io8_t*)0xB7E01ADC)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC29	(*(volatile uint_io8_t*)0xB7E01ADD)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC30	(*(volatile uint_io8_t*)0xB7E01ADE)  /*@bfbba@*/
#define ADC12B0_PCIRQC0_PCIRQC31	(*(volatile uint_io8_t*)0xB7E01ADF)  /*@bfbba@*/

typedef struct stc_adc12b0_pcirqc0_field{
    uint_io32_t		u1PCIRQC0:1;
    uint_io32_t		u1PCIRQC1:1;
    uint_io32_t		u1PCIRQC2:1;
    uint_io32_t		u1PCIRQC3:1;
    uint_io32_t		u1PCIRQC4:1;
    uint_io32_t		u1PCIRQC5:1;
    uint_io32_t		u1PCIRQC6:1;
    uint_io32_t		u1PCIRQC7:1;
    uint_io32_t		u1PCIRQC8:1;
    uint_io32_t		u1PCIRQC9:1;
    uint_io32_t		u1PCIRQC10:1;
    uint_io32_t		u1PCIRQC11:1;
    uint_io32_t		u1PCIRQC12:1;
    uint_io32_t		u1PCIRQC13:1;
    uint_io32_t		u1PCIRQC14:1;
    uint_io32_t		u1PCIRQC15:1;
    uint_io32_t		u1PCIRQC16:1;
    uint_io32_t		u1PCIRQC17:1;
    uint_io32_t		u1PCIRQC18:1;
    uint_io32_t		u1PCIRQC19:1;
    uint_io32_t		u1PCIRQC20:1;
    uint_io32_t		u1PCIRQC21:1;
    uint_io32_t		u1PCIRQC22:1;
    uint_io32_t		u1PCIRQC23:1;
    uint_io32_t		u1PCIRQC24:1;
    uint_io32_t		u1PCIRQC25:1;
    uint_io32_t		u1PCIRQC26:1;
    uint_io32_t		u1PCIRQC27:1;
    uint_io32_t		u1PCIRQC28:1;
    uint_io32_t		u1PCIRQC29:1;
    uint_io32_t		u1PCIRQC30:1;
    uint_io32_t		u1PCIRQC31:1;
}stc_adc12b0_pcirqc0_field_t;

typedef union un_adc12b0_pcirqc0{
    uint_io32_t		u32Register;
    stc_adc12b0_pcirqc0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_pcirqc0_t;

/* PCIRQC1 */
#define ADC12B0_PCIRQC1	(ADC12B0.unPCIRQC1.u32Register)  /*@rg@*/
#define ADC12B0_PCIRQC1_PCIRQC32	(*(volatile uint_io8_t*)0xB7E01AE0)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC33	(*(volatile uint_io8_t*)0xB7E01AE1)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC34	(*(volatile uint_io8_t*)0xB7E01AE2)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC35	(*(volatile uint_io8_t*)0xB7E01AE3)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC36	(*(volatile uint_io8_t*)0xB7E01AE4)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC37	(*(volatile uint_io8_t*)0xB7E01AE5)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC38	(*(volatile uint_io8_t*)0xB7E01AE6)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC39	(*(volatile uint_io8_t*)0xB7E01AE7)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC40	(*(volatile uint_io8_t*)0xB7E01AE8)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC41	(*(volatile uint_io8_t*)0xB7E01AE9)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC42	(*(volatile uint_io8_t*)0xB7E01AEA)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC43	(*(volatile uint_io8_t*)0xB7E01AEB)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC44	(*(volatile uint_io8_t*)0xB7E01AEC)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC45	(*(volatile uint_io8_t*)0xB7E01AED)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC46	(*(volatile uint_io8_t*)0xB7E01AEE)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC47	(*(volatile uint_io8_t*)0xB7E01AEF)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC48	(*(volatile uint_io8_t*)0xB7E01AF0)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC49	(*(volatile uint_io8_t*)0xB7E01AF1)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC50	(*(volatile uint_io8_t*)0xB7E01AF2)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC51	(*(volatile uint_io8_t*)0xB7E01AF3)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC52	(*(volatile uint_io8_t*)0xB7E01AF4)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC53	(*(volatile uint_io8_t*)0xB7E01AF5)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC54	(*(volatile uint_io8_t*)0xB7E01AF6)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC55	(*(volatile uint_io8_t*)0xB7E01AF7)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC56	(*(volatile uint_io8_t*)0xB7E01AF8)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC57	(*(volatile uint_io8_t*)0xB7E01AF9)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC58	(*(volatile uint_io8_t*)0xB7E01AFA)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC59	(*(volatile uint_io8_t*)0xB7E01AFB)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC60	(*(volatile uint_io8_t*)0xB7E01AFC)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC61	(*(volatile uint_io8_t*)0xB7E01AFD)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC62	(*(volatile uint_io8_t*)0xB7E01AFE)  /*@bfbba@*/
#define ADC12B0_PCIRQC1_PCIRQC63	(*(volatile uint_io8_t*)0xB7E01AFF)  /*@bfbba@*/

typedef struct stc_adc12b0_pcirqc1_field{
    uint_io32_t		u1PCIRQC32:1;
    uint_io32_t		u1PCIRQC33:1;
    uint_io32_t		u1PCIRQC34:1;
    uint_io32_t		u1PCIRQC35:1;
    uint_io32_t		u1PCIRQC36:1;
    uint_io32_t		u1PCIRQC37:1;
    uint_io32_t		u1PCIRQC38:1;
    uint_io32_t		u1PCIRQC39:1;
    uint_io32_t		u1PCIRQC40:1;
    uint_io32_t		u1PCIRQC41:1;
    uint_io32_t		u1PCIRQC42:1;
    uint_io32_t		u1PCIRQC43:1;
    uint_io32_t		u1PCIRQC44:1;
    uint_io32_t		u1PCIRQC45:1;
    uint_io32_t		u1PCIRQC46:1;
    uint_io32_t		u1PCIRQC47:1;
    uint_io32_t		u1PCIRQC48:1;
    uint_io32_t		u1PCIRQC49:1;
    uint_io32_t		u1PCIRQC50:1;
    uint_io32_t		u1PCIRQC51:1;
    uint_io32_t		u1PCIRQC52:1;
    uint_io32_t		u1PCIRQC53:1;
    uint_io32_t		u1PCIRQC54:1;
    uint_io32_t		u1PCIRQC55:1;
    uint_io32_t		u1PCIRQC56:1;
    uint_io32_t		u1PCIRQC57:1;
    uint_io32_t		u1PCIRQC58:1;
    uint_io32_t		u1PCIRQC59:1;
    uint_io32_t		u1PCIRQC60:1;
    uint_io32_t		u1PCIRQC61:1;
    uint_io32_t		u1PCIRQC62:1;
    uint_io32_t		u1PCIRQC63:1;
}stc_adc12b0_pcirqc1_field_t;

typedef union un_adc12b0_pcirqc1{
    uint_io32_t		u32Register;
    stc_adc12b0_pcirqc1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_pcirqc1_t;

/* TRGST0 */
#define ADC12B0_TRGST0	(ADC12B0.unTRGST0.u32Register)  /*@rg@*/
#define ADC12B0_TRGST0_TRGST0	(*(volatile uint_io8_t*)0xB7E01B00)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST1	(*(volatile uint_io8_t*)0xB7E01B01)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST2	(*(volatile uint_io8_t*)0xB7E01B02)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST3	(*(volatile uint_io8_t*)0xB7E01B03)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST4	(*(volatile uint_io8_t*)0xB7E01B04)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST5	(*(volatile uint_io8_t*)0xB7E01B05)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST6	(*(volatile uint_io8_t*)0xB7E01B06)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST7	(*(volatile uint_io8_t*)0xB7E01B07)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST8	(*(volatile uint_io8_t*)0xB7E01B08)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST9	(*(volatile uint_io8_t*)0xB7E01B09)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST10	(*(volatile uint_io8_t*)0xB7E01B0A)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST11	(*(volatile uint_io8_t*)0xB7E01B0B)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST12	(*(volatile uint_io8_t*)0xB7E01B0C)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST13	(*(volatile uint_io8_t*)0xB7E01B0D)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST14	(*(volatile uint_io8_t*)0xB7E01B0E)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST15	(*(volatile uint_io8_t*)0xB7E01B0F)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST16	(*(volatile uint_io8_t*)0xB7E01B10)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST17	(*(volatile uint_io8_t*)0xB7E01B11)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST18	(*(volatile uint_io8_t*)0xB7E01B12)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST19	(*(volatile uint_io8_t*)0xB7E01B13)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST20	(*(volatile uint_io8_t*)0xB7E01B14)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST21	(*(volatile uint_io8_t*)0xB7E01B15)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST22	(*(volatile uint_io8_t*)0xB7E01B16)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST23	(*(volatile uint_io8_t*)0xB7E01B17)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST24	(*(volatile uint_io8_t*)0xB7E01B18)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST25	(*(volatile uint_io8_t*)0xB7E01B19)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST26	(*(volatile uint_io8_t*)0xB7E01B1A)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST27	(*(volatile uint_io8_t*)0xB7E01B1B)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST28	(*(volatile uint_io8_t*)0xB7E01B1C)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST29	(*(volatile uint_io8_t*)0xB7E01B1D)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST30	(*(volatile uint_io8_t*)0xB7E01B1E)  /*@bfbba@*/
#define ADC12B0_TRGST0_TRGST31	(*(volatile uint_io8_t*)0xB7E01B1F)  /*@bfbba@*/

typedef struct stc_adc12b0_trgst0_field{
    uint_io32_t		u1TRGST0:1;
    uint_io32_t		u1TRGST1:1;
    uint_io32_t		u1TRGST2:1;
    uint_io32_t		u1TRGST3:1;
    uint_io32_t		u1TRGST4:1;
    uint_io32_t		u1TRGST5:1;
    uint_io32_t		u1TRGST6:1;
    uint_io32_t		u1TRGST7:1;
    uint_io32_t		u1TRGST8:1;
    uint_io32_t		u1TRGST9:1;
    uint_io32_t		u1TRGST10:1;
    uint_io32_t		u1TRGST11:1;
    uint_io32_t		u1TRGST12:1;
    uint_io32_t		u1TRGST13:1;
    uint_io32_t		u1TRGST14:1;
    uint_io32_t		u1TRGST15:1;
    uint_io32_t		u1TRGST16:1;
    uint_io32_t		u1TRGST17:1;
    uint_io32_t		u1TRGST18:1;
    uint_io32_t		u1TRGST19:1;
    uint_io32_t		u1TRGST20:1;
    uint_io32_t		u1TRGST21:1;
    uint_io32_t		u1TRGST22:1;
    uint_io32_t		u1TRGST23:1;
    uint_io32_t		u1TRGST24:1;
    uint_io32_t		u1TRGST25:1;
    uint_io32_t		u1TRGST26:1;
    uint_io32_t		u1TRGST27:1;
    uint_io32_t		u1TRGST28:1;
    uint_io32_t		u1TRGST29:1;
    uint_io32_t		u1TRGST30:1;
    uint_io32_t		u1TRGST31:1;
}stc_adc12b0_trgst0_field_t;

typedef union un_adc12b0_trgst0{
    uint_io32_t		u32Register;
    stc_adc12b0_trgst0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_trgst0_t;

/* TRGST1 */
#define ADC12B0_TRGST1	(ADC12B0.unTRGST1.u32Register)  /*@rg@*/
#define ADC12B0_TRGST1_TRGST32	(*(volatile uint_io8_t*)0xB7E01B20)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST33	(*(volatile uint_io8_t*)0xB7E01B21)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST34	(*(volatile uint_io8_t*)0xB7E01B22)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST35	(*(volatile uint_io8_t*)0xB7E01B23)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST36	(*(volatile uint_io8_t*)0xB7E01B24)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST37	(*(volatile uint_io8_t*)0xB7E01B25)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST38	(*(volatile uint_io8_t*)0xB7E01B26)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST39	(*(volatile uint_io8_t*)0xB7E01B27)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST40	(*(volatile uint_io8_t*)0xB7E01B28)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST41	(*(volatile uint_io8_t*)0xB7E01B29)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST42	(*(volatile uint_io8_t*)0xB7E01B2A)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST43	(*(volatile uint_io8_t*)0xB7E01B2B)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST44	(*(volatile uint_io8_t*)0xB7E01B2C)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST45	(*(volatile uint_io8_t*)0xB7E01B2D)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST46	(*(volatile uint_io8_t*)0xB7E01B2E)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST47	(*(volatile uint_io8_t*)0xB7E01B2F)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST48	(*(volatile uint_io8_t*)0xB7E01B30)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST49	(*(volatile uint_io8_t*)0xB7E01B31)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST50	(*(volatile uint_io8_t*)0xB7E01B32)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST51	(*(volatile uint_io8_t*)0xB7E01B33)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST52	(*(volatile uint_io8_t*)0xB7E01B34)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST53	(*(volatile uint_io8_t*)0xB7E01B35)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST54	(*(volatile uint_io8_t*)0xB7E01B36)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST55	(*(volatile uint_io8_t*)0xB7E01B37)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST56	(*(volatile uint_io8_t*)0xB7E01B38)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST57	(*(volatile uint_io8_t*)0xB7E01B39)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST58	(*(volatile uint_io8_t*)0xB7E01B3A)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST59	(*(volatile uint_io8_t*)0xB7E01B3B)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST60	(*(volatile uint_io8_t*)0xB7E01B3C)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST61	(*(volatile uint_io8_t*)0xB7E01B3D)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST62	(*(volatile uint_io8_t*)0xB7E01B3E)  /*@bfbba@*/
#define ADC12B0_TRGST1_TRGST63	(*(volatile uint_io8_t*)0xB7E01B3F)  /*@bfbba@*/

typedef struct stc_adc12b0_trgst1_field{
    uint_io32_t		u1TRGST32:1;
    uint_io32_t		u1TRGST33:1;
    uint_io32_t		u1TRGST34:1;
    uint_io32_t		u1TRGST35:1;
    uint_io32_t		u1TRGST36:1;
    uint_io32_t		u1TRGST37:1;
    uint_io32_t		u1TRGST38:1;
    uint_io32_t		u1TRGST39:1;
    uint_io32_t		u1TRGST40:1;
    uint_io32_t		u1TRGST41:1;
    uint_io32_t		u1TRGST42:1;
    uint_io32_t		u1TRGST43:1;
    uint_io32_t		u1TRGST44:1;
    uint_io32_t		u1TRGST45:1;
    uint_io32_t		u1TRGST46:1;
    uint_io32_t		u1TRGST47:1;
    uint_io32_t		u1TRGST48:1;
    uint_io32_t		u1TRGST49:1;
    uint_io32_t		u1TRGST50:1;
    uint_io32_t		u1TRGST51:1;
    uint_io32_t		u1TRGST52:1;
    uint_io32_t		u1TRGST53:1;
    uint_io32_t		u1TRGST54:1;
    uint_io32_t		u1TRGST55:1;
    uint_io32_t		u1TRGST56:1;
    uint_io32_t		u1TRGST57:1;
    uint_io32_t		u1TRGST58:1;
    uint_io32_t		u1TRGST59:1;
    uint_io32_t		u1TRGST60:1;
    uint_io32_t		u1TRGST61:1;
    uint_io32_t		u1TRGST62:1;
    uint_io32_t		u1TRGST63:1;
}stc_adc12b0_trgst1_field_t;

typedef union un_adc12b0_trgst1{
    uint_io32_t		u32Register;
    stc_adc12b0_trgst1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_trgst1_t;

/* TRGCL0 */
#define ADC12B0_TRGCL0	(ADC12B0.unTRGCL0.u32Register)  /*@rg@*/
#define ADC12B0_TRGCL0_TRGCL0	(*(volatile uint_io8_t*)0xB7E01B40)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL1	(*(volatile uint_io8_t*)0xB7E01B41)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL2	(*(volatile uint_io8_t*)0xB7E01B42)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL3	(*(volatile uint_io8_t*)0xB7E01B43)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL4	(*(volatile uint_io8_t*)0xB7E01B44)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL5	(*(volatile uint_io8_t*)0xB7E01B45)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL6	(*(volatile uint_io8_t*)0xB7E01B46)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL7	(*(volatile uint_io8_t*)0xB7E01B47)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL8	(*(volatile uint_io8_t*)0xB7E01B48)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL9	(*(volatile uint_io8_t*)0xB7E01B49)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL10	(*(volatile uint_io8_t*)0xB7E01B4A)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL11	(*(volatile uint_io8_t*)0xB7E01B4B)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL12	(*(volatile uint_io8_t*)0xB7E01B4C)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL13	(*(volatile uint_io8_t*)0xB7E01B4D)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL14	(*(volatile uint_io8_t*)0xB7E01B4E)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL15	(*(volatile uint_io8_t*)0xB7E01B4F)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL16	(*(volatile uint_io8_t*)0xB7E01B50)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL17	(*(volatile uint_io8_t*)0xB7E01B51)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL18	(*(volatile uint_io8_t*)0xB7E01B52)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL19	(*(volatile uint_io8_t*)0xB7E01B53)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL20	(*(volatile uint_io8_t*)0xB7E01B54)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL21	(*(volatile uint_io8_t*)0xB7E01B55)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL22	(*(volatile uint_io8_t*)0xB7E01B56)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL23	(*(volatile uint_io8_t*)0xB7E01B57)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL24	(*(volatile uint_io8_t*)0xB7E01B58)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL25	(*(volatile uint_io8_t*)0xB7E01B59)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL26	(*(volatile uint_io8_t*)0xB7E01B5A)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL27	(*(volatile uint_io8_t*)0xB7E01B5B)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL28	(*(volatile uint_io8_t*)0xB7E01B5C)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL29	(*(volatile uint_io8_t*)0xB7E01B5D)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL30	(*(volatile uint_io8_t*)0xB7E01B5E)  /*@bfbba@*/
#define ADC12B0_TRGCL0_TRGCL31	(*(volatile uint_io8_t*)0xB7E01B5F)  /*@bfbba@*/

typedef struct stc_adc12b0_trgcl0_field{
    uint_io32_t		u1TRGCL0:1;
    uint_io32_t		u1TRGCL1:1;
    uint_io32_t		u1TRGCL2:1;
    uint_io32_t		u1TRGCL3:1;
    uint_io32_t		u1TRGCL4:1;
    uint_io32_t		u1TRGCL5:1;
    uint_io32_t		u1TRGCL6:1;
    uint_io32_t		u1TRGCL7:1;
    uint_io32_t		u1TRGCL8:1;
    uint_io32_t		u1TRGCL9:1;
    uint_io32_t		u1TRGCL10:1;
    uint_io32_t		u1TRGCL11:1;
    uint_io32_t		u1TRGCL12:1;
    uint_io32_t		u1TRGCL13:1;
    uint_io32_t		u1TRGCL14:1;
    uint_io32_t		u1TRGCL15:1;
    uint_io32_t		u1TRGCL16:1;
    uint_io32_t		u1TRGCL17:1;
    uint_io32_t		u1TRGCL18:1;
    uint_io32_t		u1TRGCL19:1;
    uint_io32_t		u1TRGCL20:1;
    uint_io32_t		u1TRGCL21:1;
    uint_io32_t		u1TRGCL22:1;
    uint_io32_t		u1TRGCL23:1;
    uint_io32_t		u1TRGCL24:1;
    uint_io32_t		u1TRGCL25:1;
    uint_io32_t		u1TRGCL26:1;
    uint_io32_t		u1TRGCL27:1;
    uint_io32_t		u1TRGCL28:1;
    uint_io32_t		u1TRGCL29:1;
    uint_io32_t		u1TRGCL30:1;
    uint_io32_t		u1TRGCL31:1;
}stc_adc12b0_trgcl0_field_t;

typedef union un_adc12b0_trgcl0{
    uint_io32_t		u32Register;
    stc_adc12b0_trgcl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_trgcl0_t;

/* TRGCL1 */
#define ADC12B0_TRGCL1	(ADC12B0.unTRGCL1.u32Register)  /*@rg@*/
#define ADC12B0_TRGCL1_TRGCL32	(*(volatile uint_io8_t*)0xB7E01B60)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL33	(*(volatile uint_io8_t*)0xB7E01B61)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL34	(*(volatile uint_io8_t*)0xB7E01B62)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL35	(*(volatile uint_io8_t*)0xB7E01B63)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL36	(*(volatile uint_io8_t*)0xB7E01B64)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL37	(*(volatile uint_io8_t*)0xB7E01B65)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL38	(*(volatile uint_io8_t*)0xB7E01B66)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL39	(*(volatile uint_io8_t*)0xB7E01B67)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL40	(*(volatile uint_io8_t*)0xB7E01B68)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL41	(*(volatile uint_io8_t*)0xB7E01B69)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL42	(*(volatile uint_io8_t*)0xB7E01B6A)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL43	(*(volatile uint_io8_t*)0xB7E01B6B)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL44	(*(volatile uint_io8_t*)0xB7E01B6C)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL45	(*(volatile uint_io8_t*)0xB7E01B6D)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL46	(*(volatile uint_io8_t*)0xB7E01B6E)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL47	(*(volatile uint_io8_t*)0xB7E01B6F)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL48	(*(volatile uint_io8_t*)0xB7E01B70)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL49	(*(volatile uint_io8_t*)0xB7E01B71)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL50	(*(volatile uint_io8_t*)0xB7E01B72)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL51	(*(volatile uint_io8_t*)0xB7E01B73)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL52	(*(volatile uint_io8_t*)0xB7E01B74)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL53	(*(volatile uint_io8_t*)0xB7E01B75)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL54	(*(volatile uint_io8_t*)0xB7E01B76)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL55	(*(volatile uint_io8_t*)0xB7E01B77)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL56	(*(volatile uint_io8_t*)0xB7E01B78)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL57	(*(volatile uint_io8_t*)0xB7E01B79)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL58	(*(volatile uint_io8_t*)0xB7E01B7A)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL59	(*(volatile uint_io8_t*)0xB7E01B7B)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL60	(*(volatile uint_io8_t*)0xB7E01B7C)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL61	(*(volatile uint_io8_t*)0xB7E01B7D)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL62	(*(volatile uint_io8_t*)0xB7E01B7E)  /*@bfbba@*/
#define ADC12B0_TRGCL1_TRGCL63	(*(volatile uint_io8_t*)0xB7E01B7F)  /*@bfbba@*/

typedef struct stc_adc12b0_trgcl1_field{
    uint_io32_t		u1TRGCL32:1;
    uint_io32_t		u1TRGCL33:1;
    uint_io32_t		u1TRGCL34:1;
    uint_io32_t		u1TRGCL35:1;
    uint_io32_t		u1TRGCL36:1;
    uint_io32_t		u1TRGCL37:1;
    uint_io32_t		u1TRGCL38:1;
    uint_io32_t		u1TRGCL39:1;
    uint_io32_t		u1TRGCL40:1;
    uint_io32_t		u1TRGCL41:1;
    uint_io32_t		u1TRGCL42:1;
    uint_io32_t		u1TRGCL43:1;
    uint_io32_t		u1TRGCL44:1;
    uint_io32_t		u1TRGCL45:1;
    uint_io32_t		u1TRGCL46:1;
    uint_io32_t		u1TRGCL47:1;
    uint_io32_t		u1TRGCL48:1;
    uint_io32_t		u1TRGCL49:1;
    uint_io32_t		u1TRGCL50:1;
    uint_io32_t		u1TRGCL51:1;
    uint_io32_t		u1TRGCL52:1;
    uint_io32_t		u1TRGCL53:1;
    uint_io32_t		u1TRGCL54:1;
    uint_io32_t		u1TRGCL55:1;
    uint_io32_t		u1TRGCL56:1;
    uint_io32_t		u1TRGCL57:1;
    uint_io32_t		u1TRGCL58:1;
    uint_io32_t		u1TRGCL59:1;
    uint_io32_t		u1TRGCL60:1;
    uint_io32_t		u1TRGCL61:1;
    uint_io32_t		u1TRGCL62:1;
    uint_io32_t		u1TRGCL63:1;
}stc_adc12b0_trgcl1_field_t;

typedef union un_adc12b0_trgcl1{
    uint_io32_t		u32Register;
    stc_adc12b0_trgcl1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_trgcl1_t;

/* RCOTF0 */
#define ADC12B0_RCOTF0	(ADC12B0.unRCOTF0.u32Register)  /*@rg@*/
#define ADC12B0_RCOTF0_RCOTF0	(*(volatile uint_io8_t*)0xB7E01B80)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF1	(*(volatile uint_io8_t*)0xB7E01B81)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF2	(*(volatile uint_io8_t*)0xB7E01B82)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF3	(*(volatile uint_io8_t*)0xB7E01B83)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF4	(*(volatile uint_io8_t*)0xB7E01B84)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF5	(*(volatile uint_io8_t*)0xB7E01B85)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF6	(*(volatile uint_io8_t*)0xB7E01B86)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF7	(*(volatile uint_io8_t*)0xB7E01B87)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF8	(*(volatile uint_io8_t*)0xB7E01B88)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF9	(*(volatile uint_io8_t*)0xB7E01B89)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF10	(*(volatile uint_io8_t*)0xB7E01B8A)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF11	(*(volatile uint_io8_t*)0xB7E01B8B)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF12	(*(volatile uint_io8_t*)0xB7E01B8C)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF13	(*(volatile uint_io8_t*)0xB7E01B8D)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF14	(*(volatile uint_io8_t*)0xB7E01B8E)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF15	(*(volatile uint_io8_t*)0xB7E01B8F)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF16	(*(volatile uint_io8_t*)0xB7E01B90)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF17	(*(volatile uint_io8_t*)0xB7E01B91)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF18	(*(volatile uint_io8_t*)0xB7E01B92)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF19	(*(volatile uint_io8_t*)0xB7E01B93)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF20	(*(volatile uint_io8_t*)0xB7E01B94)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF21	(*(volatile uint_io8_t*)0xB7E01B95)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF22	(*(volatile uint_io8_t*)0xB7E01B96)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF23	(*(volatile uint_io8_t*)0xB7E01B97)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF24	(*(volatile uint_io8_t*)0xB7E01B98)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF25	(*(volatile uint_io8_t*)0xB7E01B99)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF26	(*(volatile uint_io8_t*)0xB7E01B9A)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF27	(*(volatile uint_io8_t*)0xB7E01B9B)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF28	(*(volatile uint_io8_t*)0xB7E01B9C)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF29	(*(volatile uint_io8_t*)0xB7E01B9D)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF30	(*(volatile uint_io8_t*)0xB7E01B9E)  /*@bfbba@*/
#define ADC12B0_RCOTF0_RCOTF31	(*(volatile uint_io8_t*)0xB7E01B9F)  /*@bfbba@*/

typedef struct stc_adc12b0_rcotf0_field{
    uint_io32_t		u1RCOTF0:1;
    uint_io32_t		u1RCOTF1:1;
    uint_io32_t		u1RCOTF2:1;
    uint_io32_t		u1RCOTF3:1;
    uint_io32_t		u1RCOTF4:1;
    uint_io32_t		u1RCOTF5:1;
    uint_io32_t		u1RCOTF6:1;
    uint_io32_t		u1RCOTF7:1;
    uint_io32_t		u1RCOTF8:1;
    uint_io32_t		u1RCOTF9:1;
    uint_io32_t		u1RCOTF10:1;
    uint_io32_t		u1RCOTF11:1;
    uint_io32_t		u1RCOTF12:1;
    uint_io32_t		u1RCOTF13:1;
    uint_io32_t		u1RCOTF14:1;
    uint_io32_t		u1RCOTF15:1;
    uint_io32_t		u1RCOTF16:1;
    uint_io32_t		u1RCOTF17:1;
    uint_io32_t		u1RCOTF18:1;
    uint_io32_t		u1RCOTF19:1;
    uint_io32_t		u1RCOTF20:1;
    uint_io32_t		u1RCOTF21:1;
    uint_io32_t		u1RCOTF22:1;
    uint_io32_t		u1RCOTF23:1;
    uint_io32_t		u1RCOTF24:1;
    uint_io32_t		u1RCOTF25:1;
    uint_io32_t		u1RCOTF26:1;
    uint_io32_t		u1RCOTF27:1;
    uint_io32_t		u1RCOTF28:1;
    uint_io32_t		u1RCOTF29:1;
    uint_io32_t		u1RCOTF30:1;
    uint_io32_t		u1RCOTF31:1;
}stc_adc12b0_rcotf0_field_t;

typedef union un_adc12b0_rcotf0{
    uint_io32_t		u32Register;
    stc_adc12b0_rcotf0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_rcotf0_t;

/* RCOTF1 */
#define ADC12B0_RCOTF1	(ADC12B0.unRCOTF1.u32Register)  /*@rg@*/
#define ADC12B0_RCOTF1_RCOTF32	(*(volatile uint_io8_t*)0xB7E01BA0)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF33	(*(volatile uint_io8_t*)0xB7E01BA1)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF34	(*(volatile uint_io8_t*)0xB7E01BA2)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF35	(*(volatile uint_io8_t*)0xB7E01BA3)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF36	(*(volatile uint_io8_t*)0xB7E01BA4)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF37	(*(volatile uint_io8_t*)0xB7E01BA5)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF38	(*(volatile uint_io8_t*)0xB7E01BA6)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF39	(*(volatile uint_io8_t*)0xB7E01BA7)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF40	(*(volatile uint_io8_t*)0xB7E01BA8)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF41	(*(volatile uint_io8_t*)0xB7E01BA9)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF42	(*(volatile uint_io8_t*)0xB7E01BAA)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF43	(*(volatile uint_io8_t*)0xB7E01BAB)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF44	(*(volatile uint_io8_t*)0xB7E01BAC)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF45	(*(volatile uint_io8_t*)0xB7E01BAD)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF46	(*(volatile uint_io8_t*)0xB7E01BAE)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF47	(*(volatile uint_io8_t*)0xB7E01BAF)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF48	(*(volatile uint_io8_t*)0xB7E01BB0)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF49	(*(volatile uint_io8_t*)0xB7E01BB1)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF50	(*(volatile uint_io8_t*)0xB7E01BB2)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF51	(*(volatile uint_io8_t*)0xB7E01BB3)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF52	(*(volatile uint_io8_t*)0xB7E01BB4)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF53	(*(volatile uint_io8_t*)0xB7E01BB5)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF54	(*(volatile uint_io8_t*)0xB7E01BB6)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF55	(*(volatile uint_io8_t*)0xB7E01BB7)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF56	(*(volatile uint_io8_t*)0xB7E01BB8)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF57	(*(volatile uint_io8_t*)0xB7E01BB9)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF58	(*(volatile uint_io8_t*)0xB7E01BBA)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF59	(*(volatile uint_io8_t*)0xB7E01BBB)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF60	(*(volatile uint_io8_t*)0xB7E01BBC)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF61	(*(volatile uint_io8_t*)0xB7E01BBD)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF62	(*(volatile uint_io8_t*)0xB7E01BBE)  /*@bfbba@*/
#define ADC12B0_RCOTF1_RCOTF63	(*(volatile uint_io8_t*)0xB7E01BBF)  /*@bfbba@*/

typedef struct stc_adc12b0_rcotf1_field{
    uint_io32_t		u1RCOTF32:1;
    uint_io32_t		u1RCOTF33:1;
    uint_io32_t		u1RCOTF34:1;
    uint_io32_t		u1RCOTF35:1;
    uint_io32_t		u1RCOTF36:1;
    uint_io32_t		u1RCOTF37:1;
    uint_io32_t		u1RCOTF38:1;
    uint_io32_t		u1RCOTF39:1;
    uint_io32_t		u1RCOTF40:1;
    uint_io32_t		u1RCOTF41:1;
    uint_io32_t		u1RCOTF42:1;
    uint_io32_t		u1RCOTF43:1;
    uint_io32_t		u1RCOTF44:1;
    uint_io32_t		u1RCOTF45:1;
    uint_io32_t		u1RCOTF46:1;
    uint_io32_t		u1RCOTF47:1;
    uint_io32_t		u1RCOTF48:1;
    uint_io32_t		u1RCOTF49:1;
    uint_io32_t		u1RCOTF50:1;
    uint_io32_t		u1RCOTF51:1;
    uint_io32_t		u1RCOTF52:1;
    uint_io32_t		u1RCOTF53:1;
    uint_io32_t		u1RCOTF54:1;
    uint_io32_t		u1RCOTF55:1;
    uint_io32_t		u1RCOTF56:1;
    uint_io32_t		u1RCOTF57:1;
    uint_io32_t		u1RCOTF58:1;
    uint_io32_t		u1RCOTF59:1;
    uint_io32_t		u1RCOTF60:1;
    uint_io32_t		u1RCOTF61:1;
    uint_io32_t		u1RCOTF62:1;
    uint_io32_t		u1RCOTF63:1;
}stc_adc12b0_rcotf1_field_t;

typedef union un_adc12b0_rcotf1{
    uint_io32_t		u32Register;
    stc_adc12b0_rcotf1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_rcotf1_t;

/* TRGOR0 */
#define ADC12B0_TRGOR0	(ADC12B0.unTRGOR0.u32Register)  /*@rg@*/
#define ADC12B0_TRGOR0_TRGOR0	(*(volatile uint_io8_t*)0xB7E01BC0)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR1	(*(volatile uint_io8_t*)0xB7E01BC1)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR2	(*(volatile uint_io8_t*)0xB7E01BC2)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR3	(*(volatile uint_io8_t*)0xB7E01BC3)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR4	(*(volatile uint_io8_t*)0xB7E01BC4)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR5	(*(volatile uint_io8_t*)0xB7E01BC5)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR6	(*(volatile uint_io8_t*)0xB7E01BC6)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR7	(*(volatile uint_io8_t*)0xB7E01BC7)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR8	(*(volatile uint_io8_t*)0xB7E01BC8)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR9	(*(volatile uint_io8_t*)0xB7E01BC9)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR10	(*(volatile uint_io8_t*)0xB7E01BCA)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR11	(*(volatile uint_io8_t*)0xB7E01BCB)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR12	(*(volatile uint_io8_t*)0xB7E01BCC)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR13	(*(volatile uint_io8_t*)0xB7E01BCD)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR14	(*(volatile uint_io8_t*)0xB7E01BCE)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR15	(*(volatile uint_io8_t*)0xB7E01BCF)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR16	(*(volatile uint_io8_t*)0xB7E01BD0)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR17	(*(volatile uint_io8_t*)0xB7E01BD1)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR18	(*(volatile uint_io8_t*)0xB7E01BD2)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR19	(*(volatile uint_io8_t*)0xB7E01BD3)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR20	(*(volatile uint_io8_t*)0xB7E01BD4)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR21	(*(volatile uint_io8_t*)0xB7E01BD5)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR22	(*(volatile uint_io8_t*)0xB7E01BD6)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR23	(*(volatile uint_io8_t*)0xB7E01BD7)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR24	(*(volatile uint_io8_t*)0xB7E01BD8)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR25	(*(volatile uint_io8_t*)0xB7E01BD9)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR26	(*(volatile uint_io8_t*)0xB7E01BDA)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR27	(*(volatile uint_io8_t*)0xB7E01BDB)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR28	(*(volatile uint_io8_t*)0xB7E01BDC)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR29	(*(volatile uint_io8_t*)0xB7E01BDD)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR30	(*(volatile uint_io8_t*)0xB7E01BDE)  /*@bfbba@*/
#define ADC12B0_TRGOR0_TRGOR31	(*(volatile uint_io8_t*)0xB7E01BDF)  /*@bfbba@*/

typedef struct stc_adc12b0_trgor0_field{
    uint_io32_t		u1TRGOR0:1;
    uint_io32_t		u1TRGOR1:1;
    uint_io32_t		u1TRGOR2:1;
    uint_io32_t		u1TRGOR3:1;
    uint_io32_t		u1TRGOR4:1;
    uint_io32_t		u1TRGOR5:1;
    uint_io32_t		u1TRGOR6:1;
    uint_io32_t		u1TRGOR7:1;
    uint_io32_t		u1TRGOR8:1;
    uint_io32_t		u1TRGOR9:1;
    uint_io32_t		u1TRGOR10:1;
    uint_io32_t		u1TRGOR11:1;
    uint_io32_t		u1TRGOR12:1;
    uint_io32_t		u1TRGOR13:1;
    uint_io32_t		u1TRGOR14:1;
    uint_io32_t		u1TRGOR15:1;
    uint_io32_t		u1TRGOR16:1;
    uint_io32_t		u1TRGOR17:1;
    uint_io32_t		u1TRGOR18:1;
    uint_io32_t		u1TRGOR19:1;
    uint_io32_t		u1TRGOR20:1;
    uint_io32_t		u1TRGOR21:1;
    uint_io32_t		u1TRGOR22:1;
    uint_io32_t		u1TRGOR23:1;
    uint_io32_t		u1TRGOR24:1;
    uint_io32_t		u1TRGOR25:1;
    uint_io32_t		u1TRGOR26:1;
    uint_io32_t		u1TRGOR27:1;
    uint_io32_t		u1TRGOR28:1;
    uint_io32_t		u1TRGOR29:1;
    uint_io32_t		u1TRGOR30:1;
    uint_io32_t		u1TRGOR31:1;
}stc_adc12b0_trgor0_field_t;

typedef union un_adc12b0_trgor0{
    uint_io32_t		u32Register;
    stc_adc12b0_trgor0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_trgor0_t;

/* TRGOR1 */
#define ADC12B0_TRGOR1	(ADC12B0.unTRGOR1.u32Register)  /*@rg@*/
#define ADC12B0_TRGOR1_TRGOR32	(*(volatile uint_io8_t*)0xB7E01BE0)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR33	(*(volatile uint_io8_t*)0xB7E01BE1)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR34	(*(volatile uint_io8_t*)0xB7E01BE2)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR35	(*(volatile uint_io8_t*)0xB7E01BE3)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR36	(*(volatile uint_io8_t*)0xB7E01BE4)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR37	(*(volatile uint_io8_t*)0xB7E01BE5)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR38	(*(volatile uint_io8_t*)0xB7E01BE6)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR39	(*(volatile uint_io8_t*)0xB7E01BE7)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR40	(*(volatile uint_io8_t*)0xB7E01BE8)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR41	(*(volatile uint_io8_t*)0xB7E01BE9)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR42	(*(volatile uint_io8_t*)0xB7E01BEA)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR43	(*(volatile uint_io8_t*)0xB7E01BEB)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR44	(*(volatile uint_io8_t*)0xB7E01BEC)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR45	(*(volatile uint_io8_t*)0xB7E01BED)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR46	(*(volatile uint_io8_t*)0xB7E01BEE)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR47	(*(volatile uint_io8_t*)0xB7E01BEF)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR48	(*(volatile uint_io8_t*)0xB7E01BF0)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR49	(*(volatile uint_io8_t*)0xB7E01BF1)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR50	(*(volatile uint_io8_t*)0xB7E01BF2)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR51	(*(volatile uint_io8_t*)0xB7E01BF3)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR52	(*(volatile uint_io8_t*)0xB7E01BF4)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR53	(*(volatile uint_io8_t*)0xB7E01BF5)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR54	(*(volatile uint_io8_t*)0xB7E01BF6)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR55	(*(volatile uint_io8_t*)0xB7E01BF7)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR56	(*(volatile uint_io8_t*)0xB7E01BF8)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR57	(*(volatile uint_io8_t*)0xB7E01BF9)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR58	(*(volatile uint_io8_t*)0xB7E01BFA)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR59	(*(volatile uint_io8_t*)0xB7E01BFB)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR60	(*(volatile uint_io8_t*)0xB7E01BFC)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR61	(*(volatile uint_io8_t*)0xB7E01BFD)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR62	(*(volatile uint_io8_t*)0xB7E01BFE)  /*@bfbba@*/
#define ADC12B0_TRGOR1_TRGOR63	(*(volatile uint_io8_t*)0xB7E01BFF)  /*@bfbba@*/

typedef struct stc_adc12b0_trgor1_field{
    uint_io32_t		u1TRGOR32:1;
    uint_io32_t		u1TRGOR33:1;
    uint_io32_t		u1TRGOR34:1;
    uint_io32_t		u1TRGOR35:1;
    uint_io32_t		u1TRGOR36:1;
    uint_io32_t		u1TRGOR37:1;
    uint_io32_t		u1TRGOR38:1;
    uint_io32_t		u1TRGOR39:1;
    uint_io32_t		u1TRGOR40:1;
    uint_io32_t		u1TRGOR41:1;
    uint_io32_t		u1TRGOR42:1;
    uint_io32_t		u1TRGOR43:1;
    uint_io32_t		u1TRGOR44:1;
    uint_io32_t		u1TRGOR45:1;
    uint_io32_t		u1TRGOR46:1;
    uint_io32_t		u1TRGOR47:1;
    uint_io32_t		u1TRGOR48:1;
    uint_io32_t		u1TRGOR49:1;
    uint_io32_t		u1TRGOR50:1;
    uint_io32_t		u1TRGOR51:1;
    uint_io32_t		u1TRGOR52:1;
    uint_io32_t		u1TRGOR53:1;
    uint_io32_t		u1TRGOR54:1;
    uint_io32_t		u1TRGOR55:1;
    uint_io32_t		u1TRGOR56:1;
    uint_io32_t		u1TRGOR57:1;
    uint_io32_t		u1TRGOR58:1;
    uint_io32_t		u1TRGOR59:1;
    uint_io32_t		u1TRGOR60:1;
    uint_io32_t		u1TRGOR61:1;
    uint_io32_t		u1TRGOR62:1;
    uint_io32_t		u1TRGOR63:1;
}stc_adc12b0_trgor1_field_t;

typedef union un_adc12b0_trgor1{
    uint_io32_t		u32Register;
    stc_adc12b0_trgor1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_trgor1_t;

/* TRGORC0 */
#define ADC12B0_TRGORC0	(ADC12B0.unTRGORC0.u32Register)  /*@rg@*/
#define ADC12B0_TRGORC0_TRGORC0	(*(volatile uint_io8_t*)0xB7E01C00)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC1	(*(volatile uint_io8_t*)0xB7E01C01)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC2	(*(volatile uint_io8_t*)0xB7E01C02)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC3	(*(volatile uint_io8_t*)0xB7E01C03)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC4	(*(volatile uint_io8_t*)0xB7E01C04)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC5	(*(volatile uint_io8_t*)0xB7E01C05)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC6	(*(volatile uint_io8_t*)0xB7E01C06)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC7	(*(volatile uint_io8_t*)0xB7E01C07)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC8	(*(volatile uint_io8_t*)0xB7E01C08)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC9	(*(volatile uint_io8_t*)0xB7E01C09)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC10	(*(volatile uint_io8_t*)0xB7E01C0A)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC11	(*(volatile uint_io8_t*)0xB7E01C0B)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC12	(*(volatile uint_io8_t*)0xB7E01C0C)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC13	(*(volatile uint_io8_t*)0xB7E01C0D)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC14	(*(volatile uint_io8_t*)0xB7E01C0E)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC15	(*(volatile uint_io8_t*)0xB7E01C0F)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC16	(*(volatile uint_io8_t*)0xB7E01C10)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC17	(*(volatile uint_io8_t*)0xB7E01C11)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC18	(*(volatile uint_io8_t*)0xB7E01C12)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC19	(*(volatile uint_io8_t*)0xB7E01C13)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC20	(*(volatile uint_io8_t*)0xB7E01C14)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC21	(*(volatile uint_io8_t*)0xB7E01C15)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC22	(*(volatile uint_io8_t*)0xB7E01C16)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC23	(*(volatile uint_io8_t*)0xB7E01C17)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC24	(*(volatile uint_io8_t*)0xB7E01C18)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC25	(*(volatile uint_io8_t*)0xB7E01C19)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC26	(*(volatile uint_io8_t*)0xB7E01C1A)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC27	(*(volatile uint_io8_t*)0xB7E01C1B)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC28	(*(volatile uint_io8_t*)0xB7E01C1C)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC29	(*(volatile uint_io8_t*)0xB7E01C1D)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC30	(*(volatile uint_io8_t*)0xB7E01C1E)  /*@bfbba@*/
#define ADC12B0_TRGORC0_TRGORC31	(*(volatile uint_io8_t*)0xB7E01C1F)  /*@bfbba@*/

typedef struct stc_adc12b0_trgorc0_field{
    uint_io32_t		u1TRGORC0:1;
    uint_io32_t		u1TRGORC1:1;
    uint_io32_t		u1TRGORC2:1;
    uint_io32_t		u1TRGORC3:1;
    uint_io32_t		u1TRGORC4:1;
    uint_io32_t		u1TRGORC5:1;
    uint_io32_t		u1TRGORC6:1;
    uint_io32_t		u1TRGORC7:1;
    uint_io32_t		u1TRGORC8:1;
    uint_io32_t		u1TRGORC9:1;
    uint_io32_t		u1TRGORC10:1;
    uint_io32_t		u1TRGORC11:1;
    uint_io32_t		u1TRGORC12:1;
    uint_io32_t		u1TRGORC13:1;
    uint_io32_t		u1TRGORC14:1;
    uint_io32_t		u1TRGORC15:1;
    uint_io32_t		u1TRGORC16:1;
    uint_io32_t		u1TRGORC17:1;
    uint_io32_t		u1TRGORC18:1;
    uint_io32_t		u1TRGORC19:1;
    uint_io32_t		u1TRGORC20:1;
    uint_io32_t		u1TRGORC21:1;
    uint_io32_t		u1TRGORC22:1;
    uint_io32_t		u1TRGORC23:1;
    uint_io32_t		u1TRGORC24:1;
    uint_io32_t		u1TRGORC25:1;
    uint_io32_t		u1TRGORC26:1;
    uint_io32_t		u1TRGORC27:1;
    uint_io32_t		u1TRGORC28:1;
    uint_io32_t		u1TRGORC29:1;
    uint_io32_t		u1TRGORC30:1;
    uint_io32_t		u1TRGORC31:1;
}stc_adc12b0_trgorc0_field_t;

typedef union un_adc12b0_trgorc0{
    uint_io32_t		u32Register;
    stc_adc12b0_trgorc0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_trgorc0_t;

/* TRGORC1 */
#define ADC12B0_TRGORC1	(ADC12B0.unTRGORC1.u32Register)  /*@rg@*/
#define ADC12B0_TRGORC1_TRGORC32	(*(volatile uint_io8_t*)0xB7E01C20)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC33	(*(volatile uint_io8_t*)0xB7E01C21)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC34	(*(volatile uint_io8_t*)0xB7E01C22)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC35	(*(volatile uint_io8_t*)0xB7E01C23)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC36	(*(volatile uint_io8_t*)0xB7E01C24)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC37	(*(volatile uint_io8_t*)0xB7E01C25)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC38	(*(volatile uint_io8_t*)0xB7E01C26)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC39	(*(volatile uint_io8_t*)0xB7E01C27)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC40	(*(volatile uint_io8_t*)0xB7E01C28)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC41	(*(volatile uint_io8_t*)0xB7E01C29)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC42	(*(volatile uint_io8_t*)0xB7E01C2A)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC43	(*(volatile uint_io8_t*)0xB7E01C2B)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC44	(*(volatile uint_io8_t*)0xB7E01C2C)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC45	(*(volatile uint_io8_t*)0xB7E01C2D)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC46	(*(volatile uint_io8_t*)0xB7E01C2E)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC47	(*(volatile uint_io8_t*)0xB7E01C2F)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC48	(*(volatile uint_io8_t*)0xB7E01C30)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC49	(*(volatile uint_io8_t*)0xB7E01C31)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC50	(*(volatile uint_io8_t*)0xB7E01C32)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC51	(*(volatile uint_io8_t*)0xB7E01C33)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC52	(*(volatile uint_io8_t*)0xB7E01C34)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC53	(*(volatile uint_io8_t*)0xB7E01C35)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC54	(*(volatile uint_io8_t*)0xB7E01C36)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC55	(*(volatile uint_io8_t*)0xB7E01C37)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC56	(*(volatile uint_io8_t*)0xB7E01C38)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC57	(*(volatile uint_io8_t*)0xB7E01C39)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC58	(*(volatile uint_io8_t*)0xB7E01C3A)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC59	(*(volatile uint_io8_t*)0xB7E01C3B)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC60	(*(volatile uint_io8_t*)0xB7E01C3C)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC61	(*(volatile uint_io8_t*)0xB7E01C3D)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC62	(*(volatile uint_io8_t*)0xB7E01C3E)  /*@bfbba@*/
#define ADC12B0_TRGORC1_TRGORC63	(*(volatile uint_io8_t*)0xB7E01C3F)  /*@bfbba@*/

typedef struct stc_adc12b0_trgorc1_field{
    uint_io32_t		u1TRGORC32:1;
    uint_io32_t		u1TRGORC33:1;
    uint_io32_t		u1TRGORC34:1;
    uint_io32_t		u1TRGORC35:1;
    uint_io32_t		u1TRGORC36:1;
    uint_io32_t		u1TRGORC37:1;
    uint_io32_t		u1TRGORC38:1;
    uint_io32_t		u1TRGORC39:1;
    uint_io32_t		u1TRGORC40:1;
    uint_io32_t		u1TRGORC41:1;
    uint_io32_t		u1TRGORC42:1;
    uint_io32_t		u1TRGORC43:1;
    uint_io32_t		u1TRGORC44:1;
    uint_io32_t		u1TRGORC45:1;
    uint_io32_t		u1TRGORC46:1;
    uint_io32_t		u1TRGORC47:1;
    uint_io32_t		u1TRGORC48:1;
    uint_io32_t		u1TRGORC49:1;
    uint_io32_t		u1TRGORC50:1;
    uint_io32_t		u1TRGORC51:1;
    uint_io32_t		u1TRGORC52:1;
    uint_io32_t		u1TRGORC53:1;
    uint_io32_t		u1TRGORC54:1;
    uint_io32_t		u1TRGORC55:1;
    uint_io32_t		u1TRGORC56:1;
    uint_io32_t		u1TRGORC57:1;
    uint_io32_t		u1TRGORC58:1;
    uint_io32_t		u1TRGORC59:1;
    uint_io32_t		u1TRGORC60:1;
    uint_io32_t		u1TRGORC61:1;
    uint_io32_t		u1TRGORC62:1;
    uint_io32_t		u1TRGORC63:1;
}stc_adc12b0_trgorc1_field_t;

typedef union un_adc12b0_trgorc1{
    uint_io32_t		u32Register;
    stc_adc12b0_trgorc1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_adc12b0_trgorc1_t;

/* CDDS[0-3] */
#define ADC12B0_CDDS0	(ADC12B0.unCDDS0.u16Register)  /*@rg@*/
#define ADC12B0_CDDS0_CDCHNUM	(ADC12B0.unCDDS0.stcField.u6CDCHNUM)  /*@bf@*/
#define ADC12B0_CDDS0_CDCHEN	(*(volatile uint_io8_t*)0xB7E01C46)  /*@bfbba@*/

#define ADC12B0_CDDS1	(ADC12B0.unCDDS1.u16Register)  /*@rg@*/
#define ADC12B0_CDDS1_CDCHNUM	(ADC12B0.unCDDS1.stcField.u6CDCHNUM)  /*@bf@*/
#define ADC12B0_CDDS1_CDCHEN	(*(volatile uint_io8_t*)0xB7E01C56)  /*@bfbba@*/

#define ADC12B0_CDDS2	(ADC12B0.unCDDS2.u16Register)  /*@rg@*/
#define ADC12B0_CDDS2_CDCHNUM	(ADC12B0.unCDDS2.stcField.u6CDCHNUM)  /*@bf@*/
#define ADC12B0_CDDS2_CDCHEN	(*(volatile uint_io8_t*)0xB7E01C66)  /*@bfbba@*/

#define ADC12B0_CDDS3	(ADC12B0.unCDDS3.u16Register)  /*@rg@*/
#define ADC12B0_CDDS3_CDCHNUM	(ADC12B0.unCDDS3.stcField.u6CDCHNUM)  /*@bf@*/
#define ADC12B0_CDDS3_CDCHEN	(*(volatile uint_io8_t*)0xB7E01C76)  /*@bfbba@*/

typedef struct stc_adc12b0_cddsn_field{
    uint_io16_t		u6CDCHNUM:6;
    uint_io16_t		u1CDCHEN:1;
    uint_io16_t		:9;
}stc_adc12b0_cddsn_field_t;

typedef union un_adc12b0_cddsn{
    uint_io16_t		u16Register;
    stc_adc12b0_cddsn_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_cddsn_t;

/* CT */
#define ADC12B0_CT	(ADC12B0.unCT.u16Register)  /*@rg@*/
#define ADC12B0_CT_CT	ADC12B0_CT  /*@bfrg@*/

typedef union un_adc12b0_ct{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_adc12b0_ct_t;

/* RT */
#define ADC12B0_RT	(ADC12B0.unRT.u16Register)  /*@rg@*/
#define ADC12B0_RT_RT	(ADC12B0.unRT.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_adc12b0_rt_field{
    uint_io16_t		u8RT:8;
    uint_io16_t		:8;
}stc_adc12b0_rt_field_t;

typedef union un_adc12b0_rt{
    uint_io16_t		u16Register;
    stc_adc12b0_rt_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_rt_t;

/* ST[0-3] */
#define ADC12B0_ST0	(ADC12B0.unST0.u16Register)  /*@rg@*/
#define ADC12B0_ST0_ST	ADC12B0_ST0  /*@bfrg@*/

#define ADC12B0_ST1	(ADC12B0.unST1.u16Register)  /*@rg@*/
#define ADC12B0_ST1_ST	ADC12B0_ST1  /*@bfrg@*/

#define ADC12B0_ST2	(ADC12B0.unST2.u16Register)  /*@rg@*/
#define ADC12B0_ST2_ST	ADC12B0_ST2  /*@bfrg@*/

#define ADC12B0_ST3	(ADC12B0.unST3.u16Register)  /*@rg@*/
#define ADC12B0_ST3_ST	ADC12B0_ST3  /*@bfrg@*/

typedef union un_adc12b0_stn{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_adc12b0_stn_t;

/* OCV */
#define ADC12B0_OCV	(ADC12B0.unOCV.u16Register)  /*@rg@*/
#define ADC12B0_OCV_OCV	(ADC12B0.unOCV.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_adc12b0_ocv_field{
    uint_io16_t		u8OCV:8;
    uint_io16_t		:8;
}stc_adc12b0_ocv_field_t;

typedef union un_adc12b0_ocv{
    uint_io16_t		u16Register;
    stc_adc12b0_ocv_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_ocv_t;

/* GCV */
#define ADC12B0_GCV	(ADC12B0.unGCV.u16Register)  /*@rg@*/
#define ADC12B0_GCV_GCV	(ADC12B0.unGCV.stcField.u5GCV)  /*@bf@*/

typedef struct stc_adc12b0_gcv_field{
    uint_io16_t		u5GCV:5;
    uint_io16_t		:11;
}stc_adc12b0_gcv_field_t;

typedef union un_adc12b0_gcv{
    uint_io16_t		u16Register;
    stc_adc12b0_gcv_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_gcv_t;

/* CTRL */
#define ADC12B0_CTRL	(ADC12B0.unCTRL.u16Register)  /*@rg@*/
#define ADC12B0_CTRL_RES	(ADC12B0.unCTRL.stcField.u2RES)  /*@bf@*/
#define ADC12B0_CTRL_DBGE	(*(volatile uint_io8_t*)0xB7E01D02)  /*@bfbba@*/
#define ADC12B0_CTRL_ACHMD	(*(volatile uint_io8_t*)0xB7E01D03)  /*@bfbba@*/
#define ADC12B0_CTRL_FSMD	(*(volatile uint_io8_t*)0xB7E01D04)  /*@bfbba@*/
#define ADC12B0_CTRL_FRCMD	(*(volatile uint_io8_t*)0xB7E01D05)  /*@bfbba@*/
#define ADC12B0_CTRL_FSTP	(*(volatile uint_io8_t*)0xB7E01D06)  /*@bfbba@*/
#define ADC12B0_CTRL_PDDMD	(*(volatile uint_io8_t*)0xB7E01D07)  /*@bfbba@*/

typedef struct stc_adc12b0_ctrl_field{
    uint_io16_t		u2RES:2;
    uint_io16_t		u1DBGE:1;
    uint_io16_t		u1ACHMD:1;
    uint_io16_t		u1FSMD:1;
    uint_io16_t		u1FRCMD:1;
    uint_io16_t		u1FSTP:1;
    uint_io16_t		u1PDDMD:1;
    uint_io16_t		:8;
}stc_adc12b0_ctrl_field_t;

typedef union un_adc12b0_ctrl{
    uint_io16_t		u16Register;
    stc_adc12b0_ctrl_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_ctrl_t;

/* STAT */
#define ADC12B0_STAT	(ADC12B0.unSTAT.u16Register)  /*@rg@*/
#define ADC12B0_STAT_ACH	(ADC12B0.unSTAT.stcField.u6ACH)  /*@bf@*/
#define ADC12B0_STAT_BUSY	(*(volatile uint_io8_t*)0xB7E01D16)  /*@bfbba@*/

typedef struct stc_adc12b0_stat_field{
    uint_io16_t		u6ACH:6;
    uint_io16_t		u1BUSY:1;
    uint_io16_t		:9;
}stc_adc12b0_stat_field_t;

typedef union un_adc12b0_stat{
    uint_io16_t		u16Register;
    stc_adc12b0_stat_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_stat_t;

/* RCOL[0-7] */
#define ADC12B0_RCOL0	(ADC12B0.unRCOL0.u8Register)  /*@rg@*/
#define ADC12B0_RCOL0_RCOL	ADC12B0_RCOL0  /*@bfrg@*/

#define ADC12B0_RCOL1	(ADC12B0.unRCOL1.u8Register)  /*@rg@*/
#define ADC12B0_RCOL1_RCOL	ADC12B0_RCOL1  /*@bfrg@*/

#define ADC12B0_RCOL2	(ADC12B0.unRCOL2.u8Register)  /*@rg@*/
#define ADC12B0_RCOL2_RCOL	ADC12B0_RCOL2  /*@bfrg@*/

#define ADC12B0_RCOL3	(ADC12B0.unRCOL3.u8Register)  /*@rg@*/
#define ADC12B0_RCOL3_RCOL	ADC12B0_RCOL3  /*@bfrg@*/

#define ADC12B0_RCOL4	(ADC12B0.unRCOL4.u8Register)  /*@rg@*/
#define ADC12B0_RCOL4_RCOL	ADC12B0_RCOL4  /*@bfrg@*/

#define ADC12B0_RCOL5	(ADC12B0.unRCOL5.u8Register)  /*@rg@*/
#define ADC12B0_RCOL5_RCOL	ADC12B0_RCOL5  /*@bfrg@*/

#define ADC12B0_RCOL6	(ADC12B0.unRCOL6.u8Register)  /*@rg@*/
#define ADC12B0_RCOL6_RCOL	ADC12B0_RCOL6  /*@bfrg@*/

#define ADC12B0_RCOL7	(ADC12B0.unRCOL7.u8Register)  /*@rg@*/
#define ADC12B0_RCOL7_RCOL	ADC12B0_RCOL7  /*@bfrg@*/

typedef union un_adc12b0_rcoln{
    uint_io8_t		u8Register;
}un_adc12b0_rcoln_t;

/* RCOH[0-7] */
#define ADC12B0_RCOH0	(ADC12B0.unRCOH0.u8Register)  /*@rg@*/
#define ADC12B0_RCOH0_RCOH	ADC12B0_RCOH0  /*@bfrg@*/

#define ADC12B0_RCOH1	(ADC12B0.unRCOH1.u8Register)  /*@rg@*/
#define ADC12B0_RCOH1_RCOH	ADC12B0_RCOH1  /*@bfrg@*/

#define ADC12B0_RCOH2	(ADC12B0.unRCOH2.u8Register)  /*@rg@*/
#define ADC12B0_RCOH2_RCOH	ADC12B0_RCOH2  /*@bfrg@*/

#define ADC12B0_RCOH3	(ADC12B0.unRCOH3.u8Register)  /*@rg@*/
#define ADC12B0_RCOH3_RCOH	ADC12B0_RCOH3  /*@bfrg@*/

#define ADC12B0_RCOH4	(ADC12B0.unRCOH4.u8Register)  /*@rg@*/
#define ADC12B0_RCOH4_RCOH	ADC12B0_RCOH4  /*@bfrg@*/

#define ADC12B0_RCOH5	(ADC12B0.unRCOH5.u8Register)  /*@rg@*/
#define ADC12B0_RCOH5_RCOH	ADC12B0_RCOH5  /*@bfrg@*/

#define ADC12B0_RCOH6	(ADC12B0.unRCOH6.u8Register)  /*@rg@*/
#define ADC12B0_RCOH6_RCOH	ADC12B0_RCOH6  /*@bfrg@*/

#define ADC12B0_RCOH7	(ADC12B0.unRCOH7.u8Register)  /*@rg@*/
#define ADC12B0_RCOH7_RCOH	ADC12B0_RCOH7  /*@bfrg@*/

typedef union un_adc12b0_rcohn{
    uint_io8_t		u8Register;
}un_adc12b0_rcohn_t;

/* MCCTRL[0-3] */
#define ADC12B0_MCCTRL0	(ADC12B0.unMCCTRL0.u8Register)  /*@rg@*/
#define ADC12B0_MCCTRL0_CNVNUM	(ADC12B0.unMCCTRL0.stcField.u4CNVNUM)  /*@bf@*/
#define ADC12B0_MCCTRL0_ICIRQY	(*(volatile uint_io8_t*)0xB7E01E04)  /*@bfbba@*/
#define ADC12B0_MCCTRL0_AVRLSEL	(*(volatile uint_io8_t*)0xB7E01E05)  /*@bfbba@*/
#define ADC12B0_MCCTRL0_AVRHSEL	(*(volatile uint_io8_t*)0xB7E01E06)  /*@bfbba@*/

#define ADC12B0_MCCTRL1	(ADC12B0.unMCCTRL1.u8Register)  /*@rg@*/
#define ADC12B0_MCCTRL1_CNVNUM	(ADC12B0.unMCCTRL1.stcField.u4CNVNUM)  /*@bf@*/
#define ADC12B0_MCCTRL1_ICIRQY	(*(volatile uint_io8_t*)0xB7E01E0C)  /*@bfbba@*/
#define ADC12B0_MCCTRL1_AVRLSEL	(*(volatile uint_io8_t*)0xB7E01E0D)  /*@bfbba@*/
#define ADC12B0_MCCTRL1_AVRHSEL	(*(volatile uint_io8_t*)0xB7E01E0E)  /*@bfbba@*/

#define ADC12B0_MCCTRL2	(ADC12B0.unMCCTRL2.u8Register)  /*@rg@*/
#define ADC12B0_MCCTRL2_CNVNUM	(ADC12B0.unMCCTRL2.stcField.u4CNVNUM)  /*@bf@*/
#define ADC12B0_MCCTRL2_ICIRQY	(*(volatile uint_io8_t*)0xB7E01E14)  /*@bfbba@*/
#define ADC12B0_MCCTRL2_AVRLSEL	(*(volatile uint_io8_t*)0xB7E01E15)  /*@bfbba@*/
#define ADC12B0_MCCTRL2_AVRHSEL	(*(volatile uint_io8_t*)0xB7E01E16)  /*@bfbba@*/

#define ADC12B0_MCCTRL3	(ADC12B0.unMCCTRL3.u8Register)  /*@rg@*/
#define ADC12B0_MCCTRL3_CNVNUM	(ADC12B0.unMCCTRL3.stcField.u4CNVNUM)  /*@bf@*/
#define ADC12B0_MCCTRL3_ICIRQY	(*(volatile uint_io8_t*)0xB7E01E1C)  /*@bfbba@*/
#define ADC12B0_MCCTRL3_AVRLSEL	(*(volatile uint_io8_t*)0xB7E01E1D)  /*@bfbba@*/
#define ADC12B0_MCCTRL3_AVRHSEL	(*(volatile uint_io8_t*)0xB7E01E1E)  /*@bfbba@*/

typedef struct stc_adc12b0_mcctrln_field{
    uint_io8_t		u4CNVNUM:4;
    uint_io8_t		u1ICIRQY:1;
    uint_io8_t		u1AVRLSEL:1;
    uint_io8_t		u1AVRHSEL:1;
    uint_io8_t		:1;
}stc_adc12b0_mcctrln_field_t;

typedef union un_adc12b0_mcctrln{
    uint_io8_t		u8Register;
    stc_adc12b0_mcctrln_field_t		stcField;
}un_adc12b0_mcctrln_t;

/* FRCOL[0-7] */
#define ADC12B0_FRCOL0	(ADC12B0.unFRCOL0.u16Register)  /*@rg@*/
#define ADC12B0_FRCOL0_FRCOL	(ADC12B0.unFRCOL0.stcField.u12FRCOL)  /*@bf@*/

#define ADC12B0_FRCOL1	(ADC12B0.unFRCOL1.u16Register)  /*@rg@*/
#define ADC12B0_FRCOL1_FRCOL	(ADC12B0.unFRCOL1.stcField.u12FRCOL)  /*@bf@*/

#define ADC12B0_FRCOL2	(ADC12B0.unFRCOL2.u16Register)  /*@rg@*/
#define ADC12B0_FRCOL2_FRCOL	(ADC12B0.unFRCOL2.stcField.u12FRCOL)  /*@bf@*/

#define ADC12B0_FRCOL3	(ADC12B0.unFRCOL3.u16Register)  /*@rg@*/
#define ADC12B0_FRCOL3_FRCOL	(ADC12B0.unFRCOL3.stcField.u12FRCOL)  /*@bf@*/

#define ADC12B0_FRCOL4	(ADC12B0.unFRCOL4.u16Register)  /*@rg@*/
#define ADC12B0_FRCOL4_FRCOL	(ADC12B0.unFRCOL4.stcField.u12FRCOL)  /*@bf@*/

#define ADC12B0_FRCOL5	(ADC12B0.unFRCOL5.u16Register)  /*@rg@*/
#define ADC12B0_FRCOL5_FRCOL	(ADC12B0.unFRCOL5.stcField.u12FRCOL)  /*@bf@*/

#define ADC12B0_FRCOL6	(ADC12B0.unFRCOL6.u16Register)  /*@rg@*/
#define ADC12B0_FRCOL6_FRCOL	(ADC12B0.unFRCOL6.stcField.u12FRCOL)  /*@bf@*/

#define ADC12B0_FRCOL7	(ADC12B0.unFRCOL7.u16Register)  /*@rg@*/
#define ADC12B0_FRCOL7_FRCOL	(ADC12B0.unFRCOL7.stcField.u12FRCOL)  /*@bf@*/

typedef struct stc_adc12b0_frcoln_field{
    uint_io16_t		u12FRCOL:12;
    uint_io16_t		:4;
}stc_adc12b0_frcoln_field_t;

typedef union un_adc12b0_frcoln{
    uint_io16_t		u16Register;
    stc_adc12b0_frcoln_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_frcoln_t;

/* MCSTAT[0-3] */
#define ADC12B0_MCSTAT0	(ADC12B0.unMCSTAT0.u8Register)  /*@rg@*/
#define ADC12B0_MCSTAT0_MCCNT	(ADC12B0.unMCSTAT0.stcField.u5MCCNT)  /*@bf@*/

#define ADC12B0_MCSTAT1	(ADC12B0.unMCSTAT1.u8Register)  /*@rg@*/
#define ADC12B0_MCSTAT1_MCCNT	(ADC12B0.unMCSTAT1.stcField.u5MCCNT)  /*@bf@*/

#define ADC12B0_MCSTAT2	(ADC12B0.unMCSTAT2.u8Register)  /*@rg@*/
#define ADC12B0_MCSTAT2_MCCNT	(ADC12B0.unMCSTAT2.stcField.u5MCCNT)  /*@bf@*/

#define ADC12B0_MCSTAT3	(ADC12B0.unMCSTAT3.u8Register)  /*@rg@*/
#define ADC12B0_MCSTAT3_MCCNT	(ADC12B0.unMCSTAT3.stcField.u5MCCNT)  /*@bf@*/

typedef struct stc_adc12b0_mcstatn_field{
    uint_io8_t		u5MCCNT:5;
    uint_io8_t		:3;
}stc_adc12b0_mcstatn_field_t;

typedef union un_adc12b0_mcstatn{
    uint_io8_t		u8Register;
    stc_adc12b0_mcstatn_field_t		stcField;
}un_adc12b0_mcstatn_t;

/* FRCOH[0-7] */
#define ADC12B0_FRCOH0	(ADC12B0.unFRCOH0.u16Register)  /*@rg@*/
#define ADC12B0_FRCOH0_FRCOH	(ADC12B0.unFRCOH0.stcField.u12FRCOH)  /*@bf@*/

#define ADC12B0_FRCOH1	(ADC12B0.unFRCOH1.u16Register)  /*@rg@*/
#define ADC12B0_FRCOH1_FRCOH	(ADC12B0.unFRCOH1.stcField.u12FRCOH)  /*@bf@*/

#define ADC12B0_FRCOH2	(ADC12B0.unFRCOH2.u16Register)  /*@rg@*/
#define ADC12B0_FRCOH2_FRCOH	(ADC12B0.unFRCOH2.stcField.u12FRCOH)  /*@bf@*/

#define ADC12B0_FRCOH3	(ADC12B0.unFRCOH3.u16Register)  /*@rg@*/
#define ADC12B0_FRCOH3_FRCOH	(ADC12B0.unFRCOH3.stcField.u12FRCOH)  /*@bf@*/

#define ADC12B0_FRCOH4	(ADC12B0.unFRCOH4.u16Register)  /*@rg@*/
#define ADC12B0_FRCOH4_FRCOH	(ADC12B0.unFRCOH4.stcField.u12FRCOH)  /*@bf@*/

#define ADC12B0_FRCOH5	(ADC12B0.unFRCOH5.u16Register)  /*@rg@*/
#define ADC12B0_FRCOH5_FRCOH	(ADC12B0.unFRCOH5.stcField.u12FRCOH)  /*@bf@*/

#define ADC12B0_FRCOH6	(ADC12B0.unFRCOH6.u16Register)  /*@rg@*/
#define ADC12B0_FRCOH6_FRCOH	(ADC12B0.unFRCOH6.stcField.u12FRCOH)  /*@bf@*/

#define ADC12B0_FRCOH7	(ADC12B0.unFRCOH7.u16Register)  /*@rg@*/
#define ADC12B0_FRCOH7_FRCOH	(ADC12B0.unFRCOH7.stcField.u12FRCOH)  /*@bf@*/

typedef struct stc_adc12b0_frcohn_field{
    uint_io16_t		u12FRCOH:12;
    uint_io16_t		:4;
}stc_adc12b0_frcohn_field_t;

typedef union un_adc12b0_frcohn{
    uint_io16_t		u16Register;
    stc_adc12b0_frcohn_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_adc12b0_frcohn_t;


typedef struct stc_adc12b0{
    un_adc12b0_chctrln_t	unCHCTRL0;	/* 0x00000000 */
    un_adc12b0_chctrln_t	unCHCTRL1;	/* 0x00000004 */
    un_adc12b0_chctrln_t	unCHCTRL2;	/* 0x00000008 */
    un_adc12b0_chctrln_t	unCHCTRL3;	/* 0x0000000C */
    un_adc12b0_chctrln_t	unCHCTRL4;	/* 0x00000010 */
    un_adc12b0_chctrln_t	unCHCTRL5;	/* 0x00000014 */
    un_adc12b0_chctrln_t	unCHCTRL6;	/* 0x00000018 */
    un_adc12b0_chctrln_t	unCHCTRL7;	/* 0x0000001C */
    un_adc12b0_chctrln_t	unCHCTRL8;	/* 0x00000020 */
    un_adc12b0_chctrln_t	unCHCTRL9;	/* 0x00000024 */
    un_adc12b0_chctrln_t	unCHCTRL10;	/* 0x00000028 */
    un_adc12b0_chctrln_t	unCHCTRL11;	/* 0x0000002C */
    un_adc12b0_chctrln_t	unCHCTRL12;	/* 0x00000030 */
    un_adc12b0_chctrln_t	unCHCTRL13;	/* 0x00000034 */
    un_adc12b0_chctrln_t	unCHCTRL14;	/* 0x00000038 */
    un_adc12b0_chctrln_t	unCHCTRL15;	/* 0x0000003C */
    un_adc12b0_chctrln_t	unCHCTRL16;	/* 0x00000040 */
    un_adc12b0_chctrln_t	unCHCTRL17;	/* 0x00000044 */
    un_adc12b0_chctrln_t	unCHCTRL18;	/* 0x00000048 */
    un_adc12b0_chctrln_t	unCHCTRL19;	/* 0x0000004C */
    un_adc12b0_chctrln_t	unCHCTRL20;	/* 0x00000050 */
    un_adc12b0_chctrln_t	unCHCTRL21;	/* 0x00000054 */
    un_adc12b0_chctrln_t	unCHCTRL22;	/* 0x00000058 */
    un_adc12b0_chctrln_t	unCHCTRL23;	/* 0x0000005C */
    un_adc12b0_chctrln_t	unCHCTRL24;	/* 0x00000060 */
    un_adc12b0_chctrln_t	unCHCTRL25;	/* 0x00000064 */
    un_adc12b0_chctrln_t	unCHCTRL26;	/* 0x00000068 */
    un_adc12b0_chctrln_t	unCHCTRL27;	/* 0x0000006C */
    un_adc12b0_chctrln_t	unCHCTRL28;	/* 0x00000070 */
    un_adc12b0_chctrln_t	unCHCTRL29;	/* 0x00000074 */
    un_adc12b0_chctrln_t	unCHCTRL30;	/* 0x00000078 */
    un_adc12b0_chctrln_t	unCHCTRL31;	/* 0x0000007C */
    un_adc12b0_chctrln_t	unCHCTRL32;	/* 0x00000080 */
    un_adc12b0_chctrln_t	unCHCTRL33;	/* 0x00000084 */
    un_adc12b0_chctrln_t	unCHCTRL34;	/* 0x00000088 */
    un_adc12b0_chctrln_t	unCHCTRL35;	/* 0x0000008C */
    un_adc12b0_chctrln_t	unCHCTRL36;	/* 0x00000090 */
    un_adc12b0_chctrln_t	unCHCTRL37;	/* 0x00000094 */
    un_adc12b0_chctrln_t	unCHCTRL38;	/* 0x00000098 */
    un_adc12b0_chctrln_t	unCHCTRL39;	/* 0x0000009C */
    un_adc12b0_chctrln_t	unCHCTRL40;	/* 0x000000A0 */
    un_adc12b0_chctrln_t	unCHCTRL41;	/* 0x000000A4 */
    un_adc12b0_chctrln_t	unCHCTRL42;	/* 0x000000A8 */
    un_adc12b0_chctrln_t	unCHCTRL43;	/* 0x000000AC */
    un_adc12b0_chctrln_t	unCHCTRL44;	/* 0x000000B0 */
    un_adc12b0_chctrln_t	unCHCTRL45;	/* 0x000000B4 */
    un_adc12b0_chctrln_t	unCHCTRL46;	/* 0x000000B8 */
    un_adc12b0_chctrln_t	unCHCTRL47;	/* 0x000000BC */
    un_adc12b0_chctrln_t	unCHCTRL48;	/* 0x000000C0 */
    un_adc12b0_chctrln_t	unCHCTRL49;	/* 0x000000C4 */
    un_adc12b0_chctrln_t	unCHCTRL50;	/* 0x000000C8 */
    un_adc12b0_chctrln_t	unCHCTRL51;	/* 0x000000CC */
    un_adc12b0_chctrln_t	unCHCTRL52;	/* 0x000000D0 */
    un_adc12b0_chctrln_t	unCHCTRL53;	/* 0x000000D4 */
    un_adc12b0_chctrln_t	unCHCTRL54;	/* 0x000000D8 */
    un_adc12b0_chctrln_t	unCHCTRL55;	/* 0x000000DC */
    un_adc12b0_chctrln_t	unCHCTRL56;	/* 0x000000E0 */
    un_adc12b0_chctrln_t	unCHCTRL57;	/* 0x000000E4 */
    un_adc12b0_chctrln_t	unCHCTRL58;	/* 0x000000E8 */
    un_adc12b0_chctrln_t	unCHCTRL59;	/* 0x000000EC */
    un_adc12b0_chctrln_t	unCHCTRL60;	/* 0x000000F0 */
    un_adc12b0_chctrln_t	unCHCTRL61;	/* 0x000000F4 */
    un_adc12b0_chctrln_t	unCHCTRL62;	/* 0x000000F8 */
    un_adc12b0_chctrln_t	unCHCTRL63;	/* 0x000000FC */
    un_adc12b0_chstatn_t	unCHSTAT0;	/* 0x00000100 */
    un_adc12b0_chstatn_t	unCHSTAT1;	/* 0x00000102 */
    un_adc12b0_chstatn_t	unCHSTAT2;	/* 0x00000104 */
    un_adc12b0_chstatn_t	unCHSTAT3;	/* 0x00000106 */
    un_adc12b0_chstatn_t	unCHSTAT4;	/* 0x00000108 */
    un_adc12b0_chstatn_t	unCHSTAT5;	/* 0x0000010A */
    un_adc12b0_chstatn_t	unCHSTAT6;	/* 0x0000010C */
    un_adc12b0_chstatn_t	unCHSTAT7;	/* 0x0000010E */
    un_adc12b0_chstatn_t	unCHSTAT8;	/* 0x00000110 */
    un_adc12b0_chstatn_t	unCHSTAT9;	/* 0x00000112 */
    un_adc12b0_chstatn_t	unCHSTAT10;	/* 0x00000114 */
    un_adc12b0_chstatn_t	unCHSTAT11;	/* 0x00000116 */
    un_adc12b0_chstatn_t	unCHSTAT12;	/* 0x00000118 */
    un_adc12b0_chstatn_t	unCHSTAT13;	/* 0x0000011A */
    un_adc12b0_chstatn_t	unCHSTAT14;	/* 0x0000011C */
    un_adc12b0_chstatn_t	unCHSTAT15;	/* 0x0000011E */
    un_adc12b0_chstatn_t	unCHSTAT16;	/* 0x00000120 */
    un_adc12b0_chstatn_t	unCHSTAT17;	/* 0x00000122 */
    un_adc12b0_chstatn_t	unCHSTAT18;	/* 0x00000124 */
    un_adc12b0_chstatn_t	unCHSTAT19;	/* 0x00000126 */
    un_adc12b0_chstatn_t	unCHSTAT20;	/* 0x00000128 */
    un_adc12b0_chstatn_t	unCHSTAT21;	/* 0x0000012A */
    un_adc12b0_chstatn_t	unCHSTAT22;	/* 0x0000012C */
    un_adc12b0_chstatn_t	unCHSTAT23;	/* 0x0000012E */
    un_adc12b0_chstatn_t	unCHSTAT24;	/* 0x00000130 */
    un_adc12b0_chstatn_t	unCHSTAT25;	/* 0x00000132 */
    un_adc12b0_chstatn_t	unCHSTAT26;	/* 0x00000134 */
    un_adc12b0_chstatn_t	unCHSTAT27;	/* 0x00000136 */
    un_adc12b0_chstatn_t	unCHSTAT28;	/* 0x00000138 */
    un_adc12b0_chstatn_t	unCHSTAT29;	/* 0x0000013A */
    un_adc12b0_chstatn_t	unCHSTAT30;	/* 0x0000013C */
    un_adc12b0_chstatn_t	unCHSTAT31;	/* 0x0000013E */
    un_adc12b0_chstatn_t	unCHSTAT32;	/* 0x00000140 */
    un_adc12b0_chstatn_t	unCHSTAT33;	/* 0x00000142 */
    un_adc12b0_chstatn_t	unCHSTAT34;	/* 0x00000144 */
    un_adc12b0_chstatn_t	unCHSTAT35;	/* 0x00000146 */
    un_adc12b0_chstatn_t	unCHSTAT36;	/* 0x00000148 */
    un_adc12b0_chstatn_t	unCHSTAT37;	/* 0x0000014A */
    un_adc12b0_chstatn_t	unCHSTAT38;	/* 0x0000014C */
    un_adc12b0_chstatn_t	unCHSTAT39;	/* 0x0000014E */
    un_adc12b0_chstatn_t	unCHSTAT40;	/* 0x00000150 */
    un_adc12b0_chstatn_t	unCHSTAT41;	/* 0x00000152 */
    un_adc12b0_chstatn_t	unCHSTAT42;	/* 0x00000154 */
    un_adc12b0_chstatn_t	unCHSTAT43;	/* 0x00000156 */
    un_adc12b0_chstatn_t	unCHSTAT44;	/* 0x00000158 */
    un_adc12b0_chstatn_t	unCHSTAT45;	/* 0x0000015A */
    un_adc12b0_chstatn_t	unCHSTAT46;	/* 0x0000015C */
    un_adc12b0_chstatn_t	unCHSTAT47;	/* 0x0000015E */
    un_adc12b0_chstatn_t	unCHSTAT48;	/* 0x00000160 */
    un_adc12b0_chstatn_t	unCHSTAT49;	/* 0x00000162 */
    un_adc12b0_chstatn_t	unCHSTAT50;	/* 0x00000164 */
    un_adc12b0_chstatn_t	unCHSTAT51;	/* 0x00000166 */
    un_adc12b0_chstatn_t	unCHSTAT52;	/* 0x00000168 */
    un_adc12b0_chstatn_t	unCHSTAT53;	/* 0x0000016A */
    un_adc12b0_chstatn_t	unCHSTAT54;	/* 0x0000016C */
    un_adc12b0_chstatn_t	unCHSTAT55;	/* 0x0000016E */
    un_adc12b0_chstatn_t	unCHSTAT56;	/* 0x00000170 */
    un_adc12b0_chstatn_t	unCHSTAT57;	/* 0x00000172 */
    un_adc12b0_chstatn_t	unCHSTAT58;	/* 0x00000174 */
    un_adc12b0_chstatn_t	unCHSTAT59;	/* 0x00000176 */
    un_adc12b0_chstatn_t	unCHSTAT60;	/* 0x00000178 */
    un_adc12b0_chstatn_t	unCHSTAT61;	/* 0x0000017A */
    un_adc12b0_chstatn_t	unCHSTAT62;	/* 0x0000017C */
    un_adc12b0_chstatn_t	unCHSTAT63;	/* 0x0000017E */
    un_adc12b0_cdn_t	unCD0;	/* 0x00000180 */
    un_adc12b0_cdn_t	unCD1;	/* 0x00000182 */
    un_adc12b0_cdn_t	unCD2;	/* 0x00000184 */
    un_adc12b0_cdn_t	unCD3;	/* 0x00000186 */
    un_adc12b0_cdn_1_t	unCD4;	/* 0x00000188 */
    un_adc12b0_cdn_1_t	unCD5;	/* 0x0000018A */
    un_adc12b0_cdn_1_t	unCD6;	/* 0x0000018C */
    un_adc12b0_cdn_1_t	unCD7;	/* 0x0000018E */
    un_adc12b0_cdn_1_t	unCD8;	/* 0x00000190 */
    un_adc12b0_cdn_1_t	unCD9;	/* 0x00000192 */
    un_adc12b0_cdn_1_t	unCD10;	/* 0x00000194 */
    un_adc12b0_cdn_1_t	unCD11;	/* 0x00000196 */
    un_adc12b0_cdn_1_t	unCD12;	/* 0x00000198 */
    un_adc12b0_cdn_1_t	unCD13;	/* 0x0000019A */
    un_adc12b0_cdn_1_t	unCD14;	/* 0x0000019C */
    un_adc12b0_cdn_1_t	unCD15;	/* 0x0000019E */
    un_adc12b0_cdn_1_t	unCD16;	/* 0x000001A0 */
    un_adc12b0_cdn_1_t	unCD17;	/* 0x000001A2 */
    un_adc12b0_cdn_1_t	unCD18;	/* 0x000001A4 */
    un_adc12b0_cdn_1_t	unCD19;	/* 0x000001A6 */
    un_adc12b0_cdn_1_t	unCD20;	/* 0x000001A8 */
    un_adc12b0_cdn_1_t	unCD21;	/* 0x000001AA */
    un_adc12b0_cdn_1_t	unCD22;	/* 0x000001AC */
    un_adc12b0_cdn_1_t	unCD23;	/* 0x000001AE */
    un_adc12b0_cdn_1_t	unCD24;	/* 0x000001B0 */
    un_adc12b0_cdn_1_t	unCD25;	/* 0x000001B2 */
    un_adc12b0_cdn_1_t	unCD26;	/* 0x000001B4 */
    un_adc12b0_cdn_1_t	unCD27;	/* 0x000001B6 */
    un_adc12b0_cdn_1_t	unCD28;	/* 0x000001B8 */
    un_adc12b0_cdn_1_t	unCD29;	/* 0x000001BA */
    un_adc12b0_cdn_1_t	unCD30;	/* 0x000001BC */
    un_adc12b0_cdn_1_t	unCD31;	/* 0x000001BE */
    un_adc12b0_cdn_1_t	unCD32;	/* 0x000001C0 */
    un_adc12b0_cdn_1_t	unCD33;	/* 0x000001C2 */
    un_adc12b0_cdn_1_t	unCD34;	/* 0x000001C4 */
    un_adc12b0_cdn_1_t	unCD35;	/* 0x000001C6 */
    un_adc12b0_cdn_1_t	unCD36;	/* 0x000001C8 */
    un_adc12b0_cdn_1_t	unCD37;	/* 0x000001CA */
    un_adc12b0_cdn_1_t	unCD38;	/* 0x000001CC */
    un_adc12b0_cdn_1_t	unCD39;	/* 0x000001CE */
    un_adc12b0_cdn_1_t	unCD40;	/* 0x000001D0 */
    un_adc12b0_cdn_1_t	unCD41;	/* 0x000001D2 */
    un_adc12b0_cdn_1_t	unCD42;	/* 0x000001D4 */
    un_adc12b0_cdn_1_t	unCD43;	/* 0x000001D6 */
    un_adc12b0_cdn_1_t	unCD44;	/* 0x000001D8 */
    un_adc12b0_cdn_1_t	unCD45;	/* 0x000001DA */
    un_adc12b0_cdn_1_t	unCD46;	/* 0x000001DC */
    un_adc12b0_cdn_1_t	unCD47;	/* 0x000001DE */
    un_adc12b0_cdn_1_t	unCD48;	/* 0x000001E0 */
    un_adc12b0_cdn_1_t	unCD49;	/* 0x000001E2 */
    un_adc12b0_cdn_1_t	unCD50;	/* 0x000001E4 */
    un_adc12b0_cdn_1_t	unCD51;	/* 0x000001E6 */
    un_adc12b0_cdn_1_t	unCD52;	/* 0x000001E8 */
    un_adc12b0_cdn_1_t	unCD53;	/* 0x000001EA */
    un_adc12b0_cdn_1_t	unCD54;	/* 0x000001EC */
    un_adc12b0_cdn_1_t	unCD55;	/* 0x000001EE */
    un_adc12b0_cdn_1_t	unCD56;	/* 0x000001F0 */
    un_adc12b0_cdn_1_t	unCD57;	/* 0x000001F2 */
    un_adc12b0_cdn_1_t	unCD58;	/* 0x000001F4 */
    un_adc12b0_cdn_1_t	unCD59;	/* 0x000001F6 */
    un_adc12b0_cdn_1_t	unCD60;	/* 0x000001F8 */
    un_adc12b0_cdn_1_t	unCD61;	/* 0x000001FA */
    un_adc12b0_cdn_1_t	unCD62;	/* 0x000001FC */
    un_adc12b0_cdn_1_t	unCD63;	/* 0x000001FE */
    un_adc12b0_pcctrln_t	unPCCTRL0;	/* 0x00000200 */
    un_adc12b0_pcctrln_t	unPCCTRL1;	/* 0x00000204 */
    un_adc12b0_pcctrln_t	unPCCTRL2;	/* 0x00000208 */
    un_adc12b0_pcctrln_t	unPCCTRL3;	/* 0x0000020C */
    un_adc12b0_pcctrln_t	unPCCTRL4;	/* 0x00000210 */
    un_adc12b0_pcctrln_t	unPCCTRL5;	/* 0x00000214 */
    un_adc12b0_pcctrln_t	unPCCTRL6;	/* 0x00000218 */
    un_adc12b0_pcctrln_t	unPCCTRL7;	/* 0x0000021C */
    un_adc12b0_pcctrln_t	unPCCTRL8;	/* 0x00000220 */
    un_adc12b0_pcctrln_t	unPCCTRL9;	/* 0x00000224 */
    un_adc12b0_pcctrln_t	unPCCTRL10;	/* 0x00000228 */
    un_adc12b0_pcctrln_t	unPCCTRL11;	/* 0x0000022C */
    un_adc12b0_pcctrln_t	unPCCTRL12;	/* 0x00000230 */
    un_adc12b0_pcctrln_t	unPCCTRL13;	/* 0x00000234 */
    un_adc12b0_pcctrln_t	unPCCTRL14;	/* 0x00000238 */
    un_adc12b0_pcctrln_t	unPCCTRL15;	/* 0x0000023C */
    un_adc12b0_pcctrln_t	unPCCTRL16;	/* 0x00000240 */
    un_adc12b0_pcctrln_t	unPCCTRL17;	/* 0x00000244 */
    un_adc12b0_pcctrln_t	unPCCTRL18;	/* 0x00000248 */
    un_adc12b0_pcctrln_t	unPCCTRL19;	/* 0x0000024C */
    un_adc12b0_pcctrln_t	unPCCTRL20;	/* 0x00000250 */
    un_adc12b0_pcctrln_t	unPCCTRL21;	/* 0x00000254 */
    un_adc12b0_pcctrln_t	unPCCTRL22;	/* 0x00000258 */
    un_adc12b0_pcctrln_t	unPCCTRL23;	/* 0x0000025C */
    un_adc12b0_pcctrln_t	unPCCTRL24;	/* 0x00000260 */
    un_adc12b0_pcctrln_t	unPCCTRL25;	/* 0x00000264 */
    un_adc12b0_pcctrln_t	unPCCTRL26;	/* 0x00000268 */
    un_adc12b0_pcctrln_t	unPCCTRL27;	/* 0x0000026C */
    un_adc12b0_pcctrln_t	unPCCTRL28;	/* 0x00000270 */
    un_adc12b0_pcctrln_t	unPCCTRL29;	/* 0x00000274 */
    un_adc12b0_pcctrln_t	unPCCTRL30;	/* 0x00000278 */
    un_adc12b0_pcctrln_t	unPCCTRL31;	/* 0x0000027C */
    un_adc12b0_pcctrln_t	unPCCTRL32;	/* 0x00000280 */
    un_adc12b0_pcctrln_t	unPCCTRL33;	/* 0x00000284 */
    un_adc12b0_pcctrln_t	unPCCTRL34;	/* 0x00000288 */
    un_adc12b0_pcctrln_t	unPCCTRL35;	/* 0x0000028C */
    un_adc12b0_pcctrln_t	unPCCTRL36;	/* 0x00000290 */
    un_adc12b0_pcctrln_t	unPCCTRL37;	/* 0x00000294 */
    un_adc12b0_pcctrln_t	unPCCTRL38;	/* 0x00000298 */
    un_adc12b0_pcctrln_t	unPCCTRL39;	/* 0x0000029C */
    un_adc12b0_pcctrln_t	unPCCTRL40;	/* 0x000002A0 */
    un_adc12b0_pcctrln_t	unPCCTRL41;	/* 0x000002A4 */
    un_adc12b0_pcctrln_t	unPCCTRL42;	/* 0x000002A8 */
    un_adc12b0_pcctrln_t	unPCCTRL43;	/* 0x000002AC */
    un_adc12b0_pcctrln_t	unPCCTRL44;	/* 0x000002B0 */
    un_adc12b0_pcctrln_t	unPCCTRL45;	/* 0x000002B4 */
    un_adc12b0_pcctrln_t	unPCCTRL46;	/* 0x000002B8 */
    un_adc12b0_pcctrln_t	unPCCTRL47;	/* 0x000002BC */
    un_adc12b0_pcctrln_t	unPCCTRL48;	/* 0x000002C0 */
    un_adc12b0_pcctrln_t	unPCCTRL49;	/* 0x000002C4 */
    un_adc12b0_pcctrln_t	unPCCTRL50;	/* 0x000002C8 */
    un_adc12b0_pcctrln_t	unPCCTRL51;	/* 0x000002CC */
    un_adc12b0_pcctrln_t	unPCCTRL52;	/* 0x000002D0 */
    un_adc12b0_pcctrln_t	unPCCTRL53;	/* 0x000002D4 */
    un_adc12b0_pcctrln_t	unPCCTRL54;	/* 0x000002D8 */
    un_adc12b0_pcctrln_t	unPCCTRL55;	/* 0x000002DC */
    un_adc12b0_pcctrln_t	unPCCTRL56;	/* 0x000002E0 */
    un_adc12b0_pcctrln_t	unPCCTRL57;	/* 0x000002E4 */
    un_adc12b0_pcctrln_t	unPCCTRL58;	/* 0x000002E8 */
    un_adc12b0_pcctrln_t	unPCCTRL59;	/* 0x000002EC */
    un_adc12b0_pcctrln_t	unPCCTRL60;	/* 0x000002F0 */
    un_adc12b0_pcctrln_t	unPCCTRL61;	/* 0x000002F4 */
    un_adc12b0_pcctrln_t	unPCCTRL62;	/* 0x000002F8 */
    un_adc12b0_pcctrln_t	unPCCTRL63;	/* 0x000002FC */
    un_adc12b0_cdoneirq0_t	unCDONEIRQ0;	/* 0x00000300 */
    un_adc12b0_cdoneirq1_t	unCDONEIRQ1;	/* 0x00000304 */
    un_adc12b0_cdoneirqe0_t	unCDONEIRQE0;	/* 0x00000308 */
    un_adc12b0_cdoneirqe1_t	unCDONEIRQE1;	/* 0x0000030C */
    un_adc12b0_cdoneirqc0_t	unCDONEIRQC0;	/* 0x00000310 */
    un_adc12b0_cdoneirqc1_t	unCDONEIRQC1;	/* 0x00000314 */
    un_adc12b0_grpirq0_t	unGRPIRQ0;	/* 0x00000318 */
    un_adc12b0_grpirq1_t	unGRPIRQ1;	/* 0x0000031C */
    un_adc12b0_grpirqe0_t	unGRPIRQE0;	/* 0x00000320 */
    un_adc12b0_grpirqe1_t	unGRPIRQE1;	/* 0x00000324 */
    un_adc12b0_grpirqc0_t	unGRPIRQC0;	/* 0x00000328 */
    un_adc12b0_grpirqc1_t	unGRPIRQC1;	/* 0x0000032C */
    un_adc12b0_rcirq0_t	unRCIRQ0;	/* 0x00000330 */
    un_adc12b0_rcirq1_t	unRCIRQ1;	/* 0x00000334 */
    un_adc12b0_rcirqe0_t	unRCIRQE0;	/* 0x00000338 */
    un_adc12b0_rcirqe1_t	unRCIRQE1;	/* 0x0000033C */
    un_adc12b0_rcirqc0_t	unRCIRQC0;	/* 0x00000340 */
    un_adc12b0_rcirqc1_t	unRCIRQC1;	/* 0x00000344 */
    un_adc12b0_pcirq0_t	unPCIRQ0;	/* 0x00000348 */
    un_adc12b0_pcirq1_t	unPCIRQ1;	/* 0x0000034C */
    un_adc12b0_pcirqe0_t	unPCIRQE0;	/* 0x00000350 */
    un_adc12b0_pcirqe1_t	unPCIRQE1;	/* 0x00000354 */
    un_adc12b0_pcirqc0_t	unPCIRQC0;	/* 0x00000358 */
    un_adc12b0_pcirqc1_t	unPCIRQC1;	/* 0x0000035C */
    un_adc12b0_trgst0_t	unTRGST0;	/* 0x00000360 */
    un_adc12b0_trgst1_t	unTRGST1;	/* 0x00000364 */
    un_adc12b0_trgcl0_t	unTRGCL0;	/* 0x00000368 */
    un_adc12b0_trgcl1_t	unTRGCL1;	/* 0x0000036C */
    un_adc12b0_rcotf0_t	unRCOTF0;	/* 0x00000370 */
    un_adc12b0_rcotf1_t	unRCOTF1;	/* 0x00000374 */
    un_adc12b0_trgor0_t	unTRGOR0;	/* 0x00000378 */
    un_adc12b0_trgor1_t	unTRGOR1;	/* 0x0000037C */
    un_adc12b0_trgorc0_t	unTRGORC0;	/* 0x00000380 */
    un_adc12b0_trgorc1_t	unTRGORC1;	/* 0x00000384 */
    un_adc12b0_cddsn_t	unCDDS0;	/* 0x00000388 */
    un_adc12b0_cddsn_t	unCDDS1;	/* 0x0000038A */
    un_adc12b0_cddsn_t	unCDDS2;	/* 0x0000038C */
    un_adc12b0_cddsn_t	unCDDS3;	/* 0x0000038E */
    un_adc12b0_ct_t	unCT;	/* 0x00000390 */
    un_adc12b0_rt_t	unRT;	/* 0x00000392 */
    un_adc12b0_stn_t	unST0;	/* 0x00000394 */
    un_adc12b0_stn_t	unST1;	/* 0x00000396 */
    un_adc12b0_stn_t	unST2;	/* 0x00000398 */
    un_adc12b0_stn_t	unST3;	/* 0x0000039A */
    un_adc12b0_ocv_t	unOCV;	/* 0x0000039C */
    un_adc12b0_gcv_t	unGCV;	/* 0x0000039E */
    un_adc12b0_ctrl_t	unCTRL;	/* 0x000003A0 */
    un_adc12b0_stat_t	unSTAT;	/* 0x000003A2 */
    uint_io8_t	au8Reserved0[12];	/* 0x000003A4 */
    un_adc12b0_rcoln_t	unRCOL0;	/* 0x000003B0 */
    un_adc12b0_rcohn_t	unRCOH0;	/* 0x000003B1 */
    un_adc12b0_rcoln_t	unRCOL1;	/* 0x000003B2 */
    un_adc12b0_rcohn_t	unRCOH1;	/* 0x000003B3 */
    un_adc12b0_rcoln_t	unRCOL2;	/* 0x000003B4 */
    un_adc12b0_rcohn_t	unRCOH2;	/* 0x000003B5 */
    un_adc12b0_rcoln_t	unRCOL3;	/* 0x000003B6 */
    un_adc12b0_rcohn_t	unRCOH3;	/* 0x000003B7 */
    un_adc12b0_rcoln_t	unRCOL4;	/* 0x000003B8 */
    un_adc12b0_rcohn_t	unRCOH4;	/* 0x000003B9 */
    un_adc12b0_rcoln_t	unRCOL5;	/* 0x000003BA */
    un_adc12b0_rcohn_t	unRCOH5;	/* 0x000003BB */
    un_adc12b0_rcoln_t	unRCOL6;	/* 0x000003BC */
    un_adc12b0_rcohn_t	unRCOH6;	/* 0x000003BD */
    un_adc12b0_rcoln_t	unRCOL7;	/* 0x000003BE */
    un_adc12b0_rcohn_t	unRCOH7;	/* 0x000003BF */
    un_adc12b0_mcctrln_t	unMCCTRL0;	/* 0x000003C0 */
    un_adc12b0_mcctrln_t	unMCCTRL1;	/* 0x000003C1 */
    un_adc12b0_mcctrln_t	unMCCTRL2;	/* 0x000003C2 */
    un_adc12b0_mcctrln_t	unMCCTRL3;	/* 0x000003C3 */
    uint_io8_t	au8Reserved1[12];	/* 0x000003C4 */
    un_adc12b0_frcoln_t	unFRCOL0;	/* 0x000003D0 */
    un_adc12b0_frcoln_t	unFRCOL1;	/* 0x000003D2 */
    un_adc12b0_frcoln_t	unFRCOL2;	/* 0x000003D4 */
    un_adc12b0_frcoln_t	unFRCOL3;	/* 0x000003D6 */
    un_adc12b0_frcoln_t	unFRCOL4;	/* 0x000003D8 */
    un_adc12b0_frcoln_t	unFRCOL5;	/* 0x000003DA */
    un_adc12b0_frcoln_t	unFRCOL6;	/* 0x000003DC */
    un_adc12b0_frcoln_t	unFRCOL7;	/* 0x000003DE */
    un_adc12b0_mcstatn_t	unMCSTAT0;	/* 0x000003E0 */
    un_adc12b0_mcstatn_t	unMCSTAT1;	/* 0x000003E1 */
    un_adc12b0_mcstatn_t	unMCSTAT2;	/* 0x000003E2 */
    un_adc12b0_mcstatn_t	unMCSTAT3;	/* 0x000003E3 */
    uint_io8_t	au8Reserved2[12];	/* 0x000003E4 */
    un_adc12b0_frcohn_t	unFRCOH0;	/* 0x000003F0 */
    un_adc12b0_frcohn_t	unFRCOH1;	/* 0x000003F2 */
    un_adc12b0_frcohn_t	unFRCOH2;	/* 0x000003F4 */
    un_adc12b0_frcohn_t	unFRCOH3;	/* 0x000003F6 */
    un_adc12b0_frcohn_t	unFRCOH4;	/* 0x000003F8 */
    un_adc12b0_frcohn_t	unFRCOH5;	/* 0x000003FA */
    un_adc12b0_frcohn_t	unFRCOH6;	/* 0x000003FC */
    un_adc12b0_frcohn_t	unFRCOH7;	/* 0x000003FE */
}stc_adc12b0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_adc12b0_t	stcADC12B0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_ADC12B_H */
