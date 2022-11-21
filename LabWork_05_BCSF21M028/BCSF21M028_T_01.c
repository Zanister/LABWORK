#include <stdio.h>

void trueFalse(int num);

int main() {
  int num;
  printf("Enter numbers of nots(!): ");
  scanf("%d", &num);
  while(num < 0) {
    printf("Enter the number of nots again: ");
    scanf("%d", &num);
  }
    trueFalse(num);
  return 0;
}

void trueFalse(int num) {
  if(num % 2 == 0) {
    printf("True");
  }
  else {
    printf("False");
  }
}


