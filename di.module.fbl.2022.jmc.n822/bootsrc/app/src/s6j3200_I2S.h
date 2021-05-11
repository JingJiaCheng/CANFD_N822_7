/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_I2S_H
#define __S6J3200_I2S_H

#include "s6j3200io_basetypes.h"

/* I2S[0-1] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define I2S0	stcI2S[0]
#define I2S1	stcI2S[1]
#else /* __IO_DEFINE */
#define I2S0	(*((volatile stc_i2sn_t*)0xB8020C00))
#define I2S1	(*((volatile stc_i2sn_t*)0xB8021000))
#endif /* __IO_DEFINE */

/* RXFDAT[0-15] */
#define I2S0_RXFDAT0	(I2S0.unRXFDAT0.u32Register)  /*@rg@*/
#define I2S0_RXFDAT0_RXDATA	I2S0_RXFDAT0  /*@bfrg@*/

#define I2S0_RXFDAT1	(I2S0.unRXFDAT1.u32Register)  /*@rg@*/
#define I2S0_RXFDAT1_RXDATA	I2S0_RXFDAT1  /*@bfrg@*/

#define I2S0_RXFDAT2	(I2S0.unRXFDAT2.u32Register)  /*@rg@*/
#define I2S0_RXFDAT2_RXDATA	I2S0_RXFDAT2  /*@bfrg@*/

#define I2S0_RXFDAT3	(I2S0.unRXFDAT3.u32Register)  /*@rg@*/
#define I2S0_RXFDAT3_RXDATA	I2S0_RXFDAT3  /*@bfrg@*/

#define I2S0_RXFDAT4	(I2S0.unRXFDAT4.u32Register)  /*@rg@*/
#define I2S0_RXFDAT4_RXDATA	I2S0_RXFDAT4  /*@bfrg@*/

#define I2S0_RXFDAT5	(I2S0.unRXFDAT5.u32Register)  /*@rg@*/
#define I2S0_RXFDAT5_RXDATA	I2S0_RXFDAT5  /*@bfrg@*/

#define I2S0_RXFDAT6	(I2S0.unRXFDAT6.u32Register)  /*@rg@*/
#define I2S0_RXFDAT6_RXDATA	I2S0_RXFDAT6  /*@bfrg@*/

#define I2S0_RXFDAT7	(I2S0.unRXFDAT7.u32Register)  /*@rg@*/
#define I2S0_RXFDAT7_RXDATA	I2S0_RXFDAT7  /*@bfrg@*/

#define I2S0_RXFDAT8	(I2S0.unRXFDAT8.u32Register)  /*@rg@*/
#define I2S0_RXFDAT8_RXDATA	I2S0_RXFDAT8  /*@bfrg@*/

#define I2S0_RXFDAT9	(I2S0.unRXFDAT9.u32Register)  /*@rg@*/
#define I2S0_RXFDAT9_RXDATA	I2S0_RXFDAT9  /*@bfrg@*/

#define I2S0_RXFDAT10	(I2S0.unRXFDAT10.u32Register)  /*@rg@*/
#define I2S0_RXFDAT10_RXDATA	I2S0_RXFDAT10  /*@bfrg@*/

#define I2S0_RXFDAT11	(I2S0.unRXFDAT11.u32Register)  /*@rg@*/
#define I2S0_RXFDAT11_RXDATA	I2S0_RXFDAT11  /*@bfrg@*/

#define I2S0_RXFDAT12	(I2S0.unRXFDAT12.u32Register)  /*@rg@*/
#define I2S0_RXFDAT12_RXDATA	I2S0_RXFDAT12  /*@bfrg@*/

#define I2S0_RXFDAT13	(I2S0.unRXFDAT13.u32Register)  /*@rg@*/
#define I2S0_RXFDAT13_RXDATA	I2S0_RXFDAT13  /*@bfrg@*/

#define I2S0_RXFDAT14	(I2S0.unRXFDAT14.u32Register)  /*@rg@*/
#define I2S0_RXFDAT14_RXDATA	I2S0_RXFDAT14  /*@bfrg@*/

#define I2S0_RXFDAT15	(I2S0.unRXFDAT15.u32Register)  /*@rg@*/
#define I2S0_RXFDAT15_RXDATA	I2S0_RXFDAT15  /*@bfrg@*/

#define I2S1_RXFDAT0	(I2S1.unRXFDAT0.u32Register)  /*@rg@*/
#define I2S1_RXFDAT0_RXDATA	I2S1_RXFDAT0  /*@bfrg@*/

#define I2S1_RXFDAT1	(I2S1.unRXFDAT1.u32Register)  /*@rg@*/
#define I2S1_RXFDAT1_RXDATA	I2S1_RXFDAT1  /*@bfrg@*/

#define I2S1_RXFDAT2	(I2S1.unRXFDAT2.u32Register)  /*@rg@*/
#define I2S1_RXFDAT2_RXDATA	I2S1_RXFDAT2  /*@bfrg@*/

#define I2S1_RXFDAT3	(I2S1.unRXFDAT3.u32Register)  /*@rg@*/
#define I2S1_RXFDAT3_RXDATA	I2S1_RXFDAT3  /*@bfrg@*/

#define I2S1_RXFDAT4	(I2S1.unRXFDAT4.u32Register)  /*@rg@*/
#define I2S1_RXFDAT4_RXDATA	I2S1_RXFDAT4  /*@bfrg@*/

#define I2S1_RXFDAT5	(I2S1.unRXFDAT5.u32Register)  /*@rg@*/
#define I2S1_RXFDAT5_RXDATA	I2S1_RXFDAT5  /*@bfrg@*/

#define I2S1_RXFDAT6	(I2S1.unRXFDAT6.u32Register)  /*@rg@*/
#define I2S1_RXFDAT6_RXDATA	I2S1_RXFDAT6  /*@bfrg@*/

#define I2S1_RXFDAT7	(I2S1.unRXFDAT7.u32Register)  /*@rg@*/
#define I2S1_RXFDAT7_RXDATA	I2S1_RXFDAT7  /*@bfrg@*/

#define I2S1_RXFDAT8	(I2S1.unRXFDAT8.u32Register)  /*@rg@*/
#define I2S1_RXFDAT8_RXDATA	I2S1_RXFDAT8  /*@bfrg@*/

#define I2S1_RXFDAT9	(I2S1.unRXFDAT9.u32Register)  /*@rg@*/
#define I2S1_RXFDAT9_RXDATA	I2S1_RXFDAT9  /*@bfrg@*/

#define I2S1_RXFDAT10	(I2S1.unRXFDAT10.u32Register)  /*@rg@*/
#define I2S1_RXFDAT10_RXDATA	I2S1_RXFDAT10  /*@bfrg@*/

#define I2S1_RXFDAT11	(I2S1.unRXFDAT11.u32Register)  /*@rg@*/
#define I2S1_RXFDAT11_RXDATA	I2S1_RXFDAT11  /*@bfrg@*/

#define I2S1_RXFDAT12	(I2S1.unRXFDAT12.u32Register)  /*@rg@*/
#define I2S1_RXFDAT12_RXDATA	I2S1_RXFDAT12  /*@bfrg@*/

#define I2S1_RXFDAT13	(I2S1.unRXFDAT13.u32Register)  /*@rg@*/
#define I2S1_RXFDAT13_RXDATA	I2S1_RXFDAT13  /*@bfrg@*/

#define I2S1_RXFDAT14	(I2S1.unRXFDAT14.u32Register)  /*@rg@*/
#define I2S1_RXFDAT14_RXDATA	I2S1_RXFDAT14  /*@bfrg@*/

#define I2S1_RXFDAT15	(I2S1.unRXFDAT15.u32Register)  /*@rg@*/
#define I2S1_RXFDAT15_RXDATA	I2S1_RXFDAT15  /*@bfrg@*/

typedef union un_i2sn_rxfdatn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_rxfdatn_t;

/* TXFDAT[0-15] */
#define I2S0_TXFDAT0	(I2S0.unTXFDAT0.u32Register)  /*@rg@*/
#define I2S0_TXFDAT0_TXDATA	I2S0_TXFDAT0  /*@bfrg@*/

