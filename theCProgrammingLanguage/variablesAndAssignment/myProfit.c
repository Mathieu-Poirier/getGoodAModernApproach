#include <stdio.h>

static float calculateTotalProfit(float profitArgument,
                                  float multiplierArgument);

int main(void) {
  float profit = 125.0f; // Yearly profit
  float multiplier = 2.0f;

  float myProfit = calculateTotalProfit(profit, multiplier);
  printf("The profit we made: $%.2f",
         myProfit); // .p syntax indicating presicion

  return 0;
}

static float calculateTotalProfit(float profitArgument,
                                  float multiplierArgument) {
  return profitArgument * multiplierArgument;
}
