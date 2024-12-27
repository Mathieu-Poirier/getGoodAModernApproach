#include <stdio.h>

int main(void) {
  int height = 0, length = 0, width = 0;

  printf("Enter height of a box: ");
  scanf("%d", &height);
  printf("Enter length of a box: ");
  scanf("%d", &length);
  printf("Enter width of a box: ");
  scanf("%d", &width);

  printf("Volume (cubic inches): %d\n", height * length * width);
  printf("Dimensional weight (pounds): %d\n",
         ((height * length * width) + 165) / 166);

  return 0;
}

// macro definitions #define INCHES_PER_POUND 166