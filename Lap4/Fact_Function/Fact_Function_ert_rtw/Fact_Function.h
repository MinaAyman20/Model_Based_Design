/*
 * File: Fact_Function.h
 *
 * Code generated for Simulink model 'Fact_Function'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 17:50:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Fact_Function_h_
#define RTW_HEADER_Fact_Function_h_
#include <math.h>
#include <stddef.h>
#ifndef Fact_Function_COMMON_INCLUDES_
#define Fact_Function_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Fact_Function_COMMON_INCLUDES_ */

#include "Fact_Function_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Fact_Function_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Fact_Function_T;

/* Real-time Model Data Structure */
struct tag_RTM_Fact_Function_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Fact_Function_T Fact_Function_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Fact_Function_T Fact_Function_Y;

/* Model entry point functions */
extern void Fact_Function_initialize(void);
extern void Fact_Function_step(void);
extern void Fact_Function_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Fact_Function_T *const Fact_Function_M;

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
 * '<Root>' : 'Fact_Function'
 * '<S1>'   : 'Fact_Function/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Fact_Function_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
