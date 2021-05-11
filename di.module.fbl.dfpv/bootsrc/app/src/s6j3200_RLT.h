/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_RLT_H
#define __S6J3200_RLT_H

#include "s6j3200io_basetypes.h"

/* RLT[0-3/16-19/32-35/48-49] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define RLT0	stcRLT[0]
#define RLT1	stcRLT[1]
#define RLT2	stcRLT[2]
#define RLT3	stcRLT[3]
#define RLT16	stcRLT[4]
#define RLT17	stcRLT[5]
#define RLT18	stcRLT[6]
#define RLT19	stcRLT[7]
#define RLT32	stcRLT[8]
#define RLT33	stcRLT[9]
#define RLT34	stcRLT[10]
#define RLT35	stcRLT[11]
#define RLT48	stcRLT[12]
#define RLT49	stcRLT[13]
#else /* __IO_DEFINE */
#define RLT0	(*((volatile stc_rltn_t*)0xB4810000))
#define RLT1	(*((volatile stc_rltn_t*)0xB4810400))
#define RLT2	(*((volatile stc_rltn_t*)0xB4810800))
#define RLT3	(*((volatile stc_rltn_t*)0xB4810C00))
#define RLT16	(*((volatile stc_rltn_t*)0xB4890000))
#define RLT17	(*((volatile stc_rltn_t*)0xB4890400))
#define RLT18	(*((volatile stc_rltn_t*)0xB4890800))
#define RLT19	(*((volatile stc_rltn_t*)0xB4890C00))
#define RLT32	(*((volatile stc_rltn_t*)0xB4788000))
#define RLT33	(*((volatile stc_rltn_t*)0xB4788400))
#define RLT34	(*((volatile stc_rltn_t*)0xB4788800))
#define RLT35	(*((volatile stc_rltn_t*)0xB4788C00))
#define RLT48	(*((volatile stc_rltn_t*)0xB0690000))
#define RLT49	(*((volatile stc_rltn_t*)0xB0690400))
#endif /* __IO_DEFINE */

/* DMACFG */
#define RLT0_DMACFG	(RLT0.unDMACFG.u32Register)  /*@rg@*/
#define RLT0_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7880000)  /*@bfbba@*/

#define RLT1_DMACFG	(RLT1.unDMACFG.u32Register)  /*@rg@*/
#define RLT1_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7882000)  /*@bfbba@*/

#define RLT2_DMACFG	(RLT2.unDMACFG.u32Register)  /*@rg@*/
#define RLT2_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7884000)  /*@bfbba@*/

#define RLT3_DMACFG	(RLT3.unDMACFG.u32Register)  /*@rg@*/
#define RLT3_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7886000)  /*@bfbba@*/

#define RLT16_DMACFG	(RLT16.unDMACFG.u32Register)  /*@rg@*/
#define RLT16_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7C80000)  /*@bfbba@*/

#define RLT17_DMACFG	(RLT17.unDMACFG.u32Register)  /*@rg@*/
#define RLT17_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7C82000)  /*@bfbba@*/

#define RLT18_DMACFG	(RLT18.unDMACFG.u32Register)  /*@rg@*/
#define RLT18_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7C84000)  /*@bfbba@*/

#define RLT19_DMACFG	(RLT19.unDMACFG.u32Register)  /*@rg@*/
#define RLT19_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7C86000)  /*@bfbba@*/

#define RLT32_DMACFG	(RLT32.unDMACFG.u32Register)  /*@rg@*/
#define RLT32_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7440000)  /*@bfbba@*/

#define RLT33_DMACFG	(RLT33.unDMACFG.u32Register)  /*@rg@*/
#define RLT33_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7442000)  /*@bfbba@*/

#define RLT34_DMACFG	(RLT34.unDMACFG.u32Register)  /*@rg@*/
#define RLT34_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7444000)  /*@bfbba@*/

#define RLT35_DMACFG	(RLT35.unDMACFG.u32Register)  /*@rg@*/
#define RLT35_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB7446000)  /*@bfbba@*/

#define RLT48_DMACFG	(RLT48.unDMACFG.u32Register)  /*@rg@*/
#define RLT48_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB0C80000)  /*@bfbba@*/

