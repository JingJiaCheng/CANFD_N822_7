/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_BT_PWM_H
#define __S6J3200_BT_PWM_H

#include "s6j3200io_basetypes.h"

/* BT[00-23]_PWM base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT00_PWM	stcBT_PWM[0]
#define BT01_PWM	stcBT_PWM[1]
#define BT02_PWM	stcBT_PWM[2]
#define BT03_PWM	stcBT_PWM[3]
#define BT04_PWM	stcBT_PWM[4]
#define BT05_PWM	stcBT_PWM[5]
#define BT06_PWM	stcBT_PWM[6]
#define BT07_PWM	stcBT_PWM[7]
#define BT08_PWM	stcBT_PWM[8]
#define BT09_PWM	stcBT_PWM[9]
#define BT10_PWM	stcBT_PWM[10]
#define BT11_PWM	stcBT_PWM[11]
#define BT12_PWM	stcBT_PWM[12]
#define BT13_PWM	stcBT_PWM[13]
#define BT14_PWM	stcBT_PWM[14]
#define BT15_PWM	stcBT_PWM[15]
#define BT16_PWM	stcBT_PWM[16]
#define BT17_PWM	stcBT_PWM[17]
#define BT18_PWM	stcBT_PWM[18]
#define BT19_PWM	stcBT_PWM[19]
#define BT20_PWM	stcBT_PWM[20]
#define BT21_PWM	stcBT_PWM[21]
#define BT22_PWM	stcBT_PWM[22]
#define BT23_PWM	stcBT_PWM[23]
#else /* __IO_DEFINE */
#define BT00_PWM	(*((volatile stc_btn_pwm_t*)0xB4808000))
#define BT01_PWM	(*((volatile stc_btn_pwm_t*)0xB4808400))
#define BT02_PWM	(*((volatile stc_btn_pwm_t*)0xB4808800))
#define BT03_PWM	(*((volatile stc_btn_pwm_t*)0xB4808C00))
#define BT04_PWM	(*((volatile stc_btn_pwm_t*)0xB4809000))
#define BT05_PWM	(*((volatile stc_btn_pwm_t*)0xB4809400))
#define BT06_PWM	(*((volatile stc_btn_pwm_t*)0xB4809800))
#define BT07_PWM	(*((volatile stc_btn_pwm_t*)0xB4809C00))
#define BT08_PWM	(*((volatile stc_btn_pwm_t*)0xB480A000))
#define BT09_PWM	(*((volatile stc_btn_pwm_t*)0xB480A400))
#define BT10_PWM	(*((volatile stc_btn_pwm_t*)0xB480A800))
#define BT11_PWM	(*((volatile stc_btn_pwm_t*)0xB480AC00))
#define BT12_PWM	(*((volatile stc_btn_pwm_t*)0xB4888000))
#define BT13_PWM	(*((volatile stc_btn_pwm_t*)0xB4888400))
#define BT14_PWM	(*((volatile stc_btn_pwm_t*)0xB4888800))
#define BT15_PWM	(*((volatile stc_btn_pwm_t*)0xB4888C00))
#define BT16_PWM	(*((volatile stc_btn_pwm_t*)0xB4889000))
#define BT17_PWM	(*((volatile stc_btn_pwm_t*)0xB4889400))
#define BT18_PWM	(*((volatile stc_btn_pwm_t*)0xB4889800))
#define BT19_PWM	(*((volatile stc_btn_pwm_t*)0xB4889C00))
#define BT20_PWM	(*((volatile stc_btn_pwm_t*)0xB488A000))
#define BT21_PWM	(*((volatile stc_btn_pwm_t*)0xB488A400))
#define BT22_PWM	(*((volatile stc_btn_pwm_t*)0xB488A800))
#define BT23_PWM	(*((volatile stc_btn_pwm_t*)0xB488AC00))
#endif /* __IO_DEFINE */

/* PCSR */
#define BT00_PWM_PCSR	(BT00_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT00_PWM_PCSR_PCSR	BT00_PWM_PCSR  /*@bfrg@*/

#define BT01_PWM_PCSR	(BT01_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT01_PWM_PCSR_PCSR	BT01_PWM_PCSR  /*@bfrg@*/

#define BT02_PWM_PCSR	(BT02_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT02_PWM_PCSR_PCSR	BT02_PWM_PCSR  /*@bfrg@*/

#define BT03_PWM_PCSR	(BT03_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT03_PWM_PCSR_PCSR	BT03_PWM_PCSR  /*@bfrg@*/

#define BT04_PWM_PCSR	(BT04_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT04_PWM_PCSR_PCSR	BT04_PWM_PCSR  /*@bfrg@*/

#define BT05_PWM_PCSR	(BT05_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT05_PWM_PCSR_PCSR	BT05_PWM_PCSR  /*@bfrg@*/

#define BT06_PWM_PCSR	(BT06_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT06_PWM_PCSR_PCSR	BT06_PWM_PCSR  /*@bfrg@*/

#define BT07_PWM_PCSR	(BT07_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT07_PWM_PCSR_PCSR	BT07_PWM_PCSR  /*@bfrg@*/

#define BT08_PWM_PCSR	(BT08_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT08_PWM_PCSR_PCSR	BT08_PWM_PCSR  /*@bfrg@*/

#define BT09_PWM_PCSR	(BT09_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT09_PWM_PCSR_PCSR	BT09_PWM_PCSR  /*@bfrg@*/

#define BT10_PWM_PCSR	(BT10_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT10_PWM_PCSR_PCSR	BT10_PWM_PCSR  /*@bfrg@*/

#define BT11_PWM_PCSR	(BT11_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT11_PWM_PCSR_PCSR	BT11_PWM_PCSR  /*@bfrg@*/

#define BT12_PWM_PCSR	(BT12_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT12_PWM_PCSR_PCSR	BT12_PWM_PCSR  /*@bfrg@*/

#define BT13_PWM_PCSR	(BT13_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT13_PWM_PCSR_PCSR	BT13_PWM_PCSR  /*@bfrg@*/

#define BT14_PWM_PCSR	(BT14_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT14_PWM_PCSR_PCSR	BT14_PWM_PCSR  /*@bfrg@*/

#define BT15_PWM_PCSR	(BT15_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT15_PWM_PCSR_PCSR	BT15_PWM_PCSR  /*@bfrg@*/

#define BT16_PWM_PCSR	(BT16_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT16_PWM_PCSR_PCSR	BT16_PWM_PCSR  /*@bfrg@*/

#define BT17_PWM_PCSR	(BT17_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT17_PWM_PCSR_PCSR	BT17_PWM_PCSR  /*@bfrg@*/

#define BT18_PWM_PCSR	(BT18_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT18_PWM_PCSR_PCSR	BT18_PWM_PCSR  /*@bfrg@*/

#define BT19_PWM_PCSR	(BT19_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT19_PWM_PCSR_PCSR	BT19_PWM_PCSR  /*@bfrg@*/

#define BT20_PWM_PCSR	(BT20_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT20_PWM_PCSR_PCSR	BT20_PWM_PCSR  /*@bfrg@*/

#define BT21_PWM_PCSR	(BT21_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT21_PWM_PCSR_PCSR	BT21_PWM_PCSR  /*@bfrg@*/

#define BT22_PWM_PCSR	(BT22_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT22_PWM_PCSR_PCSR	BT22_PWM_PCSR  /*@bfrg@*/

#define BT23_PWM_PCSR	(BT23_PWM.unPCSR.u16Register)  /*@rg@*/
#define BT23_PWM_PCSR_PCSR	BT23_PWM_PCSR  /*@bfrg@*/

typedef union un_btn_pwm_pcsr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_pwm_pcsr_t;

/* PDUT */
#define BT00_PWM_PDUT	(BT00_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT00_PWM_PDUT_PDUT	BT00_PWM_PDUT  /*@bfrg@*/

#define BT01_PWM_PDUT	(BT01_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT01_PWM_PDUT_PDUT	BT01_PWM_PDUT  /*@bfrg@*/

#define BT02_PWM_PDUT	(BT02_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT02_PWM_PDUT_PDUT	BT02_PWM_PDUT  /*@bfrg@*/

#define BT03_PWM_PDUT	(BT03_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT03_PWM_PDUT_PDUT	BT03_PWM_PDUT  /*@bfrg@*/

#define BT04_PWM_PDUT	(BT04_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT04_PWM_PDUT_PDUT	BT04_PWM_PDUT  /*@bfrg@*/

#define BT05_PWM_PDUT	(BT05_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT05_PWM_PDUT_PDUT	BT05_PWM_PDUT  /*@bfrg@*/

#define BT06_PWM_PDUT	(BT06_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT06_PWM_PDUT_PDUT	BT06_PWM_PDUT  /*@bfrg@*/

#define BT07_PWM_PDUT	(BT07_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT07_PWM_PDUT_PDUT	BT07_PWM_PDUT  /*@bfrg@*/

#define BT08_PWM_PDUT	(BT08_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT08_PWM_PDUT_PDUT	BT08_PWM_PDUT  /*@bfrg@*/

#define BT09_PWM_PDUT	(BT09_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT09_PWM_PDUT_PDUT	BT09_PWM_PDUT  /*@bfrg@*/

