/*
 * File: Grades.c
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

#include "Grades.h"
#include "Grades_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Grades_T Grades_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Grades_T Grades_Y;

/* Real-time model */
static RT_MODEL_Grades_T Grades_M_;
RT_MODEL_Grades_T *const Grades_M = &Grades_M_;

/* Model step function */
void Grades_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/In1'
   *  Outport: '<Root>/Out1'
   *  StringConstant: '<S1>/String Constant'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   *  StringConstant: '<S4>/String Constant'
   *  StringConstant: '<S5>/String Constant'
   */
  if ((Grades_U.In1 >= 90.0) && (Grades_U.In1 <= 100.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    strncpy(&Grades_Y.Out1[0], &Grades_ConstP.StringConstant_String[0], 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
    Grades_Y.Out1[255] = '\x00';
  } else if ((Grades_U.In1 >= 80.0) && (Grades_U.In1 <= 89.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&Grades_Y.Out1[0], &Grades_ConstP.StringConstant_String_o[0], 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
    Grades_Y.Out1[255] = '\x00';
  } else if ((Grades_U.In1 >= 70.0) && (Grades_U.In1 <= 79.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&Grades_Y.Out1[0], &Grades_ConstP.StringConstant_String_n[0], 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
    Grades_Y.Out1[255] = '\x00';
  } else if ((Grades_U.In1 >= 60.0) && (Grades_U.In1 <= 69.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&Grades_Y.Out1[0], &Grades_ConstP.StringConstant_String_a[0], 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
    Grades_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&Grades_Y.Out1[0], &Grades_ConstP.StringConstant_String_i[0], 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
    Grades_Y.Out1[255] = '\x00';
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void Grades_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Grades_M, (NULL));

  /* external inputs */
  Grades_U.In1 = 0.0;

  /* external outputs */
  (void) memset(&Grades_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void Grades_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
