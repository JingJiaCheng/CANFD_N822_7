/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MFS_I2C_H
#define __S6J3200_MFS_I2C_H

#include "s6j3200io_basetypes.h"

/* CPG_MFS[00-04/08-12]_I2C base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define CPG_MFS00_I2C	stcCPG_MFS_I2C[0]
#define CPG_MFS01_I2C	stcCPG_MFS_I2C[1]
#define CPG_MFS02_I2C	stcCPG_MFS_I2C[2]
#define CPG_MFS03_I2C	stcCPG_MFS_I2C[3]
#define CPG_MFS04_I2C	stcCPG_MFS_I2C[4]
#define CPG_MFS08_I2C	stcCPG_MFS_I2C[5]
#define CPG_MFS09_I2C	stcCPG_MFS_I2C[6]
#define CPG_MFS10_I2C	stcCPG_MFS_I2C[7]
#define CPG_MFS11_I2C	stcCPG_MFS_I2C[8]
#define CPG_MFS12_I2C	stcCPG_MFS_I2C[9]
#else /* __IO_DEFINE */
#define CPG_MFS00_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4800000))
#define CPG_MFS01_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4800400))
#define CPG_MFS02_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4800800))
#define CPG_MFS03_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4800C00))
#define CPG_MFS04_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4801000))
#define CPG_MFS08_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4880000))
#define CPG_MFS09_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4880400))
#define CPG_MFS10_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4880800))
#define CPG_MFS11_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4880C00))
#define CPG_MFS12_I2C	(*((volatile stc_cpg_mfsn_i2c_t*)0xB4881000))
#endif /* __IO_DEFINE */

/* SMR */
#define CPG_MFS00_I2C_SMR	(CPG_MFS00_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7800002)  /*@bfbba@*/
#define CPG_MFS00_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7800003)  /*@bfbba@*/
#define CPG_MFS00_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7800004)  /*@bfbba@*/
#define CPG_MFS00_I2C_SMR_MD	(CPG_MFS00_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS01_I2C_SMR	(CPG_MFS01_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7802002)  /*@bfbba@*/
#define CPG_MFS01_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7802003)  /*@bfbba@*/
#define CPG_MFS01_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7802004)  /*@bfbba@*/
#define CPG_MFS01_I2C_SMR_MD	(CPG_MFS01_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS02_I2C_SMR	(CPG_MFS02_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7804002)  /*@bfbba@*/
#define CPG_MFS02_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7804003)  /*@bfbba@*/
#define CPG_MFS02_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7804004)  /*@bfbba@*/
#define CPG_MFS02_I2C_SMR_MD	(CPG_MFS02_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS03_I2C_SMR	(CPG_MFS03_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7806002)  /*@bfbba@*/
#define CPG_MFS03_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7806003)  /*@bfbba@*/
#define CPG_MFS03_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7806004)  /*@bfbba@*/
#define CPG_MFS03_I2C_SMR_MD	(CPG_MFS03_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS04_I2C_SMR	(CPG_MFS04_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7808002)  /*@bfbba@*/
#define CPG_MFS04_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7808003)  /*@bfbba@*/
#define CPG_MFS04_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7808004)  /*@bfbba@*/
#define CPG_MFS04_I2C_SMR_MD	(CPG_MFS04_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS08_I2C_SMR	(CPG_MFS08_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7C00002)  /*@bfbba@*/
#define CPG_MFS08_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7C00003)  /*@bfbba@*/
#define CPG_MFS08_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C00004)  /*@bfbba@*/
#define CPG_MFS08_I2C_SMR_MD	(CPG_MFS08_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS09_I2C_SMR	(CPG_MFS09_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7C02002)  /*@bfbba@*/
#define CPG_MFS09_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7C02003)  /*@bfbba@*/
#define CPG_MFS09_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C02004)  /*@bfbba@*/
#define CPG_MFS09_I2C_SMR_MD	(CPG_MFS09_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS10_I2C_SMR	(CPG_MFS10_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7C04002)  /*@bfbba@*/
#define CPG_MFS10_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7C04003)  /*@bfbba@*/
#define CPG_MFS10_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C04004)  /*@bfbba@*/
#define CPG_MFS10_I2C_SMR_MD	(CPG_MFS10_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS11_I2C_SMR	(CPG_MFS11_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7C06002)  /*@bfbba@*/
#define CPG_MFS11_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7C06003)  /*@bfbba@*/
#define CPG_MFS11_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C06004)  /*@bfbba@*/
#define CPG_MFS11_I2C_SMR_MD	(CPG_MFS11_I2C.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS12_I2C_SMR	(CPG_MFS12_I2C.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB7C08002)  /*@bfbba@*/
#define CPG_MFS12_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB7C08003)  /*@bfbba@*/
#define CPG_MFS12_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C08004)  /*@bfbba@*/
#define CPG_MFS12_I2C_SMR_MD	(CPG_MFS12_I2C.unSMR.stcField.u3MD)  /*@bf@*/

typedef struct stc_cpg_mfsn_i2c_smr_field{
    uint_io8_t		:2;
    uint_io8_t		u1TIE:1;
    uint_io8_t		u1RIE:1;
    uint_io8_t		u1WUCR:1;
    uint_io8_t		u3MD:3;
}stc_cpg_mfsn_i2c_smr_field_t;

typedef union un_cpg_mfsn_i2c_smr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_smr_field_t		stcField;
}un_cpg_mfsn_i2c_smr_t;

/* IBCR */
#define CPG_MFS00_I2C_IBCR	(CPG_MFS00_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7800008)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7800009)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB780000A)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB780000B)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB780000C)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB780000D)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB780000E)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB780000F)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCR_SCC	CPG_MFS00_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS01_I2C_IBCR	(CPG_MFS01_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7802008)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7802009)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB780200A)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB780200B)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB780200C)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB780200D)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB780200E)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB780200F)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCR_SCC	CPG_MFS01_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS02_I2C_IBCR	(CPG_MFS02_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7804008)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7804009)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB780400A)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB780400B)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB780400C)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB780400D)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB780400E)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB780400F)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCR_SCC	CPG_MFS02_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS03_I2C_IBCR	(CPG_MFS03_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7806008)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7806009)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB780600A)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB780600B)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB780600C)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB780600D)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB780600E)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB780600F)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCR_SCC	CPG_MFS03_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS04_I2C_IBCR	(CPG_MFS04_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7808008)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7808009)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB780800A)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB780800B)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB780800C)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB780800D)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB780800E)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB780800F)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCR_SCC	CPG_MFS04_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS08_I2C_IBCR	(CPG_MFS08_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7C00008)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7C00009)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB7C0000A)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB7C0000B)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB7C0000C)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB7C0000D)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB7C0000E)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB7C0000F)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCR_SCC	CPG_MFS08_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS09_I2C_IBCR	(CPG_MFS09_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7C02008)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7C02009)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB7C0200A)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB7C0200B)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB7C0200C)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB7C0200D)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB7C0200E)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB7C0200F)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCR_SCC	CPG_MFS09_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS10_I2C_IBCR	(CPG_MFS10_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7C04008)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7C04009)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB7C0400A)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB7C0400B)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB7C0400C)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB7C0400D)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB7C0400E)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB7C0400F)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCR_SCC	CPG_MFS10_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS11_I2C_IBCR	(CPG_MFS11_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7C06008)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7C06009)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB7C0600A)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB7C0600B)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB7C0600C)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB7C0600D)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB7C0600E)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB7C0600F)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCR_SCC	CPG_MFS11_I2C_IBCR_ACT  /*@bf2@*/

#define CPG_MFS12_I2C_IBCR	(CPG_MFS12_I2C.unIBCR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB7C08008)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB7C08009)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB7C0800A)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB7C0800B)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB7C0800C)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB7C0800D)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB7C0800E)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB7C0800F)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCR_SCC	CPG_MFS12_I2C_IBCR_ACT  /*@bf2@*/

typedef struct stc_cpg_mfsn_i2c_ibcr_field{
    uint_io8_t		u1INT:1;
    uint_io8_t		u1BER:1;
    uint_io8_t		u1INTE:1;
    uint_io8_t		u1CNDE:1;
    uint_io8_t		u1WSEL:1;
    uint_io8_t		u1ACKE:1;
    uint_io8_t		u1ACT:1;
    uint_io8_t		u1MSS:1;
}stc_cpg_mfsn_i2c_ibcr_field_t;

typedef union un_cpg_mfsn_i2c_ibcr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ibcr_field_t		stcField;
}un_cpg_mfsn_i2c_ibcr_t;

/* IBSR */
#define CPG_MFS00_I2C_IBSR	(CPG_MFS00_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7800010)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7800011)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7800012)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7800013)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7800014)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7800015)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7800016)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7800017)  /*@bfbba@*/

#define CPG_MFS01_I2C_IBSR	(CPG_MFS01_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7802010)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7802011)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7802012)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7802013)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7802014)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7802015)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7802016)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7802017)  /*@bfbba@*/

#define CPG_MFS02_I2C_IBSR	(CPG_MFS02_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7804010)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7804011)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7804012)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7804013)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7804014)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7804015)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7804016)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7804017)  /*@bfbba@*/

#define CPG_MFS03_I2C_IBSR	(CPG_MFS03_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7806010)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7806011)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7806012)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7806013)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7806014)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7806015)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7806016)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7806017)  /*@bfbba@*/

#define CPG_MFS04_I2C_IBSR	(CPG_MFS04_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7808010)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7808011)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7808012)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7808013)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7808014)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7808015)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7808016)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7808017)  /*@bfbba@*/

#define CPG_MFS08_I2C_IBSR	(CPG_MFS08_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7C00010)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7C00011)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7C00012)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7C00013)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7C00014)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7C00015)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7C00016)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7C00017)  /*@bfbba@*/

#define CPG_MFS09_I2C_IBSR	(CPG_MFS09_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7C02010)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7C02011)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7C02012)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7C02013)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7C02014)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7C02015)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7C02016)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7C02017)  /*@bfbba@*/

#define CPG_MFS10_I2C_IBSR	(CPG_MFS10_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7C04010)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7C04011)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7C04012)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7C04013)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7C04014)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7C04015)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7C04016)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7C04017)  /*@bfbba@*/

#define CPG_MFS11_I2C_IBSR	(CPG_MFS11_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7C06010)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7C06011)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7C06012)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7C06013)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7C06014)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7C06015)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7C06016)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7C06017)  /*@bfbba@*/

#define CPG_MFS12_I2C_IBSR	(CPG_MFS12_I2C.unIBSR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB7C08010)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB7C08011)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB7C08012)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB7C08013)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB7C08014)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB7C08015)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB7C08016)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB7C08017)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ibsr_field{
    uint_io8_t		u1BB:1;
    uint_io8_t		u1SPC:1;
    uint_io8_t		u1RSC:1;
    uint_io8_t		u1AL:1;
    uint_io8_t		u1TRX:1;
    uint_io8_t		u1RSA:1;
    uint_io8_t		u1RACK:1;
    uint_io8_t		u1FBT:1;
}stc_cpg_mfsn_i2c_ibsr_field_t;

typedef union un_cpg_mfsn_i2c_ibsr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ibsr_field_t		stcField;
}un_cpg_mfsn_i2c_ibsr_t;

/* SSR */
#define CPG_MFS00_I2C_SSR	(CPG_MFS00_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7800018)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7800019)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB780001A)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB780001B)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB780001C)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB780001D)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB780001E)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB780001F)  /*@bfbba@*/

#define CPG_MFS01_I2C_SSR	(CPG_MFS01_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7802018)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7802019)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB780201A)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB780201B)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB780201C)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB780201D)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB780201E)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB780201F)  /*@bfbba@*/

#define CPG_MFS02_I2C_SSR	(CPG_MFS02_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7804018)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7804019)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB780401A)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB780401B)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB780401C)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB780401D)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB780401E)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB780401F)  /*@bfbba@*/

#define CPG_MFS03_I2C_SSR	(CPG_MFS03_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7806018)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7806019)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB780601A)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB780601B)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB780601C)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB780601D)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB780601E)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB780601F)  /*@bfbba@*/

#define CPG_MFS04_I2C_SSR	(CPG_MFS04_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7808018)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7808019)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB780801A)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB780801B)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB780801C)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB780801D)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB780801E)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB780801F)  /*@bfbba@*/

#define CPG_MFS08_I2C_SSR	(CPG_MFS08_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7C00018)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C00019)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0001A)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0001B)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB7C0001C)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB7C0001D)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB7C0001E)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB7C0001F)  /*@bfbba@*/

#define CPG_MFS09_I2C_SSR	(CPG_MFS09_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7C02018)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C02019)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0201A)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0201B)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB7C0201C)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB7C0201D)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB7C0201E)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB7C0201F)  /*@bfbba@*/

#define CPG_MFS10_I2C_SSR	(CPG_MFS10_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7C04018)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C04019)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0401A)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0401B)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB7C0401C)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB7C0401D)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB7C0401E)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB7C0401F)  /*@bfbba@*/

#define CPG_MFS11_I2C_SSR	(CPG_MFS11_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7C06018)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C06019)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0601A)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0601B)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB7C0601C)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB7C0601D)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB7C0601E)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB7C0601F)  /*@bfbba@*/

#define CPG_MFS12_I2C_SSR	(CPG_MFS12_I2C.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB7C08018)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C08019)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0801A)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0801B)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB7C0801C)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB7C0801D)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB7C0801E)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB7C0801F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ssr_field{
    uint_io8_t		u1TBI:1;
    uint_io8_t		u1TDRE:1;
    uint_io8_t		u1RDRF:1;
    uint_io8_t		u1ORE:1;
    uint_io8_t		u1TBIE:1;
    uint_io8_t		u1DMA:1;
    uint_io8_t		u1TSET:1;
    uint_io8_t		u1REC:1;
}stc_cpg_mfsn_i2c_ssr_field_t;

typedef union un_cpg_mfsn_i2c_ssr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ssr_field_t		stcField;
}un_cpg_mfsn_i2c_ssr_t;

/* RDR */
#define CPG_MFS00_I2C_RDR	(CPG_MFS00_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_TDR	(CPG_MFS00_I2C_RDR)  /*@rg2@*/
#define CPG_MFS00_I2C_RDR_D	CPG_MFS00_I2C_RDR  /*@bfrg@*/
#define CPG_MFS00_I2C_TDR_D	CPG_MFS00_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS01_I2C_RDR	(CPG_MFS01_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_TDR	(CPG_MFS01_I2C_RDR)  /*@rg2@*/
#define CPG_MFS01_I2C_RDR_D	CPG_MFS01_I2C_RDR  /*@bfrg@*/
#define CPG_MFS01_I2C_TDR_D	CPG_MFS01_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS02_I2C_RDR	(CPG_MFS02_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_TDR	(CPG_MFS02_I2C_RDR)  /*@rg2@*/
#define CPG_MFS02_I2C_RDR_D	CPG_MFS02_I2C_RDR  /*@bfrg@*/
#define CPG_MFS02_I2C_TDR_D	CPG_MFS02_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS03_I2C_RDR	(CPG_MFS03_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_TDR	(CPG_MFS03_I2C_RDR)  /*@rg2@*/
#define CPG_MFS03_I2C_RDR_D	CPG_MFS03_I2C_RDR  /*@bfrg@*/
#define CPG_MFS03_I2C_TDR_D	CPG_MFS03_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS04_I2C_RDR	(CPG_MFS04_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_TDR	(CPG_MFS04_I2C_RDR)  /*@rg2@*/
#define CPG_MFS04_I2C_RDR_D	CPG_MFS04_I2C_RDR  /*@bfrg@*/
#define CPG_MFS04_I2C_TDR_D	CPG_MFS04_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS08_I2C_RDR	(CPG_MFS08_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_TDR	(CPG_MFS08_I2C_RDR)  /*@rg2@*/
#define CPG_MFS08_I2C_RDR_D	CPG_MFS08_I2C_RDR  /*@bfrg@*/
#define CPG_MFS08_I2C_TDR_D	CPG_MFS08_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS09_I2C_RDR	(CPG_MFS09_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_TDR	(CPG_MFS09_I2C_RDR)  /*@rg2@*/
#define CPG_MFS09_I2C_RDR_D	CPG_MFS09_I2C_RDR  /*@bfrg@*/
#define CPG_MFS09_I2C_TDR_D	CPG_MFS09_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS10_I2C_RDR	(CPG_MFS10_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_TDR	(CPG_MFS10_I2C_RDR)  /*@rg2@*/
#define CPG_MFS10_I2C_RDR_D	CPG_MFS10_I2C_RDR  /*@bfrg@*/
#define CPG_MFS10_I2C_TDR_D	CPG_MFS10_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS11_I2C_RDR	(CPG_MFS11_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_TDR	(CPG_MFS11_I2C_RDR)  /*@rg2@*/
#define CPG_MFS11_I2C_RDR_D	CPG_MFS11_I2C_RDR  /*@bfrg@*/
#define CPG_MFS11_I2C_TDR_D	CPG_MFS11_I2C_RDR_D  /*@bf2@*/

#define CPG_MFS12_I2C_RDR	(CPG_MFS12_I2C.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_TDR	(CPG_MFS12_I2C_RDR)  /*@rg2@*/
#define CPG_MFS12_I2C_RDR_D	CPG_MFS12_I2C_RDR  /*@bfrg@*/
#define CPG_MFS12_I2C_TDR_D	CPG_MFS12_I2C_RDR_D  /*@bf2@*/

typedef union un_cpg_mfsn_i2c_rdr{
    uint_io8_t		u8Register;
}un_cpg_mfsn_i2c_rdr_t;

