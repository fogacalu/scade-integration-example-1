#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\.

SHELL=cmd.exe

C_FLAGS = -O2 -pedantic

all: project2.exe project2.dll 

win32/project2.o: project2.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project2.c" -o "win32\project2.o"	
	ar -r project2.a "win32\project2.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"	
	ar -r project2.a "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"	
	ar -r project2.a "win32\kcg_consts.o"

win32/project2_type.o: project2_type.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project2_type.c" -o "win32\project2_type.o"

win32/project2_mapping.o: project2_mapping.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project2_mapping.c" -o "win32\project2_mapping.o"

win32/project2_interface.o: project2_interface.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project2_interface.c" -o "win32\project2_interface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

project2.dll: win32/project2.o win32/kcg_types.o win32/kcg_consts.o win32/project2_type.o win32/project2_mapping.o win32/project2_interface.o win32/SmuProxy.o SmuExport.def 
	dllwrap --driver-name=gcc  "win32\project2_type.o" "win32\project2_mapping.o" "win32\project2_interface.o" "win32\SmuProxy.o" "project2.a" --def "SmuExport.def" -lm -lwsock32 --dllname "project2.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/project2_dll.o: project2_dll.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "project2_dll.c" -o "win32\project2_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/Esterel\ SCADE\ 6.4.2/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

project2.exe: win32/project2_dll.o win32/SmuMainWindows.o 
	gcc "win32\project2_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "project2.exe" 

#############################################################
######    End of Makefile
#############################################################
