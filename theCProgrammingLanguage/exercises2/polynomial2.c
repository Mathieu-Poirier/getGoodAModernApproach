#include "macroTools.h"
#include <stdio.h>

int main(void) {
  f32 variable = 0.0f;

  printf("Enter a value for x: ");
  scanf("%f", &variable);
  printf(
      "Calculated following polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: %.2f",
      (((((variable * 3 + 2) * variable - 5) * variable - 1) * variable + 7) *
           variable -
       6));
}

// calculates the same value as polynomial with less multiplication operations.
// This is known as Horner's Rules