/* SACSR */
#define CPG_MFS00_I2C_SACSR	(CPG_MFS00_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS00_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7800040)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSR_TDIV	(CPG_MFS00_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS00_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7800045)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7800047)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7800048)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSR_TRG	(CPG_MFS00_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS01_I2C_SACSR	(CPG_MFS01_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS01_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7802040)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSR_TDIV	(CPG_MFS01_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS01_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7802045)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7802047)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7802048)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSR_TRG	(CPG_MFS01_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS02_I2C_SACSR	(CPG_MFS02_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS02_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7804040)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSR_TDIV	(CPG_MFS02_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS02_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7804045)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7804047)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7804048)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSR_TRG	(CPG_MFS02_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS03_I2C_SACSR	(CPG_MFS03_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS03_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7806040)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSR_TDIV	(CPG_MFS03_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS03_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7806045)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7806047)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7806048)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSR_TRG	(CPG_MFS03_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS04_I2C_SACSR	(CPG_MFS04_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS04_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7808040)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSR_TDIV	(CPG_MFS04_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS04_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7808045)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7808047)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7808048)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSR_TRG	(CPG_MFS04_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS08_I2C_SACSR	(CPG_MFS08_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS08_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C00040)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSR_TDIV	(CPG_MFS08_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS08_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C00045)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C00047)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C00048)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSR_TRG	(CPG_MFS08_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS09_I2C_SACSR	(CPG_MFS09_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS09_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C02040)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSR_TDIV	(CPG_MFS09_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS09_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C02045)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C02047)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C02048)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSR_TRG	(CPG_MFS09_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS10_I2C_SACSR	(CPG_MFS10_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS10_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C04040)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSR_TDIV	(CPG_MFS10_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS10_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C04045)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C04047)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C04048)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSR_TRG	(CPG_MFS10_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS11_I2C_SACSR	(CPG_MFS11_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS11_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C06040)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSR_TDIV	(CPG_MFS11_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS11_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C06045)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C06047)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C06048)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSR_TRG	(CPG_MFS11_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

#define CPG_MFS12_I2C_SACSR	(CPG_MFS12_I2C.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS12_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C08040)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSR_TDIV	(CPG_MFS12_I2C.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS12_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C08045)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C08047)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C08048)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSR_TRG	(CPG_MFS12_I2C.unSACSR.stcField.u2TRG)  /*@bf@*/

typedef struct stc_cpg_mfsn_i2c_sacsr_field{
    uint_io16_t		u1TMRE:1;
    uint_io16_t		u4TDIV:4;
    uint_io16_t		u1TRGE:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTE:1;
    uint_io16_t		u1TINT:1;
    uint_io16_t		u2TRG:2;
    uint_io16_t		:5;
}stc_cpg_mfsn_i2c_sacsr_field_t;

typedef union un_cpg_mfsn_i2c_sacsr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_i2c_sacsr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_i2c_sacsr_t;

/* STMR */
#define CPG_MFS00_I2C_STMR	(CPG_MFS00_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS00_I2C_STMR_TM	CPG_MFS00_I2C_STMR  /*@bfrg@*/

#define CPG_MFS01_I2C_STMR	(CPG_MFS01_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS01_I2C_STMR_TM	CPG_MFS01_I2C_STMR  /*@bfrg@*/

#define CPG_MFS02_I2C_STMR	(CPG_MFS02_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS02_I2C_STMR_TM	CPG_MFS02_I2C_STMR  /*@bfrg@*/

#define CPG_MFS03_I2C_STMR	(CPG_MFS03_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS03_I2C_STMR_TM	CPG_MFS03_I2C_STMR  /*@bfrg@*/

#define CPG_MFS04_I2C_STMR	(CPG_MFS04_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS04_I2C_STMR_TM	CPG_MFS04_I2C_STMR  /*@bfrg@*/

#define CPG_MFS08_I2C_STMR	(CPG_MFS08_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS08_I2C_STMR_TM	CPG_MFS08_I2C_STMR  /*@bfrg@*/

#define CPG_MFS09_I2C_STMR	(CPG_MFS09_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS09_I2C_STMR_TM	CPG_MFS09_I2C_STMR  /*@bfrg@*/

#define CPG_MFS10_I2C_STMR	(CPG_MFS10_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS10_I2C_STMR_TM	CPG_MFS10_I2C_STMR  /*@bfrg@*/

#define CPG_MFS11_I2C_STMR	(CPG_MFS11_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS11_I2C_STMR_TM	CPG_MFS11_I2C_STMR  /*@bfrg@*/

#define CPG_MFS12_I2C_STMR	(CPG_MFS12_I2C.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS12_I2C_STMR_TM	CPG_MFS12_I2C_STMR  /*@bfrg@*/

typedef union un_cpg_mfsn_i2c_stmr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_i2c_stmr_t;

/* STMCR */
#define CPG_MFS00_I2C_STMCR	(CPG_MFS00_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS00_I2C_STMCR_TC	CPG_MFS00_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS01_I2C_STMCR	(CPG_MFS01_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS01_I2C_STMCR_TC	CPG_MFS01_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS02_I2C_STMCR	(CPG_MFS02_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS02_I2C_STMCR_TC	CPG_MFS02_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS03_I2C_STMCR	(CPG_MFS03_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS03_I2C_STMCR_TC	CPG_MFS03_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS04_I2C_STMCR	(CPG_MFS04_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS04_I2C_STMCR_TC	CPG_MFS04_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS08_I2C_STMCR	(CPG_MFS08_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS08_I2C_STMCR_TC	CPG_MFS08_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS09_I2C_STMCR	(CPG_MFS09_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS09_I2C_STMCR_TC	CPG_MFS09_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS10_I2C_STMCR	(CPG_MFS10_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS10_I2C_STMCR_TC	CPG_MFS10_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS11_I2C_STMCR	(CPG_MFS11_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS11_I2C_STMCR_TC	CPG_MFS11_I2C_STMCR  /*@bfrg@*/

#define CPG_MFS12_I2C_STMCR	(CPG_MFS12_I2C.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS12_I2C_STMCR_TC	CPG_MFS12_I2C_STMCR  /*@bfrg@*/

typedef union un_cpg_mfsn_i2c_stmcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_i2c_stmcr_t;

/* NFCR */
#define CPG_MFS00_I2C_NFCR	(CPG_MFS00_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_NFCR_NFT	(CPG_MFS00_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS01_I2C_NFCR	(CPG_MFS01_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_NFCR_NFT	(CPG_MFS01_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS02_I2C_NFCR	(CPG_MFS02_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_NFCR_NFT	(CPG_MFS02_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS03_I2C_NFCR	(CPG_MFS03_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_NFCR_NFT	(CPG_MFS03_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS04_I2C_NFCR	(CPG_MFS04_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_NFCR_NFT	(CPG_MFS04_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS08_I2C_NFCR	(CPG_MFS08_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_NFCR_NFT	(CPG_MFS08_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS09_I2C_NFCR	(CPG_MFS09_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_NFCR_NFT	(CPG_MFS09_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS10_I2C_NFCR	(CPG_MFS10_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_NFCR_NFT	(CPG_MFS10_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS11_I2C_NFCR	(CPG_MFS11_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_NFCR_NFT	(CPG_MFS11_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

#define CPG_MFS12_I2C_NFCR	(CPG_MFS12_I2C.unNFCR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_NFCR_NFT	(CPG_MFS12_I2C.unNFCR.stcField.u5NFT)  /*@bf@*/

typedef struct stc_cpg_mfsn_i2c_nfcr_field{
    uint_io8_t		u5NFT:5;
    uint_io8_t		:3;
}stc_cpg_mfsn_i2c_nfcr_field_t;

typedef union un_cpg_mfsn_i2c_nfcr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_nfcr_field_t		stcField;
}un_cpg_mfsn_i2c_nfcr_t;

/* EIBCR */
#define CPG_MFS00_I2C_EIBCR	(CPG_MFS00_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7800088)  /*@bfbba@*/
#define CPG_MFS00_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7800089)  /*@bfbba@*/
#define CPG_MFS00_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB780008A)  /*@bfbba@*/
#define CPG_MFS00_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB780008B)  /*@bfbba@*/
#define CPG_MFS00_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB780008C)  /*@bfbba@*/
#define CPG_MFS00_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB780008D)  /*@bfbba@*/

#define CPG_MFS01_I2C_EIBCR	(CPG_MFS01_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7802088)  /*@bfbba@*/
#define CPG_MFS01_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7802089)  /*@bfbba@*/
#define CPG_MFS01_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB780208A)  /*@bfbba@*/
#define CPG_MFS01_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB780208B)  /*@bfbba@*/
#define CPG_MFS01_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB780208C)  /*@bfbba@*/
#define CPG_MFS01_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB780208D)  /*@bfbba@*/

#define CPG_MFS02_I2C_EIBCR	(CPG_MFS02_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7804088)  /*@bfbba@*/
#define CPG_MFS02_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7804089)  /*@bfbba@*/
#define CPG_MFS02_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB780408A)  /*@bfbba@*/
#define CPG_MFS02_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB780408B)  /*@bfbba@*/
#define CPG_MFS02_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB780408C)  /*@bfbba@*/
#define CPG_MFS02_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB780408D)  /*@bfbba@*/

#define CPG_MFS03_I2C_EIBCR	(CPG_MFS03_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7806088)  /*@bfbba@*/
#define CPG_MFS03_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7806089)  /*@bfbba@*/
#define CPG_MFS03_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB780608A)  /*@bfbba@*/
#define CPG_MFS03_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB780608B)  /*@bfbba@*/
#define CPG_MFS03_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB780608C)  /*@bfbba@*/
#define CPG_MFS03_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB780608D)  /*@bfbba@*/

#define CPG_MFS04_I2C_EIBCR	(CPG_MFS04_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7808088)  /*@bfbba@*/
#define CPG_MFS04_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7808089)  /*@bfbba@*/
#define CPG_MFS04_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB780808A)  /*@bfbba@*/
#define CPG_MFS04_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB780808B)  /*@bfbba@*/
#define CPG_MFS04_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB780808C)  /*@bfbba@*/
#define CPG_MFS04_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB780808D)  /*@bfbba@*/

#define CPG_MFS08_I2C_EIBCR	(CPG_MFS08_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7C00088)  /*@bfbba@*/
#define CPG_MFS08_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7C00089)  /*@bfbba@*/
#define CPG_MFS08_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB7C0008A)  /*@bfbba@*/
#define CPG_MFS08_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB7C0008B)  /*@bfbba@*/
#define CPG_MFS08_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB7C0008C)  /*@bfbba@*/
#define CPG_MFS08_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB7C0008D)  /*@bfbba@*/

#define CPG_MFS09_I2C_EIBCR	(CPG_MFS09_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7C02088)  /*@bfbba@*/
#define CPG_MFS09_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7C02089)  /*@bfbba@*/
#define CPG_MFS09_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB7C0208A)  /*@bfbba@*/
#define CPG_MFS09_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB7C0208B)  /*@bfbba@*/
#define CPG_MFS09_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB7C0208C)  /*@bfbba@*/
#define CPG_MFS09_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB7C0208D)  /*@bfbba@*/

#define CPG_MFS10_I2C_EIBCR	(CPG_MFS10_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7C04088)  /*@bfbba@*/
#define CPG_MFS10_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7C04089)  /*@bfbba@*/
#define CPG_MFS10_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB7C0408A)  /*@bfbba@*/
#define CPG_MFS10_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB7C0408B)  /*@bfbba@*/
#define CPG_MFS10_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB7C0408C)  /*@bfbba@*/
#define CPG_MFS10_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB7C0408D)  /*@bfbba@*/

#define CPG_MFS11_I2C_EIBCR	(CPG_MFS11_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7C06088)  /*@bfbba@*/
#define CPG_MFS11_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7C06089)  /*@bfbba@*/
#define CPG_MFS11_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB7C0608A)  /*@bfbba@*/
#define CPG_MFS11_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB7C0608B)  /*@bfbba@*/
#define CPG_MFS11_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB7C0608C)  /*@bfbba@*/
#define CPG_MFS11_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB7C0608D)  /*@bfbba@*/

#define CPG_MFS12_I2C_EIBCR	(CPG_MFS12_I2C.unEIBCR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB7C08088)  /*@bfbba@*/
#define CPG_MFS12_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB7C08089)  /*@bfbba@*/
#define CPG_MFS12_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB7C0808A)  /*@bfbba@*/
#define CPG_MFS12_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB7C0808B)  /*@bfbba@*/
#define CPG_MFS12_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB7C0808C)  /*@bfbba@*/
#define CPG_MFS12_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB7C0808D)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_eibcr_field{
    uint_io8_t		u1BEC:1;
    uint_io8_t		u1SOCE:1;
    uint_io8_t		u1SCLC:1;
    uint_io8_t		u1SDAC:1;
    uint_io8_t		u1SCLS:1;
    uint_io8_t		u1SDAS:1;
    uint_io8_t		:2;
}stc_cpg_mfsn_i2c_eibcr_field_t;

typedef union un_cpg_mfsn_i2c_eibcr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_eibcr_field_t		stcField;
}un_cpg_mfsn_i2c_eibcr_t;

/* BGR */
#define CPG_MFS00_I2C_BGR	(CPG_MFS00_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS00_I2C_BGR_BGR	(CPG_MFS00_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS01_I2C_BGR	(CPG_MFS01_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS01_I2C_BGR_BGR	(CPG_MFS01_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS02_I2C_BGR	(CPG_MFS02_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS02_I2C_BGR_BGR	(CPG_MFS02_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS03_I2C_BGR	(CPG_MFS03_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS03_I2C_BGR_BGR	(CPG_MFS03_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS04_I2C_BGR	(CPG_MFS04_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS04_I2C_BGR_BGR	(CPG_MFS04_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS08_I2C_BGR	(CPG_MFS08_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS08_I2C_BGR_BGR	(CPG_MFS08_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS09_I2C_BGR	(CPG_MFS09_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS09_I2C_BGR_BGR	(CPG_MFS09_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS10_I2C_BGR	(CPG_MFS10_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS10_I2C_BGR_BGR	(CPG_MFS10_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS11_I2C_BGR	(CPG_MFS11_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS11_I2C_BGR_BGR	(CPG_MFS11_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS12_I2C_BGR	(CPG_MFS12_I2C.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS12_I2C_BGR_BGR	(CPG_MFS12_I2C.unBGR.stcField.u15BGR)  /*@bf@*/

typedef struct stc_cpg_mfsn_i2c_bgr_field{
    uint_io16_t		u15BGR:15;
    uint_io16_t		:1;
}stc_cpg_mfsn_i2c_bgr_field_t;

typedef union un_cpg_mfsn_i2c_bgr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_i2c_bgr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_i2c_bgr_t;

/* ISBA */
#define CPG_MFS00_I2C_ISBA	(CPG_MFS00_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_ISBA_SA	(CPG_MFS00_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS00_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB78000F7)  /*@bfbba@*/

#define CPG_MFS01_I2C_ISBA	(CPG_MFS01_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_ISBA_SA	(CPG_MFS01_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS01_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB78020F7)  /*@bfbba@*/

#define CPG_MFS02_I2C_ISBA	(CPG_MFS02_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_ISBA_SA	(CPG_MFS02_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS02_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB78040F7)  /*@bfbba@*/

#define CPG_MFS03_I2C_ISBA	(CPG_MFS03_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_ISBA_SA	(CPG_MFS03_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS03_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB78060F7)  /*@bfbba@*/

#define CPG_MFS04_I2C_ISBA	(CPG_MFS04_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_ISBA_SA	(CPG_MFS04_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS04_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB78080F7)  /*@bfbba@*/

#define CPG_MFS08_I2C_ISBA	(CPG_MFS08_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_ISBA_SA	(CPG_MFS08_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS08_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB7C000F7)  /*@bfbba@*/

#define CPG_MFS09_I2C_ISBA	(CPG_MFS09_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_ISBA_SA	(CPG_MFS09_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS09_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB7C020F7)  /*@bfbba@*/

#define CPG_MFS10_I2C_ISBA	(CPG_MFS10_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_ISBA_SA	(CPG_MFS10_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS10_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB7C040F7)  /*@bfbba@*/

#define CPG_MFS11_I2C_ISBA	(CPG_MFS11_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_ISBA_SA	(CPG_MFS11_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS11_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB7C060F7)  /*@bfbba@*/

#define CPG_MFS12_I2C_ISBA	(CPG_MFS12_I2C.unISBA.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_ISBA_SA	(CPG_MFS12_I2C.unISBA.stcField.u7SA)  /*@bf@*/
#define CPG_MFS12_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB7C080F7)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_isba_field{
    uint_io8_t		u7SA:7;
    uint_io8_t		u1SAEN:1;
}stc_cpg_mfsn_i2c_isba_field_t;

typedef union un_cpg_mfsn_i2c_isba{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_isba_field_t		stcField;
}un_cpg_mfsn_i2c_isba_t;

/* ISMK */
#define CPG_MFS00_I2C_ISMK	(CPG_MFS00_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_ISMK_SM	(CPG_MFS00_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS00_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB78000FF)  /*@bfbba@*/

#define CPG_MFS01_I2C_ISMK	(CPG_MFS01_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_ISMK_SM	(CPG_MFS01_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS01_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB78020FF)  /*@bfbba@*/

#define CPG_MFS02_I2C_ISMK	(CPG_MFS02_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_ISMK_SM	(CPG_MFS02_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS02_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB78040FF)  /*@bfbba@*/

