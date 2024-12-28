#include "macroTools.h"
#include <stdio.h> // derective

int main(void) {
  f32 subtotal = 0.0f;

  printf("Enter an amount: ");
  scanf("%f", &subtotal);
  printf("With tax added: $%.2f", subtotal * 1.05);
}