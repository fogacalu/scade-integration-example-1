/* project1_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "SmuMapping.h"
#include "project1_newtype.h"
#include "project1_newmapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_2, 5);
MAP_DECL(scope_1, 18);
MAP_DECL(scope_0, 1);

/* project1/ project1Toggle 1/ */
static const MappingEntry scope_2_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Output", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Output_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L3_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 3 */ { MAP_LOCAL, "_L4@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L5_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_2 = {
  "project1/ project1Toggle 1/",
  scope_2_entries, 5,
};

/* project1/ project1 */
static const MappingEntry scope_1_entries[18] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_OUTPUT, "EmitToCDS", NULL, sizeof(kcg_bool), (int)&outputs_ctx.EmitToCDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 2 */ { MAP_OUTPUT, "ReqLayerActive", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ReqLayerActive, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 3 */ { MAP_OUTPUT, "ReqLayerVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ReqLayerVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 4 */ { MAP_INPUT, "SignalFromButton", NULL, sizeof(kcg_bool), (int)&inputs_ctx.SignalFromButton, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 5 */ { MAP_INPUT, "SignalFromTeam2", NULL, sizeof(kcg_bool), (int)&inputs_ctx.SignalFromTeam2, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 6 */ { MAP_OUTPUT, "SignalToLED", NULL, sizeof(kcg_int), (int)&outputs_ctx.SignalToLED, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 7 */ { MAP_OUTPUT, "SignalToTeam2", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SignalToTeam2, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 8 */ { MAP_EXPANDED, "Toggle 1", NULL, 0, 0, NULL, NULL, NULL, &scope_2},
  /* 9 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 10 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (int)&outputs_ctx._L6, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_1 = {
  "project1/ project1",
  scope_1_entries, 18,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "project1", NULL, 0, 0, NULL, NULL, NULL, &scope_1}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