#define CPG_MFS03_I2C_ISMK	(CPG_MFS03_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_ISMK_SM	(CPG_MFS03_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS03_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB78060FF)  /*@bfbba@*/

#define CPG_MFS04_I2C_ISMK	(CPG_MFS04_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_ISMK_SM	(CPG_MFS04_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS04_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB78080FF)  /*@bfbba@*/

#define CPG_MFS08_I2C_ISMK	(CPG_MFS08_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_ISMK_SM	(CPG_MFS08_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS08_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB7C000FF)  /*@bfbba@*/

#define CPG_MFS09_I2C_ISMK	(CPG_MFS09_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_ISMK_SM	(CPG_MFS09_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS09_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB7C020FF)  /*@bfbba@*/

#define CPG_MFS10_I2C_ISMK	(CPG_MFS10_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_ISMK_SM	(CPG_MFS10_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS10_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB7C040FF)  /*@bfbba@*/

#define CPG_MFS11_I2C_ISMK	(CPG_MFS11_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_ISMK_SM	(CPG_MFS11_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS11_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB7C060FF)  /*@bfbba@*/

#define CPG_MFS12_I2C_ISMK	(CPG_MFS12_I2C.unISMK.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_ISMK_SM	(CPG_MFS12_I2C.unISMK.stcField.u7SM)  /*@bf@*/
#define CPG_MFS12_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB7C080FF)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ismk_field{
    uint_io8_t		u7SM:7;
    uint_io8_t		u1EN:1;
}stc_cpg_mfsn_i2c_ismk_field_t;

typedef union un_cpg_mfsn_i2c_ismk{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ismk_field_t		stcField;
}un_cpg_mfsn_i2c_ismk_t;

/* FCR0 */
#define CPG_MFS00_I2C_FCR0	(CPG_MFS00_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7800100)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7800101)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7800102)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7800103)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7800104)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7800105)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7800106)  /*@bfbba@*/

#define CPG_MFS01_I2C_FCR0	(CPG_MFS01_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7802100)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7802101)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7802102)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7802103)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7802104)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7802105)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7802106)  /*@bfbba@*/

#define CPG_MFS02_I2C_FCR0	(CPG_MFS02_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7804100)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7804101)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7804102)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7804103)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7804104)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7804105)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7804106)  /*@bfbba@*/

#define CPG_MFS03_I2C_FCR0	(CPG_MFS03_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7806100)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7806101)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7806102)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7806103)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7806104)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7806105)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7806106)  /*@bfbba@*/

#define CPG_MFS04_I2C_FCR0	(CPG_MFS04_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7808100)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7808101)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7808102)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7808103)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7808104)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7808105)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7808106)  /*@bfbba@*/

#define CPG_MFS08_I2C_FCR0	(CPG_MFS08_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C00100)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C00101)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C00102)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C00103)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C00104)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C00105)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C00106)  /*@bfbba@*/

#define CPG_MFS09_I2C_FCR0	(CPG_MFS09_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C02100)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C02101)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C02102)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C02103)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C02104)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C02105)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C02106)  /*@bfbba@*/

#define CPG_MFS10_I2C_FCR0	(CPG_MFS10_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C04100)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C04101)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C04102)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C04103)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C04104)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C04105)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C04106)  /*@bfbba@*/

#define CPG_MFS11_I2C_FCR0	(CPG_MFS11_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C06100)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C06101)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C06102)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C06103)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C06104)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C06105)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C06106)  /*@bfbba@*/

#define CPG_MFS12_I2C_FCR0	(CPG_MFS12_I2C.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C08100)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C08101)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C08102)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C08103)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C08104)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C08105)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C08106)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_fcr0_field{
    uint_io8_t		u1FE1:1;
    uint_io8_t		u1FE2:1;
    uint_io8_t		u1FCL1:1;
    uint_io8_t		u1FCL2:1;
    uint_io8_t		u1FSET:1;
    uint_io8_t		u1FLD:1;
    uint_io8_t		u1FLST:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_i2c_fcr0_field_t;

typedef union un_cpg_mfsn_i2c_fcr0{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_fcr0_field_t		stcField;
}un_cpg_mfsn_i2c_fcr0_t;

/* FCR1 */
#define CPG_MFS00_I2C_FCR1	(CPG_MFS00_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7800108)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7800109)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780010A)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780010B)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780010C)  /*@bfbba@*/

#define CPG_MFS01_I2C_FCR1	(CPG_MFS01_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7802108)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7802109)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780210A)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780210B)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780210C)  /*@bfbba@*/

#define CPG_MFS02_I2C_FCR1	(CPG_MFS02_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7804108)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7804109)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780410A)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780410B)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780410C)  /*@bfbba@*/

#define CPG_MFS03_I2C_FCR1	(CPG_MFS03_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7806108)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7806109)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780610A)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780610B)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780610C)  /*@bfbba@*/

#define CPG_MFS04_I2C_FCR1	(CPG_MFS04_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7808108)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7808109)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780810A)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780810B)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780810C)  /*@bfbba@*/

#define CPG_MFS08_I2C_FCR1	(CPG_MFS08_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C00108)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C00109)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0010A)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0010B)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0010C)  /*@bfbba@*/

#define CPG_MFS09_I2C_FCR1	(CPG_MFS09_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C02108)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C02109)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0210A)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0210B)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0210C)  /*@bfbba@*/

#define CPG_MFS10_I2C_FCR1	(CPG_MFS10_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C04108)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C04109)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0410A)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0410B)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0410C)  /*@bfbba@*/

#define CPG_MFS11_I2C_FCR1	(CPG_MFS11_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C06108)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C06109)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0610A)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0610B)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0610C)  /*@bfbba@*/

#define CPG_MFS12_I2C_FCR1	(CPG_MFS12_I2C.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C08108)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C08109)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0810A)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0810B)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0810C)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_fcr1_field{
    uint_io8_t		u1FSEL:1;
    uint_io8_t		u1FTIE:1;
    uint_io8_t		u1FDRQ:1;
    uint_io8_t		u1FRIIE:1;
    uint_io8_t		u1FLSTE:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_i2c_fcr1_field_t;

typedef union un_cpg_mfsn_i2c_fcr1{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_fcr1_field_t		stcField;
}un_cpg_mfsn_i2c_fcr1_t;

/* FBYTE */
#define CPG_MFS00_I2C_FBYTE	(CPG_MFS00_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS00_I2C_FBYTE_FBYTE1	(CPG_MFS00_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS00_I2C_FBYTE_FBYTE2	(CPG_MFS00_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS01_I2C_FBYTE	(CPG_MFS01_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS01_I2C_FBYTE_FBYTE1	(CPG_MFS01_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS01_I2C_FBYTE_FBYTE2	(CPG_MFS01_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS02_I2C_FBYTE	(CPG_MFS02_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS02_I2C_FBYTE_FBYTE1	(CPG_MFS02_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS02_I2C_FBYTE_FBYTE2	(CPG_MFS02_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS03_I2C_FBYTE	(CPG_MFS03_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS03_I2C_FBYTE_FBYTE1	(CPG_MFS03_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS03_I2C_FBYTE_FBYTE2	(CPG_MFS03_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS04_I2C_FBYTE	(CPG_MFS04_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS04_I2C_FBYTE_FBYTE1	(CPG_MFS04_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS04_I2C_FBYTE_FBYTE2	(CPG_MFS04_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS08_I2C_FBYTE	(CPG_MFS08_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS08_I2C_FBYTE_FBYTE1	(CPG_MFS08_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS08_I2C_FBYTE_FBYTE2	(CPG_MFS08_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS09_I2C_FBYTE	(CPG_MFS09_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS09_I2C_FBYTE_FBYTE1	(CPG_MFS09_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS09_I2C_FBYTE_FBYTE2	(CPG_MFS09_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS10_I2C_FBYTE	(CPG_MFS10_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS10_I2C_FBYTE_FBYTE1	(CPG_MFS10_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS10_I2C_FBYTE_FBYTE2	(CPG_MFS10_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS11_I2C_FBYTE	(CPG_MFS11_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS11_I2C_FBYTE_FBYTE1	(CPG_MFS11_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS11_I2C_FBYTE_FBYTE2	(CPG_MFS11_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS12_I2C_FBYTE	(CPG_MFS12_I2C.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS12_I2C_FBYTE_FBYTE1	(CPG_MFS12_I2C.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS12_I2C_FBYTE_FBYTE2	(CPG_MFS12_I2C.unFBYTE.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_cpg_mfsn_i2c_fbyte_field{
    uint_io16_t		u8FBYTE1:8;
    uint_io16_t		u8FBYTE2:8;
}stc_cpg_mfsn_i2c_fbyte_field_t;

typedef union un_cpg_mfsn_i2c_fbyte{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_i2c_fbyte_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_i2c_fbyte_t;

/* FTICR */
#define CPG_MFS00_I2C_FTICR	(CPG_MFS00_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS00_I2C_FTICR_FTICR1	(CPG_MFS00_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS00_I2C_FTICR_FTICR2	(CPG_MFS00_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS01_I2C_FTICR	(CPG_MFS01_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS01_I2C_FTICR_FTICR1	(CPG_MFS01_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS01_I2C_FTICR_FTICR2	(CPG_MFS01_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS02_I2C_FTICR	(CPG_MFS02_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS02_I2C_FTICR_FTICR1	(CPG_MFS02_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS02_I2C_FTICR_FTICR2	(CPG_MFS02_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS03_I2C_FTICR	(CPG_MFS03_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS03_I2C_FTICR_FTICR1	(CPG_MFS03_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS03_I2C_FTICR_FTICR2	(CPG_MFS03_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS04_I2C_FTICR	(CPG_MFS04_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS04_I2C_FTICR_FTICR1	(CPG_MFS04_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS04_I2C_FTICR_FTICR2	(CPG_MFS04_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS08_I2C_FTICR	(CPG_MFS08_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS08_I2C_FTICR_FTICR1	(CPG_MFS08_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS08_I2C_FTICR_FTICR2	(CPG_MFS08_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS09_I2C_FTICR	(CPG_MFS09_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS09_I2C_FTICR_FTICR1	(CPG_MFS09_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS09_I2C_FTICR_FTICR2	(CPG_MFS09_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS10_I2C_FTICR	(CPG_MFS10_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS10_I2C_FTICR_FTICR1	(CPG_MFS10_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS10_I2C_FTICR_FTICR2	(CPG_MFS10_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS11_I2C_FTICR	(CPG_MFS11_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS11_I2C_FTICR_FTICR1	(CPG_MFS11_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS11_I2C_FTICR_FTICR2	(CPG_MFS11_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS12_I2C_FTICR	(CPG_MFS12_I2C.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS12_I2C_FTICR_FTICR1	(CPG_MFS12_I2C.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS12_I2C_FTICR_FTICR2	(CPG_MFS12_I2C.unFTICR.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_cpg_mfsn_i2c_fticr_field{
    uint_io16_t		u8FTICR1:8;
    uint_io16_t		u8FTICR2:8;
}stc_cpg_mfsn_i2c_fticr_field_t;

typedef union un_cpg_mfsn_i2c_fticr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_i2c_fticr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_i2c_fticr_t;

/* ECR */
#define CPG_MFS00_I2C_ECR	(CPG_MFS00_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7800130)  /*@bfbba@*/
#define CPG_MFS00_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7800131)  /*@bfbba@*/
#define CPG_MFS00_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7800132)  /*@bfbba@*/
#define CPG_MFS00_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7800133)  /*@bfbba@*/
#define CPG_MFS00_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7800134)  /*@bfbba@*/

#define CPG_MFS01_I2C_ECR	(CPG_MFS01_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7802130)  /*@bfbba@*/
#define CPG_MFS01_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7802131)  /*@bfbba@*/
#define CPG_MFS01_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7802132)  /*@bfbba@*/
#define CPG_MFS01_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7802133)  /*@bfbba@*/
#define CPG_MFS01_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7802134)  /*@bfbba@*/

#define CPG_MFS02_I2C_ECR	(CPG_MFS02_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7804130)  /*@bfbba@*/
#define CPG_MFS02_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7804131)  /*@bfbba@*/
#define CPG_MFS02_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7804132)  /*@bfbba@*/
#define CPG_MFS02_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7804133)  /*@bfbba@*/
#define CPG_MFS02_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7804134)  /*@bfbba@*/

#define CPG_MFS03_I2C_ECR	(CPG_MFS03_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7806130)  /*@bfbba@*/
#define CPG_MFS03_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7806131)  /*@bfbba@*/
#define CPG_MFS03_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7806132)  /*@bfbba@*/
#define CPG_MFS03_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7806133)  /*@bfbba@*/
#define CPG_MFS03_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7806134)  /*@bfbba@*/

#define CPG_MFS04_I2C_ECR	(CPG_MFS04_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7808130)  /*@bfbba@*/
#define CPG_MFS04_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7808131)  /*@bfbba@*/
#define CPG_MFS04_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7808132)  /*@bfbba@*/
#define CPG_MFS04_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7808133)  /*@bfbba@*/
#define CPG_MFS04_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7808134)  /*@bfbba@*/

#define CPG_MFS08_I2C_ECR	(CPG_MFS08_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C00130)  /*@bfbba@*/
#define CPG_MFS08_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C00131)  /*@bfbba@*/
#define CPG_MFS08_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C00132)  /*@bfbba@*/
#define CPG_MFS08_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7C00133)  /*@bfbba@*/
#define CPG_MFS08_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C00134)  /*@bfbba@*/

#define CPG_MFS09_I2C_ECR	(CPG_MFS09_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C02130)  /*@bfbba@*/
#define CPG_MFS09_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C02131)  /*@bfbba@*/
#define CPG_MFS09_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C02132)  /*@bfbba@*/
#define CPG_MFS09_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7C02133)  /*@bfbba@*/
#define CPG_MFS09_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C02134)  /*@bfbba@*/

#define CPG_MFS10_I2C_ECR	(CPG_MFS10_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C04130)  /*@bfbba@*/
#define CPG_MFS10_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C04131)  /*@bfbba@*/
#define CPG_MFS10_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C04132)  /*@bfbba@*/
#define CPG_MFS10_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7C04133)  /*@bfbba@*/
#define CPG_MFS10_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C04134)  /*@bfbba@*/

#define CPG_MFS11_I2C_ECR	(CPG_MFS11_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C06130)  /*@bfbba@*/
#define CPG_MFS11_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C06131)  /*@bfbba@*/
#define CPG_MFS11_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C06132)  /*@bfbba@*/
#define CPG_MFS11_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7C06133)  /*@bfbba@*/
#define CPG_MFS11_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C06134)  /*@bfbba@*/

#define CPG_MFS12_I2C_ECR	(CPG_MFS12_I2C.unECR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C08130)  /*@bfbba@*/
#define CPG_MFS12_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C08131)  /*@bfbba@*/
#define CPG_MFS12_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C08132)  /*@bfbba@*/
#define CPG_MFS12_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB7C08133)  /*@bfbba@*/
#define CPG_MFS12_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C08134)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ecr_field{
    uint_io8_t		u1TXBLKEN:1;
    uint_io8_t		u1RXBLKEN:1;
    uint_io8_t		u1TEIE:1;
    uint_io8_t		u1REIE:1;
    uint_io8_t		u1EISEL:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_i2c_ecr_field_t;

typedef union un_cpg_mfsn_i2c_ecr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ecr_field_t		stcField;
}un_cpg_mfsn_i2c_ecr_t;

/* ESR */
#define CPG_MFS00_I2C_ESR	(CPG_MFS00_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7800138)  /*@bfbba@*/
#define CPG_MFS00_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7800139)  /*@bfbba@*/
#define CPG_MFS00_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780013A)  /*@bfbba@*/
#define CPG_MFS00_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780013B)  /*@bfbba@*/

#define CPG_MFS01_I2C_ESR	(CPG_MFS01_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7802138)  /*@bfbba@*/
#define CPG_MFS01_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7802139)  /*@bfbba@*/
#define CPG_MFS01_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780213A)  /*@bfbba@*/
#define CPG_MFS01_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780213B)  /*@bfbba@*/

#define CPG_MFS02_I2C_ESR	(CPG_MFS02_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7804138)  /*@bfbba@*/
#define CPG_MFS02_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7804139)  /*@bfbba@*/
#define CPG_MFS02_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780413A)  /*@bfbba@*/
#define CPG_MFS02_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780413B)  /*@bfbba@*/

#define CPG_MFS03_I2C_ESR	(CPG_MFS03_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7806138)  /*@bfbba@*/
#define CPG_MFS03_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7806139)  /*@bfbba@*/
#define CPG_MFS03_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780613A)  /*@bfbba@*/
#define CPG_MFS03_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780613B)  /*@bfbba@*/

#define CPG_MFS04_I2C_ESR	(CPG_MFS04_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7808138)  /*@bfbba@*/
#define CPG_MFS04_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7808139)  /*@bfbba@*/
#define CPG_MFS04_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780813A)  /*@bfbba@*/
#define CPG_MFS04_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780813B)  /*@bfbba@*/

#define CPG_MFS08_I2C_ESR	(CPG_MFS08_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C00138)  /*@bfbba@*/
#define CPG_MFS08_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C00139)  /*@bfbba@*/
#define CPG_MFS08_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0013A)  /*@bfbba@*/
#define CPG_MFS08_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0013B)  /*@bfbba@*/

#define CPG_MFS09_I2C_ESR	(CPG_MFS09_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C02138)  /*@bfbba@*/
#define CPG_MFS09_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C02139)  /*@bfbba@*/
#define CPG_MFS09_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0213A)  /*@bfbba@*/
#define CPG_MFS09_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0213B)  /*@bfbba@*/

