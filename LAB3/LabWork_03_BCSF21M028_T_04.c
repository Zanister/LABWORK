#include <stdio.h>
int main()
{
  int n, cols, rows;

  printf("Enter number of rows: ");
  scanf("%d", &n);

  for (rows = 1; rows <= n; rows++)
  {
    for (cols = 1; cols <= n-rows; cols++)
      printf(" ");

    for (cols = 1; cols <= 2*rows-1; cols++)
      printf("*");

    printf("\n");
  }

  for (rows = 1;rows <= n - 1; rows++)
  {
    for (cols = 1; cols <= rows; cols++)
      printf(" ");

    for (cols = 1 ; cols <= 2*(n-rows)-1; cols++)
      printf("*");

    printf("\n");
  }

  return 0;
}
    
  