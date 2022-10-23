#include <stdio.h>
int main()
{
    int n, g, total = 0, avg;
    printf("enter the number:");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        printf("\nenter the grade:");
        scanf("%d", &g);

        while(g < 0 || g > 100)
        {
            printf("invalid input!\n");
            printf("please enter your grade again(b/w 0 and 100):");
            scanf("%d", &g);
        }

        total = total + g;
    }

    avg = total / n;
    printf("the class average is: %d", avg);
    return 0;
}