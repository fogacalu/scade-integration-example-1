/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T17:08:26
*************************************************************$ */
#ifndef _project2_H_
#define _project2_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* project2::SignalFromTeam1 */ SignalFromTeam1;
  kcg_bool /* project2::SignalFromButton */ SignalFromButton;
} inC_project2;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* project2::ReqLayerVisible */ ReqLayerVisible;
  kcg_bool /* project2::ReqLayerActive */ ReqLayerActive;
  kcg_bool /* project2::SignalToTeam1 */ SignalToTeam1;
  kcg_int /* project2::SignalToLED */ SignalToLED;
  kcg_bool /* project2::EmitToCDS */ EmitToCDS;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Toggle::_L3 */ _L3_1;
  kcg_bool /* project2::_L1 */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Toggle::_L1 */ _L1_1;
  kcg_bool /* Toggle::_L2 */ _L2_1;
  kcg_bool /* Toggle::_L4 */ _L4_1;
  kcg_bool /* Toggle::Output */ Output_1;
  kcg_bool /* Toggle::Input */ Input_1;
  kcg_bool /* project2::_L2 */ _L2;
  kcg_bool /* project2::_L3 */ _L3;
  kcg_bool /* project2::_L4 */ _L4;
  kcg_bool /* project2::_L5 */ _L5;
  kcg_int /* project2::_L6 */ _L6;
  kcg_int /* project2::_L7 */ _L7;
  kcg_int /* project2::_L8 */ _L8;
  kcg_bool /* project2::_L9 */ _L9;
} outC_project2;

/* ===========  node initialization and cycle functions  =========== */
/* project2 */
extern void project2(inC_project2 *inC, outC_project2 *outC);

extern void project2_reset(outC_project2 *outC);

#endif /* _project2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** project2.h
** Generation date: 2015-08-30T17:08:26
*************************************************************$ */

