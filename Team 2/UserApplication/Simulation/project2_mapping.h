#ifndef PROJECT2_SCSIM_MAPPING
#define PROJECT2_SCSIM_MAPPING

#include "SmuTypes.h"
#include "project2_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "project2.h"
void _SCSIM_Mapping_project2();

void* _SCSIM_Get_project2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*PROJECT2_SCSIM_MAPPING */
