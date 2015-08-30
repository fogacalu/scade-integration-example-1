#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\.

SHELL=cmd.exe

C_FLAGS = -O2 -pedantic

all: project1.exe project1.dll 

win32/project1.o: project1.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project1.c" -o "win32\project1.o"	
	ar -r project1.a "win32\project1.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"	
	ar -r project1.a "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"	
	ar -r project1.a "win32\kcg_consts.o"

win32/project1_UA_1.o: project1_UA_1.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project1_UA_1.c" -o "win32\project1_UA_1.o"

win32/A661Cosim.o: ../../../../../../../../../../../Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/A661Cosim.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\A661Cosim.c" -o "win32\A661Cosim.o"

win32/project1_cosim.o: project1_cosim.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project1_cosim.c" -o "win32\project1_cosim.o"

win32/project1_type.o: project1_type.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project1_type.c" -o "win32\project1_type.o"

win32/project1_mapping.o: project1_mapping.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project1_mapping.c" -o "win32\project1_mapping.o"

win32/project1_interface.o: project1_interface.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project1_interface.c" -o "win32\project1_interface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

project1.dll: win32/project1.o win32/kcg_types.o win32/kcg_consts.o win32/project1_UA_1.o win32/A661Cosim.o win32/project1_cosim.o win32/project1_type.o win32/project1_mapping.o win32/project1_interface.o win32/SmuProxy.o SmuExport.def 
	dllwrap --driver-name=gcc  "win32\project1_UA_1.o" "win32\A661Cosim.o" "win32\project1_cosim.o" "win32\project1_type.o" "win32\project1_mapping.o" "win32\project1_interface.o" "win32\SmuProxy.o" "project1.a" --def "SmuExport.def" -lm -lwsock32 --dllname "project1.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/project1_dll.o: project1_dll.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project1_dll.c" -o "win32\project1_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

project1.exe: win32/project1_dll.o win32/SmuMainWindows.o 
	gcc "win32\project1_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "project1.exe" 

project1_cosim.c: project1_UA_1.h


#############################################################
######    End of Makefile
#############################################################
