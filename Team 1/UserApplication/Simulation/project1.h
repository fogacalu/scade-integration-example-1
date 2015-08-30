/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 1/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T19:49:44
*************************************************************$ */
#ifndef _project1_H_
#define _project1_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* project1::SignalFromButton */ SignalFromButton;
  kcg_bool /* project1::SignalFromTeam2 */ SignalFromTeam2;
} inC_project1;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* project1::ReqLayerVisible */ ReqLayerVisible;
  kcg_bool /* project1::ReqLayerActive */ ReqLayerActive;
  kcg_bool /* project1::SignalToTeam2 */ SignalToTeam2;
  kcg_int /* project1::SignalToLED */ SignalToLED;
  kcg_bool /* project1::EmitToCDS */ EmitToCDS;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Toggle::_L4 */ _L4_1;
  kcg_bool /* project1::_L2 */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Toggle::_L1 */ _L1_1;
  kcg_bool /* Toggle::_L3 */ _L3_1;
  kcg_bool /* Toggle::_L5 */ _L5_1;
  kcg_bool /* Toggle::Output */ Output_1;
  kcg_bool /* Toggle::Input */ Input_1;
  kcg_bool /* project1::_L1 */ _L1;
  kcg_bool /* project1::_L3 */ _L3;
  kcg_bool /* project1::_L4 */ _L4;
  kcg_bool /* project1::_L5 */ _L5;
  kcg_int /* project1::_L6 */ _L6;
  kcg_int /* project1::_L7 */ _L7;
  kcg_int /* project1::_L8 */ _L8;
  kcg_bool /* project1::_L9 */ _L9;
} outC_project1;

/* ===========  node initialization and cycle functions  =========== */
/* project1 */
extern void project1(inC_project1 *inC, outC_project1 *outC);

extern void project1_reset(outC_project1 *outC);

#endif /* _project1_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** project1.h
** Generation date: 2015-08-30T19:49:44
*************************************************************$ */

