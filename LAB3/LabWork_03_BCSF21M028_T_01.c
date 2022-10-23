#include <stdio.h>
void main()
{
    int n, k = 1;
    printf("Enter the number of rows");
    scanf("%d", &n);
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",x);
            x=x+k;
         }
        x=1;
        printf("\n");
        k=k+1;
    }
}