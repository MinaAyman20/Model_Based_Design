/*
 * File: ScalerCalc.c
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

#include "ScalerCalc.h"
#include "ScalerCalc_private.h"

/* Block signals (default storage) */
B_ScalerCalc_T ScalerCalc_B;

/* External inputs (root inport signals with default storage) */
ExtU_ScalerCalc_T ScalerCalc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ScalerCalc_T ScalerCalc_Y;

/* Real-time model */
static RT_MODEL_ScalerCalc_T ScalerCalc_M_;
RT_MODEL_ScalerCalc_T *const ScalerCalc_M = &ScalerCalc_M_;

/* Model step function */
void ScalerCalc_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  ScalerCalc_Subsystem(&ScalerCalc_B.Subsystem);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/ErrorStatus' */
  ScalerCalc_Y.ErrorStatus = ScalerCalc_B.Subsystem.y;

  /* Outport: '<Root>/DecrementRes' incorporates:
   *  Constant: '<S1>/FixPt Constant'
   *  Inport: '<Root>/Num1'
   *  Sum: '<S1>/FixPt Sum1'
   */
  ScalerCalc_Y.DecrementRes = (int8_T)(ScalerCalc_U.Num1 - 1);

  /* Outport: '<Root>/IncrementRes' incorporates:
   *  Constant: '<S2>/FixPt Constant'
   *  Inport: '<Root>/Num1'
   *  Sum: '<S2>/FixPt Sum1'
   */
  ScalerCalc_Y.IncrementRes = (int8_T)(ScalerCalc_U.Num1 + 1);

  /* Outport: '<Root>/unaryminusRes' incorporates:
   *  Inport: '<Root>/Num1'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  ScalerCalc_Y.unaryminusRes = (int8_T)-ScalerCalc_U.Num1;
}

/* Model initialize function */
void ScalerCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ScalerCalc_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ScalerCalc_B), 0,
                sizeof(B_ScalerCalc_T));

  /* external inputs */
  ScalerCalc_U.Num1 = 0;

  /* external outputs */
  (void) memset((void *)&ScalerCalc_Y, 0,
                sizeof(ExtY_ScalerCalc_T));

  /* ConstCode for Outport: '<Root>/SubtractResult' */
  ScalerCalc_Y.SubtractResult = 0U;

  /* ConstCode for Outport: '<Root>/ProductResult' */
  ScalerCalc_Y.ProductResult = 0U;

  /* ConstCode for Outport: '<Root>/DivisionResult' */
  ScalerCalc_Y.DivisionResult = MAX_uint16_T;

  /* ConstCode for Outport: '<Root>/AddResult' */
  ScalerCalc_Y.AddResult = 0U;
}

/* Model terminate function */
void ScalerCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
