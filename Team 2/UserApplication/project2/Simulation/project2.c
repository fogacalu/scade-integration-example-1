/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T16:21:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "project2.h"

void project2_reset(outC_project2 *outC)
{
  outC->init = kcg_true;
}

/* project2 */
void project2(inC_project2 *inC, outC_project2 *outC)
{
  outC->_L9 = kcg_true;
  outC->EmitToCDS = outC->_L9;
  if (outC->init) {
    outC->_L1_1 = kcg_false;
  }
  else {
    outC->_L1_1 = outC->_L3_1;
  }
  outC->_L4 = inC->SignalFromTeam1;
  outC->Input_1 = outC->_L4;
  outC->_L2_1 = outC->Input_1;
  outC->_L4_1 = !outC->_L1_1;
  if (outC->_L2_1) {
    outC->_L3_1 = outC->_L4_1;
  }
  else {
    outC->_L3_1 = outC->_L1_1;
  }
  outC->Output_1 = outC->_L3_1;
  outC->_L5 = outC->Output_1;
  outC->_L7 = GREEN;
  outC->_L8 = RED;
  if (outC->_L5) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  outC->SignalToLED = outC->_L6;
  outC->_L3 = inC->SignalFromButton;
  outC->SignalToTeam1 = outC->_L3;
  if (outC->init) {
    outC->_L2 = kcg_true;
  }
  else {
    outC->_L2 = outC->_L1;
  }
  outC->ReqLayerActive = outC->_L2;
  outC->ReqLayerVisible = outC->_L2;
  outC->_L1 = kcg_false;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** project2.c
** Generation date: 2015-08-30T16:21:39
*************************************************************$ */

