/*
 * File: VectorCalc.c
 *
 * Code generated for Simulink model 'VectorCalc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 24 13:35:46 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VectorCalc.h"
#include "VectorCalc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_VectorCalc_T VectorCalc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_VectorCalc_T VectorCalc_Y;

/* Real-time model */
static RT_MODEL_VectorCalc_T VectorCalc_M_;
RT_MODEL_VectorCalc_T *const VectorCalc_M = &VectorCalc_M_;

/* Model step function */
void VectorCalc_step(void)
{
  uint8_T rtb_SumofElements;

  /* Outport: '<Root>/SumResult' incorporates:
   *  Inport: '<Root>/Vect1'
   *  Sum: '<Root>/Sum of Elements'
   */
  VectorCalc_Y.SumResult = (uint8_T)(((uint32_T)VectorCalc_U.Vect1[0] +
    VectorCalc_U.Vect1[1]) + VectorCalc_U.Vect1[2]);

  /* MinMax: '<Root>/MinMax' incorporates:
   *  Inport: '<Root>/Vect1'
   */
  if (VectorCalc_U.Vect1[0] < VectorCalc_U.Vect1[1]) {
    rtb_SumofElements = VectorCalc_U.Vect1[0];
  } else {
    rtb_SumofElements = VectorCalc_U.Vect1[1];
  }

  if (rtb_SumofElements < VectorCalc_U.Vect1[2]) {
    /* Outport: '<Root>/MinResult' */
    VectorCalc_Y.MinResult = rtb_SumofElements;
  } else {
    /* Outport: '<Root>/MinResult' */
    VectorCalc_Y.MinResult = VectorCalc_U.Vect1[2];
  }

  /* End of MinMax: '<Root>/MinMax' */

  /* MinMax: '<Root>/MinMax1' incorporates:
   *  Inport: '<Root>/Vect1'
   */
  if (VectorCalc_U.Vect1[0] > VectorCalc_U.Vect1[1]) {
    rtb_SumofElements = VectorCalc_U.Vect1[0];
  } else {
    rtb_SumofElements = VectorCalc_U.Vect1[1];
  }

  if (rtb_SumofElements > VectorCalc_U.Vect1[2]) {
    /* Outport: '<Root>/MaxResult' */
    VectorCalc_Y.MaxResult = rtb_SumofElements;
  } else {
    /* Outport: '<Root>/MaxResult' */
    VectorCalc_Y.MaxResult = VectorCalc_U.Vect1[2];
  }

  /* End of MinMax: '<Root>/MinMax1' */
}

/* Model initialize function */
void VectorCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(VectorCalc_M, (NULL));

  /* external inputs */
  (void)memset(&VectorCalc_U, 0, sizeof(ExtU_VectorCalc_T));

  /* external outputs */
  (void) memset((void *)&VectorCalc_Y, 0,
                sizeof(ExtY_VectorCalc_T));
}

/* Model terminate function */
void VectorCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