#define I2S0_TXFDAT1	(I2S0.unTXFDAT1.u32Register)  /*@rg@*/
#define I2S0_TXFDAT1_TXDATA	I2S0_TXFDAT1  /*@bfrg@*/

#define I2S0_TXFDAT2	(I2S0.unTXFDAT2.u32Register)  /*@rg@*/
#define I2S0_TXFDAT2_TXDATA	I2S0_TXFDAT2  /*@bfrg@*/

#define I2S0_TXFDAT3	(I2S0.unTXFDAT3.u32Register)  /*@rg@*/
#define I2S0_TXFDAT3_TXDATA	I2S0_TXFDAT3  /*@bfrg@*/

#define I2S0_TXFDAT4	(I2S0.unTXFDAT4.u32Register)  /*@rg@*/
#define I2S0_TXFDAT4_TXDATA	I2S0_TXFDAT4  /*@bfrg@*/

#define I2S0_TXFDAT5	(I2S0.unTXFDAT5.u32Register)  /*@rg@*/
#define I2S0_TXFDAT5_TXDATA	I2S0_TXFDAT5  /*@bfrg@*/

#define I2S0_TXFDAT6	(I2S0.unTXFDAT6.u32Register)  /*@rg@*/
#define I2S0_TXFDAT6_TXDATA	I2S0_TXFDAT6  /*@bfrg@*/

#define I2S0_TXFDAT7	(I2S0.unTXFDAT7.u32Register)  /*@rg@*/
#define I2S0_TXFDAT7_TXDATA	I2S0_TXFDAT7  /*@bfrg@*/

#define I2S0_TXFDAT8	(I2S0.unTXFDAT8.u32Register)  /*@rg@*/
#define I2S0_TXFDAT8_TXDATA	I2S0_TXFDAT8  /*@bfrg@*/

#define I2S0_TXFDAT9	(I2S0.unTXFDAT9.u32Register)  /*@rg@*/
#define I2S0_TXFDAT9_TXDATA	I2S0_TXFDAT9  /*@bfrg@*/

#define I2S0_TXFDAT10	(I2S0.unTXFDAT10.u32Register)  /*@rg@*/
#define I2S0_TXFDAT10_TXDATA	I2S0_TXFDAT10  /*@bfrg@*/

#define I2S0_TXFDAT11	(I2S0.unTXFDAT11.u32Register)  /*@rg@*/
#define I2S0_TXFDAT11_TXDATA	I2S0_TXFDAT11  /*@bfrg@*/

#define I2S0_TXFDAT12	(I2S0.unTXFDAT12.u32Register)  /*@rg@*/
#define I2S0_TXFDAT12_TXDATA	I2S0_TXFDAT12  /*@bfrg@*/

#define I2S0_TXFDAT13	(I2S0.unTXFDAT13.u32Register)  /*@rg@*/
#define I2S0_TXFDAT13_TXDATA	I2S0_TXFDAT13  /*@bfrg@*/

#define I2S0_TXFDAT14	(I2S0.unTXFDAT14.u32Register)  /*@rg@*/
#define I2S0_TXFDAT14_TXDATA	I2S0_TXFDAT14  /*@bfrg@*/

#define I2S0_TXFDAT15	(I2S0.unTXFDAT15.u32Register)  /*@rg@*/
#define I2S0_TXFDAT15_TXDATA	I2S0_TXFDAT15  /*@bfrg@*/

#define I2S1_TXFDAT0	(I2S1.unTXFDAT0.u32Register)  /*@rg@*/
#define I2S1_TXFDAT0_TXDATA	I2S1_TXFDAT0  /*@bfrg@*/

#define I2S1_TXFDAT1	(I2S1.unTXFDAT1.u32Register)  /*@rg@*/
#define I2S1_TXFDAT1_TXDATA	I2S1_TXFDAT1  /*@bfrg@*/

#define I2S1_TXFDAT2	(I2S1.unTXFDAT2.u32Register)  /*@rg@*/
#define I2S1_TXFDAT2_TXDATA	I2S1_TXFDAT2  /*@bfrg@*/

#define I2S1_TXFDAT3	(I2S1.unTXFDAT3.u32Register)  /*@rg@*/
#define I2S1_TXFDAT3_TXDATA	I2S1_TXFDAT3  /*@bfrg@*/

#define I2S1_TXFDAT4	(I2S1.unTXFDAT4.u32Register)  /*@rg@*/
#define I2S1_TXFDAT4_TXDATA	I2S1_TXFDAT4  /*@bfrg@*/

#define I2S1_TXFDAT5	(I2S1.unTXFDAT5.u32Register)  /*@rg@*/
#define I2S1_TXFDAT5_TXDATA	I2S1_TXFDAT5  /*@bfrg@*/

#define I2S1_TXFDAT6	(I2S1.unTXFDAT6.u32Register)  /*@rg@*/
#define I2S1_TXFDAT6_TXDATA	I2S1_TXFDAT6  /*@bfrg@*/

#define I2S1_TXFDAT7	(I2S1.unTXFDAT7.u32Register)  /*@rg@*/
#define I2S1_TXFDAT7_TXDATA	I2S1_TXFDAT7  /*@bfrg@*/

#define I2S1_TXFDAT8	(I2S1.unTXFDAT8.u32Register)  /*@rg@*/
#define I2S1_TXFDAT8_TXDATA	I2S1_TXFDAT8  /*@bfrg@*/

#define I2S1_TXFDAT9	(I2S1.unTXFDAT9.u32Register)  /*@rg@*/
#define I2S1_TXFDAT9_TXDATA	I2S1_TXFDAT9  /*@bfrg@*/

#define I2S1_TXFDAT10	(I2S1.unTXFDAT10.u32Register)  /*@rg@*/
#define I2S1_TXFDAT10_TXDATA	I2S1_TXFDAT10  /*@bfrg@*/

#define I2S1_TXFDAT11	(I2S1.unTXFDAT11.u32Register)  /*@rg@*/
#define I2S1_TXFDAT11_TXDATA	I2S1_TXFDAT11  /*@bfrg@*/

#define I2S1_TXFDAT12	(I2S1.unTXFDAT12.u32Register)  /*@rg@*/
#define I2S1_TXFDAT12_TXDATA	I2S1_TXFDAT12  /*@bfrg@*/

#define I2S1_TXFDAT13	(I2S1.unTXFDAT13.u32Register)  /*@rg@*/
#define I2S1_TXFDAT13_TXDATA	I2S1_TXFDAT13  /*@bfrg@*/

#define I2S1_TXFDAT14	(I2S1.unTXFDAT14.u32Register)  /*@rg@*/
#define I2S1_TXFDAT14_TXDATA	I2S1_TXFDAT14  /*@bfrg@*/

#define I2S1_TXFDAT15	(I2S1.unTXFDAT15.u32Register)  /*@rg@*/
#define I2S1_TXFDAT15_TXDATA	I2S1_TXFDAT15  /*@bfrg@*/

typedef union un_i2sn_txfdatn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_txfdatn_t;

