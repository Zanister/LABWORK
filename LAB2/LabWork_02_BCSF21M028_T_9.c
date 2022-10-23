#include <stdio.h>

int main()
{int n,i;
    printf("Enter the cost price: ");
    scanf("%d", &n);
    printf("Enter the selling price: ");
    scanf(" %d", &i);
    if(n<i){
        printf("profit is %d", i-n);
    }
    else{
        printf("loss is %d", n-i);
    }
}