#define BT10_PWM_PDUT	(BT10_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT10_PWM_PDUT_PDUT	BT10_PWM_PDUT  /*@bfrg@*/

#define BT11_PWM_PDUT	(BT11_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT11_PWM_PDUT_PDUT	BT11_PWM_PDUT  /*@bfrg@*/

#define BT12_PWM_PDUT	(BT12_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT12_PWM_PDUT_PDUT	BT12_PWM_PDUT  /*@bfrg@*/

#define BT13_PWM_PDUT	(BT13_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT13_PWM_PDUT_PDUT	BT13_PWM_PDUT  /*@bfrg@*/

#define BT14_PWM_PDUT	(BT14_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT14_PWM_PDUT_PDUT	BT14_PWM_PDUT  /*@bfrg@*/

#define BT15_PWM_PDUT	(BT15_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT15_PWM_PDUT_PDUT	BT15_PWM_PDUT  /*@bfrg@*/

#define BT16_PWM_PDUT	(BT16_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT16_PWM_PDUT_PDUT	BT16_PWM_PDUT  /*@bfrg@*/

#define BT17_PWM_PDUT	(BT17_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT17_PWM_PDUT_PDUT	BT17_PWM_PDUT  /*@bfrg@*/

#define BT18_PWM_PDUT	(BT18_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT18_PWM_PDUT_PDUT	BT18_PWM_PDUT  /*@bfrg@*/

#define BT19_PWM_PDUT	(BT19_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT19_PWM_PDUT_PDUT	BT19_PWM_PDUT  /*@bfrg@*/

#define BT20_PWM_PDUT	(BT20_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT20_PWM_PDUT_PDUT	BT20_PWM_PDUT  /*@bfrg@*/

#define BT21_PWM_PDUT	(BT21_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT21_PWM_PDUT_PDUT	BT21_PWM_PDUT  /*@bfrg@*/

#define BT22_PWM_PDUT	(BT22_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT22_PWM_PDUT_PDUT	BT22_PWM_PDUT  /*@bfrg@*/

#define BT23_PWM_PDUT	(BT23_PWM.unPDUT.u16Register)  /*@rg@*/
#define BT23_PWM_PDUT_PDUT	BT23_PWM_PDUT  /*@bfrg@*/

