/*
 * File: Fact_While.c
 *
 * Code generated for Simulink model 'Fact_While'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 18:49:49 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Fact_While.h"
#include "Fact_While_private.h"

/* Block states (default storage) */
DW_Fact_While_T Fact_While_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Fact_While_T Fact_While_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Fact_While_T Fact_While_Y;

/* Real-time model */
static RT_MODEL_Fact_While_T Fact_While_M_;
RT_MODEL_Fact_While_T *const Fact_While_M = &Fact_While_M_;

/* Model step function */
void Fact_While_step(void)
{
  uint8_T rtb_Output;
  uint8_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1U;

  /* Inport: '<Root>/Input' */
  loopCond = Fact_While_U.Input;
  while (loopCond && (s1_iter <= 5)) {
    /* UnitDelay: '<S2>/Output' */
    rtb_Output = Fact_While_DW.Output_DSTATE;

    /* Outport: '<Root>/Output' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Fact_While_Y.Output = (uint16_T)((uint32_T)s1_iter *
      Fact_While_DW.UnitDelay_DSTATE);

    /* Switch: '<S4>/FixPt Switch' incorporates:
     *  Constant: '<S3>/FixPt Constant'
     *  Sum: '<S3>/FixPt Sum1'
     *  UnitDelay: '<S2>/Output'
     */
    if ((uint8_T)(Fact_While_DW.Output_DSTATE + 1U) > 5) {
      /* Update for UnitDelay: '<S2>/Output' incorporates:
       *  Constant: '<S4>/Constant'
       */
      Fact_While_DW.Output_DSTATE = 0U;
    } else {
      /* Update for UnitDelay: '<S2>/Output' */
      Fact_While_DW.Output_DSTATE++;
    }

    /* End of Switch: '<S4>/FixPt Switch' */

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Output'
     */
    Fact_While_DW.UnitDelay_DSTATE = Fact_While_Y.Output;
    loopCond = (rtb_Output != 0);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void Fact_While_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Fact_While_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Fact_While_DW, 0,
                sizeof(DW_Fact_While_T));

  /* external inputs */
  Fact_While_U.Input = false;

  /* external outputs */
  Fact_While_Y.Output = 0U;

  /* SystemInitialize for Iterator SubSystem: '<Root>/While Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Fact_While_DW.UnitDelay_DSTATE = 1U;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model terminate function */
void Fact_While_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
