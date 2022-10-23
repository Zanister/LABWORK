#include <stdio.h>

void ams(int n);

int main()
{

   int n;
   printf("Enter the number having 3 digits: ");
   scanf("%d", &n);
   while (n < 100 || n >= 999)
   {
      printf("invalid input enter again: ");
      scanf("%d", &n);
   }
   ams(n);
}

void ams(int n)
{

   int a, b, c, d, e, f, am;
   a = n % 10;
   d =n/10;
   b = d % 10;
   c = d / 10;
   printf("%d %d  %d\n", c, b, a);
   
    if ((a * a * a) + (b * b * b) + (c * c * c) == n)
   {
      printf("The number is amstrong");
   }
   else
      printf("Number is not amstrong ");
}
