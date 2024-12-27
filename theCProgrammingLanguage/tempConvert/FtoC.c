#include "macroTools.h"
#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {

  f32 fahrenheit;
  f32 celsius;

  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
  printf("Celsius equivalent: %.1f\n", celsius);

  return 0;
}

// .1f for one digit after the decimal point
// Macros are FREEZING_POINT and SCALE_FACTOR
