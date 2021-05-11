CALL ..\..\..\di.module.fbl\main\tool\bin\srec_cat.exe .\s6j3200\rel\PROGRAM.S19 -offset - -minimum-addr .\s6j3200\rel\PROGRAM.S19 -o .\s6j3200\rel\PROGRAM.BIN -binary
CALL ..\..\..\di.module.fbl\main\tool\bin\heatshrink.exe -v -e -w 8 -l 4 .\s6j3200\rel\PROGRAM.BIN .\s6j3200\rel\PROGRAM.COMP
CALL ..\..\..\di.module.fbl\main\tool\bin\srec_cat.exe .\s6j3200\rel\PROGRAM.COMP -binary -offset 0x48000000 -o .\s6j3200\rel\PROGRAM_COMP.S19
REM DEL /Q .\s6j3200\rel\PROGRAM.BIN
REM DEL /Q .\s6j3200\rel\PROGRAM.COMP
