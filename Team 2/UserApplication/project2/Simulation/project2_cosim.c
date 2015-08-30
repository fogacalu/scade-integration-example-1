
/* Code generated for Graphical Panels Co-simulation */

#include "project2_UA_1.h"
#include "project2_interface.h"



void AfterSimInit(void){
	A661SetServerPath("C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE A661/bin/A661Server.exe");
	#ifdef A661_LOGFILE
	A661SetLogFile(A661_LOGFILE);
	#endif
	A661ConnectServer("127.0.0.1", 1231, "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation/project2_UA_1.bin", "C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation/project2_UA_1_conf.xml" );
}


void BeforeSimStep(void){
	buffer_el msg[MAX_SIZE_INPUT_BUFFER];
	/* reveive from server */
	project2_UA_1_receive_clear(&inputs_ctx, NULL);
	if (A661Receive(msg, sizeof msg) == 0)
		project2_UA_1_receive(msg, sizeof msg, &inputs_ctx, NULL);
}


void AfterSimStep(void){
	buffer_el msg[MAX_SIZE_OUTPUT_BUFFER];
	int len;
	len = project2_UA_1_send(msg, &outputs_ctx, NULL);
	/* Send to server */
	A661Send(msg, len);
}


void RefreshSimValues(void){
	 if (GraphicalInputsConnected) {
		BeforeSimStep();
		UpdateSimulatorValues();
	}
}


void BeforeSimInit(void){
}


void ExtendedSimStop(void){
}


int ExtendedGetDumpSize(){
	return 0;
}


void ExtendedGatherDumpData(char * pData){
}


void ExtendedRestoreDumpData(const char * pData){
	AfterSimStep();
}


void UpdateValues(void){
}