typedef union un_btn_pwm_pdut{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_pwm_pdut_t;

/* TMR */
#define BT00_PWM_TMR	(BT00_PWM.unTMR.u32Register)  /*@rg@*/
#define BT00_PWM_TMR_TMR	(BT00_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT01_PWM_TMR	(BT01_PWM.unTMR.u32Register)  /*@rg@*/
#define BT01_PWM_TMR_TMR	(BT01_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT02_PWM_TMR	(BT02_PWM.unTMR.u32Register)  /*@rg@*/
#define BT02_PWM_TMR_TMR	(BT02_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT03_PWM_TMR	(BT03_PWM.unTMR.u32Register)  /*@rg@*/
#define BT03_PWM_TMR_TMR	(BT03_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT04_PWM_TMR	(BT04_PWM.unTMR.u32Register)  /*@rg@*/
#define BT04_PWM_TMR_TMR	(BT04_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT05_PWM_TMR	(BT05_PWM.unTMR.u32Register)  /*@rg@*/
#define BT05_PWM_TMR_TMR	(BT05_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT06_PWM_TMR	(BT06_PWM.unTMR.u32Register)  /*@rg@*/
#define BT06_PWM_TMR_TMR	(BT06_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT07_PWM_TMR	(BT07_PWM.unTMR.u32Register)  /*@rg@*/
#define BT07_PWM_TMR_TMR	(BT07_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT08_PWM_TMR	(BT08_PWM.unTMR.u32Register)  /*@rg@*/
#define BT08_PWM_TMR_TMR	(BT08_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT09_PWM_TMR	(BT09_PWM.unTMR.u32Register)  /*@rg@*/
#define BT09_PWM_TMR_TMR	(BT09_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT10_PWM_TMR	(BT10_PWM.unTMR.u32Register)  /*@rg@*/
#define BT10_PWM_TMR_TMR	(BT10_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT11_PWM_TMR	(BT11_PWM.unTMR.u32Register)  /*@rg@*/
#define BT11_PWM_TMR_TMR	(BT11_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT12_PWM_TMR	(BT12_PWM.unTMR.u32Register)  /*@rg@*/
#define BT12_PWM_TMR_TMR	(BT12_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT13_PWM_TMR	(BT13_PWM.unTMR.u32Register)  /*@rg@*/
#define BT13_PWM_TMR_TMR	(BT13_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT14_PWM_TMR	(BT14_PWM.unTMR.u32Register)  /*@rg@*/
#define BT14_PWM_TMR_TMR	(BT14_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT15_PWM_TMR	(BT15_PWM.unTMR.u32Register)  /*@rg@*/
#define BT15_PWM_TMR_TMR	(BT15_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT16_PWM_TMR	(BT16_PWM.unTMR.u32Register)  /*@rg@*/
#define BT16_PWM_TMR_TMR	(BT16_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT17_PWM_TMR	(BT17_PWM.unTMR.u32Register)  /*@rg@*/
#define BT17_PWM_TMR_TMR	(BT17_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT18_PWM_TMR	(BT18_PWM.unTMR.u32Register)  /*@rg@*/
#define BT18_PWM_TMR_TMR	(BT18_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT19_PWM_TMR	(BT19_PWM.unTMR.u32Register)  /*@rg@*/
#define BT19_PWM_TMR_TMR	(BT19_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT20_PWM_TMR	(BT20_PWM.unTMR.u32Register)  /*@rg@*/
#define BT20_PWM_TMR_TMR	(BT20_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT21_PWM_TMR	(BT21_PWM.unTMR.u32Register)  /*@rg@*/
#define BT21_PWM_TMR_TMR	(BT21_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT22_PWM_TMR	(BT22_PWM.unTMR.u32Register)  /*@rg@*/
#define BT22_PWM_TMR_TMR	(BT22_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

#define BT23_PWM_TMR	(BT23_PWM.unTMR.u32Register)  /*@rg@*/
#define BT23_PWM_TMR_TMR	(BT23_PWM.unTMR.stcField.u17TMR)  /*@bf@*/

typedef struct stc_btn_pwm_tmr_field{
    uint_io32_t		u17TMR:17;
    uint_io32_t		:15;
}stc_btn_pwm_tmr_field_t;

typedef union un_btn_pwm_tmr{
    uint_io32_t		u32Register;
    stc_btn_pwm_tmr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_btn_pwm_tmr_t;

/* TMCR */
#define BT00_PWM_TMCR	(BT00_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT00_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7840060)  /*@bfbba@*/
#define BT00_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7840061)  /*@bfbba@*/
#define BT00_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7840062)  /*@bfbba@*/
#define BT00_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7840063)  /*@bfbba@*/
#define BT00_PWM_TMCR_FMD	(BT00_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT00_PWM_TMCR_EGS	(BT00_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT00_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784006A)  /*@bfbba@*/
#define BT00_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784006B)  /*@bfbba@*/
#define BT00_PWM_TMCR_CKS2_0	(BT00_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT01_PWM_TMCR	(BT01_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT01_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7842060)  /*@bfbba@*/
#define BT01_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7842061)  /*@bfbba@*/
#define BT01_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7842062)  /*@bfbba@*/
#define BT01_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7842063)  /*@bfbba@*/
#define BT01_PWM_TMCR_FMD	(BT01_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT01_PWM_TMCR_EGS	(BT01_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT01_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784206A)  /*@bfbba@*/
#define BT01_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784206B)  /*@bfbba@*/
#define BT01_PWM_TMCR_CKS2_0	(BT01_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT02_PWM_TMCR	(BT02_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT02_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7844060)  /*@bfbba@*/
#define BT02_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7844061)  /*@bfbba@*/
#define BT02_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7844062)  /*@bfbba@*/
#define BT02_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7844063)  /*@bfbba@*/
#define BT02_PWM_TMCR_FMD	(BT02_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT02_PWM_TMCR_EGS	(BT02_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT02_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784406A)  /*@bfbba@*/
#define BT02_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784406B)  /*@bfbba@*/
#define BT02_PWM_TMCR_CKS2_0	(BT02_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT03_PWM_TMCR	(BT03_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT03_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7846060)  /*@bfbba@*/
#define BT03_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7846061)  /*@bfbba@*/
#define BT03_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7846062)  /*@bfbba@*/
#define BT03_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7846063)  /*@bfbba@*/
#define BT03_PWM_TMCR_FMD	(BT03_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT03_PWM_TMCR_EGS	(BT03_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT03_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784606A)  /*@bfbba@*/
#define BT03_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784606B)  /*@bfbba@*/
#define BT03_PWM_TMCR_CKS2_0	(BT03_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT04_PWM_TMCR	(BT04_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT04_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7848060)  /*@bfbba@*/
#define BT04_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7848061)  /*@bfbba@*/
#define BT04_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7848062)  /*@bfbba@*/
#define BT04_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7848063)  /*@bfbba@*/
#define BT04_PWM_TMCR_FMD	(BT04_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT04_PWM_TMCR_EGS	(BT04_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT04_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784806A)  /*@bfbba@*/
#define BT04_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784806B)  /*@bfbba@*/
#define BT04_PWM_TMCR_CKS2_0	(BT04_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT05_PWM_TMCR	(BT05_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT05_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB784A060)  /*@bfbba@*/
#define BT05_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784A061)  /*@bfbba@*/
#define BT05_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784A062)  /*@bfbba@*/
#define BT05_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784A063)  /*@bfbba@*/
#define BT05_PWM_TMCR_FMD	(BT05_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT05_PWM_TMCR_EGS	(BT05_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT05_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784A06A)  /*@bfbba@*/
#define BT05_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784A06B)  /*@bfbba@*/
#define BT05_PWM_TMCR_CKS2_0	(BT05_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT06_PWM_TMCR	(BT06_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT06_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB784C060)  /*@bfbba@*/
#define BT06_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784C061)  /*@bfbba@*/
#define BT06_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784C062)  /*@bfbba@*/
#define BT06_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784C063)  /*@bfbba@*/
#define BT06_PWM_TMCR_FMD	(BT06_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT06_PWM_TMCR_EGS	(BT06_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT06_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784C06A)  /*@bfbba@*/
#define BT06_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784C06B)  /*@bfbba@*/
#define BT06_PWM_TMCR_CKS2_0	(BT06_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT07_PWM_TMCR	(BT07_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT07_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB784E060)  /*@bfbba@*/
#define BT07_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB784E061)  /*@bfbba@*/
#define BT07_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB784E062)  /*@bfbba@*/
#define BT07_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB784E063)  /*@bfbba@*/
#define BT07_PWM_TMCR_FMD	(BT07_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT07_PWM_TMCR_EGS	(BT07_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT07_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB784E06A)  /*@bfbba@*/
#define BT07_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB784E06B)  /*@bfbba@*/
#define BT07_PWM_TMCR_CKS2_0	(BT07_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT08_PWM_TMCR	(BT08_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT08_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7850060)  /*@bfbba@*/
#define BT08_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7850061)  /*@bfbba@*/
#define BT08_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7850062)  /*@bfbba@*/
#define BT08_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7850063)  /*@bfbba@*/
#define BT08_PWM_TMCR_FMD	(BT08_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT08_PWM_TMCR_EGS	(BT08_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT08_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB785006A)  /*@bfbba@*/
#define BT08_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB785006B)  /*@bfbba@*/
#define BT08_PWM_TMCR_CKS2_0	(BT08_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT09_PWM_TMCR	(BT09_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT09_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7852060)  /*@bfbba@*/
#define BT09_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7852061)  /*@bfbba@*/
#define BT09_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7852062)  /*@bfbba@*/
#define BT09_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7852063)  /*@bfbba@*/
#define BT09_PWM_TMCR_FMD	(BT09_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT09_PWM_TMCR_EGS	(BT09_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT09_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB785206A)  /*@bfbba@*/
#define BT09_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB785206B)  /*@bfbba@*/
#define BT09_PWM_TMCR_CKS2_0	(BT09_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT10_PWM_TMCR	(BT10_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT10_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7854060)  /*@bfbba@*/
#define BT10_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7854061)  /*@bfbba@*/
#define BT10_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7854062)  /*@bfbba@*/
#define BT10_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7854063)  /*@bfbba@*/
#define BT10_PWM_TMCR_FMD	(BT10_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT10_PWM_TMCR_EGS	(BT10_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT10_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB785406A)  /*@bfbba@*/
#define BT10_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB785406B)  /*@bfbba@*/
#define BT10_PWM_TMCR_CKS2_0	(BT10_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT11_PWM_TMCR	(BT11_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT11_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7856060)  /*@bfbba@*/
#define BT11_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7856061)  /*@bfbba@*/
#define BT11_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7856062)  /*@bfbba@*/
#define BT11_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7856063)  /*@bfbba@*/
#define BT11_PWM_TMCR_FMD	(BT11_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT11_PWM_TMCR_EGS	(BT11_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT11_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB785606A)  /*@bfbba@*/
#define BT11_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB785606B)  /*@bfbba@*/
#define BT11_PWM_TMCR_CKS2_0	(BT11_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT12_PWM_TMCR	(BT12_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT12_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C40060)  /*@bfbba@*/
#define BT12_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C40061)  /*@bfbba@*/
#define BT12_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C40062)  /*@bfbba@*/
#define BT12_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C40063)  /*@bfbba@*/
#define BT12_PWM_TMCR_FMD	(BT12_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT12_PWM_TMCR_EGS	(BT12_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT12_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4006A)  /*@bfbba@*/
#define BT12_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4006B)  /*@bfbba@*/
#define BT12_PWM_TMCR_CKS2_0	(BT12_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT13_PWM_TMCR	(BT13_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT13_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C42060)  /*@bfbba@*/
#define BT13_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C42061)  /*@bfbba@*/
#define BT13_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C42062)  /*@bfbba@*/
#define BT13_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C42063)  /*@bfbba@*/
#define BT13_PWM_TMCR_FMD	(BT13_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT13_PWM_TMCR_EGS	(BT13_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT13_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4206A)  /*@bfbba@*/
#define BT13_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4206B)  /*@bfbba@*/
#define BT13_PWM_TMCR_CKS2_0	(BT13_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT14_PWM_TMCR	(BT14_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT14_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C44060)  /*@bfbba@*/
#define BT14_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C44061)  /*@bfbba@*/
#define BT14_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C44062)  /*@bfbba@*/
#define BT14_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C44063)  /*@bfbba@*/
#define BT14_PWM_TMCR_FMD	(BT14_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT14_PWM_TMCR_EGS	(BT14_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT14_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4406A)  /*@bfbba@*/
#define BT14_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4406B)  /*@bfbba@*/
#define BT14_PWM_TMCR_CKS2_0	(BT14_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT15_PWM_TMCR	(BT15_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT15_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C46060)  /*@bfbba@*/
#define BT15_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C46061)  /*@bfbba@*/
#define BT15_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C46062)  /*@bfbba@*/
#define BT15_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C46063)  /*@bfbba@*/
#define BT15_PWM_TMCR_FMD	(BT15_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT15_PWM_TMCR_EGS	(BT15_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT15_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4606A)  /*@bfbba@*/
#define BT15_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4606B)  /*@bfbba@*/
#define BT15_PWM_TMCR_CKS2_0	(BT15_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT16_PWM_TMCR	(BT16_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT16_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C48060)  /*@bfbba@*/
#define BT16_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C48061)  /*@bfbba@*/
#define BT16_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C48062)  /*@bfbba@*/
#define BT16_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C48063)  /*@bfbba@*/
#define BT16_PWM_TMCR_FMD	(BT16_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT16_PWM_TMCR_EGS	(BT16_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT16_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4806A)  /*@bfbba@*/
#define BT16_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4806B)  /*@bfbba@*/
#define BT16_PWM_TMCR_CKS2_0	(BT16_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT17_PWM_TMCR	(BT17_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT17_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4A060)  /*@bfbba@*/
#define BT17_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4A061)  /*@bfbba@*/
#define BT17_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4A062)  /*@bfbba@*/
#define BT17_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4A063)  /*@bfbba@*/
#define BT17_PWM_TMCR_FMD	(BT17_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT17_PWM_TMCR_EGS	(BT17_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT17_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4A06A)  /*@bfbba@*/
#define BT17_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4A06B)  /*@bfbba@*/
#define BT17_PWM_TMCR_CKS2_0	(BT17_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT18_PWM_TMCR	(BT18_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT18_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4C060)  /*@bfbba@*/
#define BT18_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4C061)  /*@bfbba@*/
#define BT18_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4C062)  /*@bfbba@*/
#define BT18_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4C063)  /*@bfbba@*/
#define BT18_PWM_TMCR_FMD	(BT18_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT18_PWM_TMCR_EGS	(BT18_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT18_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4C06A)  /*@bfbba@*/
#define BT18_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4C06B)  /*@bfbba@*/
#define BT18_PWM_TMCR_CKS2_0	(BT18_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT19_PWM_TMCR	(BT19_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT19_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C4E060)  /*@bfbba@*/
#define BT19_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C4E061)  /*@bfbba@*/
#define BT19_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C4E062)  /*@bfbba@*/
#define BT19_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C4E063)  /*@bfbba@*/
#define BT19_PWM_TMCR_FMD	(BT19_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT19_PWM_TMCR_EGS	(BT19_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT19_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C4E06A)  /*@bfbba@*/
#define BT19_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C4E06B)  /*@bfbba@*/
#define BT19_PWM_TMCR_CKS2_0	(BT19_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT20_PWM_TMCR	(BT20_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT20_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C50060)  /*@bfbba@*/
#define BT20_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C50061)  /*@bfbba@*/
#define BT20_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C50062)  /*@bfbba@*/
#define BT20_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C50063)  /*@bfbba@*/
#define BT20_PWM_TMCR_FMD	(BT20_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT20_PWM_TMCR_EGS	(BT20_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT20_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C5006A)  /*@bfbba@*/
#define BT20_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C5006B)  /*@bfbba@*/
#define BT20_PWM_TMCR_CKS2_0	(BT20_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT21_PWM_TMCR	(BT21_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT21_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C52060)  /*@bfbba@*/
#define BT21_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C52061)  /*@bfbba@*/
#define BT21_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C52062)  /*@bfbba@*/
#define BT21_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C52063)  /*@bfbba@*/
#define BT21_PWM_TMCR_FMD	(BT21_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT21_PWM_TMCR_EGS	(BT21_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT21_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C5206A)  /*@bfbba@*/
#define BT21_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C5206B)  /*@bfbba@*/
#define BT21_PWM_TMCR_CKS2_0	(BT21_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT22_PWM_TMCR	(BT22_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT22_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C54060)  /*@bfbba@*/
#define BT22_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C54061)  /*@bfbba@*/
#define BT22_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C54062)  /*@bfbba@*/
#define BT22_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C54063)  /*@bfbba@*/
#define BT22_PWM_TMCR_FMD	(BT22_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT22_PWM_TMCR_EGS	(BT22_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT22_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C5406A)  /*@bfbba@*/
#define BT22_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C5406B)  /*@bfbba@*/
#define BT22_PWM_TMCR_CKS2_0	(BT22_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

#define BT23_PWM_TMCR	(BT23_PWM.unTMCR.u16Register)  /*@rg@*/
#define BT23_PWM_TMCR_STRG	(*(volatile uint_io8_t*)0xB7C56060)  /*@bfbba@*/
#define BT23_PWM_TMCR_CTEN	(*(volatile uint_io8_t*)0xB7C56061)  /*@bfbba@*/
#define BT23_PWM_TMCR_MDSE	(*(volatile uint_io8_t*)0xB7C56062)  /*@bfbba@*/
#define BT23_PWM_TMCR_OSEL	(*(volatile uint_io8_t*)0xB7C56063)  /*@bfbba@*/
#define BT23_PWM_TMCR_FMD	(BT23_PWM.unTMCR.stcField.u3FMD)  /*@bf@*/
#define BT23_PWM_TMCR_EGS	(BT23_PWM.unTMCR.stcField.u2EGS)  /*@bf@*/
#define BT23_PWM_TMCR_PMSK	(*(volatile uint_io8_t*)0xB7C5606A)  /*@bfbba@*/
#define BT23_PWM_TMCR_RTGEN	(*(volatile uint_io8_t*)0xB7C5606B)  /*@bfbba@*/
#define BT23_PWM_TMCR_CKS2_0	(BT23_PWM.unTMCR.stcField.u3CKS2_0)  /*@bf@*/

typedef struct stc_btn_pwm_tmcr_field{
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
}stc_btn_pwm_tmcr_field_t;

typedef union un_btn_pwm_tmcr{
    uint_io16_t		u16Register;
    stc_btn_pwm_tmcr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_btn_pwm_tmcr_t;

/* STC */
#define BT00_PWM_STC	(BT00_PWM.unSTC.u8Register)  /*@rg@*/
#define BT00_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7840080)  /*@bfbba@*/
#define BT00_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7840081)  /*@bfbba@*/
#define BT00_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7840082)  /*@bfbba@*/
#define BT00_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7840084)  /*@bfbba@*/
#define BT00_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7840085)  /*@bfbba@*/
#define BT00_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7840086)  /*@bfbba@*/

#define BT01_PWM_STC	(BT01_PWM.unSTC.u8Register)  /*@rg@*/
#define BT01_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7842080)  /*@bfbba@*/
#define BT01_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7842081)  /*@bfbba@*/
#define BT01_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7842082)  /*@bfbba@*/
#define BT01_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7842084)  /*@bfbba@*/
#define BT01_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7842085)  /*@bfbba@*/
#define BT01_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7842086)  /*@bfbba@*/

#define BT02_PWM_STC	(BT02_PWM.unSTC.u8Register)  /*@rg@*/
#define BT02_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7844080)  /*@bfbba@*/
#define BT02_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7844081)  /*@bfbba@*/
#define BT02_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7844082)  /*@bfbba@*/
#define BT02_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7844084)  /*@bfbba@*/
#define BT02_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7844085)  /*@bfbba@*/
#define BT02_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7844086)  /*@bfbba@*/

#define BT03_PWM_STC	(BT03_PWM.unSTC.u8Register)  /*@rg@*/
#define BT03_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7846080)  /*@bfbba@*/
#define BT03_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7846081)  /*@bfbba@*/
#define BT03_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7846082)  /*@bfbba@*/
#define BT03_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7846084)  /*@bfbba@*/
#define BT03_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7846085)  /*@bfbba@*/
#define BT03_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7846086)  /*@bfbba@*/

#define BT04_PWM_STC	(BT04_PWM.unSTC.u8Register)  /*@rg@*/
#define BT04_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7848080)  /*@bfbba@*/
#define BT04_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7848081)  /*@bfbba@*/
#define BT04_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7848082)  /*@bfbba@*/
#define BT04_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7848084)  /*@bfbba@*/
#define BT04_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7848085)  /*@bfbba@*/
#define BT04_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7848086)  /*@bfbba@*/

#define BT05_PWM_STC	(BT05_PWM.unSTC.u8Register)  /*@rg@*/
#define BT05_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB784A080)  /*@bfbba@*/
#define BT05_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB784A081)  /*@bfbba@*/
#define BT05_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB784A082)  /*@bfbba@*/
#define BT05_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB784A084)  /*@bfbba@*/
#define BT05_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB784A085)  /*@bfbba@*/
#define BT05_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB784A086)  /*@bfbba@*/

#define BT06_PWM_STC	(BT06_PWM.unSTC.u8Register)  /*@rg@*/
#define BT06_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB784C080)  /*@bfbba@*/
#define BT06_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB784C081)  /*@bfbba@*/
#define BT06_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB784C082)  /*@bfbba@*/
#define BT06_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB784C084)  /*@bfbba@*/
#define BT06_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB784C085)  /*@bfbba@*/
#define BT06_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB784C086)  /*@bfbba@*/

#define BT07_PWM_STC	(BT07_PWM.unSTC.u8Register)  /*@rg@*/
#define BT07_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB784E080)  /*@bfbba@*/
#define BT07_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB784E081)  /*@bfbba@*/
#define BT07_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB784E082)  /*@bfbba@*/
#define BT07_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB784E084)  /*@bfbba@*/
#define BT07_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB784E085)  /*@bfbba@*/
#define BT07_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB784E086)  /*@bfbba@*/

#define BT08_PWM_STC	(BT08_PWM.unSTC.u8Register)  /*@rg@*/
#define BT08_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7850080)  /*@bfbba@*/
#define BT08_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7850081)  /*@bfbba@*/
#define BT08_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7850082)  /*@bfbba@*/
#define BT08_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7850084)  /*@bfbba@*/
#define BT08_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7850085)  /*@bfbba@*/
#define BT08_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7850086)  /*@bfbba@*/

#define BT09_PWM_STC	(BT09_PWM.unSTC.u8Register)  /*@rg@*/
#define BT09_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7852080)  /*@bfbba@*/
#define BT09_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7852081)  /*@bfbba@*/
#define BT09_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7852082)  /*@bfbba@*/
#define BT09_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7852084)  /*@bfbba@*/
#define BT09_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7852085)  /*@bfbba@*/
#define BT09_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7852086)  /*@bfbba@*/

#define BT10_PWM_STC	(BT10_PWM.unSTC.u8Register)  /*@rg@*/
#define BT10_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7854080)  /*@bfbba@*/
#define BT10_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7854081)  /*@bfbba@*/
#define BT10_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7854082)  /*@bfbba@*/
#define BT10_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7854084)  /*@bfbba@*/
#define BT10_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7854085)  /*@bfbba@*/
#define BT10_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7854086)  /*@bfbba@*/

#define BT11_PWM_STC	(BT11_PWM.unSTC.u8Register)  /*@rg@*/
#define BT11_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7856080)  /*@bfbba@*/
#define BT11_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7856081)  /*@bfbba@*/
#define BT11_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7856082)  /*@bfbba@*/
#define BT11_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7856084)  /*@bfbba@*/
#define BT11_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7856085)  /*@bfbba@*/
#define BT11_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7856086)  /*@bfbba@*/

#define BT12_PWM_STC	(BT12_PWM.unSTC.u8Register)  /*@rg@*/
#define BT12_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C40080)  /*@bfbba@*/
#define BT12_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C40081)  /*@bfbba@*/
#define BT12_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C40082)  /*@bfbba@*/
#define BT12_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C40084)  /*@bfbba@*/
#define BT12_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C40085)  /*@bfbba@*/
#define BT12_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C40086)  /*@bfbba@*/

#define BT13_PWM_STC	(BT13_PWM.unSTC.u8Register)  /*@rg@*/
#define BT13_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C42080)  /*@bfbba@*/
#define BT13_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C42081)  /*@bfbba@*/
#define BT13_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C42082)  /*@bfbba@*/
#define BT13_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C42084)  /*@bfbba@*/
#define BT13_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C42085)  /*@bfbba@*/
#define BT13_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C42086)  /*@bfbba@*/

#define BT14_PWM_STC	(BT14_PWM.unSTC.u8Register)  /*@rg@*/
#define BT14_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C44080)  /*@bfbba@*/
#define BT14_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C44081)  /*@bfbba@*/
#define BT14_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C44082)  /*@bfbba@*/
#define BT14_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C44084)  /*@bfbba@*/
#define BT14_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C44085)  /*@bfbba@*/
#define BT14_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C44086)  /*@bfbba@*/

#define BT15_PWM_STC	(BT15_PWM.unSTC.u8Register)  /*@rg@*/
#define BT15_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C46080)  /*@bfbba@*/
#define BT15_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C46081)  /*@bfbba@*/
#define BT15_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C46082)  /*@bfbba@*/
#define BT15_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C46084)  /*@bfbba@*/
#define BT15_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C46085)  /*@bfbba@*/
#define BT15_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C46086)  /*@bfbba@*/

#define BT16_PWM_STC	(BT16_PWM.unSTC.u8Register)  /*@rg@*/
#define BT16_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C48080)  /*@bfbba@*/
#define BT16_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C48081)  /*@bfbba@*/
#define BT16_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C48082)  /*@bfbba@*/
#define BT16_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C48084)  /*@bfbba@*/
#define BT16_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C48085)  /*@bfbba@*/
#define BT16_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C48086)  /*@bfbba@*/

#define BT17_PWM_STC	(BT17_PWM.unSTC.u8Register)  /*@rg@*/
#define BT17_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4A080)  /*@bfbba@*/
#define BT17_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C4A081)  /*@bfbba@*/
#define BT17_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4A082)  /*@bfbba@*/
#define BT17_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4A084)  /*@bfbba@*/
#define BT17_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C4A085)  /*@bfbba@*/
#define BT17_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4A086)  /*@bfbba@*/

#define BT18_PWM_STC	(BT18_PWM.unSTC.u8Register)  /*@rg@*/
#define BT18_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4C080)  /*@bfbba@*/
#define BT18_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C4C081)  /*@bfbba@*/
#define BT18_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4C082)  /*@bfbba@*/
#define BT18_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4C084)  /*@bfbba@*/
#define BT18_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C4C085)  /*@bfbba@*/
#define BT18_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4C086)  /*@bfbba@*/

#define BT19_PWM_STC	(BT19_PWM.unSTC.u8Register)  /*@rg@*/
#define BT19_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C4E080)  /*@bfbba@*/
#define BT19_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C4E081)  /*@bfbba@*/
#define BT19_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C4E082)  /*@bfbba@*/
#define BT19_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C4E084)  /*@bfbba@*/
#define BT19_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C4E085)  /*@bfbba@*/
#define BT19_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C4E086)  /*@bfbba@*/

#define BT20_PWM_STC	(BT20_PWM.unSTC.u8Register)  /*@rg@*/
#define BT20_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C50080)  /*@bfbba@*/
#define BT20_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C50081)  /*@bfbba@*/
#define BT20_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C50082)  /*@bfbba@*/
#define BT20_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C50084)  /*@bfbba@*/
#define BT20_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C50085)  /*@bfbba@*/
#define BT20_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C50086)  /*@bfbba@*/

#define BT21_PWM_STC	(BT21_PWM.unSTC.u8Register)  /*@rg@*/
#define BT21_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C52080)  /*@bfbba@*/
#define BT21_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C52081)  /*@bfbba@*/
#define BT21_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C52082)  /*@bfbba@*/
#define BT21_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C52084)  /*@bfbba@*/
#define BT21_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C52085)  /*@bfbba@*/
#define BT21_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C52086)  /*@bfbba@*/

#define BT22_PWM_STC	(BT22_PWM.unSTC.u8Register)  /*@rg@*/
#define BT22_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C54080)  /*@bfbba@*/
#define BT22_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C54081)  /*@bfbba@*/
#define BT22_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C54082)  /*@bfbba@*/
#define BT22_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C54084)  /*@bfbba@*/
#define BT22_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C54085)  /*@bfbba@*/
#define BT22_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C54086)  /*@bfbba@*/

#define BT23_PWM_STC	(BT23_PWM.unSTC.u8Register)  /*@rg@*/
#define BT23_PWM_STC_UDIR	(*(volatile uint_io8_t*)0xB7C56080)  /*@bfbba@*/
#define BT23_PWM_STC_DTIR	(*(volatile uint_io8_t*)0xB7C56081)  /*@bfbba@*/
#define BT23_PWM_STC_TGIR	(*(volatile uint_io8_t*)0xB7C56082)  /*@bfbba@*/
#define BT23_PWM_STC_UDIE	(*(volatile uint_io8_t*)0xB7C56084)  /*@bfbba@*/
#define BT23_PWM_STC_DTIE	(*(volatile uint_io8_t*)0xB7C56085)  /*@bfbba@*/
#define BT23_PWM_STC_TGIE	(*(volatile uint_io8_t*)0xB7C56086)  /*@bfbba@*/

typedef struct stc_btn_pwm_stc_field{
    uint_io8_t		u1UDIR:1;
    uint_io8_t		u1DTIR:1;
    uint_io8_t		u1TGIR:1;
    uint_io8_t		:1;
    uint_io8_t		u1UDIE:1;
    uint_io8_t		u1DTIE:1;
    uint_io8_t		u1TGIE:1;
    uint_io8_t		:1;
}stc_btn_pwm_stc_field_t;

typedef union un_btn_pwm_stc{
    uint_io8_t		u8Register;
    stc_btn_pwm_stc_field_t		stcField;
}un_btn_pwm_stc_t;

/* TMCR2 */
#define BT00_PWM_TMCR2	(BT00_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT00_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7840088)  /*@bfbba@*/

#define BT01_PWM_TMCR2	(BT01_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT01_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7842088)  /*@bfbba@*/

#define BT02_PWM_TMCR2	(BT02_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT02_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7844088)  /*@bfbba@*/

#define BT03_PWM_TMCR2	(BT03_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT03_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7846088)  /*@bfbba@*/

#define BT04_PWM_TMCR2	(BT04_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT04_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7848088)  /*@bfbba@*/

#define BT05_PWM_TMCR2	(BT05_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT05_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784A088)  /*@bfbba@*/

#define BT06_PWM_TMCR2	(BT06_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT06_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784C088)  /*@bfbba@*/

#define BT07_PWM_TMCR2	(BT07_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT07_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB784E088)  /*@bfbba@*/

#define BT08_PWM_TMCR2	(BT08_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT08_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7850088)  /*@bfbba@*/

#define BT09_PWM_TMCR2	(BT09_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT09_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7852088)  /*@bfbba@*/

#define BT10_PWM_TMCR2	(BT10_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT10_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7854088)  /*@bfbba@*/

#define BT11_PWM_TMCR2	(BT11_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT11_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7856088)  /*@bfbba@*/

#define BT12_PWM_TMCR2	(BT12_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT12_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C40088)  /*@bfbba@*/

#define BT13_PWM_TMCR2	(BT13_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT13_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C42088)  /*@bfbba@*/

#define BT14_PWM_TMCR2	(BT14_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT14_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C44088)  /*@bfbba@*/

#define BT15_PWM_TMCR2	(BT15_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT15_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C46088)  /*@bfbba@*/

#define BT16_PWM_TMCR2	(BT16_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT16_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C48088)  /*@bfbba@*/

#define BT17_PWM_TMCR2	(BT17_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT17_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4A088)  /*@bfbba@*/

#define BT18_PWM_TMCR2	(BT18_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT18_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4C088)  /*@bfbba@*/

#define BT19_PWM_TMCR2	(BT19_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT19_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C4E088)  /*@bfbba@*/

#define BT20_PWM_TMCR2	(BT20_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT20_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C50088)  /*@bfbba@*/

#define BT21_PWM_TMCR2	(BT21_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT21_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C52088)  /*@bfbba@*/

#define BT22_PWM_TMCR2	(BT22_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT22_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C54088)  /*@bfbba@*/

#define BT23_PWM_TMCR2	(BT23_PWM.unTMCR2.u8Register)  /*@rg@*/
#define BT23_PWM_TMCR2_CKS3	(*(volatile uint_io8_t*)0xB7C56088)  /*@bfbba@*/

typedef struct stc_btn_pwm_tmcr2_field{
    uint_io8_t		u1CKS3:1;
    uint_io8_t		:7;
}stc_btn_pwm_tmcr2_field_t;

typedef union un_btn_pwm_tmcr2{
    uint_io8_t		u8Register;
    stc_btn_pwm_tmcr2_field_t		stcField;
}un_btn_pwm_tmcr2_t;

/* STCC */
#define BT00_PWM_STCC	(BT00_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT00_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78400A0)  /*@bfbba@*/
#define BT00_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78400A1)  /*@bfbba@*/
#define BT00_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78400A2)  /*@bfbba@*/
#define BT00_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78400A4)  /*@bfbba@*/
#define BT00_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78400A5)  /*@bfbba@*/
#define BT00_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78400A6)  /*@bfbba@*/

#define BT01_PWM_STCC	(BT01_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT01_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78420A0)  /*@bfbba@*/
#define BT01_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78420A1)  /*@bfbba@*/
#define BT01_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78420A2)  /*@bfbba@*/
#define BT01_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78420A4)  /*@bfbba@*/
#define BT01_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78420A5)  /*@bfbba@*/
#define BT01_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78420A6)  /*@bfbba@*/

#define BT02_PWM_STCC	(BT02_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT02_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78440A0)  /*@bfbba@*/
#define BT02_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78440A1)  /*@bfbba@*/
#define BT02_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78440A2)  /*@bfbba@*/
#define BT02_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78440A4)  /*@bfbba@*/
#define BT02_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78440A5)  /*@bfbba@*/
#define BT02_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78440A6)  /*@bfbba@*/

#define BT03_PWM_STCC	(BT03_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT03_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78460A0)  /*@bfbba@*/
#define BT03_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78460A1)  /*@bfbba@*/
#define BT03_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78460A2)  /*@bfbba@*/
#define BT03_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78460A4)  /*@bfbba@*/
#define BT03_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78460A5)  /*@bfbba@*/
#define BT03_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78460A6)  /*@bfbba@*/

#define BT04_PWM_STCC	(BT04_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT04_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78480A0)  /*@bfbba@*/
#define BT04_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78480A1)  /*@bfbba@*/
#define BT04_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78480A2)  /*@bfbba@*/
#define BT04_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78480A4)  /*@bfbba@*/
#define BT04_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78480A5)  /*@bfbba@*/
#define BT04_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78480A6)  /*@bfbba@*/

#define BT05_PWM_STCC	(BT05_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT05_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784A0A0)  /*@bfbba@*/
#define BT05_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB784A0A1)  /*@bfbba@*/
#define BT05_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784A0A2)  /*@bfbba@*/
#define BT05_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784A0A4)  /*@bfbba@*/
#define BT05_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB784A0A5)  /*@bfbba@*/
#define BT05_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784A0A6)  /*@bfbba@*/

#define BT06_PWM_STCC	(BT06_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT06_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784C0A0)  /*@bfbba@*/
#define BT06_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB784C0A1)  /*@bfbba@*/
#define BT06_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784C0A2)  /*@bfbba@*/
#define BT06_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784C0A4)  /*@bfbba@*/
#define BT06_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB784C0A5)  /*@bfbba@*/
#define BT06_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784C0A6)  /*@bfbba@*/

#define BT07_PWM_STCC	(BT07_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT07_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB784E0A0)  /*@bfbba@*/
#define BT07_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB784E0A1)  /*@bfbba@*/
#define BT07_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB784E0A2)  /*@bfbba@*/
#define BT07_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB784E0A4)  /*@bfbba@*/
#define BT07_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB784E0A5)  /*@bfbba@*/
#define BT07_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB784E0A6)  /*@bfbba@*/

#define BT08_PWM_STCC	(BT08_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT08_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78500A0)  /*@bfbba@*/
#define BT08_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78500A1)  /*@bfbba@*/
#define BT08_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78500A2)  /*@bfbba@*/
#define BT08_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78500A4)  /*@bfbba@*/
#define BT08_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78500A5)  /*@bfbba@*/
#define BT08_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78500A6)  /*@bfbba@*/

#define BT09_PWM_STCC	(BT09_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT09_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78520A0)  /*@bfbba@*/
#define BT09_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78520A1)  /*@bfbba@*/
#define BT09_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78520A2)  /*@bfbba@*/
#define BT09_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78520A4)  /*@bfbba@*/
#define BT09_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78520A5)  /*@bfbba@*/
#define BT09_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78520A6)  /*@bfbba@*/

#define BT10_PWM_STCC	(BT10_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT10_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78540A0)  /*@bfbba@*/
#define BT10_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78540A1)  /*@bfbba@*/
#define BT10_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78540A2)  /*@bfbba@*/
#define BT10_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78540A4)  /*@bfbba@*/
#define BT10_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78540A5)  /*@bfbba@*/
#define BT10_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78540A6)  /*@bfbba@*/

#define BT11_PWM_STCC	(BT11_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT11_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB78560A0)  /*@bfbba@*/
#define BT11_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB78560A1)  /*@bfbba@*/
#define BT11_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB78560A2)  /*@bfbba@*/
#define BT11_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB78560A4)  /*@bfbba@*/
#define BT11_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB78560A5)  /*@bfbba@*/
#define BT11_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB78560A6)  /*@bfbba@*/

#define BT12_PWM_STCC	(BT12_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT12_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C400A0)  /*@bfbba@*/
#define BT12_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C400A1)  /*@bfbba@*/
#define BT12_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C400A2)  /*@bfbba@*/
#define BT12_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C400A4)  /*@bfbba@*/
#define BT12_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C400A5)  /*@bfbba@*/
#define BT12_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C400A6)  /*@bfbba@*/

#define BT13_PWM_STCC	(BT13_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT13_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C420A0)  /*@bfbba@*/
#define BT13_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C420A1)  /*@bfbba@*/
#define BT13_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C420A2)  /*@bfbba@*/
#define BT13_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C420A4)  /*@bfbba@*/
#define BT13_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C420A5)  /*@bfbba@*/
#define BT13_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C420A6)  /*@bfbba@*/

#define BT14_PWM_STCC	(BT14_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT14_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C440A0)  /*@bfbba@*/
#define BT14_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C440A1)  /*@bfbba@*/
#define BT14_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C440A2)  /*@bfbba@*/
#define BT14_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C440A4)  /*@bfbba@*/
#define BT14_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C440A5)  /*@bfbba@*/
#define BT14_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C440A6)  /*@bfbba@*/

#define BT15_PWM_STCC	(BT15_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT15_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C460A0)  /*@bfbba@*/
#define BT15_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C460A1)  /*@bfbba@*/
#define BT15_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C460A2)  /*@bfbba@*/
#define BT15_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C460A4)  /*@bfbba@*/
#define BT15_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C460A5)  /*@bfbba@*/
#define BT15_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C460A6)  /*@bfbba@*/

#define BT16_PWM_STCC	(BT16_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT16_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C480A0)  /*@bfbba@*/
#define BT16_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C480A1)  /*@bfbba@*/
#define BT16_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C480A2)  /*@bfbba@*/
#define BT16_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C480A4)  /*@bfbba@*/
#define BT16_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C480A5)  /*@bfbba@*/
#define BT16_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C480A6)  /*@bfbba@*/

#define BT17_PWM_STCC	(BT17_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT17_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4A0A0)  /*@bfbba@*/
#define BT17_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C4A0A1)  /*@bfbba@*/
#define BT17_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4A0A2)  /*@bfbba@*/
#define BT17_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4A0A4)  /*@bfbba@*/
#define BT17_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C4A0A5)  /*@bfbba@*/
#define BT17_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4A0A6)  /*@bfbba@*/

#define BT18_PWM_STCC	(BT18_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT18_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4C0A0)  /*@bfbba@*/
#define BT18_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C4C0A1)  /*@bfbba@*/
#define BT18_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4C0A2)  /*@bfbba@*/
#define BT18_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4C0A4)  /*@bfbba@*/
#define BT18_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C4C0A5)  /*@bfbba@*/
#define BT18_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4C0A6)  /*@bfbba@*/

#define BT19_PWM_STCC	(BT19_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT19_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C4E0A0)  /*@bfbba@*/
#define BT19_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C4E0A1)  /*@bfbba@*/
#define BT19_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C4E0A2)  /*@bfbba@*/
#define BT19_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C4E0A4)  /*@bfbba@*/
#define BT19_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C4E0A5)  /*@bfbba@*/
#define BT19_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C4E0A6)  /*@bfbba@*/

#define BT20_PWM_STCC	(BT20_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT20_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C500A0)  /*@bfbba@*/
#define BT20_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C500A1)  /*@bfbba@*/
#define BT20_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C500A2)  /*@bfbba@*/
#define BT20_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C500A4)  /*@bfbba@*/
#define BT20_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C500A5)  /*@bfbba@*/
#define BT20_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C500A6)  /*@bfbba@*/

#define BT21_PWM_STCC	(BT21_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT21_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C520A0)  /*@bfbba@*/
#define BT21_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C520A1)  /*@bfbba@*/
#define BT21_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C520A2)  /*@bfbba@*/
#define BT21_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C520A4)  /*@bfbba@*/
#define BT21_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C520A5)  /*@bfbba@*/
#define BT21_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C520A6)  /*@bfbba@*/

#define BT22_PWM_STCC	(BT22_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT22_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C540A0)  /*@bfbba@*/
#define BT22_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C540A1)  /*@bfbba@*/
#define BT22_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C540A2)  /*@bfbba@*/
#define BT22_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C540A4)  /*@bfbba@*/
#define BT22_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C540A5)  /*@bfbba@*/
#define BT22_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C540A6)  /*@bfbba@*/

#define BT23_PWM_STCC	(BT23_PWM.unSTCC.u8Register)  /*@rg@*/
#define BT23_PWM_STCC_UDIRC	(*(volatile uint_io8_t*)0xB7C560A0)  /*@bfbba@*/
#define BT23_PWM_STCC_DTIRC	(*(volatile uint_io8_t*)0xB7C560A1)  /*@bfbba@*/
#define BT23_PWM_STCC_TGIRC	(*(volatile uint_io8_t*)0xB7C560A2)  /*@bfbba@*/
#define BT23_PWM_STCC_UDIEC	(*(volatile uint_io8_t*)0xB7C560A4)  /*@bfbba@*/
#define BT23_PWM_STCC_DTIEC	(*(volatile uint_io8_t*)0xB7C560A5)  /*@bfbba@*/
#define BT23_PWM_STCC_TGIEC	(*(volatile uint_io8_t*)0xB7C560A6)  /*@bfbba@*/

typedef struct stc_btn_pwm_stcc_field{
    uint_io8_t		u1UDIRC:1;
    uint_io8_t		u1DTIRC:1;
    uint_io8_t		u1TGIRC:1;
    uint_io8_t		:1;
    uint_io8_t		u1UDIEC:1;
    uint_io8_t		u1DTIEC:1;
    uint_io8_t		u1TGIEC:1;
    uint_io8_t		:1;
}stc_btn_pwm_stcc_field_t;

typedef union un_btn_pwm_stcc{
    uint_io8_t		u8Register;
    stc_btn_pwm_stcc_field_t		stcField;
}un_btn_pwm_stcc_t;

/* STCS */
#define BT00_PWM_STCS	(BT00_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT00_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78400C4)  /*@bfbba@*/
#define BT00_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78400C5)  /*@bfbba@*/
#define BT00_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78400C6)  /*@bfbba@*/

#define BT01_PWM_STCS	(BT01_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT01_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78420C4)  /*@bfbba@*/
#define BT01_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78420C5)  /*@bfbba@*/
#define BT01_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78420C6)  /*@bfbba@*/

#define BT02_PWM_STCS	(BT02_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT02_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78440C4)  /*@bfbba@*/
#define BT02_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78440C5)  /*@bfbba@*/
#define BT02_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78440C6)  /*@bfbba@*/

#define BT03_PWM_STCS	(BT03_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT03_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78460C4)  /*@bfbba@*/
#define BT03_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78460C5)  /*@bfbba@*/
#define BT03_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78460C6)  /*@bfbba@*/

#define BT04_PWM_STCS	(BT04_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT04_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78480C4)  /*@bfbba@*/
#define BT04_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78480C5)  /*@bfbba@*/
#define BT04_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78480C6)  /*@bfbba@*/

#define BT05_PWM_STCS	(BT05_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT05_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB784A0C4)  /*@bfbba@*/
#define BT05_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB784A0C5)  /*@bfbba@*/
#define BT05_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB784A0C6)  /*@bfbba@*/

#define BT06_PWM_STCS	(BT06_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT06_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB784C0C4)  /*@bfbba@*/
#define BT06_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB784C0C5)  /*@bfbba@*/
#define BT06_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB784C0C6)  /*@bfbba@*/

#define BT07_PWM_STCS	(BT07_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT07_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB784E0C4)  /*@bfbba@*/
#define BT07_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB784E0C5)  /*@bfbba@*/
#define BT07_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB784E0C6)  /*@bfbba@*/

#define BT08_PWM_STCS	(BT08_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT08_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78500C4)  /*@bfbba@*/
#define BT08_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78500C5)  /*@bfbba@*/
#define BT08_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78500C6)  /*@bfbba@*/

#define BT09_PWM_STCS	(BT09_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT09_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78520C4)  /*@bfbba@*/
#define BT09_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78520C5)  /*@bfbba@*/
#define BT09_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78520C6)  /*@bfbba@*/

#define BT10_PWM_STCS	(BT10_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT10_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78540C4)  /*@bfbba@*/
#define BT10_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78540C5)  /*@bfbba@*/
#define BT10_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78540C6)  /*@bfbba@*/

#define BT11_PWM_STCS	(BT11_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT11_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB78560C4)  /*@bfbba@*/
#define BT11_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB78560C5)  /*@bfbba@*/
#define BT11_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB78560C6)  /*@bfbba@*/

#define BT12_PWM_STCS	(BT12_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT12_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C400C4)  /*@bfbba@*/
#define BT12_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C400C5)  /*@bfbba@*/
#define BT12_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C400C6)  /*@bfbba@*/

#define BT13_PWM_STCS	(BT13_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT13_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C420C4)  /*@bfbba@*/
#define BT13_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C420C5)  /*@bfbba@*/
#define BT13_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C420C6)  /*@bfbba@*/

#define BT14_PWM_STCS	(BT14_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT14_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C440C4)  /*@bfbba@*/
#define BT14_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C440C5)  /*@bfbba@*/
#define BT14_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C440C6)  /*@bfbba@*/

#define BT15_PWM_STCS	(BT15_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT15_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C460C4)  /*@bfbba@*/
#define BT15_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C460C5)  /*@bfbba@*/
#define BT15_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C460C6)  /*@bfbba@*/

#define BT16_PWM_STCS	(BT16_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT16_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C480C4)  /*@bfbba@*/
#define BT16_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C480C5)  /*@bfbba@*/
#define BT16_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C480C6)  /*@bfbba@*/

#define BT17_PWM_STCS	(BT17_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT17_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4A0C4)  /*@bfbba@*/
#define BT17_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C4A0C5)  /*@bfbba@*/
#define BT17_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4A0C6)  /*@bfbba@*/

#define BT18_PWM_STCS	(BT18_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT18_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4C0C4)  /*@bfbba@*/
#define BT18_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C4C0C5)  /*@bfbba@*/
#define BT18_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4C0C6)  /*@bfbba@*/

#define BT19_PWM_STCS	(BT19_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT19_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C4E0C4)  /*@bfbba@*/
#define BT19_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C4E0C5)  /*@bfbba@*/
#define BT19_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C4E0C6)  /*@bfbba@*/

#define BT20_PWM_STCS	(BT20_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT20_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C500C4)  /*@bfbba@*/
#define BT20_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C500C5)  /*@bfbba@*/
#define BT20_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C500C6)  /*@bfbba@*/

#define BT21_PWM_STCS	(BT21_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT21_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C520C4)  /*@bfbba@*/
#define BT21_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C520C5)  /*@bfbba@*/
#define BT21_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C520C6)  /*@bfbba@*/

#define BT22_PWM_STCS	(BT22_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT22_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C540C4)  /*@bfbba@*/
#define BT22_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C540C5)  /*@bfbba@*/
#define BT22_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C540C6)  /*@bfbba@*/

#define BT23_PWM_STCS	(BT23_PWM.unSTCS.u8Register)  /*@rg@*/
#define BT23_PWM_STCS_UDIES	(*(volatile uint_io8_t*)0xB7C560C4)  /*@bfbba@*/
#define BT23_PWM_STCS_DTIES	(*(volatile uint_io8_t*)0xB7C560C5)  /*@bfbba@*/
#define BT23_PWM_STCS_TGIES	(*(volatile uint_io8_t*)0xB7C560C6)  /*@bfbba@*/

typedef struct stc_btn_pwm_stcs_field{
    uint_io8_t		:4;
    uint_io8_t		u1UDIES:1;
    uint_io8_t		u1DTIES:1;
    uint_io8_t		u1TGIES:1;
    uint_io8_t		:1;
}stc_btn_pwm_stcs_field_t;

typedef union un_btn_pwm_stcs{
    uint_io8_t		u8Register;
    stc_btn_pwm_stcs_field_t		stcField;
}un_btn_pwm_stcs_t;

/* PSDR */
#define BT00_PWM_PSDR	(BT00_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT00_PWM_PSDR_PSDR	BT00_PWM_PSDR  /*@bfrg@*/

#define BT01_PWM_PSDR	(BT01_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT01_PWM_PSDR_PSDR	BT01_PWM_PSDR  /*@bfrg@*/

#define BT02_PWM_PSDR	(BT02_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT02_PWM_PSDR_PSDR	BT02_PWM_PSDR  /*@bfrg@*/

#define BT03_PWM_PSDR	(BT03_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT03_PWM_PSDR_PSDR	BT03_PWM_PSDR  /*@bfrg@*/

#define BT04_PWM_PSDR	(BT04_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT04_PWM_PSDR_PSDR	BT04_PWM_PSDR  /*@bfrg@*/

#define BT05_PWM_PSDR	(BT05_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT05_PWM_PSDR_PSDR	BT05_PWM_PSDR  /*@bfrg@*/

#define BT06_PWM_PSDR	(BT06_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT06_PWM_PSDR_PSDR	BT06_PWM_PSDR  /*@bfrg@*/

#define BT07_PWM_PSDR	(BT07_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT07_PWM_PSDR_PSDR	BT07_PWM_PSDR  /*@bfrg@*/

#define BT08_PWM_PSDR	(BT08_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT08_PWM_PSDR_PSDR	BT08_PWM_PSDR  /*@bfrg@*/

#define BT09_PWM_PSDR	(BT09_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT09_PWM_PSDR_PSDR	BT09_PWM_PSDR  /*@bfrg@*/

#define BT10_PWM_PSDR	(BT10_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT10_PWM_PSDR_PSDR	BT10_PWM_PSDR  /*@bfrg@*/

#define BT11_PWM_PSDR	(BT11_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT11_PWM_PSDR_PSDR	BT11_PWM_PSDR  /*@bfrg@*/

#define BT12_PWM_PSDR	(BT12_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT12_PWM_PSDR_PSDR	BT12_PWM_PSDR  /*@bfrg@*/

#define BT13_PWM_PSDR	(BT13_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT13_PWM_PSDR_PSDR	BT13_PWM_PSDR  /*@bfrg@*/

#define BT14_PWM_PSDR	(BT14_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT14_PWM_PSDR_PSDR	BT14_PWM_PSDR  /*@bfrg@*/

#define BT15_PWM_PSDR	(BT15_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT15_PWM_PSDR_PSDR	BT15_PWM_PSDR  /*@bfrg@*/

#define BT16_PWM_PSDR	(BT16_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT16_PWM_PSDR_PSDR	BT16_PWM_PSDR  /*@bfrg@*/

#define BT17_PWM_PSDR	(BT17_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT17_PWM_PSDR_PSDR	BT17_PWM_PSDR  /*@bfrg@*/

#define BT18_PWM_PSDR	(BT18_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT18_PWM_PSDR_PSDR	BT18_PWM_PSDR  /*@bfrg@*/

#define BT19_PWM_PSDR	(BT19_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT19_PWM_PSDR_PSDR	BT19_PWM_PSDR  /*@bfrg@*/

#define BT20_PWM_PSDR	(BT20_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT20_PWM_PSDR_PSDR	BT20_PWM_PSDR  /*@bfrg@*/

#define BT21_PWM_PSDR	(BT21_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT21_PWM_PSDR_PSDR	BT21_PWM_PSDR  /*@bfrg@*/

#define BT22_PWM_PSDR	(BT22_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT22_PWM_PSDR_PSDR	BT22_PWM_PSDR  /*@bfrg@*/

#define BT23_PWM_PSDR	(BT23_PWM.unPSDR.u16Register)  /*@rg@*/
#define BT23_PWM_PSDR_PSDR	BT23_PWM_PSDR  /*@bfrg@*/

typedef union un_btn_pwm_psdr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_pwm_psdr_t;

/* ADTR */
#define BT00_PWM_ADTR	(BT00_PWM.unADTR.u16Register)  /*@rg@*/
#define BT00_PWM_ADTR_ADTR	BT00_PWM_ADTR  /*@bfrg@*/

#define BT01_PWM_ADTR	(BT01_PWM.unADTR.u16Register)  /*@rg@*/
#define BT01_PWM_ADTR_ADTR	BT01_PWM_ADTR  /*@bfrg@*/

#define BT02_PWM_ADTR	(BT02_PWM.unADTR.u16Register)  /*@rg@*/
#define BT02_PWM_ADTR_ADTR	BT02_PWM_ADTR  /*@bfrg@*/

#define BT03_PWM_ADTR	(BT03_PWM.unADTR.u16Register)  /*@rg@*/
#define BT03_PWM_ADTR_ADTR	BT03_PWM_ADTR  /*@bfrg@*/

#define BT04_PWM_ADTR	(BT04_PWM.unADTR.u16Register)  /*@rg@*/
#define BT04_PWM_ADTR_ADTR	BT04_PWM_ADTR  /*@bfrg@*/

#define BT05_PWM_ADTR	(BT05_PWM.unADTR.u16Register)  /*@rg@*/
#define BT05_PWM_ADTR_ADTR	BT05_PWM_ADTR  /*@bfrg@*/

#define BT06_PWM_ADTR	(BT06_PWM.unADTR.u16Register)  /*@rg@*/
#define BT06_PWM_ADTR_ADTR	BT06_PWM_ADTR  /*@bfrg@*/

#define BT07_PWM_ADTR	(BT07_PWM.unADTR.u16Register)  /*@rg@*/
#define BT07_PWM_ADTR_ADTR	BT07_PWM_ADTR  /*@bfrg@*/

#define BT08_PWM_ADTR	(BT08_PWM.unADTR.u16Register)  /*@rg@*/
#define BT08_PWM_ADTR_ADTR	BT08_PWM_ADTR  /*@bfrg@*/

#define BT09_PWM_ADTR	(BT09_PWM.unADTR.u16Register)  /*@rg@*/
#define BT09_PWM_ADTR_ADTR	BT09_PWM_ADTR  /*@bfrg@*/

#define BT10_PWM_ADTR	(BT10_PWM.unADTR.u16Register)  /*@rg@*/
#define BT10_PWM_ADTR_ADTR	BT10_PWM_ADTR  /*@bfrg@*/

#define BT11_PWM_ADTR	(BT11_PWM.unADTR.u16Register)  /*@rg@*/
#define BT11_PWM_ADTR_ADTR	BT11_PWM_ADTR  /*@bfrg@*/

#define BT12_PWM_ADTR	(BT12_PWM.unADTR.u16Register)  /*@rg@*/
#define BT12_PWM_ADTR_ADTR	BT12_PWM_ADTR  /*@bfrg@*/

#define BT13_PWM_ADTR	(BT13_PWM.unADTR.u16Register)  /*@rg@*/
#define BT13_PWM_ADTR_ADTR	BT13_PWM_ADTR  /*@bfrg@*/

#define BT14_PWM_ADTR	(BT14_PWM.unADTR.u16Register)  /*@rg@*/
#define BT14_PWM_ADTR_ADTR	BT14_PWM_ADTR  /*@bfrg@*/

#define BT15_PWM_ADTR	(BT15_PWM.unADTR.u16Register)  /*@rg@*/
#define BT15_PWM_ADTR_ADTR	BT15_PWM_ADTR  /*@bfrg@*/

#define BT16_PWM_ADTR	(BT16_PWM.unADTR.u16Register)  /*@rg@*/
#define BT16_PWM_ADTR_ADTR	BT16_PWM_ADTR  /*@bfrg@*/

#define BT17_PWM_ADTR	(BT17_PWM.unADTR.u16Register)  /*@rg@*/
#define BT17_PWM_ADTR_ADTR	BT17_PWM_ADTR  /*@bfrg@*/

#define BT18_PWM_ADTR	(BT18_PWM.unADTR.u16Register)  /*@rg@*/
#define BT18_PWM_ADTR_ADTR	BT18_PWM_ADTR  /*@bfrg@*/

#define BT19_PWM_ADTR	(BT19_PWM.unADTR.u16Register)  /*@rg@*/
#define BT19_PWM_ADTR_ADTR	BT19_PWM_ADTR  /*@bfrg@*/

#define BT20_PWM_ADTR	(BT20_PWM.unADTR.u16Register)  /*@rg@*/
#define BT20_PWM_ADTR_ADTR	BT20_PWM_ADTR  /*@bfrg@*/

#define BT21_PWM_ADTR	(BT21_PWM.unADTR.u16Register)  /*@rg@*/
#define BT21_PWM_ADTR_ADTR	BT21_PWM_ADTR  /*@bfrg@*/

#define BT22_PWM_ADTR	(BT22_PWM.unADTR.u16Register)  /*@rg@*/
#define BT22_PWM_ADTR_ADTR	BT22_PWM_ADTR  /*@bfrg@*/

#define BT23_PWM_ADTR	(BT23_PWM.unADTR.u16Register)  /*@rg@*/
#define BT23_PWM_ADTR_ADTR	BT23_PWM_ADTR  /*@bfrg@*/

typedef union un_btn_pwm_adtr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_btn_pwm_adtr_t;


typedef struct stc_btn_pwm{
    un_btn_pwm_pcsr_t	unPCSR;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[2];	/* 0x00000002 */
    un_btn_pwm_pdut_t	unPDUT;	/* 0x00000004 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000006 */
    un_btn_pwm_tmr_t	unTMR;	/* 0x00000008 */
    un_btn_pwm_tmcr_t	unTMCR;	/* 0x0000000C */
    uint_io8_t	au8Reserved2[2];	/* 0x0000000E */
    un_btn_pwm_stc_t	unSTC;	/* 0x00000010 */
    un_btn_pwm_tmcr2_t	unTMCR2;	/* 0x00000011 */
    uint_io8_t	au8Reserved3[2];	/* 0x00000012 */
    un_btn_pwm_stcc_t	unSTCC;	/* 0x00000014 */
    uint_io8_t	au8Reserved4[3];	/* 0x00000015 */
    un_btn_pwm_stcs_t	unSTCS;	/* 0x00000018 */
    uint_io8_t	au8Reserved5[3];	/* 0x00000019 */
    un_btn_pwm_psdr_t	unPSDR;	/* 0x0000001C */
    uint_io8_t	au8Reserved6[2];	/* 0x0000001E */
    un_btn_pwm_adtr_t	unADTR;	/* 0x00000020 */
    uint_io8_t	au8Reserved7[14];	/* 0x00000022 */
}stc_btn_pwm_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_btn_pwm_t	stcBT_PWM[24];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 48(0x30) bytes */


#endif /* __S6J3200_BT_PWM_H */