#define CPG_MFS10_I2C_ESR	(CPG_MFS10_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C04138)  /*@bfbba@*/
#define CPG_MFS10_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C04139)  /*@bfbba@*/
#define CPG_MFS10_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0413A)  /*@bfbba@*/
#define CPG_MFS10_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0413B)  /*@bfbba@*/

#define CPG_MFS11_I2C_ESR	(CPG_MFS11_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C06138)  /*@bfbba@*/
#define CPG_MFS11_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C06139)  /*@bfbba@*/
#define CPG_MFS11_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0613A)  /*@bfbba@*/
#define CPG_MFS11_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0613B)  /*@bfbba@*/

#define CPG_MFS12_I2C_ESR	(CPG_MFS12_I2C.unESR.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C08138)  /*@bfbba@*/
#define CPG_MFS12_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C08139)  /*@bfbba@*/
#define CPG_MFS12_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0813A)  /*@bfbba@*/
#define CPG_MFS12_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0813B)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_esr_field{
    uint_io8_t		u1TBERR:1;
    uint_io8_t		u1RBERR:1;
    uint_io8_t		u1TXOVR:1;
    uint_io8_t		u1RXUDR:1;
    uint_io8_t		:4;
}stc_cpg_mfsn_i2c_esr_field_t;

typedef union un_cpg_mfsn_i2c_esr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_esr_field_t		stcField;
}un_cpg_mfsn_i2c_esr_t;

/* TBSIZE */
#define CPG_MFS00_I2C_TBSIZE	(CPG_MFS00_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_TBSIZE_TBSIZE	CPG_MFS00_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS01_I2C_TBSIZE	(CPG_MFS01_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_TBSIZE_TBSIZE	CPG_MFS01_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS02_I2C_TBSIZE	(CPG_MFS02_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_TBSIZE_TBSIZE	CPG_MFS02_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS03_I2C_TBSIZE	(CPG_MFS03_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_TBSIZE_TBSIZE	CPG_MFS03_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS04_I2C_TBSIZE	(CPG_MFS04_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_TBSIZE_TBSIZE	CPG_MFS04_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS08_I2C_TBSIZE	(CPG_MFS08_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_TBSIZE_TBSIZE	CPG_MFS08_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS09_I2C_TBSIZE	(CPG_MFS09_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_TBSIZE_TBSIZE	CPG_MFS09_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS10_I2C_TBSIZE	(CPG_MFS10_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_TBSIZE_TBSIZE	CPG_MFS10_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS11_I2C_TBSIZE	(CPG_MFS11_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_TBSIZE_TBSIZE	CPG_MFS11_I2C_TBSIZE  /*@bfrg@*/

#define CPG_MFS12_I2C_TBSIZE	(CPG_MFS12_I2C.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_TBSIZE_TBSIZE	CPG_MFS12_I2C_TBSIZE  /*@bfrg@*/

typedef union un_cpg_mfsn_i2c_tbsize{
    uint_io8_t		u8Register;
}un_cpg_mfsn_i2c_tbsize_t;

/* SMRC */
#define CPG_MFS00_I2C_SMRC	(CPG_MFS00_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7800162)  /*@bfbba@*/
#define CPG_MFS00_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7800163)  /*@bfbba@*/
#define CPG_MFS00_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7800164)  /*@bfbba@*/

#define CPG_MFS01_I2C_SMRC	(CPG_MFS01_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7802162)  /*@bfbba@*/
#define CPG_MFS01_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7802163)  /*@bfbba@*/
#define CPG_MFS01_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7802164)  /*@bfbba@*/

#define CPG_MFS02_I2C_SMRC	(CPG_MFS02_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7804162)  /*@bfbba@*/
#define CPG_MFS02_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7804163)  /*@bfbba@*/
#define CPG_MFS02_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7804164)  /*@bfbba@*/

#define CPG_MFS03_I2C_SMRC	(CPG_MFS03_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7806162)  /*@bfbba@*/
#define CPG_MFS03_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7806163)  /*@bfbba@*/
#define CPG_MFS03_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7806164)  /*@bfbba@*/

#define CPG_MFS04_I2C_SMRC	(CPG_MFS04_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7808162)  /*@bfbba@*/
#define CPG_MFS04_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7808163)  /*@bfbba@*/
#define CPG_MFS04_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7808164)  /*@bfbba@*/

#define CPG_MFS08_I2C_SMRC	(CPG_MFS08_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7C00162)  /*@bfbba@*/
#define CPG_MFS08_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7C00163)  /*@bfbba@*/
#define CPG_MFS08_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C00164)  /*@bfbba@*/

#define CPG_MFS09_I2C_SMRC	(CPG_MFS09_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7C02162)  /*@bfbba@*/
#define CPG_MFS09_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7C02163)  /*@bfbba@*/
#define CPG_MFS09_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C02164)  /*@bfbba@*/

#define CPG_MFS10_I2C_SMRC	(CPG_MFS10_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7C04162)  /*@bfbba@*/
#define CPG_MFS10_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7C04163)  /*@bfbba@*/
#define CPG_MFS10_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C04164)  /*@bfbba@*/

#define CPG_MFS11_I2C_SMRC	(CPG_MFS11_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7C06162)  /*@bfbba@*/
#define CPG_MFS11_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7C06163)  /*@bfbba@*/
#define CPG_MFS11_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C06164)  /*@bfbba@*/

#define CPG_MFS12_I2C_SMRC	(CPG_MFS12_I2C.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB7C08162)  /*@bfbba@*/
#define CPG_MFS12_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB7C08163)  /*@bfbba@*/
#define CPG_MFS12_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C08164)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_smrc_field{
    uint_io8_t		:2;
    uint_io8_t		u1TIEC:1;
    uint_io8_t		u1RIEC:1;
    uint_io8_t		u1WUCRC:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_i2c_smrc_field_t;

typedef union un_cpg_mfsn_i2c_smrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_smrc_field_t		stcField;
}un_cpg_mfsn_i2c_smrc_t;

/* IBCRC */
#define CPG_MFS00_I2C_IBCRC	(CPG_MFS00_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7800168)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB780016A)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB780016B)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB780016C)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB780016D)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB780016F)  /*@bfbba@*/

#define CPG_MFS01_I2C_IBCRC	(CPG_MFS01_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7802168)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB780216A)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB780216B)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB780216C)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB780216D)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB780216F)  /*@bfbba@*/

#define CPG_MFS02_I2C_IBCRC	(CPG_MFS02_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7804168)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB780416A)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB780416B)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB780416C)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB780416D)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB780416F)  /*@bfbba@*/

#define CPG_MFS03_I2C_IBCRC	(CPG_MFS03_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7806168)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB780616A)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB780616B)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB780616C)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB780616D)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB780616F)  /*@bfbba@*/

#define CPG_MFS04_I2C_IBCRC	(CPG_MFS04_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7808168)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB780816A)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB780816B)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB780816C)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB780816D)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB780816F)  /*@bfbba@*/

#define CPG_MFS08_I2C_IBCRC	(CPG_MFS08_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7C00168)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB7C0016A)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB7C0016B)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB7C0016C)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB7C0016D)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB7C0016F)  /*@bfbba@*/

#define CPG_MFS09_I2C_IBCRC	(CPG_MFS09_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7C02168)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB7C0216A)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB7C0216B)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB7C0216C)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB7C0216D)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB7C0216F)  /*@bfbba@*/

#define CPG_MFS10_I2C_IBCRC	(CPG_MFS10_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7C04168)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB7C0416A)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB7C0416B)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB7C0416C)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB7C0416D)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB7C0416F)  /*@bfbba@*/

#define CPG_MFS11_I2C_IBCRC	(CPG_MFS11_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7C06168)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB7C0616A)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB7C0616B)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB7C0616C)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB7C0616D)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB7C0616F)  /*@bfbba@*/

#define CPG_MFS12_I2C_IBCRC	(CPG_MFS12_I2C.unIBCRC.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB7C08168)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB7C0816A)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB7C0816B)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB7C0816C)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB7C0816D)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB7C0816F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ibcrc_field{
    uint_io8_t		u1INTC:1;
    uint_io8_t		:1;
    uint_io8_t		u1INTEC:1;
    uint_io8_t		u1CNDEC:1;
    uint_io8_t		u1WSELC:1;
    uint_io8_t		u1ACKEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1MSSC:1;
}stc_cpg_mfsn_i2c_ibcrc_field_t;

typedef union un_cpg_mfsn_i2c_ibcrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ibcrc_field_t		stcField;
}un_cpg_mfsn_i2c_ibcrc_t;

/* IBSRC */
#define CPG_MFS00_I2C_IBSRC	(CPG_MFS00_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7800171)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7800172)  /*@bfbba@*/

#define CPG_MFS01_I2C_IBSRC	(CPG_MFS01_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7802171)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7802172)  /*@bfbba@*/

#define CPG_MFS02_I2C_IBSRC	(CPG_MFS02_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7804171)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7804172)  /*@bfbba@*/

#define CPG_MFS03_I2C_IBSRC	(CPG_MFS03_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7806171)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7806172)  /*@bfbba@*/

#define CPG_MFS04_I2C_IBSRC	(CPG_MFS04_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7808171)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7808172)  /*@bfbba@*/

#define CPG_MFS08_I2C_IBSRC	(CPG_MFS08_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7C00171)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7C00172)  /*@bfbba@*/

#define CPG_MFS09_I2C_IBSRC	(CPG_MFS09_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7C02171)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7C02172)  /*@bfbba@*/

#define CPG_MFS10_I2C_IBSRC	(CPG_MFS10_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7C04171)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7C04172)  /*@bfbba@*/

#define CPG_MFS11_I2C_IBSRC	(CPG_MFS11_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7C06171)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7C06172)  /*@bfbba@*/

#define CPG_MFS12_I2C_IBSRC	(CPG_MFS12_I2C.unIBSRC.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB7C08171)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB7C08172)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ibsrc_field{
    uint_io8_t		:1;
    uint_io8_t		u1SPCC:1;
    uint_io8_t		u1RSCC:1;
    uint_io8_t		:5;
}stc_cpg_mfsn_i2c_ibsrc_field_t;

typedef union un_cpg_mfsn_i2c_ibsrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ibsrc_field_t		stcField;
}un_cpg_mfsn_i2c_ibsrc_t;

/* SSRC */
#define CPG_MFS00_I2C_SSRC	(CPG_MFS00_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB780017C)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB780017D)  /*@bfbba@*/

#define CPG_MFS01_I2C_SSRC	(CPG_MFS01_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB780217C)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB780217D)  /*@bfbba@*/

#define CPG_MFS02_I2C_SSRC	(CPG_MFS02_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB780417C)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB780417D)  /*@bfbba@*/

#define CPG_MFS03_I2C_SSRC	(CPG_MFS03_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB780617C)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB780617D)  /*@bfbba@*/

#define CPG_MFS04_I2C_SSRC	(CPG_MFS04_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB780817C)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB780817D)  /*@bfbba@*/

#define CPG_MFS08_I2C_SSRC	(CPG_MFS08_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0017C)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB7C0017D)  /*@bfbba@*/

#define CPG_MFS09_I2C_SSRC	(CPG_MFS09_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0217C)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB7C0217D)  /*@bfbba@*/

#define CPG_MFS10_I2C_SSRC	(CPG_MFS10_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0417C)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB7C0417D)  /*@bfbba@*/

#define CPG_MFS11_I2C_SSRC	(CPG_MFS11_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0617C)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB7C0617D)  /*@bfbba@*/

#define CPG_MFS12_I2C_SSRC	(CPG_MFS12_I2C.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0817C)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB7C0817D)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ssrc_field{
    uint_io8_t		:4;
    uint_io8_t		u1TBIEC:1;
    uint_io8_t		u1DMAC:1;
    uint_io8_t		:2;
}stc_cpg_mfsn_i2c_ssrc_field_t;

typedef union un_cpg_mfsn_i2c_ssrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ssrc_field_t		stcField;
}un_cpg_mfsn_i2c_ssrc_t;

/* SACSRC */
#define CPG_MFS00_I2C_SACSRC	(CPG_MFS00_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS00_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7800180)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7800185)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7800187)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7800188)  /*@bfbba@*/

#define CPG_MFS01_I2C_SACSRC	(CPG_MFS01_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS01_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7802180)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7802185)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7802187)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7802188)  /*@bfbba@*/

#define CPG_MFS02_I2C_SACSRC	(CPG_MFS02_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS02_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7804180)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7804185)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7804187)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7804188)  /*@bfbba@*/

#define CPG_MFS03_I2C_SACSRC	(CPG_MFS03_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS03_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7806180)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7806185)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7806187)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7806188)  /*@bfbba@*/

#define CPG_MFS04_I2C_SACSRC	(CPG_MFS04_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS04_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7808180)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7808185)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7808187)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7808188)  /*@bfbba@*/

#define CPG_MFS08_I2C_SACSRC	(CPG_MFS08_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS08_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C00180)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C00185)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C00187)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C00188)  /*@bfbba@*/

#define CPG_MFS09_I2C_SACSRC	(CPG_MFS09_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS09_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C02180)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C02185)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C02187)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C02188)  /*@bfbba@*/

#define CPG_MFS10_I2C_SACSRC	(CPG_MFS10_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS10_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C04180)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C04185)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C04187)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C04188)  /*@bfbba@*/

#define CPG_MFS11_I2C_SACSRC	(CPG_MFS11_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS11_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C06180)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C06185)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C06187)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C06188)  /*@bfbba@*/

#define CPG_MFS12_I2C_SACSRC	(CPG_MFS12_I2C.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS12_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C08180)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C08185)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C08187)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C08188)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_sacsrc_field{
    uint_io16_t		u1TMREC:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGEC:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTEC:1;
    uint_io16_t		u1TINTC:1;
    uint_io16_t		:7;
}stc_cpg_mfsn_i2c_sacsrc_field_t;

typedef union un_cpg_mfsn_i2c_sacsrc{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_i2c_sacsrc_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_i2c_sacsrc_t;

/* FCR0C */
#define CPG_MFS00_I2C_FCR0C	(CPG_MFS00_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78001E0)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78001E1)  /*@bfbba@*/

#define CPG_MFS01_I2C_FCR0C	(CPG_MFS01_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78021E0)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78021E1)  /*@bfbba@*/

#define CPG_MFS02_I2C_FCR0C	(CPG_MFS02_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78041E0)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78041E1)  /*@bfbba@*/

#define CPG_MFS03_I2C_FCR0C	(CPG_MFS03_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78061E0)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78061E1)  /*@bfbba@*/

#define CPG_MFS04_I2C_FCR0C	(CPG_MFS04_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78081E0)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78081E1)  /*@bfbba@*/

#define CPG_MFS08_I2C_FCR0C	(CPG_MFS08_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C001E0)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C001E1)  /*@bfbba@*/

#define CPG_MFS09_I2C_FCR0C	(CPG_MFS09_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C021E0)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C021E1)  /*@bfbba@*/

#define CPG_MFS10_I2C_FCR0C	(CPG_MFS10_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C041E0)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C041E1)  /*@bfbba@*/

#define CPG_MFS11_I2C_FCR0C	(CPG_MFS11_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C061E0)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C061E1)  /*@bfbba@*/

#define CPG_MFS12_I2C_FCR0C	(CPG_MFS12_I2C.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C081E0)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C081E1)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_fcr0c_field{
    uint_io8_t		u1FE1C:1;
    uint_io8_t		u1FE2C:1;
    uint_io8_t		:6;
}stc_cpg_mfsn_i2c_fcr0c_field_t;

typedef union un_cpg_mfsn_i2c_fcr0c{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_fcr0c_field_t		stcField;
}un_cpg_mfsn_i2c_fcr0c_t;

/* FCR1C */
#define CPG_MFS00_I2C_FCR1C	(CPG_MFS00_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78001E8)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78001E9)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78001EA)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78001EB)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78001EC)  /*@bfbba@*/

#define CPG_MFS01_I2C_FCR1C	(CPG_MFS01_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78021E8)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78021E9)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78021EA)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78021EB)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78021EC)  /*@bfbba@*/

#define CPG_MFS02_I2C_FCR1C	(CPG_MFS02_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78041E8)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78041E9)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78041EA)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78041EB)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78041EC)  /*@bfbba@*/

#define CPG_MFS03_I2C_FCR1C	(CPG_MFS03_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78061E8)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78061E9)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78061EA)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78061EB)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78061EC)  /*@bfbba@*/

#define CPG_MFS04_I2C_FCR1C	(CPG_MFS04_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78081E8)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78081E9)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78081EA)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78081EB)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78081EC)  /*@bfbba@*/

#define CPG_MFS08_I2C_FCR1C	(CPG_MFS08_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C001E8)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C001E9)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C001EA)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C001EB)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C001EC)  /*@bfbba@*/

#define CPG_MFS09_I2C_FCR1C	(CPG_MFS09_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C021E8)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C021E9)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C021EA)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C021EB)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C021EC)  /*@bfbba@*/

#define CPG_MFS10_I2C_FCR1C	(CPG_MFS10_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C041E8)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C041E9)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C041EA)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C041EB)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C041EC)  /*@bfbba@*/

#define CPG_MFS11_I2C_FCR1C	(CPG_MFS11_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C061E8)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C061E9)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C061EA)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C061EB)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C061EC)  /*@bfbba@*/

