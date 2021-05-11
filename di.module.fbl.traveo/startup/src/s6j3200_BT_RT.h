/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_BT_RT_H
#define __S6J3200_BT_RT_H

#include "s6j3200io_basetypes.h"

/* BT[00-23]_RT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT00_RT	stcBT_RT[0]
#define BT01_RT	stcBT_RT[1]
#define BT02_RT	stcBT_RT[2]
#define BT03_RT	stcBT_RT[3]
#define BT04_RT	stcBT_RT[4]
#define BT05_RT	stcBT_RT[5]
#define BT06_RT	stcBT_RT[6]
#define BT07_RT	stcBT_RT[7]
#define BT08_RT	stcBT_RT[8]
#define BT09_RT	stcBT_RT[9]
#define BT10_RT	stcBT_RT[10]
#define BT11_RT	stcBT_RT[11]
#define BT12_RT	stcBT_RT[12]
#define BT13_RT	stcBT_RT[13]
#define BT14_RT	stcBT_RT[14]
#define BT15_RT	stcBT_RT[15]
#define BT16_RT	stcBT_RT[16]
#define BT17_RT	stcBT_RT[17]
#define BT18_RT	stcBT_RT[18]
#define BT19_RT	stcBT_RT[19]
#define BT20_RT	stcBT_RT[20]
#define BT21_RT	stcBT_RT[21]
#define BT22_RT	stcBT_RT[22]
#define BT23_RT	stcBT_RT[23]
#else /* __IO_DEFINE */
#define BT00_RT	(*((volatile stc_btn_rt_t*)0xB4808000))
#define BT01_RT	(*((volatile stc_btn_rt_t*)0xB4808400))
#define BT02_RT	(*((volatile stc_btn_rt_t*)0xB4808800))
#define BT03_RT	(*((volatile stc_btn_rt_t*)0xB4808C00))
#define BT04_RT	(*((volatile stc_btn_rt_t*)0xB4809000))
#define BT05_RT	(*((volatile stc_btn_rt_t*)0xB4809400))
#define BT06_RT	(*((volatile stc_btn_rt_t*)0xB4809800))
#define BT07_RT	(*((volatile stc_btn_rt_t*)0xB4809C00))
#define BT08_RT	(*((volatile stc_btn_rt_t*)0xB480A000))
#define BT09_RT	(*((volatile stc_btn_rt_t*)0xB480A400))
#define BT10_RT	(*((volatile stc_btn_rt_t*)0xB480A800))
#define BT11_RT	(*((volatile stc_btn_rt_t*)0xB480AC00))
#define BT12_RT	(*((volatile stc_btn_rt_t*)0xB4888000))
#define BT13_RT	(*((volatile stc_btn_rt_t*)0xB4888400))
#define BT14_RT	(*((volatile stc_btn_rt_t*)0xB4888800))
#define BT15_RT	(*((volatile stc_btn_rt_t*)0xB4888C00))
#define BT16_RT	(*((volatile stc_btn_rt_t*)0xB4889000))
#define BT17_RT	(*((volatile stc_btn_rt_t*)0xB4889400))
#define BT18_RT	(*((volatile stc_btn_rt_t*)0xB4889800))
#define BT19_RT	(*((volatile stc_btn_rt_t*)0xB4889C00))
#define BT20_RT	(*((volatile stc_btn_rt_t*)0xB488A000))
#define BT21_RT	(*((volatile stc_btn_rt_t*)0xB488A400))
#define BT22_RT	(*((volatile stc_btn_rt_t*)0xB488A800))
#define BT23_RT	(*((volatile stc_btn_rt_t*)0xB488AC00))
#endif /* __IO_DEFINE */

/* PCSR */
#define BT00_RT_PCSR	(BT00_RT.unPCSR.u16Register)  /*@rg@*/
#define BT00_RT_PCSR_PCSR	BT00_RT_PCSR  /*@bfrg@*/

#define BT01_RT_PCSR	(BT01_RT.unPCSR.u16Register)  /*@rg@*/
#define BT01_RT_PCSR_PCSR	BT01_RT_PCSR  /*@bfrg@*/

#define BT02_RT_PCSR	(BT02_RT.unPCSR.u16Register)  /*@rg@*/
#define BT02_RT_PCSR_PCSR	BT02_RT_PCSR  /*@bfrg@*/

#define BT03_RT_PCSR	(BT03_RT.unPCSR.u16Register)  /*@rg@*/
#define BT03_RT_PCSR_PCSR	BT03_RT_PCSR  /*@bfrg@*/

#define BT04_RT_PCSR	(BT04_RT.unPCSR.u16Register)  /*@rg@*/
#define BT04_RT_PCSR_PCSR	BT04_RT_PCSR  /*@bfrg@*/

#define BT05_RT_PCSR	(BT05_RT.unPCSR.u16Register)  /*@rg@*/
#define BT05_RT_PCSR_PCSR	BT05_RT_PCSR  /*@bfrg@*/

#define BT06_RT_PCSR	(BT06_RT.unPCSR.u16Register)  /*@rg@*/
#define BT06_RT_PCSR_PCSR	BT06_RT_PCSR  /*@bfrg@*/

#define BT07_RT_PCSR	(BT07_RT.unPCSR.u16Register)  /*@rg@*/
#define BT07_RT_PCSR_PCSR	BT07_RT_PCSR  /*@bfrg@*/

#define BT08_RT_PCSR	(BT08_RT.unPCSR.u16Register)  /*@rg@*/
#define BT08_RT_PCSR_PCSR	BT08_RT_PCSR  /*@bfrg@*/

#define BT09_RT_PCSR	(BT09_RT.unPCSR.u16Register)  /*@rg@*/
#define BT09_RT_PCSR_PCSR	BT09_RT_PCSR  /*@bfrg@*/

#define BT10_RT_PCSR	(BT10_RT.unPCSR.u16Register)  /*@rg@*/
#define BT10_RT_PCSR_PCSR	BT10_RT_PCSR  /*@bfrg@*/

#define BT11_RT_PCSR	(BT11_RT.unPCSR.u16Register)  /*@rg@*/
#define BT11_RT_PCSR_PCSR	BT11_RT_PCSR  /*@bfrg@*/

#define BT12_RT_PCSR	(BT12_RT.unPCSR.u16Register)  /*@rg@*/
#define BT12_RT_PCSR_PCSR	BT12_RT_PCSR  /*@bfrg@*/

#define BT13_RT_PCSR	(BT13_RT.unPCSR.u16Register)  /*@rg@*/
#define BT13_RT_PCSR_PCSR	BT13_RT_PCSR  /*@bfrg@*/

#define BT14_RT_PCSR	(BT14_RT.unPCSR.u16Register)  /*@rg@*/
#define BT14_RT_PCSR_PCSR	BT14_RT_PCSR  /*@bfrg@*/

#define BT15_RT_PCSR	(BT15_RT.unPCSR.u16Register)  /*@rg@*/
#define BT15_RT_PCSR_PCSR	BT15_RT_PCSR  /*@bfrg@*/

