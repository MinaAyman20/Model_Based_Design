/*
 * File: ProgramingCalc.c
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

#include "ProgramingCalc.h"
#include "ProgramingCalc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_ProgramingCalc_T ProgramingCalc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ProgramingCalc_T ProgramingCalc_Y;

/* Real-time model */
static RT_MODEL_ProgramingCalc_T ProgramingCalc_M_;
RT_MODEL_ProgramingCalc_T *const ProgramingCalc_M = &ProgramingCalc_M_;

/* Model step function */
void ProgramingCalc_step(void)
{
  uint8_T rtb_BitwiseOperator3_tmp;

  /* Outport: '<Root>/ANDRes' incorporates:
   *  Inport: '<Root>/Num1'
   */
  ProgramingCalc_Y.ANDRes = ProgramingCalc_U.Num1;

  /* Outport: '<Root>/ORRes' incorporates:
   *  Inport: '<Root>/Num1'
   */
  ProgramingCalc_Y.ORRes = ProgramingCalc_U.Num1;

  /* Outport: '<Root>/XORRES' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator2'
   */
  ProgramingCalc_Y.XORRES = 0U;

  /* S-Function (sfix_bitop): '<Root>/Bitwise Operator3' incorporates:
   *  Inport: '<Root>/Num1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT1'
   */
  rtb_BitwiseOperator3_tmp = (uint8_T)~ProgramingCalc_U.Num1;

  /* Outport: '<Root>/NOERes' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator3'
   */
  ProgramingCalc_Y.NOERes = rtb_BitwiseOperator3_tmp;

  /* Outport: '<Root>/ANDNotRes' */
  ProgramingCalc_Y.ANDNotRes = rtb_BitwiseOperator3_tmp;

  /* Outport: '<Root>/OrNotRes' */
  ProgramingCalc_Y.OrNotRes = rtb_BitwiseOperator3_tmp;

  /* Outport: '<Root>/XORNotRes' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator2'
   */
  ProgramingCalc_Y.XORNotRes = MAX_uint8_T;

  /* Outport: '<Root>/NORNot' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT3'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator3'
   */
  ProgramingCalc_Y.NORNot = (uint8_T)~rtb_BitwiseOperator3_tmp;
}

/* Model initialize function */
void ProgramingCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ProgramingCalc_M, (NULL));

  /* external inputs */
  ProgramingCalc_U.Num1 = 0U;

  /* external outputs */
  (void) memset((void *)&ProgramingCalc_Y, 0,
                sizeof(ExtY_ProgramingCalc_T));
}

/* Model terminate function */
void ProgramingCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
