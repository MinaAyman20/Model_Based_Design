/*
 * File: Subsystem.h
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

#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#ifndef ScalerCalc_COMMON_INCLUDES_
#define ScalerCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ScalerCalc_COMMON_INCLUDES_ */

#include "ScalerCalc_types.h"

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  real_T y;                            /* '<S3>/MATLAB Function' */
} B_Subsystem_ScalerCalc_T;

extern void ScalerCalc_Subsystem(B_Subsystem_ScalerCalc_T *localB);

#endif                                 /* RTW_HEADER_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
