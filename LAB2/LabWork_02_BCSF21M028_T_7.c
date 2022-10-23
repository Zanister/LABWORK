#include <stdio.h>
 int main()
 {
    int n;
    int i = 0;
    printf("Enter the integers: ");
    n=1;
    while (n!=0)
    {
        scanf("%d", &n);
           if (n<0)
           {
            printf("Wrong attempt, You have entered a negative number\n Press enter and try again:\n");
            i++;
           }
    }
    printf("total wrong input:%d",i);
    
 }