#define BT16_RT_PCSR	(BT16_RT.unPCSR.u16Register)  /*@rg@*/
#define BT16_RT_PCSR_PCSR	BT16_RT_PCSR  /*@bfrg@*/

#define BT17_RT_PCSR	(BT17_RT.unPCSR.u16Register)  /*@rg@*/
#define BT17_RT_PCSR_PCSR	BT17_RT_PCSR  /*@bfrg@*/

#define BT18_RT_PCSR	(BT18_RT.unPCSR.u16Register)  /*@rg@*/
#define BT18_RT_PCSR_PCSR	BT18_RT_PCSR  /*@bfrg@*/

#define BT19_RT_PCSR	(BT19_RT.unPCSR.u16Register)  /*@rg@*/
#define BT19_RT_PCSR_PCSR	BT19_RT_PCSR  /*@bfrg@*/

#define BT20_RT_PCSR	(BT20_RT.unPCSR.u16Register)  /*@rg@*/
#define BT20_RT_PCSR_PCSR	BT20_RT_PCSR  /*@bfrg@*/

#define BT21_RT_PCSR	(BT21_RT.unPCSR.u16Register)  /*@rg@*/
#define BT21_RT_PCSR_PCSR	BT21_RT_PCSR  /*@bfrg@*/

#define BT22_RT_PCSR	(BT22_RT.unPCSR.u16Register)  /*@rg@*/
#define BT22_RT_PCSR_PCSR	BT22_RT_PCSR  /*@bfrg@*/

#define BT23_RT_PCSR	(BT23_RT.unPCSR.u16Register)  /*@rg@*/
#define BT23_RT_PCSR_PCSR	BT23_RT_PCSR  /*@bfrg@*/

typedef union un_btn_rt_pcsr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_rt_pcsr_t;

/* TMR */
#define BT00_RT_TMR	(BT00_RT.unTMR.u16Register)  /*@rg@*/
#define BT00_RT_TMR_TMR	BT00_RT_TMR  /*@bfrg@*/

#define BT01_RT_TMR	(BT01_RT.unTMR.u16Register)  /*@rg@*/
#define BT01_RT_TMR_TMR	BT01_RT_TMR  /*@bfrg@*/

#define BT02_RT_TMR	(BT02_RT.unTMR.u16Register)  /*@rg@*/
#define BT02_RT_TMR_TMR	BT02_RT_TMR  /*@bfrg@*/

#define BT03_RT_TMR	(BT03_RT.unTMR.u16Register)  /*@rg@*/
#define BT03_RT_TMR_TMR	BT03_RT_TMR  /*@bfrg@*/

#define BT04_RT_TMR	(BT04_RT.unTMR.u16Register)  /*@rg@*/
#define BT04_RT_TMR_TMR	BT04_RT_TMR  /*@bfrg@*/

#define BT05_RT_TMR	(BT05_RT.unTMR.u16Register)  /*@rg@*/
#define BT05_RT_TMR_TMR	BT05_RT_TMR  /*@bfrg@*/

#define BT06_RT_TMR	(BT06_RT.unTMR.u16Register)  /*@rg@*/
#define BT06_RT_TMR_TMR	BT06_RT_TMR  /*@bfrg@*/

#define BT07_RT_TMR	(BT07_RT.unTMR.u16Register)  /*@rg@*/
#define BT07_RT_TMR_TMR	BT07_RT_TMR  /*@bfrg@*/

#define BT08_RT_TMR	(BT08_RT.unTMR.u16Register)  /*@rg@*/
#define BT08_RT_TMR_TMR	BT08_RT_TMR  /*@bfrg@*/

#define BT09_RT_TMR	(BT09_RT.unTMR.u16Register)  /*@rg@*/
#define BT09_RT_TMR_TMR	BT09_RT_TMR  /*@bfrg@*/

#define BT10_RT_TMR	(BT10_RT.unTMR.u16Register)  /*@rg@*/
#define BT10_RT_TMR_TMR	BT10_RT_TMR  /*@bfrg@*/

#define BT11_RT_TMR	(BT11_RT.unTMR.u16Register)  /*@rg@*/
#define BT11_RT_TMR_TMR	BT11_RT_TMR  /*@bfrg@*/

#define BT12_RT_TMR	(BT12_RT.unTMR.u16Register)  /*@rg@*/
#define BT12_RT_TMR_TMR	BT12_RT_TMR  /*@bfrg@*/

#define BT13_RT_TMR	(BT13_RT.unTMR.u16Register)  /*@rg@*/
#define BT13_RT_TMR_TMR	BT13_RT_TMR  /*@bfrg@*/

#define BT14_RT_TMR	(BT14_RT.unTMR.u16Register)  /*@rg@*/
#define BT14_RT_TMR_TMR	BT14_RT_TMR  /*@bfrg@*/

#define BT15_RT_TMR	(BT15_RT.unTMR.u16Register)  /*@rg@*/
#define BT15_RT_TMR_TMR	BT15_RT_TMR  /*@bfrg@*/

#define BT16_RT_TMR	(BT16_RT.unTMR.u16Register)  /*@rg@*/
#define BT16_RT_TMR_TMR	BT16_RT_TMR  /*@bfrg@*/

#define BT17_RT_TMR	(BT17_RT.unTMR.u16Register)  /*@rg@*/
#define BT17_RT_TMR_TMR	BT17_RT_TMR  /*@bfrg@*/

#define BT18_RT_TMR	(BT18_RT.unTMR.u16Register)  /*@rg@*/
#define BT18_RT_TMR_TMR	BT18_RT_TMR  /*@bfrg@*/

#define BT19_RT_TMR	(BT19_RT.unTMR.u16Register)  /*@rg@*/
#define BT19_RT_TMR_TMR	BT19_RT_TMR  /*@bfrg@*/

#define BT20_RT_TMR	(BT20_RT.unTMR.u16Register)  /*@rg@*/
#define BT20_RT_TMR_TMR	BT20_RT_TMR  /*@bfrg@*/

#define BT21_RT_TMR	(BT21_RT.unTMR.u16Register)  /*@rg@*/
#define BT21_RT_TMR_TMR	BT21_RT_TMR  /*@bfrg@*/

#define BT22_RT_TMR	(BT22_RT.unTMR.u16Register)  /*@rg@*/
#define BT22_RT_TMR_TMR	BT22_RT_TMR  /*@bfrg@*/

#define BT23_RT_TMR	(BT23_RT.unTMR.u16Register)  /*@rg@*/
#define BT23_RT_TMR_TMR	BT23_RT_TMR  /*@bfrg@*/

typedef union un_btn_rt_tmr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_rt_tmr_t;

