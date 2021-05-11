/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_BT_PPG_H
#define __S6J3200_BT_PPG_H

#include "s6j3200io_basetypes.h"

/* BT[00-23]_PPG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT00_PPG	stcBT_PPG[0]
#define BT01_PPG	stcBT_PPG[1]
#define BT02_PPG	stcBT_PPG[2]
#define BT03_PPG	stcBT_PPG[3]
#define BT04_PPG	stcBT_PPG[4]
#define BT05_PPG	stcBT_PPG[5]
#define BT06_PPG	stcBT_PPG[6]
#define BT07_PPG	stcBT_PPG[7]
#define BT08_PPG	stcBT_PPG[8]
#define BT09_PPG	stcBT_PPG[9]
#define BT10_PPG	stcBT_PPG[10]
#define BT11_PPG	stcBT_PPG[11]
#define BT12_PPG	stcBT_PPG[12]
#define BT13_PPG	stcBT_PPG[13]
#define BT14_PPG	stcBT_PPG[14]
#define BT15_PPG	stcBT_PPG[15]
#define BT16_PPG	stcBT_PPG[16]
#define BT17_PPG	stcBT_PPG[17]
#define BT18_PPG	stcBT_PPG[18]
#define BT19_PPG	stcBT_PPG[19]
#define BT20_PPG	stcBT_PPG[20]
#define BT21_PPG	stcBT_PPG[21]
#define BT22_PPG	stcBT_PPG[22]
#define BT23_PPG	stcBT_PPG[23]
#else /* __IO_DEFINE */
#define BT00_PPG	(*((volatile stc_btn_ppg_t*)0xB4808000))
#define BT01_PPG	(*((volatile stc_btn_ppg_t*)0xB4808400))
#define BT02_PPG	(*((volatile stc_btn_ppg_t*)0xB4808800))
#define BT03_PPG	(*((volatile stc_btn_ppg_t*)0xB4808C00))
#define BT04_PPG	(*((volatile stc_btn_ppg_t*)0xB4809000))
#define BT05_PPG	(*((volatile stc_btn_ppg_t*)0xB4809400))
#define BT06_PPG	(*((volatile stc_btn_ppg_t*)0xB4809800))
#define BT07_PPG	(*((volatile stc_btn_ppg_t*)0xB4809C00))
#define BT08_PPG	(*((volatile stc_btn_ppg_t*)0xB480A000))
#define BT09_PPG	(*((volatile stc_btn_ppg_t*)0xB480A400))
#define BT10_PPG	(*((volatile stc_btn_ppg_t*)0xB480A800))
#define BT11_PPG	(*((volatile stc_btn_ppg_t*)0xB480AC00))
#define BT12_PPG	(*((volatile stc_btn_ppg_t*)0xB4888000))
#define BT13_PPG	(*((volatile stc_btn_ppg_t*)0xB4888400))
#define BT14_PPG	(*((volatile stc_btn_ppg_t*)0xB4888800))
#define BT15_PPG	(*((volatile stc_btn_ppg_t*)0xB4888C00))
#define BT16_PPG	(*((volatile stc_btn_ppg_t*)0xB4889000))
#define BT17_PPG	(*((volatile stc_btn_ppg_t*)0xB4889400))
#define BT18_PPG	(*((volatile stc_btn_ppg_t*)0xB4889800))
#define BT19_PPG	(*((volatile stc_btn_ppg_t*)0xB4889C00))
#define BT20_PPG	(*((volatile stc_btn_ppg_t*)0xB488A000))
#define BT21_PPG	(*((volatile stc_btn_ppg_t*)0xB488A400))
#define BT22_PPG	(*((volatile stc_btn_ppg_t*)0xB488A800))
#define BT23_PPG	(*((volatile stc_btn_ppg_t*)0xB488AC00))
#endif /* __IO_DEFINE */

/* PRLL */
#define BT00_PPG_PRLL	(BT00_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT00_PPG_PRLL_PRLL	BT00_PPG_PRLL  /*@bfrg@*/

#define BT01_PPG_PRLL	(BT01_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT01_PPG_PRLL_PRLL	BT01_PPG_PRLL  /*@bfrg@*/

#define BT02_PPG_PRLL	(BT02_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT02_PPG_PRLL_PRLL	BT02_PPG_PRLL  /*@bfrg@*/

#define BT03_PPG_PRLL	(BT03_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT03_PPG_PRLL_PRLL	BT03_PPG_PRLL  /*@bfrg@*/

#define BT04_PPG_PRLL	(BT04_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT04_PPG_PRLL_PRLL	BT04_PPG_PRLL  /*@bfrg@*/

#define BT05_PPG_PRLL	(BT05_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT05_PPG_PRLL_PRLL	BT05_PPG_PRLL  /*@bfrg@*/

#define BT06_PPG_PRLL	(BT06_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT06_PPG_PRLL_PRLL	BT06_PPG_PRLL  /*@bfrg@*/

#define BT07_PPG_PRLL	(BT07_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT07_PPG_PRLL_PRLL	BT07_PPG_PRLL  /*@bfrg@*/

#define BT08_PPG_PRLL	(BT08_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT08_PPG_PRLL_PRLL	BT08_PPG_PRLL  /*@bfrg@*/

#define BT09_PPG_PRLL	(BT09_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT09_PPG_PRLL_PRLL	BT09_PPG_PRLL  /*@bfrg@*/

#define BT10_PPG_PRLL	(BT10_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT10_PPG_PRLL_PRLL	BT10_PPG_PRLL  /*@bfrg@*/

#define BT11_PPG_PRLL	(BT11_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT11_PPG_PRLL_PRLL	BT11_PPG_PRLL  /*@bfrg@*/

#define BT12_PPG_PRLL	(BT12_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT12_PPG_PRLL_PRLL	BT12_PPG_PRLL  /*@bfrg@*/

#define BT13_PPG_PRLL	(BT13_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT13_PPG_PRLL_PRLL	BT13_PPG_PRLL  /*@bfrg@*/

#define BT14_PPG_PRLL	(BT14_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT14_PPG_PRLL_PRLL	BT14_PPG_PRLL  /*@bfrg@*/

#define BT15_PPG_PRLL	(BT15_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT15_PPG_PRLL_PRLL	BT15_PPG_PRLL  /*@bfrg@*/

#define BT16_PPG_PRLL	(BT16_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT16_PPG_PRLL_PRLL	BT16_PPG_PRLL  /*@bfrg@*/

#define BT17_PPG_PRLL	(BT17_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT17_PPG_PRLL_PRLL	BT17_PPG_PRLL  /*@bfrg@*/

#define BT18_PPG_PRLL	(BT18_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT18_PPG_PRLL_PRLL	BT18_PPG_PRLL  /*@bfrg@*/

#define BT19_PPG_PRLL	(BT19_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT19_PPG_PRLL_PRLL	BT19_PPG_PRLL  /*@bfrg@*/

#define BT20_PPG_PRLL	(BT20_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT20_PPG_PRLL_PRLL	BT20_PPG_PRLL  /*@bfrg@*/