#define CPG_MFS12_I2C_FCR1C	(CPG_MFS12_I2C.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C081E8)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C081E9)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C081EA)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C081EB)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C081EC)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_fcr1c_field{
    uint_io8_t		u1FSELC:1;
    uint_io8_t		u1FTIEC:1;
    uint_io8_t		u1FDRQC:1;
    uint_io8_t		u1FRIIEC:1;
    uint_io8_t		u1FLSTEC:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_i2c_fcr1c_field_t;

typedef union un_cpg_mfsn_i2c_fcr1c{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_fcr1c_field_t		stcField;
}un_cpg_mfsn_i2c_fcr1c_t;

/* ESRC */
#define CPG_MFS00_I2C_ESRC	(CPG_MFS00_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7800218)  /*@bfbba@*/
#define CPG_MFS00_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7800219)  /*@bfbba@*/
#define CPG_MFS00_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780021A)  /*@bfbba@*/
#define CPG_MFS00_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780021B)  /*@bfbba@*/

#define CPG_MFS01_I2C_ESRC	(CPG_MFS01_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7802218)  /*@bfbba@*/
#define CPG_MFS01_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7802219)  /*@bfbba@*/
#define CPG_MFS01_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780221A)  /*@bfbba@*/
#define CPG_MFS01_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780221B)  /*@bfbba@*/

#define CPG_MFS02_I2C_ESRC	(CPG_MFS02_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7804218)  /*@bfbba@*/
#define CPG_MFS02_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7804219)  /*@bfbba@*/
#define CPG_MFS02_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780421A)  /*@bfbba@*/
#define CPG_MFS02_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780421B)  /*@bfbba@*/

#define CPG_MFS03_I2C_ESRC	(CPG_MFS03_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7806218)  /*@bfbba@*/
#define CPG_MFS03_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7806219)  /*@bfbba@*/
#define CPG_MFS03_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780621A)  /*@bfbba@*/
#define CPG_MFS03_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780621B)  /*@bfbba@*/

#define CPG_MFS04_I2C_ESRC	(CPG_MFS04_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7808218)  /*@bfbba@*/
#define CPG_MFS04_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7808219)  /*@bfbba@*/
#define CPG_MFS04_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780821A)  /*@bfbba@*/
#define CPG_MFS04_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780821B)  /*@bfbba@*/

#define CPG_MFS08_I2C_ESRC	(CPG_MFS08_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C00218)  /*@bfbba@*/
#define CPG_MFS08_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C00219)  /*@bfbba@*/
#define CPG_MFS08_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0021A)  /*@bfbba@*/
#define CPG_MFS08_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0021B)  /*@bfbba@*/

#define CPG_MFS09_I2C_ESRC	(CPG_MFS09_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C02218)  /*@bfbba@*/
#define CPG_MFS09_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C02219)  /*@bfbba@*/
#define CPG_MFS09_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0221A)  /*@bfbba@*/
#define CPG_MFS09_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0221B)  /*@bfbba@*/

#define CPG_MFS10_I2C_ESRC	(CPG_MFS10_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C04218)  /*@bfbba@*/
#define CPG_MFS10_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C04219)  /*@bfbba@*/
#define CPG_MFS10_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0421A)  /*@bfbba@*/
#define CPG_MFS10_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0421B)  /*@bfbba@*/

#define CPG_MFS11_I2C_ESRC	(CPG_MFS11_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C06218)  /*@bfbba@*/
#define CPG_MFS11_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C06219)  /*@bfbba@*/
#define CPG_MFS11_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0621A)  /*@bfbba@*/
#define CPG_MFS11_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0621B)  /*@bfbba@*/

#define CPG_MFS12_I2C_ESRC	(CPG_MFS12_I2C.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C08218)  /*@bfbba@*/
#define CPG_MFS12_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C08219)  /*@bfbba@*/
#define CPG_MFS12_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0821A)  /*@bfbba@*/
#define CPG_MFS12_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0821B)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_esrc_field{
    uint_io8_t		u1TBERRC:1;
    uint_io8_t		u1RBERRC:1;
    uint_io8_t		u1TXOVRC:1;
    uint_io8_t		u1RXUDRC:1;
    uint_io8_t		:4;
}stc_cpg_mfsn_i2c_esrc_field_t;

typedef union un_cpg_mfsn_i2c_esrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_esrc_field_t		stcField;
}un_cpg_mfsn_i2c_esrc_t;

/* SMRS */
#define CPG_MFS00_I2C_SMRS	(CPG_MFS00_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7800222)  /*@bfbba@*/
#define CPG_MFS00_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7800223)  /*@bfbba@*/
#define CPG_MFS00_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7800224)  /*@bfbba@*/

#define CPG_MFS01_I2C_SMRS	(CPG_MFS01_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7802222)  /*@bfbba@*/
#define CPG_MFS01_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7802223)  /*@bfbba@*/
#define CPG_MFS01_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7802224)  /*@bfbba@*/

#define CPG_MFS02_I2C_SMRS	(CPG_MFS02_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7804222)  /*@bfbba@*/
#define CPG_MFS02_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7804223)  /*@bfbba@*/
#define CPG_MFS02_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7804224)  /*@bfbba@*/

#define CPG_MFS03_I2C_SMRS	(CPG_MFS03_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7806222)  /*@bfbba@*/
#define CPG_MFS03_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7806223)  /*@bfbba@*/
#define CPG_MFS03_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7806224)  /*@bfbba@*/

#define CPG_MFS04_I2C_SMRS	(CPG_MFS04_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7808222)  /*@bfbba@*/
#define CPG_MFS04_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7808223)  /*@bfbba@*/
#define CPG_MFS04_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7808224)  /*@bfbba@*/

#define CPG_MFS08_I2C_SMRS	(CPG_MFS08_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7C00222)  /*@bfbba@*/
#define CPG_MFS08_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7C00223)  /*@bfbba@*/
#define CPG_MFS08_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C00224)  /*@bfbba@*/

#define CPG_MFS09_I2C_SMRS	(CPG_MFS09_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7C02222)  /*@bfbba@*/
#define CPG_MFS09_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7C02223)  /*@bfbba@*/
#define CPG_MFS09_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C02224)  /*@bfbba@*/

#define CPG_MFS10_I2C_SMRS	(CPG_MFS10_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7C04222)  /*@bfbba@*/
#define CPG_MFS10_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7C04223)  /*@bfbba@*/
#define CPG_MFS10_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C04224)  /*@bfbba@*/

#define CPG_MFS11_I2C_SMRS	(CPG_MFS11_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7C06222)  /*@bfbba@*/
#define CPG_MFS11_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7C06223)  /*@bfbba@*/
#define CPG_MFS11_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C06224)  /*@bfbba@*/

#define CPG_MFS12_I2C_SMRS	(CPG_MFS12_I2C.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB7C08222)  /*@bfbba@*/
#define CPG_MFS12_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB7C08223)  /*@bfbba@*/
#define CPG_MFS12_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C08224)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_smrs_field{
    uint_io8_t		:2;
    uint_io8_t		u1TIES:1;
    uint_io8_t		u1RIES:1;
    uint_io8_t		u1WUCRS:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_i2c_smrs_field_t;

typedef union un_cpg_mfsn_i2c_smrs{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_smrs_field_t		stcField;
}un_cpg_mfsn_i2c_smrs_t;

/* IBCRS */
#define CPG_MFS00_I2C_IBCRS	(CPG_MFS00_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7800228)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB780022A)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB780022B)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB780022C)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB780022D)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB780022E)  /*@bfbba@*/
#define CPG_MFS00_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB780022F)  /*@bfbba@*/

#define CPG_MFS01_I2C_IBCRS	(CPG_MFS01_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7802228)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB780222A)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB780222B)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB780222C)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB780222D)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB780222E)  /*@bfbba@*/
#define CPG_MFS01_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB780222F)  /*@bfbba@*/

#define CPG_MFS02_I2C_IBCRS	(CPG_MFS02_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7804228)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB780422A)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB780422B)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB780422C)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB780422D)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB780422E)  /*@bfbba@*/
#define CPG_MFS02_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB780422F)  /*@bfbba@*/

#define CPG_MFS03_I2C_IBCRS	(CPG_MFS03_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7806228)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB780622A)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB780622B)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB780622C)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB780622D)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB780622E)  /*@bfbba@*/
#define CPG_MFS03_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB780622F)  /*@bfbba@*/

#define CPG_MFS04_I2C_IBCRS	(CPG_MFS04_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7808228)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB780822A)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB780822B)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB780822C)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB780822D)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB780822E)  /*@bfbba@*/
#define CPG_MFS04_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB780822F)  /*@bfbba@*/

#define CPG_MFS08_I2C_IBCRS	(CPG_MFS08_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7C00228)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB7C0022A)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB7C0022B)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB7C0022C)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB7C0022D)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB7C0022E)  /*@bfbba@*/
#define CPG_MFS08_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB7C0022F)  /*@bfbba@*/

#define CPG_MFS09_I2C_IBCRS	(CPG_MFS09_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7C02228)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB7C0222A)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB7C0222B)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB7C0222C)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB7C0222D)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB7C0222E)  /*@bfbba@*/
#define CPG_MFS09_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB7C0222F)  /*@bfbba@*/

#define CPG_MFS10_I2C_IBCRS	(CPG_MFS10_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7C04228)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB7C0422A)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB7C0422B)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB7C0422C)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB7C0422D)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB7C0422E)  /*@bfbba@*/
#define CPG_MFS10_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB7C0422F)  /*@bfbba@*/

#define CPG_MFS11_I2C_IBCRS	(CPG_MFS11_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7C06228)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB7C0622A)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB7C0622B)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB7C0622C)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB7C0622D)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB7C0622E)  /*@bfbba@*/
#define CPG_MFS11_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB7C0622F)  /*@bfbba@*/

#define CPG_MFS12_I2C_IBCRS	(CPG_MFS12_I2C.unIBCRS.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB7C08228)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB7C0822A)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB7C0822B)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB7C0822C)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB7C0822D)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB7C0822E)  /*@bfbba@*/
#define CPG_MFS12_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB7C0822F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ibcrs_field{
    uint_io8_t		u1INTS:1;
    uint_io8_t		:1;
    uint_io8_t		u1INTES:1;
    uint_io8_t		u1CNDES:1;
    uint_io8_t		u1WSELS:1;
    uint_io8_t		u1ACKES:1;
    uint_io8_t		u1ACTS:1;
    uint_io8_t		u1MSSS:1;
}stc_cpg_mfsn_i2c_ibcrs_field_t;

typedef union un_cpg_mfsn_i2c_ibcrs{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ibcrs_field_t		stcField;
}un_cpg_mfsn_i2c_ibcrs_t;

/* SSRS */
#define CPG_MFS00_I2C_SSRS	(CPG_MFS00_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB780023C)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB780023D)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB780023E)  /*@bfbba@*/
#define CPG_MFS00_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB780023F)  /*@bfbba@*/

#define CPG_MFS01_I2C_SSRS	(CPG_MFS01_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB780223C)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB780223D)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB780223E)  /*@bfbba@*/
#define CPG_MFS01_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB780223F)  /*@bfbba@*/

#define CPG_MFS02_I2C_SSRS	(CPG_MFS02_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB780423C)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB780423D)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB780423E)  /*@bfbba@*/
#define CPG_MFS02_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB780423F)  /*@bfbba@*/

#define CPG_MFS03_I2C_SSRS	(CPG_MFS03_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB780623C)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB780623D)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB780623E)  /*@bfbba@*/
#define CPG_MFS03_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB780623F)  /*@bfbba@*/

#define CPG_MFS04_I2C_SSRS	(CPG_MFS04_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB780823C)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB780823D)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB780823E)  /*@bfbba@*/
#define CPG_MFS04_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB780823F)  /*@bfbba@*/

#define CPG_MFS08_I2C_SSRS	(CPG_MFS08_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB7C0023C)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB7C0023D)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB7C0023E)  /*@bfbba@*/
#define CPG_MFS08_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0023F)  /*@bfbba@*/

#define CPG_MFS09_I2C_SSRS	(CPG_MFS09_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB7C0223C)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB7C0223D)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB7C0223E)  /*@bfbba@*/
#define CPG_MFS09_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0223F)  /*@bfbba@*/

#define CPG_MFS10_I2C_SSRS	(CPG_MFS10_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB7C0423C)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB7C0423D)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB7C0423E)  /*@bfbba@*/
#define CPG_MFS10_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0423F)  /*@bfbba@*/

#define CPG_MFS11_I2C_SSRS	(CPG_MFS11_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB7C0623C)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB7C0623D)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB7C0623E)  /*@bfbba@*/
#define CPG_MFS11_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0623F)  /*@bfbba@*/

#define CPG_MFS12_I2C_SSRS	(CPG_MFS12_I2C.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB7C0823C)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB7C0823D)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB7C0823E)  /*@bfbba@*/
#define CPG_MFS12_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0823F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_ssrs_field{
    uint_io8_t		:4;
    uint_io8_t		u1TBIES:1;
    uint_io8_t		u1DMAS:1;
    uint_io8_t		u1TSETS:1;
    uint_io8_t		u1RECS:1;
}stc_cpg_mfsn_i2c_ssrs_field_t;

typedef union un_cpg_mfsn_i2c_ssrs{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_ssrs_field_t		stcField;
}un_cpg_mfsn_i2c_ssrs_t;

/* SACSRS */
#define CPG_MFS00_I2C_SACSRS	(CPG_MFS00_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS00_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7800240)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7800245)  /*@bfbba@*/
#define CPG_MFS00_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7800247)  /*@bfbba@*/

#define CPG_MFS01_I2C_SACSRS	(CPG_MFS01_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS01_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7802240)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7802245)  /*@bfbba@*/
#define CPG_MFS01_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7802247)  /*@bfbba@*/

#define CPG_MFS02_I2C_SACSRS	(CPG_MFS02_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS02_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7804240)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7804245)  /*@bfbba@*/
#define CPG_MFS02_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7804247)  /*@bfbba@*/

#define CPG_MFS03_I2C_SACSRS	(CPG_MFS03_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS03_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7806240)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7806245)  /*@bfbba@*/
#define CPG_MFS03_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7806247)  /*@bfbba@*/

#define CPG_MFS04_I2C_SACSRS	(CPG_MFS04_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS04_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7808240)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7808245)  /*@bfbba@*/
#define CPG_MFS04_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7808247)  /*@bfbba@*/

#define CPG_MFS08_I2C_SACSRS	(CPG_MFS08_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS08_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C00240)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C00245)  /*@bfbba@*/
#define CPG_MFS08_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C00247)  /*@bfbba@*/

#define CPG_MFS09_I2C_SACSRS	(CPG_MFS09_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS09_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C02240)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C02245)  /*@bfbba@*/
#define CPG_MFS09_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C02247)  /*@bfbba@*/

#define CPG_MFS10_I2C_SACSRS	(CPG_MFS10_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS10_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C04240)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C04245)  /*@bfbba@*/
#define CPG_MFS10_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C04247)  /*@bfbba@*/

#define CPG_MFS11_I2C_SACSRS	(CPG_MFS11_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS11_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C06240)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C06245)  /*@bfbba@*/
#define CPG_MFS11_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C06247)  /*@bfbba@*/

#define CPG_MFS12_I2C_SACSRS	(CPG_MFS12_I2C.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS12_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C08240)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C08245)  /*@bfbba@*/
#define CPG_MFS12_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C08247)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_sacsrs_field{
    uint_io16_t		u1TMRES:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGES:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTES:1;
    uint_io16_t		:8;
}stc_cpg_mfsn_i2c_sacsrs_field_t;

typedef union un_cpg_mfsn_i2c_sacsrs{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_i2c_sacsrs_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_i2c_sacsrs_t;

/* FCR0S */
#define CPG_MFS00_I2C_FCR0S	(CPG_MFS00_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78002A0)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78002A1)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78002A2)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78002A3)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78002A4)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78002A5)  /*@bfbba@*/

#define CPG_MFS01_I2C_FCR0S	(CPG_MFS01_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78022A0)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78022A1)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78022A2)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78022A3)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78022A4)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78022A5)  /*@bfbba@*/

#define CPG_MFS02_I2C_FCR0S	(CPG_MFS02_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78042A0)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78042A1)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78042A2)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78042A3)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78042A4)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78042A5)  /*@bfbba@*/

#define CPG_MFS03_I2C_FCR0S	(CPG_MFS03_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78062A0)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78062A1)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78062A2)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78062A3)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78062A4)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78062A5)  /*@bfbba@*/

#define CPG_MFS04_I2C_FCR0S	(CPG_MFS04_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78082A0)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78082A1)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78082A2)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78082A3)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78082A4)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78082A5)  /*@bfbba@*/

#define CPG_MFS08_I2C_FCR0S	(CPG_MFS08_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C002A0)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C002A1)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C002A2)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C002A3)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C002A4)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C002A5)  /*@bfbba@*/

#define CPG_MFS09_I2C_FCR0S	(CPG_MFS09_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C022A0)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C022A1)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C022A2)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C022A3)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C022A4)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C022A5)  /*@bfbba@*/

#define CPG_MFS10_I2C_FCR0S	(CPG_MFS10_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C042A0)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C042A1)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C042A2)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C042A3)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C042A4)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C042A5)  /*@bfbba@*/

#define CPG_MFS11_I2C_FCR0S	(CPG_MFS11_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C062A0)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C062A1)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C062A2)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C062A3)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C062A4)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C062A5)  /*@bfbba@*/

#define CPG_MFS12_I2C_FCR0S	(CPG_MFS12_I2C.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C082A0)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C082A1)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C082A2)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C082A3)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C082A4)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C082A5)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_fcr0s_field{
    uint_io8_t		u1FE1S:1;
    uint_io8_t		u1FE2S:1;
    uint_io8_t		u1FCL1S:1;
    uint_io8_t		u1FCL2S:1;
    uint_io8_t		u1FSETS:1;
    uint_io8_t		u1FLDS:1;
    uint_io8_t		:2;
}stc_cpg_mfsn_i2c_fcr0s_field_t;

