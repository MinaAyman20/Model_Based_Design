/*
 * File: IncrementCounter.h
 *
 * Code generated for Simulink model 'IncrementCounter'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 11:23:37 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_IncrementCounter_h_
#define RTW_HEADER_IncrementCounter_h_
#include <stddef.h>
#include <string.h>
#ifndef IncrementCounter_COMMON_INCLUDES_
#define IncrementCounter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* IncrementCounter_COMMON_INCLUDES_ */

#include "IncrementCounter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
} DW_IncrementCounter_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_IncrementCounter_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_IncrementCounter_T;

/* Real-time Model Data Structure */
struct tag_RTM_IncrementCounter_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_IncrementCounter_T IncrementCounter_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_IncrementCounter_T IncrementCounter_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_IncrementCounter_T IncrementCounter_Y;

/* Model entry point functions */
extern void IncrementCounter_initialize(void);
extern void IncrementCounter_step(void);
extern void IncrementCounter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_IncrementCounter_T *const IncrementCounter_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Add2' : Unused code path elimination
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Unit Delay1' : Unused code path elimination
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
 * '<Root>' : 'IncrementCounter'
 */
#endif                                 /* RTW_HEADER_IncrementCounter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
