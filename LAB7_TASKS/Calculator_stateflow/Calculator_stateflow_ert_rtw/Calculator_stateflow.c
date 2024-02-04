/*
 * File: Calculator_stateflow.c
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

#include "Calculator_stateflow.h"
#include "Calculator_stateflow_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_stateflow_T Calculator_stateflow_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_stateflow_T Calculator_stateflow_Y;

/* Real-time model */
static RT_MODEL_Calculator_stateflow_T Calculator_stateflow_M_;
RT_MODEL_Calculator_stateflow_T *const Calculator_stateflow_M =
  &Calculator_stateflow_M_;

/* Forward declaration for local functions */
static uint32_T Calculator_stateflow_add_d(uint32_T b, uint32_T c);
static uint32_T Calculator_stateflow_sub_k(uint32_T x, uint32_T y);
static uint32_T Calculator_stateflow_mult_k(uint32_T e, uint32_T u);
static uint32_T Calculator_stateflow_devide_o(uint32_T w, uint32_T q);
void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T in0Hi;
  uint32_T in0Lo;
  uint32_T in1Hi;
  uint32_T in1Lo;
  uint32_T outBitsLo;
  uint32_T productHiLo;
  uint32_T productLoHi;
  in0Hi = in0 >> 16U;
  in0Lo = in0 & 65535U;
  in1Hi = in1 >> 16U;
  in1Lo = in1 & 65535U;
  productHiLo = in0Hi * in1Lo;
  productLoHi = in0Lo * in1Hi;
  in0Lo *= in1Lo;
  in1Lo = 0U;
  outBitsLo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ in0Lo;
  if (outBitsLo < in0Lo) {
    in1Lo = 1U;
  }

  in0Lo = outBitsLo;
  outBitsLo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (outBitsLo < in0Lo) {
    in1Lo++;
  }

  *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi)
    + in1Lo;
  *ptrOutBitsLo = outBitsLo;
}

uint32_T mul_u32_sat(uint32_T a, uint32_T b)
{
  uint32_T result;
  uint32_T u32_chi;
  mul_wide_u32(a, b, &u32_chi, &result);
  if (u32_chi) {
    result = MAX_uint32_T;
  }

  return result;
}

/*
 * Function for Chart: '<Root>/Chart1'
 * function a=add(b,c)
 */
static uint32_T Calculator_stateflow_add_d(uint32_T b, uint32_T c)
{
  uint32_T a;

  /* MATLAB Function 'add': '<S2>:1' */
  /* Graphical Function 'add': '<S2>:1' */
  /* Transition: '<S2>:3' */
  /* '<S2>:3:1' a=b+c; */
  a = b + /*MW:OvSatOk*/ c;
  if (a < b) {
    a = MAX_uint32_T;
  }

  return a;
}

/*
 * Function for Chart: '<Root>/Chart1'
 * function z=sub(x,y)
 */
static uint32_T Calculator_stateflow_sub_k(uint32_T x, uint32_T y)
{
  uint32_T z;

  /* MATLAB Function 'sub': '<S2>:4' */
  /* Graphical Function 'sub': '<S2>:4' */
  /* Transition: '<S2>:6' */
  /* '<S2>:6:1' z=x-y; */
  z = x - /*MW:OvSatOk*/ y;
  if (z > x) {
    z = 0U;
  }

  return z;
}

/*
 * Function for Chart: '<Root>/Chart1'
 * function k=mult(e,u)
 */
static uint32_T Calculator_stateflow_mult_k(uint32_T e, uint32_T u)
{
  /* MATLAB Function 'mult': '<S2>:7' */
  /* Graphical Function 'mult': '<S2>:7' */
  /* Transition: '<S2>:9' */
  /* '<S2>:9:1' k=e*u; */
  return mul_u32_sat(e, u);
}

/*
 * Function for Chart: '<Root>/Chart1'
 * function f=devide(w,q)
 */
static uint32_T Calculator_stateflow_devide_o(uint32_T w, uint32_T q)
{
  uint32_T f;
  uint32_T x;

  /* MATLAB Function 'devide': '<S2>:10' */
  /* Graphical Function 'devide': '<S2>:10' */
  /* Transition: '<S2>:12' */
  /* '<S2>:12:1' f=w/q; */
  if (q == 0U) {
    if (w == 0U) {
      f = 0U;
    } else {
      f = MAX_uint32_T;
    }
  } else {
    f = w / q;
    x = w - f * q;
    if ((x > 0U) && (x >= (q >> 1U) + (q & 1U))) {
      f++;
    }
  }

  return f;
}

/* Model step function */
void Calculator_stateflow_step(void)
{
  /* Outport: '<Root>/ADD_RES' incorporates:
   *  Chart: '<Root>/Chart1'
   *  Inport: '<Root>/Input1'
   */
  /* Gateway: Chart1 */
  /* During: Chart1 */
  /* Entry Internal: Chart1 */
  /* Transition: '<S2>:27' */
  /* '<S2>:27:2' out1=add(NUM1,NUM2); */
  /* '<S2>:27:3' out2=sub(NUM1,NUM2); */
  /* '<S2>:27:4' out3=mult(NUM1,NUM2); */
  /* '<S2>:27:5' out4=devide(NUM1,NUM2); */
  Calculator_stateflow_Y.ADD_RES = Calculator_stateflow_add_d
    (Calculator_stateflow_U.Input1, Calculator_stateflow_U.Input1);

  /* Outport: '<Root>/SUB_RES' incorporates:
   *  Chart: '<Root>/Chart1'
   *  Inport: '<Root>/Input1'
   */
  Calculator_stateflow_Y.SUB_RES = Calculator_stateflow_sub_k
    (Calculator_stateflow_U.Input1, Calculator_stateflow_U.Input1);

  /* Outport: '<Root>/MULT_RES' incorporates:
   *  Chart: '<Root>/Chart1'
   *  Inport: '<Root>/Input1'
   */
  Calculator_stateflow_Y.MULT_RES = Calculator_stateflow_mult_k
    (Calculator_stateflow_U.Input1, Calculator_stateflow_U.Input1);

  /* Outport: '<Root>/DEVIDE_RES' incorporates:
   *  Chart: '<Root>/Chart1'
   *  Inport: '<Root>/Input1'
   */
  Calculator_stateflow_Y.DEVIDE_RES = Calculator_stateflow_devide_o
    (Calculator_stateflow_U.Input1, Calculator_stateflow_U.Input1);

  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:27' */
  /* '<S1>:27:2' out1=add(NUM1,NUM2); */
  /* '<S1>:27:3' out2=sub(NUM1,NUM2); */
  /* '<S1>:27:4' out3=mult(NUM1,NUM2); */
  /* '<S1>:27:5' out4=devide(NUM1,NUM2); */
}

/* Model initialize function */
void Calculator_stateflow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_stateflow_M, (NULL));

  /* external inputs */
  (void)memset(&Calculator_stateflow_U, 0, sizeof(ExtU_Calculator_stateflow_T));

  /* external outputs */
  (void) memset((void *)&Calculator_stateflow_Y, 0,
                sizeof(ExtY_Calculator_stateflow_T));
}

/* Model terminate function */
void Calculator_stateflow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
