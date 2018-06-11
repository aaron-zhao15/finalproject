#include <stdio.h>
#include <strings.h>
//written by Matthew Tsai
float getWeight(float w) {
  w = w * 0.4535924;
  return w;
}

float getHeight(float h) {
  h = h * 0.0254;
  return h;
}

float calcBMI(float w, float h) {
  float bmi = w/(h * h);
  return bmi;
}
