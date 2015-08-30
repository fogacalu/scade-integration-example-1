#ifndef _PROJECT2_UA_1_H_
#  define _PROJECT2_UA_1_H_ 

#include "project2.h"

/**
** File project2_UA_1.h
**
** Automatically generated by SCADE Suite UA Adaptor
** Version 6.4.2 (build i25)
**
** Date of generation: 2015-08-30T17:08:31
** Command line:  $ uaadaptor.exe -n 'C:/Program Files (x86)/Esterel Technologies/Esterel SCADE 6.4.2/SCADE/bin/../../SCADE Display/config/Workspace/environments/UAPageCreator/A661Norm/a661.xml' -o 'project2_UA_1' -outdir 'C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation\' -k 'C:/Users/Lu/Documents/ITA/CE-237-Teste_Avancado_de_SW/Git_rep/scade-integration-example-1/Team 2/UserApplication/project2/Simulation/kcg_trace.xml -d 'C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 2\DefinitionFile\project2.sgfx' C:\Users\Lu\Documents\ITA\CE-237-Teste_Avancado_de_SW\Git_rep\scade-integration-example-1\Team 2\UserApplication\project2\project2.sdy
**/

/*The default context number if not mapped*/
#ifndef DEFAULT_CONTEXT_NUMBER
#define DEFAULT_CONTEXT_NUMBER 0xDEFA
#endif

/*The input buffer size (bytes) for data from the server*/
#ifndef MAX_SIZE_INPUT_BUFFER
#define MAX_SIZE_INPUT_BUFFER 1000000
#endif

/*The output buffer size (bytes) for data to send to the server*/
#ifndef MAX_SIZE_OUTPUT_BUFFER
#define MAX_SIZE_OUTPUT_BUFFER 1000000
#endif

#ifndef BUFFER_EL
#define BUFFER_EL
typedef unsigned char buffer_el;
#endif

#ifndef EXTERN_OUT_CTX_T
#define extern_out_ctx_t void *
#endif

#ifndef EXTERN_IN_CTX_T
#define extern_in_ctx_t void *
#endif



extern int project2_UA_1_send(buffer_el msg[], outC_project2* scade_ctx,
  extern_out_ctx_t * extern_out_ctx);
extern int project2_UA_1_receive(buffer_el buffer[], int buffer_size,
  inC_project2* scade_ctx, extern_in_ctx_t * extern_in_ctx);
extern void project2_UA_1_receive_clear(inC_project2* scade_ctx,
  extern_in_ctx_t * extern_in_ctx);


#endif /* _PROJECT2_UA_1_H_ */