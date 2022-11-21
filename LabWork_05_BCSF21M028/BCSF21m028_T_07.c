#include <stdio.h>
int totalpopulation(int num);

int main() {
  int population;
  int born;

  printf("Enter the world population: ");
  scanf("%d", &population);
  while(population < 1) {
    printf("Invalid input. Enter again: ");
    scanf("%d", &population);
  }
  printf("Enter the number of people born in a year: ");
  scanf("%d", &born);
  while(born < 0) {
    printf("Invalid Input, Enter again: ");
    scanf("%d", &born);
  }
  int total = totalpopulation(born);
  total = total + population;
  printf("Total population after 3 decades will be: %d", total);
}
int totalpopulation(int num) {
  int population = num * 365;
  return population;
}