/* CNTREG */
#define I2S0_CNTREG	(I2S0.unCNTREG.u32Register)  /*@rg@*/
#define I2S0_CNTREG_FSPL	(I2S0.unCNTREG.stcField.u1FSPL)  /*@bf@*/
#define I2S0_CNTREG_FSLN	(I2S0.unCNTREG.stcField.u1FSLN)  /*@bf@*/
#define I2S0_CNTREG_FSPH	(I2S0.unCNTREG.stcField.u1FSPH)  /*@bf@*/
#define I2S0_CNTREG_CPOL	(I2S0.unCNTREG.stcField.u1CPOL)  /*@bf@*/
#define I2S0_CNTREG_SMPL	(I2S0.unCNTREG.stcField.u1SMPL)  /*@bf@*/
#define I2S0_CNTREG_RXDIS	(I2S0.unCNTREG.stcField.u1RXDIS)  /*@bf@*/
#define I2S0_CNTREG_TXDIS	(I2S0.unCNTREG.stcField.u1TXDIS)  /*@bf@*/
#define I2S0_CNTREG_MSLB	(I2S0.unCNTREG.stcField.u1MSLB)  /*@bf@*/
#define I2S0_CNTREG_FRUN	(I2S0.unCNTREG.stcField.u1FRUN)  /*@bf@*/
#define I2S0_CNTREG_BEXT	(I2S0.unCNTREG.stcField.u1BEXT)  /*@bf@*/
#define I2S0_CNTREG_ECKM	(I2S0.unCNTREG.stcField.u1ECKM)  /*@bf@*/
#define I2S0_CNTREG_RHLL	(I2S0.unCNTREG.stcField.u1RHLL)  /*@bf@*/
#define I2S0_CNTREG_SBFN	(I2S0.unCNTREG.stcField.u1SBFN)  /*@bf@*/
#define I2S0_CNTREG_MSMD	(I2S0.unCNTREG.stcField.u1MSMD)  /*@bf@*/
#define I2S0_CNTREG_MSKB	(I2S0.unCNTREG.stcField.u1MSKB)  /*@bf@*/
#define I2S0_CNTREG_OVHD	(I2S0.unCNTREG.stcField.u10OVHD)  /*@bf@*/
#define I2S0_CNTREG_CKRT	(I2S0.unCNTREG.stcField.u6CKRT)  /*@bf@*/

#define I2S1_CNTREG	(I2S1.unCNTREG.u32Register)  /*@rg@*/
#define I2S1_CNTREG_FSPL	(I2S1.unCNTREG.stcField.u1FSPL)  /*@bf@*/
#define I2S1_CNTREG_FSLN	(I2S1.unCNTREG.stcField.u1FSLN)  /*@bf@*/
#define I2S1_CNTREG_FSPH	(I2S1.unCNTREG.stcField.u1FSPH)  /*@bf@*/
#define I2S1_CNTREG_CPOL	(I2S1.unCNTREG.stcField.u1CPOL)  /*@bf@*/
#define I2S1_CNTREG_SMPL	(I2S1.unCNTREG.stcField.u1SMPL)  /*@bf@*/
#define I2S1_CNTREG_RXDIS	(I2S1.unCNTREG.stcField.u1RXDIS)  /*@bf@*/
#define I2S1_CNTREG_TXDIS	(I2S1.unCNTREG.stcField.u1TXDIS)  /*@bf@*/
#define I2S1_CNTREG_MSLB	(I2S1.unCNTREG.stcField.u1MSLB)  /*@bf@*/
#define I2S1_CNTREG_FRUN	(I2S1.unCNTREG.stcField.u1FRUN)  /*@bf@*/
#define I2S1_CNTREG_BEXT	(I2S1.unCNTREG.stcField.u1BEXT)  /*@bf@*/
#define I2S1_CNTREG_ECKM	(I2S1.unCNTREG.stcField.u1ECKM)  /*@bf@*/
#define I2S1_CNTREG_RHLL	(I2S1.unCNTREG.stcField.u1RHLL)  /*@bf@*/
#define I2S1_CNTREG_SBFN	(I2S1.unCNTREG.stcField.u1SBFN)  /*@bf@*/
#define I2S1_CNTREG_MSMD	(I2S1.unCNTREG.stcField.u1MSMD)  /*@bf@*/
#define I2S1_CNTREG_MSKB	(I2S1.unCNTREG.stcField.u1MSKB)  /*@bf@*/
#define I2S1_CNTREG_OVHD	(I2S1.unCNTREG.stcField.u10OVHD)  /*@bf@*/
#define I2S1_CNTREG_CKRT	(I2S1.unCNTREG.stcField.u6CKRT)  /*@bf@*/

typedef struct stc_i2sn_cntreg_field{
    uint_io32_t		u1FSPL:1;
    uint_io32_t		u1FSLN:1;
    uint_io32_t		u1FSPH:1;
    uint_io32_t		u1CPOL:1;
    uint_io32_t		u1SMPL:1;
    uint_io32_t		u1RXDIS:1;
    uint_io32_t		u1TXDIS:1;
    uint_io32_t		u1MSLB:1;
    uint_io32_t		u1FRUN:1;
    uint_io32_t		u1BEXT:1;
    uint_io32_t		u1ECKM:1;
    uint_io32_t		u1RHLL:1;
    uint_io32_t		u1SBFN:1;
    uint_io32_t		u1MSMD:1;
    uint_io32_t		u1MSKB:1;
    uint_io32_t		:1;
    uint_io32_t		u10OVHD:10;
    uint_io32_t		u6CKRT:6;
}stc_i2sn_cntreg_field_t;

