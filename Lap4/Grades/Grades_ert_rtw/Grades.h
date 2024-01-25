/*
 * File: Grades.h
 *
 * Code generated for Simulink model 'Grades'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 16:58:53 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Grades_h_
#define RTW_HEADER_Grades_h_
#include <string.h>
#include <stddef.h>
#ifndef Grades_COMMON_INCLUDES_
#define Grades_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Grades_COMMON_INCLUDES_ */

#include "Grades_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S1>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_o
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String_o[256];

  /* Computed Parameter: StringConstant_String_n
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_n[256];

  /* Computed Parameter: StringConstant_String_a
   * Referenced by: '<S4>/String Constant'
   */
  char_T StringConstant_String_a[256];

  /* Computed Parameter: StringConstant_String_i
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_i[256];
} ConstP_Grades_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Grades_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_Grades_T;

/* Real-time Model Data Structure */
struct tag_RTM_Grades_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Grades_T Grades_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Grades_T Grades_Y;

/* Constant parameters (default storage) */
extern const ConstP_Grades_T Grades_ConstP;

/* Model entry point functions */
extern void Grades_initialize(void);
extern void Grades_step(void);
extern void Grades_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Grades_T *const Grades_M;

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
 * '<Root>' : 'Grades'
 * '<S1>'   : 'Grades/If Action Subsystem'
 * '<S2>'   : 'Grades/If Action Subsystem1'
 * '<S3>'   : 'Grades/If Action Subsystem2'
 * '<S4>'   : 'Grades/If Action Subsystem3'
 * '<S5>'   : 'Grades/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_Grades_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
