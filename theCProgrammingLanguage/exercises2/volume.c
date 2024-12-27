#include "macroTools.h"
#include <stdio.h>

int main(void) {
  f32 radius = 0;
  f32 pi = 3.14;
  f32 fractionalOffset = 4.0f / 3.0f;

  printf("Please enter the radius of the sphere: ");
  scanf("%f", &radius);
  printf("Volume of the sphere: %.5f", fractionalOffset * pi * radius * radius);
  return 0;
}