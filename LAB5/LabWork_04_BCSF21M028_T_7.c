#include <stdio.h>
int main()
{
    int n,num;
    printf("How many numbers do you want to input: ");
    scanf(" %d", &n);
    int counteven = 0;
    int countodd = 0;
    int countzero = 0;
      for(int i = 1; i<=n ;i++)
    {
        printf("Enter the number: ");
        scanf(" %d", &num);

        if (num==0)
        {
            countzero++;
        }
        else if(num%2!=0){
            countodd++;
        }
        else if(num%2==0)
        {
            counteven++;
        }
    }
    printf("Number of odds: %d\n", countodd);
    printf("Number of Evens: %d\n", counteven);
    printf("Number of zeros: %d\n", countzero);
}