@cd "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/uaadaptor.exe"  -d "C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 2\DefinitionFile\project2.sgfx" -n "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation" -k "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation/kcg_trace.xml" -o "project2_UA_2" -node project2  "C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 2\UserApplication\project2\project2.sdy"
@IF ERRORLEVEL 1 GOTO failed
@move "project2_UA_2.log" "project2_UA_2_uaadaptor.log"
"C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE Display/../SCADE A661/bin/dfgen.exe" -n "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation" -o "project2_UA_2"  "C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 2\DefinitionFile\project2.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "project2_UA_2.log" "project2_UA_2_dfgen.log"
"C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 2\DefinitionFile\project2.sgfx" "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation/project2_UA_2_conf.xml"
@exit 0
:failed
@exit 1
