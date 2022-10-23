#include <stdio.h>
int main()

{
    int n, first, last,mid;
    printf("Enter the number = ");
    scanf("%d", &n);
    last = n % 10;
    printf("%d", n/10);
    while(n >= 10)
    {
        mid = n % 10;
        n = n / 10;
    }

    first = n;
    printf("first digit = %d and last digit = %d\n, and %d", first,last,mid);
    return 0;
}