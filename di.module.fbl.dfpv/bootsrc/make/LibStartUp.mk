
include pbl_global.in

#----------------------------------------------------------------------------------------
#	Common settings for all configurations
#----------------------------------------------------------------------------------------
DEFINES		+= -DEMBEDDED=arm
INCLUDES	+= \
-I$(TOOLCHAIN_LOC)/src/libsys

CFLAGS  += -argcheck=none -globalreg=99 -gtws -ansi --incorrect_pragma_warnings --unknown_pragma_warnings --prototype_warnings --diag_error 236 --no_coverage_analysis -check=nomemory

#----------------------------------------------------------------------------------------
#	Specific settings for DEBUG
#----------------------------------------------------------------------------------------
USE_FILES_LIST := crt0.arm ind_mcpy.arm ind_mset.arm ind_reset.arm ind_crt0.c ind_uzip.c ind_initmem.c

#----------------------------------------------------------------------------------------
#	Component name and path to source files
#----------------------------------------------------------------------------------------
CMP_NAME	:= LibStartUp
CMP_DIR		:= $(PROJDIR)/bootsrc/libstartup

include rules.in

