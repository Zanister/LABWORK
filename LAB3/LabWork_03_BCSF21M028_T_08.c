#include<stdio.h>
 
int main()
 
{
 
     int number,sum=0, i=1;
 
     printf("Enter a positive integer: ");
     scanf("%d",&number);
     while(i<number)
     {
        if(number%i==0)
           {
               sum=sum+i;
 
           }
         i++;
     }
 
      if(sum==number)
           printf("%d is a perfect number",i);
     else
          printf("%d is not a perfect number",i);
     return 0;
 
}
