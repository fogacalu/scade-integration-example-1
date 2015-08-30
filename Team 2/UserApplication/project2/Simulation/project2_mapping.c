#include "project2_mapping.h"
#include "project2_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_project2();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** project2/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_project2() {
	pSimulator->m_pfnSetRoot(pSimulator, "project2/", &outputs_ctx, _SCSIM_Get_project2_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 1, valid, 0, 0);
	/*<< Inlined Toggle*/
	pSimulator->m_pfnPushInstance(pSimulator, "Toggle", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Output", &_SCSIM_kcg_bool_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Input", &_SCSIM_kcg_bool_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ReqLayerVisible", &_SCSIM_kcg_bool_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ReqLayerActive", &_SCSIM_kcg_bool_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SignalToTeam1", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SignalToLED", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "EmitToCDS", &_SCSIM_kcg_bool_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SignalFromTeam1", &_SCSIM_kcg_bool_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SignalFromButton", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
}

void* _SCSIM_Get_project2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx.Output_1);
		case 3:
			return &(outputs_ctx.Input_1);
		case 4:
			return &(outputs_ctx._L3_1);
		case 5:
			return &(outputs_ctx._L1_1);
		case 6:
			return &(outputs_ctx._L2_1);
		case 7:
			return &(outputs_ctx._L4_1);
		case 8:
			return &(outputs_ctx._L2);
		case 9:
			return &(outputs_ctx._L3);
		case 10:
			return &(outputs_ctx._L4);
		case 11:
			return &(outputs_ctx._L5);
		case 12:
			return &(outputs_ctx._L6);
		case 13:
			return &(outputs_ctx._L7);
		case 14:
			return &(outputs_ctx._L8);
		case 15:
			return &(outputs_ctx._L9);
		case 16:
			return &(outputs_ctx.ReqLayerVisible);
		case 17:
			return &(outputs_ctx.ReqLayerActive);
		case 18:
			return &(outputs_ctx.SignalToTeam1);
		case 19:
			return &(outputs_ctx.SignalToLED);
		case 20:
			return &(outputs_ctx.EmitToCDS);
		case 21:
			return &(inputs_ctx.SignalFromTeam1);
		case 22:
			return &(inputs_ctx.SignalFromButton);
		default:
			break;
	}
	return 0;
}

