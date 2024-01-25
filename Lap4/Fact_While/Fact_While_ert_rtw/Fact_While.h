/*
 * File: Fact_While.h
 *
 * Code generated for Simulink model 'Fact_While'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 18:49:49 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Fact_While_h_
#define RTW_HEADER_Fact_While_h_
#include <stddef.h>
#include <string.h>
#ifndef Fact_While_COMMON_INCLUDES_
#define Fact_While_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Fact_While_COMMON_INCLUDES_ */

#include "Fact_While_types.h"

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
  uint8_T Output_DSTATE;               /* '<S2>/Output' */
} DW_Fact_While_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T Input;                     /* '<Root>/Input' */
} ExtU_Fact_While_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T Output;                     /* '<Root>/Output' */
} ExtY_Fact_While_T;

/* Real-time Model Data Structure */
struct tag_RTM_Fact_While_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Fact_While_T Fact_While_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Fact_While_T Fact_While_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Fact_While_T Fact_While_Y;

/* Model entry point functions */
extern void Fact_While_initialize(void);
extern void Fact_While_step(void);
extern void Fact_While_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Fact_While_T *const Fact_While_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Data Type Propagation' : Unused code path elimination
 * Block '<S3>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S1>/Display' : Unused code path elimination
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
 * '<Root>' : 'Fact_While'
 * '<S1>'   : 'Fact_While/While Iterator Subsystem'
 * '<S2>'   : 'Fact_While/While Iterator Subsystem/Counter Limited'
 * '<S3>'   : 'Fact_While/While Iterator Subsystem/Counter Limited/Increment Real World'
 * '<S4>'   : 'Fact_While/While Iterator Subsystem/Counter Limited/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_Fact_While_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
