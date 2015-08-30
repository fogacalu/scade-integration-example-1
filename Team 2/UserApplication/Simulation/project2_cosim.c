
/* Code generated for Graphical Panels Co-simulation */

#include "project2_interface.h"



void AfterSimInit(void){
}


void BeforeSimStep(void){
}


void AfterSimStep(void){
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