typedef union un_i2sn_cntreg{
    uint_io32_t		u32Register;
    stc_i2sn_cntreg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_cntreg_t;

/* MCR0REG */
#define I2S0_MCR0REG	(I2S0.unMCR0REG.u32Register)  /*@rg@*/
#define I2S0_MCR0REG_S0WDL	(I2S0.unMCR0REG.stcField.u5S0WDL)  /*@bf@*/
#define I2S0_MCR0REG_S0CHL	(I2S0.unMCR0REG.stcField.u5S0CHL)  /*@bf@*/
#define I2S0_MCR0REG_S0CHN	(I2S0.unMCR0REG.stcField.u5S0CHN)  /*@bf@*/
#define I2S0_MCR0REG_S1WDL	(I2S0.unMCR0REG.stcField.u5S1WDL)  /*@bf@*/
#define I2S0_MCR0REG_S1CHL	(I2S0.unMCR0REG.stcField.u5S1CHL)  /*@bf@*/
#define I2S0_MCR0REG_S1CHN	(I2S0.unMCR0REG.stcField.u5S1CHN)  /*@bf@*/

#define I2S1_MCR0REG	(I2S1.unMCR0REG.u32Register)  /*@rg@*/
#define I2S1_MCR0REG_S0WDL	(I2S1.unMCR0REG.stcField.u5S0WDL)  /*@bf@*/
#define I2S1_MCR0REG_S0CHL	(I2S1.unMCR0REG.stcField.u5S0CHL)  /*@bf@*/
#define I2S1_MCR0REG_S0CHN	(I2S1.unMCR0REG.stcField.u5S0CHN)  /*@bf@*/
#define I2S1_MCR0REG_S1WDL	(I2S1.unMCR0REG.stcField.u5S1WDL)  /*@bf@*/
#define I2S1_MCR0REG_S1CHL	(I2S1.unMCR0REG.stcField.u5S1CHL)  /*@bf@*/
#define I2S1_MCR0REG_S1CHN	(I2S1.unMCR0REG.stcField.u5S1CHN)  /*@bf@*/

typedef struct stc_i2sn_mcr0reg_field{
    uint_io32_t		u5S0WDL:5;
    uint_io32_t		u5S0CHL:5;
    uint_io32_t		u5S0CHN:5;
    uint_io32_t		:1;
    uint_io32_t		u5S1WDL:5;
    uint_io32_t		u5S1CHL:5;
    uint_io32_t		u5S1CHN:5;
    uint_io32_t		:1;
}stc_i2sn_mcr0reg_field_t;

typedef union un_i2sn_mcr0reg{
    uint_io32_t		u32Register;
    stc_i2sn_mcr0reg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_mcr0reg_t;

/* MCR1REG */
#define I2S0_MCR1REG	(I2S0.unMCR1REG.u32Register)  /*@rg@*/
#define I2S0_MCR1REG_S0CH0	(I2S0.unMCR1REG.stcField.u1S0CH0)  /*@bf@*/
#define I2S0_MCR1REG_S0CH1	(I2S0.unMCR1REG.stcField.u1S0CH1)  /*@bf@*/
#define I2S0_MCR1REG_S0CH2	(I2S0.unMCR1REG.stcField.u1S0CH2)  /*@bf@*/
#define I2S0_MCR1REG_S0CH3	(I2S0.unMCR1REG.stcField.u1S0CH3)  /*@bf@*/
#define I2S0_MCR1REG_S0CH4	(I2S0.unMCR1REG.stcField.u1S0CH4)  /*@bf@*/
#define I2S0_MCR1REG_S0CH5	(I2S0.unMCR1REG.stcField.u1S0CH5)  /*@bf@*/
#define I2S0_MCR1REG_S0CH6	(I2S0.unMCR1REG.stcField.u1S0CH6)  /*@bf@*/
#define I2S0_MCR1REG_S0CH7	(I2S0.unMCR1REG.stcField.u1S0CH7)  /*@bf@*/
#define I2S0_MCR1REG_S0CH8	(I2S0.unMCR1REG.stcField.u1S0CH8)  /*@bf@*/
#define I2S0_MCR1REG_S0CH9	(I2S0.unMCR1REG.stcField.u1S0CH9)  /*@bf@*/
#define I2S0_MCR1REG_S0CH10	(I2S0.unMCR1REG.stcField.u1S0CH10)  /*@bf@*/
#define I2S0_MCR1REG_S0CH11	(I2S0.unMCR1REG.stcField.u1S0CH11)  /*@bf@*/
#define I2S0_MCR1REG_S0CH12	(I2S0.unMCR1REG.stcField.u1S0CH12)  /*@bf@*/
#define I2S0_MCR1REG_S0CH13	(I2S0.unMCR1REG.stcField.u1S0CH13)  /*@bf@*/
#define I2S0_MCR1REG_S0CH14	(I2S0.unMCR1REG.stcField.u1S0CH14)  /*@bf@*/
#define I2S0_MCR1REG_S0CH15	(I2S0.unMCR1REG.stcField.u1S0CH15)  /*@bf@*/
#define I2S0_MCR1REG_S0CH16	(I2S0.unMCR1REG.stcField.u1S0CH16)  /*@bf@*/
#define I2S0_MCR1REG_S0CH17	(I2S0.unMCR1REG.stcField.u1S0CH17)  /*@bf@*/
#define I2S0_MCR1REG_S0CH18	(I2S0.unMCR1REG.stcField.u1S0CH18)  /*@bf@*/
#define I2S0_MCR1REG_S0CH19	(I2S0.unMCR1REG.stcField.u1S0CH19)  /*@bf@*/
#define I2S0_MCR1REG_S0CH20	(I2S0.unMCR1REG.stcField.u1S0CH20)  /*@bf@*/
#define I2S0_MCR1REG_S0CH21	(I2S0.unMCR1REG.stcField.u1S0CH21)  /*@bf@*/
#define I2S0_MCR1REG_S0CH22	(I2S0.unMCR1REG.stcField.u1S0CH22)  /*@bf@*/
#define I2S0_MCR1REG_S0CH23	(I2S0.unMCR1REG.stcField.u1S0CH23)  /*@bf@*/
#define I2S0_MCR1REG_S0CH24	(I2S0.unMCR1REG.stcField.u1S0CH24)  /*@bf@*/
#define I2S0_MCR1REG_S0CH25	(I2S0.unMCR1REG.stcField.u1S0CH25)  /*@bf@*/
#define I2S0_MCR1REG_S0CH26	(I2S0.unMCR1REG.stcField.u1S0CH26)  /*@bf@*/
#define I2S0_MCR1REG_S0CH27	(I2S0.unMCR1REG.stcField.u1S0CH27)  /*@bf@*/
#define I2S0_MCR1REG_S0CH28	(I2S0.unMCR1REG.stcField.u1S0CH28)  /*@bf@*/
#define I2S0_MCR1REG_S0CH29	(I2S0.unMCR1REG.stcField.u1S0CH29)  /*@bf@*/
#define I2S0_MCR1REG_S0CH30	(I2S0.unMCR1REG.stcField.u1S0CH30)  /*@bf@*/
#define I2S0_MCR1REG_S0CH31	(I2S0.unMCR1REG.stcField.u1S0CH31)  /*@bf@*/

#define I2S1_MCR1REG	(I2S1.unMCR1REG.u32Register)  /*@rg@*/
#define I2S1_MCR1REG_S0CH0	(I2S1.unMCR1REG.stcField.u1S0CH0)  /*@bf@*/
#define I2S1_MCR1REG_S0CH1	(I2S1.unMCR1REG.stcField.u1S0CH1)  /*@bf@*/
#define I2S1_MCR1REG_S0CH2	(I2S1.unMCR1REG.stcField.u1S0CH2)  /*@bf@*/
#define I2S1_MCR1REG_S0CH3	(I2S1.unMCR1REG.stcField.u1S0CH3)  /*@bf@*/
#define I2S1_MCR1REG_S0CH4	(I2S1.unMCR1REG.stcField.u1S0CH4)  /*@bf@*/
#define I2S1_MCR1REG_S0CH5	(I2S1.unMCR1REG.stcField.u1S0CH5)  /*@bf@*/
#define I2S1_MCR1REG_S0CH6	(I2S1.unMCR1REG.stcField.u1S0CH6)  /*@bf@*/
#define I2S1_MCR1REG_S0CH7	(I2S1.unMCR1REG.stcField.u1S0CH7)  /*@bf@*/
#define I2S1_MCR1REG_S0CH8	(I2S1.unMCR1REG.stcField.u1S0CH8)  /*@bf@*/
#define I2S1_MCR1REG_S0CH9	(I2S1.unMCR1REG.stcField.u1S0CH9)  /*@bf@*/
#define I2S1_MCR1REG_S0CH10	(I2S1.unMCR1REG.stcField.u1S0CH10)  /*@bf@*/
#define I2S1_MCR1REG_S0CH11	(I2S1.unMCR1REG.stcField.u1S0CH11)  /*@bf@*/
#define I2S1_MCR1REG_S0CH12	(I2S1.unMCR1REG.stcField.u1S0CH12)  /*@bf@*/
#define I2S1_MCR1REG_S0CH13	(I2S1.unMCR1REG.stcField.u1S0CH13)  /*@bf@*/
#define I2S1_MCR1REG_S0CH14	(I2S1.unMCR1REG.stcField.u1S0CH14)  /*@bf@*/
#define I2S1_MCR1REG_S0CH15	(I2S1.unMCR1REG.stcField.u1S0CH15)  /*@bf@*/
#define I2S1_MCR1REG_S0CH16	(I2S1.unMCR1REG.stcField.u1S0CH16)  /*@bf@*/
#define I2S1_MCR1REG_S0CH17	(I2S1.unMCR1REG.stcField.u1S0CH17)  /*@bf@*/
#define I2S1_MCR1REG_S0CH18	(I2S1.unMCR1REG.stcField.u1S0CH18)  /*@bf@*/
#define I2S1_MCR1REG_S0CH19	(I2S1.unMCR1REG.stcField.u1S0CH19)  /*@bf@*/
#define I2S1_MCR1REG_S0CH20	(I2S1.unMCR1REG.stcField.u1S0CH20)  /*@bf@*/
#define I2S1_MCR1REG_S0CH21	(I2S1.unMCR1REG.stcField.u1S0CH21)  /*@bf@*/
#define I2S1_MCR1REG_S0CH22	(I2S1.unMCR1REG.stcField.u1S0CH22)  /*@bf@*/
#define I2S1_MCR1REG_S0CH23	(I2S1.unMCR1REG.stcField.u1S0CH23)  /*@bf@*/
#define I2S1_MCR1REG_S0CH24	(I2S1.unMCR1REG.stcField.u1S0CH24)  /*@bf@*/
#define I2S1_MCR1REG_S0CH25	(I2S1.unMCR1REG.stcField.u1S0CH25)  /*@bf@*/
#define I2S1_MCR1REG_S0CH26	(I2S1.unMCR1REG.stcField.u1S0CH26)  /*@bf@*/
#define I2S1_MCR1REG_S0CH27	(I2S1.unMCR1REG.stcField.u1S0CH27)  /*@bf@*/
#define I2S1_MCR1REG_S0CH28	(I2S1.unMCR1REG.stcField.u1S0CH28)  /*@bf@*/
#define I2S1_MCR1REG_S0CH29	(I2S1.unMCR1REG.stcField.u1S0CH29)  /*@bf@*/
#define I2S1_MCR1REG_S0CH30	(I2S1.unMCR1REG.stcField.u1S0CH30)  /*@bf@*/
#define I2S1_MCR1REG_S0CH31	(I2S1.unMCR1REG.stcField.u1S0CH31)  /*@bf@*/

typedef struct stc_i2sn_mcr1reg_field{
    uint_io32_t		u1S0CH0:1;
    uint_io32_t		u1S0CH1:1;
    uint_io32_t		u1S0CH2:1;
    uint_io32_t		u1S0CH3:1;
    uint_io32_t		u1S0CH4:1;
    uint_io32_t		u1S0CH5:1;
    uint_io32_t		u1S0CH6:1;
    uint_io32_t		u1S0CH7:1;
    uint_io32_t		u1S0CH8:1;
    uint_io32_t		u1S0CH9:1;
    uint_io32_t		u1S0CH10:1;
    uint_io32_t		u1S0CH11:1;
    uint_io32_t		u1S0CH12:1;
    uint_io32_t		u1S0CH13:1;
    uint_io32_t		u1S0CH14:1;
    uint_io32_t		u1S0CH15:1;
    uint_io32_t		u1S0CH16:1;
    uint_io32_t		u1S0CH17:1;
    uint_io32_t		u1S0CH18:1;
    uint_io32_t		u1S0CH19:1;
    uint_io32_t		u1S0CH20:1;
    uint_io32_t		u1S0CH21:1;
    uint_io32_t		u1S0CH22:1;
    uint_io32_t		u1S0CH23:1;
    uint_io32_t		u1S0CH24:1;
    uint_io32_t		u1S0CH25:1;
    uint_io32_t		u1S0CH26:1;
    uint_io32_t		u1S0CH27:1;
    uint_io32_t		u1S0CH28:1;
    uint_io32_t		u1S0CH29:1;
    uint_io32_t		u1S0CH30:1;
    uint_io32_t		u1S0CH31:1;
}stc_i2sn_mcr1reg_field_t;

typedef union un_i2sn_mcr1reg{
    uint_io32_t		u32Register;
    stc_i2sn_mcr1reg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_mcr1reg_t;

/* MCR2REG */
#define I2S0_MCR2REG	(I2S0.unMCR2REG.u32Register)  /*@rg@*/
#define I2S0_MCR2REG_S1CH0	(I2S0.unMCR2REG.stcField.u1S1CH0)  /*@bf@*/
#define I2S0_MCR2REG_S1CH1	(I2S0.unMCR2REG.stcField.u1S1CH1)  /*@bf@*/
#define I2S0_MCR2REG_S1CH2	(I2S0.unMCR2REG.stcField.u1S1CH2)  /*@bf@*/
#define I2S0_MCR2REG_S1CH3	(I2S0.unMCR2REG.stcField.u1S1CH3)  /*@bf@*/
#define I2S0_MCR2REG_S1CH4	(I2S0.unMCR2REG.stcField.u1S1CH4)  /*@bf@*/
#define I2S0_MCR2REG_S1CH5	(I2S0.unMCR2REG.stcField.u1S1CH5)  /*@bf@*/
#define I2S0_MCR2REG_S1CH6	(I2S0.unMCR2REG.stcField.u1S1CH6)  /*@bf@*/
#define I2S0_MCR2REG_S1CH7	(I2S0.unMCR2REG.stcField.u1S1CH7)  /*@bf@*/
#define I2S0_MCR2REG_S1CH8	(I2S0.unMCR2REG.stcField.u1S1CH8)  /*@bf@*/
#define I2S0_MCR2REG_S1CH9	(I2S0.unMCR2REG.stcField.u1S1CH9)  /*@bf@*/
#define I2S0_MCR2REG_S1CH10	(I2S0.unMCR2REG.stcField.u1S1CH10)  /*@bf@*/
#define I2S0_MCR2REG_S1CH11	(I2S0.unMCR2REG.stcField.u1S1CH11)  /*@bf@*/
#define I2S0_MCR2REG_S1CH12	(I2S0.unMCR2REG.stcField.u1S1CH12)  /*@bf@*/
#define I2S0_MCR2REG_S1CH13	(I2S0.unMCR2REG.stcField.u1S1CH13)  /*@bf@*/
#define I2S0_MCR2REG_S1CH14	(I2S0.unMCR2REG.stcField.u1S1CH14)  /*@bf@*/
#define I2S0_MCR2REG_S1CH15	(I2S0.unMCR2REG.stcField.u1S1CH15)  /*@bf@*/
#define I2S0_MCR2REG_S1CH16	(I2S0.unMCR2REG.stcField.u1S1CH16)  /*@bf@*/
#define I2S0_MCR2REG_S1CH17	(I2S0.unMCR2REG.stcField.u1S1CH17)  /*@bf@*/
#define I2S0_MCR2REG_S1CH18	(I2S0.unMCR2REG.stcField.u1S1CH18)  /*@bf@*/
#define I2S0_MCR2REG_S1CH19	(I2S0.unMCR2REG.stcField.u1S1CH19)  /*@bf@*/
#define I2S0_MCR2REG_S1CH20	(I2S0.unMCR2REG.stcField.u1S1CH20)  /*@bf@*/
#define I2S0_MCR2REG_S1CH21	(I2S0.unMCR2REG.stcField.u1S1CH21)  /*@bf@*/
#define I2S0_MCR2REG_S1CH22	(I2S0.unMCR2REG.stcField.u1S1CH22)  /*@bf@*/
#define I2S0_MCR2REG_S1CH23	(I2S0.unMCR2REG.stcField.u1S1CH23)  /*@bf@*/
#define I2S0_MCR2REG_S1CH24	(I2S0.unMCR2REG.stcField.u1S1CH24)  /*@bf@*/
#define I2S0_MCR2REG_S1CH25	(I2S0.unMCR2REG.stcField.u1S1CH25)  /*@bf@*/
#define I2S0_MCR2REG_S1CH26	(I2S0.unMCR2REG.stcField.u1S1CH26)  /*@bf@*/
#define I2S0_MCR2REG_S1CH27	(I2S0.unMCR2REG.stcField.u1S1CH27)  /*@bf@*/
#define I2S0_MCR2REG_S1CH28	(I2S0.unMCR2REG.stcField.u1S1CH28)  /*@bf@*/
#define I2S0_MCR2REG_S1CH29	(I2S0.unMCR2REG.stcField.u1S1CH29)  /*@bf@*/
#define I2S0_MCR2REG_S1CH30	(I2S0.unMCR2REG.stcField.u1S1CH30)  /*@bf@*/
#define I2S0_MCR2REG_S1CH31	(I2S0.unMCR2REG.stcField.u1S1CH31)  /*@bf@*/

#define I2S1_MCR2REG	(I2S1.unMCR2REG.u32Register)  /*@rg@*/
#define I2S1_MCR2REG_S1CH0	(I2S1.unMCR2REG.stcField.u1S1CH0)  /*@bf@*/
#define I2S1_MCR2REG_S1CH1	(I2S1.unMCR2REG.stcField.u1S1CH1)  /*@bf@*/
#define I2S1_MCR2REG_S1CH2	(I2S1.unMCR2REG.stcField.u1S1CH2)  /*@bf@*/
#define I2S1_MCR2REG_S1CH3	(I2S1.unMCR2REG.stcField.u1S1CH3)  /*@bf@*/
#define I2S1_MCR2REG_S1CH4	(I2S1.unMCR2REG.stcField.u1S1CH4)  /*@bf@*/
#define I2S1_MCR2REG_S1CH5	(I2S1.unMCR2REG.stcField.u1S1CH5)  /*@bf@*/
#define I2S1_MCR2REG_S1CH6	(I2S1.unMCR2REG.stcField.u1S1CH6)  /*@bf@*/
#define I2S1_MCR2REG_S1CH7	(I2S1.unMCR2REG.stcField.u1S1CH7)  /*@bf@*/
#define I2S1_MCR2REG_S1CH8	(I2S1.unMCR2REG.stcField.u1S1CH8)  /*@bf@*/
#define I2S1_MCR2REG_S1CH9	(I2S1.unMCR2REG.stcField.u1S1CH9)  /*@bf@*/
#define I2S1_MCR2REG_S1CH10	(I2S1.unMCR2REG.stcField.u1S1CH10)  /*@bf@*/
#define I2S1_MCR2REG_S1CH11	(I2S1.unMCR2REG.stcField.u1S1CH11)  /*@bf@*/
#define I2S1_MCR2REG_S1CH12	(I2S1.unMCR2REG.stcField.u1S1CH12)  /*@bf@*/
#define I2S1_MCR2REG_S1CH13	(I2S1.unMCR2REG.stcField.u1S1CH13)  /*@bf@*/
#define I2S1_MCR2REG_S1CH14	(I2S1.unMCR2REG.stcField.u1S1CH14)  /*@bf@*/
#define I2S1_MCR2REG_S1CH15	(I2S1.unMCR2REG.stcField.u1S1CH15)  /*@bf@*/
#define I2S1_MCR2REG_S1CH16	(I2S1.unMCR2REG.stcField.u1S1CH16)  /*@bf@*/
#define I2S1_MCR2REG_S1CH17	(I2S1.unMCR2REG.stcField.u1S1CH17)  /*@bf@*/
#define I2S1_MCR2REG_S1CH18	(I2S1.unMCR2REG.stcField.u1S1CH18)  /*@bf@*/
#define I2S1_MCR2REG_S1CH19	(I2S1.unMCR2REG.stcField.u1S1CH19)  /*@bf@*/
#define I2S1_MCR2REG_S1CH20	(I2S1.unMCR2REG.stcField.u1S1CH20)  /*@bf@*/
#define I2S1_MCR2REG_S1CH21	(I2S1.unMCR2REG.stcField.u1S1CH21)  /*@bf@*/
#define I2S1_MCR2REG_S1CH22	(I2S1.unMCR2REG.stcField.u1S1CH22)  /*@bf@*/
#define I2S1_MCR2REG_S1CH23	(I2S1.unMCR2REG.stcField.u1S1CH23)  /*@bf@*/
#define I2S1_MCR2REG_S1CH24	(I2S1.unMCR2REG.stcField.u1S1CH24)  /*@bf@*/
#define I2S1_MCR2REG_S1CH25	(I2S1.unMCR2REG.stcField.u1S1CH25)  /*@bf@*/
#define I2S1_MCR2REG_S1CH26	(I2S1.unMCR2REG.stcField.u1S1CH26)  /*@bf@*/
#define I2S1_MCR2REG_S1CH27	(I2S1.unMCR2REG.stcField.u1S1CH27)  /*@bf@*/
#define I2S1_MCR2REG_S1CH28	(I2S1.unMCR2REG.stcField.u1S1CH28)  /*@bf@*/
#define I2S1_MCR2REG_S1CH29	(I2S1.unMCR2REG.stcField.u1S1CH29)  /*@bf@*/
#define I2S1_MCR2REG_S1CH30	(I2S1.unMCR2REG.stcField.u1S1CH30)  /*@bf@*/
#define I2S1_MCR2REG_S1CH31	(I2S1.unMCR2REG.stcField.u1S1CH31)  /*@bf@*/

typedef struct stc_i2sn_mcr2reg_field{
    uint_io32_t		u1S1CH0:1;
    uint_io32_t		u1S1CH1:1;
    uint_io32_t		u1S1CH2:1;
    uint_io32_t		u1S1CH3:1;
    uint_io32_t		u1S1CH4:1;
    uint_io32_t		u1S1CH5:1;
    uint_io32_t		u1S1CH6:1;
    uint_io32_t		u1S1CH7:1;
    uint_io32_t		u1S1CH8:1;
    uint_io32_t		u1S1CH9:1;
    uint_io32_t		u1S1CH10:1;
    uint_io32_t		u1S1CH11:1;
    uint_io32_t		u1S1CH12:1;
    uint_io32_t		u1S1CH13:1;
    uint_io32_t		u1S1CH14:1;
    uint_io32_t		u1S1CH15:1;
    uint_io32_t		u1S1CH16:1;
    uint_io32_t		u1S1CH17:1;
    uint_io32_t		u1S1CH18:1;
    uint_io32_t		u1S1CH19:1;
    uint_io32_t		u1S1CH20:1;
    uint_io32_t		u1S1CH21:1;
    uint_io32_t		u1S1CH22:1;
    uint_io32_t		u1S1CH23:1;
    uint_io32_t		u1S1CH24:1;
    uint_io32_t		u1S1CH25:1;
    uint_io32_t		u1S1CH26:1;
    uint_io32_t		u1S1CH27:1;
    uint_io32_t		u1S1CH28:1;
    uint_io32_t		u1S1CH29:1;
    uint_io32_t		u1S1CH30:1;
    uint_io32_t		u1S1CH31:1;
}stc_i2sn_mcr2reg_field_t;

typedef union un_i2sn_mcr2reg{
    uint_io32_t		u32Register;
    stc_i2sn_mcr2reg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_mcr2reg_t;

/* OPRREG */
#define I2S0_OPRREG	(I2S0.unOPRREG.u32Register)  /*@rg@*/
#define I2S0_OPRREG_START	(I2S0.unOPRREG.stcField.u1START)  /*@bf@*/
#define I2S0_OPRREG_TXENB	(I2S0.unOPRREG.stcField.u1TXENB)  /*@bf@*/
#define I2S0_OPRREG_RXENB	(I2S0.unOPRREG.stcField.u1RXENB)  /*@bf@*/

#define I2S1_OPRREG	(I2S1.unOPRREG.u32Register)  /*@rg@*/
#define I2S1_OPRREG_START	(I2S1.unOPRREG.stcField.u1START)  /*@bf@*/
#define I2S1_OPRREG_TXENB	(I2S1.unOPRREG.stcField.u1TXENB)  /*@bf@*/
#define I2S1_OPRREG_RXENB	(I2S1.unOPRREG.stcField.u1RXENB)  /*@bf@*/

typedef struct stc_i2sn_oprreg_field{
    uint_io32_t		u1START:1;
    uint_io32_t		:15;
    uint_io32_t		u1TXENB:1;
    uint_io32_t		:7;
    uint_io32_t		u1RXENB:1;
    uint_io32_t		:7;
}stc_i2sn_oprreg_field_t;

typedef union un_i2sn_oprreg{
    uint_io32_t		u32Register;
    stc_i2sn_oprreg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_oprreg_t;

/* SRST */
#define I2S0_SRST	(I2S0.unSRST.u32Register)  /*@rg@*/
#define I2S0_SRST_SRST	(I2S0.unSRST.stcField.u1SRST)  /*@bf@*/

#define I2S1_SRST	(I2S1.unSRST.u32Register)  /*@rg@*/
#define I2S1_SRST_SRST	(I2S1.unSRST.stcField.u1SRST)  /*@bf@*/

typedef struct stc_i2sn_srst_field{
    uint_io32_t		u1SRST:1;
    uint_io32_t		:31;
}stc_i2sn_srst_field_t;

typedef union un_i2sn_srst{
    uint_io32_t		u32Register;
    stc_i2sn_srst_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_srst_t;

/* INTCNT */
#define I2S0_INTCNT	(I2S0.unINTCNT.u32Register)  /*@rg@*/
#define I2S0_INTCNT_RFTH	(I2S0.unINTCNT.stcField.u4RFTH)  /*@bf@*/
#define I2S0_INTCNT_RPTMR	(I2S0.unINTCNT.stcField.u2RPTMR)  /*@bf@*/
#define I2S0_INTCNT_TFTH	(I2S0.unINTCNT.stcField.u4TFTH)  /*@bf@*/
#define I2S0_INTCNT_RXFIM	(I2S0.unINTCNT.stcField.u1RXFIM)  /*@bf@*/
#define I2S0_INTCNT_RXFDM	(I2S0.unINTCNT.stcField.u1RXFDM)  /*@bf@*/
#define I2S0_INTCNT_EOPM	(I2S0.unINTCNT.stcField.u1EOPM)  /*@bf@*/
#define I2S0_INTCNT_RXOVM	(I2S0.unINTCNT.stcField.u1RXOVM)  /*@bf@*/
#define I2S0_INTCNT_RXUDM	(I2S0.unINTCNT.stcField.u1RXUDM)  /*@bf@*/
#define I2S0_INTCNT_RBERM	(I2S0.unINTCNT.stcField.u1RBERM)  /*@bf@*/
#define I2S0_INTCNT_TXFIM	(I2S0.unINTCNT.stcField.u1TXFIM)  /*@bf@*/
#define I2S0_INTCNT_TXFDM	(I2S0.unINTCNT.stcField.u1TXFDM)  /*@bf@*/
#define I2S0_INTCNT_TXOVM	(I2S0.unINTCNT.stcField.u1TXOVM)  /*@bf@*/
#define I2S0_INTCNT_TXUD0M	(I2S0.unINTCNT.stcField.u1TXUD0M)  /*@bf@*/
#define I2S0_INTCNT_FERRM	(I2S0.unINTCNT.stcField.u1FERRM)  /*@bf@*/
#define I2S0_INTCNT_TBERM	(I2S0.unINTCNT.stcField.u1TBERM)  /*@bf@*/
#define I2S0_INTCNT_TXUD1M	(I2S0.unINTCNT.stcField.u1TXUD1M)  /*@bf@*/

#define I2S1_INTCNT	(I2S1.unINTCNT.u32Register)  /*@rg@*/
#define I2S1_INTCNT_RFTH	(I2S1.unINTCNT.stcField.u4RFTH)  /*@bf@*/
#define I2S1_INTCNT_RPTMR	(I2S1.unINTCNT.stcField.u2RPTMR)  /*@bf@*/
#define I2S1_INTCNT_TFTH	(I2S1.unINTCNT.stcField.u4TFTH)  /*@bf@*/
#define I2S1_INTCNT_RXFIM	(I2S1.unINTCNT.stcField.u1RXFIM)  /*@bf@*/
#define I2S1_INTCNT_RXFDM	(I2S1.unINTCNT.stcField.u1RXFDM)  /*@bf@*/
#define I2S1_INTCNT_EOPM	(I2S1.unINTCNT.stcField.u1EOPM)  /*@bf@*/
#define I2S1_INTCNT_RXOVM	(I2S1.unINTCNT.stcField.u1RXOVM)  /*@bf@*/
#define I2S1_INTCNT_RXUDM	(I2S1.unINTCNT.stcField.u1RXUDM)  /*@bf@*/
#define I2S1_INTCNT_RBERM	(I2S1.unINTCNT.stcField.u1RBERM)  /*@bf@*/
#define I2S1_INTCNT_TXFIM	(I2S1.unINTCNT.stcField.u1TXFIM)  /*@bf@*/
#define I2S1_INTCNT_TXFDM	(I2S1.unINTCNT.stcField.u1TXFDM)  /*@bf@*/
#define I2S1_INTCNT_TXOVM	(I2S1.unINTCNT.stcField.u1TXOVM)  /*@bf@*/
#define I2S1_INTCNT_TXUD0M	(I2S1.unINTCNT.stcField.u1TXUD0M)  /*@bf@*/
#define I2S1_INTCNT_FERRM	(I2S1.unINTCNT.stcField.u1FERRM)  /*@bf@*/
#define I2S1_INTCNT_TBERM	(I2S1.unINTCNT.stcField.u1TBERM)  /*@bf@*/
#define I2S1_INTCNT_TXUD1M	(I2S1.unINTCNT.stcField.u1TXUD1M)  /*@bf@*/

typedef struct stc_i2sn_intcnt_field{
    uint_io32_t		u4RFTH:4;
    uint_io32_t		u2RPTMR:2;
    uint_io32_t		:2;
    uint_io32_t		u4TFTH:4;
    uint_io32_t		:4;
    uint_io32_t		u1RXFIM:1;
    uint_io32_t		u1RXFDM:1;
    uint_io32_t		u1EOPM:1;
    uint_io32_t		u1RXOVM:1;
    uint_io32_t		u1RXUDM:1;
    uint_io32_t		u1RBERM:1;
    uint_io32_t		:2;
    uint_io32_t		u1TXFIM:1;
    uint_io32_t		u1TXFDM:1;
    uint_io32_t		u1TXOVM:1;
    uint_io32_t		u1TXUD0M:1;
    uint_io32_t		u1FERRM:1;
    uint_io32_t		u1TBERM:1;
    uint_io32_t		u1TXUD1M:1;
    uint_io32_t		:1;
}stc_i2sn_intcnt_field_t;

typedef union un_i2sn_intcnt{
    uint_io32_t		u32Register;
    stc_i2sn_intcnt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_intcnt_t;

/* STATUS */
#define I2S0_STATUS	(I2S0.unSTATUS.u32Register)  /*@rg@*/
#define I2S0_STATUS_RXNUM	(I2S0.unSTATUS.au8Byte[0])  /*@bfbyte@*/
#define I2S0_STATUS_TXNUM	(I2S0.unSTATUS.au8Byte[1])  /*@bfbyte@*/
#define I2S0_STATUS_RXFI	(I2S0.unSTATUS.stcField.u1RXFI)  /*@bf@*/
#define I2S0_STATUS_TXFI	(I2S0.unSTATUS.stcField.u1TXFI)  /*@bf@*/
#define I2S0_STATUS_BSY	(I2S0.unSTATUS.stcField.u1BSY)  /*@bf@*/
#define I2S0_STATUS_EOPI	(I2S0.unSTATUS.stcField.u1EOPI)  /*@bf@*/
#define I2S0_STATUS_RXOVR	(I2S0.unSTATUS.stcField.u1RXOVR)  /*@bf@*/
#define I2S0_STATUS_RXUDR	(I2S0.unSTATUS.stcField.u1RXUDR)  /*@bf@*/
#define I2S0_STATUS_TXOVR	(I2S0.unSTATUS.stcField.u1TXOVR)  /*@bf@*/
#define I2S0_STATUS_TXUDR0	(I2S0.unSTATUS.stcField.u1TXUDR0)  /*@bf@*/
#define I2S0_STATUS_TXUDR1	(I2S0.unSTATUS.stcField.u1TXUDR1)  /*@bf@*/
#define I2S0_STATUS_FERR	(I2S0.unSTATUS.stcField.u1FERR)  /*@bf@*/
#define I2S0_STATUS_RBERR	(I2S0.unSTATUS.stcField.u1RBERR)  /*@bf@*/
#define I2S0_STATUS_TBERR	(I2S0.unSTATUS.stcField.u1TBERR)  /*@bf@*/

#define I2S1_STATUS	(I2S1.unSTATUS.u32Register)  /*@rg@*/
#define I2S1_STATUS_RXNUM	(I2S1.unSTATUS.au8Byte[0])  /*@bfbyte@*/
#define I2S1_STATUS_TXNUM	(I2S1.unSTATUS.au8Byte[1])  /*@bfbyte@*/
#define I2S1_STATUS_RXFI	(I2S1.unSTATUS.stcField.u1RXFI)  /*@bf@*/
#define I2S1_STATUS_TXFI	(I2S1.unSTATUS.stcField.u1TXFI)  /*@bf@*/
#define I2S1_STATUS_BSY	(I2S1.unSTATUS.stcField.u1BSY)  /*@bf@*/
#define I2S1_STATUS_EOPI	(I2S1.unSTATUS.stcField.u1EOPI)  /*@bf@*/
#define I2S1_STATUS_RXOVR	(I2S1.unSTATUS.stcField.u1RXOVR)  /*@bf@*/
#define I2S1_STATUS_RXUDR	(I2S1.unSTATUS.stcField.u1RXUDR)  /*@bf@*/
#define I2S1_STATUS_TXOVR	(I2S1.unSTATUS.stcField.u1TXOVR)  /*@bf@*/
#define I2S1_STATUS_TXUDR0	(I2S1.unSTATUS.stcField.u1TXUDR0)  /*@bf@*/
#define I2S1_STATUS_TXUDR1	(I2S1.unSTATUS.stcField.u1TXUDR1)  /*@bf@*/
#define I2S1_STATUS_FERR	(I2S1.unSTATUS.stcField.u1FERR)  /*@bf@*/
#define I2S1_STATUS_RBERR	(I2S1.unSTATUS.stcField.u1RBERR)  /*@bf@*/
#define I2S1_STATUS_TBERR	(I2S1.unSTATUS.stcField.u1TBERR)  /*@bf@*/

typedef struct stc_i2sn_status_field{
    uint_io32_t		u8RXNUM:8;
    uint_io32_t		u8TXNUM:8;
    uint_io32_t		u1RXFI:1;
    uint_io32_t		u1TXFI:1;
    uint_io32_t		u1BSY:1;
    uint_io32_t		u1EOPI:1;
    uint_io32_t		:4;
    uint_io32_t		u1RXOVR:1;
    uint_io32_t		u1RXUDR:1;
    uint_io32_t		u1TXOVR:1;
    uint_io32_t		u1TXUDR0:1;
    uint_io32_t		u1TXUDR1:1;
    uint_io32_t		u1FERR:1;
    uint_io32_t		u1RBERR:1;
    uint_io32_t		u1TBERR:1;
}stc_i2sn_status_field_t;

typedef union un_i2sn_status{
    uint_io32_t		u32Register;
    stc_i2sn_status_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_status_t;

/* DMAACT */
#define I2S0_DMAACT	(I2S0.unDMAACT.u32Register)  /*@rg@*/
#define I2S0_DMAACT_RDMACT	(I2S0.unDMAACT.stcField.u1RDMACT)  /*@bf@*/
#define I2S0_DMAACT_TDMACT	(I2S0.unDMAACT.stcField.u1TDMACT)  /*@bf@*/

#define I2S1_DMAACT	(I2S1.unDMAACT.u32Register)  /*@rg@*/
#define I2S1_DMAACT_RDMACT	(I2S1.unDMAACT.stcField.u1RDMACT)  /*@bf@*/
#define I2S1_DMAACT_TDMACT	(I2S1.unDMAACT.stcField.u1TDMACT)  /*@bf@*/

typedef struct stc_i2sn_dmaact_field{
    uint_io32_t		u1RDMACT:1;
    uint_io32_t		:15;
    uint_io32_t		u1TDMACT:1;
    uint_io32_t		:15;
}stc_i2sn_dmaact_field_t;

typedef union un_i2sn_dmaact{
    uint_io32_t		u32Register;
    stc_i2sn_dmaact_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_dmaact_t;

/* DEBUG */
#define I2S0_DEBUG	(I2S0.unDEBUG.u32Register)  /*@rg@*/
#define I2S0_DEBUG_DBGE	(I2S0.unDEBUG.stcField.u1DBGE)  /*@bf@*/

#define I2S1_DEBUG	(I2S1.unDEBUG.u32Register)  /*@rg@*/
#define I2S1_DEBUG_DBGE	(I2S1.unDEBUG.stcField.u1DBGE)  /*@bf@*/

typedef struct stc_i2sn_debug_field{
    uint_io32_t		u1DBGE:1;
    uint_io32_t		:31;
}stc_i2sn_debug_field_t;

typedef union un_i2sn_debug{
    uint_io32_t		u32Register;
    stc_i2sn_debug_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_debug_t;

/* MIDREG */
#define I2S0_MIDREG	(I2S0.unMIDREG.u32Register)  /*@rg@*/
#define I2S0_MIDREG_MID	I2S0_MIDREG  /*@bfrg@*/

#define I2S1_MIDREG	(I2S1.unMIDREG.u32Register)  /*@rg@*/
#define I2S1_MIDREG_MID	I2S1_MIDREG  /*@bfrg@*/

typedef union un_i2sn_midreg{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_i2sn_midreg_t;


typedef struct stc_i2sn{
    un_i2sn_rxfdatn_t	unRXFDAT0;	/* 0x00000000 */
    un_i2sn_rxfdatn_t	unRXFDAT1;	/* 0x00000004 */
    un_i2sn_rxfdatn_t	unRXFDAT2;	/* 0x00000008 */
    un_i2sn_rxfdatn_t	unRXFDAT3;	/* 0x0000000C */
    un_i2sn_rxfdatn_t	unRXFDAT4;	/* 0x00000010 */
    un_i2sn_rxfdatn_t	unRXFDAT5;	/* 0x00000014 */
    un_i2sn_rxfdatn_t	unRXFDAT6;	/* 0x00000018 */
    un_i2sn_rxfdatn_t	unRXFDAT7;	/* 0x0000001C */
    un_i2sn_rxfdatn_t	unRXFDAT8;	/* 0x00000020 */
    un_i2sn_rxfdatn_t	unRXFDAT9;	/* 0x00000024 */
    un_i2sn_rxfdatn_t	unRXFDAT10;	/* 0x00000028 */
    un_i2sn_rxfdatn_t	unRXFDAT11;	/* 0x0000002C */
    un_i2sn_rxfdatn_t	unRXFDAT12;	/* 0x00000030 */
    un_i2sn_rxfdatn_t	unRXFDAT13;	/* 0x00000034 */
    un_i2sn_rxfdatn_t	unRXFDAT14;	/* 0x00000038 */
    un_i2sn_rxfdatn_t	unRXFDAT15;	/* 0x0000003C */
    un_i2sn_txfdatn_t	unTXFDAT0;	/* 0x00000040 */
    un_i2sn_txfdatn_t	unTXFDAT1;	/* 0x00000044 */
    un_i2sn_txfdatn_t	unTXFDAT2;	/* 0x00000048 */
    un_i2sn_txfdatn_t	unTXFDAT3;	/* 0x0000004C */
    un_i2sn_txfdatn_t	unTXFDAT4;	/* 0x00000050 */
    un_i2sn_txfdatn_t	unTXFDAT5;	/* 0x00000054 */
    un_i2sn_txfdatn_t	unTXFDAT6;	/* 0x00000058 */
    un_i2sn_txfdatn_t	unTXFDAT7;	/* 0x0000005C */
    un_i2sn_txfdatn_t	unTXFDAT8;	/* 0x00000060 */
    un_i2sn_txfdatn_t	unTXFDAT9;	/* 0x00000064 */
    un_i2sn_txfdatn_t	unTXFDAT10;	/* 0x00000068 */
    un_i2sn_txfdatn_t	unTXFDAT11;	/* 0x0000006C */
    un_i2sn_txfdatn_t	unTXFDAT12;	/* 0x00000070 */
    un_i2sn_txfdatn_t	unTXFDAT13;	/* 0x00000074 */
    un_i2sn_txfdatn_t	unTXFDAT14;	/* 0x00000078 */
    un_i2sn_txfdatn_t	unTXFDAT15;	/* 0x0000007C */
    un_i2sn_cntreg_t	unCNTREG;	/* 0x00000080 */
    un_i2sn_mcr0reg_t	unMCR0REG;	/* 0x00000084 */
    un_i2sn_mcr1reg_t	unMCR1REG;	/* 0x00000088 */
    un_i2sn_mcr2reg_t	unMCR2REG;	/* 0x0000008C */
    un_i2sn_oprreg_t	unOPRREG;	/* 0x00000090 */
    un_i2sn_srst_t	unSRST;	/* 0x00000094 */
    un_i2sn_intcnt_t	unINTCNT;	/* 0x00000098 */
    un_i2sn_status_t	unSTATUS;	/* 0x0000009C */
    un_i2sn_dmaact_t	unDMAACT;	/* 0x000000A0 */
    un_i2sn_debug_t	unDEBUG;	/* 0x000000A4 */
    un_i2sn_midreg_t	unMIDREG;	/* 0x000000A8 */
    uint_io8_t	au8Reserved0[852];	/* 0x000000AC */
}stc_i2sn_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_i2sn_t	stcI2S[2];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_I2S_H */
