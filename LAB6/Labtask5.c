#include <stdio.h>

void sum(int n);

int main()
{
    int n,result;
    printf("Print the number upto which you want to take the sum: \n");
    scanf("%d", &n);
    sum(n);
    
}

void sum(int n)
{
    int  j =0;
    while (n >= 1)
    {
        j = j+n;
        n--;
    }
    printf("%d", j);
    if( n >= 1)
    {
        sum(n);
    }



    }
       


