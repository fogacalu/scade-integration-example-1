#ifndef _PROJECT1_MACRO_H_
#define _PROJECT1_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file project1_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "project1.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_project1 SAO_CTX_inC_project1;
    outC_project1 SAO_CTX_outC_project1;
} WU_project1;
#define WU_CTX_TYPE_project1 WU_project1
#define WU_CTX_TYPE_project1_SIZE sizeof(WU_project1)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_project1() 

#define DECLARE_EXT_SENSORS_project1(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_project1_SignalFromButton(context) context.SAO_CTX_inC_project1.SignalFromButton  /* project1/SignalFromButton */
#define VAR_project1_SignalFromButton VARC_project1_SignalFromButton(CTX_project1)

#define VARC_project1_SignalFromTeam2(context) context.SAO_CTX_inC_project1.SignalFromTeam2  /* project1/SignalFromTeam2 */
#define VAR_project1_SignalFromTeam2 VARC_project1_SignalFromTeam2(CTX_project1)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_project1_ReqLayerVisible(context) context.SAO_CTX_outC_project1.ReqLayerVisible  /* project1/ReqLayerVisible */
#define VAR_project1_ReqLayerVisible VARC_project1_ReqLayerVisible(CTX_project1)

#define VARC_project1_ReqLayerActive(context) context.SAO_CTX_outC_project1.ReqLayerActive  /* project1/ReqLayerActive */
#define VAR_project1_ReqLayerActive VARC_project1_ReqLayerActive(CTX_project1)

#define VARC_project1_SignalToTeam2(context) context.SAO_CTX_outC_project1.SignalToTeam2  /* project1/SignalToTeam2 */
#define VAR_project1_SignalToTeam2 VARC_project1_SignalToTeam2(CTX_project1)

#define VARC_project1_SignalToLED(context) context.SAO_CTX_outC_project1.SignalToLED  /* project1/SignalToLED */
#define VAR_project1_SignalToLED VARC_project1_SignalToLED(CTX_project1)

#define VARC_project1_EmitToCDS(context) context.SAO_CTX_outC_project1.EmitToCDS  /* project1/EmitToCDS */
#define VAR_project1_EmitToCDS VARC_project1_EmitToCDS(CTX_project1)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_SignalFromButton kcg_bool
#define CPY_SignalFromButton(DST, SRC) DST = SRC
#define T_SignalFromTeam2 kcg_bool
#define CPY_SignalFromTeam2(DST, SRC) DST = SRC
#define T_ReqLayerVisible kcg_bool
#define CPY_ReqLayerVisible(DST, SRC) DST = SRC
#define T_ReqLayerActive kcg_bool
#define CPY_ReqLayerActive(DST, SRC) DST = SRC
#define T_SignalToTeam2 kcg_bool
#define CPY_SignalToTeam2(DST, SRC) DST = SRC
#define T_SignalToLED kcg_int
#define CPY_SignalToLED(DST, SRC) DST = SRC
#define T_EmitToCDS kcg_bool
#define CPY_EmitToCDS(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_project1(context)  WU_project1 context;

#define DECLARE_CTXT_project1() DECLAREC_CTXT_project1(CTX_project1)

#define DECLAREC_EXT_CTXT_project1(MODE , context) MODE WU_project1 context;

#define DECLARE_EXT_CTXT_project1(MODE) DECLAREC_EXT_CTXT_project1(MODE , CTX_project1)

#define INITC_project1(context) project1_reset(&context.SAO_CTX_outC_project1)
#define INIT_project1() INITC_project1(CTX_project1)

#define PERFORMC_project1(context) 	project1( \
		&context.SAO_CTX_inC_project1 /* input context */,\
		&context.SAO_CTX_outC_project1 /* output/memories context */\
	)

#define PERFORM_project1() PERFORMC_project1(CTX_project1)

/*$************** SCADE Macro wrapper *********************
** End of file project1_macro.h
***********************************************************$*/

#endif /* _PROJECT1_MACRO_H_ */
