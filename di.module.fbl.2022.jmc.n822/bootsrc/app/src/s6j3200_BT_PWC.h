/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_BT_PWC_H
#define __S6J3200_BT_PWC_H

#include "s6j3200io_basetypes.h"

/* BT[00-23]_PWC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT00_PWC	stcBT_PWC[0]
#define BT01_PWC	stcBT_PWC[1]
#define BT02_PWC	stcBT_PWC[2]
#define BT03_PWC	stcBT_PWC[3]
#define BT04_PWC	stcBT_PWC[4]
#define BT05_PWC	stcBT_PWC[5]
#define BT06_PWC	stcBT_PWC[6]
#define BT07_PWC	stcBT_PWC[7]
#define BT08_PWC	stcBT_PWC[8]
#define BT09_PWC	stcBT_PWC[9]
#define BT10_PWC	stcBT_PWC[10]
#define BT11_PWC	stcBT_PWC[11]
#define BT12_PWC	stcBT_PWC[12]
#define BT13_PWC	stcBT_PWC[13]
#define BT14_PWC	stcBT_PWC[14]
#define BT15_PWC	stcBT_PWC[15]
#define BT16_PWC	stcBT_PWC[16]
#define BT17_PWC	stcBT_PWC[17]
#define BT18_PWC	stcBT_PWC[18]
#define BT19_PWC	stcBT_PWC[19]
#define BT20_PWC	stcBT_PWC[20]
#define BT21_PWC	stcBT_PWC[21]
#define BT22_PWC	stcBT_PWC[22]
#define BT23_PWC	stcBT_PWC[23]
#else /* __IO_DEFINE */
#define BT00_PWC	(*((volatile stc_btn_pwc_t*)0xB4808000))
#define BT01_PWC	(*((volatile stc_btn_pwc_t*)0xB4808400))
#define BT02_PWC	(*((volatile stc_btn_pwc_t*)0xB4808800))
#define BT03_PWC	(*((volatile stc_btn_pwc_t*)0xB4808C00))
#define BT04_PWC	(*((volatile stc_btn_pwc_t*)0xB4809000))
#define BT05_PWC	(*((volatile stc_btn_pwc_t*)0xB4809400))
#define BT06_PWC	(*((volatile stc_btn_pwc_t*)0xB4809800))
#define BT07_PWC	(*((volatile stc_btn_pwc_t*)0xB4809C00))
#define BT08_PWC	(*((volatile stc_btn_pwc_t*)0xB480A000))
#define BT09_PWC	(*((volatile stc_btn_pwc_t*)0xB480A400))
#define BT10_PWC	(*((volatile stc_btn_pwc_t*)0xB480A800))
#define BT11_PWC	(*((volatile stc_btn_pwc_t*)0xB480AC00))
#define BT12_PWC	(*((volatile stc_btn_pwc_t*)0xB4888000))
#define BT13_PWC	(*((volatile stc_btn_pwc_t*)0xB4888400))
#define BT14_PWC	(*((volatile stc_btn_pwc_t*)0xB4888800))
#define BT15_PWC	(*((volatile stc_btn_pwc_t*)0xB4888C00))
#define BT16_PWC	(*((volatile stc_btn_pwc_t*)0xB4889000))
#define BT17_PWC	(*((volatile stc_btn_pwc_t*)0xB4889400))
#define BT18_PWC	(*((volatile stc_btn_pwc_t*)0xB4889800))
#define BT19_PWC	(*((volatile stc_btn_pwc_t*)0xB4889C00))
#define BT20_PWC	(*((volatile stc_btn_pwc_t*)0xB488A000))
#define BT21_PWC	(*((volatile stc_btn_pwc_t*)0xB488A400))
#define BT22_PWC	(*((volatile stc_btn_pwc_t*)0xB488A800))
#define BT23_PWC	(*((volatile stc_btn_pwc_t*)0xB488AC00))
#endif /* __IO_DEFINE */

/* DTBF */
#define BT00_PWC_DTBF	(BT00_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT00_PWC_DTBF_DTBF	BT00_PWC_DTBF  /*@bfrg@*/

#define BT01_PWC_DTBF	(BT01_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT01_PWC_DTBF_DTBF	BT01_PWC_DTBF  /*@bfrg@*/

#define BT02_PWC_DTBF	(BT02_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT02_PWC_DTBF_DTBF	BT02_PWC_DTBF  /*@bfrg@*/

#define BT03_PWC_DTBF	(BT03_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT03_PWC_DTBF_DTBF	BT03_PWC_DTBF  /*@bfrg@*/

#define BT04_PWC_DTBF	(BT04_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT04_PWC_DTBF_DTBF	BT04_PWC_DTBF  /*@bfrg@*/

#define BT05_PWC_DTBF	(BT05_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT05_PWC_DTBF_DTBF	BT05_PWC_DTBF  /*@bfrg@*/

#define BT06_PWC_DTBF	(BT06_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT06_PWC_DTBF_DTBF	BT06_PWC_DTBF  /*@bfrg@*/

#define BT07_PWC_DTBF	(BT07_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT07_PWC_DTBF_DTBF	BT07_PWC_DTBF  /*@bfrg@*/

#define BT08_PWC_DTBF	(BT08_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT08_PWC_DTBF_DTBF	BT08_PWC_DTBF  /*@bfrg@*/

#define BT09_PWC_DTBF	(BT09_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT09_PWC_DTBF_DTBF	BT09_PWC_DTBF  /*@bfrg@*/

