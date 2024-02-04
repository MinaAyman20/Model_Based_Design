/*
 * File: Calculator_stateflow_private.h
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

#ifndef RTW_HEADER_Calculator_stateflow_private_h_
#define RTW_HEADER_Calculator_stateflow_private_h_
#include "rtwtypes.h"

extern void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo);
extern uint32_T mul_u32_sat(uint32_T a, uint32_T b);

#endif                          /* RTW_HEADER_Calculator_stateflow_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
