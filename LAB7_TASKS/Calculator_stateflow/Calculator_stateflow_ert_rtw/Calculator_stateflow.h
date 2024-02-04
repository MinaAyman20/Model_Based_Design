/*
 * File: Calculator_stateflow.h
 *
 * Code generated for Simulink model 'Calculator_stateflow'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Feb  4 20:52:37 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Calculator_stateflow_h_
#define RTW_HEADER_Calculator_stateflow_h_
#include <string.h>
#include <stddef.h>
#ifndef Calculator_stateflow_COMMON_INCLUDES_
#define Calculator_stateflow_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                               /* Calculator_stateflow_COMMON_INCLUDES_ */

#include "Calculator_stateflow_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  uint32_T Input1;                     /* '<Root>/Input1' */
} ExtU_Calculator_stateflow_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T ADD_RES;                    /* '<Root>/ADD_RES' */
  uint32_T SUB_RES;                    /* '<Root>/SUB_RES' */
  uint32_T MULT_RES;                   /* '<Root>/MULT_RES' */
  uint32_T DEVIDE_RES;                 /* '<Root>/DEVIDE_RES' */
} ExtY_Calculator_stateflow_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_stateflow_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Calculator_stateflow_T Calculator_stateflow_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calculator_stateflow_T Calculator_stateflow_Y;

/* Model entry point functions */
extern void Calculator_stateflow_initialize(void);
extern void Calculator_stateflow_step(void);
extern void Calculator_stateflow_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calculator_stateflow_T *const Calculator_stateflow_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/ADD' : Unused code path elimination
 * Block '<Root>/DEVIDE' : Unused code path elimination
 * Block '<Root>/MULT' : Unused code path elimination
 * Block '<Root>/SUB' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Calculator_stateflow'
 * '<S1>'   : 'Calculator_stateflow/Chart'
 * '<S2>'   : 'Calculator_stateflow/Chart1'
 */
#endif                                 /* RTW_HEADER_Calculator_stateflow_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
