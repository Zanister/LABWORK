#include <stdio.h>
 
int satisfy(int, int, int, int);

 int main()
 {
    int a,b,c,d;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    satisfy(a,b,c,d);

 }

 int satisfy(int a, int b, int c, int d){
if ((a^3)+(b^3)+(c^3)==(d^3)){

    printf("The condition is satisfied\n");
    return 0;


}
else
printf("The condition is not satisfied \n");
return -1;

 }
 