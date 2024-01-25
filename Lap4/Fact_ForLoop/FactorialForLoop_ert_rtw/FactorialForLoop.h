/*
 * File: FactorialForLoop.h
 *
 * Code generated for Simulink model 'FactorialForLoop'.
 *
 * Model version                  : 1.50
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 18:32:09 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FactorialForLoop_h_
#define RTW_HEADER_FactorialForLoop_h_
#include <stddef.h>
#include <string.h>
#ifndef FactorialForLoop_COMMON_INCLUDES_
#define FactorialForLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FactorialForLoop_COMMON_INCLUDES_ */

#include "FactorialForLoop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S1>/Unit Delay' */
} DW_FactorialForLoop_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
} ExtU_FactorialForLoop_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T Output;                     /* '<Root>/Output' */
} ExtY_FactorialForLoop_T;

/* Real-time Model Data Structure */
struct tag_RTM_FactorialForLoop_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_FactorialForLoop_T FactorialForLoop_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_FactorialForLoop_T FactorialForLoop_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactorialForLoop_T FactorialForLoop_Y;

/* Model entry point functions */
extern void FactorialForLoop_initialize(void);
extern void FactorialForLoop_step(void);
extern void FactorialForLoop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactorialForLoop_T *const FactorialForLoop_M;

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
 * '<Root>' : 'FactorialForLoop'
 * '<S1>'   : 'FactorialForLoop/For Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_FactorialForLoop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
