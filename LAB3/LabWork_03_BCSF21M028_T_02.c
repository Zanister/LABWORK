#include <stdio.h>
 
 int main()
 {
    int rows,cols,n,space;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (rows = 1; rows <= n; rows++)
    {
        for (space=1; space <= n-rows; space++)
        {
            printf(" ");
        }      
        for (cols =2;cols<=2*rows-1;cols++){
            printf("*");
        }
        printf("\n");    
    }

    
    return 0;

 }
    
  