typedef union un_cpg_mfsn_i2c_fcr0s{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_fcr0s_field_t		stcField;
}un_cpg_mfsn_i2c_fcr0s_t;

/* FCR1S */
#define CPG_MFS00_I2C_FCR1S	(CPG_MFS00_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS00_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78002A8)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78002A9)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78002AB)  /*@bfbba@*/
#define CPG_MFS00_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78002AC)  /*@bfbba@*/

#define CPG_MFS01_I2C_FCR1S	(CPG_MFS01_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS01_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78022A8)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78022A9)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78022AB)  /*@bfbba@*/
#define CPG_MFS01_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78022AC)  /*@bfbba@*/

#define CPG_MFS02_I2C_FCR1S	(CPG_MFS02_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS02_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78042A8)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78042A9)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78042AB)  /*@bfbba@*/
#define CPG_MFS02_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78042AC)  /*@bfbba@*/

#define CPG_MFS03_I2C_FCR1S	(CPG_MFS03_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS03_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78062A8)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78062A9)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78062AB)  /*@bfbba@*/
#define CPG_MFS03_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78062AC)  /*@bfbba@*/

#define CPG_MFS04_I2C_FCR1S	(CPG_MFS04_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS04_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78082A8)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78082A9)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78082AB)  /*@bfbba@*/
#define CPG_MFS04_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78082AC)  /*@bfbba@*/

#define CPG_MFS08_I2C_FCR1S	(CPG_MFS08_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS08_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C002A8)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C002A9)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C002AB)  /*@bfbba@*/
#define CPG_MFS08_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C002AC)  /*@bfbba@*/

#define CPG_MFS09_I2C_FCR1S	(CPG_MFS09_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS09_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C022A8)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C022A9)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C022AB)  /*@bfbba@*/
#define CPG_MFS09_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C022AC)  /*@bfbba@*/

#define CPG_MFS10_I2C_FCR1S	(CPG_MFS10_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS10_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C042A8)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C042A9)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C042AB)  /*@bfbba@*/
#define CPG_MFS10_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C042AC)  /*@bfbba@*/

#define CPG_MFS11_I2C_FCR1S	(CPG_MFS11_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS11_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C062A8)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C062A9)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C062AB)  /*@bfbba@*/
#define CPG_MFS11_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C062AC)  /*@bfbba@*/

#define CPG_MFS12_I2C_FCR1S	(CPG_MFS12_I2C.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS12_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C082A8)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C082A9)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C082AB)  /*@bfbba@*/
#define CPG_MFS12_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C082AC)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_i2c_fcr1s_field{
    uint_io8_t		u1FSELS:1;
    uint_io8_t		u1FTIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1FRIIES:1;
    uint_io8_t		u1FLSTES:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_i2c_fcr1s_field_t;

typedef union un_cpg_mfsn_i2c_fcr1s{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_i2c_fcr1s_field_t		stcField;
}un_cpg_mfsn_i2c_fcr1s_t;


typedef struct stc_cpg_mfsn_i2c{
    un_cpg_mfsn_i2c_smr_t	unSMR;	/* 0x00000000 */
    un_cpg_mfsn_i2c_ibcr_t	unIBCR;	/* 0x00000001 */
    un_cpg_mfsn_i2c_ibsr_t	unIBSR;	/* 0x00000002 */
    un_cpg_mfsn_i2c_ssr_t	unSSR;	/* 0x00000003 */
    un_cpg_mfsn_i2c_rdr_t	unRDR;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[3];	/* 0x00000005 */
    un_cpg_mfsn_i2c_sacsr_t	unSACSR;	/* 0x00000008 */
    un_cpg_mfsn_i2c_stmr_t	unSTMR;	/* 0x0000000A */
    un_cpg_mfsn_i2c_stmcr_t	unSTMCR;	/* 0x0000000C */
    uint_io8_t	au8Reserved1[2];	/* 0x0000000E */
    un_cpg_mfsn_i2c_nfcr_t	unNFCR;	/* 0x00000010 */
    un_cpg_mfsn_i2c_eibcr_t	unEIBCR;	/* 0x00000011 */
    uint_io8_t	au8Reserved2[10];	/* 0x00000012 */
    un_cpg_mfsn_i2c_bgr_t	unBGR;	/* 0x0000001C */
    un_cpg_mfsn_i2c_isba_t	unISBA;	/* 0x0000001E */
    un_cpg_mfsn_i2c_ismk_t	unISMK;	/* 0x0000001F */
    un_cpg_mfsn_i2c_fcr0_t	unFCR0;	/* 0x00000020 */
    un_cpg_mfsn_i2c_fcr1_t	unFCR1;	/* 0x00000021 */
    un_cpg_mfsn_i2c_fbyte_t	unFBYTE;	/* 0x00000022 */
    un_cpg_mfsn_i2c_fticr_t	unFTICR;	/* 0x00000024 */
    un_cpg_mfsn_i2c_ecr_t	unECR;	/* 0x00000026 */
    un_cpg_mfsn_i2c_esr_t	unESR;	/* 0x00000027 */
    un_cpg_mfsn_i2c_tbsize_t	unTBSIZE;	/* 0x00000028 */
    uint_io8_t	au8Reserved3[3];	/* 0x00000029 */
    un_cpg_mfsn_i2c_smrc_t	unSMRC;	/* 0x0000002C */
    un_cpg_mfsn_i2c_ibcrc_t	unIBCRC;	/* 0x0000002D */
    un_cpg_mfsn_i2c_ibsrc_t	unIBSRC;	/* 0x0000002E */
    un_cpg_mfsn_i2c_ssrc_t	unSSRC;	/* 0x0000002F */
    un_cpg_mfsn_i2c_sacsrc_t	unSACSRC;	/* 0x00000030 */
    uint_io8_t	au8Reserved4[10];	/* 0x00000032 */
    un_cpg_mfsn_i2c_fcr0c_t	unFCR0C;	/* 0x0000003C */
    un_cpg_mfsn_i2c_fcr1c_t	unFCR1C;	/* 0x0000003D */
    uint_io8_t	au8Reserved5[5];	/* 0x0000003E */
    un_cpg_mfsn_i2c_esrc_t	unESRC;	/* 0x00000043 */
    un_cpg_mfsn_i2c_smrs_t	unSMRS;	/* 0x00000044 */
    un_cpg_mfsn_i2c_ibcrs_t	unIBCRS;	/* 0x00000045 */
    uint_io8_t	au8Reserved6[1];	/* 0x00000046 */
    un_cpg_mfsn_i2c_ssrs_t	unSSRS;	/* 0x00000047 */
    un_cpg_mfsn_i2c_sacsrs_t	unSACSRS;	/* 0x00000048 */
    uint_io8_t	au8Reserved7[10];	/* 0x0000004A */
    un_cpg_mfsn_i2c_fcr0s_t	unFCR0S;	/* 0x00000054 */
    un_cpg_mfsn_i2c_fcr1s_t	unFCR1S;	/* 0x00000055 */
    uint_io8_t	au8Reserved8[938];	/* 0x00000056 */
}stc_cpg_mfsn_i2c_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_cpg_mfsn_i2c_t	stcCPG_MFS_I2C[10];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* MCG_MFS[16-17]_I2C base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MCG_MFS16_I2C_1	stcMCG_MFS_I2C_1[0]
#define MCG_MFS17_I2C_1	stcMCG_MFS_I2C_1[1]
#else /* __IO_DEFINE */
#define MCG_MFS16_I2C_1	(*((volatile stc_mcg_mfsn_i2c_1_t*)0xB06A8000))
#define MCG_MFS17_I2C_1	(*((volatile stc_mcg_mfsn_i2c_1_t*)0xB06A8400))
#endif /* __IO_DEFINE */

/* SMR */
#define MCG_MFS16_I2C_SMR	(MCG_MFS16_I2C_1.unSMR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB0D40002)  /*@bfbba@*/
#define MCG_MFS16_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB0D40003)  /*@bfbba@*/
#define MCG_MFS16_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB0D40004)  /*@bfbba@*/
#define MCG_MFS16_I2C_SMR_MD	(MCG_MFS16_I2C_1.unSMR.stcField.u3MD)  /*@bf@*/

#define MCG_MFS17_I2C_SMR	(MCG_MFS17_I2C_1.unSMR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_SMR_TIE	(*(volatile uint_io8_t*)0xB0D42002)  /*@bfbba@*/
#define MCG_MFS17_I2C_SMR_RIE	(*(volatile uint_io8_t*)0xB0D42003)  /*@bfbba@*/
#define MCG_MFS17_I2C_SMR_WUCR	(*(volatile uint_io8_t*)0xB0D42004)  /*@bfbba@*/
#define MCG_MFS17_I2C_SMR_MD	(MCG_MFS17_I2C_1.unSMR.stcField.u3MD)  /*@bf@*/

typedef struct stc_mcg_mfsn_i2c_1_smr_field{
    uint_io8_t		:2;
    uint_io8_t		u1TIE:1;
    uint_io8_t		u1RIE:1;
    uint_io8_t		u1WUCR:1;
    uint_io8_t		u3MD:3;
}stc_mcg_mfsn_i2c_1_smr_field_t;

typedef union un_mcg_mfsn_i2c_1_smr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_smr_field_t		stcField;
}un_mcg_mfsn_i2c_1_smr_t;

/* IBCR */
#define MCG_MFS16_I2C_IBCR	(MCG_MFS16_I2C_1.unIBCR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB0D40008)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB0D40009)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB0D4000A)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB0D4000B)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB0D4000C)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB0D4000D)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB0D4000E)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB0D4000F)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCR_SCC	MCG_MFS16_I2C_IBCR_ACT  /*@bf2@*/

#define MCG_MFS17_I2C_IBCR	(MCG_MFS17_I2C_1.unIBCR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_IBCR_INT	(*(volatile uint_io8_t*)0xB0D42008)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCR_BER	(*(volatile uint_io8_t*)0xB0D42009)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCR_INTE	(*(volatile uint_io8_t*)0xB0D4200A)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCR_CNDE	(*(volatile uint_io8_t*)0xB0D4200B)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCR_WSEL	(*(volatile uint_io8_t*)0xB0D4200C)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCR_ACKE	(*(volatile uint_io8_t*)0xB0D4200D)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCR_ACT	(*(volatile uint_io8_t*)0xB0D4200E)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCR_MSS	(*(volatile uint_io8_t*)0xB0D4200F)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCR_SCC	MCG_MFS17_I2C_IBCR_ACT  /*@bf2@*/

typedef struct stc_mcg_mfsn_i2c_1_ibcr_field{
    uint_io8_t		u1INT:1;
    uint_io8_t		u1BER:1;
    uint_io8_t		u1INTE:1;
    uint_io8_t		u1CNDE:1;
    uint_io8_t		u1WSEL:1;
    uint_io8_t		u1ACKE:1;
    uint_io8_t		u1ACT:1;
    uint_io8_t		u1MSS:1;
}stc_mcg_mfsn_i2c_1_ibcr_field_t;

typedef union un_mcg_mfsn_i2c_1_ibcr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ibcr_field_t		stcField;
}un_mcg_mfsn_i2c_1_ibcr_t;

/* IBSR */
#define MCG_MFS16_I2C_IBSR	(MCG_MFS16_I2C_1.unIBSR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB0D40010)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB0D40011)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB0D40012)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB0D40013)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB0D40014)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB0D40015)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB0D40016)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB0D40017)  /*@bfbba@*/

#define MCG_MFS17_I2C_IBSR	(MCG_MFS17_I2C_1.unIBSR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_IBSR_BB	(*(volatile uint_io8_t*)0xB0D42010)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBSR_SPC	(*(volatile uint_io8_t*)0xB0D42011)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBSR_RSC	(*(volatile uint_io8_t*)0xB0D42012)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBSR_AL	(*(volatile uint_io8_t*)0xB0D42013)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBSR_TRX	(*(volatile uint_io8_t*)0xB0D42014)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBSR_RSA	(*(volatile uint_io8_t*)0xB0D42015)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBSR_RACK	(*(volatile uint_io8_t*)0xB0D42016)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBSR_FBT	(*(volatile uint_io8_t*)0xB0D42017)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ibsr_field{
    uint_io8_t		u1BB:1;
    uint_io8_t		u1SPC:1;
    uint_io8_t		u1RSC:1;
    uint_io8_t		u1AL:1;
    uint_io8_t		u1TRX:1;
    uint_io8_t		u1RSA:1;
    uint_io8_t		u1RACK:1;
    uint_io8_t		u1FBT:1;
}stc_mcg_mfsn_i2c_1_ibsr_field_t;

typedef union un_mcg_mfsn_i2c_1_ibsr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ibsr_field_t		stcField;
}un_mcg_mfsn_i2c_1_ibsr_t;

/* SSR */
#define MCG_MFS16_I2C_SSR	(MCG_MFS16_I2C_1.unSSR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB0D40018)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB0D40019)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB0D4001A)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB0D4001B)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB0D4001C)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB0D4001D)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB0D4001E)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB0D4001F)  /*@bfbba@*/

#define MCG_MFS17_I2C_SSR	(MCG_MFS17_I2C_1.unSSR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_SSR_TBI	(*(volatile uint_io8_t*)0xB0D42018)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSR_TDRE	(*(volatile uint_io8_t*)0xB0D42019)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSR_RDRF	(*(volatile uint_io8_t*)0xB0D4201A)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSR_ORE	(*(volatile uint_io8_t*)0xB0D4201B)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSR_TBIE	(*(volatile uint_io8_t*)0xB0D4201C)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSR_DMA	(*(volatile uint_io8_t*)0xB0D4201D)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSR_TSET	(*(volatile uint_io8_t*)0xB0D4201E)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSR_REC	(*(volatile uint_io8_t*)0xB0D4201F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ssr_field{
    uint_io8_t		u1TBI:1;
    uint_io8_t		u1TDRE:1;
    uint_io8_t		u1RDRF:1;
    uint_io8_t		u1ORE:1;
    uint_io8_t		u1TBIE:1;
    uint_io8_t		u1DMA:1;
    uint_io8_t		u1TSET:1;
    uint_io8_t		u1REC:1;
}stc_mcg_mfsn_i2c_1_ssr_field_t;

typedef union un_mcg_mfsn_i2c_1_ssr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ssr_field_t		stcField;
}un_mcg_mfsn_i2c_1_ssr_t;

/* RDR */
#define MCG_MFS16_I2C_RDR	(MCG_MFS16_I2C_1.unRDR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_TDR	(MCG_MFS16_I2C_RDR)  /*@rg2@*/
#define MCG_MFS16_I2C_RDR_D	MCG_MFS16_I2C_RDR  /*@bfrg@*/
#define MCG_MFS16_I2C_TDR_D	MCG_MFS16_I2C_RDR_D  /*@bf2@*/

#define MCG_MFS17_I2C_RDR	(MCG_MFS17_I2C_1.unRDR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_TDR	(MCG_MFS17_I2C_RDR)  /*@rg2@*/
#define MCG_MFS17_I2C_RDR_D	MCG_MFS17_I2C_RDR  /*@bfrg@*/
#define MCG_MFS17_I2C_TDR_D	MCG_MFS17_I2C_RDR_D  /*@bf2@*/

typedef union un_mcg_mfsn_i2c_1_rdr{
    uint_io8_t		u8Register;
}un_mcg_mfsn_i2c_1_rdr_t;

/* SACSR */
#define MCG_MFS16_I2C_SACSR	(MCG_MFS16_I2C_1.unSACSR.u16Register)  /*@rg@*/
#define MCG_MFS16_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB0D40040)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSR_TDIV	(MCG_MFS16_I2C_1.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define MCG_MFS16_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB0D40045)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB0D40047)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB0D40048)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSR_TRG	(MCG_MFS16_I2C_1.unSACSR.stcField.u2TRG)  /*@bf@*/

#define MCG_MFS17_I2C_SACSR	(MCG_MFS17_I2C_1.unSACSR.u16Register)  /*@rg@*/
#define MCG_MFS17_I2C_SACSR_TMRE	(*(volatile uint_io8_t*)0xB0D42040)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSR_TDIV	(MCG_MFS17_I2C_1.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define MCG_MFS17_I2C_SACSR_TRGE	(*(volatile uint_io8_t*)0xB0D42045)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSR_TINTE	(*(volatile uint_io8_t*)0xB0D42047)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSR_TINT	(*(volatile uint_io8_t*)0xB0D42048)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSR_TRG	(MCG_MFS17_I2C_1.unSACSR.stcField.u2TRG)  /*@bf@*/

typedef struct stc_mcg_mfsn_i2c_1_sacsr_field{
    uint_io16_t		u1TMRE:1;
    uint_io16_t		u4TDIV:4;
    uint_io16_t		u1TRGE:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTE:1;
    uint_io16_t		u1TINT:1;
    uint_io16_t		u2TRG:2;
    uint_io16_t		:5;
}stc_mcg_mfsn_i2c_1_sacsr_field_t;

typedef union un_mcg_mfsn_i2c_1_sacsr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_i2c_1_sacsr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_i2c_1_sacsr_t;

