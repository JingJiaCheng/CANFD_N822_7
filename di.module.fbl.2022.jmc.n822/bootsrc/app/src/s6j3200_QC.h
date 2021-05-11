/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_QC_H
#define __S6J3200_QC_H

#include "s6j3200io_basetypes.h"

/* QC[08-09] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define QC08	stcQC[0]
#define QC09	stcQC[1]
#else /* __IO_DEFINE */
#define QC08	(*((volatile stc_qcn_t*)0xB4898000))
#define QC09	(*((volatile stc_qcn_t*)0xB4898400))
#endif /* __IO_DEFINE */

/* QPCR */
#define QC08_QPCR	(QC08.unQPCR.u16Register)  /*@rg@*/
#define QC08_QPCR_QPCR	QC08_QPCR  /*@bfrg@*/

#define QC09_QPCR	(QC09.unQPCR.u16Register)  /*@rg@*/
#define QC09_QPCR_QPCR	QC09_QPCR  /*@bfrg@*/

typedef union un_qcn_qpcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_qcn_qpcr_t;

/* QRCR */
#define QC08_QRCR	(QC08.unQRCR.u16Register)  /*@rg@*/
#define QC08_QRCR_QRCR	QC08_QRCR  /*@bfrg@*/

#define QC09_QRCR	(QC09.unQRCR.u16Register)  /*@rg@*/
#define QC09_QRCR_QRCR	QC09_QRCR  /*@bfrg@*/

typedef union un_qcn_qrcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_qcn_qrcr_t;

/* QPCCR */
#define QC08_QPCCR	(QC08.unQPCCR.u16Register)  /*@rg@*/
#define QC08_QPCCR_QPCCR	QC08_QPCCR  /*@bfrg@*/

#define QC09_QPCCR	(QC09.unQPCCR.u16Register)  /*@rg@*/
#define QC09_QPCCR_QPCCR	QC09_QPCCR  /*@bfrg@*/

typedef union un_qcn_qpccr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_qcn_qpccr_t;

/* QPRCR */
#define QC08_QPRCR	(QC08.unQPRCR.u16Register)  /*@rg@*/
#define QC08_QPRCR_QPRCR	QC08_QPRCR  /*@bfrg@*/

#define QC09_QPRCR	(QC09.unQPRCR.u16Register)  /*@rg@*/
#define QC09_QPRCR_QPRCR	QC09_QPRCR  /*@bfrg@*/

typedef union un_qcn_qprcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_qcn_qprcr_t;

/* QMPR */
#define QC08_QMPR	(QC08.unQMPR.u16Register)  /*@rg@*/
#define QC08_QMPR_QMPR	QC08_QMPR  /*@bfrg@*/

#define QC09_QMPR	(QC09.unQMPR.u16Register)  /*@rg@*/
#define QC09_QMPR_QMPR	QC09_QMPR  /*@bfrg@*/

typedef union un_qcn_qmpr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_qcn_qmpr_t;

/* QICRL */
#define QC08_QICRL	(QC08.unQICRL.u8Register)  /*@rg@*/
#define QC08_QICRL_QPCMIE	(*(volatile uint_io8_t*)0xB7CC0050)  /*@bfbba@*/
#define QC08_QICRL_QPCMF	(*(volatile uint_io8_t*)0xB7CC0051)  /*@bfbba@*/
#define QC08_QICRL_QPRCMIE	(*(volatile uint_io8_t*)0xB7CC0052)  /*@bfbba@*/
#define QC08_QICRL_QPRCMF	(*(volatile uint_io8_t*)0xB7CC0053)  /*@bfbba@*/
#define QC08_QICRL_OUZIE	(*(volatile uint_io8_t*)0xB7CC0054)  /*@bfbba@*/
#define QC08_QICRL_UFDF	(*(volatile uint_io8_t*)0xB7CC0055)  /*@bfbba@*/
#define QC08_QICRL_OFDF	(*(volatile uint_io8_t*)0xB7CC0056)  /*@bfbba@*/
#define QC08_QICRL_ZIIF	(*(volatile uint_io8_t*)0xB7CC0057)  /*@bfbba@*/

