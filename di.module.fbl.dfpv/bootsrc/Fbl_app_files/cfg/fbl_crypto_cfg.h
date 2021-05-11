/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2016. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/

/*****************************************************************************

File Name        :  fbl_crypto_cfg.h
Module Short Name:  vehiclecomm.core.fbl.crypto
VOBName          :  vehiclecomm.core.fbl.crypto\cfg\fbl_crypto_cfg.h
Author           :  kshanmu4
Description      :  FBL Crypto Module Configuration File
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_CRYPTO_CFG_H
#define FBL_CRYPTO_CFG_H

/* Select library. Available libraries: TOMCRYPT */
#define CRYPTOLIB  	TOMCRYPT

/* Select Ciphers */
#define CIPHER_AES

/* Select MAC */
#define MAC_OMAC

/* Select MODES */
#define MODE_CBC

/* Select CRC */
#define CRC32
#define CRC64
#endif /* FBL_CRYPTO_CFG_H */
