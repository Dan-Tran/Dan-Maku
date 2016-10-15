@echo off
@echo Building project using Microsoft Visual C++.net 2010 Express
@echo Please wait ...

@SET COMPILERPATH=C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\bin
@SET LINKERPATH=C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\bin

@SET ADD_HEADERS1=C:\Program Files (x86)\Microsoft SDKs\Windows\v7.0A\Include

@SET ADD_LIBS1=C:\Program Files (x86)\Microsoft SDKs\Windows\v7.0A\Lib

@SET MAINDIR=C:\Program Files (x86)\Microsoft Visual Studio 10.0
@SET VSINSTALLDIR=%MAINDIR%\Common7\IDE
@set MSVCDir=%MAINDIR%\VC

@set PATH=%VSINSTALLDIR%;%COMPILERPATH%;%LINKERPATH%;%PATH%;
@set INCLUDE=%MSVCDir%\INCLUDE;%ADD_HEADERS1%;%ADD_HEADERS2%;%INCLUDE%
@set LIB=%MSVCDir%\LIB;%ADD_LIBS1%;%ADD_LIBS2%;%LIB%

C:
cd "C:\Users\Dan\Documents\DanT\Tran Dan Maku Final Project\Tran_Dan_Maku\Generated Code"
NMAKE /f "Tran_Dan_Maku.mak" CFG="Tran_Dan_Maku - Win32 Release" /x "Result.txt" /NOLOGO >> ErrorLog.txt
