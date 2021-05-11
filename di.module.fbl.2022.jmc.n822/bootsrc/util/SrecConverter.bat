@echo off

set TOOLCHAIN_LOC=C:\GHS\comp_201416

set AXI1_PBL_FLASH_START_ADDR=0x019F0000
set AXI1_PBL_FLASH_END_ADDR=0x019F0FFF

set TCM2_PBL_FLASH_START_ADDR=0x009F1000
set TCM2_PBL_FLASH_END_ADDR=0x009F9000

set TCM3_PBL_FLASH_START_ADDR=0x019F9000
set TCM3_PBL_FLASH_END_ADDR=0x019FFFFF

::set SBL_RAM_START_ADDR=0x00005000
::set SBL_RAM_END_ADDR=0x00005FFF
::set APP_FLASH_START_ADDR=0x00A00000
::set APP_FLASH_END_ADDR=0x00C00000

set PBL_INTPUT_FILE=..\out\pbl.elf
set PBL_OUTPUT_FILE=..\out\pbl.srec
::set APP_INTPUT_FILE=..\..\di.build.2018.hyundai.bdc.ic.osbsp\out\demo.elf
::set APP_OUTPUT_FILE_INT_FLASH=..\out\app_int.srec

%TOOLCHAIN_LOC%\GSREC.exe %PBL_INTPUT_FILE% -bytes 16 -warn_overlap -pad1 %AXI1_PBL_FLASH_START_ADDR% %AXI1_PBL_FLASH_END_ADDR% 0xFF -start %AXI1_PBL_FLASH_START_ADDR% -end %AXI1_PBL_FLASH_END_ADDR% -o ..\util\Axi1.srec
%TOOLCHAIN_LOC%\GSREC.exe %PBL_INTPUT_FILE% -bytes 16 -warn_overlap -pad1 %TCM2_PBL_FLASH_START_ADDR% %TCM2_PBL_FLASH_END_ADDR% 0xFF -start %TCM2_PBL_FLASH_START_ADDR% -end %TCM2_PBL_FLASH_END_ADDR% -o ..\util\Tcm2.srec
%TOOLCHAIN_LOC%\GSREC.exe %PBL_INTPUT_FILE% -bytes 16 -warn_overlap -start %TCM3_PBL_FLASH_START_ADDR% -end %TCM3_PBL_FLASH_END_ADDR% -o ..\util\Tcm3.srec

cd ..\util
echo %PBL_OUTPUT_FILE% 
srec_cat.exe Tcm2.srec -crop %TCM2_PBL_FLASH_START_ADDR% %TCM2_PBL_FLASH_END_ADDR% -offset 0x1000000 -o Axi2.srec
srec_cat.exe Axi1.srec Axi2.srec Tcm3.srec -o %PBL_OUTPUT_FILE% -line-length=46

::echo %APP_OUTPUT_FILE_INT_FLASH% 
::srec_cat.exe App_Tcm2.srec -crop %APP_FLASH_START_ADDR% %APP_FLASH_END_ADDR% -offset 0x1000000 -o %APP_OUTPUT_FILE_INT_FLASH% -line-length=46

del *.srec
echo Generation done!
cd ..\make
