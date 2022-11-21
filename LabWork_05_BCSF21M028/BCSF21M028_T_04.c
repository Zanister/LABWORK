#include <stdio.h>

float calculateRetail(float, float);

int main() {
  float wholesaleCost;
  float markupPercentage;

  printf("Enter the wholesale cost: ");
  scanf("%f", &wholesaleCost);
  while(wholesaleCost < 0) {
    printf("Invalid input. Enter again: ");
    scanf("%f", &wholesaleCost);
  }
  printf("Enter the markup percentage: ");
  scanf("%f", &markupPercentage);
  while(markupPercentage < 0) {
    printf("Invalid  input. Enter again:  ");
    scanf("%f", &markupPercentage);
  }
  float result = calculateRetail(wholesaleCost, markupPercentage);
  printf("%.2f", result);
  return 0;
}
float calculateRetail(float wholeSale, float markup) {
  markup = markup / 100;
  markup = markup * wholeSale;
  float retailPrice = wholeSale + markup;
  return retailPrice;
}
