# Microsoft Developer Studio Generated NMAKE File, Based on Tran_Dan_Maku.dsp
!IF "$(CFG)" == ""
CFG=Tran_Dan_Maku - Win32 Release
!MESSAGE No configuration specified. Defaulting to Tran_Dan_Maku - Win32 Release.
!ENDIF
!IF "$(CFG)" != "Tran_Dan_Maku - Win32 Release"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE
!MESSAGE NMAKE /f "Tran_Dan_Maku.mak" CFG="Tran_Dan_Maku - Win32 Release"
!MESSAGE
!MESSAGE Possible choices for configuration are:
!MESSAGE
!MESSAGE "Tran_Dan_Maku - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE
!ERROR An invalid configuration is specified.
!ENDIF

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF

!IF  "$(CFG)" == "Tran_Dan_Maku - Win32 Release"

OUTDIR=..
INTDIR=.\Release
# Begin Custom Macros
OutDir=.
# End Custom Macros

ALL : "$(OUTDIR)\Tran_Dan_Maku.exe"


"$(INTDIR)" :
	if not exist "$(INTDIR)/$(NULL)" mkdir "$(INTDIR)"
CPP=cl.exe
CPP_PROJ=/nologo /MT /W3 /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\ProjectFun" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\GUI" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Lua-5.1.2" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Engine" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Core" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Math" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Renderer" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\File3D" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\PAL" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Input" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\2DCollision" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\2DPhysics" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\OpenAL\Include" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\Sound Formats\Wave\Include" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\Sound Formats\Ogg\Include" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Network" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Pthread" /D "WIN32" /nologo /MT /W3 /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /FD /EHsc /GS /GR /Fo"Release/" /Fd"Release/vc70.pdb" /c /Wp64 /TP /O2 /Zc:forScope /Yc"Tran_Dan_Maku_MainDeclarations.h" "Tran_Dan_Maku_MainDeclarations.cpp" /Yu"Tran_Dan_Maku_MainDeclarations.h" /Fp"Tran_Dan_Maku_MainDeclarations.pch"

.c{$(INTDIR)}.obj::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

RSC="c:\program files (x86)\microsoft sdks\windows\v7.0a\bin\rc.exe"
RSC_PROJ=/l 0x409 /fo"$(INTDIR)\Tran_Dan_Maku.res" 


LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib opengl32.lib shell32.lib glu32.lib winmm.lib Ws2_32.lib pthreadVC2_2010.lib OpenAL32.lib Vorbis.lib VorbisFile.lib VorbisEncoder.lib Ogg.lib PF.ProjectFun.lib PF.Core.lib PF.Engine.lib PF.PAL.lib PF.Main.lib PF.Renderer.lib PF.Math.lib PF.File3D.lib PF.Input.lib PF.2DCollision.lib PF.2DPhysics.lib PF.Sound.lib PF.Network.lib PF.GUI.lib PF.Lua.lib gdiplus.lib kernel32.lib /out:"$(OUTDIR)\Tran_Dan_Maku.exe" /incremental:no /nologo /subsystem:windows /OPT:REF /OPT:ICF /machine:X86 /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\2DCollision" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\2DPhysics" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Core" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Engine" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\File3D" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Input" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Main" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Math" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Network" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\PAL" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Pthread" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Renderer" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\OpenAL\Lib" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\Sound Formats\Ogg\Lib" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\ProjectFun" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\GUI" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.1.83\ProjectFUNEngine\ProjectFUNEngine2010Express\Lua-5.1.2"
LINK32_OBJS= \
	"$(INTDIR)\Tran_Dan_Maku_BossClass.obj" \
	"$(INTDIR)\Tran_Dan_Maku_Cutscene.obj" \
	"$(INTDIR)\Tran_Dan_Maku_EnemyBullet.obj" \
	"$(INTDIR)\Tran_Dan_Maku_EnemyClass.obj" \
	"$(INTDIR)\Tran_Dan_Maku_EnemyClass_drv_0.obj" \
	"$(INTDIR)\Tran_Dan_Maku_EnemyClass_drv_1.obj" \
	"$(INTDIR)\Tran_Dan_Maku_ExitClass.obj" \
	"$(INTDIR)\Tran_Dan_Maku_Instruction1.obj" \
	"$(INTDIR)\Tran_Dan_Maku_Level1.obj" \
	"$(INTDIR)\Tran_Dan_Maku_LoserLevel.obj" \
	"$(INTDIR)\Tran_Dan_Maku_MainDeclarations.obj" \
	"$(INTDIR)\Tran_Dan_Maku_MenuClass.obj" \
	"$(INTDIR)\Tran_Dan_Maku_MyGame.obj" \
	"$(INTDIR)\Tran_Dan_Maku_MyLevelFactory.obj" \
	"$(INTDIR)\Tran_Dan_Maku_PlayerBullet.obj" \
	"$(INTDIR)\Tran_Dan_Maku_PlayerClass.obj" \
	"$(INTDIR)\Tran_Dan_Maku_PowerClass.obj" \
	"$(INTDIR)\Tran_Dan_Maku_ScrollingBackground.obj" \
	"$(INTDIR)\Tran_Dan_Maku_SpellCall1.obj" \
	"$(INTDIR)\Tran_Dan_Maku_SpellClass1.obj" \
	"$(INTDIR)\Tran_Dan_Maku_SpellClass2.obj" \
	"$(INTDIR)\Tran_Dan_Maku_SpellClass3.obj" \
	"$(INTDIR)\Tran_Dan_Maku_SpellClass4.obj" \
	"$(INTDIR)\Tran_Dan_Maku_StartClass.obj" \
	"$(INTDIR)\Tran_Dan_Maku_WinLevel.obj" \
	"$(INTDIR)\Tran_Dan_Maku.res"


