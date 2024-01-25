/*
 * File: ProgramingCalc.h
 *
 * Code generated for Simulink model 'ProgramingCalc'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 24 13:56:16 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ProgramingCalc_h_
#define RTW_HEADER_ProgramingCalc_h_
#include <stddef.h>
#include <string.h>
#ifndef ProgramingCalc_COMMON_INCLUDES_
#define ProgramingCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ProgramingCalc_COMMON_INCLUDES_ */

#include "ProgramingCalc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Num1;                        /* '<Root>/Num1' */
} ExtU_ProgramingCalc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T ANDRes;                      /* '<Root>/ANDRes' */
  uint8_T ORRes;                       /* '<Root>/ORRes' */
  uint8_T XORRES;                      /* '<Root>/XORRES' */
  uint8_T NOERes;                      /* '<Root>/NOERes' */
  uint8_T ANDNotRes;                   /* '<Root>/ANDNotRes' */
  uint8_T OrNotRes;                    /* '<Root>/OrNotRes' */
  uint8_T XORNotRes;                   /* '<Root>/XORNotRes' */
  uint8_T NORNot;                      /* '<Root>/NORNot' */
} ExtY_ProgramingCalc_T;

/* Real-time Model Data Structure */
struct tag_RTM_ProgramingCalc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_ProgramingCalc_T ProgramingCalc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ProgramingCalc_T ProgramingCalc_Y;

/* Model entry point functions */
extern void ProgramingCalc_initialize(void);
extern void ProgramingCalc_step(void);
extern void ProgramingCalc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ProgramingCalc_T *const ProgramingCalc_M;

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
 * '<Root>' : 'ProgramingCalc'
 */
#endif                                 /* RTW_HEADER_ProgramingCalc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
