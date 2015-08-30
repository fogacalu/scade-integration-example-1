/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-30T17:10:19
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
} outC_project2;

/* ===========  node initialization and cycle functions  =========== */
/* project2 */
extern void project2(inC_project2 *inC, outC_project2 *outC);

extern void project2_reset(outC_project2 *outC);

#endif /* _project2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** project2.h
** Generation date: 2015-08-30T17:10:19
*************************************************************$ */

