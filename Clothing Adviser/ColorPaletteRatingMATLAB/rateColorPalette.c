/*
 * rateColorPalette.c
 *
 * Code generation for function 'rateColorPalette'
 *
 * C source code generated on: Sat Jan 10 16:52:50 2015
 *
 */

/* Include files */
#include "rateColorPalette.h"
#include "createDatapointsFromNewData.h"

/* Function Definitions */
real_T rateColorPalette(const real_T palette[15])
{
  real_T rating;
  real_T datapoints_features[334];
  real_T expl_temp[334];
  real_T b_expl_temp[15];
  real_T c_expl_temp[15];
  real_T d_expl_temp[15];
  int32_T k;
  static const real_T b[334] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.02, 0.0, 0.0,
    0.04, 0.0, -0.02, 0.0, 0.0, -0.05, 0.0, 0.1, 0.0, 0.07, 0.09, 0.0, 0.11, 0.0,
    0.0, 0.1, -0.05, 0.04, 0.11, -0.08, 0.0, 0.0, 0.07, 0.0, 0.0, 0.03, -0.05,
    0.0, -0.03, 0.0, 0.0, -0.01, 0.0, -0.08, 0.07, 0.0, 0.16, -0.08, 0.0, 0.0,
    0.07, -0.09, 0.0, 0.0, 0.04, 0.03, 0.0, 0.0, -0.01, -0.18, -0.7, 0.14, 0.05,
    0.0, -0.04, 0.0, 0.0, 0.0, -0.11, 0.0, -0.02, 0.0, 0.27, 0.01, -0.02, 0.0,
    -0.04, 0.0, -0.02, 0.0, 0.0, 0.09, 0.07, 0.0, 0.0, 0.0, 0.01, -0.21, -0.11,
    0.17, 0.0, -0.02, 0.03, 0.0, 0.0, 0.0, -0.01, 0.0, 0.01, 0.08, -0.02, 0.01,
    0.01, 0.11, 0.01, 0.0, 0.24, 0.0, -0.01, 0.0, 0.06, 0.0, 0.0, 0.0, 0.0,
    -0.08, 0.0, 0.02, 0.0, -0.01, 0.0, 0.0, 0.0, 0.22, 0.01, 0.06, 0.0, 0.03,
    0.01, -0.09, 0.02, -0.01, -0.11, -0.06, 2.29, 0.0, 0.0, -0.48, -0.24, -0.39,
    0.0, -0.21, 0.0, 0.76, 0.0, -0.01, 0.0, 0.0, -0.21, 0.0, 0.0, 0.0, -0.02,
    -0.01, -0.01, -0.09, 0.0, -0.02, 0.01, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, -0.01,
    0.01, 0.0, 0.0, 0.02, 0.0, 0.01, 0.0, 0.0, 0.02, 0.09, -0.43, 0.0, 0.08,
    -0.52, 0.0, 0.04, -0.16, -0.02, 0.0, 0.0, -0.01, -0.05, 0.0, 0.0, 0.0, 0.0,
    -0.01, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.05, -0.01, 0.05, 0.12,
    -0.02, 0.02, 0.02, 0.05, -0.04, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.01, 0.0,
    -0.43, 0.02, 0.05, 0.0, 0.0, -0.02, 0.0, 0.0, 0.0, -0.01, -0.07, 0.0, 0.26,
    0.02, -0.17, -0.28, 0.15, 0.0, -0.13, -0.04, 0.0, 0.8, -0.3, -0.87, 0.0, 0.0,
    -0.15, -0.04, 0.51, -0.04, -0.45, -0.1, 0.31, 0.0, -0.28, -0.67, 0.58, -0.48,
    -0.02, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, -0.01, 0.0, -0.02, 0.0, 0.0, -0.01,
    -0.01, 0.03, -0.02, -0.06, 0.0, -0.02, -0.06, -0.01, -0.01, -0.04, 0.06, 0.0,
    0.0, 0.22, 0.0, 0.0, 0.0, 0.05, 0.0, -0.04, 0.0, 0.0, -0.02, 0.0, 0.0, -0.05,
    0.0, 0.0, 0.01, 0.0, 0.02, -0.06, 0.0, -0.05, 0.0, -0.09, 0.06, -0.03, 0.0,
    0.0, 0.0, -0.28, -0.26, 0.0, -0.08, -0.34, -0.51, 0.03, 0.01, 0.08, 0.0, 0.0,
    0.3, 0.0, -0.26, 0.0, 0.09, 0.35, 0.17, -0.01, 0.0, 0.04, -0.15, -0.11,
    -0.01, 0.34 };

  /*  codeRoot = strcat(pwd, '/'); */
  /*  addpath(codeRoot); */
  /*  addpath([codeRoot,'data/']); */
  /*  addpath([codeRoot,'circstat/']); */
  /*  addpath([codeRoot,'glmnet_matlab/']); */
  /*  addpath([codeRoot, 'coder']); */
  /*  data = zeros(1,5,3); */
  /*  data(:,:,1) = [0.8000    1.0000    0.8902    0.8000    0.6000]; */
  /*  data(:,:,2) = [0.7529    0.9804    0.6627    0.4510    0.1333]; */
  /*  data(:,:,3) = [0.4510    0.4118    1.0000    0.6588    0.4157]; */
  /*  dataset = coder.load('customData'); */
  /*  dataset = coder.load('mturkDataOnly'); */
  /*  data = dataset.data; */
  createDatapointsFromNewData(palette, d_expl_temp, c_expl_temp, b_expl_temp,
    expl_temp, datapoints_features);
  rating = 0.0;
	
  for (k = 0; k < 334; k++) {
    rating += datapoints_features[k] * b[k];
  }

  return rating;
}

/* End of code generation (rateColorPalette.c) */
