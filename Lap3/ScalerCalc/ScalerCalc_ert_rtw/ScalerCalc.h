/*
 * File: ScalerCalc.h
 *
 * Code generated for Simulink model 'ScalerCalc'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 24 15:52:12 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ScalerCalc_h_
#define RTW_HEADER_ScalerCalc_h_
#include <stddef.h>
#include <string.h>
#ifndef ScalerCalc_COMMON_INCLUDES_
#define ScalerCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ScalerCalc_COMMON_INCLUDES_ */

#include "ScalerCalc_types.h"

/* Child system includes */
#include "Subsystem.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  B_Subsystem_ScalerCalc_T Subsystem;  /* '<Root>/Subsystem' */
} B_ScalerCalc_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int8_T Num1;                         /* '<Root>/Num1' */
} ExtU_ScalerCalc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T SubtractResult;             /* '<Root>/SubtractResult' */
  uint16_T ProductResult;              /* '<Root>/ProductResult' */
  uint16_T DivisionResult;             /* '<Root>/DivisionResult' */
  uint16_T AddResult;                  /* '<Root>/AddResult' */
  int8_T DecrementRes;                 /* '<Root>/DecrementRes' */
  int8_T IncrementRes;                 /* '<Root>/IncrementRes' */
  int8_T unaryminusRes;                /* '<Root>/unaryminusRes' */
  real_T ErrorStatus;                  /* '<Root>/ErrorStatus' */
} ExtY_ScalerCalc_T;

/* Real-time Model Data Structure */
struct tag_RTM_ScalerCalc_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_ScalerCalc_T ScalerCalc_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_ScalerCalc_T ScalerCalc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ScalerCalc_T ScalerCalc_Y;

/* Model entry point functions */
extern void ScalerCalc_initialize(void);
extern void ScalerCalc_step(void);
extern void ScalerCalc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ScalerCalc_T *const ScalerCalc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/FixPt Data Type Duplicate' : Unused code path elimination
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
 * '<Root>' : 'ScalerCalc'
 * '<S1>'   : 'ScalerCalc/Decrement Real World'
 * '<S2>'   : 'ScalerCalc/Increment Real World'
 * '<S3>'   : 'ScalerCalc/Subsystem'
 * '<S4>'   : 'ScalerCalc/Subsystem/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_ScalerCalc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
