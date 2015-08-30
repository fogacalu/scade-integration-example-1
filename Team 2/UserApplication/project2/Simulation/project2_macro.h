#ifndef _PROJECT2_MACRO_H_
#define _PROJECT2_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file project2_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "project2.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_project2 SAO_CTX_inC_project2;
    outC_project2 SAO_CTX_outC_project2;
} WU_project2;
#define WU_CTX_TYPE_project2 WU_project2
#define WU_CTX_TYPE_project2_SIZE sizeof(WU_project2)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_project2() 

#define DECLARE_EXT_SENSORS_project2(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_project2_SignalFromTeam1(context) context.SAO_CTX_inC_project2.SignalFromTeam1  /* project2/SignalFromTeam1 */
#define VAR_project2_SignalFromTeam1 VARC_project2_SignalFromTeam1(CTX_project2)

#define VARC_project2_SignalFromButton(context) context.SAO_CTX_inC_project2.SignalFromButton  /* project2/SignalFromButton */
#define VAR_project2_SignalFromButton VARC_project2_SignalFromButton(CTX_project2)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_project2_ReqLayerVisible(context) context.SAO_CTX_outC_project2.ReqLayerVisible  /* project2/ReqLayerVisible */
#define VAR_project2_ReqLayerVisible VARC_project2_ReqLayerVisible(CTX_project2)

#define VARC_project2_ReqLayerActive(context) context.SAO_CTX_outC_project2.ReqLayerActive  /* project2/ReqLayerActive */
#define VAR_project2_ReqLayerActive VARC_project2_ReqLayerActive(CTX_project2)

#define VARC_project2_SignalToTeam1(context) context.SAO_CTX_outC_project2.SignalToTeam1  /* project2/SignalToTeam1 */
#define VAR_project2_SignalToTeam1 VARC_project2_SignalToTeam1(CTX_project2)

#define VARC_project2_SignalToLED(context) context.SAO_CTX_outC_project2.SignalToLED  /* project2/SignalToLED */
#define VAR_project2_SignalToLED VARC_project2_SignalToLED(CTX_project2)

#define VARC_project2_EmitToCDS(context) context.SAO_CTX_outC_project2.EmitToCDS  /* project2/EmitToCDS */
#define VAR_project2_EmitToCDS VARC_project2_EmitToCDS(CTX_project2)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_SignalFromTeam1 kcg_bool
#define CPY_SignalFromTeam1(DST, SRC) DST = SRC
#define T_SignalFromButton kcg_bool
#define CPY_SignalFromButton(DST, SRC) DST = SRC
#define T_ReqLayerVisible kcg_bool
#define CPY_ReqLayerVisible(DST, SRC) DST = SRC
#define T_ReqLayerActive kcg_bool
#define CPY_ReqLayerActive(DST, SRC) DST = SRC
#define T_SignalToTeam1 kcg_bool
#define CPY_SignalToTeam1(DST, SRC) DST = SRC
#define T_SignalToLED kcg_int
#define CPY_SignalToLED(DST, SRC) DST = SRC
#define T_EmitToCDS kcg_bool
#define CPY_EmitToCDS(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_project2(context)  WU_project2 context;

#define DECLARE_CTXT_project2() DECLAREC_CTXT_project2(CTX_project2)

#define DECLAREC_EXT_CTXT_project2(MODE , context) MODE WU_project2 context;

#define DECLARE_EXT_CTXT_project2(MODE) DECLAREC_EXT_CTXT_project2(MODE , CTX_project2)

#define INITC_project2(context) project2_reset(&context.SAO_CTX_outC_project2)
#define INIT_project2() INITC_project2(CTX_project2)

#define PERFORMC_project2(context) 	project2( \
		&context.SAO_CTX_inC_project2 /* input context */,\
		&context.SAO_CTX_outC_project2 /* output/memories context */\
	)

#define PERFORM_project2() PERFORMC_project2(CTX_project2)

/*$************** SCADE Macro wrapper *********************
** End of file project2_macro.h
***********************************************************$*/

#endif /* _PROJECT2_MACRO_H_ */
