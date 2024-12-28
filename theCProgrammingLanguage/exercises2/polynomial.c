#include "macroTools.h"
#include <stdio.h>

int main(void) {
  f32 variable = 0.0f;

  printf("Enter a value for x: ");
  scanf("%f", &variable);
  printf(
      "Calculated following polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: %.2f",
      (3 * (variable * variable * variable * variable * variable)) +
          (2 * (variable * variable * variable * variable)) -
          (5 * (variable * variable * variable)) - (variable * variable) +
          (7 * variable) - 6);
}