#define QC09_QICRL	(QC09.unQICRL.u8Register)  /*@rg@*/
#define QC09_QICRL_QPCMIE	(*(volatile uint_io8_t*)0xB7CC2050)  /*@bfbba@*/
#define QC09_QICRL_QPCMF	(*(volatile uint_io8_t*)0xB7CC2051)  /*@bfbba@*/
#define QC09_QICRL_QPRCMIE	(*(volatile uint_io8_t*)0xB7CC2052)  /*@bfbba@*/
#define QC09_QICRL_QPRCMF	(*(volatile uint_io8_t*)0xB7CC2053)  /*@bfbba@*/
#define QC09_QICRL_OUZIE	(*(volatile uint_io8_t*)0xB7CC2054)  /*@bfbba@*/
#define QC09_QICRL_UFDF	(*(volatile uint_io8_t*)0xB7CC2055)  /*@bfbba@*/
#define QC09_QICRL_OFDF	(*(volatile uint_io8_t*)0xB7CC2056)  /*@bfbba@*/
#define QC09_QICRL_ZIIF	(*(volatile uint_io8_t*)0xB7CC2057)  /*@bfbba@*/

typedef struct stc_qcn_qicrl_field{
    uint_io8_t		u1QPCMIE:1;
    uint_io8_t		u1QPCMF:1;
    uint_io8_t		u1QPRCMIE:1;
    uint_io8_t		u1QPRCMF:1;
    uint_io8_t		u1OUZIE:1;
    uint_io8_t		u1UFDF:1;
    uint_io8_t		u1OFDF:1;
    uint_io8_t		u1ZIIF:1;
}stc_qcn_qicrl_field_t;

typedef union un_qcn_qicrl{
    uint_io8_t		u8Register;
    stc_qcn_qicrl_field_t		stcField;
}un_qcn_qicrl_t;

/* QICRH */
#define QC08_QICRH	(QC08.unQICRH.u8Register)  /*@rg@*/
#define QC08_QICRH_CDCIE	(*(volatile uint_io8_t*)0xB7CC0058)  /*@bfbba@*/
#define QC08_QICRH_CDCF	(*(volatile uint_io8_t*)0xB7CC0059)  /*@bfbba@*/
#define QC08_QICRH_DIRPC	(*(volatile uint_io8_t*)0xB7CC005A)  /*@bfbba@*/
#define QC08_QICRH_DIROU	(*(volatile uint_io8_t*)0xB7CC005B)  /*@bfbba@*/
#define QC08_QICRH_QPCNRCMIE	(*(volatile uint_io8_t*)0xB7CC005C)  /*@bfbba@*/
#define QC08_QICRH_QPCNRCMF	(*(volatile uint_io8_t*)0xB7CC005D)  /*@bfbba@*/

#define QC09_QICRH	(QC09.unQICRH.u8Register)  /*@rg@*/
#define QC09_QICRH_CDCIE	(*(volatile uint_io8_t*)0xB7CC2058)  /*@bfbba@*/
#define QC09_QICRH_CDCF	(*(volatile uint_io8_t*)0xB7CC2059)  /*@bfbba@*/
#define QC09_QICRH_DIRPC	(*(volatile uint_io8_t*)0xB7CC205A)  /*@bfbba@*/
#define QC09_QICRH_DIROU	(*(volatile uint_io8_t*)0xB7CC205B)  /*@bfbba@*/
#define QC09_QICRH_QPCNRCMIE	(*(volatile uint_io8_t*)0xB7CC205C)  /*@bfbba@*/
#define QC09_QICRH_QPCNRCMF	(*(volatile uint_io8_t*)0xB7CC205D)  /*@bfbba@*/

typedef struct stc_qcn_qicrh_field{
    uint_io8_t		u1CDCIE:1;
    uint_io8_t		u1CDCF:1;
    uint_io8_t		u1DIRPC:1;
    uint_io8_t		u1DIROU:1;
    uint_io8_t		u1QPCNRCMIE:1;
    uint_io8_t		u1QPCNRCMF:1;
    uint_io8_t		:2;
}stc_qcn_qicrh_field_t;

typedef union un_qcn_qicrh{
    uint_io8_t		u8Register;
    stc_qcn_qicrh_field_t		stcField;
}un_qcn_qicrh_t;

/* QCR */
#define QC08_QCR	(QC08.unQCR.u16Register)  /*@rg@*/
#define QC08_QCR_PCM	(QC08.unQCR.stcField.u2PCM)  /*@bf@*/
#define QC08_QCR_RCM	(QC08.unQCR.stcField.u2RCM)  /*@bf@*/
#define QC08_QCR_PSTP	(*(volatile uint_io8_t*)0xB7CC0064)  /*@bfbba@*/
#define QC08_QCR_CGSC	(*(volatile uint_io8_t*)0xB7CC0065)  /*@bfbba@*/
#define QC08_QCR_RSEL	(*(volatile uint_io8_t*)0xB7CC0066)  /*@bfbba@*/
#define QC08_QCR_SWAP	(*(volatile uint_io8_t*)0xB7CC0067)  /*@bfbba@*/
#define QC08_QCR_PCRM	(QC08.unQCR.stcField.u2PCRM)  /*@bf@*/
#define QC08_QCR_AES	(QC08.unQCR.stcField.u2AES)  /*@bf@*/
#define QC08_QCR_BES	(QC08.unQCR.stcField.u2BES)  /*@bf@*/
#define QC08_QCR_CGE	(QC08.unQCR.stcField.u2CGE)  /*@bf@*/

