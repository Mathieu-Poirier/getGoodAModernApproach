#include <stdio.h>

int main(void) {
  int height = 8; // these values are initializers
  int length = 12;
  int width = 10;
  int weight = 0;

  weight = (height * length * width + 165) / 166;
  printf("The volumetric weight of the box is: %d\n", weight);
  printf("The volume of the box is: %d\n", height * length * width); // lazy evaluation is faster?
  printf("The dimensions of the box are: %d, %d, %d\n", length, width, height);

  return 0;
}