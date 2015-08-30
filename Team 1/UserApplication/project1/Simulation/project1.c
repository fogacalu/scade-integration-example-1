/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 1/UserApplication/project1/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-29T20:22:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "project1.h"

void project1_reset(outC_project1 *outC)
{
  outC->init = kcg_true;
}

/* project1 */
void project1(inC_project1 *inC, outC_project1 *outC)
{
  outC->_L9 = kcg_true;
  outC->EmitToCDS = outC->_L9;
  if (outC->init) {
    outC->_L1_1 = kcg_false;
  }
  else {
    outC->_L1_1 = outC->_L4_1;
  }
  outC->_L4 = inC->SignalFromTeam2;
  outC->Input_1 = outC->_L4;
  outC->_L3_1 = outC->Input_1;
  outC->_L5_1 = !outC->_L1_1;
  if (outC->_L3_1) {
    outC->_L4_1 = outC->_L5_1;
  }
  else {
    outC->_L4_1 = outC->_L1_1;
  }
  outC->Output_1 = outC->_L4_1;
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
  outC->SignalToTeam2 = outC->_L3;
  if (outC->init) {
    outC->_L1 = kcg_true;
  }
  else {
    outC->_L1 = outC->_L2;
  }
  outC->ReqLayerActive = outC->_L1;
  outC->ReqLayerVisible = outC->_L1;
  outC->_L2 = kcg_false;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** project1.c
** Generation date: 2015-08-29T20:22:02
*************************************************************$ */

