
#ifndef ICU_IRQ_H
#define ICU_IRQ_H

/** \file
 ** \brief AUTOSAR Icu ICU Driver
 **
 ** This file contains the all configuration declarations for
 ** the AUTOSAR module Icu that are target independent.
 **
 ** Do not edit this file manually.
 ** Any change might compromise the safety integrity level of
 ** the software partition it is contained in.
 **
 ** Product: SW-MCAL40-DRV
 **
 ** (c) 2014-2017, Cypress Semiconductor Corporation. All rights reserved.
 **
 ** Warranty and Disclaimer
 **
 ** This software product is property of Cypress Semiconductor Corporation or
 ** its subsidiaries.
 ** Any use and/or distribution rights for this software product are provided
 ** only under the Cypress Software License Agreement.
 ** Any use and/or distribution of this software product not in accordance with
 ** the terms of the Cypress Software License Agreement are unauthorized and
 ** shall constitute an infringement of Cypress intellectual property rights.
*/

/*==================[includes]==============================================*/
#include <Os.h>

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/
#define ICU_START_SEC_CODE
#include <MemMap.h>

extern ISR_NATIVE( ICU_ISR_Vector_24_CAT1 );
extern ISR( ICU_ISR_Vector_24_CAT2 );

extern ISR_NATIVE( ICU_ISR_Vector_29_CAT1 );
extern ISR( ICU_ISR_Vector_29_CAT2 );

extern ISR_NATIVE( ICU_ISR_Vector_32_CAT1 );
extern ISR( ICU_ISR_Vector_32_CAT2 );


#define ICU_STOP_SEC_CODE
#include <MemMap.h>
/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef ICU_IRQ_H */
/*==================[end of file]===========================================*/
