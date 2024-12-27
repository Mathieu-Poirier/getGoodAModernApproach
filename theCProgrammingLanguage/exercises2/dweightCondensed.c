#include "macroTools.h"
#include <stdio.h>

int main(void) {
  i32 height = 8, length = 12, width = 10, volume = height * length * width;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional wight (pounds): %d", (volume + 165) / 166);

  return 0;
}
