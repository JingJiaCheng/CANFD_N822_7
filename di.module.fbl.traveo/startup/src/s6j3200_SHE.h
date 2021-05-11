/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SHE_H
#define __S6J3200_SHE_H

#include "s6j3200io_basetypes.h"

/* SHE base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SHE	stcSHE
#else /* __IO_DEFINE */
#define SHE	(*((volatile stc_she_t*)0xB2000000))
#endif /* __IO_DEFINE */

/* CMD */
#define SHE_CMD	(SHE.unCMD.u32Register)  /*@rg@*/
#define SHE_CMD_CMD	(SHE.unCMD.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_she_cmd_field{
    uint_io32_t		u8CMD:8;
    uint_io32_t		:24;
}stc_she_cmd_field_t;

typedef union un_she_cmd{
    uint_io32_t		u32Register;
    stc_she_cmd_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_cmd_t;

/* CMDCANCEL */
#define SHE_CMDCANCEL	(SHE.unCMDCANCEL.u32Register)  /*@rg@*/
#define SHE_CMDCANCEL_CANCELREQ	(SHE.unCMDCANCEL.stcField.u1CANCELREQ)  /*@bf@*/

typedef struct stc_she_cmdcancel_field{
    uint_io32_t		u1CANCELREQ:1;
    uint_io32_t		:31;
}stc_she_cmdcancel_field_t;

typedef union un_she_cmdcancel{
    uint_io32_t		u32Register;
    stc_she_cmdcancel_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_cmdcancel_t;

/* CLKCTRL */
#define SHE_CLKCTRL	(SHE.unCLKCTRL.u32Register)  /*@rg@*/
#define SHE_CLKCTRL_ENREQ	(SHE.unCLKCTRL.stcField.u1ENREQ)  /*@bf@*/
#define SHE_CLKCTRL_DISREQ	(SHE.unCLKCTRL.stcField.u1DISREQ)  /*@bf@*/

typedef struct stc_she_clkctrl_field{
    uint_io32_t		u1ENREQ:1;
    uint_io32_t		:15;
    uint_io32_t		u1DISREQ:1;
    uint_io32_t		:15;
}stc_she_clkctrl_field_t;

typedef union un_she_clkctrl{
    uint_io32_t		u32Register;
    stc_she_clkctrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_clkctrl_t;

/* STATUS */
#define SHE_STATUS	(SHE.unSTATUS.u32Register)  /*@rg@*/
#define SHE_STATUS_BUSY	(SHE.unSTATUS.stcField.u1BUSY)  /*@bf@*/
#define SHE_STATUS_SECUREBOOT	(SHE.unSTATUS.stcField.u1SECUREBOOT)  /*@bf@*/
#define SHE_STATUS_BOOTINIT	(SHE.unSTATUS.stcField.u1BOOTINIT)  /*@bf@*/
#define SHE_STATUS_BOOTFINISHED	(SHE.unSTATUS.stcField.u1BOOTFINISHED)  /*@bf@*/
#define SHE_STATUS_BOOTOK	(SHE.unSTATUS.stcField.u1BOOTOK)  /*@bf@*/
#define SHE_STATUS_RNDINIT	(SHE.unSTATUS.stcField.u1RNDINIT)  /*@bf@*/
#define SHE_STATUS_EXTDEBUGGER	(SHE.unSTATUS.stcField.u1EXTDEBUGGER)  /*@bf@*/
#define SHE_STATUS_INTDEBUGGER	(SHE.unSTATUS.stcField.u1INTDEBUGGER)  /*@bf@*/
#define SHE_STATUS_DONE	(SHE.unSTATUS.stcField.u1DONE)  /*@bf@*/
#define SHE_STATUS_INITDONE	(SHE.unSTATUS.stcField.u1INITDONE)  /*@bf@*/
#define SHE_STATUS_RAMSEC	(SHE.unSTATUS.stcField.u1RAMSEC)  /*@bf@*/
#define SHE_STATUS_RAMDED	(SHE.unSTATUS.stcField.u1RAMDED)  /*@bf@*/
#define SHE_STATUS_FLASHSEC	(SHE.unSTATUS.stcField.u1FLASHSEC)  /*@bf@*/
#define SHE_STATUS_FLASHDED	(SHE.unSTATUS.stcField.u1FLASHDED)  /*@bf@*/
#define SHE_STATUS_FATALERR	(SHE.unSTATUS.stcField.u1FATALERR)  /*@bf@*/

typedef struct stc_she_status_field{
    uint_io32_t		u1BUSY:1;
    uint_io32_t		u1SECUREBOOT:1;
    uint_io32_t		u1BOOTINIT:1;
    uint_io32_t		u1BOOTFINISHED:1;
    uint_io32_t		u1BOOTOK:1;
    uint_io32_t		u1RNDINIT:1;
    uint_io32_t		u1EXTDEBUGGER:1;
    uint_io32_t		u1INTDEBUGGER:1;
    uint_io32_t		u1DONE:1;
    uint_io32_t		u1INITDONE:1;
    uint_io32_t		:6;
    uint_io32_t		u1RAMSEC:1;
    uint_io32_t		u1RAMDED:1;
    uint_io32_t		u1FLASHSEC:1;
    uint_io32_t		u1FLASHDED:1;
    uint_io32_t		:4;
    uint_io32_t		u1FATALERR:1;
    uint_io32_t		:7;
}stc_she_status_field_t;

typedef union un_she_status{
    uint_io32_t		u32Register;
    stc_she_status_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_status_t;

/* ERC */
#define SHE_ERC	(SHE.unERC.u32Register)  /*@rg@*/
#define SHE_ERC_CMDMAIN	(SHE.unERC.au8Byte[0])  /*@bfbyte@*/
#define SHE_ERC_CMDEXTD	(SHE.unERC.au8Byte[1])  /*@bfbyte@*/
#define SHE_ERC_CANCELMAIN	(SHE.unERC.au8Byte[2])  /*@bfbyte@*/
#define SHE_ERC_CANCELEXTD	(SHE.unERC.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_she_erc_field{
    uint_io32_t		u8CMDMAIN:8;
    uint_io32_t		u8CMDEXTD:8;
    uint_io32_t		u8CANCELMAIN:8;
    uint_io32_t		u8CANCELEXTD:8;
}stc_she_erc_field_t;

typedef union un_she_erc{
    uint_io32_t		u32Register;
    stc_she_erc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_erc_t;

/* CLKSTAT */
#define SHE_CLKSTAT	(SHE.unCLKSTAT.u32Register)  /*@rg@*/
#define SHE_CLKSTAT_CLKOFF	(SHE.unCLKSTAT.stcField.u1CLKOFF)  /*@bf@*/

typedef struct stc_she_clkstat_field{
    uint_io32_t		u1CLKOFF:1;
    uint_io32_t		:31;
}stc_she_clkstat_field_t;

typedef union un_she_clkstat{
    uint_io32_t		u32Register;
    stc_she_clkstat_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_clkstat_t;

/* MID */
#define SHE_MID	(SHE.unMID.u32Register)  /*@rg@*/
#define SHE_MID_MID	SHE_MID  /*@bfrg@*/

typedef union un_she_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_mid_t;

/* IRQ */
#define SHE_IRQ	(SHE.unIRQ.u32Register)  /*@rg@*/
#define SHE_IRQ_COMPAREMATCH	(SHE.unIRQ.stcField.u1COMPAREMATCH)  /*@bf@*/
#define SHE_IRQ_DONE	(SHE.unIRQ.stcField.u1DONE)  /*@bf@*/
#define SHE_IRQ_IMSTIDLE	(SHE.unIRQ.stcField.u1IMSTIDLE)  /*@bf@*/
#define SHE_IRQ_OMSTIDLE	(SHE.unIRQ.stcField.u1OMSTIDLE)  /*@bf@*/
#define SHE_IRQ_IFIFOWRTH	(SHE.unIRQ.stcField.u1IFIFOWRTH)  /*@bf@*/
#define SHE_IRQ_OFIFORDTH	(SHE.unIRQ.stcField.u1OFIFORDTH)  /*@bf@*/
#define SHE_IRQ_IFIFOWRERR	(SHE.unIRQ.stcField.u1IFIFOWRERR)  /*@bf@*/
#define SHE_IRQ_OFIFORDERR	(SHE.unIRQ.stcField.u1OFIFORDERR)  /*@bf@*/
#define SHE_IRQ_IMSTERR	(SHE.unIRQ.stcField.u1IMSTERR)  /*@bf@*/
#define SHE_IRQ_OMSTERR	(SHE.unIRQ.stcField.u1OMSTERR)  /*@bf@*/
#define SHE_IRQ_IMSTIFSELERR	(SHE.unIRQ.stcField.u1IMSTIFSELERR)  /*@bf@*/
#define SHE_IRQ_OMSTIFSELERR	(SHE.unIRQ.stcField.u1OMSTIFSELERR)  /*@bf@*/
#define SHE_IRQ_IFIFOLOCKERR	(SHE.unIRQ.stcField.u1IFIFOLOCKERR)  /*@bf@*/
#define SHE_IRQ_FATALERR	(SHE.unIRQ.stcField.u1FATALERR)  /*@bf@*/

typedef struct stc_she_irq_field{
    uint_io32_t		u1COMPAREMATCH:1;
    uint_io32_t		u1DONE:1;
    uint_io32_t		u1IMSTIDLE:1;
    uint_io32_t		u1OMSTIDLE:1;
    uint_io32_t		u1IFIFOWRTH:1;
    uint_io32_t		u1OFIFORDTH:1;
    uint_io32_t		:10;
    uint_io32_t		u1IFIFOWRERR:1;
    uint_io32_t		u1OFIFORDERR:1;
    uint_io32_t		u1IMSTERR:1;
    uint_io32_t		u1OMSTERR:1;
    uint_io32_t		u1IMSTIFSELERR:1;
    uint_io32_t		u1OMSTIFSELERR:1;
    uint_io32_t		u1IFIFOLOCKERR:1;
    uint_io32_t		u1FATALERR:1;
    uint_io32_t		:8;
}stc_she_irq_field_t;

typedef union un_she_irq{
    uint_io32_t		u32Register;
    stc_she_irq_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_irq_t;

/* IRQEN */
#define SHE_IRQEN	(SHE.unIRQEN.u32Register)  /*@rg@*/
#define SHE_IRQEN_COMPAREMATCH	(SHE.unIRQEN.stcField.u1COMPAREMATCH)  /*@bf@*/
#define SHE_IRQEN_DONE	(SHE.unIRQEN.stcField.u1DONE)  /*@bf@*/
#define SHE_IRQEN_IMSTIDLE	(SHE.unIRQEN.stcField.u1IMSTIDLE)  /*@bf@*/
#define SHE_IRQEN_OMSTIDLE	(SHE.unIRQEN.stcField.u1OMSTIDLE)  /*@bf@*/
#define SHE_IRQEN_IFIFOWRTH	(SHE.unIRQEN.stcField.u1IFIFOWRTH)  /*@bf@*/
#define SHE_IRQEN_OFIFORDTH	(SHE.unIRQEN.stcField.u1OFIFORDTH)  /*@bf@*/
#define SHE_IRQEN_IFIFOWRERR	(SHE.unIRQEN.stcField.u1IFIFOWRERR)  /*@bf@*/
#define SHE_IRQEN_OFIFORDERR	(SHE.unIRQEN.stcField.u1OFIFORDERR)  /*@bf@*/
#define SHE_IRQEN_IMSTERR	(SHE.unIRQEN.stcField.u1IMSTERR)  /*@bf@*/
#define SHE_IRQEN_OMSTERR	(SHE.unIRQEN.stcField.u1OMSTERR)  /*@bf@*/
#define SHE_IRQEN_IMSTIFSELERR	(SHE.unIRQEN.stcField.u1IMSTIFSELERR)  /*@bf@*/
#define SHE_IRQEN_OMSTIFSELERR	(SHE.unIRQEN.stcField.u1OMSTIFSELERR)  /*@bf@*/
#define SHE_IRQEN_IFIFOLOCKERR	(SHE.unIRQEN.stcField.u1IFIFOLOCKERR)  /*@bf@*/
#define SHE_IRQEN_FATALERR	(SHE.unIRQEN.stcField.u1FATALERR)  /*@bf@*/

typedef struct stc_she_irqen_field{
    uint_io32_t		u1COMPAREMATCH:1;
    uint_io32_t		u1DONE:1;
    uint_io32_t		u1IMSTIDLE:1;
    uint_io32_t		u1OMSTIDLE:1;
    uint_io32_t		u1IFIFOWRTH:1;
    uint_io32_t		u1OFIFORDTH:1;
    uint_io32_t		:10;
    uint_io32_t		u1IFIFOWRERR:1;
    uint_io32_t		u1OFIFORDERR:1;
    uint_io32_t		u1IMSTERR:1;
    uint_io32_t		u1OMSTERR:1;
    uint_io32_t		u1IMSTIFSELERR:1;
    uint_io32_t		u1OMSTIFSELERR:1;
    uint_io32_t		u1IFIFOLOCKERR:1;
    uint_io32_t		u1FATALERR:1;
    uint_io32_t		:8;
}stc_she_irqen_field_t;

typedef union un_she_irqen{
    uint_io32_t		u32Register;
    stc_she_irqen_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_irqen_t;

/* IRQCLR */
#define SHE_IRQCLR	(SHE.unIRQCLR.u32Register)  /*@rg@*/
#define SHE_IRQCLR_COMPAREMATCH	(SHE.unIRQCLR.stcField.u1COMPAREMATCH)  /*@bf@*/
#define SHE_IRQCLR_DONE	(SHE.unIRQCLR.stcField.u1DONE)  /*@bf@*/
#define SHE_IRQCLR_IMSTIDLE	(SHE.unIRQCLR.stcField.u1IMSTIDLE)  /*@bf@*/
#define SHE_IRQCLR_OMSTIDLE	(SHE.unIRQCLR.stcField.u1OMSTIDLE)  /*@bf@*/
#define SHE_IRQCLR_IFIFOWRTH	(SHE.unIRQCLR.stcField.u1IFIFOWRTH)  /*@bf@*/
#define SHE_IRQCLR_OFIFORDTH	(SHE.unIRQCLR.stcField.u1OFIFORDTH)  /*@bf@*/
#define SHE_IRQCLR_IFIFOWRERR	(SHE.unIRQCLR.stcField.u1IFIFOWRERR)  /*@bf@*/
#define SHE_IRQCLR_OFIFORDERR	(SHE.unIRQCLR.stcField.u1OFIFORDERR)  /*@bf@*/
#define SHE_IRQCLR_IMSTERR	(SHE.unIRQCLR.stcField.u1IMSTERR)  /*@bf@*/
#define SHE_IRQCLR_OMSTERR	(SHE.unIRQCLR.stcField.u1OMSTERR)  /*@bf@*/
#define SHE_IRQCLR_IMSTIFSELERR	(SHE.unIRQCLR.stcField.u1IMSTIFSELERR)  /*@bf@*/
#define SHE_IRQCLR_OMSTIFSELERR	(SHE.unIRQCLR.stcField.u1OMSTIFSELERR)  /*@bf@*/
#define SHE_IRQCLR_IFIFOLOCKERR	(SHE.unIRQCLR.stcField.u1IFIFOLOCKERR)  /*@bf@*/
#define SHE_IRQCLR_FATALERR	(SHE.unIRQCLR.stcField.u1FATALERR)  /*@bf@*/

typedef struct stc_she_irqclr_field{
    uint_io32_t		u1COMPAREMATCH:1;
    uint_io32_t		u1DONE:1;
    uint_io32_t		u1IMSTIDLE:1;
    uint_io32_t		u1OMSTIDLE:1;
    uint_io32_t		u1IFIFOWRTH:1;
    uint_io32_t		u1OFIFORDTH:1;
    uint_io32_t		:10;
    uint_io32_t		u1IFIFOWRERR:1;
    uint_io32_t		u1OFIFORDERR:1;
    uint_io32_t		u1IMSTERR:1;
    uint_io32_t		u1OMSTERR:1;
    uint_io32_t		u1IMSTIFSELERR:1;
    uint_io32_t		u1OMSTIFSELERR:1;
    uint_io32_t		u1IFIFOLOCKERR:1;
    uint_io32_t		u1FATALERR:1;
    uint_io32_t		:8;
}stc_she_irqclr_field_t;

typedef union un_she_irqclr{
    uint_io32_t		u32Register;
    stc_she_irqclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_irqclr_t;

/* IMSTADDR */
#define SHE_IMSTADDR	(SHE.unIMSTADDR.u32Register)  /*@rg@*/
#define SHE_IMSTADDR_IMSTADDR	SHE_IMSTADDR  /*@bfrg@*/

typedef union un_she_imstaddr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_imstaddr_t;

/* OMSTADDR */
#define SHE_OMSTADDR	(SHE.unOMSTADDR.u32Register)  /*@rg@*/
#define SHE_OMSTADDR_OMSTADDR	SHE_OMSTADDR  /*@bfrg@*/

typedef union un_she_omstaddr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_omstaddr_t;

/* IMSTCNT */
#define SHE_IMSTCNT	(SHE.unIMSTCNT.u32Register)  /*@rg@*/
#define SHE_IMSTCNT_IMSTCNT	(SHE.unIMSTCNT.stcField.u29IMSTCNT)  /*@bf@*/

typedef struct stc_she_imstcnt_field{
    uint_io32_t		u29IMSTCNT:29;
    uint_io32_t		:3;
}stc_she_imstcnt_field_t;

typedef union un_she_imstcnt{
    uint_io32_t		u32Register;
    stc_she_imstcnt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_imstcnt_t;

/* OMSTCNT */
#define SHE_OMSTCNT	(SHE.unOMSTCNT.u32Register)  /*@rg@*/
#define SHE_OMSTCNT_OMSTCNT	(SHE.unOMSTCNT.stcField.u29OMSTCNT)  /*@bf@*/

typedef struct stc_she_omstcnt_field{
    uint_io32_t		u29OMSTCNT:29;
    uint_io32_t		:3;
}stc_she_omstcnt_field_t;

typedef union un_she_omstcnt{
    uint_io32_t		u32Register;
    stc_she_omstcnt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_omstcnt_t;

/* IMSTSTART */
#define SHE_IMSTSTART	(SHE.unIMSTSTART.u32Register)  /*@rg@*/
#define SHE_IMSTSTART_IMSTSTART	(SHE.unIMSTSTART.stcField.u1IMSTSTART)  /*@bf@*/

typedef struct stc_she_imststart_field{
    uint_io32_t		u1IMSTSTART:1;
    uint_io32_t		:31;
}stc_she_imststart_field_t;

typedef union un_she_imststart{
    uint_io32_t		u32Register;
    stc_she_imststart_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_imststart_t;

/* OMSTSTART */
#define SHE_OMSTSTART	(SHE.unOMSTSTART.u32Register)  /*@rg@*/
#define SHE_OMSTSTART_OMSTSTART	(SHE.unOMSTSTART.stcField.u1OMSTSTART)  /*@bf@*/

typedef struct stc_she_omststart_field{
    uint_io32_t		u1OMSTSTART:1;
    uint_io32_t		:31;
}stc_she_omststart_field_t;

typedef union un_she_omststart{
    uint_io32_t		u32Register;
    stc_she_omststart_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_omststart_t;

/* IFIFOCFG */
#define SHE_IFIFOCFG	(SHE.unIFIFOCFG.u32Register)  /*@rg@*/
#define SHE_IFIFOCFG_0	(SHE.unIFIFOCFG.au8Byte[0])  /*@arbyte@*/
#define SHE_IFIFOCFG_2	(SHE.unIFIFOCFG.au8Byte[2])  /*@arbyte@*/
#define SHE_IFIFOCFG_WRTHRESHOLD	(SHE.unIFIFOCFG.stcField.u6WRTHRESHOLD)  /*@bf@*/
#define SHE_IFIFOCFG_IFSEL	(SHE.unIFIFOCFG.stcField.u1IFSEL)  /*@bf@*/

typedef struct stc_she_ififocfg_field{
    uint_io32_t		u6WRTHRESHOLD:6;
    uint_io32_t		:10;
    uint_io32_t		u1IFSEL:1;
    uint_io32_t		:15;
}stc_she_ififocfg_field_t;

typedef union un_she_ififocfg{
    uint_io32_t		u32Register;
    stc_she_ififocfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_ififocfg_t;

/* OFIFOCFG */
#define SHE_OFIFOCFG	(SHE.unOFIFOCFG.u32Register)  /*@rg@*/
#define SHE_OFIFOCFG_0	(SHE.unOFIFOCFG.au8Byte[0])  /*@arbyte@*/
#define SHE_OFIFOCFG_2	(SHE.unOFIFOCFG.au8Byte[2])  /*@arbyte@*/
#define SHE_OFIFOCFG_RDTHRESHOLD	(SHE.unOFIFOCFG.stcField.u6RDTHRESHOLD)  /*@bf@*/
#define SHE_OFIFOCFG_IFSEL	(SHE.unOFIFOCFG.stcField.u1IFSEL)  /*@bf@*/

typedef struct stc_she_ofifocfg_field{
    uint_io32_t		u6RDTHRESHOLD:6;
    uint_io32_t		:10;
    uint_io32_t		u1IFSEL:1;
    uint_io32_t		:15;
}stc_she_ofifocfg_field_t;

typedef union un_she_ofifocfg{
    uint_io32_t		u32Register;
    stc_she_ofifocfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_ofifocfg_t;

/* COMPARE0 */
#define SHE_COMPARE0	(SHE.unCOMPARE0.u32Register)  /*@rg@*/
#define SHE_COMPARE0_COMPARE	SHE_COMPARE0  /*@bfrg@*/

typedef union un_she_compare0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_compare0_t;

/* COMPARE1 */
#define SHE_COMPARE1	(SHE.unCOMPARE1.u32Register)  /*@rg@*/
#define SHE_COMPARE1_COMPARE	(SHE.unCOMPARE1.stcField.u27COMPARE)  /*@bf@*/

typedef struct stc_she_compare1_field{
    uint_io32_t		u27COMPARE:27;
    uint_io32_t		:5;
}stc_she_compare1_field_t;

typedef union un_she_compare1{
    uint_io32_t		u32Register;
    stc_she_compare1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_compare1_t;

/* COMPACC */
#define SHE_COMPACC	(SHE.unCOMPACC.u32Register)  /*@rg@*/
#define SHE_COMPACC_CPUEN	(SHE.unCOMPACC.stcField.u1CPUEN)  /*@bf@*/

typedef struct stc_she_compacc_field{
    uint_io32_t		u1CPUEN:1;
    uint_io32_t		:31;
}stc_she_compacc_field_t;

typedef union un_she_compacc{
    uint_io32_t		u32Register;
    stc_she_compacc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_compacc_t;

/* MSTSTATUS */
#define SHE_MSTSTATUS	(SHE.unMSTSTATUS.u32Register)  /*@rg@*/
#define SHE_MSTSTATUS_IMSTIDLE	(SHE.unMSTSTATUS.stcField.u1IMSTIDLE)  /*@bf@*/
#define SHE_MSTSTATUS_IMSTLOCK	(SHE.unMSTSTATUS.stcField.u1IMSTLOCK)  /*@bf@*/
#define SHE_MSTSTATUS_IMSTERR	(SHE.unMSTSTATUS.stcField.u1IMSTERR)  /*@bf@*/
#define SHE_MSTSTATUS_IMSTERRRESP	(SHE.unMSTSTATUS.stcField.u2IMSTERRRESP)  /*@bf@*/
#define SHE_MSTSTATUS_OMSTIDLE	(SHE.unMSTSTATUS.stcField.u1OMSTIDLE)  /*@bf@*/
#define SHE_MSTSTATUS_OMSTLOCK	(SHE.unMSTSTATUS.stcField.u1OMSTLOCK)  /*@bf@*/
#define SHE_MSTSTATUS_OMSTERR	(SHE.unMSTSTATUS.stcField.u1OMSTERR)  /*@bf@*/
#define SHE_MSTSTATUS_OMSTERRRESP	(SHE.unMSTSTATUS.stcField.u2OMSTERRRESP)  /*@bf@*/

typedef struct stc_she_mststatus_field{
    uint_io32_t		u1IMSTIDLE:1;
    uint_io32_t		u1IMSTLOCK:1;
    uint_io32_t		:6;
    uint_io32_t		u1IMSTERR:1;
    uint_io32_t		u2IMSTERRRESP:2;
    uint_io32_t		:5;
    uint_io32_t		u1OMSTIDLE:1;
    uint_io32_t		u1OMSTLOCK:1;
    uint_io32_t		:6;
    uint_io32_t		u1OMSTERR:1;
    uint_io32_t		u2OMSTERRRESP:2;
    uint_io32_t		:5;
}stc_she_mststatus_field_t;

typedef union un_she_mststatus{
    uint_io32_t		u32Register;
    stc_she_mststatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_mststatus_t;

/* IMSTERRADDR */
#define SHE_IMSTERRADDR	(SHE.unIMSTERRADDR.u32Register)  /*@rg@*/
#define SHE_IMSTERRADDR_IMSTERRADDR	SHE_IMSTERRADDR  /*@bfrg@*/

typedef union un_she_imsterraddr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_imsterraddr_t;

/* OMSTERRADDR */
#define SHE_OMSTERRADDR	(SHE.unOMSTERRADDR.u32Register)  /*@rg@*/
#define SHE_OMSTERRADDR_OMSTERRADDR	SHE_OMSTERRADDR  /*@bfrg@*/

typedef union un_she_omsterraddr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_omsterraddr_t;

/* FIFOSTATUS */
#define SHE_FIFOSTATUS	(SHE.unFIFOSTATUS.u32Register)  /*@rg@*/
#define SHE_FIFOSTATUS_IFIFOWRTH	(SHE.unFIFOSTATUS.stcField.u1IFIFOWRTH)  /*@bf@*/
#define SHE_FIFOSTATUS_OFIFORDTH	(SHE.unFIFOSTATUS.stcField.u1OFIFORDTH)  /*@bf@*/
#define SHE_FIFOSTATUS_COMPAREMATCH	(SHE.unFIFOSTATUS.stcField.u1COMPAREMATCH)  /*@bf@*/

typedef struct stc_she_fifostatus_field{
    uint_io32_t		u1IFIFOWRTH:1;
    uint_io32_t		:7;
    uint_io32_t		u1OFIFORDTH:1;
    uint_io32_t		:7;
    uint_io32_t		u1COMPAREMATCH:1;
    uint_io32_t		:15;
}stc_she_fifostatus_field_t;

typedef union un_she_fifostatus{
    uint_io32_t		u32Register;
    stc_she_fifostatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_fifostatus_t;

/* FIFOLOAD */
#define SHE_FIFOLOAD	(SHE.unFIFOLOAD.u32Register)  /*@rg@*/
#define SHE_FIFOLOAD_IFIFOFREE	(SHE.unFIFOLOAD.stcField.u6IFIFOFREE)  /*@bf@*/
#define SHE_FIFOLOAD_IFIFOLOAD	(SHE.unFIFOLOAD.stcField.u6IFIFOLOAD)  /*@bf@*/
#define SHE_FIFOLOAD_OFIFOFREE	(SHE.unFIFOLOAD.stcField.u6OFIFOFREE)  /*@bf@*/
#define SHE_FIFOLOAD_OFIFOLOAD	(SHE.unFIFOLOAD.stcField.u6OFIFOLOAD)  /*@bf@*/

typedef struct stc_she_fifoload_field{
    uint_io32_t		u6IFIFOFREE:6;
    uint_io32_t		:2;
    uint_io32_t		u6IFIFOLOAD:6;
    uint_io32_t		:2;
    uint_io32_t		u6OFIFOFREE:6;
    uint_io32_t		:2;
    uint_io32_t		u6OFIFOLOAD:6;
    uint_io32_t		:2;
}stc_she_fifoload_field_t;

typedef union un_she_fifoload{
    uint_io32_t		u32Register;
    stc_she_fifoload_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_fifoload_t;

/* DATACNT0 */
#define SHE_DATACNT0	(SHE.unDATACNT0.u32Register)  /*@rg@*/
#define SHE_DATACNT0_DATACNT	SHE_DATACNT0  /*@bfrg@*/

typedef union un_she_datacnt0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_datacnt0_t;

/* DATACNT1 */
#define SHE_DATACNT1	(SHE.unDATACNT1.u32Register)  /*@rg@*/
#define SHE_DATACNT1_DATACNT	(SHE.unDATACNT1.stcField.u27DATACNT)  /*@bf@*/

typedef struct stc_she_datacnt1_field{
    uint_io32_t		u27DATACNT:27;
    uint_io32_t		:5;
}stc_she_datacnt1_field_t;

typedef union un_she_datacnt1{
    uint_io32_t		u32Register;
    stc_she_datacnt1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_datacnt1_t;

/* IFIFOWRDATA[0-31] */
#define SHE_IFIFOWRDATA0	(SHE.unIFIFOWRDATA0.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA0_IFIFOWRDATA	SHE_IFIFOWRDATA0  /*@bfrg@*/

#define SHE_IFIFOWRDATA1	(SHE.unIFIFOWRDATA1.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA1_IFIFOWRDATA	SHE_IFIFOWRDATA1  /*@bfrg@*/

#define SHE_IFIFOWRDATA2	(SHE.unIFIFOWRDATA2.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA2_IFIFOWRDATA	SHE_IFIFOWRDATA2  /*@bfrg@*/

#define SHE_IFIFOWRDATA3	(SHE.unIFIFOWRDATA3.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA3_IFIFOWRDATA	SHE_IFIFOWRDATA3  /*@bfrg@*/

#define SHE_IFIFOWRDATA4	(SHE.unIFIFOWRDATA4.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA4_IFIFOWRDATA	SHE_IFIFOWRDATA4  /*@bfrg@*/

#define SHE_IFIFOWRDATA5	(SHE.unIFIFOWRDATA5.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA5_IFIFOWRDATA	SHE_IFIFOWRDATA5  /*@bfrg@*/

#define SHE_IFIFOWRDATA6	(SHE.unIFIFOWRDATA6.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA6_IFIFOWRDATA	SHE_IFIFOWRDATA6  /*@bfrg@*/

#define SHE_IFIFOWRDATA7	(SHE.unIFIFOWRDATA7.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA7_IFIFOWRDATA	SHE_IFIFOWRDATA7  /*@bfrg@*/

#define SHE_IFIFOWRDATA8	(SHE.unIFIFOWRDATA8.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA8_IFIFOWRDATA	SHE_IFIFOWRDATA8  /*@bfrg@*/

#define SHE_IFIFOWRDATA9	(SHE.unIFIFOWRDATA9.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA9_IFIFOWRDATA	SHE_IFIFOWRDATA9  /*@bfrg@*/

#define SHE_IFIFOWRDATA10	(SHE.unIFIFOWRDATA10.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA10_IFIFOWRDATA	SHE_IFIFOWRDATA10  /*@bfrg@*/

#define SHE_IFIFOWRDATA11	(SHE.unIFIFOWRDATA11.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA11_IFIFOWRDATA	SHE_IFIFOWRDATA11  /*@bfrg@*/

#define SHE_IFIFOWRDATA12	(SHE.unIFIFOWRDATA12.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA12_IFIFOWRDATA	SHE_IFIFOWRDATA12  /*@bfrg@*/

#define SHE_IFIFOWRDATA13	(SHE.unIFIFOWRDATA13.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA13_IFIFOWRDATA	SHE_IFIFOWRDATA13  /*@bfrg@*/

#define SHE_IFIFOWRDATA14	(SHE.unIFIFOWRDATA14.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA14_IFIFOWRDATA	SHE_IFIFOWRDATA14  /*@bfrg@*/

#define SHE_IFIFOWRDATA15	(SHE.unIFIFOWRDATA15.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA15_IFIFOWRDATA	SHE_IFIFOWRDATA15  /*@bfrg@*/

#define SHE_IFIFOWRDATA16	(SHE.unIFIFOWRDATA16.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA16_IFIFOWRDATA	SHE_IFIFOWRDATA16  /*@bfrg@*/

#define SHE_IFIFOWRDATA17	(SHE.unIFIFOWRDATA17.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA17_IFIFOWRDATA	SHE_IFIFOWRDATA17  /*@bfrg@*/

#define SHE_IFIFOWRDATA18	(SHE.unIFIFOWRDATA18.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA18_IFIFOWRDATA	SHE_IFIFOWRDATA18  /*@bfrg@*/

#define SHE_IFIFOWRDATA19	(SHE.unIFIFOWRDATA19.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA19_IFIFOWRDATA	SHE_IFIFOWRDATA19  /*@bfrg@*/

#define SHE_IFIFOWRDATA20	(SHE.unIFIFOWRDATA20.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA20_IFIFOWRDATA	SHE_IFIFOWRDATA20  /*@bfrg@*/

#define SHE_IFIFOWRDATA21	(SHE.unIFIFOWRDATA21.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA21_IFIFOWRDATA	SHE_IFIFOWRDATA21  /*@bfrg@*/

#define SHE_IFIFOWRDATA22	(SHE.unIFIFOWRDATA22.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA22_IFIFOWRDATA	SHE_IFIFOWRDATA22  /*@bfrg@*/

#define SHE_IFIFOWRDATA23	(SHE.unIFIFOWRDATA23.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA23_IFIFOWRDATA	SHE_IFIFOWRDATA23  /*@bfrg@*/

#define SHE_IFIFOWRDATA24	(SHE.unIFIFOWRDATA24.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA24_IFIFOWRDATA	SHE_IFIFOWRDATA24  /*@bfrg@*/

#define SHE_IFIFOWRDATA25	(SHE.unIFIFOWRDATA25.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA25_IFIFOWRDATA	SHE_IFIFOWRDATA25  /*@bfrg@*/

#define SHE_IFIFOWRDATA26	(SHE.unIFIFOWRDATA26.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA26_IFIFOWRDATA	SHE_IFIFOWRDATA26  /*@bfrg@*/

#define SHE_IFIFOWRDATA27	(SHE.unIFIFOWRDATA27.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA27_IFIFOWRDATA	SHE_IFIFOWRDATA27  /*@bfrg@*/

#define SHE_IFIFOWRDATA28	(SHE.unIFIFOWRDATA28.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA28_IFIFOWRDATA	SHE_IFIFOWRDATA28  /*@bfrg@*/

#define SHE_IFIFOWRDATA29	(SHE.unIFIFOWRDATA29.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA29_IFIFOWRDATA	SHE_IFIFOWRDATA29  /*@bfrg@*/

#define SHE_IFIFOWRDATA30	(SHE.unIFIFOWRDATA30.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA30_IFIFOWRDATA	SHE_IFIFOWRDATA30  /*@bfrg@*/

#define SHE_IFIFOWRDATA31	(SHE.unIFIFOWRDATA31.u32Register)  /*@rg@*/
#define SHE_IFIFOWRDATA31_IFIFOWRDATA	SHE_IFIFOWRDATA31  /*@bfrg@*/

typedef union un_she_ififowrdatan{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_ififowrdatan_t;

/* OFIFORDDATA[0-31] */
#define SHE_OFIFORDDATA0	(SHE.unOFIFORDDATA0.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA0_OFIFORDDATA	SHE_OFIFORDDATA0  /*@bfrg@*/

#define SHE_OFIFORDDATA1	(SHE.unOFIFORDDATA1.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA1_OFIFORDDATA	SHE_OFIFORDDATA1  /*@bfrg@*/

#define SHE_OFIFORDDATA2	(SHE.unOFIFORDDATA2.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA2_OFIFORDDATA	SHE_OFIFORDDATA2  /*@bfrg@*/

#define SHE_OFIFORDDATA3	(SHE.unOFIFORDDATA3.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA3_OFIFORDDATA	SHE_OFIFORDDATA3  /*@bfrg@*/

#define SHE_OFIFORDDATA4	(SHE.unOFIFORDDATA4.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA4_OFIFORDDATA	SHE_OFIFORDDATA4  /*@bfrg@*/

#define SHE_OFIFORDDATA5	(SHE.unOFIFORDDATA5.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA5_OFIFORDDATA	SHE_OFIFORDDATA5  /*@bfrg@*/

#define SHE_OFIFORDDATA6	(SHE.unOFIFORDDATA6.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA6_OFIFORDDATA	SHE_OFIFORDDATA6  /*@bfrg@*/

#define SHE_OFIFORDDATA7	(SHE.unOFIFORDDATA7.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA7_OFIFORDDATA	SHE_OFIFORDDATA7  /*@bfrg@*/

#define SHE_OFIFORDDATA8	(SHE.unOFIFORDDATA8.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA8_OFIFORDDATA	SHE_OFIFORDDATA8  /*@bfrg@*/

#define SHE_OFIFORDDATA9	(SHE.unOFIFORDDATA9.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA9_OFIFORDDATA	SHE_OFIFORDDATA9  /*@bfrg@*/

#define SHE_OFIFORDDATA10	(SHE.unOFIFORDDATA10.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA10_OFIFORDDATA	SHE_OFIFORDDATA10  /*@bfrg@*/

#define SHE_OFIFORDDATA11	(SHE.unOFIFORDDATA11.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA11_OFIFORDDATA	SHE_OFIFORDDATA11  /*@bfrg@*/

#define SHE_OFIFORDDATA12	(SHE.unOFIFORDDATA12.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA12_OFIFORDDATA	SHE_OFIFORDDATA12  /*@bfrg@*/

#define SHE_OFIFORDDATA13	(SHE.unOFIFORDDATA13.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA13_OFIFORDDATA	SHE_OFIFORDDATA13  /*@bfrg@*/

#define SHE_OFIFORDDATA14	(SHE.unOFIFORDDATA14.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA14_OFIFORDDATA	SHE_OFIFORDDATA14  /*@bfrg@*/

#define SHE_OFIFORDDATA15	(SHE.unOFIFORDDATA15.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA15_OFIFORDDATA	SHE_OFIFORDDATA15  /*@bfrg@*/

#define SHE_OFIFORDDATA16	(SHE.unOFIFORDDATA16.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA16_OFIFORDDATA	SHE_OFIFORDDATA16  /*@bfrg@*/

#define SHE_OFIFORDDATA17	(SHE.unOFIFORDDATA17.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA17_OFIFORDDATA	SHE_OFIFORDDATA17  /*@bfrg@*/

#define SHE_OFIFORDDATA18	(SHE.unOFIFORDDATA18.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA18_OFIFORDDATA	SHE_OFIFORDDATA18  /*@bfrg@*/

#define SHE_OFIFORDDATA19	(SHE.unOFIFORDDATA19.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA19_OFIFORDDATA	SHE_OFIFORDDATA19  /*@bfrg@*/

#define SHE_OFIFORDDATA20	(SHE.unOFIFORDDATA20.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA20_OFIFORDDATA	SHE_OFIFORDDATA20  /*@bfrg@*/

#define SHE_OFIFORDDATA21	(SHE.unOFIFORDDATA21.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA21_OFIFORDDATA	SHE_OFIFORDDATA21  /*@bfrg@*/

#define SHE_OFIFORDDATA22	(SHE.unOFIFORDDATA22.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA22_OFIFORDDATA	SHE_OFIFORDDATA22  /*@bfrg@*/

#define SHE_OFIFORDDATA23	(SHE.unOFIFORDDATA23.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA23_OFIFORDDATA	SHE_OFIFORDDATA23  /*@bfrg@*/

#define SHE_OFIFORDDATA24	(SHE.unOFIFORDDATA24.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA24_OFIFORDDATA	SHE_OFIFORDDATA24  /*@bfrg@*/

#define SHE_OFIFORDDATA25	(SHE.unOFIFORDDATA25.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA25_OFIFORDDATA	SHE_OFIFORDDATA25  /*@bfrg@*/

#define SHE_OFIFORDDATA26	(SHE.unOFIFORDDATA26.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA26_OFIFORDDATA	SHE_OFIFORDDATA26  /*@bfrg@*/

#define SHE_OFIFORDDATA27	(SHE.unOFIFORDDATA27.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA27_OFIFORDDATA	SHE_OFIFORDDATA27  /*@bfrg@*/

#define SHE_OFIFORDDATA28	(SHE.unOFIFORDDATA28.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA28_OFIFORDDATA	SHE_OFIFORDDATA28  /*@bfrg@*/

#define SHE_OFIFORDDATA29	(SHE.unOFIFORDDATA29.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA29_OFIFORDDATA	SHE_OFIFORDDATA29  /*@bfrg@*/

#define SHE_OFIFORDDATA30	(SHE.unOFIFORDDATA30.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA30_OFIFORDDATA	SHE_OFIFORDDATA30  /*@bfrg@*/

#define SHE_OFIFORDDATA31	(SHE.unOFIFORDDATA31.u32Register)  /*@rg@*/
#define SHE_OFIFORDDATA31_OFIFORDDATA	SHE_OFIFORDDATA31  /*@bfrg@*/

typedef union un_she_ofiforddatan{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_she_ofiforddatan_t;


typedef struct stc_she{
    un_she_cmd_t	unCMD;	/* 0x00000000 */
    un_she_cmdcancel_t	unCMDCANCEL;	/* 0x00000004 */
    un_she_clkctrl_t	unCLKCTRL;	/* 0x00000008 */
    un_she_status_t	unSTATUS;	/* 0x0000000C */
    un_she_erc_t	unERC;	/* 0x00000010 */
    un_she_clkstat_t	unCLKSTAT;	/* 0x00000014 */
    un_she_mid_t	unMID;	/* 0x00000018 */
    un_she_irq_t	unIRQ;	/* 0x0000001C */
    un_she_irqen_t	unIRQEN;	/* 0x00000020 */
    un_she_irqclr_t	unIRQCLR;	/* 0x00000024 */
    un_she_imstaddr_t	unIMSTADDR;	/* 0x00000028 */
    un_she_omstaddr_t	unOMSTADDR;	/* 0x0000002C */
    un_she_imstcnt_t	unIMSTCNT;	/* 0x00000030 */
    un_she_omstcnt_t	unOMSTCNT;	/* 0x00000034 */
    un_she_imststart_t	unIMSTSTART;	/* 0x00000038 */
    un_she_omststart_t	unOMSTSTART;	/* 0x0000003C */
    un_she_ififocfg_t	unIFIFOCFG;	/* 0x00000040 */
    un_she_ofifocfg_t	unOFIFOCFG;	/* 0x00000044 */
    un_she_compare0_t	unCOMPARE0;	/* 0x00000048 */
    un_she_compare1_t	unCOMPARE1;	/* 0x0000004C */
    un_she_compacc_t	unCOMPACC;	/* 0x00000050 */
    un_she_mststatus_t	unMSTSTATUS;	/* 0x00000054 */
    un_she_imsterraddr_t	unIMSTERRADDR;	/* 0x00000058 */
    un_she_omsterraddr_t	unOMSTERRADDR;	/* 0x0000005C */
    un_she_fifostatus_t	unFIFOSTATUS;	/* 0x00000060 */
    un_she_fifoload_t	unFIFOLOAD;	/* 0x00000064 */
    un_she_datacnt0_t	unDATACNT0;	/* 0x00000068 */
    un_she_datacnt1_t	unDATACNT1;	/* 0x0000006C */
    uint_io8_t	au8Reserved0[144];	/* 0x00000070 */
    un_she_ififowrdatan_t	unIFIFOWRDATA0;	/* 0x00000100 */
    un_she_ififowrdatan_t	unIFIFOWRDATA1;	/* 0x00000104 */
    un_she_ififowrdatan_t	unIFIFOWRDATA2;	/* 0x00000108 */
    un_she_ififowrdatan_t	unIFIFOWRDATA3;	/* 0x0000010C */
    un_she_ififowrdatan_t	unIFIFOWRDATA4;	/* 0x00000110 */
    un_she_ififowrdatan_t	unIFIFOWRDATA5;	/* 0x00000114 */
    un_she_ififowrdatan_t	unIFIFOWRDATA6;	/* 0x00000118 */
    un_she_ififowrdatan_t	unIFIFOWRDATA7;	/* 0x0000011C */
    un_she_ififowrdatan_t	unIFIFOWRDATA8;	/* 0x00000120 */
    un_she_ififowrdatan_t	unIFIFOWRDATA9;	/* 0x00000124 */
    un_she_ififowrdatan_t	unIFIFOWRDATA10;	/* 0x00000128 */
    un_she_ififowrdatan_t	unIFIFOWRDATA11;	/* 0x0000012C */
    un_she_ififowrdatan_t	unIFIFOWRDATA12;	/* 0x00000130 */
    un_she_ififowrdatan_t	unIFIFOWRDATA13;	/* 0x00000134 */
    un_she_ififowrdatan_t	unIFIFOWRDATA14;	/* 0x00000138 */
    un_she_ififowrdatan_t	unIFIFOWRDATA15;	/* 0x0000013C */
    un_she_ififowrdatan_t	unIFIFOWRDATA16;	/* 0x00000140 */
    un_she_ififowrdatan_t	unIFIFOWRDATA17;	/* 0x00000144 */
    un_she_ififowrdatan_t	unIFIFOWRDATA18;	/* 0x00000148 */
    un_she_ififowrdatan_t	unIFIFOWRDATA19;	/* 0x0000014C */
    un_she_ififowrdatan_t	unIFIFOWRDATA20;	/* 0x00000150 */
    un_she_ififowrdatan_t	unIFIFOWRDATA21;	/* 0x00000154 */
    un_she_ififowrdatan_t	unIFIFOWRDATA22;	/* 0x00000158 */
    un_she_ififowrdatan_t	unIFIFOWRDATA23;	/* 0x0000015C */
    un_she_ififowrdatan_t	unIFIFOWRDATA24;	/* 0x00000160 */
    un_she_ififowrdatan_t	unIFIFOWRDATA25;	/* 0x00000164 */
    un_she_ififowrdatan_t	unIFIFOWRDATA26;	/* 0x00000168 */
    un_she_ififowrdatan_t	unIFIFOWRDATA27;	/* 0x0000016C */
    un_she_ififowrdatan_t	unIFIFOWRDATA28;	/* 0x00000170 */
    un_she_ififowrdatan_t	unIFIFOWRDATA29;	/* 0x00000174 */
    un_she_ififowrdatan_t	unIFIFOWRDATA30;	/* 0x00000178 */
    un_she_ififowrdatan_t	unIFIFOWRDATA31;	/* 0x0000017C */
    un_she_ofiforddatan_t	unOFIFORDDATA0;	/* 0x00000180 */
    un_she_ofiforddatan_t	unOFIFORDDATA1;	/* 0x00000184 */
    un_she_ofiforddatan_t	unOFIFORDDATA2;	/* 0x00000188 */
    un_she_ofiforddatan_t	unOFIFORDDATA3;	/* 0x0000018C */
    un_she_ofiforddatan_t	unOFIFORDDATA4;	/* 0x00000190 */
    un_she_ofiforddatan_t	unOFIFORDDATA5;	/* 0x00000194 */
    un_she_ofiforddatan_t	unOFIFORDDATA6;	/* 0x00000198 */
    un_she_ofiforddatan_t	unOFIFORDDATA7;	/* 0x0000019C */
    un_she_ofiforddatan_t	unOFIFORDDATA8;	/* 0x000001A0 */
    un_she_ofiforddatan_t	unOFIFORDDATA9;	/* 0x000001A4 */
    un_she_ofiforddatan_t	unOFIFORDDATA10;	/* 0x000001A8 */
    un_she_ofiforddatan_t	unOFIFORDDATA11;	/* 0x000001AC */
    un_she_ofiforddatan_t	unOFIFORDDATA12;	/* 0x000001B0 */
    un_she_ofiforddatan_t	unOFIFORDDATA13;	/* 0x000001B4 */
    un_she_ofiforddatan_t	unOFIFORDDATA14;	/* 0x000001B8 */
    un_she_ofiforddatan_t	unOFIFORDDATA15;	/* 0x000001BC */
    un_she_ofiforddatan_t	unOFIFORDDATA16;	/* 0x000001C0 */
    un_she_ofiforddatan_t	unOFIFORDDATA17;	/* 0x000001C4 */
    un_she_ofiforddatan_t	unOFIFORDDATA18;	/* 0x000001C8 */
    un_she_ofiforddatan_t	unOFIFORDDATA19;	/* 0x000001CC */
    un_she_ofiforddatan_t	unOFIFORDDATA20;	/* 0x000001D0 */
    un_she_ofiforddatan_t	unOFIFORDDATA21;	/* 0x000001D4 */
    un_she_ofiforddatan_t	unOFIFORDDATA22;	/* 0x000001D8 */
    un_she_ofiforddatan_t	unOFIFORDDATA23;	/* 0x000001DC */
    un_she_ofiforddatan_t	unOFIFORDDATA24;	/* 0x000001E0 */
    un_she_ofiforddatan_t	unOFIFORDDATA25;	/* 0x000001E4 */
    un_she_ofiforddatan_t	unOFIFORDDATA26;	/* 0x000001E8 */
    un_she_ofiforddatan_t	unOFIFORDDATA27;	/* 0x000001EC */
    un_she_ofiforddatan_t	unOFIFORDDATA28;	/* 0x000001F0 */
    un_she_ofiforddatan_t	unOFIFORDDATA29;	/* 0x000001F4 */
    un_she_ofiforddatan_t	unOFIFORDDATA30;	/* 0x000001F8 */
    un_she_ofiforddatan_t	unOFIFORDDATA31;	/* 0x000001FC */
    uint_io8_t	au8Reserved1[1048064];	/* 0x00000200 */
}stc_she_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_she_t	stcSHE;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1048576(0x100000) bytes */


#endif /* __S6J3200_SHE_H */
