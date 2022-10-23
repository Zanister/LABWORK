#include<stdio.h>
int main()
{
	int seconds, mins, hours, seconds2;
	printf("Enter the number of seconds: \n");
	scanf_s("%d", &seconds);
	hours = seconds / 3600;
	mins= (seconds - (3600 * hours))/60;
	seconds2= (seconds - (3600 * hours) - (mins * 60));
	printf("%d seconds = %d hours: %d minutes: %d seconds", seconds, hours, mins, seconds2);

}