#define QC09_QCR	(QC09.unQCR.u16Register)  /*@rg@*/
#define QC09_QCR_PCM	(QC09.unQCR.stcField.u2PCM)  /*@bf@*/
#define QC09_QCR_RCM	(QC09.unQCR.stcField.u2RCM)  /*@bf@*/
#define QC09_QCR_PSTP	(*(volatile uint_io8_t*)0xB7CC2064)  /*@bfbba@*/
#define QC09_QCR_CGSC	(*(volatile uint_io8_t*)0xB7CC2065)  /*@bfbba@*/
#define QC09_QCR_RSEL	(*(volatile uint_io8_t*)0xB7CC2066)  /*@bfbba@*/
#define QC09_QCR_SWAP	(*(volatile uint_io8_t*)0xB7CC2067)  /*@bfbba@*/
#define QC09_QCR_PCRM	(QC09.unQCR.stcField.u2PCRM)  /*@bf@*/
#define QC09_QCR_AES	(QC09.unQCR.stcField.u2AES)  /*@bf@*/
#define QC09_QCR_BES	(QC09.unQCR.stcField.u2BES)  /*@bf@*/
#define QC09_QCR_CGE	(QC09.unQCR.stcField.u2CGE)  /*@bf@*/

typedef struct stc_qcn_qcr_field{
    uint_io16_t		u2PCM:2;
    uint_io16_t		u2RCM:2;
    uint_io16_t		u1PSTP:1;
    uint_io16_t		u1CGSC:1;
    uint_io16_t		u1RSEL:1;
    uint_io16_t		u1SWAP:1;
    uint_io16_t		u2PCRM:2;
    uint_io16_t		u2AES:2;
    uint_io16_t		u2BES:2;
    uint_io16_t		u2CGE:2;
}stc_qcn_qcr_field_t;

typedef union un_qcn_qcr{
    uint_io16_t		u16Register;
    stc_qcn_qcr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_qcn_qcr_t;

/* QECR */
#define QC08_QECR	(QC08.unQECR.u16Register)  /*@rg@*/
#define QC08_QECR_ORNGMD	(*(volatile uint_io8_t*)0xB7CC0070)  /*@bfbba@*/
#define QC08_QECR_ORNGF	(*(volatile uint_io8_t*)0xB7CC0071)  /*@bfbba@*/
#define QC08_QECR_ORNGIE	(*(volatile uint_io8_t*)0xB7CC0072)  /*@bfbba@*/

#define QC09_QECR	(QC09.unQECR.u16Register)  /*@rg@*/
#define QC09_QECR_ORNGMD	(*(volatile uint_io8_t*)0xB7CC2070)  /*@bfbba@*/
#define QC09_QECR_ORNGF	(*(volatile uint_io8_t*)0xB7CC2071)  /*@bfbba@*/
#define QC09_QECR_ORNGIE	(*(volatile uint_io8_t*)0xB7CC2072)  /*@bfbba@*/

typedef struct stc_qcn_qecr_field{
    uint_io16_t		u1ORNGMD:1;
    uint_io16_t		u1ORNGF:1;
    uint_io16_t		u1ORNGIE:1;
    uint_io16_t		:13;
}stc_qcn_qecr_field_t;

typedef union un_qcn_qecr{
    uint_io16_t		u16Register;
    stc_qcn_qecr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_qcn_qecr_t;


typedef struct stc_qcn{
    un_qcn_qpcr_t	unQPCR;	/* 0x00000000 */
    un_qcn_qrcr_t	unQRCR;	/* 0x00000002 */
    un_qcn_qpccr_t	unQPCCR;	/* 0x00000004 */
    un_qcn_qprcr_t	unQPRCR;	/* 0x00000006 */
    un_qcn_qmpr_t	unQMPR;	/* 0x00000008 */
    un_qcn_qicrl_t	unQICRL;	/* 0x0000000A */
    un_qcn_qicrh_t	unQICRH;	/* 0x0000000B */
    un_qcn_qcr_t	unQCR;	/* 0x0000000C */
    un_qcn_qecr_t	unQECR;	/* 0x0000000E */
    uint_io8_t	au8Reserved0[1008];	/* 0x00000010 */
}stc_qcn_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_qcn_t	stcQC[2];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_QC_H */
