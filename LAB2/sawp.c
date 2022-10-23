#include <stdio.h>
#include <math.h>
 int main(void) {
   int n,mod,a,b,c,d,i,x,product=1;
   printf("Enter Five digit Number: ");
   scanf("%d", &n);
   while ((n<10000 || n > 99999 ))
   {
   printf("Invalid Input. Enter a Five digit Number: ");
   scanf("%d", &n);
   }
   for (i = 5; i >= 1; i--)
   {
      a = n/(pow(10,i-1));
      x = (pow(10,i-1));
      n = n % x;
      printf("%d  ", a);
      if (i==5 || i==1)
      {
         product = product * a;
      }
   }
   printf("Product is: %d", product);

return 0;

   }
 