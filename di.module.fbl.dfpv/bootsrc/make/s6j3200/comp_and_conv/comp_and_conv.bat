REM : This script does the following
REM        1. Srec to BIN conversion
REM        2. Compression of Encrypted file
REM        3. Generation of S19 format output with START_ADDR 

REM "Path variables setting"
REM =========================================
SET EXTN=PROGRAM_COMPRESS_ONLY
SET INPUT_FILE_PATH=.\s6j3200\rel\sample\1
SET OUTPUT_FILE_PATH=.\s6j3200\rel\sample\1
SET BIN_PATH=E:\Workspace\Bootloaders\J59\win_x86\bin
SET START_ADDR=0x48000000
REM "SREC to BIN Conversion"
REM =========================================
CALL "%BIN_PATH%\srec_cat.exe" "%INPUT_FILE_PATH%\PROGRAM.S19" -offset - -minimum-addr "%INPUT_FILE_PATH%\PROGRAM.S19" -o "%OUTPUT_FILE_PATH%\%EXTN%.BIN" -binary
REM "COMPRESSION STEP "
REM =========================================
CALL "%BIN_PATH%\heatshrink.exe" -v -e -w 8 -l 4 "%INPUT_FILE_PATH%\%EXTN%.BIN" "%OUTPUT_FILE_PATH%\%EXTN%.COMP"
REM "START Addr "
REM =========================================
CALL "%BIN_PATH%\srec_cat.exe" "%INPUT_FILE_PATH%\%EXTN%.COMP" -binary -offset "%START_ADDR%" -o "%OUTPUT_FILE_PATH%\%EXTN%_%START_ADDR%.S19"

CALL "%BIN_PATH%\srec_cat.exe" "%OUTPUT_FILE_PATH%\%EXTN%_%START_ADDR%.S19" -offset - -minimum-addr "%OUTPUT_FILE_PATH%\%EXTN%_%START_ADDR%.S19" -o "%OUTPUT_FILE_PATH%\%EXTN%_CAPL.BIN" -binary