#define BT10_PWC_DTBF	(BT10_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT10_PWC_DTBF_DTBF	BT10_PWC_DTBF  /*@bfrg@*/

#define BT11_PWC_DTBF	(BT11_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT11_PWC_DTBF_DTBF	BT11_PWC_DTBF  /*@bfrg@*/

#define BT12_PWC_DTBF	(BT12_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT12_PWC_DTBF_DTBF	BT12_PWC_DTBF  /*@bfrg@*/

#define BT13_PWC_DTBF	(BT13_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT13_PWC_DTBF_DTBF	BT13_PWC_DTBF  /*@bfrg@*/

#define BT14_PWC_DTBF	(BT14_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT14_PWC_DTBF_DTBF	BT14_PWC_DTBF  /*@bfrg@*/

#define BT15_PWC_DTBF	(BT15_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT15_PWC_DTBF_DTBF	BT15_PWC_DTBF  /*@bfrg@*/

#define BT16_PWC_DTBF	(BT16_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT16_PWC_DTBF_DTBF	BT16_PWC_DTBF  /*@bfrg@*/

#define BT17_PWC_DTBF	(BT17_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT17_PWC_DTBF_DTBF	BT17_PWC_DTBF  /*@bfrg@*/

#define BT18_PWC_DTBF	(BT18_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT18_PWC_DTBF_DTBF	BT18_PWC_DTBF  /*@bfrg@*/

#define BT19_PWC_DTBF	(BT19_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT19_PWC_DTBF_DTBF	BT19_PWC_DTBF  /*@bfrg@*/

#define BT20_PWC_DTBF	(BT20_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT20_PWC_DTBF_DTBF	BT20_PWC_DTBF  /*@bfrg@*/

#define BT21_PWC_DTBF	(BT21_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT21_PWC_DTBF_DTBF	BT21_PWC_DTBF  /*@bfrg@*/

#define BT22_PWC_DTBF	(BT22_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT22_PWC_DTBF_DTBF	BT22_PWC_DTBF  /*@bfrg@*/

#define BT23_PWC_DTBF	(BT23_PWC.unDTBF.u16Register)  /*@rg@*/
#define BT23_PWC_DTBF_DTBF	BT23_PWC_DTBF  /*@bfrg@*/

