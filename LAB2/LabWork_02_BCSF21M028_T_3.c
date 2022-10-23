#include<stdio.h>
int main()
{
	int multiple,lwr,upr;
	printf("Enter the number: \n");
	scanf_s("%d", &multiple);
	printf("Enter lower limit: \n");
	scanf_s("%d", &lwr);
	printf("Enter upper limit: \n");
	scanf("%d",&upr);
	while (upr<lwr)
	{
	printf("Invalid input. Please enter a number greater than lower limit: ");
	scanf("%d",&upr);
	}
	int i=0;
	while (lwr<=upr)
		{
			if (lwr%multiple==0){
			
			i++;
			}	
			lwr++;
		}
		
		printf("Number of multiples: %d" ,i);
}
		
		

