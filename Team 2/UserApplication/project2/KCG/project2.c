/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-30T16:23:10
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
  /* Toggle::_L1 */ kcg_bool _L1_1;
  /* Toggle::_L2 */ kcg_bool _L2_1;
  /* Toggle::_L4 */ kcg_bool _L4_1;
  /* Toggle::Output */ kcg_bool Output_1;
  /* Toggle::Input */ kcg_bool Input_1;
  /* project2::_L2 */ kcg_bool _L2;
  /* project2::_L3 */ kcg_bool _L3;
  /* project2::_L4 */ kcg_bool _L4;
  /* project2::_L5 */ kcg_bool _L5;
  /* project2::_L6 */ kcg_int _L6;
  /* project2::_L7 */ kcg_int _L7;
  /* project2::_L8 */ kcg_int _L8;
  /* project2::_L9 */ kcg_bool _L9;
  
  _L9 = kcg_true;
  outC->EmitToCDS = _L9;
  if (outC->init) {
    _L1_1 = kcg_false;
  }
  else {
    _L1_1 = outC->_L3_1;
  }
  _L4 = inC->SignalFromTeam1;
  Input_1 = _L4;
  _L2_1 = Input_1;
  _L4_1 = !_L1_1;
  if (_L2_1) {
    outC->_L3_1 = _L4_1;
  }
  else {
    outC->_L3_1 = _L1_1;
  }
  Output_1 = outC->_L3_1;
  _L5 = Output_1;
  _L7 = GREEN;
  _L8 = RED;
  if (_L5) {
    _L6 = _L7;
  }
  else {
    _L6 = _L8;
  }
  outC->SignalToLED = _L6;
  _L3 = inC->SignalFromButton;
  outC->SignalToTeam1 = _L3;
  if (outC->init) {
    _L2 = kcg_true;
  }
  else {
    _L2 = outC->_L1;
  }
  outC->ReqLayerActive = _L2;
  outC->ReqLayerVisible = _L2;
  outC->_L1 = kcg_false;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** project2.c
** Generation date: 2015-08-30T16:23:10
*************************************************************$ */