#define RLT49_DMACFG	(RLT49.unDMACFG.u32Register)  /*@rg@*/
#define RLT49_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB0C82000)  /*@bfbba@*/

typedef struct stc_rltn_dmacfg_field{
    uint_io32_t		u1ENDMAUF:1;
    uint_io32_t		:31;
}stc_rltn_dmacfg_field_t;

typedef union un_rltn_dmacfg{
    uint_io32_t		u32Register;
    stc_rltn_dmacfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rltn_dmacfg_t;

/* TMCSR */
#define RLT0_TMCSR	(RLT0.unTMCSR.u32Register)  /*@rg@*/
#define RLT0_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7880043)  /*@bfbba@*/
#define RLT0_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7880044)  /*@bfbba@*/
#define RLT0_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7880045)  /*@bfbba@*/
#define RLT0_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7880047)  /*@bfbba@*/
#define RLT0_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7880048)  /*@bfbba@*/
#define RLT0_TMCSR_CSL	(RLT0.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT0_TMCSR_MOD	(RLT0.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT0_TMCSR_UF	(*(volatile uint_io8_t*)0xB7880050)  /*@bfbba@*/
#define RLT0_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7880051)  /*@bfbba@*/
#define RLT0_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7880052)  /*@bfbba@*/
#define RLT0_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7880058)  /*@bfbba@*/

#define RLT1_TMCSR	(RLT1.unTMCSR.u32Register)  /*@rg@*/
#define RLT1_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7882043)  /*@bfbba@*/
#define RLT1_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7882044)  /*@bfbba@*/
#define RLT1_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7882045)  /*@bfbba@*/
#define RLT1_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7882047)  /*@bfbba@*/
#define RLT1_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7882048)  /*@bfbba@*/
#define RLT1_TMCSR_CSL	(RLT1.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT1_TMCSR_MOD	(RLT1.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT1_TMCSR_UF	(*(volatile uint_io8_t*)0xB7882050)  /*@bfbba@*/
#define RLT1_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7882051)  /*@bfbba@*/
#define RLT1_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7882052)  /*@bfbba@*/
#define RLT1_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7882058)  /*@bfbba@*/

#define RLT2_TMCSR	(RLT2.unTMCSR.u32Register)  /*@rg@*/
#define RLT2_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7884043)  /*@bfbba@*/
#define RLT2_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7884044)  /*@bfbba@*/
#define RLT2_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7884045)  /*@bfbba@*/
#define RLT2_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7884047)  /*@bfbba@*/
#define RLT2_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7884048)  /*@bfbba@*/
#define RLT2_TMCSR_CSL	(RLT2.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT2_TMCSR_MOD	(RLT2.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT2_TMCSR_UF	(*(volatile uint_io8_t*)0xB7884050)  /*@bfbba@*/
#define RLT2_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7884051)  /*@bfbba@*/
#define RLT2_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7884052)  /*@bfbba@*/
#define RLT2_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7884058)  /*@bfbba@*/

#define RLT3_TMCSR	(RLT3.unTMCSR.u32Register)  /*@rg@*/
#define RLT3_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7886043)  /*@bfbba@*/
#define RLT3_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7886044)  /*@bfbba@*/
#define RLT3_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7886045)  /*@bfbba@*/
#define RLT3_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7886047)  /*@bfbba@*/
#define RLT3_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7886048)  /*@bfbba@*/
#define RLT3_TMCSR_CSL	(RLT3.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT3_TMCSR_MOD	(RLT3.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT3_TMCSR_UF	(*(volatile uint_io8_t*)0xB7886050)  /*@bfbba@*/
#define RLT3_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7886051)  /*@bfbba@*/
#define RLT3_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7886052)  /*@bfbba@*/
#define RLT3_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7886058)  /*@bfbba@*/

#define RLT16_TMCSR	(RLT16.unTMCSR.u32Register)  /*@rg@*/
#define RLT16_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7C80043)  /*@bfbba@*/
#define RLT16_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7C80044)  /*@bfbba@*/
#define RLT16_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7C80045)  /*@bfbba@*/
#define RLT16_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7C80047)  /*@bfbba@*/
#define RLT16_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7C80048)  /*@bfbba@*/
#define RLT16_TMCSR_CSL	(RLT16.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT16_TMCSR_MOD	(RLT16.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT16_TMCSR_UF	(*(volatile uint_io8_t*)0xB7C80050)  /*@bfbba@*/
#define RLT16_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7C80051)  /*@bfbba@*/
#define RLT16_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7C80052)  /*@bfbba@*/
#define RLT16_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7C80058)  /*@bfbba@*/

#define RLT17_TMCSR	(RLT17.unTMCSR.u32Register)  /*@rg@*/
#define RLT17_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7C82043)  /*@bfbba@*/
#define RLT17_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7C82044)  /*@bfbba@*/
#define RLT17_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7C82045)  /*@bfbba@*/
#define RLT17_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7C82047)  /*@bfbba@*/
#define RLT17_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7C82048)  /*@bfbba@*/
#define RLT17_TMCSR_CSL	(RLT17.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT17_TMCSR_MOD	(RLT17.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT17_TMCSR_UF	(*(volatile uint_io8_t*)0xB7C82050)  /*@bfbba@*/
#define RLT17_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7C82051)  /*@bfbba@*/
#define RLT17_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7C82052)  /*@bfbba@*/
#define RLT17_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7C82058)  /*@bfbba@*/

#define RLT18_TMCSR	(RLT18.unTMCSR.u32Register)  /*@rg@*/
#define RLT18_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7C84043)  /*@bfbba@*/
#define RLT18_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7C84044)  /*@bfbba@*/
#define RLT18_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7C84045)  /*@bfbba@*/
#define RLT18_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7C84047)  /*@bfbba@*/
#define RLT18_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7C84048)  /*@bfbba@*/
#define RLT18_TMCSR_CSL	(RLT18.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT18_TMCSR_MOD	(RLT18.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT18_TMCSR_UF	(*(volatile uint_io8_t*)0xB7C84050)  /*@bfbba@*/
#define RLT18_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7C84051)  /*@bfbba@*/
#define RLT18_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7C84052)  /*@bfbba@*/
#define RLT18_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7C84058)  /*@bfbba@*/

#define RLT19_TMCSR	(RLT19.unTMCSR.u32Register)  /*@rg@*/
#define RLT19_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7C86043)  /*@bfbba@*/
#define RLT19_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7C86044)  /*@bfbba@*/
#define RLT19_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7C86045)  /*@bfbba@*/
#define RLT19_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7C86047)  /*@bfbba@*/
#define RLT19_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7C86048)  /*@bfbba@*/
#define RLT19_TMCSR_CSL	(RLT19.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT19_TMCSR_MOD	(RLT19.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT19_TMCSR_UF	(*(volatile uint_io8_t*)0xB7C86050)  /*@bfbba@*/
#define RLT19_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7C86051)  /*@bfbba@*/
#define RLT19_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7C86052)  /*@bfbba@*/
#define RLT19_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7C86058)  /*@bfbba@*/

#define RLT32_TMCSR	(RLT32.unTMCSR.u32Register)  /*@rg@*/
#define RLT32_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7440043)  /*@bfbba@*/
#define RLT32_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7440044)  /*@bfbba@*/
#define RLT32_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7440045)  /*@bfbba@*/
#define RLT32_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7440047)  /*@bfbba@*/
#define RLT32_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7440048)  /*@bfbba@*/
#define RLT32_TMCSR_CSL	(RLT32.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT32_TMCSR_MOD	(RLT32.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT32_TMCSR_UF	(*(volatile uint_io8_t*)0xB7440050)  /*@bfbba@*/
#define RLT32_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7440051)  /*@bfbba@*/
#define RLT32_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7440052)  /*@bfbba@*/
#define RLT32_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7440058)  /*@bfbba@*/

#define RLT33_TMCSR	(RLT33.unTMCSR.u32Register)  /*@rg@*/
#define RLT33_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7442043)  /*@bfbba@*/
#define RLT33_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7442044)  /*@bfbba@*/
#define RLT33_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7442045)  /*@bfbba@*/
#define RLT33_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7442047)  /*@bfbba@*/
#define RLT33_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7442048)  /*@bfbba@*/
#define RLT33_TMCSR_CSL	(RLT33.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT33_TMCSR_MOD	(RLT33.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT33_TMCSR_UF	(*(volatile uint_io8_t*)0xB7442050)  /*@bfbba@*/
#define RLT33_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7442051)  /*@bfbba@*/
#define RLT33_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7442052)  /*@bfbba@*/
#define RLT33_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7442058)  /*@bfbba@*/

#define RLT34_TMCSR	(RLT34.unTMCSR.u32Register)  /*@rg@*/
#define RLT34_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7444043)  /*@bfbba@*/
#define RLT34_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7444044)  /*@bfbba@*/
#define RLT34_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7444045)  /*@bfbba@*/
#define RLT34_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7444047)  /*@bfbba@*/
#define RLT34_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7444048)  /*@bfbba@*/
#define RLT34_TMCSR_CSL	(RLT34.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT34_TMCSR_MOD	(RLT34.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT34_TMCSR_UF	(*(volatile uint_io8_t*)0xB7444050)  /*@bfbba@*/
#define RLT34_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7444051)  /*@bfbba@*/
#define RLT34_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7444052)  /*@bfbba@*/
#define RLT34_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7444058)  /*@bfbba@*/

#define RLT35_TMCSR	(RLT35.unTMCSR.u32Register)  /*@rg@*/
#define RLT35_TMCSR_INTE	(*(volatile uint_io8_t*)0xB7446043)  /*@bfbba@*/
#define RLT35_TMCSR_RELD	(*(volatile uint_io8_t*)0xB7446044)  /*@bfbba@*/
#define RLT35_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB7446045)  /*@bfbba@*/
#define RLT35_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB7446047)  /*@bfbba@*/
#define RLT35_TMCSR_NFE	(*(volatile uint_io8_t*)0xB7446048)  /*@bfbba@*/
#define RLT35_TMCSR_CSL	(RLT35.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT35_TMCSR_MOD	(RLT35.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT35_TMCSR_UF	(*(volatile uint_io8_t*)0xB7446050)  /*@bfbba@*/
#define RLT35_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB7446051)  /*@bfbba@*/
#define RLT35_TMCSR_TRG	(*(volatile uint_io8_t*)0xB7446052)  /*@bfbba@*/
#define RLT35_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB7446058)  /*@bfbba@*/

#define RLT48_TMCSR	(RLT48.unTMCSR.u32Register)  /*@rg@*/
#define RLT48_TMCSR_INTE	(*(volatile uint_io8_t*)0xB0C80043)  /*@bfbba@*/
#define RLT48_TMCSR_RELD	(*(volatile uint_io8_t*)0xB0C80044)  /*@bfbba@*/
#define RLT48_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB0C80045)  /*@bfbba@*/
#define RLT48_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB0C80047)  /*@bfbba@*/
#define RLT48_TMCSR_NFE	(*(volatile uint_io8_t*)0xB0C80048)  /*@bfbba@*/
#define RLT48_TMCSR_CSL	(RLT48.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT48_TMCSR_MOD	(RLT48.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT48_TMCSR_UF	(*(volatile uint_io8_t*)0xB0C80050)  /*@bfbba@*/
#define RLT48_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB0C80051)  /*@bfbba@*/
#define RLT48_TMCSR_TRG	(*(volatile uint_io8_t*)0xB0C80052)  /*@bfbba@*/
#define RLT48_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB0C80058)  /*@bfbba@*/

#define RLT49_TMCSR	(RLT49.unTMCSR.u32Register)  /*@rg@*/
#define RLT49_TMCSR_INTE	(*(volatile uint_io8_t*)0xB0C82043)  /*@bfbba@*/
#define RLT49_TMCSR_RELD	(*(volatile uint_io8_t*)0xB0C82044)  /*@bfbba@*/
#define RLT49_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB0C82045)  /*@bfbba@*/
#define RLT49_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB0C82047)  /*@bfbba@*/
#define RLT49_TMCSR_NFE	(*(volatile uint_io8_t*)0xB0C82048)  /*@bfbba@*/
#define RLT49_TMCSR_CSL	(RLT49.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define RLT49_TMCSR_MOD	(RLT49.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define RLT49_TMCSR_UF	(*(volatile uint_io8_t*)0xB0C82050)  /*@bfbba@*/
#define RLT49_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB0C82051)  /*@bfbba@*/
#define RLT49_TMCSR_TRG	(*(volatile uint_io8_t*)0xB0C82052)  /*@bfbba@*/
#define RLT49_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB0C82058)  /*@bfbba@*/

typedef struct stc_rltn_tmcsr_field{
    uint_io32_t		:3;
    uint_io32_t		u1INTE:1;
    uint_io32_t		u1RELD:1;
    uint_io32_t		u1OUTL:1;
    uint_io32_t		:1;
    uint_io32_t		u1DBGE:1;
    uint_io32_t		u1NFE:1;
    uint_io32_t		:1;
    uint_io32_t		u3CSL:3;
    uint_io32_t		u3MOD:3;
    uint_io32_t		u1UF:1;
    uint_io32_t		u1UFCLR:1;
    uint_io32_t		u1TRG:1;
    uint_io32_t		:5;
    uint_io32_t		u1CNTE:1;
    uint_io32_t		:7;
}stc_rltn_tmcsr_field_t;

typedef union un_rltn_tmcsr{
    uint_io32_t		u32Register;
    stc_rltn_tmcsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rltn_tmcsr_t;

/* TMRLR */
#define RLT0_TMRLR	(RLT0.unTMRLR.u32Register)  /*@rg@*/
#define RLT0_TMRLR_TMRLR	RLT0_TMRLR  /*@bfrg@*/

#define RLT1_TMRLR	(RLT1.unTMRLR.u32Register)  /*@rg@*/
#define RLT1_TMRLR_TMRLR	RLT1_TMRLR  /*@bfrg@*/

#define RLT2_TMRLR	(RLT2.unTMRLR.u32Register)  /*@rg@*/
#define RLT2_TMRLR_TMRLR	RLT2_TMRLR  /*@bfrg@*/

#define RLT3_TMRLR	(RLT3.unTMRLR.u32Register)  /*@rg@*/
#define RLT3_TMRLR_TMRLR	RLT3_TMRLR  /*@bfrg@*/

#define RLT16_TMRLR	(RLT16.unTMRLR.u32Register)  /*@rg@*/
#define RLT16_TMRLR_TMRLR	RLT16_TMRLR  /*@bfrg@*/

#define RLT17_TMRLR	(RLT17.unTMRLR.u32Register)  /*@rg@*/
#define RLT17_TMRLR_TMRLR	RLT17_TMRLR  /*@bfrg@*/

#define RLT18_TMRLR	(RLT18.unTMRLR.u32Register)  /*@rg@*/
#define RLT18_TMRLR_TMRLR	RLT18_TMRLR  /*@bfrg@*/

#define RLT19_TMRLR	(RLT19.unTMRLR.u32Register)  /*@rg@*/
#define RLT19_TMRLR_TMRLR	RLT19_TMRLR  /*@bfrg@*/

#define RLT32_TMRLR	(RLT32.unTMRLR.u32Register)  /*@rg@*/
#define RLT32_TMRLR_TMRLR	RLT32_TMRLR  /*@bfrg@*/

#define RLT33_TMRLR	(RLT33.unTMRLR.u32Register)  /*@rg@*/
#define RLT33_TMRLR_TMRLR	RLT33_TMRLR  /*@bfrg@*/

#define RLT34_TMRLR	(RLT34.unTMRLR.u32Register)  /*@rg@*/
#define RLT34_TMRLR_TMRLR	RLT34_TMRLR  /*@bfrg@*/

#define RLT35_TMRLR	(RLT35.unTMRLR.u32Register)  /*@rg@*/
#define RLT35_TMRLR_TMRLR	RLT35_TMRLR  /*@bfrg@*/

#define RLT48_TMRLR	(RLT48.unTMRLR.u32Register)  /*@rg@*/
#define RLT48_TMRLR_TMRLR	RLT48_TMRLR  /*@bfrg@*/

#define RLT49_TMRLR	(RLT49.unTMRLR.u32Register)  /*@rg@*/
#define RLT49_TMRLR_TMRLR	RLT49_TMRLR  /*@bfrg@*/

typedef union un_rltn_tmrlr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rltn_tmrlr_t;

/* TMR */
#define RLT0_TMR	(RLT0.unTMR.u32Register)  /*@rg@*/
#define RLT0_TMR_TMR	RLT0_TMR  /*@bfrg@*/

#define RLT1_TMR	(RLT1.unTMR.u32Register)  /*@rg@*/
#define RLT1_TMR_TMR	RLT1_TMR  /*@bfrg@*/

#define RLT2_TMR	(RLT2.unTMR.u32Register)  /*@rg@*/
#define RLT2_TMR_TMR	RLT2_TMR  /*@bfrg@*/

#define RLT3_TMR	(RLT3.unTMR.u32Register)  /*@rg@*/
#define RLT3_TMR_TMR	RLT3_TMR  /*@bfrg@*/

#define RLT16_TMR	(RLT16.unTMR.u32Register)  /*@rg@*/
#define RLT16_TMR_TMR	RLT16_TMR  /*@bfrg@*/

#define RLT17_TMR	(RLT17.unTMR.u32Register)  /*@rg@*/
#define RLT17_TMR_TMR	RLT17_TMR  /*@bfrg@*/

#define RLT18_TMR	(RLT18.unTMR.u32Register)  /*@rg@*/
#define RLT18_TMR_TMR	RLT18_TMR  /*@bfrg@*/

#define RLT19_TMR	(RLT19.unTMR.u32Register)  /*@rg@*/
#define RLT19_TMR_TMR	RLT19_TMR  /*@bfrg@*/

#define RLT32_TMR	(RLT32.unTMR.u32Register)  /*@rg@*/
#define RLT32_TMR_TMR	RLT32_TMR  /*@bfrg@*/

#define RLT33_TMR	(RLT33.unTMR.u32Register)  /*@rg@*/
#define RLT33_TMR_TMR	RLT33_TMR  /*@bfrg@*/

#define RLT34_TMR	(RLT34.unTMR.u32Register)  /*@rg@*/
#define RLT34_TMR_TMR	RLT34_TMR  /*@bfrg@*/

#define RLT35_TMR	(RLT35.unTMR.u32Register)  /*@rg@*/
#define RLT35_TMR_TMR	RLT35_TMR  /*@bfrg@*/

#define RLT48_TMR	(RLT48.unTMR.u32Register)  /*@rg@*/
#define RLT48_TMR_TMR	RLT48_TMR  /*@bfrg@*/

#define RLT49_TMR	(RLT49.unTMR.u32Register)  /*@rg@*/
#define RLT49_TMR_TMR	RLT49_TMR  /*@bfrg@*/

typedef union un_rltn_tmr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rltn_tmr_t;


typedef struct stc_rltn{
    un_rltn_dmacfg_t	unDMACFG;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000004 */
    un_rltn_tmcsr_t	unTMCSR;	/* 0x00000008 */
    uint_io8_t	au8Reserved1[4];	/* 0x0000000C */
    un_rltn_tmrlr_t	unTMRLR;	/* 0x00000010 */
    un_rltn_tmr_t	unTMR;	/* 0x00000014 */
    uint_io8_t	au8Reserved2[8];	/* 0x00000018 */
}stc_rltn_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_rltn_t	stcRLT[14];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32(0x20) bytes */


/* RLT[0-2] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define RLT0_1	stcRLT_1[0]
#define RLT1_1	stcRLT_1[1]
#define RLT2_1	stcRLT_1[2]
#else /* __IO_DEFINE */
#define RLT0_1	(*((volatile stc_rltn_1_t*)0xB483FC00))
#define RLT1_1	(*((volatile stc_rltn_1_t*)0xB48BFC00))
#define RLT2_1	(*((volatile stc_rltn_1_t*)0xB478FC00))
#endif /* __IO_DEFINE */

/* TSEL */
#define RLT0_TSEL	(RLT0_1.unTSEL.u32Register)  /*@rg@*/
#define RLT0_TSEL_TSEL0	(*(volatile uint_io8_t*)0xB79FE000)  /*@bfbba@*/
#define RLT0_TSEL_TSEL1	(*(volatile uint_io8_t*)0xB79FE001)  /*@bfbba@*/
#define RLT0_TSEL_TSEL2	(*(volatile uint_io8_t*)0xB79FE002)  /*@bfbba@*/
#define RLT0_TSEL_TSEL3	(*(volatile uint_io8_t*)0xB79FE003)  /*@bfbba@*/
#define RLT0_TSEL_TSEL4	(*(volatile uint_io8_t*)0xB79FE004)  /*@bfbba@*/
#define RLT0_TSEL_TSEL5	(*(volatile uint_io8_t*)0xB79FE005)  /*@bfbba@*/
#define RLT0_TSEL_TSEL6	(*(volatile uint_io8_t*)0xB79FE006)  /*@bfbba@*/
#define RLT0_TSEL_TSEL7	(*(volatile uint_io8_t*)0xB79FE007)  /*@bfbba@*/
#define RLT0_TSEL_TSEL8	(*(volatile uint_io8_t*)0xB79FE008)  /*@bfbba@*/
#define RLT0_TSEL_TSEL9	(*(volatile uint_io8_t*)0xB79FE009)  /*@bfbba@*/
#define RLT0_TSEL_TSEL10	(*(volatile uint_io8_t*)0xB79FE00A)  /*@bfbba@*/
#define RLT0_TSEL_TSEL11	(*(volatile uint_io8_t*)0xB79FE00B)  /*@bfbba@*/
#define RLT0_TSEL_TSEL12	(*(volatile uint_io8_t*)0xB79FE00C)  /*@bfbba@*/
#define RLT0_TSEL_TSEL13	(*(volatile uint_io8_t*)0xB79FE00D)  /*@bfbba@*/
#define RLT0_TSEL_TSEL14	(*(volatile uint_io8_t*)0xB79FE00E)  /*@bfbba@*/
#define RLT0_TSEL_TSEL15	(*(volatile uint_io8_t*)0xB79FE00F)  /*@bfbba@*/

#define RLT1_TSEL	(RLT1_1.unTSEL.u32Register)  /*@rg@*/
#define RLT1_TSEL_TSEL0	(*(volatile uint_io8_t*)0xB7DFE000)  /*@bfbba@*/
#define RLT1_TSEL_TSEL1	(*(volatile uint_io8_t*)0xB7DFE001)  /*@bfbba@*/
#define RLT1_TSEL_TSEL2	(*(volatile uint_io8_t*)0xB7DFE002)  /*@bfbba@*/
#define RLT1_TSEL_TSEL3	(*(volatile uint_io8_t*)0xB7DFE003)  /*@bfbba@*/
#define RLT1_TSEL_TSEL4	(*(volatile uint_io8_t*)0xB7DFE004)  /*@bfbba@*/
#define RLT1_TSEL_TSEL5	(*(volatile uint_io8_t*)0xB7DFE005)  /*@bfbba@*/
#define RLT1_TSEL_TSEL6	(*(volatile uint_io8_t*)0xB7DFE006)  /*@bfbba@*/
#define RLT1_TSEL_TSEL7	(*(volatile uint_io8_t*)0xB7DFE007)  /*@bfbba@*/
#define RLT1_TSEL_TSEL8	(*(volatile uint_io8_t*)0xB7DFE008)  /*@bfbba@*/
#define RLT1_TSEL_TSEL9	(*(volatile uint_io8_t*)0xB7DFE009)  /*@bfbba@*/
#define RLT1_TSEL_TSEL10	(*(volatile uint_io8_t*)0xB7DFE00A)  /*@bfbba@*/
#define RLT1_TSEL_TSEL11	(*(volatile uint_io8_t*)0xB7DFE00B)  /*@bfbba@*/
#define RLT1_TSEL_TSEL12	(*(volatile uint_io8_t*)0xB7DFE00C)  /*@bfbba@*/
#define RLT1_TSEL_TSEL13	(*(volatile uint_io8_t*)0xB7DFE00D)  /*@bfbba@*/
#define RLT1_TSEL_TSEL14	(*(volatile uint_io8_t*)0xB7DFE00E)  /*@bfbba@*/
#define RLT1_TSEL_TSEL15	(*(volatile uint_io8_t*)0xB7DFE00F)  /*@bfbba@*/

#define RLT2_TSEL	(RLT2_1.unTSEL.u32Register)  /*@rg@*/
#define RLT2_TSEL_TSEL0	(*(volatile uint_io8_t*)0xB747E000)  /*@bfbba@*/
#define RLT2_TSEL_TSEL1	(*(volatile uint_io8_t*)0xB747E001)  /*@bfbba@*/
#define RLT2_TSEL_TSEL2	(*(volatile uint_io8_t*)0xB747E002)  /*@bfbba@*/
#define RLT2_TSEL_TSEL3	(*(volatile uint_io8_t*)0xB747E003)  /*@bfbba@*/
#define RLT2_TSEL_TSEL4	(*(volatile uint_io8_t*)0xB747E004)  /*@bfbba@*/
#define RLT2_TSEL_TSEL5	(*(volatile uint_io8_t*)0xB747E005)  /*@bfbba@*/
#define RLT2_TSEL_TSEL6	(*(volatile uint_io8_t*)0xB747E006)  /*@bfbba@*/
#define RLT2_TSEL_TSEL7	(*(volatile uint_io8_t*)0xB747E007)  /*@bfbba@*/
#define RLT2_TSEL_TSEL8	(*(volatile uint_io8_t*)0xB747E008)  /*@bfbba@*/
#define RLT2_TSEL_TSEL9	(*(volatile uint_io8_t*)0xB747E009)  /*@bfbba@*/
#define RLT2_TSEL_TSEL10	(*(volatile uint_io8_t*)0xB747E00A)  /*@bfbba@*/
#define RLT2_TSEL_TSEL11	(*(volatile uint_io8_t*)0xB747E00B)  /*@bfbba@*/
#define RLT2_TSEL_TSEL12	(*(volatile uint_io8_t*)0xB747E00C)  /*@bfbba@*/
#define RLT2_TSEL_TSEL13	(*(volatile uint_io8_t*)0xB747E00D)  /*@bfbba@*/
#define RLT2_TSEL_TSEL14	(*(volatile uint_io8_t*)0xB747E00E)  /*@bfbba@*/
#define RLT2_TSEL_TSEL15	(*(volatile uint_io8_t*)0xB747E00F)  /*@bfbba@*/

typedef struct stc_rltn_1_tsel_field{
    uint_io32_t		u1TSEL0:1;
    uint_io32_t		u1TSEL1:1;
    uint_io32_t		u1TSEL2:1;
    uint_io32_t		u1TSEL3:1;
    uint_io32_t		u1TSEL4:1;
    uint_io32_t		u1TSEL5:1;
    uint_io32_t		u1TSEL6:1;
    uint_io32_t		u1TSEL7:1;
    uint_io32_t		u1TSEL8:1;
    uint_io32_t		u1TSEL9:1;
    uint_io32_t		u1TSEL10:1;
    uint_io32_t		u1TSEL11:1;
    uint_io32_t		u1TSEL12:1;
    uint_io32_t		u1TSEL13:1;
    uint_io32_t		u1TSEL14:1;
    uint_io32_t		u1TSEL15:1;
    uint_io32_t		:16;
}stc_rltn_1_tsel_field_t;

typedef union un_rltn_1_tsel{
    uint_io32_t		u32Register;
    stc_rltn_1_tsel_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rltn_1_tsel_t;

/* SSSR */
#define RLT0_SSSR	(RLT0_1.unSSSR.u32Register)  /*@rg@*/
#define RLT0_SSSR_SSSR	(RLT0_1.unSSSR.au16Halfword[0])  /*@bfhword@*/

#define RLT1_SSSR	(RLT1_1.unSSSR.u32Register)  /*@rg@*/
#define RLT1_SSSR_SSSR	(RLT1_1.unSSSR.au16Halfword[0])  /*@bfhword@*/

#define RLT2_SSSR	(RLT2_1.unSSSR.u32Register)  /*@rg@*/
#define RLT2_SSSR_SSSR	(RLT2_1.unSSSR.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_rltn_1_sssr_field{
    uint_io32_t		u16SSSR:16;
    uint_io32_t		:16;
}stc_rltn_1_sssr_field_t;

typedef union un_rltn_1_sssr{
    uint_io32_t		u32Register;
    stc_rltn_1_sssr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rltn_1_sssr_t;


typedef struct stc_rltn_1{
    un_rltn_1_tsel_t	unTSEL;	/* 0x00000000 */
    un_rltn_1_sssr_t	unSSSR;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[1016];	/* 0x00000008 */
}stc_rltn_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_rltn_1_t	stcRLT_1[3];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_RLT_H */
