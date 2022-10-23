#include <stdio.h>

void showintro();
int getCups(int n);
double ciptoOunces();

int main()
{

    void showintro();
    int getcups();
    double ciptoOunces();
}
void shwointro()
{
    printf("This program converts Cups to ounces \n");
}
int getcups(int n)
{

    printf("ENter the number of cups: ");
    scanf("%d", &n);
    return n;

}
double ciptoOunces(int getcups)
{

    int ounce;
    ounce = getcups * 8; 
    return ounce;

}