"$(OUTDIR)\Tran_Dan_Maku.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
$(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 



!IF "$(CFG)" == "Tran_Dan_Maku - Win32 Release"

SOURCE=.\Tran_Dan_Maku.rc
"$(INTDIR)\Tran_Dan_Maku.res" : $(SOURCE) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)

SOURCE=.\Tran_Dan_Maku_BossClass.cpp

"$(INTDIR)\Tran_Dan_Maku_BossClass.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_Cutscene.cpp

"$(INTDIR)\Tran_Dan_Maku_Cutscene.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_EnemyBullet.cpp

"$(INTDIR)\Tran_Dan_Maku_EnemyBullet.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_EnemyClass.cpp

"$(INTDIR)\Tran_Dan_Maku_EnemyClass.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_EnemyClass_drv_0.cpp

"$(INTDIR)\Tran_Dan_Maku_EnemyClass_drv_0.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_EnemyClass_drv_1.cpp

"$(INTDIR)\Tran_Dan_Maku_EnemyClass_drv_1.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_ExitClass.cpp

"$(INTDIR)\Tran_Dan_Maku_ExitClass.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_Instruction1.cpp

"$(INTDIR)\Tran_Dan_Maku_Instruction1.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_Level1.cpp

"$(INTDIR)\Tran_Dan_Maku_Level1.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_LoserLevel.cpp

"$(INTDIR)\Tran_Dan_Maku_LoserLevel.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_MainDeclarations.cpp

"$(INTDIR)\Tran_Dan_Maku_MainDeclarations.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_MenuClass.cpp

"$(INTDIR)\Tran_Dan_Maku_MenuClass.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_MyGame.cpp

"$(INTDIR)\Tran_Dan_Maku_MyGame.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_MyLevelFactory.cpp

"$(INTDIR)\Tran_Dan_Maku_MyLevelFactory.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_PlayerBullet.cpp

"$(INTDIR)\Tran_Dan_Maku_PlayerBullet.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_PlayerClass.cpp

"$(INTDIR)\Tran_Dan_Maku_PlayerClass.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_PowerClass.cpp

"$(INTDIR)\Tran_Dan_Maku_PowerClass.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_ScrollingBackground.cpp

"$(INTDIR)\Tran_Dan_Maku_ScrollingBackground.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_SpellCall1.cpp

"$(INTDIR)\Tran_Dan_Maku_SpellCall1.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_SpellClass1.cpp

"$(INTDIR)\Tran_Dan_Maku_SpellClass1.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_SpellClass2.cpp

"$(INTDIR)\Tran_Dan_Maku_SpellClass2.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_SpellClass3.cpp

"$(INTDIR)\Tran_Dan_Maku_SpellClass3.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_SpellClass4.cpp

"$(INTDIR)\Tran_Dan_Maku_SpellClass4.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_StartClass.cpp

"$(INTDIR)\Tran_Dan_Maku_StartClass.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\Tran_Dan_Maku_WinLevel.cpp

"$(INTDIR)\Tran_Dan_Maku_WinLevel.obj" : $(SOURCE) "$(INTDIR)"




!ENDIF