/* TMCR */
#define BT00_RT_TMCR	(BT00_RT.unTMCR.u16Register)  /*@rg@*/
#define BT00_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7840060)  /*@bfbba@*/
#define BT00_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7840061)  /*@bfbba@*/
#define BT00_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7840062)  /*@bfbba@*/
#define BT00_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7840063)  /*@bfbba@*/
#define BT00_RT_TMCR_FMD	(BT00_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT00_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7840067)  /*@bfbba@*/
#define BT00_RT_TMCR_EGS	(BT00_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT00_RT_TMCR_CKS2_0	(BT00_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT01_RT_TMCR	(BT01_RT.unTMCR.u16Register)  /*@rg@*/
#define BT01_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7842060)  /*@bfbba@*/
#define BT01_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7842061)  /*@bfbba@*/
#define BT01_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7842062)  /*@bfbba@*/
#define BT01_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7842063)  /*@bfbba@*/
#define BT01_RT_TMCR_FMD	(BT01_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT01_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7842067)  /*@bfbba@*/
#define BT01_RT_TMCR_EGS	(BT01_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT01_RT_TMCR_CKS2_0	(BT01_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT02_RT_TMCR	(BT02_RT.unTMCR.u16Register)  /*@rg@*/
#define BT02_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7844060)  /*@bfbba@*/
#define BT02_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7844061)  /*@bfbba@*/
#define BT02_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7844062)  /*@bfbba@*/
#define BT02_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7844063)  /*@bfbba@*/
#define BT02_RT_TMCR_FMD	(BT02_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT02_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7844067)  /*@bfbba@*/
#define BT02_RT_TMCR_EGS	(BT02_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT02_RT_TMCR_CKS2_0	(BT02_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT03_RT_TMCR	(BT03_RT.unTMCR.u16Register)  /*@rg@*/
#define BT03_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7846060)  /*@bfbba@*/
#define BT03_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7846061)  /*@bfbba@*/
#define BT03_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7846062)  /*@bfbba@*/
#define BT03_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7846063)  /*@bfbba@*/
#define BT03_RT_TMCR_FMD	(BT03_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT03_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7846067)  /*@bfbba@*/
#define BT03_RT_TMCR_EGS	(BT03_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT03_RT_TMCR_CKS2_0	(BT03_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT04_RT_TMCR	(BT04_RT.unTMCR.u16Register)  /*@rg@*/
#define BT04_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7848060)  /*@bfbba@*/
#define BT04_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7848061)  /*@bfbba@*/
#define BT04_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7848062)  /*@bfbba@*/
#define BT04_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7848063)  /*@bfbba@*/
#define BT04_RT_TMCR_FMD	(BT04_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT04_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7848067)  /*@bfbba@*/
#define BT04_RT_TMCR_EGS	(BT04_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT04_RT_TMCR_CKS2_0	(BT04_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT05_RT_TMCR	(BT05_RT.unTMCR.u16Register)  /*@rg@*/
#define BT05_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB784A060)  /*@bfbba@*/
#define BT05_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784A061)  /*@bfbba@*/
#define BT05_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784A062)  /*@bfbba@*/
#define BT05_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784A063)  /*@bfbba@*/
#define BT05_RT_TMCR_FMD	(BT05_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT05_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB784A067)  /*@bfbba@*/
#define BT05_RT_TMCR_EGS	(BT05_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT05_RT_TMCR_CKS2_0	(BT05_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT06_RT_TMCR	(BT06_RT.unTMCR.u16Register)  /*@rg@*/
#define BT06_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB784C060)  /*@bfbba@*/
#define BT06_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784C061)  /*@bfbba@*/
#define BT06_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784C062)  /*@bfbba@*/
#define BT06_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784C063)  /*@bfbba@*/
#define BT06_RT_TMCR_FMD	(BT06_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT06_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB784C067)  /*@bfbba@*/
#define BT06_RT_TMCR_EGS	(BT06_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT06_RT_TMCR_CKS2_0	(BT06_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT07_RT_TMCR	(BT07_RT.unTMCR.u16Register)  /*@rg@*/
#define BT07_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB784E060)  /*@bfbba@*/
#define BT07_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784E061)  /*@bfbba@*/
#define BT07_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784E062)  /*@bfbba@*/
#define BT07_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784E063)  /*@bfbba@*/
#define BT07_RT_TMCR_FMD	(BT07_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT07_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB784E067)  /*@bfbba@*/
#define BT07_RT_TMCR_EGS	(BT07_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT07_RT_TMCR_CKS2_0	(BT07_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT08_RT_TMCR	(BT08_RT.unTMCR.u16Register)  /*@rg@*/
#define BT08_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7850060)  /*@bfbba@*/
#define BT08_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7850061)  /*@bfbba@*/
#define BT08_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7850062)  /*@bfbba@*/
#define BT08_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7850063)  /*@bfbba@*/
#define BT08_RT_TMCR_FMD	(BT08_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT08_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7850067)  /*@bfbba@*/
#define BT08_RT_TMCR_EGS	(BT08_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT08_RT_TMCR_CKS2_0	(BT08_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT09_RT_TMCR	(BT09_RT.unTMCR.u16Register)  /*@rg@*/
#define BT09_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7852060)  /*@bfbba@*/
#define BT09_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7852061)  /*@bfbba@*/
#define BT09_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7852062)  /*@bfbba@*/
#define BT09_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7852063)  /*@bfbba@*/
#define BT09_RT_TMCR_FMD	(BT09_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT09_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7852067)  /*@bfbba@*/
#define BT09_RT_TMCR_EGS	(BT09_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT09_RT_TMCR_CKS2_0	(BT09_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT10_RT_TMCR	(BT10_RT.unTMCR.u16Register)  /*@rg@*/
#define BT10_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7854060)  /*@bfbba@*/
#define BT10_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7854061)  /*@bfbba@*/
#define BT10_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7854062)  /*@bfbba@*/
#define BT10_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7854063)  /*@bfbba@*/
#define BT10_RT_TMCR_FMD	(BT10_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT10_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7854067)  /*@bfbba@*/
#define BT10_RT_TMCR_EGS	(BT10_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT10_RT_TMCR_CKS2_0	(BT10_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT11_RT_TMCR	(BT11_RT.unTMCR.u16Register)  /*@rg@*/
#define BT11_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7856060)  /*@bfbba@*/
#define BT11_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7856061)  /*@bfbba@*/
#define BT11_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7856062)  /*@bfbba@*/
#define BT11_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7856063)  /*@bfbba@*/
#define BT11_RT_TMCR_FMD	(BT11_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT11_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7856067)  /*@bfbba@*/
#define BT11_RT_TMCR_EGS	(BT11_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT11_RT_TMCR_CKS2_0	(BT11_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT12_RT_TMCR	(BT12_RT.unTMCR.u16Register)  /*@rg@*/
#define BT12_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C40060)  /*@bfbba@*/
#define BT12_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C40061)  /*@bfbba@*/
#define BT12_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C40062)  /*@bfbba@*/
#define BT12_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C40063)  /*@bfbba@*/
#define BT12_RT_TMCR_FMD	(BT12_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT12_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C40067)  /*@bfbba@*/
#define BT12_RT_TMCR_EGS	(BT12_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT12_RT_TMCR_CKS2_0	(BT12_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT13_RT_TMCR	(BT13_RT.unTMCR.u16Register)  /*@rg@*/
#define BT13_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C42060)  /*@bfbba@*/
#define BT13_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C42061)  /*@bfbba@*/
#define BT13_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C42062)  /*@bfbba@*/
#define BT13_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C42063)  /*@bfbba@*/
#define BT13_RT_TMCR_FMD	(BT13_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT13_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C42067)  /*@bfbba@*/
#define BT13_RT_TMCR_EGS	(BT13_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT13_RT_TMCR_CKS2_0	(BT13_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT14_RT_TMCR	(BT14_RT.unTMCR.u16Register)  /*@rg@*/
#define BT14_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C44060)  /*@bfbba@*/
#define BT14_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C44061)  /*@bfbba@*/
#define BT14_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C44062)  /*@bfbba@*/
#define BT14_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C44063)  /*@bfbba@*/
#define BT14_RT_TMCR_FMD	(BT14_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT14_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C44067)  /*@bfbba@*/
#define BT14_RT_TMCR_EGS	(BT14_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT14_RT_TMCR_CKS2_0	(BT14_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT15_RT_TMCR	(BT15_RT.unTMCR.u16Register)  /*@rg@*/
#define BT15_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C46060)  /*@bfbba@*/
#define BT15_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C46061)  /*@bfbba@*/
#define BT15_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C46062)  /*@bfbba@*/
#define BT15_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C46063)  /*@bfbba@*/
#define BT15_RT_TMCR_FMD	(BT15_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT15_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C46067)  /*@bfbba@*/
#define BT15_RT_TMCR_EGS	(BT15_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT15_RT_TMCR_CKS2_0	(BT15_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT16_RT_TMCR	(BT16_RT.unTMCR.u16Register)  /*@rg@*/
#define BT16_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C48060)  /*@bfbba@*/
#define BT16_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C48061)  /*@bfbba@*/
#define BT16_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C48062)  /*@bfbba@*/
#define BT16_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C48063)  /*@bfbba@*/
#define BT16_RT_TMCR_FMD	(BT16_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT16_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C48067)  /*@bfbba@*/
#define BT16_RT_TMCR_EGS	(BT16_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT16_RT_TMCR_CKS2_0	(BT16_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT17_RT_TMCR	(BT17_RT.unTMCR.u16Register)  /*@rg@*/
#define BT17_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4A060)  /*@bfbba@*/
#define BT17_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4A061)  /*@bfbba@*/
#define BT17_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4A062)  /*@bfbba@*/
#define BT17_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4A063)  /*@bfbba@*/
#define BT17_RT_TMCR_FMD	(BT17_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT17_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C4A067)  /*@bfbba@*/
#define BT17_RT_TMCR_EGS	(BT17_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT17_RT_TMCR_CKS2_0	(BT17_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT18_RT_TMCR	(BT18_RT.unTMCR.u16Register)  /*@rg@*/
#define BT18_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4C060)  /*@bfbba@*/
#define BT18_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4C061)  /*@bfbba@*/
#define BT18_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4C062)  /*@bfbba@*/
#define BT18_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4C063)  /*@bfbba@*/
#define BT18_RT_TMCR_FMD	(BT18_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT18_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C4C067)  /*@bfbba@*/
#define BT18_RT_TMCR_EGS	(BT18_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT18_RT_TMCR_CKS2_0	(BT18_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT19_RT_TMCR	(BT19_RT.unTMCR.u16Register)  /*@rg@*/
#define BT19_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4E060)  /*@bfbba@*/
#define BT19_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4E061)  /*@bfbba@*/
#define BT19_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4E062)  /*@bfbba@*/
#define BT19_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4E063)  /*@bfbba@*/
#define BT19_RT_TMCR_FMD	(BT19_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT19_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C4E067)  /*@bfbba@*/
#define BT19_RT_TMCR_EGS	(BT19_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT19_RT_TMCR_CKS2_0	(BT19_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT20_RT_TMCR	(BT20_RT.unTMCR.u16Register)  /*@rg@*/
#define BT20_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C50060)  /*@bfbba@*/
#define BT20_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C50061)  /*@bfbba@*/
#define BT20_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C50062)  /*@bfbba@*/
#define BT20_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C50063)  /*@bfbba@*/
#define BT20_RT_TMCR_FMD	(BT20_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT20_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C50067)  /*@bfbba@*/
#define BT20_RT_TMCR_EGS	(BT20_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT20_RT_TMCR_CKS2_0	(BT20_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT21_RT_TMCR	(BT21_RT.unTMCR.u16Register)  /*@rg@*/
#define BT21_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C52060)  /*@bfbba@*/
#define BT21_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C52061)  /*@bfbba@*/
#define BT21_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C52062)  /*@bfbba@*/
#define BT21_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C52063)  /*@bfbba@*/
#define BT21_RT_TMCR_FMD	(BT21_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT21_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C52067)  /*@bfbba@*/
#define BT21_RT_TMCR_EGS	(BT21_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT21_RT_TMCR_CKS2_0	(BT21_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT22_RT_TMCR	(BT22_RT.unTMCR.u16Register)  /*@rg@*/
#define BT22_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C54060)  /*@bfbba@*/
#define BT22_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C54061)  /*@bfbba@*/
#define BT22_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C54062)  /*@bfbba@*/
#define BT22_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C54063)  /*@bfbba@*/
#define BT22_RT_TMCR_FMD	(BT22_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT22_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C54067)  /*@bfbba@*/
#define BT22_RT_TMCR_EGS	(BT22_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT22_RT_TMCR_CKS2_0	(BT22_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT23_RT_TMCR	(BT23_RT.unTMCR.u16Register)  /*@rg@*/
#define BT23_RT_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C56060)  /*@bfbba@*/
#define BT23_RT_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C56061)  /*@bfbba@*/
#define BT23_RT_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C56062)  /*@bfbba@*/
#define BT23_RT_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C56063)  /*@bfbba@*/
#define BT23_RT_TMCR_FMD	(BT23_RT.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT23_RT_TMCR_T32	(*(volatile uint_io8_t*)0xB7C56067)  /*@bfbba@*/
#define BT23_RT_TMCR_EGS	(BT23_RT.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT23_RT_TMCR_CKS2_0	(BT23_RT.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

