/*
 * File: VectorCalc.h
 *
 * Code generated for Simulink model 'VectorCalc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 24 13:35:46 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VectorCalc_h_
#define RTW_HEADER_VectorCalc_h_
#include <string.h>
#include <stddef.h>
#ifndef VectorCalc_COMMON_INCLUDES_
#define VectorCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* VectorCalc_COMMON_INCLUDES_ */

#include "VectorCalc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Vect1[3];                    /* '<Root>/Vect1' */
} ExtU_VectorCalc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T SumResult;                   /* '<Root>/SumResult' */
  uint8_T MinResult;                   /* '<Root>/MinResult' */
  uint8_T MaxResult;                   /* '<Root>/MaxResult' */
} ExtY_VectorCalc_T;

/* Real-time Model Data Structure */
struct tag_RTM_VectorCalc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_VectorCalc_T VectorCalc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_VectorCalc_T VectorCalc_Y;

/* Model entry point functions */
extern void VectorCalc_initialize(void);
extern void VectorCalc_step(void);
extern void VectorCalc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_VectorCalc_T *const VectorCalc_M;

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
 * '<Root>' : 'VectorCalc'
 */
#endif                                 /* RTW_HEADER_VectorCalc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
