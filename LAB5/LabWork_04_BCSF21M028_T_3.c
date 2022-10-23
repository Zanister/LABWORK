#include <stdio.h>

void printsquare(int size, char ch);

int main(){

int size;
char ch;
printf("Enter the size of square: ");
scanf("%d", &size);
printf("Enter the character to be printed: ");
scanf(" %c", &ch);
printsquare(size, ch);
}


void printsquare(int size, char ch){

int i,j,k,l;
for (i=1;i<=size;i++)
{
    for (j = 1; j <= size; j++)
    {
        if(i==1||i==size||j==1||j==size){

        printf("%c", ch);
        printf(" ");
        }
        else 
            printf("  ");
    }
    printf("\n");
    }

}
 