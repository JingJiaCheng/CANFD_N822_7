
include sbl_global.in

#----------------------------------------------------------------------------------------
#	Common settings for all configurations
#----------------------------------------------------------------------------------------
DEFINES		+=
INCLUDES	+=\
-I$(PROJDIR)/bootsrc/app_sbl/src 
CFLAGS	+= 

#----------------------------------------------------------------------------------------
#	Specific settings for DEBUG
#----------------------------------------------------------------------------------------
USE_FILES_LIST := 


#----------------------------------------------------------------------------------------
#	Component name and path to source files
#----------------------------------------------------------------------------------------
CMP_NAME	:= sbl
CMP_DIR		:= $(PROJDIR)/bootsrc/app_sbl/src

include rules.in

