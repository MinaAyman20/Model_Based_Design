/*
 * File: IncrementCounter.c
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

#include "IncrementCounter.h"
#include "IncrementCounter_private.h"

/* Block states (default storage) */
DW_IncrementCounter_T IncrementCounter_DW;

/* External inputs (root inport signals with default storage) */
ExtU_IncrementCounter_T IncrementCounter_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_IncrementCounter_T IncrementCounter_Y;

/* Real-time model */
static RT_MODEL_IncrementCounter_T IncrementCounter_M_;
RT_MODEL_IncrementCounter_T *const IncrementCounter_M = &IncrementCounter_M_;

/* Model step function */
void IncrementCounter_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  IncrementCounter_Y.Output = IncrementCounter_DW.UnitDelay_DSTATE;

  /* Update for UnitDelay: '<Root>/Unit Delay' incorporates:
   *  Inport: '<Root>/Input'
   *  Sum: '<Root>/Add1'
   */
  IncrementCounter_DW.UnitDelay_DSTATE += IncrementCounter_U.Input;
}

/* Model initialize function */
void IncrementCounter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(IncrementCounter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&IncrementCounter_DW, 0,
                sizeof(DW_IncrementCounter_T));

  /* external inputs */
  IncrementCounter_U.Input = 0.0;

  /* external outputs */
  IncrementCounter_Y.Output = 0.0;
}

/* Model terminate function */
void IncrementCounter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
