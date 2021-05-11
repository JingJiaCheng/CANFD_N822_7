
include pbl_global.in

#----------------------------------------------------------------------------------------
#	Common settings for all configurations
#----------------------------------------------------------------------------------------
DEFINES		+= -DEMBEDDED=arm
INCLUDES	+= \
-I$(TOOLCHAIN_LOC)/src/libsys

#CFLAGS  += -argcheck=none -globalreg=99 -gtws -ansi --incorrect_pragma_warnings --unknown_pragma_warnings --prototype_warnings --diag_error 236 --no_coverage_analysis -check=nomemory

#----------------------------------------------------------------------------------------
#	Specific settings for DEBUG
#----------------------------------------------------------------------------------------
USE_FILES_LIST := Brd-Mem-Init.arm

#----------------------------------------------------------------------------------------
#	Component name and path to source files
#----------------------------------------------------------------------------------------
CMP_NAME	:= BrdMemInit
CMP_DIR		:= $(PRJDIR_Build)/tgt

include rules.in

