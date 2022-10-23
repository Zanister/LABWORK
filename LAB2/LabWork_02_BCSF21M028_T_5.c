#include <stdio.h>
 int main()
 {
    int i,x;
    printf("Enter the number for table:");
    scanf("%d", &i);
    int a=1;
    while (a<=10)
    {
        x=(i*a);
        printf("%d * %d = %d\n",i , a, x);
        a++;
    }
    
 }