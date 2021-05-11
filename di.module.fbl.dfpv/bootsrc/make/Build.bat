@echo off

REM del ..\obj\*.o
REM del ..\obj\*.a
REM del ..\obj\*.dba
REM del ..\obj\pbl\*.o
REM del ..\obj\pbl\*.d
REM del ..\obj\pbl\*.dbo
REM del ..\obj\LibStartUp\*.o
REM del ..\obj\LibStartUp\*.d
REM del ..\obj\LibStartUp\*.dbo
REM del ..\obj\BrdMemInit\*.o
REM del ..\obj\BrdMemInit\*.d
REM del ..\obj\BrdMemInit\*.dbo
rem -----------------------------------------------
rem Prepare environment
rem -----------------------------------------------

set MINGW_PATH=C:\mingw
set TOOLCHAIN_LOC=C:\GHS\comp_201416
Set PATH=c:\MinGW\msys\1.0\bin;%PATH%

set SORT_TOOL=%MINGW_PATH%\msys\1.0\bin\sort.exe
set "SORT_TOOL=%SORT_TOOL:\=/%"
rem echo sort tool is at: %SORT_TOOL%

set FIND_TOOL=%MINGW_PATH%\msys\1.0\bin\find.exe
set "FIND_TOOL=%FIND_TOOL:\=/%"
rem echo FIND_TOOL is at: %FIND_TOOL%

set "MINGW_PATH=%MINGW_PATH:\=/%"
rem echo mingw_path is %MINGW_PATH%
rem -----------------------------------------------
rem Options
rem -----------------------------------------------
    
rem Available make targets: all rebuild clean
rem Default make target is: all
rem Available configurations: Target_Debug Target_Release Simul


cd ..\app\src
REM ====== Delete all files before copying to SRC=======
del *.* /f /s /q
REM =================================== SERVICES ========================================================
xcopy ..\..\Fbl_app_files\cfg\*.*    /R /K /Y /Q
xcopy ..\..\Fbl_app_files\src\*.*    /R /K /Y /Q

xcopy ..\..\..\..\di.module.fbl\compress\algorithms\heatshrink\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl\compress\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl\diag\tp\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl\diag\uds\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl\drivers\hyperflash\src\hf.c    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl\drivers\hyperflash\src\hf.h    /R /K /Y /Q  
xcopy ..\..\..\..\di.module.fbl\main\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl\crypto\src\fbl_crc.h      /R /K /Y /Q

xcopy ..\..\..\..\di-module-fbl-dfpv\di.module.fbl.dfpv\security\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di-module-fbl-dfpv\di.module.fbl.dfpv\uds\src\*.*    /R /K /Y /Q  
    
xcopy ..\..\..\..\di.module.fbl.traveo\drivers\can\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl.traveo\drivers\flashdrv\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl.traveo\drivers\hf\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl.traveo\drivers\timer\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl.traveo\drivers\wdt\src\*.*    /R /K /Y /Q
xcopy ..\..\..\..\di.module.fbl.traveo\startup\src\*.*    /R /K /Y /Q 

  

echo Done_Copying
del fbl_pbl_reflash.c
cd ..\..\make

echo Done_Make

echo Building... 

set START_TIME=%time% 

rem make -s -C .\ -f MkTARGET cfg=Target_Debug all > ../out/build.log 2>&1
make -s -C .\ -f pbl_MkTARGET cfg=Target_Debug clean all 2>&1

Echo ==^< Prepare SREC files ^>==
Call ..\util\SrecConverter.bat
Echo.

echo Start time: %START_TIME%
echo End   time: %time%