/* STMR */
#define MCG_MFS16_I2C_STMR	(MCG_MFS16_I2C_1.unSTMR.u16Register)  /*@rg@*/
#define MCG_MFS16_I2C_STMR_TM	MCG_MFS16_I2C_STMR  /*@bfrg@*/

#define MCG_MFS17_I2C_STMR	(MCG_MFS17_I2C_1.unSTMR.u16Register)  /*@rg@*/
#define MCG_MFS17_I2C_STMR_TM	MCG_MFS17_I2C_STMR  /*@bfrg@*/

typedef union un_mcg_mfsn_i2c_1_stmr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_i2c_1_stmr_t;

/* STMCR */
#define MCG_MFS16_I2C_STMCR	(MCG_MFS16_I2C_1.unSTMCR.u16Register)  /*@rg@*/
#define MCG_MFS16_I2C_STMCR_TC	MCG_MFS16_I2C_STMCR  /*@bfrg@*/

#define MCG_MFS17_I2C_STMCR	(MCG_MFS17_I2C_1.unSTMCR.u16Register)  /*@rg@*/
#define MCG_MFS17_I2C_STMCR_TC	MCG_MFS17_I2C_STMCR  /*@bfrg@*/

typedef union un_mcg_mfsn_i2c_1_stmcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_i2c_1_stmcr_t;

/* NFCR */
#define MCG_MFS16_I2C_NFCR	(MCG_MFS16_I2C_1.unNFCR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_NFCR_NFT	(MCG_MFS16_I2C_1.unNFCR.stcField.u5NFT)  /*@bf@*/

#define MCG_MFS17_I2C_NFCR	(MCG_MFS17_I2C_1.unNFCR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_NFCR_NFT	(MCG_MFS17_I2C_1.unNFCR.stcField.u5NFT)  /*@bf@*/

typedef struct stc_mcg_mfsn_i2c_1_nfcr_field{
    uint_io8_t		u5NFT:5;
    uint_io8_t		:3;
}stc_mcg_mfsn_i2c_1_nfcr_field_t;

typedef union un_mcg_mfsn_i2c_1_nfcr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_nfcr_field_t		stcField;
}un_mcg_mfsn_i2c_1_nfcr_t;

/* EIBCR */
#define MCG_MFS16_I2C_EIBCR	(MCG_MFS16_I2C_1.unEIBCR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB0D40088)  /*@bfbba@*/
#define MCG_MFS16_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB0D40089)  /*@bfbba@*/
#define MCG_MFS16_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB0D4008A)  /*@bfbba@*/
#define MCG_MFS16_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB0D4008B)  /*@bfbba@*/
#define MCG_MFS16_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB0D4008C)  /*@bfbba@*/
#define MCG_MFS16_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB0D4008D)  /*@bfbba@*/

#define MCG_MFS17_I2C_EIBCR	(MCG_MFS17_I2C_1.unEIBCR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_EIBCR_BEC	(*(volatile uint_io8_t*)0xB0D42088)  /*@bfbba@*/
#define MCG_MFS17_I2C_EIBCR_SOCE	(*(volatile uint_io8_t*)0xB0D42089)  /*@bfbba@*/
#define MCG_MFS17_I2C_EIBCR_SCLC	(*(volatile uint_io8_t*)0xB0D4208A)  /*@bfbba@*/
#define MCG_MFS17_I2C_EIBCR_SDAC	(*(volatile uint_io8_t*)0xB0D4208B)  /*@bfbba@*/
#define MCG_MFS17_I2C_EIBCR_SCLS	(*(volatile uint_io8_t*)0xB0D4208C)  /*@bfbba@*/
#define MCG_MFS17_I2C_EIBCR_SDAS	(*(volatile uint_io8_t*)0xB0D4208D)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_eibcr_field{
    uint_io8_t		u1BEC:1;
    uint_io8_t		u1SOCE:1;
    uint_io8_t		u1SCLC:1;
    uint_io8_t		u1SDAC:1;
    uint_io8_t		u1SCLS:1;
    uint_io8_t		u1SDAS:1;
    uint_io8_t		:2;
}stc_mcg_mfsn_i2c_1_eibcr_field_t;

typedef union un_mcg_mfsn_i2c_1_eibcr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_eibcr_field_t		stcField;
}un_mcg_mfsn_i2c_1_eibcr_t;

/* BGR */
#define MCG_MFS16_I2C_BGR	(MCG_MFS16_I2C_1.unBGR.u16Register)  /*@rg@*/
#define MCG_MFS16_I2C_BGR_BGR	(MCG_MFS16_I2C_1.unBGR.stcField.u15BGR)  /*@bf@*/

#define MCG_MFS17_I2C_BGR	(MCG_MFS17_I2C_1.unBGR.u16Register)  /*@rg@*/
#define MCG_MFS17_I2C_BGR_BGR	(MCG_MFS17_I2C_1.unBGR.stcField.u15BGR)  /*@bf@*/

typedef struct stc_mcg_mfsn_i2c_1_bgr_field{
    uint_io16_t		u15BGR:15;
    uint_io16_t		:1;
}stc_mcg_mfsn_i2c_1_bgr_field_t;

typedef union un_mcg_mfsn_i2c_1_bgr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_i2c_1_bgr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_i2c_1_bgr_t;

/* ISBA */
#define MCG_MFS16_I2C_ISBA	(MCG_MFS16_I2C_1.unISBA.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_ISBA_SA	(MCG_MFS16_I2C_1.unISBA.stcField.u7SA)  /*@bf@*/
#define MCG_MFS16_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB0D400F7)  /*@bfbba@*/

#define MCG_MFS17_I2C_ISBA	(MCG_MFS17_I2C_1.unISBA.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_ISBA_SA	(MCG_MFS17_I2C_1.unISBA.stcField.u7SA)  /*@bf@*/
#define MCG_MFS17_I2C_ISBA_SAEN	(*(volatile uint_io8_t*)0xB0D420F7)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_isba_field{
    uint_io8_t		u7SA:7;
    uint_io8_t		u1SAEN:1;
}stc_mcg_mfsn_i2c_1_isba_field_t;

typedef union un_mcg_mfsn_i2c_1_isba{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_isba_field_t		stcField;
}un_mcg_mfsn_i2c_1_isba_t;

/* ISMK */
#define MCG_MFS16_I2C_ISMK	(MCG_MFS16_I2C_1.unISMK.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_ISMK_SM	(MCG_MFS16_I2C_1.unISMK.stcField.u7SM)  /*@bf@*/
#define MCG_MFS16_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB0D400FF)  /*@bfbba@*/

#define MCG_MFS17_I2C_ISMK	(MCG_MFS17_I2C_1.unISMK.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_ISMK_SM	(MCG_MFS17_I2C_1.unISMK.stcField.u7SM)  /*@bf@*/
#define MCG_MFS17_I2C_ISMK_EN	(*(volatile uint_io8_t*)0xB0D420FF)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ismk_field{
    uint_io8_t		u7SM:7;
    uint_io8_t		u1EN:1;
}stc_mcg_mfsn_i2c_1_ismk_field_t;

typedef union un_mcg_mfsn_i2c_1_ismk{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ismk_field_t		stcField;
}un_mcg_mfsn_i2c_1_ismk_t;

/* FCR0 */
#define MCG_MFS16_I2C_FCR0	(MCG_MFS16_I2C_1.unFCR0.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB0D40100)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB0D40101)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB0D40102)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB0D40103)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB0D40104)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB0D40105)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB0D40106)  /*@bfbba@*/

#define MCG_MFS17_I2C_FCR0	(MCG_MFS17_I2C_1.unFCR0.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_FCR0_FE1	(*(volatile uint_io8_t*)0xB0D42100)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0_FE2	(*(volatile uint_io8_t*)0xB0D42101)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0_FCL1	(*(volatile uint_io8_t*)0xB0D42102)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0_FCL2	(*(volatile uint_io8_t*)0xB0D42103)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0_FSET	(*(volatile uint_io8_t*)0xB0D42104)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0_FLD	(*(volatile uint_io8_t*)0xB0D42105)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0_FLST	(*(volatile uint_io8_t*)0xB0D42106)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_fcr0_field{
    uint_io8_t		u1FE1:1;
    uint_io8_t		u1FE2:1;
    uint_io8_t		u1FCL1:1;
    uint_io8_t		u1FCL2:1;
    uint_io8_t		u1FSET:1;
    uint_io8_t		u1FLD:1;
    uint_io8_t		u1FLST:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_i2c_1_fcr0_field_t;

typedef union un_mcg_mfsn_i2c_1_fcr0{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_fcr0_field_t		stcField;
}un_mcg_mfsn_i2c_1_fcr0_t;

/* FCR1 */
#define MCG_MFS16_I2C_FCR1	(MCG_MFS16_I2C_1.unFCR1.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB0D40108)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB0D40109)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB0D4010A)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB0D4010B)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB0D4010C)  /*@bfbba@*/

#define MCG_MFS17_I2C_FCR1	(MCG_MFS17_I2C_1.unFCR1.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_FCR1_FSEL	(*(volatile uint_io8_t*)0xB0D42108)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1_FTIE	(*(volatile uint_io8_t*)0xB0D42109)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB0D4210A)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB0D4210B)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB0D4210C)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_fcr1_field{
    uint_io8_t		u1FSEL:1;
    uint_io8_t		u1FTIE:1;
    uint_io8_t		u1FDRQ:1;
    uint_io8_t		u1FRIIE:1;
    uint_io8_t		u1FLSTE:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_i2c_1_fcr1_field_t;

typedef union un_mcg_mfsn_i2c_1_fcr1{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_fcr1_field_t		stcField;
}un_mcg_mfsn_i2c_1_fcr1_t;

/* FBYTE */
#define MCG_MFS16_I2C_FBYTE	(MCG_MFS16_I2C_1.unFBYTE.u16Register)  /*@rg@*/
#define MCG_MFS16_I2C_FBYTE_FBYTE1	(MCG_MFS16_I2C_1.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS16_I2C_FBYTE_FBYTE2	(MCG_MFS16_I2C_1.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define MCG_MFS17_I2C_FBYTE	(MCG_MFS17_I2C_1.unFBYTE.u16Register)  /*@rg@*/
#define MCG_MFS17_I2C_FBYTE_FBYTE1	(MCG_MFS17_I2C_1.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS17_I2C_FBYTE_FBYTE2	(MCG_MFS17_I2C_1.unFBYTE.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_mcg_mfsn_i2c_1_fbyte_field{
    uint_io16_t		u8FBYTE1:8;
    uint_io16_t		u8FBYTE2:8;
}stc_mcg_mfsn_i2c_1_fbyte_field_t;

typedef union un_mcg_mfsn_i2c_1_fbyte{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_i2c_1_fbyte_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_i2c_1_fbyte_t;

/* FTICR */
#define MCG_MFS16_I2C_FTICR	(MCG_MFS16_I2C_1.unFTICR.u16Register)  /*@rg@*/
#define MCG_MFS16_I2C_FTICR_FTICR1	(MCG_MFS16_I2C_1.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS16_I2C_FTICR_FTICR2	(MCG_MFS16_I2C_1.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define MCG_MFS17_I2C_FTICR	(MCG_MFS17_I2C_1.unFTICR.u16Register)  /*@rg@*/
#define MCG_MFS17_I2C_FTICR_FTICR1	(MCG_MFS17_I2C_1.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS17_I2C_FTICR_FTICR2	(MCG_MFS17_I2C_1.unFTICR.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_mcg_mfsn_i2c_1_fticr_field{
    uint_io16_t		u8FTICR1:8;
    uint_io16_t		u8FTICR2:8;
}stc_mcg_mfsn_i2c_1_fticr_field_t;

typedef union un_mcg_mfsn_i2c_1_fticr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_i2c_1_fticr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_i2c_1_fticr_t;

/* ECR */
#define MCG_MFS16_I2C_ECR	(MCG_MFS16_I2C_1.unECR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB0D40130)  /*@bfbba@*/
#define MCG_MFS16_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB0D40131)  /*@bfbba@*/
#define MCG_MFS16_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB0D40132)  /*@bfbba@*/
#define MCG_MFS16_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB0D40133)  /*@bfbba@*/
#define MCG_MFS16_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB0D40134)  /*@bfbba@*/

#define MCG_MFS17_I2C_ECR	(MCG_MFS17_I2C_1.unECR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB0D42130)  /*@bfbba@*/
#define MCG_MFS17_I2C_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB0D42131)  /*@bfbba@*/
#define MCG_MFS17_I2C_ECR_TEIE	(*(volatile uint_io8_t*)0xB0D42132)  /*@bfbba@*/
#define MCG_MFS17_I2C_ECR_REIE	(*(volatile uint_io8_t*)0xB0D42133)  /*@bfbba@*/
#define MCG_MFS17_I2C_ECR_EISEL	(*(volatile uint_io8_t*)0xB0D42134)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ecr_field{
    uint_io8_t		u1TXBLKEN:1;
    uint_io8_t		u1RXBLKEN:1;
    uint_io8_t		u1TEIE:1;
    uint_io8_t		u1REIE:1;
    uint_io8_t		u1EISEL:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_i2c_1_ecr_field_t;

typedef union un_mcg_mfsn_i2c_1_ecr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ecr_field_t		stcField;
}un_mcg_mfsn_i2c_1_ecr_t;

/* ESR */
#define MCG_MFS16_I2C_ESR	(MCG_MFS16_I2C_1.unESR.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB0D40138)  /*@bfbba@*/
#define MCG_MFS16_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB0D40139)  /*@bfbba@*/
#define MCG_MFS16_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB0D4013A)  /*@bfbba@*/
#define MCG_MFS16_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB0D4013B)  /*@bfbba@*/

#define MCG_MFS17_I2C_ESR	(MCG_MFS17_I2C_1.unESR.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_ESR_TBERR	(*(volatile uint_io8_t*)0xB0D42138)  /*@bfbba@*/
#define MCG_MFS17_I2C_ESR_RBERR	(*(volatile uint_io8_t*)0xB0D42139)  /*@bfbba@*/
#define MCG_MFS17_I2C_ESR_TXOVR	(*(volatile uint_io8_t*)0xB0D4213A)  /*@bfbba@*/
#define MCG_MFS17_I2C_ESR_RXUDR	(*(volatile uint_io8_t*)0xB0D4213B)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_esr_field{
    uint_io8_t		u1TBERR:1;
    uint_io8_t		u1RBERR:1;
    uint_io8_t		u1TXOVR:1;
    uint_io8_t		u1RXUDR:1;
    uint_io8_t		:4;
}stc_mcg_mfsn_i2c_1_esr_field_t;

typedef union un_mcg_mfsn_i2c_1_esr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_esr_field_t		stcField;
}un_mcg_mfsn_i2c_1_esr_t;

/* TBSIZE */
#define MCG_MFS16_I2C_TBSIZE	(MCG_MFS16_I2C_1.unTBSIZE.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_TBSIZE_TBSIZE	MCG_MFS16_I2C_TBSIZE  /*@bfrg@*/

#define MCG_MFS17_I2C_TBSIZE	(MCG_MFS17_I2C_1.unTBSIZE.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_TBSIZE_TBSIZE	MCG_MFS17_I2C_TBSIZE  /*@bfrg@*/

typedef union un_mcg_mfsn_i2c_1_tbsize{
    uint_io8_t		u8Register;
}un_mcg_mfsn_i2c_1_tbsize_t;

/* SMRC */
#define MCG_MFS16_I2C_SMRC	(MCG_MFS16_I2C_1.unSMRC.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB0D40162)  /*@bfbba@*/
#define MCG_MFS16_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB0D40163)  /*@bfbba@*/
#define MCG_MFS16_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB0D40164)  /*@bfbba@*/

#define MCG_MFS17_I2C_SMRC	(MCG_MFS17_I2C_1.unSMRC.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_SMRC_TIEC	(*(volatile uint_io8_t*)0xB0D42162)  /*@bfbba@*/
#define MCG_MFS17_I2C_SMRC_RIEC	(*(volatile uint_io8_t*)0xB0D42163)  /*@bfbba@*/
#define MCG_MFS17_I2C_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB0D42164)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_smrc_field{
    uint_io8_t		:2;
    uint_io8_t		u1TIEC:1;
    uint_io8_t		u1RIEC:1;
    uint_io8_t		u1WUCRC:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_i2c_1_smrc_field_t;

typedef union un_mcg_mfsn_i2c_1_smrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_smrc_field_t		stcField;
}un_mcg_mfsn_i2c_1_smrc_t;

/* IBCRC */
#define MCG_MFS16_I2C_IBCRC	(MCG_MFS16_I2C_1.unIBCRC.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB0D40168)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB0D4016A)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB0D4016B)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB0D4016C)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB0D4016D)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB0D4016F)  /*@bfbba@*/

#define MCG_MFS17_I2C_IBCRC	(MCG_MFS17_I2C_1.unIBCRC.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_IBCRC_INTC	(*(volatile uint_io8_t*)0xB0D42168)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRC_INTEC	(*(volatile uint_io8_t*)0xB0D4216A)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRC_CNDEC	(*(volatile uint_io8_t*)0xB0D4216B)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRC_WSELC	(*(volatile uint_io8_t*)0xB0D4216C)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRC_ACKEC	(*(volatile uint_io8_t*)0xB0D4216D)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRC_MSSC	(*(volatile uint_io8_t*)0xB0D4216F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ibcrc_field{
    uint_io8_t		u1INTC:1;
    uint_io8_t		:1;
    uint_io8_t		u1INTEC:1;
    uint_io8_t		u1CNDEC:1;
    uint_io8_t		u1WSELC:1;
    uint_io8_t		u1ACKEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1MSSC:1;
}stc_mcg_mfsn_i2c_1_ibcrc_field_t;

