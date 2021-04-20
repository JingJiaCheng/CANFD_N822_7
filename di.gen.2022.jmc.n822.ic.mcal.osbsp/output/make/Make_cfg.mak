#################################################################
##
## AUTOSAR Make
##
## This makefile export paramters derived from the project
## data to make variables
##
## Do not edit this file manually.
## Any change might compromise the safety integrity level of
## the software partition it is contained in.
##
## Product: SW-MCAL40-DRV
##
## (c) 2014-2017, Cypress Semiconductor Corporation. All rights reserved.
##
## Warranty and Disclaimer
##
## This software product is property of Cypress Semiconductor Corporation or
## its subsidiaries.
## Any use and/or distribution rights for this software product are provided
## only under the Cypress Software License Agreement.
## Any use and/or distribution of this software product not in accordance with
## the terms of the Cypress Software License Agreement are unauthorized and
## shall constitute an infringement of Cypress intellectual property rights.
##
#################################################################


# project name in workspace
TRESOS2_PROJECT_NAME  := JMC_2022_N822_2ch

TRESOS2_ECU_ID        := Demo

# list of all enabled modules (including modules, that are NOT
# generated)
PROJECT_MODULES       =  Make Base Resource Port Wdg Spi EcuM Pwm Dio Can Icu Adc Fls Gpt Os Mcu

# add tresos2 make plugin
SOFTWARE_MODULES = tresos2

# add Base if selected by the project
ifeq ($(findstring Base,$(PROJECT_MODULES)),Base)
SOFTWARE_MODULES += Base
endif

# add Make if selected by the project
ifeq ($(findstring Make,$(PROJECT_MODULES)),Make)
SOFTWARE_MODULES += Make
endif

# add all standard modules, excluding Base/Make/Os which have to be added
# in a specific order
SOFTWARE_MODULES += $(sort $(filter-out Base Make Os, $(PROJECT_MODULES)))

# add Os if selected by the project
ifeq ($(findstring Os,$(PROJECT_MODULES)),Os)
SOFTWARE_MODULES += Os
endif

# variables defining module versions

Make_VARIANT         := TS_T32D3M1I0R0

Base_VARIANT         := TS_T32D3M1I0R0

Resource_VARIANT         := TS_T32D3M1I0R0

Port_VARIANT         := TS_T32D3M1I0R0

Wdg_VARIANT         := TS_T32D3M1I0R0

Spi_VARIANT         := TS_T32D3M1I1R0

EcuM_VARIANT         := TS_T0D1M4I3R0

Pwm_VARIANT         := TS_T32D3M1I0R0

Dio_VARIANT         := TS_T32D3M1I0R0

Can_VARIANT         := TS_T32D3M1I1R0

Icu_VARIANT         := TS_T32D3M1I0R0

Adc_VARIANT         := TS_T32D3M1I1R0

Fls_VARIANT         := TS_T32D3M1I0R0

Gpt_VARIANT         := TS_T32D3M1I0R0

Os_VARIANT         := TS_T0D1M4I3R0

Mcu_VARIANT         := TS_T32D3M1I0R0


# target and derivate
TARGET                 := S6J3
DERIVATE               := S6J320C
SUBDERIVATE            := S6J328CL

