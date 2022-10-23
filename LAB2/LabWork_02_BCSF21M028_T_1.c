#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter first number: ");
	scanf_s("%d", &a);
	printf("Enter second number: ");
	scanf_s("%d", &b);
	c = a;
	a = b;
	b = c;
	printf("swapping: first number = %d\n", a);
	printf("swapping: second number = %d", b);
	return 0;
}
