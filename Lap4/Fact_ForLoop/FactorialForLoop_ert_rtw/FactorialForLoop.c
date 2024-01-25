/*
 * File: FactorialForLoop.c
 *
 * Code generated for Simulink model 'FactorialForLoop'.
 *
 * Model version                  : 1.50
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 18:32:09 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FactorialForLoop.h"
#include "FactorialForLoop_private.h"

/* Block states (default storage) */
DW_FactorialForLoop_T FactorialForLoop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FactorialForLoop_T FactorialForLoop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactorialForLoop_T FactorialForLoop_Y;

/* Real-time model */
static RT_MODEL_FactorialForLoop_T FactorialForLoop_M_;
RT_MODEL_FactorialForLoop_T *const FactorialForLoop_M = &FactorialForLoop_M_;

/* Model step function */
void FactorialForLoop_step(void)
{
  uint8_T s1_iter;
  uint8_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/Input' */
  tmp = FactorialForLoop_U.Input;
  if (FactorialForLoop_U.Input > 254) {
    tmp = 254U;
  }

  /* End of Inport: '<Root>/Input' */
  for (s1_iter = 1U; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Output' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    FactorialForLoop_Y.Output = (uint16_T)((uint32_T)s1_iter *
      FactorialForLoop_DW.UnitDelay_DSTATE);

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Output'
     */
    FactorialForLoop_DW.UnitDelay_DSTATE = FactorialForLoop_Y.Output;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void FactorialForLoop_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FactorialForLoop_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&FactorialForLoop_DW, 0,
                sizeof(DW_FactorialForLoop_T));

  /* external inputs */
  FactorialForLoop_U.Input = 0U;

  /* external outputs */
  FactorialForLoop_Y.Output = 0U;

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  FactorialForLoop_DW.UnitDelay_DSTATE = 1U;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void FactorialForLoop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
