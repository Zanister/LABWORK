#include <stdio.h>
int main()
{
    int n;
    printf("Number of books you have purchased: ");
    scanf("%d", &n);
    if (n==0)
    {
        printf("You have earned zero points");
    }
    else if (n==1)
    {
        printf("you have earned 5 points");
    }
    else if (n==2)
    {
        printf("You have earned 15 points");
    }
    else if (n>3)
    {
        printf("You have earned 30 points");
    }
    
}