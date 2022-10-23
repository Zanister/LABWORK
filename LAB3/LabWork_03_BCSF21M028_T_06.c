#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k=1;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        k =i*k;
    }
    printf("Factorial is %d", k);
  
    return 0;
}
    
  