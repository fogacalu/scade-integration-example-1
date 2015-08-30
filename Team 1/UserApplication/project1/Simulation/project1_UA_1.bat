@cd "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 1/UserApplication/project1/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/uaadaptor.exe"  -d "C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 1\DefinitionFile\project1.sgfx" -n "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 1/UserApplication/project1/Simulation" -k "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 1/UserApplication/project1/Simulation/kcg_trace.xml" -o "project1_UA_1" -node project1  "C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 1\UserApplication\project1\project1.sdy"
@IF ERRORLEVEL 1 GOTO failed
@move "project1_UA_1.log" "project1_UA_1_uaadaptor.log"
"C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE Display/../SCADE A661/bin/dfgen.exe" -n "C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml" -outdir "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 1/UserApplication/project1/Simulation" -o "project1_UA_1"  "C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 1\DefinitionFile\project1.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "project1_UA_1.log" "project1_UA_1_dfgen.log"
"C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE Display\bin\ScadeDisplayConsole.exe" batch generateA661ServerConf "C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 1\DefinitionFile\project1.sgfx" "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 1/UserApplication/project1/Simulation/project1_UA_1_conf.xml"
@exit 0
:failed
@exit 1