typedef union un_btn_pwc_dtbf{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_pwc_dtbf_t;

/* TMCR */
#define BT00_PWC_TMCR	(BT00_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT00_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7840061)  /*@bfbba@*/
#define BT00_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7840062)  /*@bfbba@*/
#define BT00_PWC_TMCR_FMD	(BT00_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT00_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7840067)  /*@bfbba@*/
#define BT00_PWC_TMCR_EGS	(BT00_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT00_PWC_TMCR_CKS2_0	(BT00_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT01_PWC_TMCR	(BT01_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT01_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7842061)  /*@bfbba@*/
#define BT01_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7842062)  /*@bfbba@*/
#define BT01_PWC_TMCR_FMD	(BT01_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT01_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7842067)  /*@bfbba@*/
#define BT01_PWC_TMCR_EGS	(BT01_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT01_PWC_TMCR_CKS2_0	(BT01_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT02_PWC_TMCR	(BT02_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT02_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7844061)  /*@bfbba@*/
#define BT02_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7844062)  /*@bfbba@*/
#define BT02_PWC_TMCR_FMD	(BT02_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT02_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7844067)  /*@bfbba@*/
#define BT02_PWC_TMCR_EGS	(BT02_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT02_PWC_TMCR_CKS2_0	(BT02_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT03_PWC_TMCR	(BT03_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT03_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7846061)  /*@bfbba@*/
#define BT03_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7846062)  /*@bfbba@*/
#define BT03_PWC_TMCR_FMD	(BT03_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT03_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7846067)  /*@bfbba@*/
#define BT03_PWC_TMCR_EGS	(BT03_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT03_PWC_TMCR_CKS2_0	(BT03_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT04_PWC_TMCR	(BT04_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT04_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7848061)  /*@bfbba@*/
#define BT04_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7848062)  /*@bfbba@*/
#define BT04_PWC_TMCR_FMD	(BT04_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT04_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7848067)  /*@bfbba@*/
#define BT04_PWC_TMCR_EGS	(BT04_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT04_PWC_TMCR_CKS2_0	(BT04_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT05_PWC_TMCR	(BT05_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT05_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784A061)  /*@bfbba@*/
#define BT05_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784A062)  /*@bfbba@*/
#define BT05_PWC_TMCR_FMD	(BT05_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT05_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB784A067)  /*@bfbba@*/
#define BT05_PWC_TMCR_EGS	(BT05_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT05_PWC_TMCR_CKS2_0	(BT05_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT06_PWC_TMCR	(BT06_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT06_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784C061)  /*@bfbba@*/
#define BT06_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784C062)  /*@bfbba@*/
#define BT06_PWC_TMCR_FMD	(BT06_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT06_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB784C067)  /*@bfbba@*/
#define BT06_PWC_TMCR_EGS	(BT06_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT06_PWC_TMCR_CKS2_0	(BT06_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT07_PWC_TMCR	(BT07_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT07_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784E061)  /*@bfbba@*/
#define BT07_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784E062)  /*@bfbba@*/
#define BT07_PWC_TMCR_FMD	(BT07_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT07_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB784E067)  /*@bfbba@*/
#define BT07_PWC_TMCR_EGS	(BT07_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT07_PWC_TMCR_CKS2_0	(BT07_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT08_PWC_TMCR	(BT08_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT08_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7850061)  /*@bfbba@*/
#define BT08_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7850062)  /*@bfbba@*/
#define BT08_PWC_TMCR_FMD	(BT08_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT08_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7850067)  /*@bfbba@*/
#define BT08_PWC_TMCR_EGS	(BT08_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT08_PWC_TMCR_CKS2_0	(BT08_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT09_PWC_TMCR	(BT09_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT09_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7852061)  /*@bfbba@*/
#define BT09_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7852062)  /*@bfbba@*/
#define BT09_PWC_TMCR_FMD	(BT09_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT09_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7852067)  /*@bfbba@*/
#define BT09_PWC_TMCR_EGS	(BT09_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT09_PWC_TMCR_CKS2_0	(BT09_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT10_PWC_TMCR	(BT10_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT10_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7854061)  /*@bfbba@*/
#define BT10_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7854062)  /*@bfbba@*/
#define BT10_PWC_TMCR_FMD	(BT10_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT10_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7854067)  /*@bfbba@*/
#define BT10_PWC_TMCR_EGS	(BT10_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT10_PWC_TMCR_CKS2_0	(BT10_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT11_PWC_TMCR	(BT11_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT11_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7856061)  /*@bfbba@*/
#define BT11_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7856062)  /*@bfbba@*/
#define BT11_PWC_TMCR_FMD	(BT11_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT11_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7856067)  /*@bfbba@*/
#define BT11_PWC_TMCR_EGS	(BT11_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT11_PWC_TMCR_CKS2_0	(BT11_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT12_PWC_TMCR	(BT12_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT12_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C40061)  /*@bfbba@*/
#define BT12_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C40062)  /*@bfbba@*/
#define BT12_PWC_TMCR_FMD	(BT12_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT12_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C40067)  /*@bfbba@*/
#define BT12_PWC_TMCR_EGS	(BT12_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT12_PWC_TMCR_CKS2_0	(BT12_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT13_PWC_TMCR	(BT13_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT13_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C42061)  /*@bfbba@*/
#define BT13_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C42062)  /*@bfbba@*/
#define BT13_PWC_TMCR_FMD	(BT13_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT13_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C42067)  /*@bfbba@*/
#define BT13_PWC_TMCR_EGS	(BT13_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT13_PWC_TMCR_CKS2_0	(BT13_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT14_PWC_TMCR	(BT14_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT14_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C44061)  /*@bfbba@*/
#define BT14_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C44062)  /*@bfbba@*/
#define BT14_PWC_TMCR_FMD	(BT14_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT14_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C44067)  /*@bfbba@*/
#define BT14_PWC_TMCR_EGS	(BT14_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT14_PWC_TMCR_CKS2_0	(BT14_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT15_PWC_TMCR	(BT15_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT15_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C46061)  /*@bfbba@*/
#define BT15_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C46062)  /*@bfbba@*/
#define BT15_PWC_TMCR_FMD	(BT15_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT15_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C46067)  /*@bfbba@*/
#define BT15_PWC_TMCR_EGS	(BT15_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT15_PWC_TMCR_CKS2_0	(BT15_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT16_PWC_TMCR	(BT16_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT16_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C48061)  /*@bfbba@*/
#define BT16_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C48062)  /*@bfbba@*/
#define BT16_PWC_TMCR_FMD	(BT16_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT16_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C48067)  /*@bfbba@*/
#define BT16_PWC_TMCR_EGS	(BT16_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT16_PWC_TMCR_CKS2_0	(BT16_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT17_PWC_TMCR	(BT17_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT17_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4A061)  /*@bfbba@*/
#define BT17_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4A062)  /*@bfbba@*/
#define BT17_PWC_TMCR_FMD	(BT17_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT17_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C4A067)  /*@bfbba@*/
#define BT17_PWC_TMCR_EGS	(BT17_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT17_PWC_TMCR_CKS2_0	(BT17_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT18_PWC_TMCR	(BT18_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT18_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4C061)  /*@bfbba@*/
#define BT18_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4C062)  /*@bfbba@*/
#define BT18_PWC_TMCR_FMD	(BT18_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT18_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C4C067)  /*@bfbba@*/
#define BT18_PWC_TMCR_EGS	(BT18_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT18_PWC_TMCR_CKS2_0	(BT18_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT19_PWC_TMCR	(BT19_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT19_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4E061)  /*@bfbba@*/
#define BT19_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4E062)  /*@bfbba@*/
#define BT19_PWC_TMCR_FMD	(BT19_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT19_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C4E067)  /*@bfbba@*/
#define BT19_PWC_TMCR_EGS	(BT19_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT19_PWC_TMCR_CKS2_0	(BT19_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT20_PWC_TMCR	(BT20_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT20_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C50061)  /*@bfbba@*/
#define BT20_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C50062)  /*@bfbba@*/
#define BT20_PWC_TMCR_FMD	(BT20_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT20_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C50067)  /*@bfbba@*/
#define BT20_PWC_TMCR_EGS	(BT20_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT20_PWC_TMCR_CKS2_0	(BT20_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT21_PWC_TMCR	(BT21_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT21_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C52061)  /*@bfbba@*/
#define BT21_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C52062)  /*@bfbba@*/
#define BT21_PWC_TMCR_FMD	(BT21_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT21_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C52067)  /*@bfbba@*/
#define BT21_PWC_TMCR_EGS	(BT21_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT21_PWC_TMCR_CKS2_0	(BT21_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT22_PWC_TMCR	(BT22_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT22_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C54061)  /*@bfbba@*/
#define BT22_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C54062)  /*@bfbba@*/
#define BT22_PWC_TMCR_FMD	(BT22_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT22_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C54067)  /*@bfbba@*/
#define BT22_PWC_TMCR_EGS	(BT22_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT22_PWC_TMCR_CKS2_0	(BT22_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT23_PWC_TMCR	(BT23_PWC.unTMCR.u16Register)  /*@rg@*/
#define BT23_PWC_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C56061)  /*@bfbba@*/
#define BT23_PWC_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C56062)  /*@bfbba@*/
#define BT23_PWC_TMCR_FMD	(BT23_PWC.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT23_PWC_TMCR_T32	(*(volatile uint_io8_t*)0xB7C56067)  /*@bfbba@*/
#define BT23_PWC_TMCR_EGS	(BT23_PWC.unTMCR.stcField.u3EGS)  /*@bf@*/
#define BT23_PWC_TMCR_CKS2_0	(BT23_PWC.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

typedef struct stc_btn_pwc_tmcr_field{
    uint_io16_t		:1;
    uint_io16_t		u1CTEN:1;
    uint_io16_t		u1MDSE:1;
    uint_io16_t		:1;
    uint_io16_t		u3FMD:3;
    uint_io16_t		u1T32:1;
    uint_io16_t		u3EGS:3;
    uint_io16_t		:1;
    uint_io16_t		u3CKS2_0:3;
    uint_io16_t		:1;
}stc_btn_pwc_tmcr_field_t;

typedef union un_btn_pwc_tmcr{
    uint_io16_t		u16Register;
    stc_btn_pwc_tmcr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_btn_pwc_tmcr_t;

/* STC */
#define BT00_PWC_STC	(BT00_PWC.unSTC.u8Register)  /*@rg@*/
#define BT00_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7840080)  /*@bfbba@*/
#define BT00_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7840082)  /*@bfbba@*/
#define BT00_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7840084)  /*@bfbba@*/
#define BT00_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7840086)  /*@bfbba@*/
#define BT00_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7840087)  /*@bfbba@*/

#define BT01_PWC_STC	(BT01_PWC.unSTC.u8Register)  /*@rg@*/
#define BT01_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7842080)  /*@bfbba@*/
#define BT01_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7842082)  /*@bfbba@*/
#define BT01_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7842084)  /*@bfbba@*/
#define BT01_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7842086)  /*@bfbba@*/
#define BT01_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7842087)  /*@bfbba@*/

#define BT02_PWC_STC	(BT02_PWC.unSTC.u8Register)  /*@rg@*/
#define BT02_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7844080)  /*@bfbba@*/
#define BT02_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7844082)  /*@bfbba@*/
#define BT02_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7844084)  /*@bfbba@*/
#define BT02_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7844086)  /*@bfbba@*/
#define BT02_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7844087)  /*@bfbba@*/

#define BT03_PWC_STC	(BT03_PWC.unSTC.u8Register)  /*@rg@*/
#define BT03_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7846080)  /*@bfbba@*/
#define BT03_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7846082)  /*@bfbba@*/
#define BT03_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7846084)  /*@bfbba@*/
#define BT03_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7846086)  /*@bfbba@*/
#define BT03_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7846087)  /*@bfbba@*/

#define BT04_PWC_STC	(BT04_PWC.unSTC.u8Register)  /*@rg@*/
#define BT04_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7848080)  /*@bfbba@*/
#define BT04_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7848082)  /*@bfbba@*/
#define BT04_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7848084)  /*@bfbba@*/
#define BT04_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7848086)  /*@bfbba@*/
#define BT04_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7848087)  /*@bfbba@*/

#define BT05_PWC_STC	(BT05_PWC.unSTC.u8Register)  /*@rg@*/
#define BT05_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB784A080)  /*@bfbba@*/
#define BT05_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB784A082)  /*@bfbba@*/
#define BT05_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB784A084)  /*@bfbba@*/
#define BT05_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB784A086)  /*@bfbba@*/
#define BT05_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB784A087)  /*@bfbba@*/

#define BT06_PWC_STC	(BT06_PWC.unSTC.u8Register)  /*@rg@*/
#define BT06_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB784C080)  /*@bfbba@*/
#define BT06_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB784C082)  /*@bfbba@*/
#define BT06_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB784C084)  /*@bfbba@*/
#define BT06_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB784C086)  /*@bfbba@*/
#define BT06_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB784C087)  /*@bfbba@*/

#define BT07_PWC_STC	(BT07_PWC.unSTC.u8Register)  /*@rg@*/
#define BT07_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB784E080)  /*@bfbba@*/
#define BT07_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB784E082)  /*@bfbba@*/
#define BT07_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB784E084)  /*@bfbba@*/
#define BT07_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB784E086)  /*@bfbba@*/
#define BT07_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB784E087)  /*@bfbba@*/

#define BT08_PWC_STC	(BT08_PWC.unSTC.u8Register)  /*@rg@*/
#define BT08_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7850080)  /*@bfbba@*/
#define BT08_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7850082)  /*@bfbba@*/
#define BT08_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7850084)  /*@bfbba@*/
#define BT08_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7850086)  /*@bfbba@*/
#define BT08_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7850087)  /*@bfbba@*/

#define BT09_PWC_STC	(BT09_PWC.unSTC.u8Register)  /*@rg@*/
#define BT09_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7852080)  /*@bfbba@*/
#define BT09_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7852082)  /*@bfbba@*/
#define BT09_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7852084)  /*@bfbba@*/
#define BT09_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7852086)  /*@bfbba@*/
#define BT09_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7852087)  /*@bfbba@*/

#define BT10_PWC_STC	(BT10_PWC.unSTC.u8Register)  /*@rg@*/
#define BT10_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7854080)  /*@bfbba@*/
#define BT10_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7854082)  /*@bfbba@*/
#define BT10_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7854084)  /*@bfbba@*/
#define BT10_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7854086)  /*@bfbba@*/
#define BT10_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7854087)  /*@bfbba@*/

#define BT11_PWC_STC	(BT11_PWC.unSTC.u8Register)  /*@rg@*/
#define BT11_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7856080)  /*@bfbba@*/
#define BT11_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7856082)  /*@bfbba@*/
#define BT11_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7856084)  /*@bfbba@*/
#define BT11_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7856086)  /*@bfbba@*/
#define BT11_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7856087)  /*@bfbba@*/

#define BT12_PWC_STC	(BT12_PWC.unSTC.u8Register)  /*@rg@*/
#define BT12_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C40080)  /*@bfbba@*/
#define BT12_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C40082)  /*@bfbba@*/
#define BT12_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C40084)  /*@bfbba@*/
#define BT12_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C40086)  /*@bfbba@*/
#define BT12_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C40087)  /*@bfbba@*/

#define BT13_PWC_STC	(BT13_PWC.unSTC.u8Register)  /*@rg@*/
#define BT13_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C42080)  /*@bfbba@*/
#define BT13_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C42082)  /*@bfbba@*/
#define BT13_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C42084)  /*@bfbba@*/
#define BT13_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C42086)  /*@bfbba@*/
#define BT13_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C42087)  /*@bfbba@*/

#define BT14_PWC_STC	(BT14_PWC.unSTC.u8Register)  /*@rg@*/
#define BT14_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C44080)  /*@bfbba@*/
#define BT14_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C44082)  /*@bfbba@*/
#define BT14_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C44084)  /*@bfbba@*/
#define BT14_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C44086)  /*@bfbba@*/
#define BT14_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C44087)  /*@bfbba@*/

#define BT15_PWC_STC	(BT15_PWC.unSTC.u8Register)  /*@rg@*/
#define BT15_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C46080)  /*@bfbba@*/
#define BT15_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C46082)  /*@bfbba@*/
#define BT15_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C46084)  /*@bfbba@*/
#define BT15_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C46086)  /*@bfbba@*/
#define BT15_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C46087)  /*@bfbba@*/

#define BT16_PWC_STC	(BT16_PWC.unSTC.u8Register)  /*@rg@*/
#define BT16_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C48080)  /*@bfbba@*/
#define BT16_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C48082)  /*@bfbba@*/
#define BT16_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C48084)  /*@bfbba@*/
#define BT16_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C48086)  /*@bfbba@*/
#define BT16_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C48087)  /*@bfbba@*/

#define BT17_PWC_STC	(BT17_PWC.unSTC.u8Register)  /*@rg@*/
#define BT17_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C4A080)  /*@bfbba@*/
#define BT17_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C4A082)  /*@bfbba@*/
#define BT17_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C4A084)  /*@bfbba@*/
#define BT17_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C4A086)  /*@bfbba@*/
#define BT17_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C4A087)  /*@bfbba@*/

#define BT18_PWC_STC	(BT18_PWC.unSTC.u8Register)  /*@rg@*/
#define BT18_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C4C080)  /*@bfbba@*/
#define BT18_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C4C082)  /*@bfbba@*/
#define BT18_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C4C084)  /*@bfbba@*/
#define BT18_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C4C086)  /*@bfbba@*/
#define BT18_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C4C087)  /*@bfbba@*/

#define BT19_PWC_STC	(BT19_PWC.unSTC.u8Register)  /*@rg@*/
#define BT19_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C4E080)  /*@bfbba@*/
#define BT19_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C4E082)  /*@bfbba@*/
#define BT19_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C4E084)  /*@bfbba@*/
#define BT19_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C4E086)  /*@bfbba@*/
#define BT19_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C4E087)  /*@bfbba@*/

#define BT20_PWC_STC	(BT20_PWC.unSTC.u8Register)  /*@rg@*/
#define BT20_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C50080)  /*@bfbba@*/
#define BT20_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C50082)  /*@bfbba@*/
#define BT20_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C50084)  /*@bfbba@*/
#define BT20_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C50086)  /*@bfbba@*/
#define BT20_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C50087)  /*@bfbba@*/

#define BT21_PWC_STC	(BT21_PWC.unSTC.u8Register)  /*@rg@*/
#define BT21_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C52080)  /*@bfbba@*/
#define BT21_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C52082)  /*@bfbba@*/
#define BT21_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C52084)  /*@bfbba@*/
#define BT21_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C52086)  /*@bfbba@*/
#define BT21_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C52087)  /*@bfbba@*/

#define BT22_PWC_STC	(BT22_PWC.unSTC.u8Register)  /*@rg@*/
#define BT22_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C54080)  /*@bfbba@*/
#define BT22_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C54082)  /*@bfbba@*/
#define BT22_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C54084)  /*@bfbba@*/
#define BT22_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C54086)  /*@bfbba@*/
#define BT22_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C54087)  /*@bfbba@*/

#define BT23_PWC_STC	(BT23_PWC.unSTC.u8Register)  /*@rg@*/
#define BT23_PWC_STC_OVIR	(*(volatile uint_io8_t*)0xB7C56080)  /*@bfbba@*/
#define BT23_PWC_STC_EDIR	(*(volatile uint_io8_t*)0xB7C56082)  /*@bfbba@*/
#define BT23_PWC_STC_OVIE	(*(volatile uint_io8_t*)0xB7C56084)  /*@bfbba@*/
#define BT23_PWC_STC_EDIE	(*(volatile uint_io8_t*)0xB7C56086)  /*@bfbba@*/
#define BT23_PWC_STC_ERR	(*(volatile uint_io8_t*)0xB7C56087)  /*@bfbba@*/

typedef struct stc_btn_pwc_stc_field{
    uint_io8_t		u1OVIR:1;
    uint_io8_t		:1;
    uint_io8_t		u1EDIR:1;
    uint_io8_t		:1;
    uint_io8_t		u1OVIE:1;
    uint_io8_t		:1;
    uint_io8_t		u1EDIE:1;
    uint_io8_t		u1ERR:1;
}stc_btn_pwc_stc_field_t;

typedef union un_btn_pwc_stc{
    uint_io8_t		u8Register;
    stc_btn_pwc_stc_field_t		stcField;
}un_btn_pwc_stc_t;

/* TMCR2 */
#define BT00_PWC_TMCR2	(BT00_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT00_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7840088)  /*@bfbba@*/

#define BT01_PWC_TMCR2	(BT01_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT01_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7842088)  /*@bfbba@*/

#define BT02_PWC_TMCR2	(BT02_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT02_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7844088)  /*@bfbba@*/

#define BT03_PWC_TMCR2	(BT03_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT03_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7846088)  /*@bfbba@*/

#define BT04_PWC_TMCR2	(BT04_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT04_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7848088)  /*@bfbba@*/

#define BT05_PWC_TMCR2	(BT05_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT05_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784A088)  /*@bfbba@*/

#define BT06_PWC_TMCR2	(BT06_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT06_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784C088)  /*@bfbba@*/

#define BT07_PWC_TMCR2	(BT07_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT07_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784E088)  /*@bfbba@*/

#define BT08_PWC_TMCR2	(BT08_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT08_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7850088)  /*@bfbba@*/

#define BT09_PWC_TMCR2	(BT09_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT09_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7852088)  /*@bfbba@*/

#define BT10_PWC_TMCR2	(BT10_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT10_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7854088)  /*@bfbba@*/

#define BT11_PWC_TMCR2	(BT11_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT11_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7856088)  /*@bfbba@*/

#define BT12_PWC_TMCR2	(BT12_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT12_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C40088)  /*@bfbba@*/

#define BT13_PWC_TMCR2	(BT13_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT13_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C42088)  /*@bfbba@*/

#define BT14_PWC_TMCR2	(BT14_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT14_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C44088)  /*@bfbba@*/

#define BT15_PWC_TMCR2	(BT15_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT15_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C46088)  /*@bfbba@*/

#define BT16_PWC_TMCR2	(BT16_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT16_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C48088)  /*@bfbba@*/

#define BT17_PWC_TMCR2	(BT17_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT17_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4A088)  /*@bfbba@*/

#define BT18_PWC_TMCR2	(BT18_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT18_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4C088)  /*@bfbba@*/

#define BT19_PWC_TMCR2	(BT19_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT19_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4E088)  /*@bfbba@*/

#define BT20_PWC_TMCR2	(BT20_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT20_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C50088)  /*@bfbba@*/

#define BT21_PWC_TMCR2	(BT21_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT21_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C52088)  /*@bfbba@*/

#define BT22_PWC_TMCR2	(BT22_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT22_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C54088)  /*@bfbba@*/

#define BT23_PWC_TMCR2	(BT23_PWC.unTMCR2.u8Register)  /*@rg@*/
#define BT23_PWC_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C56088)  /*@bfbba@*/

typedef struct stc_btn_pwc_tmcr2_field{
    uint_io8_t		u1CKS3:1;
    uint_io8_t		:7;
}stc_btn_pwc_tmcr2_field_t;

typedef union un_btn_pwc_tmcr2{
    uint_io8_t		u8Register;
    stc_btn_pwc_tmcr2_field_t		stcField;
}un_btn_pwc_tmcr2_t;

/* STCC */
#define BT00_PWC_STCC	(BT00_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT00_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78400A0)  /*@bfbba@*/
#define BT00_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78400A4)  /*@bfbba@*/
#define BT00_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78400A6)  /*@bfbba@*/

#define BT01_PWC_STCC	(BT01_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT01_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78420A0)  /*@bfbba@*/
#define BT01_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78420A4)  /*@bfbba@*/
#define BT01_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78420A6)  /*@bfbba@*/

#define BT02_PWC_STCC	(BT02_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT02_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78440A0)  /*@bfbba@*/
#define BT02_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78440A4)  /*@bfbba@*/
#define BT02_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78440A6)  /*@bfbba@*/

#define BT03_PWC_STCC	(BT03_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT03_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78460A0)  /*@bfbba@*/
#define BT03_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78460A4)  /*@bfbba@*/
#define BT03_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78460A6)  /*@bfbba@*/

#define BT04_PWC_STCC	(BT04_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT04_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78480A0)  /*@bfbba@*/
#define BT04_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78480A4)  /*@bfbba@*/
#define BT04_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78480A6)  /*@bfbba@*/

#define BT05_PWC_STCC	(BT05_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT05_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB784A0A0)  /*@bfbba@*/
#define BT05_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB784A0A4)  /*@bfbba@*/
#define BT05_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB784A0A6)  /*@bfbba@*/

#define BT06_PWC_STCC	(BT06_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT06_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB784C0A0)  /*@bfbba@*/
#define BT06_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB784C0A4)  /*@bfbba@*/
#define BT06_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB784C0A6)  /*@bfbba@*/

#define BT07_PWC_STCC	(BT07_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT07_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB784E0A0)  /*@bfbba@*/
#define BT07_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB784E0A4)  /*@bfbba@*/
#define BT07_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB784E0A6)  /*@bfbba@*/

#define BT08_PWC_STCC	(BT08_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT08_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78500A0)  /*@bfbba@*/
#define BT08_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78500A4)  /*@bfbba@*/
#define BT08_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78500A6)  /*@bfbba@*/

#define BT09_PWC_STCC	(BT09_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT09_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78520A0)  /*@bfbba@*/
#define BT09_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78520A4)  /*@bfbba@*/
#define BT09_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78520A6)  /*@bfbba@*/

#define BT10_PWC_STCC	(BT10_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT10_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78540A0)  /*@bfbba@*/
#define BT10_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78540A4)  /*@bfbba@*/
#define BT10_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78540A6)  /*@bfbba@*/

#define BT11_PWC_STCC	(BT11_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT11_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB78560A0)  /*@bfbba@*/
#define BT11_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB78560A4)  /*@bfbba@*/
#define BT11_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB78560A6)  /*@bfbba@*/

#define BT12_PWC_STCC	(BT12_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT12_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C400A0)  /*@bfbba@*/
#define BT12_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C400A4)  /*@bfbba@*/
#define BT12_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C400A6)  /*@bfbba@*/

#define BT13_PWC_STCC	(BT13_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT13_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C420A0)  /*@bfbba@*/
#define BT13_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C420A4)  /*@bfbba@*/
#define BT13_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C420A6)  /*@bfbba@*/

#define BT14_PWC_STCC	(BT14_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT14_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C440A0)  /*@bfbba@*/
#define BT14_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C440A4)  /*@bfbba@*/
#define BT14_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C440A6)  /*@bfbba@*/

#define BT15_PWC_STCC	(BT15_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT15_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C460A0)  /*@bfbba@*/
#define BT15_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C460A4)  /*@bfbba@*/
#define BT15_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C460A6)  /*@bfbba@*/

#define BT16_PWC_STCC	(BT16_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT16_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C480A0)  /*@bfbba@*/
#define BT16_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C480A4)  /*@bfbba@*/
#define BT16_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C480A6)  /*@bfbba@*/

#define BT17_PWC_STCC	(BT17_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT17_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C4A0A0)  /*@bfbba@*/
#define BT17_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C4A0A4)  /*@bfbba@*/
#define BT17_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C4A0A6)  /*@bfbba@*/

#define BT18_PWC_STCC	(BT18_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT18_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C4C0A0)  /*@bfbba@*/
#define BT18_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C4C0A4)  /*@bfbba@*/
#define BT18_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C4C0A6)  /*@bfbba@*/

#define BT19_PWC_STCC	(BT19_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT19_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C4E0A0)  /*@bfbba@*/
#define BT19_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C4E0A4)  /*@bfbba@*/
#define BT19_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C4E0A6)  /*@bfbba@*/

#define BT20_PWC_STCC	(BT20_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT20_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C500A0)  /*@bfbba@*/
#define BT20_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C500A4)  /*@bfbba@*/
#define BT20_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C500A6)  /*@bfbba@*/

#define BT21_PWC_STCC	(BT21_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT21_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C520A0)  /*@bfbba@*/
#define BT21_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C520A4)  /*@bfbba@*/
#define BT21_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C520A6)  /*@bfbba@*/

#define BT22_PWC_STCC	(BT22_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT22_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C540A0)  /*@bfbba@*/
#define BT22_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C540A4)  /*@bfbba@*/
#define BT22_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C540A6)  /*@bfbba@*/

#define BT23_PWC_STCC	(BT23_PWC.unSTCC.u8Register)  /*@rg@*/
#define BT23_PWC_STCC_OVIRC	(*(volatile uint_io8_t*)0xB7C560A0)  /*@bfbba@*/
#define BT23_PWC_STCC_OVIEC	(*(volatile uint_io8_t*)0xB7C560A4)  /*@bfbba@*/
#define BT23_PWC_STCC_EDIEC	(*(volatile uint_io8_t*)0xB7C560A6)  /*@bfbba@*/

typedef struct stc_btn_pwc_stcc_field{
    uint_io8_t		u1OVIRC:1;
    uint_io8_t		:3;
    uint_io8_t		u1OVIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1EDIEC:1;
    uint_io8_t		:1;
}stc_btn_pwc_stcc_field_t;

typedef union un_btn_pwc_stcc{
    uint_io8_t		u8Register;
    stc_btn_pwc_stcc_field_t		stcField;
}un_btn_pwc_stcc_t;

/* STCS */
#define BT00_PWC_STCS	(BT00_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT00_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78400C4)  /*@bfbba@*/
#define BT00_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78400C6)  /*@bfbba@*/

#define BT01_PWC_STCS	(BT01_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT01_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78420C4)  /*@bfbba@*/
#define BT01_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78420C6)  /*@bfbba@*/

#define BT02_PWC_STCS	(BT02_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT02_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78440C4)  /*@bfbba@*/
#define BT02_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78440C6)  /*@bfbba@*/

#define BT03_PWC_STCS	(BT03_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT03_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78460C4)  /*@bfbba@*/
#define BT03_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78460C6)  /*@bfbba@*/

#define BT04_PWC_STCS	(BT04_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT04_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78480C4)  /*@bfbba@*/
#define BT04_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78480C6)  /*@bfbba@*/

#define BT05_PWC_STCS	(BT05_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT05_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB784A0C4)  /*@bfbba@*/
#define BT05_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB784A0C6)  /*@bfbba@*/

#define BT06_PWC_STCS	(BT06_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT06_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB784C0C4)  /*@bfbba@*/
#define BT06_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB784C0C6)  /*@bfbba@*/

#define BT07_PWC_STCS	(BT07_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT07_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB784E0C4)  /*@bfbba@*/
#define BT07_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB784E0C6)  /*@bfbba@*/

#define BT08_PWC_STCS	(BT08_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT08_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78500C4)  /*@bfbba@*/
#define BT08_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78500C6)  /*@bfbba@*/

#define BT09_PWC_STCS	(BT09_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT09_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78520C4)  /*@bfbba@*/
#define BT09_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78520C6)  /*@bfbba@*/

#define BT10_PWC_STCS	(BT10_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT10_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78540C4)  /*@bfbba@*/
#define BT10_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78540C6)  /*@bfbba@*/

#define BT11_PWC_STCS	(BT11_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT11_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB78560C4)  /*@bfbba@*/
#define BT11_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB78560C6)  /*@bfbba@*/

#define BT12_PWC_STCS	(BT12_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT12_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C400C4)  /*@bfbba@*/
#define BT12_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C400C6)  /*@bfbba@*/

#define BT13_PWC_STCS	(BT13_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT13_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C420C4)  /*@bfbba@*/
#define BT13_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C420C6)  /*@bfbba@*/

#define BT14_PWC_STCS	(BT14_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT14_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C440C4)  /*@bfbba@*/
#define BT14_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C440C6)  /*@bfbba@*/

#define BT15_PWC_STCS	(BT15_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT15_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C460C4)  /*@bfbba@*/
#define BT15_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C460C6)  /*@bfbba@*/

#define BT16_PWC_STCS	(BT16_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT16_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C480C4)  /*@bfbba@*/
#define BT16_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C480C6)  /*@bfbba@*/

#define BT17_PWC_STCS	(BT17_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT17_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C4A0C4)  /*@bfbba@*/
#define BT17_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C4A0C6)  /*@bfbba@*/

#define BT18_PWC_STCS	(BT18_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT18_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C4C0C4)  /*@bfbba@*/
#define BT18_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C4C0C6)  /*@bfbba@*/

#define BT19_PWC_STCS	(BT19_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT19_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C4E0C4)  /*@bfbba@*/
#define BT19_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C4E0C6)  /*@bfbba@*/

#define BT20_PWC_STCS	(BT20_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT20_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C500C4)  /*@bfbba@*/
#define BT20_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C500C6)  /*@bfbba@*/

#define BT21_PWC_STCS	(BT21_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT21_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C520C4)  /*@bfbba@*/
#define BT21_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C520C6)  /*@bfbba@*/

#define BT22_PWC_STCS	(BT22_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT22_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C540C4)  /*@bfbba@*/
#define BT22_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C540C6)  /*@bfbba@*/

#define BT23_PWC_STCS	(BT23_PWC.unSTCS.u8Register)  /*@rg@*/
#define BT23_PWC_STCS_OVIES	(*(volatile uint_io8_t*)0xB7C560C4)  /*@bfbba@*/
#define BT23_PWC_STCS_EDIES	(*(volatile uint_io8_t*)0xB7C560C6)  /*@bfbba@*/

typedef struct stc_btn_pwc_stcs_field{
    uint_io8_t		:4;
    uint_io8_t		u1OVIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1EDIES:1;
    uint_io8_t		:1;
}stc_btn_pwc_stcs_field_t;

typedef union un_btn_pwc_stcs{
    uint_io8_t		u8Register;
    stc_btn_pwc_stcs_field_t		stcField;
}un_btn_pwc_stcs_t;


typedef struct stc_btn_pwc{
    uint_io8_t	au8Reserved0[4];	/* 0x00000000 */
    un_btn_pwc_dtbf_t	unDTBF;	/* 0x00000004 */
    uint_io8_t	au8Reserved1[6];	/* 0x00000006 */
    un_btn_pwc_tmcr_t	unTMCR;	/* 0x0000000C */
    uint_io8_t	au8Reserved2[2];	/* 0x0000000E */
    un_btn_pwc_stc_t	unSTC;	/* 0x00000010 */
    un_btn_pwc_tmcr2_t	unTMCR2;	/* 0x00000011 */
    uint_io8_t	au8Reserved3[2];	/* 0x00000012 */
    un_btn_pwc_stcc_t	unSTCC;	/* 0x00000014 */
    uint_io8_t	au8Reserved4[3];	/* 0x00000015 */
    un_btn_pwc_stcs_t	unSTCS;	/* 0x00000018 */
    uint_io8_t	au8Reserved5[23];	/* 0x00000019 */
}stc_btn_pwc_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_btn_pwc_t	stcBT_PWC[24];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 48(0x30) bytes */


#endif /* __S6J3200_BT_PWC_H */