typedef struct stc_btn_rt_tmcr_field{
    uint_io16_t		u1STRG:1;
    uint_io16_t		u1CTEN:1;
    uint_io16_t		u1MDSE:1;
    uint_io16_t		u1OSEL:1;
    uint_io16_t		u3FMD:3;
    uint_io16_t		u1T32:1;
    uint_io16_t		u2EGS:2;
    uint_io16_t		:2;
    uint_io16_t		u3CKS2_0:3;
    uint_io16_t		:1;
}stc_btn_rt_tmcr_field_t;

typedef union un_btn_rt_tmcr{
    uint_io16_t		u16Register;
    stc_btn_rt_tmcr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_btn_rt_tmcr_t;

/* STC */
#define BT00_RT_STC	(BT00_RT.unSTC.u8Register)  /*@rg@*/
#define BT00_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7840080)  /*@bfbba@*/
#define BT00_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7840082)  /*@bfbba@*/
#define BT00_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7840084)  /*@bfbba@*/
#define BT00_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7840086)  /*@bfbba@*/

#define BT01_RT_STC	(BT01_RT.unSTC.u8Register)  /*@rg@*/
#define BT01_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7842080)  /*@bfbba@*/
#define BT01_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7842082)  /*@bfbba@*/
#define BT01_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7842084)  /*@bfbba@*/
#define BT01_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7842086)  /*@bfbba@*/

#define BT02_RT_STC	(BT02_RT.unSTC.u8Register)  /*@rg@*/
#define BT02_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7844080)  /*@bfbba@*/
#define BT02_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7844082)  /*@bfbba@*/
#define BT02_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7844084)  /*@bfbba@*/
#define BT02_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7844086)  /*@bfbba@*/

#define BT03_RT_STC	(BT03_RT.unSTC.u8Register)  /*@rg@*/
#define BT03_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7846080)  /*@bfbba@*/
#define BT03_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7846082)  /*@bfbba@*/
#define BT03_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7846084)  /*@bfbba@*/
#define BT03_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7846086)  /*@bfbba@*/

#define BT04_RT_STC	(BT04_RT.unSTC.u8Register)  /*@rg@*/
#define BT04_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7848080)  /*@bfbba@*/
#define BT04_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7848082)  /*@bfbba@*/
#define BT04_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7848084)  /*@bfbba@*/
#define BT04_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7848086)  /*@bfbba@*/

#define BT05_RT_STC	(BT05_RT.unSTC.u8Register)  /*@rg@*/
#define BT05_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB784A080)  /*@bfbba@*/
#define BT05_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB784A082)  /*@bfbba@*/
#define BT05_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB784A084)  /*@bfbba@*/
#define BT05_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB784A086)  /*@bfbba@*/

#define BT06_RT_STC	(BT06_RT.unSTC.u8Register)  /*@rg@*/
#define BT06_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB784C080)  /*@bfbba@*/
#define BT06_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB784C082)  /*@bfbba@*/
#define BT06_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB784C084)  /*@bfbba@*/
#define BT06_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB784C086)  /*@bfbba@*/

#define BT07_RT_STC	(BT07_RT.unSTC.u8Register)  /*@rg@*/
#define BT07_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB784E080)  /*@bfbba@*/
#define BT07_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB784E082)  /*@bfbba@*/
#define BT07_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB784E084)  /*@bfbba@*/
#define BT07_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB784E086)  /*@bfbba@*/

#define BT08_RT_STC	(BT08_RT.unSTC.u8Register)  /*@rg@*/
#define BT08_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7850080)  /*@bfbba@*/
#define BT08_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7850082)  /*@bfbba@*/
#define BT08_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7850084)  /*@bfbba@*/
#define BT08_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7850086)  /*@bfbba@*/

#define BT09_RT_STC	(BT09_RT.unSTC.u8Register)  /*@rg@*/
#define BT09_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7852080)  /*@bfbba@*/
#define BT09_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7852082)  /*@bfbba@*/
#define BT09_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7852084)  /*@bfbba@*/
#define BT09_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7852086)  /*@bfbba@*/

#define BT10_RT_STC	(BT10_RT.unSTC.u8Register)  /*@rg@*/
#define BT10_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7854080)  /*@bfbba@*/
#define BT10_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7854082)  /*@bfbba@*/
#define BT10_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7854084)  /*@bfbba@*/
#define BT10_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7854086)  /*@bfbba@*/

#define BT11_RT_STC	(BT11_RT.unSTC.u8Register)  /*@rg@*/
#define BT11_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7856080)  /*@bfbba@*/
#define BT11_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7856082)  /*@bfbba@*/
#define BT11_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7856084)  /*@bfbba@*/
#define BT11_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7856086)  /*@bfbba@*/

#define BT12_RT_STC	(BT12_RT.unSTC.u8Register)  /*@rg@*/
#define BT12_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C40080)  /*@bfbba@*/
#define BT12_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C40082)  /*@bfbba@*/
#define BT12_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C40084)  /*@bfbba@*/
#define BT12_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C40086)  /*@bfbba@*/

#define BT13_RT_STC	(BT13_RT.unSTC.u8Register)  /*@rg@*/
#define BT13_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C42080)  /*@bfbba@*/
#define BT13_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C42082)  /*@bfbba@*/
#define BT13_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C42084)  /*@bfbba@*/
#define BT13_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C42086)  /*@bfbba@*/

#define BT14_RT_STC	(BT14_RT.unSTC.u8Register)  /*@rg@*/
#define BT14_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C44080)  /*@bfbba@*/
#define BT14_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C44082)  /*@bfbba@*/
#define BT14_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C44084)  /*@bfbba@*/
#define BT14_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C44086)  /*@bfbba@*/

#define BT15_RT_STC	(BT15_RT.unSTC.u8Register)  /*@rg@*/
#define BT15_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C46080)  /*@bfbba@*/
#define BT15_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C46082)  /*@bfbba@*/
#define BT15_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C46084)  /*@bfbba@*/
#define BT15_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C46086)  /*@bfbba@*/

#define BT16_RT_STC	(BT16_RT.unSTC.u8Register)  /*@rg@*/
#define BT16_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C48080)  /*@bfbba@*/
#define BT16_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C48082)  /*@bfbba@*/
#define BT16_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C48084)  /*@bfbba@*/
#define BT16_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C48086)  /*@bfbba@*/

#define BT17_RT_STC	(BT17_RT.unSTC.u8Register)  /*@rg@*/
#define BT17_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4A080)  /*@bfbba@*/
#define BT17_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4A082)  /*@bfbba@*/
#define BT17_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4A084)  /*@bfbba@*/
#define BT17_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4A086)  /*@bfbba@*/

#define BT18_RT_STC	(BT18_RT.unSTC.u8Register)  /*@rg@*/
#define BT18_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4C080)  /*@bfbba@*/
#define BT18_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4C082)  /*@bfbba@*/
#define BT18_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4C084)  /*@bfbba@*/
#define BT18_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4C086)  /*@bfbba@*/

#define BT19_RT_STC	(BT19_RT.unSTC.u8Register)  /*@rg@*/
#define BT19_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4E080)  /*@bfbba@*/
#define BT19_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4E082)  /*@bfbba@*/
#define BT19_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4E084)  /*@bfbba@*/
#define BT19_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4E086)  /*@bfbba@*/

#define BT20_RT_STC	(BT20_RT.unSTC.u8Register)  /*@rg@*/
#define BT20_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C50080)  /*@bfbba@*/
#define BT20_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C50082)  /*@bfbba@*/
#define BT20_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C50084)  /*@bfbba@*/
#define BT20_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C50086)  /*@bfbba@*/

#define BT21_RT_STC	(BT21_RT.unSTC.u8Register)  /*@rg@*/
#define BT21_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C52080)  /*@bfbba@*/
#define BT21_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C52082)  /*@bfbba@*/
#define BT21_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C52084)  /*@bfbba@*/
#define BT21_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C52086)  /*@bfbba@*/

#define BT22_RT_STC	(BT22_RT.unSTC.u8Register)  /*@rg@*/
#define BT22_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C54080)  /*@bfbba@*/
#define BT22_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C54082)  /*@bfbba@*/
#define BT22_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C54084)  /*@bfbba@*/
#define BT22_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C54086)  /*@bfbba@*/

#define BT23_RT_STC	(BT23_RT.unSTC.u8Register)  /*@rg@*/
#define BT23_RT_STC_UDIR	(*(volatile uint_io8_t*)0xB7C56080)  /*@bfbba@*/
#define BT23_RT_STC_TGIR	(*(volatile uint_io8_t*)0xB7C56082)  /*@bfbba@*/
#define BT23_RT_STC_UDIE	(*(volatile uint_io8_t*)0xB7C56084)  /*@bfbba@*/
#define BT23_RT_STC_TGIE	(*(volatile uint_io8_t*)0xB7C56086)  /*@bfbba@*/

typedef struct stc_btn_rt_stc_field{
    uint_io8_t		u1UDIR:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIR:1;
    uint_io8_t		:1;
    uint_io8_t		u1UDIE:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIE:1;
    uint_io8_t		:1;
}stc_btn_rt_stc_field_t;

typedef union un_btn_rt_stc{
    uint_io8_t		u8Register;
    stc_btn_rt_stc_field_t		stcField;
}un_btn_rt_stc_t;

/* TMCR2 */
#define BT00_RT_TMCR2	(BT00_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT00_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7840088)  /*@bfbba@*/
#define BT00_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB784008F)  /*@bfbba@*/

#define BT01_RT_TMCR2	(BT01_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT01_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7842088)  /*@bfbba@*/
#define BT01_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB784208F)  /*@bfbba@*/

#define BT02_RT_TMCR2	(BT02_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT02_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7844088)  /*@bfbba@*/
#define BT02_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB784408F)  /*@bfbba@*/

#define BT03_RT_TMCR2	(BT03_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT03_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7846088)  /*@bfbba@*/
#define BT03_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB784608F)  /*@bfbba@*/

#define BT04_RT_TMCR2	(BT04_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT04_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7848088)  /*@bfbba@*/
#define BT04_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB784808F)  /*@bfbba@*/

#define BT05_RT_TMCR2	(BT05_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT05_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784A088)  /*@bfbba@*/
#define BT05_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB784A08F)  /*@bfbba@*/

#define BT06_RT_TMCR2	(BT06_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT06_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784C088)  /*@bfbba@*/
#define BT06_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB784C08F)  /*@bfbba@*/

#define BT07_RT_TMCR2	(BT07_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT07_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784E088)  /*@bfbba@*/
#define BT07_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB784E08F)  /*@bfbba@*/

#define BT08_RT_TMCR2	(BT08_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT08_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7850088)  /*@bfbba@*/
#define BT08_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB785008F)  /*@bfbba@*/

#define BT09_RT_TMCR2	(BT09_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT09_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7852088)  /*@bfbba@*/
#define BT09_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB785208F)  /*@bfbba@*/

#define BT10_RT_TMCR2	(BT10_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT10_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7854088)  /*@bfbba@*/
#define BT10_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB785408F)  /*@bfbba@*/

#define BT11_RT_TMCR2	(BT11_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT11_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7856088)  /*@bfbba@*/
#define BT11_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB785608F)  /*@bfbba@*/

#define BT12_RT_TMCR2	(BT12_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT12_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C40088)  /*@bfbba@*/
#define BT12_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C4008F)  /*@bfbba@*/

#define BT13_RT_TMCR2	(BT13_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT13_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C42088)  /*@bfbba@*/
#define BT13_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C4208F)  /*@bfbba@*/

#define BT14_RT_TMCR2	(BT14_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT14_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C44088)  /*@bfbba@*/
#define BT14_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C4408F)  /*@bfbba@*/

#define BT15_RT_TMCR2	(BT15_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT15_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C46088)  /*@bfbba@*/
#define BT15_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C4608F)  /*@bfbba@*/

#define BT16_RT_TMCR2	(BT16_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT16_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C48088)  /*@bfbba@*/
#define BT16_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C4808F)  /*@bfbba@*/

#define BT17_RT_TMCR2	(BT17_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT17_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4A088)  /*@bfbba@*/
#define BT17_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C4A08F)  /*@bfbba@*/

#define BT18_RT_TMCR2	(BT18_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT18_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4C088)  /*@bfbba@*/
#define BT18_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C4C08F)  /*@bfbba@*/

#define BT19_RT_TMCR2	(BT19_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT19_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4E088)  /*@bfbba@*/
#define BT19_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C4E08F)  /*@bfbba@*/

#define BT20_RT_TMCR2	(BT20_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT20_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C50088)  /*@bfbba@*/
#define BT20_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C5008F)  /*@bfbba@*/

#define BT21_RT_TMCR2	(BT21_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT21_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C52088)  /*@bfbba@*/
#define BT21_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C5208F)  /*@bfbba@*/

#define BT22_RT_TMCR2	(BT22_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT22_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C54088)  /*@bfbba@*/
#define BT22_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C5408F)  /*@bfbba@*/

#define BT23_RT_TMCR2	(BT23_RT.unTMCR2.u8Register)  /*@rg@*/
#define BT23_RT_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C56088)  /*@bfbba@*/
#define BT23_RT_TMCR2_GATE	(*(volatile uint_io8_t*)0xB7C5608F)  /*@bfbba@*/

typedef struct stc_btn_rt_tmcr2_field{
    uint_io8_t		u1CKS3:1;
    uint_io8_t		:6;
    uint_io8_t		u1GATE:1;
}stc_btn_rt_tmcr2_field_t;

typedef union un_btn_rt_tmcr2{
    uint_io8_t		u8Register;
    stc_btn_rt_tmcr2_field_t		stcField;
}un_btn_rt_tmcr2_t;

/* STCC */
#define BT00_RT_STCC	(BT00_RT.unSTCC.u8Register)  /*@rg@*/
#define BT00_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78400A0)  /*@bfbba@*/
#define BT00_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78400A2)  /*@bfbba@*/
#define BT00_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78400A4)  /*@bfbba@*/
#define BT00_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78400A6)  /*@bfbba@*/

#define BT01_RT_STCC	(BT01_RT.unSTCC.u8Register)  /*@rg@*/
#define BT01_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78420A0)  /*@bfbba@*/
#define BT01_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78420A2)  /*@bfbba@*/
#define BT01_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78420A4)  /*@bfbba@*/
#define BT01_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78420A6)  /*@bfbba@*/

#define BT02_RT_STCC	(BT02_RT.unSTCC.u8Register)  /*@rg@*/
#define BT02_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78440A0)  /*@bfbba@*/
#define BT02_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78440A2)  /*@bfbba@*/
#define BT02_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78440A4)  /*@bfbba@*/
#define BT02_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78440A6)  /*@bfbba@*/

#define BT03_RT_STCC	(BT03_RT.unSTCC.u8Register)  /*@rg@*/
#define BT03_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78460A0)  /*@bfbba@*/
#define BT03_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78460A2)  /*@bfbba@*/
#define BT03_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78460A4)  /*@bfbba@*/
#define BT03_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78460A6)  /*@bfbba@*/

#define BT04_RT_STCC	(BT04_RT.unSTCC.u8Register)  /*@rg@*/
#define BT04_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78480A0)  /*@bfbba@*/
#define BT04_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78480A2)  /*@bfbba@*/
#define BT04_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78480A4)  /*@bfbba@*/
#define BT04_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78480A6)  /*@bfbba@*/

#define BT05_RT_STCC	(BT05_RT.unSTCC.u8Register)  /*@rg@*/
#define BT05_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784A0A0)  /*@bfbba@*/
#define BT05_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784A0A2)  /*@bfbba@*/
#define BT05_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784A0A4)  /*@bfbba@*/
#define BT05_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784A0A6)  /*@bfbba@*/

#define BT06_RT_STCC	(BT06_RT.unSTCC.u8Register)  /*@rg@*/
#define BT06_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784C0A0)  /*@bfbba@*/
#define BT06_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784C0A2)  /*@bfbba@*/
#define BT06_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784C0A4)  /*@bfbba@*/
#define BT06_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784C0A6)  /*@bfbba@*/

#define BT07_RT_STCC	(BT07_RT.unSTCC.u8Register)  /*@rg@*/
#define BT07_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784E0A0)  /*@bfbba@*/
#define BT07_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784E0A2)  /*@bfbba@*/
#define BT07_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784E0A4)  /*@bfbba@*/
#define BT07_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784E0A6)  /*@bfbba@*/

#define BT08_RT_STCC	(BT08_RT.unSTCC.u8Register)  /*@rg@*/
#define BT08_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78500A0)  /*@bfbba@*/
#define BT08_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78500A2)  /*@bfbba@*/
#define BT08_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78500A4)  /*@bfbba@*/
#define BT08_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78500A6)  /*@bfbba@*/

#define BT09_RT_STCC	(BT09_RT.unSTCC.u8Register)  /*@rg@*/
#define BT09_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78520A0)  /*@bfbba@*/
#define BT09_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78520A2)  /*@bfbba@*/
#define BT09_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78520A4)  /*@bfbba@*/
#define BT09_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78520A6)  /*@bfbba@*/

#define BT10_RT_STCC	(BT10_RT.unSTCC.u8Register)  /*@rg@*/
#define BT10_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78540A0)  /*@bfbba@*/
#define BT10_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78540A2)  /*@bfbba@*/
#define BT10_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78540A4)  /*@bfbba@*/
#define BT10_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78540A6)  /*@bfbba@*/

#define BT11_RT_STCC	(BT11_RT.unSTCC.u8Register)  /*@rg@*/
#define BT11_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78560A0)  /*@bfbba@*/
#define BT11_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78560A2)  /*@bfbba@*/
#define BT11_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78560A4)  /*@bfbba@*/
#define BT11_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78560A6)  /*@bfbba@*/

#define BT12_RT_STCC	(BT12_RT.unSTCC.u8Register)  /*@rg@*/
#define BT12_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C400A0)  /*@bfbba@*/
#define BT12_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C400A2)  /*@bfbba@*/
#define BT12_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C400A4)  /*@bfbba@*/
#define BT12_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C400A6)  /*@bfbba@*/

#define BT13_RT_STCC	(BT13_RT.unSTCC.u8Register)  /*@rg@*/
#define BT13_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C420A0)  /*@bfbba@*/
#define BT13_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C420A2)  /*@bfbba@*/
#define BT13_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C420A4)  /*@bfbba@*/
#define BT13_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C420A6)  /*@bfbba@*/

#define BT14_RT_STCC	(BT14_RT.unSTCC.u8Register)  /*@rg@*/
#define BT14_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C440A0)  /*@bfbba@*/
#define BT14_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C440A2)  /*@bfbba@*/
#define BT14_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C440A4)  /*@bfbba@*/
#define BT14_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C440A6)  /*@bfbba@*/

#define BT15_RT_STCC	(BT15_RT.unSTCC.u8Register)  /*@rg@*/
#define BT15_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C460A0)  /*@bfbba@*/
#define BT15_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C460A2)  /*@bfbba@*/
#define BT15_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C460A4)  /*@bfbba@*/
#define BT15_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C460A6)  /*@bfbba@*/

#define BT16_RT_STCC	(BT16_RT.unSTCC.u8Register)  /*@rg@*/
#define BT16_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C480A0)  /*@bfbba@*/
#define BT16_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C480A2)  /*@bfbba@*/
#define BT16_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C480A4)  /*@bfbba@*/
#define BT16_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C480A6)  /*@bfbba@*/

#define BT17_RT_STCC	(BT17_RT.unSTCC.u8Register)  /*@rg@*/
#define BT17_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4A0A0)  /*@bfbba@*/
#define BT17_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4A0A2)  /*@bfbba@*/
#define BT17_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4A0A4)  /*@bfbba@*/
#define BT17_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4A0A6)  /*@bfbba@*/

#define BT18_RT_STCC	(BT18_RT.unSTCC.u8Register)  /*@rg@*/
#define BT18_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4C0A0)  /*@bfbba@*/
#define BT18_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4C0A2)  /*@bfbba@*/
#define BT18_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4C0A4)  /*@bfbba@*/
#define BT18_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4C0A6)  /*@bfbba@*/

#define BT19_RT_STCC	(BT19_RT.unSTCC.u8Register)  /*@rg@*/
#define BT19_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4E0A0)  /*@bfbba@*/
#define BT19_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4E0A2)  /*@bfbba@*/
#define BT19_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4E0A4)  /*@bfbba@*/
#define BT19_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4E0A6)  /*@bfbba@*/

#define BT20_RT_STCC	(BT20_RT.unSTCC.u8Register)  /*@rg@*/
#define BT20_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C500A0)  /*@bfbba@*/
#define BT20_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C500A2)  /*@bfbba@*/
#define BT20_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C500A4)  /*@bfbba@*/
#define BT20_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C500A6)  /*@bfbba@*/

#define BT21_RT_STCC	(BT21_RT.unSTCC.u8Register)  /*@rg@*/
#define BT21_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C520A0)  /*@bfbba@*/
#define BT21_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C520A2)  /*@bfbba@*/
#define BT21_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C520A4)  /*@bfbba@*/
#define BT21_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C520A6)  /*@bfbba@*/

#define BT22_RT_STCC	(BT22_RT.unSTCC.u8Register)  /*@rg@*/
#define BT22_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C540A0)  /*@bfbba@*/
#define BT22_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C540A2)  /*@bfbba@*/
#define BT22_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C540A4)  /*@bfbba@*/
#define BT22_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C540A6)  /*@bfbba@*/

#define BT23_RT_STCC	(BT23_RT.unSTCC.u8Register)  /*@rg@*/
#define BT23_RT_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C560A0)  /*@bfbba@*/
#define BT23_RT_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C560A2)  /*@bfbba@*/
#define BT23_RT_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C560A4)  /*@bfbba@*/
#define BT23_RT_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C560A6)  /*@bfbba@*/

typedef struct stc_btn_rt_stcc_field{
    uint_io8_t		u1UDIRC:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIRC:1;
    uint_io8_t		:1;
    uint_io8_t		u1UDIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIEC:1;
    uint_io8_t		:1;
}stc_btn_rt_stcc_field_t;

typedef union un_btn_rt_stcc{
    uint_io8_t		u8Register;
    stc_btn_rt_stcc_field_t		stcField;
}un_btn_rt_stcc_t;

/* STCS */
#define BT00_RT_STCS	(BT00_RT.unSTCS.u8Register)  /*@rg@*/
#define BT00_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78400C4)  /*@bfbba@*/
#define BT00_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78400C6)  /*@bfbba@*/

#define BT01_RT_STCS	(BT01_RT.unSTCS.u8Register)  /*@rg@*/
#define BT01_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78420C4)  /*@bfbba@*/
#define BT01_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78420C6)  /*@bfbba@*/

#define BT02_RT_STCS	(BT02_RT.unSTCS.u8Register)  /*@rg@*/
#define BT02_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78440C4)  /*@bfbba@*/
#define BT02_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78440C6)  /*@bfbba@*/

#define BT03_RT_STCS	(BT03_RT.unSTCS.u8Register)  /*@rg@*/
#define BT03_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78460C4)  /*@bfbba@*/
#define BT03_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78460C6)  /*@bfbba@*/

#define BT04_RT_STCS	(BT04_RT.unSTCS.u8Register)  /*@rg@*/
#define BT04_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78480C4)  /*@bfbba@*/
#define BT04_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78480C6)  /*@bfbba@*/

#define BT05_RT_STCS	(BT05_RT.unSTCS.u8Register)  /*@rg@*/
#define BT05_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB784A0C4)  /*@bfbba@*/
#define BT05_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB784A0C6)  /*@bfbba@*/

#define BT06_RT_STCS	(BT06_RT.unSTCS.u8Register)  /*@rg@*/
#define BT06_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB784C0C4)  /*@bfbba@*/
#define BT06_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB784C0C6)  /*@bfbba@*/

#define BT07_RT_STCS	(BT07_RT.unSTCS.u8Register)  /*@rg@*/
#define BT07_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB784E0C4)  /*@bfbba@*/
#define BT07_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB784E0C6)  /*@bfbba@*/

#define BT08_RT_STCS	(BT08_RT.unSTCS.u8Register)  /*@rg@*/
#define BT08_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78500C4)  /*@bfbba@*/
#define BT08_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78500C6)  /*@bfbba@*/

#define BT09_RT_STCS	(BT09_RT.unSTCS.u8Register)  /*@rg@*/
#define BT09_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78520C4)  /*@bfbba@*/
#define BT09_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78520C6)  /*@bfbba@*/

#define BT10_RT_STCS	(BT10_RT.unSTCS.u8Register)  /*@rg@*/
#define BT10_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78540C4)  /*@bfbba@*/
#define BT10_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78540C6)  /*@bfbba@*/

#define BT11_RT_STCS	(BT11_RT.unSTCS.u8Register)  /*@rg@*/
#define BT11_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB78560C4)  /*@bfbba@*/
#define BT11_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB78560C6)  /*@bfbba@*/

#define BT12_RT_STCS	(BT12_RT.unSTCS.u8Register)  /*@rg@*/
#define BT12_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C400C4)  /*@bfbba@*/
#define BT12_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C400C6)  /*@bfbba@*/

#define BT13_RT_STCS	(BT13_RT.unSTCS.u8Register)  /*@rg@*/
#define BT13_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C420C4)  /*@bfbba@*/
#define BT13_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C420C6)  /*@bfbba@*/

#define BT14_RT_STCS	(BT14_RT.unSTCS.u8Register)  /*@rg@*/
#define BT14_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C440C4)  /*@bfbba@*/
#define BT14_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C440C6)  /*@bfbba@*/

#define BT15_RT_STCS	(BT15_RT.unSTCS.u8Register)  /*@rg@*/
#define BT15_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C460C4)  /*@bfbba@*/
#define BT15_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C460C6)  /*@bfbba@*/

#define BT16_RT_STCS	(BT16_RT.unSTCS.u8Register)  /*@rg@*/
#define BT16_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C480C4)  /*@bfbba@*/
#define BT16_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C480C6)  /*@bfbba@*/

#define BT17_RT_STCS	(BT17_RT.unSTCS.u8Register)  /*@rg@*/
#define BT17_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4A0C4)  /*@bfbba@*/
#define BT17_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4A0C6)  /*@bfbba@*/

#define BT18_RT_STCS	(BT18_RT.unSTCS.u8Register)  /*@rg@*/
#define BT18_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4C0C4)  /*@bfbba@*/
#define BT18_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4C0C6)  /*@bfbba@*/

#define BT19_RT_STCS	(BT19_RT.unSTCS.u8Register)  /*@rg@*/
#define BT19_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4E0C4)  /*@bfbba@*/
#define BT19_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4E0C6)  /*@bfbba@*/

#define BT20_RT_STCS	(BT20_RT.unSTCS.u8Register)  /*@rg@*/
#define BT20_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C500C4)  /*@bfbba@*/
#define BT20_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C500C6)  /*@bfbba@*/

#define BT21_RT_STCS	(BT21_RT.unSTCS.u8Register)  /*@rg@*/
#define BT21_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C520C4)  /*@bfbba@*/
#define BT21_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C520C6)  /*@bfbba@*/

#define BT22_RT_STCS	(BT22_RT.unSTCS.u8Register)  /*@rg@*/
#define BT22_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C540C4)  /*@bfbba@*/
#define BT22_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C540C6)  /*@bfbba@*/

#define BT23_RT_STCS	(BT23_RT.unSTCS.u8Register)  /*@rg@*/
#define BT23_RT_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C560C4)  /*@bfbba@*/
#define BT23_RT_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C560C6)  /*@bfbba@*/

typedef struct stc_btn_rt_stcs_field{
    uint_io8_t		:4;
    uint_io8_t		u1UDIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIES:1;
    uint_io8_t		:1;
}stc_btn_rt_stcs_field_t;

typedef union un_btn_rt_stcs{
    uint_io8_t		u8Register;
    stc_btn_rt_stcs_field_t		stcField;
}un_btn_rt_stcs_t;


typedef struct stc_btn_rt{
    un_btn_rt_pcsr_t	unPCSR;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[6];	/* 0x00000002 */
    un_btn_rt_tmr_t	unTMR;	/* 0x00000008 */
    uint_io8_t	au8Reserved1[2];	/* 0x0000000A */
    un_btn_rt_tmcr_t	unTMCR;	/* 0x0000000C */
    uint_io8_t	au8Reserved2[2];	/* 0x0000000E */
    un_btn_rt_stc_t	unSTC;	/* 0x00000010 */
    un_btn_rt_tmcr2_t	unTMCR2;	/* 0x00000011 */
    uint_io8_t	au8Reserved3[2];	/* 0x00000012 */
    un_btn_rt_stcc_t	unSTCC;	/* 0x00000014 */
    uint_io8_t	au8Reserved4[3];	/* 0x00000015 */
    un_btn_rt_stcs_t	unSTCS;	/* 0x00000018 */
    uint_io8_t	au8Reserved5[23];	/* 0x00000019 */
}stc_btn_rt_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_btn_rt_t	stcBT_RT[24];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 48(0x30) bytes */


#endif /* __S6J3200_BT_RT_H */