typedef union un_mcg_mfsn_i2c_1_ibcrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ibcrc_field_t		stcField;
}un_mcg_mfsn_i2c_1_ibcrc_t;

/* IBSRC */
#define MCG_MFS16_I2C_IBSRC	(MCG_MFS16_I2C_1.unIBSRC.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB0D40171)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB0D40172)  /*@bfbba@*/

#define MCG_MFS17_I2C_IBSRC	(MCG_MFS17_I2C_1.unIBSRC.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_IBSRC_SPCC	(*(volatile uint_io8_t*)0xB0D42171)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBSRC_RSCC	(*(volatile uint_io8_t*)0xB0D42172)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ibsrc_field{
    uint_io8_t		:1;
    uint_io8_t		u1SPCC:1;
    uint_io8_t		u1RSCC:1;
    uint_io8_t		:5;
}stc_mcg_mfsn_i2c_1_ibsrc_field_t;

typedef union un_mcg_mfsn_i2c_1_ibsrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ibsrc_field_t		stcField;
}un_mcg_mfsn_i2c_1_ibsrc_t;

/* SSRC */
#define MCG_MFS16_I2C_SSRC	(MCG_MFS16_I2C_1.unSSRC.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB0D4017C)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB0D4017D)  /*@bfbba@*/

#define MCG_MFS17_I2C_SSRC	(MCG_MFS17_I2C_1.unSSRC.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_SSRC_TBIEC	(*(volatile uint_io8_t*)0xB0D4217C)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSRC_DMAC	(*(volatile uint_io8_t*)0xB0D4217D)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ssrc_field{
    uint_io8_t		:4;
    uint_io8_t		u1TBIEC:1;
    uint_io8_t		u1DMAC:1;
    uint_io8_t		:2;
}stc_mcg_mfsn_i2c_1_ssrc_field_t;

typedef union un_mcg_mfsn_i2c_1_ssrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ssrc_field_t		stcField;
}un_mcg_mfsn_i2c_1_ssrc_t;

/* SACSRC */
#define MCG_MFS16_I2C_SACSRC	(MCG_MFS16_I2C_1.unSACSRC.u16Register)  /*@rg@*/
#define MCG_MFS16_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB0D40180)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB0D40185)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB0D40187)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB0D40188)  /*@bfbba@*/

#define MCG_MFS17_I2C_SACSRC	(MCG_MFS17_I2C_1.unSACSRC.u16Register)  /*@rg@*/
#define MCG_MFS17_I2C_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB0D42180)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB0D42185)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB0D42187)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB0D42188)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_sacsrc_field{
    uint_io16_t		u1TMREC:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGEC:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTEC:1;
    uint_io16_t		u1TINTC:1;
    uint_io16_t		:7;
}stc_mcg_mfsn_i2c_1_sacsrc_field_t;

typedef union un_mcg_mfsn_i2c_1_sacsrc{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_i2c_1_sacsrc_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_i2c_1_sacsrc_t;

/* FCR0C */
#define MCG_MFS16_I2C_FCR0C	(MCG_MFS16_I2C_1.unFCR0C.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB0D401E0)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB0D401E1)  /*@bfbba@*/

#define MCG_MFS17_I2C_FCR0C	(MCG_MFS17_I2C_1.unFCR0C.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB0D421E0)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB0D421E1)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_fcr0c_field{
    uint_io8_t		u1FE1C:1;
    uint_io8_t		u1FE2C:1;
    uint_io8_t		:6;
}stc_mcg_mfsn_i2c_1_fcr0c_field_t;

typedef union un_mcg_mfsn_i2c_1_fcr0c{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_fcr0c_field_t		stcField;
}un_mcg_mfsn_i2c_1_fcr0c_t;

/* FCR1C */
#define MCG_MFS16_I2C_FCR1C	(MCG_MFS16_I2C_1.unFCR1C.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB0D401E8)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB0D401E9)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB0D401EA)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB0D401EB)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB0D401EC)  /*@bfbba@*/

#define MCG_MFS17_I2C_FCR1C	(MCG_MFS17_I2C_1.unFCR1C.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB0D421E8)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB0D421E9)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB0D421EA)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB0D421EB)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB0D421EC)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_fcr1c_field{
    uint_io8_t		u1FSELC:1;
    uint_io8_t		u1FTIEC:1;
    uint_io8_t		u1FDRQC:1;
    uint_io8_t		u1FRIIEC:1;
    uint_io8_t		u1FLSTEC:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_i2c_1_fcr1c_field_t;

typedef union un_mcg_mfsn_i2c_1_fcr1c{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_fcr1c_field_t		stcField;
}un_mcg_mfsn_i2c_1_fcr1c_t;

/* ESRC */
#define MCG_MFS16_I2C_ESRC	(MCG_MFS16_I2C_1.unESRC.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB0D40218)  /*@bfbba@*/
#define MCG_MFS16_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB0D40219)  /*@bfbba@*/
#define MCG_MFS16_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB0D4021A)  /*@bfbba@*/
#define MCG_MFS16_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB0D4021B)  /*@bfbba@*/

#define MCG_MFS17_I2C_ESRC	(MCG_MFS17_I2C_1.unESRC.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB0D42218)  /*@bfbba@*/
#define MCG_MFS17_I2C_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB0D42219)  /*@bfbba@*/
#define MCG_MFS17_I2C_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB0D4221A)  /*@bfbba@*/
#define MCG_MFS17_I2C_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB0D4221B)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_esrc_field{
    uint_io8_t		u1TBERRC:1;
    uint_io8_t		u1RBERRC:1;
    uint_io8_t		u1TXOVRC:1;
    uint_io8_t		u1RXUDRC:1;
    uint_io8_t		:4;
}stc_mcg_mfsn_i2c_1_esrc_field_t;

typedef union un_mcg_mfsn_i2c_1_esrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_esrc_field_t		stcField;
}un_mcg_mfsn_i2c_1_esrc_t;

/* SMRS */
#define MCG_MFS16_I2C_SMRS	(MCG_MFS16_I2C_1.unSMRS.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB0D40222)  /*@bfbba@*/
#define MCG_MFS16_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB0D40223)  /*@bfbba@*/
#define MCG_MFS16_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB0D40224)  /*@bfbba@*/

#define MCG_MFS17_I2C_SMRS	(MCG_MFS17_I2C_1.unSMRS.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_SMRS_TIES	(*(volatile uint_io8_t*)0xB0D42222)  /*@bfbba@*/
#define MCG_MFS17_I2C_SMRS_RIES	(*(volatile uint_io8_t*)0xB0D42223)  /*@bfbba@*/
#define MCG_MFS17_I2C_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB0D42224)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_smrs_field{
    uint_io8_t		:2;
    uint_io8_t		u1TIES:1;
    uint_io8_t		u1RIES:1;
    uint_io8_t		u1WUCRS:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_i2c_1_smrs_field_t;

typedef union un_mcg_mfsn_i2c_1_smrs{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_smrs_field_t		stcField;
}un_mcg_mfsn_i2c_1_smrs_t;

/* IBCRS */
#define MCG_MFS16_I2C_IBCRS	(MCG_MFS16_I2C_1.unIBCRS.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB0D40228)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB0D4022A)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB0D4022B)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB0D4022C)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB0D4022D)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB0D4022E)  /*@bfbba@*/
#define MCG_MFS16_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB0D4022F)  /*@bfbba@*/

#define MCG_MFS17_I2C_IBCRS	(MCG_MFS17_I2C_1.unIBCRS.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_IBCRS_INTS	(*(volatile uint_io8_t*)0xB0D42228)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRS_INTES	(*(volatile uint_io8_t*)0xB0D4222A)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRS_CNDES	(*(volatile uint_io8_t*)0xB0D4222B)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRS_WSELS	(*(volatile uint_io8_t*)0xB0D4222C)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRS_ACKES	(*(volatile uint_io8_t*)0xB0D4222D)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRS_ACTS	(*(volatile uint_io8_t*)0xB0D4222E)  /*@bfbba@*/
#define MCG_MFS17_I2C_IBCRS_MSSS	(*(volatile uint_io8_t*)0xB0D4222F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ibcrs_field{
    uint_io8_t		u1INTS:1;
    uint_io8_t		:1;
    uint_io8_t		u1INTES:1;
    uint_io8_t		u1CNDES:1;
    uint_io8_t		u1WSELS:1;
    uint_io8_t		u1ACKES:1;
    uint_io8_t		u1ACTS:1;
    uint_io8_t		u1MSSS:1;
}stc_mcg_mfsn_i2c_1_ibcrs_field_t;

typedef union un_mcg_mfsn_i2c_1_ibcrs{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ibcrs_field_t		stcField;
}un_mcg_mfsn_i2c_1_ibcrs_t;

/* SSRS */
#define MCG_MFS16_I2C_SSRS	(MCG_MFS16_I2C_1.unSSRS.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB0D4023C)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB0D4023D)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB0D4023E)  /*@bfbba@*/
#define MCG_MFS16_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB0D4023F)  /*@bfbba@*/

#define MCG_MFS17_I2C_SSRS	(MCG_MFS17_I2C_1.unSSRS.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_SSRS_TBIES	(*(volatile uint_io8_t*)0xB0D4223C)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSRS_DMAS	(*(volatile uint_io8_t*)0xB0D4223D)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSRS_TSETS	(*(volatile uint_io8_t*)0xB0D4223E)  /*@bfbba@*/
#define MCG_MFS17_I2C_SSRS_RECS	(*(volatile uint_io8_t*)0xB0D4223F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_ssrs_field{
    uint_io8_t		:4;
    uint_io8_t		u1TBIES:1;
    uint_io8_t		u1DMAS:1;
    uint_io8_t		u1TSETS:1;
    uint_io8_t		u1RECS:1;
}stc_mcg_mfsn_i2c_1_ssrs_field_t;

typedef union un_mcg_mfsn_i2c_1_ssrs{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_ssrs_field_t		stcField;
}un_mcg_mfsn_i2c_1_ssrs_t;

/* SACSRS */
#define MCG_MFS16_I2C_SACSRS	(MCG_MFS16_I2C_1.unSACSRS.u16Register)  /*@rg@*/
#define MCG_MFS16_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB0D40240)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB0D40245)  /*@bfbba@*/
#define MCG_MFS16_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB0D40247)  /*@bfbba@*/

#define MCG_MFS17_I2C_SACSRS	(MCG_MFS17_I2C_1.unSACSRS.u16Register)  /*@rg@*/
#define MCG_MFS17_I2C_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB0D42240)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB0D42245)  /*@bfbba@*/
#define MCG_MFS17_I2C_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB0D42247)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_sacsrs_field{
    uint_io16_t		u1TMRES:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGES:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTES:1;
    uint_io16_t		:8;
}stc_mcg_mfsn_i2c_1_sacsrs_field_t;

typedef union un_mcg_mfsn_i2c_1_sacsrs{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_i2c_1_sacsrs_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_i2c_1_sacsrs_t;

/* FCR0S */
#define MCG_MFS16_I2C_FCR0S	(MCG_MFS16_I2C_1.unFCR0S.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB0D402A0)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB0D402A1)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB0D402A2)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB0D402A3)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB0D402A4)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB0D402A5)  /*@bfbba@*/

#define MCG_MFS17_I2C_FCR0S	(MCG_MFS17_I2C_1.unFCR0S.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB0D422A0)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB0D422A1)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB0D422A2)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB0D422A3)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB0D422A4)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB0D422A5)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_fcr0s_field{
    uint_io8_t		u1FE1S:1;
    uint_io8_t		u1FE2S:1;
    uint_io8_t		u1FCL1S:1;
    uint_io8_t		u1FCL2S:1;
    uint_io8_t		u1FSETS:1;
    uint_io8_t		u1FLDS:1;
    uint_io8_t		:2;
}stc_mcg_mfsn_i2c_1_fcr0s_field_t;

typedef union un_mcg_mfsn_i2c_1_fcr0s{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_fcr0s_field_t		stcField;
}un_mcg_mfsn_i2c_1_fcr0s_t;

/* FCR1S */
#define MCG_MFS16_I2C_FCR1S	(MCG_MFS16_I2C_1.unFCR1S.u8Register)  /*@rg@*/
#define MCG_MFS16_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB0D402A8)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB0D402A9)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB0D402AB)  /*@bfbba@*/
#define MCG_MFS16_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB0D402AC)  /*@bfbba@*/

#define MCG_MFS17_I2C_FCR1S	(MCG_MFS17_I2C_1.unFCR1S.u8Register)  /*@rg@*/
#define MCG_MFS17_I2C_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB0D422A8)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB0D422A9)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB0D422AB)  /*@bfbba@*/
#define MCG_MFS17_I2C_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB0D422AC)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_i2c_1_fcr1s_field{
    uint_io8_t		u1FSELS:1;
    uint_io8_t		u1FTIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1FRIIES:1;
    uint_io8_t		u1FLSTES:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_i2c_1_fcr1s_field_t;

typedef union un_mcg_mfsn_i2c_1_fcr1s{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_i2c_1_fcr1s_field_t		stcField;
}un_mcg_mfsn_i2c_1_fcr1s_t;


typedef struct stc_mcg_mfsn_i2c_1{
    un_mcg_mfsn_i2c_1_smr_t	unSMR;	/* 0x00000000 */
    un_mcg_mfsn_i2c_1_ibcr_t	unIBCR;	/* 0x00000001 */
    un_mcg_mfsn_i2c_1_ibsr_t	unIBSR;	/* 0x00000002 */
    un_mcg_mfsn_i2c_1_ssr_t	unSSR;	/* 0x00000003 */
    un_mcg_mfsn_i2c_1_rdr_t	unRDR;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[3];	/* 0x00000005 */
    un_mcg_mfsn_i2c_1_sacsr_t	unSACSR;	/* 0x00000008 */
    un_mcg_mfsn_i2c_1_stmr_t	unSTMR;	/* 0x0000000A */
    un_mcg_mfsn_i2c_1_stmcr_t	unSTMCR;	/* 0x0000000C */
    uint_io8_t	au8Reserved1[2];	/* 0x0000000E */
    un_mcg_mfsn_i2c_1_nfcr_t	unNFCR;	/* 0x00000010 */
    un_mcg_mfsn_i2c_1_eibcr_t	unEIBCR;	/* 0x00000011 */
    uint_io8_t	au8Reserved2[10];	/* 0x00000012 */
    un_mcg_mfsn_i2c_1_bgr_t	unBGR;	/* 0x0000001C */
    un_mcg_mfsn_i2c_1_isba_t	unISBA;	/* 0x0000001E */
    un_mcg_mfsn_i2c_1_ismk_t	unISMK;	/* 0x0000001F */
    un_mcg_mfsn_i2c_1_fcr0_t	unFCR0;	/* 0x00000020 */
    un_mcg_mfsn_i2c_1_fcr1_t	unFCR1;	/* 0x00000021 */
    un_mcg_mfsn_i2c_1_fbyte_t	unFBYTE;	/* 0x00000022 */
    un_mcg_mfsn_i2c_1_fticr_t	unFTICR;	/* 0x00000024 */
    un_mcg_mfsn_i2c_1_ecr_t	unECR;	/* 0x00000026 */
    un_mcg_mfsn_i2c_1_esr_t	unESR;	/* 0x00000027 */
    un_mcg_mfsn_i2c_1_tbsize_t	unTBSIZE;	/* 0x00000028 */
    uint_io8_t	au8Reserved3[3];	/* 0x00000029 */
    un_mcg_mfsn_i2c_1_smrc_t	unSMRC;	/* 0x0000002C */
    un_mcg_mfsn_i2c_1_ibcrc_t	unIBCRC;	/* 0x0000002D */
    un_mcg_mfsn_i2c_1_ibsrc_t	unIBSRC;	/* 0x0000002E */
    un_mcg_mfsn_i2c_1_ssrc_t	unSSRC;	/* 0x0000002F */
    un_mcg_mfsn_i2c_1_sacsrc_t	unSACSRC;	/* 0x00000030 */
    uint_io8_t	au8Reserved4[10];	/* 0x00000032 */
    un_mcg_mfsn_i2c_1_fcr0c_t	unFCR0C;	/* 0x0000003C */
    un_mcg_mfsn_i2c_1_fcr1c_t	unFCR1C;	/* 0x0000003D */
    uint_io8_t	au8Reserved5[5];	/* 0x0000003E */
    un_mcg_mfsn_i2c_1_esrc_t	unESRC;	/* 0x00000043 */
    un_mcg_mfsn_i2c_1_smrs_t	unSMRS;	/* 0x00000044 */
    un_mcg_mfsn_i2c_1_ibcrs_t	unIBCRS;	/* 0x00000045 */
    uint_io8_t	au8Reserved6[1];	/* 0x00000046 */
    un_mcg_mfsn_i2c_1_ssrs_t	unSSRS;	/* 0x00000047 */
    un_mcg_mfsn_i2c_1_sacsrs_t	unSACSRS;	/* 0x00000048 */
    uint_io8_t	au8Reserved7[10];	/* 0x0000004A */
    un_mcg_mfsn_i2c_1_fcr0s_t	unFCR0S;	/* 0x00000054 */
    un_mcg_mfsn_i2c_1_fcr1s_t	unFCR1S;	/* 0x00000055 */
    uint_io8_t	au8Reserved8[938];	/* 0x00000056 */
}stc_mcg_mfsn_i2c_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mcg_mfsn_i2c_1_t	stcMCG_MFS_I2C_1[2];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_MFS_I2C_H */
