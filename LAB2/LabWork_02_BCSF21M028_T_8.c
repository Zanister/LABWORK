#include<stdio.h>

int main()
{
char a, b;
printf("insert the first letter of the main colour:\n");
scanf("%c",&a);
printf("type another character in one of the three primary colours.:\n");
scanf(" %c",&b);
if ((a == 'R' && b == 'B') || (a == 'B' && b == 'R')){
    printf("The result is purple.");
}
else if ((a == 'R' && b == 'Y') || (a == 'Y' && b == 'R')) {
    printf("The result is orange.");
}
else if ((a == 'B' && b == 'Y') || (a == 'Y' && b == 'B')){
    printf("The result is green.");
}
else printf ("The colour name you entered is incorrect.");
    
    return 0;
}