#define BT21_PPG_PRLL	(BT21_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT21_PPG_PRLL_PRLL	BT21_PPG_PRLL  /*@bfrg@*/

#define BT22_PPG_PRLL	(BT22_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT22_PPG_PRLL_PRLL	BT22_PPG_PRLL  /*@bfrg@*/

#define BT23_PPG_PRLL	(BT23_PPG.unPRLL.u16Register)  /*@rg@*/
#define BT23_PPG_PRLL_PRLL	BT23_PPG_PRLL  /*@bfrg@*/

typedef union un_btn_ppg_prll{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_ppg_prll_t;

/* PRLH */
#define BT00_PPG_PRLH	(BT00_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT00_PPG_PRLH_PRLH	BT00_PPG_PRLH  /*@bfrg@*/

#define BT01_PPG_PRLH	(BT01_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT01_PPG_PRLH_PRLH	BT01_PPG_PRLH  /*@bfrg@*/

#define BT02_PPG_PRLH	(BT02_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT02_PPG_PRLH_PRLH	BT02_PPG_PRLH  /*@bfrg@*/

#define BT03_PPG_PRLH	(BT03_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT03_PPG_PRLH_PRLH	BT03_PPG_PRLH  /*@bfrg@*/

#define BT04_PPG_PRLH	(BT04_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT04_PPG_PRLH_PRLH	BT04_PPG_PRLH  /*@bfrg@*/

#define BT05_PPG_PRLH	(BT05_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT05_PPG_PRLH_PRLH	BT05_PPG_PRLH  /*@bfrg@*/

#define BT06_PPG_PRLH	(BT06_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT06_PPG_PRLH_PRLH	BT06_PPG_PRLH  /*@bfrg@*/

#define BT07_PPG_PRLH	(BT07_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT07_PPG_PRLH_PRLH	BT07_PPG_PRLH  /*@bfrg@*/

#define BT08_PPG_PRLH	(BT08_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT08_PPG_PRLH_PRLH	BT08_PPG_PRLH  /*@bfrg@*/

#define BT09_PPG_PRLH	(BT09_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT09_PPG_PRLH_PRLH	BT09_PPG_PRLH  /*@bfrg@*/

#define BT10_PPG_PRLH	(BT10_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT10_PPG_PRLH_PRLH	BT10_PPG_PRLH  /*@bfrg@*/

#define BT11_PPG_PRLH	(BT11_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT11_PPG_PRLH_PRLH	BT11_PPG_PRLH  /*@bfrg@*/

#define BT12_PPG_PRLH	(BT12_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT12_PPG_PRLH_PRLH	BT12_PPG_PRLH  /*@bfrg@*/

#define BT13_PPG_PRLH	(BT13_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT13_PPG_PRLH_PRLH	BT13_PPG_PRLH  /*@bfrg@*/

#define BT14_PPG_PRLH	(BT14_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT14_PPG_PRLH_PRLH	BT14_PPG_PRLH  /*@bfrg@*/

#define BT15_PPG_PRLH	(BT15_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT15_PPG_PRLH_PRLH	BT15_PPG_PRLH  /*@bfrg@*/

#define BT16_PPG_PRLH	(BT16_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT16_PPG_PRLH_PRLH	BT16_PPG_PRLH  /*@bfrg@*/

#define BT17_PPG_PRLH	(BT17_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT17_PPG_PRLH_PRLH	BT17_PPG_PRLH  /*@bfrg@*/

#define BT18_PPG_PRLH	(BT18_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT18_PPG_PRLH_PRLH	BT18_PPG_PRLH  /*@bfrg@*/

#define BT19_PPG_PRLH	(BT19_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT19_PPG_PRLH_PRLH	BT19_PPG_PRLH  /*@bfrg@*/

#define BT20_PPG_PRLH	(BT20_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT20_PPG_PRLH_PRLH	BT20_PPG_PRLH  /*@bfrg@*/

#define BT21_PPG_PRLH	(BT21_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT21_PPG_PRLH_PRLH	BT21_PPG_PRLH  /*@bfrg@*/

#define BT22_PPG_PRLH	(BT22_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT22_PPG_PRLH_PRLH	BT22_PPG_PRLH  /*@bfrg@*/

#define BT23_PPG_PRLH	(BT23_PPG.unPRLH.u16Register)  /*@rg@*/
#define BT23_PPG_PRLH_PRLH	BT23_PPG_PRLH  /*@bfrg@*/

typedef union un_btn_ppg_prlh{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_ppg_prlh_t;

/* TMR */
#define BT00_PPG_TMR	(BT00_PPG.unTMR.u16Register)  /*@rg@*/
#define BT00_PPG_TMR_TMR	BT00_PPG_TMR  /*@bfrg@*/

#define BT01_PPG_TMR	(BT01_PPG.unTMR.u16Register)  /*@rg@*/
#define BT01_PPG_TMR_TMR	BT01_PPG_TMR  /*@bfrg@*/

#define BT02_PPG_TMR	(BT02_PPG.unTMR.u16Register)  /*@rg@*/
#define BT02_PPG_TMR_TMR	BT02_PPG_TMR  /*@bfrg@*/

#define BT03_PPG_TMR	(BT03_PPG.unTMR.u16Register)  /*@rg@*/
#define BT03_PPG_TMR_TMR	BT03_PPG_TMR  /*@bfrg@*/

#define BT04_PPG_TMR	(BT04_PPG.unTMR.u16Register)  /*@rg@*/
#define BT04_PPG_TMR_TMR	BT04_PPG_TMR  /*@bfrg@*/

#define BT05_PPG_TMR	(BT05_PPG.unTMR.u16Register)  /*@rg@*/
#define BT05_PPG_TMR_TMR	BT05_PPG_TMR  /*@bfrg@*/

#define BT06_PPG_TMR	(BT06_PPG.unTMR.u16Register)  /*@rg@*/
#define BT06_PPG_TMR_TMR	BT06_PPG_TMR  /*@bfrg@*/

#define BT07_PPG_TMR	(BT07_PPG.unTMR.u16Register)  /*@rg@*/
#define BT07_PPG_TMR_TMR	BT07_PPG_TMR  /*@bfrg@*/

#define BT08_PPG_TMR	(BT08_PPG.unTMR.u16Register)  /*@rg@*/
#define BT08_PPG_TMR_TMR	BT08_PPG_TMR  /*@bfrg@*/

#define BT09_PPG_TMR	(BT09_PPG.unTMR.u16Register)  /*@rg@*/
#define BT09_PPG_TMR_TMR	BT09_PPG_TMR  /*@bfrg@*/

#define BT10_PPG_TMR	(BT10_PPG.unTMR.u16Register)  /*@rg@*/
#define BT10_PPG_TMR_TMR	BT10_PPG_TMR  /*@bfrg@*/

#define BT11_PPG_TMR	(BT11_PPG.unTMR.u16Register)  /*@rg@*/
#define BT11_PPG_TMR_TMR	BT11_PPG_TMR  /*@bfrg@*/

#define BT12_PPG_TMR	(BT12_PPG.unTMR.u16Register)  /*@rg@*/
#define BT12_PPG_TMR_TMR	BT12_PPG_TMR  /*@bfrg@*/

#define BT13_PPG_TMR	(BT13_PPG.unTMR.u16Register)  /*@rg@*/
#define BT13_PPG_TMR_TMR	BT13_PPG_TMR  /*@bfrg@*/

#define BT14_PPG_TMR	(BT14_PPG.unTMR.u16Register)  /*@rg@*/
#define BT14_PPG_TMR_TMR	BT14_PPG_TMR  /*@bfrg@*/

#define BT15_PPG_TMR	(BT15_PPG.unTMR.u16Register)  /*@rg@*/
#define BT15_PPG_TMR_TMR	BT15_PPG_TMR  /*@bfrg@*/

#define BT16_PPG_TMR	(BT16_PPG.unTMR.u16Register)  /*@rg@*/
#define BT16_PPG_TMR_TMR	BT16_PPG_TMR  /*@bfrg@*/

#define BT17_PPG_TMR	(BT17_PPG.unTMR.u16Register)  /*@rg@*/
#define BT17_PPG_TMR_TMR	BT17_PPG_TMR  /*@bfrg@*/

#define BT18_PPG_TMR	(BT18_PPG.unTMR.u16Register)  /*@rg@*/
#define BT18_PPG_TMR_TMR	BT18_PPG_TMR  /*@bfrg@*/

#define BT19_PPG_TMR	(BT19_PPG.unTMR.u16Register)  /*@rg@*/
#define BT19_PPG_TMR_TMR	BT19_PPG_TMR  /*@bfrg@*/

#define BT20_PPG_TMR	(BT20_PPG.unTMR.u16Register)  /*@rg@*/
#define BT20_PPG_TMR_TMR	BT20_PPG_TMR  /*@bfrg@*/

#define BT21_PPG_TMR	(BT21_PPG.unTMR.u16Register)  /*@rg@*/
#define BT21_PPG_TMR_TMR	BT21_PPG_TMR  /*@bfrg@*/

#define BT22_PPG_TMR	(BT22_PPG.unTMR.u16Register)  /*@rg@*/
#define BT22_PPG_TMR_TMR	BT22_PPG_TMR  /*@bfrg@*/

#define BT23_PPG_TMR	(BT23_PPG.unTMR.u16Register)  /*@rg@*/
#define BT23_PPG_TMR_TMR	BT23_PPG_TMR  /*@bfrg@*/

typedef union un_btn_ppg_tmr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_ppg_tmr_t;

/* TMCR */
#define BT00_PPG_TMCR	(BT00_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT00_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7840060)  /*@bfbba@*/
#define BT00_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7840061)  /*@bfbba@*/
#define BT00_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7840062)  /*@bfbba@*/
#define BT00_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7840063)  /*@bfbba@*/
#define BT00_PPG_TMCR_FMD	(BT00_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT00_PPG_TMCR_EGS	(BT00_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT00_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784006A)  /*@bfbba@*/
#define BT00_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784006B)  /*@bfbba@*/
#define BT00_PPG_TMCR_CKS2_0	(BT00_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT01_PPG_TMCR	(BT01_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT01_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7842060)  /*@bfbba@*/
#define BT01_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7842061)  /*@bfbba@*/
#define BT01_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7842062)  /*@bfbba@*/
#define BT01_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7842063)  /*@bfbba@*/
#define BT01_PPG_TMCR_FMD	(BT01_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT01_PPG_TMCR_EGS	(BT01_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT01_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784206A)  /*@bfbba@*/
#define BT01_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784206B)  /*@bfbba@*/
#define BT01_PPG_TMCR_CKS2_0	(BT01_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT02_PPG_TMCR	(BT02_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT02_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7844060)  /*@bfbba@*/
#define BT02_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7844061)  /*@bfbba@*/
#define BT02_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7844062)  /*@bfbba@*/
#define BT02_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7844063)  /*@bfbba@*/
#define BT02_PPG_TMCR_FMD	(BT02_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT02_PPG_TMCR_EGS	(BT02_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT02_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784406A)  /*@bfbba@*/
#define BT02_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784406B)  /*@bfbba@*/
#define BT02_PPG_TMCR_CKS2_0	(BT02_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT03_PPG_TMCR	(BT03_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT03_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7846060)  /*@bfbba@*/
#define BT03_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7846061)  /*@bfbba@*/
#define BT03_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7846062)  /*@bfbba@*/
#define BT03_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7846063)  /*@bfbba@*/
#define BT03_PPG_TMCR_FMD	(BT03_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT03_PPG_TMCR_EGS	(BT03_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT03_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784606A)  /*@bfbba@*/
#define BT03_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784606B)  /*@bfbba@*/
#define BT03_PPG_TMCR_CKS2_0	(BT03_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT04_PPG_TMCR	(BT04_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT04_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7848060)  /*@bfbba@*/
#define BT04_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7848061)  /*@bfbba@*/
#define BT04_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7848062)  /*@bfbba@*/
#define BT04_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7848063)  /*@bfbba@*/
#define BT04_PPG_TMCR_FMD	(BT04_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT04_PPG_TMCR_EGS	(BT04_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT04_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784806A)  /*@bfbba@*/
#define BT04_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784806B)  /*@bfbba@*/
#define BT04_PPG_TMCR_CKS2_0	(BT04_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT05_PPG_TMCR	(BT05_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT05_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB784A060)  /*@bfbba@*/
#define BT05_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784A061)  /*@bfbba@*/
#define BT05_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784A062)  /*@bfbba@*/
#define BT05_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784A063)  /*@bfbba@*/
#define BT05_PPG_TMCR_FMD	(BT05_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT05_PPG_TMCR_EGS	(BT05_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT05_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784A06A)  /*@bfbba@*/
#define BT05_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784A06B)  /*@bfbba@*/
#define BT05_PPG_TMCR_CKS2_0	(BT05_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT06_PPG_TMCR	(BT06_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT06_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB784C060)  /*@bfbba@*/
#define BT06_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784C061)  /*@bfbba@*/
#define BT06_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784C062)  /*@bfbba@*/
#define BT06_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784C063)  /*@bfbba@*/
#define BT06_PPG_TMCR_FMD	(BT06_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT06_PPG_TMCR_EGS	(BT06_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT06_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784C06A)  /*@bfbba@*/
#define BT06_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784C06B)  /*@bfbba@*/
#define BT06_PPG_TMCR_CKS2_0	(BT06_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT07_PPG_TMCR	(BT07_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT07_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB784E060)  /*@bfbba@*/
#define BT07_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784E061)  /*@bfbba@*/
#define BT07_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784E062)  /*@bfbba@*/
#define BT07_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784E063)  /*@bfbba@*/
#define BT07_PPG_TMCR_FMD	(BT07_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT07_PPG_TMCR_EGS	(BT07_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT07_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784E06A)  /*@bfbba@*/
#define BT07_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784E06B)  /*@bfbba@*/
#define BT07_PPG_TMCR_CKS2_0	(BT07_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT08_PPG_TMCR	(BT08_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT08_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7850060)  /*@bfbba@*/
#define BT08_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7850061)  /*@bfbba@*/
#define BT08_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7850062)  /*@bfbba@*/
#define BT08_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7850063)  /*@bfbba@*/
#define BT08_PPG_TMCR_FMD	(BT08_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT08_PPG_TMCR_EGS	(BT08_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT08_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB785006A)  /*@bfbba@*/
#define BT08_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB785006B)  /*@bfbba@*/
#define BT08_PPG_TMCR_CKS2_0	(BT08_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT09_PPG_TMCR	(BT09_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT09_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7852060)  /*@bfbba@*/
#define BT09_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7852061)  /*@bfbba@*/
#define BT09_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7852062)  /*@bfbba@*/
#define BT09_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7852063)  /*@bfbba@*/
#define BT09_PPG_TMCR_FMD	(BT09_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT09_PPG_TMCR_EGS	(BT09_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT09_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB785206A)  /*@bfbba@*/
#define BT09_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB785206B)  /*@bfbba@*/
#define BT09_PPG_TMCR_CKS2_0	(BT09_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT10_PPG_TMCR	(BT10_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT10_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7854060)  /*@bfbba@*/
#define BT10_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7854061)  /*@bfbba@*/
#define BT10_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7854062)  /*@bfbba@*/
#define BT10_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7854063)  /*@bfbba@*/
#define BT10_PPG_TMCR_FMD	(BT10_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT10_PPG_TMCR_EGS	(BT10_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT10_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB785406A)  /*@bfbba@*/
#define BT10_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB785406B)  /*@bfbba@*/
#define BT10_PPG_TMCR_CKS2_0	(BT10_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT11_PPG_TMCR	(BT11_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT11_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7856060)  /*@bfbba@*/
#define BT11_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7856061)  /*@bfbba@*/
#define BT11_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7856062)  /*@bfbba@*/
#define BT11_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7856063)  /*@bfbba@*/
#define BT11_PPG_TMCR_FMD	(BT11_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT11_PPG_TMCR_EGS	(BT11_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT11_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB785606A)  /*@bfbba@*/
#define BT11_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB785606B)  /*@bfbba@*/
#define BT11_PPG_TMCR_CKS2_0	(BT11_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT12_PPG_TMCR	(BT12_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT12_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C40060)  /*@bfbba@*/
#define BT12_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C40061)  /*@bfbba@*/
#define BT12_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C40062)  /*@bfbba@*/
#define BT12_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C40063)  /*@bfbba@*/
#define BT12_PPG_TMCR_FMD	(BT12_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT12_PPG_TMCR_EGS	(BT12_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT12_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4006A)  /*@bfbba@*/
#define BT12_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4006B)  /*@bfbba@*/
#define BT12_PPG_TMCR_CKS2_0	(BT12_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT13_PPG_TMCR	(BT13_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT13_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C42060)  /*@bfbba@*/
#define BT13_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C42061)  /*@bfbba@*/
#define BT13_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C42062)  /*@bfbba@*/
#define BT13_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C42063)  /*@bfbba@*/
#define BT13_PPG_TMCR_FMD	(BT13_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT13_PPG_TMCR_EGS	(BT13_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT13_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4206A)  /*@bfbba@*/
#define BT13_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4206B)  /*@bfbba@*/
#define BT13_PPG_TMCR_CKS2_0	(BT13_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT14_PPG_TMCR	(BT14_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT14_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C44060)  /*@bfbba@*/
#define BT14_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C44061)  /*@bfbba@*/
#define BT14_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C44062)  /*@bfbba@*/
#define BT14_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C44063)  /*@bfbba@*/
#define BT14_PPG_TMCR_FMD	(BT14_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT14_PPG_TMCR_EGS	(BT14_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT14_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4406A)  /*@bfbba@*/
#define BT14_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4406B)  /*@bfbba@*/
#define BT14_PPG_TMCR_CKS2_0	(BT14_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT15_PPG_TMCR	(BT15_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT15_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C46060)  /*@bfbba@*/
#define BT15_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C46061)  /*@bfbba@*/
#define BT15_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C46062)  /*@bfbba@*/
#define BT15_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C46063)  /*@bfbba@*/
#define BT15_PPG_TMCR_FMD	(BT15_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT15_PPG_TMCR_EGS	(BT15_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT15_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4606A)  /*@bfbba@*/
#define BT15_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4606B)  /*@bfbba@*/
#define BT15_PPG_TMCR_CKS2_0	(BT15_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT16_PPG_TMCR	(BT16_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT16_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C48060)  /*@bfbba@*/
#define BT16_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C48061)  /*@bfbba@*/
#define BT16_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C48062)  /*@bfbba@*/
#define BT16_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C48063)  /*@bfbba@*/
#define BT16_PPG_TMCR_FMD	(BT16_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT16_PPG_TMCR_EGS	(BT16_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT16_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4806A)  /*@bfbba@*/
#define BT16_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4806B)  /*@bfbba@*/
#define BT16_PPG_TMCR_CKS2_0	(BT16_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT17_PPG_TMCR	(BT17_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT17_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4A060)  /*@bfbba@*/
#define BT17_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4A061)  /*@bfbba@*/
#define BT17_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4A062)  /*@bfbba@*/
#define BT17_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4A063)  /*@bfbba@*/
#define BT17_PPG_TMCR_FMD	(BT17_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT17_PPG_TMCR_EGS	(BT17_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT17_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4A06A)  /*@bfbba@*/
#define BT17_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4A06B)  /*@bfbba@*/
#define BT17_PPG_TMCR_CKS2_0	(BT17_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT18_PPG_TMCR	(BT18_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT18_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4C060)  /*@bfbba@*/
#define BT18_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4C061)  /*@bfbba@*/
#define BT18_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4C062)  /*@bfbba@*/
#define BT18_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4C063)  /*@bfbba@*/
#define BT18_PPG_TMCR_FMD	(BT18_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT18_PPG_TMCR_EGS	(BT18_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT18_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4C06A)  /*@bfbba@*/
#define BT18_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4C06B)  /*@bfbba@*/
#define BT18_PPG_TMCR_CKS2_0	(BT18_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT19_PPG_TMCR	(BT19_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT19_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4E060)  /*@bfbba@*/
#define BT19_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4E061)  /*@bfbba@*/
#define BT19_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4E062)  /*@bfbba@*/
#define BT19_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4E063)  /*@bfbba@*/
#define BT19_PPG_TMCR_FMD	(BT19_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT19_PPG_TMCR_EGS	(BT19_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT19_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4E06A)  /*@bfbba@*/
#define BT19_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4E06B)  /*@bfbba@*/
#define BT19_PPG_TMCR_CKS2_0	(BT19_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT20_PPG_TMCR	(BT20_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT20_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C50060)  /*@bfbba@*/
#define BT20_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C50061)  /*@bfbba@*/
#define BT20_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C50062)  /*@bfbba@*/
#define BT20_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C50063)  /*@bfbba@*/
#define BT20_PPG_TMCR_FMD	(BT20_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT20_PPG_TMCR_EGS	(BT20_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT20_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C5006A)  /*@bfbba@*/
#define BT20_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C5006B)  /*@bfbba@*/
#define BT20_PPG_TMCR_CKS2_0	(BT20_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT21_PPG_TMCR	(BT21_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT21_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C52060)  /*@bfbba@*/
#define BT21_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C52061)  /*@bfbba@*/
#define BT21_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C52062)  /*@bfbba@*/
#define BT21_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C52063)  /*@bfbba@*/
#define BT21_PPG_TMCR_FMD	(BT21_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT21_PPG_TMCR_EGS	(BT21_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT21_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C5206A)  /*@bfbba@*/
#define BT21_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C5206B)  /*@bfbba@*/
#define BT21_PPG_TMCR_CKS2_0	(BT21_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT22_PPG_TMCR	(BT22_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT22_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C54060)  /*@bfbba@*/
#define BT22_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C54061)  /*@bfbba@*/
#define BT22_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C54062)  /*@bfbba@*/
#define BT22_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C54063)  /*@bfbba@*/
#define BT22_PPG_TMCR_FMD	(BT22_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT22_PPG_TMCR_EGS	(BT22_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT22_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C5406A)  /*@bfbba@*/
#define BT22_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C5406B)  /*@bfbba@*/
#define BT22_PPG_TMCR_CKS2_0	(BT22_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT23_PPG_TMCR	(BT23_PPG.unTMCR.u16Register)  /*@rg@*/
#define BT23_PPG_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C56060)  /*@bfbba@*/
#define BT23_PPG_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C56061)  /*@bfbba@*/
#define BT23_PPG_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C56062)  /*@bfbba@*/
#define BT23_PPG_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C56063)  /*@bfbba@*/
#define BT23_PPG_TMCR_FMD	(BT23_PPG.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT23_PPG_TMCR_EGS	(BT23_PPG.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT23_PPG_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C5606A)  /*@bfbba@*/
#define BT23_PPG_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C5606B)  /*@bfbba@*/
#define BT23_PPG_TMCR_CKS2_0	(BT23_PPG.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

typedef struct stc_btn_ppg_tmcr_field{
    uint_io16_t		u1STRG:1;
    uint_io16_t		u1CTEN:1;
    uint_io16_t		u1MDSE:1;
    uint_io16_t		u1OSEL:1;
    uint_io16_t		u3FMD:3;
    uint_io16_t		:1;
    uint_io16_t		u2EGS:2;
    uint_io16_t		u1PMSK:1;
    uint_io16_t		u1RTGEN:1;
    uint_io16_t		u3CKS2_0:3;
    uint_io16_t		:1;
}stc_btn_ppg_tmcr_field_t;

typedef union un_btn_ppg_tmcr{
    uint_io16_t		u16Register;
    stc_btn_ppg_tmcr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_btn_ppg_tmcr_t;

/* STC */
#define BT00_PPG_STC	(BT00_PPG.unSTC.u8Register)  /*@rg@*/
#define BT00_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7840080)  /*@bfbba@*/
#define BT00_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7840082)  /*@bfbba@*/
#define BT00_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7840084)  /*@bfbba@*/
#define BT00_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7840086)  /*@bfbba@*/

#define BT01_PPG_STC	(BT01_PPG.unSTC.u8Register)  /*@rg@*/
#define BT01_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7842080)  /*@bfbba@*/
#define BT01_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7842082)  /*@bfbba@*/
#define BT01_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7842084)  /*@bfbba@*/
#define BT01_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7842086)  /*@bfbba@*/

#define BT02_PPG_STC	(BT02_PPG.unSTC.u8Register)  /*@rg@*/
#define BT02_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7844080)  /*@bfbba@*/
#define BT02_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7844082)  /*@bfbba@*/
#define BT02_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7844084)  /*@bfbba@*/
#define BT02_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7844086)  /*@bfbba@*/

#define BT03_PPG_STC	(BT03_PPG.unSTC.u8Register)  /*@rg@*/
#define BT03_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7846080)  /*@bfbba@*/
#define BT03_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7846082)  /*@bfbba@*/
#define BT03_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7846084)  /*@bfbba@*/
#define BT03_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7846086)  /*@bfbba@*/

#define BT04_PPG_STC	(BT04_PPG.unSTC.u8Register)  /*@rg@*/
#define BT04_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7848080)  /*@bfbba@*/
#define BT04_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7848082)  /*@bfbba@*/
#define BT04_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7848084)  /*@bfbba@*/
#define BT04_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7848086)  /*@bfbba@*/

#define BT05_PPG_STC	(BT05_PPG.unSTC.u8Register)  /*@rg@*/
#define BT05_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB784A080)  /*@bfbba@*/
#define BT05_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB784A082)  /*@bfbba@*/
#define BT05_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB784A084)  /*@bfbba@*/
#define BT05_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB784A086)  /*@bfbba@*/

#define BT06_PPG_STC	(BT06_PPG.unSTC.u8Register)  /*@rg@*/
#define BT06_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB784C080)  /*@bfbba@*/
#define BT06_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB784C082)  /*@bfbba@*/
#define BT06_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB784C084)  /*@bfbba@*/
#define BT06_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB784C086)  /*@bfbba@*/

#define BT07_PPG_STC	(BT07_PPG.unSTC.u8Register)  /*@rg@*/
#define BT07_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB784E080)  /*@bfbba@*/
#define BT07_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB784E082)  /*@bfbba@*/
#define BT07_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB784E084)  /*@bfbba@*/
#define BT07_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB784E086)  /*@bfbba@*/

#define BT08_PPG_STC	(BT08_PPG.unSTC.u8Register)  /*@rg@*/
#define BT08_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7850080)  /*@bfbba@*/
#define BT08_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7850082)  /*@bfbba@*/
#define BT08_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7850084)  /*@bfbba@*/
#define BT08_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7850086)  /*@bfbba@*/

#define BT09_PPG_STC	(BT09_PPG.unSTC.u8Register)  /*@rg@*/
#define BT09_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7852080)  /*@bfbba@*/
#define BT09_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7852082)  /*@bfbba@*/
#define BT09_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7852084)  /*@bfbba@*/
#define BT09_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7852086)  /*@bfbba@*/

#define BT10_PPG_STC	(BT10_PPG.unSTC.u8Register)  /*@rg@*/
#define BT10_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7854080)  /*@bfbba@*/
#define BT10_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7854082)  /*@bfbba@*/
#define BT10_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7854084)  /*@bfbba@*/
#define BT10_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7854086)  /*@bfbba@*/

#define BT11_PPG_STC	(BT11_PPG.unSTC.u8Register)  /*@rg@*/
#define BT11_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7856080)  /*@bfbba@*/
#define BT11_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7856082)  /*@bfbba@*/
#define BT11_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7856084)  /*@bfbba@*/
#define BT11_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7856086)  /*@bfbba@*/

#define BT12_PPG_STC	(BT12_PPG.unSTC.u8Register)  /*@rg@*/
#define BT12_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C40080)  /*@bfbba@*/
#define BT12_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C40082)  /*@bfbba@*/
#define BT12_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C40084)  /*@bfbba@*/
#define BT12_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C40086)  /*@bfbba@*/

#define BT13_PPG_STC	(BT13_PPG.unSTC.u8Register)  /*@rg@*/
#define BT13_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C42080)  /*@bfbba@*/
#define BT13_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C42082)  /*@bfbba@*/
#define BT13_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C42084)  /*@bfbba@*/
#define BT13_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C42086)  /*@bfbba@*/

#define BT14_PPG_STC	(BT14_PPG.unSTC.u8Register)  /*@rg@*/
#define BT14_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C44080)  /*@bfbba@*/
#define BT14_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C44082)  /*@bfbba@*/
#define BT14_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C44084)  /*@bfbba@*/
#define BT14_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C44086)  /*@bfbba@*/

#define BT15_PPG_STC	(BT15_PPG.unSTC.u8Register)  /*@rg@*/
#define BT15_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C46080)  /*@bfbba@*/
#define BT15_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C46082)  /*@bfbba@*/
#define BT15_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C46084)  /*@bfbba@*/
#define BT15_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C46086)  /*@bfbba@*/

#define BT16_PPG_STC	(BT16_PPG.unSTC.u8Register)  /*@rg@*/
#define BT16_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C48080)  /*@bfbba@*/
#define BT16_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C48082)  /*@bfbba@*/
#define BT16_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C48084)  /*@bfbba@*/
#define BT16_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C48086)  /*@bfbba@*/

#define BT17_PPG_STC	(BT17_PPG.unSTC.u8Register)  /*@rg@*/
#define BT17_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4A080)  /*@bfbba@*/
#define BT17_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4A082)  /*@bfbba@*/
#define BT17_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4A084)  /*@bfbba@*/
#define BT17_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4A086)  /*@bfbba@*/

#define BT18_PPG_STC	(BT18_PPG.unSTC.u8Register)  /*@rg@*/
#define BT18_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4C080)  /*@bfbba@*/
#define BT18_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4C082)  /*@bfbba@*/
#define BT18_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4C084)  /*@bfbba@*/
#define BT18_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4C086)  /*@bfbba@*/

#define BT19_PPG_STC	(BT19_PPG.unSTC.u8Register)  /*@rg@*/
#define BT19_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4E080)  /*@bfbba@*/
#define BT19_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4E082)  /*@bfbba@*/
#define BT19_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4E084)  /*@bfbba@*/
#define BT19_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4E086)  /*@bfbba@*/

#define BT20_PPG_STC	(BT20_PPG.unSTC.u8Register)  /*@rg@*/
#define BT20_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C50080)  /*@bfbba@*/
#define BT20_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C50082)  /*@bfbba@*/
#define BT20_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C50084)  /*@bfbba@*/
#define BT20_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C50086)  /*@bfbba@*/

#define BT21_PPG_STC	(BT21_PPG.unSTC.u8Register)  /*@rg@*/
#define BT21_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C52080)  /*@bfbba@*/
#define BT21_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C52082)  /*@bfbba@*/
#define BT21_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C52084)  /*@bfbba@*/
#define BT21_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C52086)  /*@bfbba@*/

#define BT22_PPG_STC	(BT22_PPG.unSTC.u8Register)  /*@rg@*/
#define BT22_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C54080)  /*@bfbba@*/
#define BT22_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C54082)  /*@bfbba@*/
#define BT22_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C54084)  /*@bfbba@*/
#define BT22_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C54086)  /*@bfbba@*/

#define BT23_PPG_STC	(BT23_PPG.unSTC.u8Register)  /*@rg@*/
#define BT23_PPG_STC_UDIR	(*(volatile uint_io8_t*)0xB7C56080)  /*@bfbba@*/
#define BT23_PPG_STC_TGIR	(*(volatile uint_io8_t*)0xB7C56082)  /*@bfbba@*/
#define BT23_PPG_STC_UDIE	(*(volatile uint_io8_t*)0xB7C56084)  /*@bfbba@*/
#define BT23_PPG_STC_TGIE	(*(volatile uint_io8_t*)0xB7C56086)  /*@bfbba@*/

typedef struct stc_btn_ppg_stc_field{
    uint_io8_t		u1UDIR:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIR:1;
    uint_io8_t		:1;
    uint_io8_t		u1UDIE:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIE:1;
    uint_io8_t		:1;
}stc_btn_ppg_stc_field_t;

typedef union un_btn_ppg_stc{
    uint_io8_t		u8Register;
    stc_btn_ppg_stc_field_t		stcField;
}un_btn_ppg_stc_t;

/* TMCR2 */
#define BT00_PPG_TMCR2	(BT00_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT00_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7840088)  /*@bfbba@*/

#define BT01_PPG_TMCR2	(BT01_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT01_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7842088)  /*@bfbba@*/

#define BT02_PPG_TMCR2	(BT02_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT02_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7844088)  /*@bfbba@*/

#define BT03_PPG_TMCR2	(BT03_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT03_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7846088)  /*@bfbba@*/

#define BT04_PPG_TMCR2	(BT04_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT04_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7848088)  /*@bfbba@*/

#define BT05_PPG_TMCR2	(BT05_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT05_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784A088)  /*@bfbba@*/

#define BT06_PPG_TMCR2	(BT06_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT06_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784C088)  /*@bfbba@*/

#define BT07_PPG_TMCR2	(BT07_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT07_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784E088)  /*@bfbba@*/

#define BT08_PPG_TMCR2	(BT08_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT08_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7850088)  /*@bfbba@*/

#define BT09_PPG_TMCR2	(BT09_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT09_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7852088)  /*@bfbba@*/

#define BT10_PPG_TMCR2	(BT10_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT10_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7854088)  /*@bfbba@*/

#define BT11_PPG_TMCR2	(BT11_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT11_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7856088)  /*@bfbba@*/

#define BT12_PPG_TMCR2	(BT12_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT12_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C40088)  /*@bfbba@*/

#define BT13_PPG_TMCR2	(BT13_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT13_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C42088)  /*@bfbba@*/

#define BT14_PPG_TMCR2	(BT14_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT14_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C44088)  /*@bfbba@*/

#define BT15_PPG_TMCR2	(BT15_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT15_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C46088)  /*@bfbba@*/

#define BT16_PPG_TMCR2	(BT16_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT16_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C48088)  /*@bfbba@*/

#define BT17_PPG_TMCR2	(BT17_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT17_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4A088)  /*@bfbba@*/

#define BT18_PPG_TMCR2	(BT18_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT18_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4C088)  /*@bfbba@*/

#define BT19_PPG_TMCR2	(BT19_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT19_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4E088)  /*@bfbba@*/

#define BT20_PPG_TMCR2	(BT20_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT20_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C50088)  /*@bfbba@*/

#define BT21_PPG_TMCR2	(BT21_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT21_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C52088)  /*@bfbba@*/

#define BT22_PPG_TMCR2	(BT22_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT22_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C54088)  /*@bfbba@*/

#define BT23_PPG_TMCR2	(BT23_PPG.unTMCR2.u8Register)  /*@rg@*/
#define BT23_PPG_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C56088)  /*@bfbba@*/

typedef struct stc_btn_ppg_tmcr2_field{
    uint_io8_t		u1CKS3:1;
    uint_io8_t		:7;
}stc_btn_ppg_tmcr2_field_t;

typedef union un_btn_ppg_tmcr2{
    uint_io8_t		u8Register;
    stc_btn_ppg_tmcr2_field_t		stcField;
}un_btn_ppg_tmcr2_t;

/* STCC */
#define BT00_PPG_STCC	(BT00_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT00_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78400A0)  /*@bfbba@*/
#define BT00_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78400A2)  /*@bfbba@*/
#define BT00_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78400A4)  /*@bfbba@*/
#define BT00_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78400A6)  /*@bfbba@*/

#define BT01_PPG_STCC	(BT01_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT01_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78420A0)  /*@bfbba@*/
#define BT01_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78420A2)  /*@bfbba@*/
#define BT01_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78420A4)  /*@bfbba@*/
#define BT01_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78420A6)  /*@bfbba@*/

#define BT02_PPG_STCC	(BT02_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT02_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78440A0)  /*@bfbba@*/
#define BT02_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78440A2)  /*@bfbba@*/
#define BT02_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78440A4)  /*@bfbba@*/
#define BT02_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78440A6)  /*@bfbba@*/

#define BT03_PPG_STCC	(BT03_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT03_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78460A0)  /*@bfbba@*/
#define BT03_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78460A2)  /*@bfbba@*/
#define BT03_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78460A4)  /*@bfbba@*/
#define BT03_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78460A6)  /*@bfbba@*/

#define BT04_PPG_STCC	(BT04_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT04_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78480A0)  /*@bfbba@*/
#define BT04_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78480A2)  /*@bfbba@*/
#define BT04_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78480A4)  /*@bfbba@*/
#define BT04_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78480A6)  /*@bfbba@*/

#define BT05_PPG_STCC	(BT05_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT05_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784A0A0)  /*@bfbba@*/
#define BT05_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784A0A2)  /*@bfbba@*/
#define BT05_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784A0A4)  /*@bfbba@*/
#define BT05_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784A0A6)  /*@bfbba@*/

#define BT06_PPG_STCC	(BT06_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT06_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784C0A0)  /*@bfbba@*/
#define BT06_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784C0A2)  /*@bfbba@*/
#define BT06_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784C0A4)  /*@bfbba@*/
#define BT06_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784C0A6)  /*@bfbba@*/

#define BT07_PPG_STCC	(BT07_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT07_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784E0A0)  /*@bfbba@*/
#define BT07_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784E0A2)  /*@bfbba@*/
#define BT07_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784E0A4)  /*@bfbba@*/
#define BT07_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784E0A6)  /*@bfbba@*/

#define BT08_PPG_STCC	(BT08_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT08_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78500A0)  /*@bfbba@*/
#define BT08_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78500A2)  /*@bfbba@*/
#define BT08_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78500A4)  /*@bfbba@*/
#define BT08_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78500A6)  /*@bfbba@*/

#define BT09_PPG_STCC	(BT09_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT09_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78520A0)  /*@bfbba@*/
#define BT09_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78520A2)  /*@bfbba@*/
#define BT09_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78520A4)  /*@bfbba@*/
#define BT09_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78520A6)  /*@bfbba@*/

#define BT10_PPG_STCC	(BT10_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT10_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78540A0)  /*@bfbba@*/
#define BT10_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78540A2)  /*@bfbba@*/
#define BT10_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78540A4)  /*@bfbba@*/
#define BT10_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78540A6)  /*@bfbba@*/

#define BT11_PPG_STCC	(BT11_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT11_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78560A0)  /*@bfbba@*/
#define BT11_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78560A2)  /*@bfbba@*/
#define BT11_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78560A4)  /*@bfbba@*/
#define BT11_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78560A6)  /*@bfbba@*/

#define BT12_PPG_STCC	(BT12_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT12_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C400A0)  /*@bfbba@*/
#define BT12_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C400A2)  /*@bfbba@*/
#define BT12_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C400A4)  /*@bfbba@*/
#define BT12_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C400A6)  /*@bfbba@*/

#define BT13_PPG_STCC	(BT13_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT13_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C420A0)  /*@bfbba@*/
#define BT13_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C420A2)  /*@bfbba@*/
#define BT13_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C420A4)  /*@bfbba@*/
#define BT13_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C420A6)  /*@bfbba@*/

#define BT14_PPG_STCC	(BT14_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT14_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C440A0)  /*@bfbba@*/
#define BT14_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C440A2)  /*@bfbba@*/
#define BT14_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C440A4)  /*@bfbba@*/
#define BT14_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C440A6)  /*@bfbba@*/

#define BT15_PPG_STCC	(BT15_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT15_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C460A0)  /*@bfbba@*/
#define BT15_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C460A2)  /*@bfbba@*/
#define BT15_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C460A4)  /*@bfbba@*/
#define BT15_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C460A6)  /*@bfbba@*/

#define BT16_PPG_STCC	(BT16_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT16_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C480A0)  /*@bfbba@*/
#define BT16_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C480A2)  /*@bfbba@*/
#define BT16_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C480A4)  /*@bfbba@*/
#define BT16_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C480A6)  /*@bfbba@*/

#define BT17_PPG_STCC	(BT17_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT17_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4A0A0)  /*@bfbba@*/
#define BT17_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4A0A2)  /*@bfbba@*/
#define BT17_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4A0A4)  /*@bfbba@*/
#define BT17_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4A0A6)  /*@bfbba@*/

#define BT18_PPG_STCC	(BT18_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT18_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4C0A0)  /*@bfbba@*/
#define BT18_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4C0A2)  /*@bfbba@*/
#define BT18_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4C0A4)  /*@bfbba@*/
#define BT18_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4C0A6)  /*@bfbba@*/

#define BT19_PPG_STCC	(BT19_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT19_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4E0A0)  /*@bfbba@*/
#define BT19_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4E0A2)  /*@bfbba@*/
#define BT19_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4E0A4)  /*@bfbba@*/
#define BT19_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4E0A6)  /*@bfbba@*/

#define BT20_PPG_STCC	(BT20_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT20_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C500A0)  /*@bfbba@*/
#define BT20_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C500A2)  /*@bfbba@*/
#define BT20_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C500A4)  /*@bfbba@*/
#define BT20_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C500A6)  /*@bfbba@*/

#define BT21_PPG_STCC	(BT21_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT21_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C520A0)  /*@bfbba@*/
#define BT21_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C520A2)  /*@bfbba@*/
#define BT21_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C520A4)  /*@bfbba@*/
#define BT21_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C520A6)  /*@bfbba@*/

#define BT22_PPG_STCC	(BT22_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT22_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C540A0)  /*@bfbba@*/
#define BT22_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C540A2)  /*@bfbba@*/
#define BT22_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C540A4)  /*@bfbba@*/
#define BT22_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C540A6)  /*@bfbba@*/

#define BT23_PPG_STCC	(BT23_PPG.unSTCC.u8Register)  /*@rg@*/
#define BT23_PPG_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C560A0)  /*@bfbba@*/
#define BT23_PPG_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C560A2)  /*@bfbba@*/
#define BT23_PPG_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C560A4)  /*@bfbba@*/
#define BT23_PPG_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C560A6)  /*@bfbba@*/

typedef struct stc_btn_ppg_stcc_field{
    uint_io8_t		u1UDIRC:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIRC:1;
    uint_io8_t		:1;
    uint_io8_t		u1UDIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIEC:1;
    uint_io8_t		:1;
}stc_btn_ppg_stcc_field_t;

typedef union un_btn_ppg_stcc{
    uint_io8_t		u8Register;
    stc_btn_ppg_stcc_field_t		stcField;
}un_btn_ppg_stcc_t;

/* STCS */
#define BT00_PPG_STCS	(BT00_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT00_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78400C4)  /*@bfbba@*/
#define BT00_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78400C6)  /*@bfbba@*/

#define BT01_PPG_STCS	(BT01_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT01_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78420C4)  /*@bfbba@*/
#define BT01_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78420C6)  /*@bfbba@*/

#define BT02_PPG_STCS	(BT02_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT02_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78440C4)  /*@bfbba@*/
#define BT02_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78440C6)  /*@bfbba@*/

#define BT03_PPG_STCS	(BT03_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT03_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78460C4)  /*@bfbba@*/
#define BT03_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78460C6)  /*@bfbba@*/

#define BT04_PPG_STCS	(BT04_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT04_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78480C4)  /*@bfbba@*/
#define BT04_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78480C6)  /*@bfbba@*/

#define BT05_PPG_STCS	(BT05_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT05_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB784A0C4)  /*@bfbba@*/
#define BT05_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB784A0C6)  /*@bfbba@*/

#define BT06_PPG_STCS	(BT06_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT06_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB784C0C4)  /*@bfbba@*/
#define BT06_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB784C0C6)  /*@bfbba@*/

#define BT07_PPG_STCS	(BT07_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT07_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB784E0C4)  /*@bfbba@*/
#define BT07_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB784E0C6)  /*@bfbba@*/

#define BT08_PPG_STCS	(BT08_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT08_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78500C4)  /*@bfbba@*/
#define BT08_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78500C6)  /*@bfbba@*/

#define BT09_PPG_STCS	(BT09_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT09_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78520C4)  /*@bfbba@*/
#define BT09_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78520C6)  /*@bfbba@*/

#define BT10_PPG_STCS	(BT10_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT10_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78540C4)  /*@bfbba@*/
#define BT10_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78540C6)  /*@bfbba@*/

#define BT11_PPG_STCS	(BT11_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT11_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB78560C4)  /*@bfbba@*/
#define BT11_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB78560C6)  /*@bfbba@*/

#define BT12_PPG_STCS	(BT12_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT12_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C400C4)  /*@bfbba@*/
#define BT12_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C400C6)  /*@bfbba@*/

#define BT13_PPG_STCS	(BT13_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT13_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C420C4)  /*@bfbba@*/
#define BT13_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C420C6)  /*@bfbba@*/

#define BT14_PPG_STCS	(BT14_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT14_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C440C4)  /*@bfbba@*/
#define BT14_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C440C6)  /*@bfbba@*/

#define BT15_PPG_STCS	(BT15_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT15_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C460C4)  /*@bfbba@*/
#define BT15_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C460C6)  /*@bfbba@*/

#define BT16_PPG_STCS	(BT16_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT16_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C480C4)  /*@bfbba@*/
#define BT16_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C480C6)  /*@bfbba@*/

#define BT17_PPG_STCS	(BT17_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT17_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4A0C4)  /*@bfbba@*/
#define BT17_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4A0C6)  /*@bfbba@*/

#define BT18_PPG_STCS	(BT18_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT18_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4C0C4)  /*@bfbba@*/
#define BT18_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4C0C6)  /*@bfbba@*/

#define BT19_PPG_STCS	(BT19_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT19_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4E0C4)  /*@bfbba@*/
#define BT19_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4E0C6)  /*@bfbba@*/

#define BT20_PPG_STCS	(BT20_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT20_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C500C4)  /*@bfbba@*/
#define BT20_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C500C6)  /*@bfbba@*/

#define BT21_PPG_STCS	(BT21_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT21_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C520C4)  /*@bfbba@*/
#define BT21_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C520C6)  /*@bfbba@*/

#define BT22_PPG_STCS	(BT22_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT22_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C540C4)  /*@bfbba@*/
#define BT22_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C540C6)  /*@bfbba@*/

#define BT23_PPG_STCS	(BT23_PPG.unSTCS.u8Register)  /*@rg@*/
#define BT23_PPG_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C560C4)  /*@bfbba@*/
#define BT23_PPG_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C560C6)  /*@bfbba@*/

typedef struct stc_btn_ppg_stcs_field{
    uint_io8_t		:4;
    uint_io8_t		u1UDIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1TGIES:1;
    uint_io8_t		:1;
}stc_btn_ppg_stcs_field_t;

typedef union un_btn_ppg_stcs{
    uint_io8_t		u8Register;
    stc_btn_ppg_stcs_field_t		stcField;
}un_btn_ppg_stcs_t;


typedef struct stc_btn_ppg{
    un_btn_ppg_prll_t	unPRLL;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[2];	/* 0x00000002 */
    un_btn_ppg_prlh_t	unPRLH;	/* 0x00000004 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000006 */
    un_btn_ppg_tmr_t	unTMR;	/* 0x00000008 */
    uint_io8_t	au8Reserved2[2];	/* 0x0000000A */
    un_btn_ppg_tmcr_t	unTMCR;	/* 0x0000000C */
    uint_io8_t	au8Reserved3[2];	/* 0x0000000E */
    un_btn_ppg_stc_t	unSTC;	/* 0x00000010 */
    un_btn_ppg_tmcr2_t	unTMCR2;	/* 0x00000011 */
    uint_io8_t	au8Reserved4[2];	/* 0x00000012 */
    un_btn_ppg_stcc_t	unSTCC;	/* 0x00000014 */
    uint_io8_t	au8Reserved5[3];	/* 0x00000015 */
    un_btn_ppg_stcs_t	unSTCS;	/* 0x00000018 */
    uint_io8_t	au8Reserved6[23];	/* 0x00000019 */
}stc_btn_ppg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_btn_ppg_t	stcBT_PPG[24];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 48(0x30) bytes */


#endif /* __S6J3200_BT_PPG_H */
