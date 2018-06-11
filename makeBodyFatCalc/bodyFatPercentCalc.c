#include <stdio.h>
#include <string.h>
//written by Aaron Zhao

float calculateBFPMale(float weight, float waist) {
  float factor1 = (weight * 1.082) + 94.42;
  float factor2 = waist * 4.15;
  float leanBodyMass = factor1 - factor2;
  float bodyFatWeight = weight - leanBodyMass;
  float bfpM = (bodyFatWeight * 100) / weight;
  return bfpM;
}

float calculateBFPFemale(float weight, float waist, float wrist, float hip, float forearm) {
  float factor1 = (weight * 0.732) + 8.987;
  float factor2 = wrist / 3.140;
  float factor3 = waist * 0.157;
  float factor4 = hip * 0.249;
  float factor5 = forearm * 0.434;
  float leanBodyMass = factor1 + factor2 - factor3 - factor4 + factor5;
  float bodyFatWeight = weight - leanBodyMass;
  float bfpF = (bodyFatWeight * 100) / weight;
  return bfpF;
}
