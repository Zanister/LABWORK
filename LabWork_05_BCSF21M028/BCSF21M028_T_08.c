#include <stdio.h>
double getSales(int);
void findHighest(double,double, double, double);
int main() {

  int area1 = 1; 
  printf("Enter the quaterly sales in North East: ");
  double northEast = getSales(area1);

  int area2 = 2;  
  printf("Enter the quaterly sales in South East: ");
  double southEast = getSales(area2);

  int area3 = 3;  
  printf("Enter the quaterly sales in North West: ");
  double northWest = getSales(area1);

  int area4 = 4;  
  printf("Enter the quaterly sales in South West: ");
  double southWest = getSales(area1);

  findHighest(northEast, southEast, northWest, southWest);
  return 0;
}

double getSales(int num) {
  double sales;
  scanf("%lf", &sales);
  while(sales < 0) {
    printf("Invalid input. Enter again: ");
    scanf("%lf", &sales);
  }
  return sales;
}

void findHighest(double northEast, double southEast, double northWest, double southWest) {
  if((northEast >= southEast) && (northEast >= northWest) && (northEast >= southWest)) {
    printf("Highest Quarterly Sales\n");
    printf("North East: %lf", northEast);
  }
  else if((southEast >= northEast) && (southEast >= northWest) && (southEast >= southWest)) {
    printf("Highest Quarterly Sales\n");
    printf("South East: %lf", southEast);
  }
  else if((northWest >= northEast) && (northWest >= southEast) && (northWest >= southWest)) {
    printf("Highest Quarterly Sales\n");
    printf("North West: %lf", northWest);
  }
  else {
    printf("Highest Quarterly Sales\n");
    printf("South West: %lf", southWest);
  }
}
