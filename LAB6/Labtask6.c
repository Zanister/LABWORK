#include <stdio.h>

void strong(int n);
int main(){

    int n;
    printf("Enter the number having 3 digits: ");
    scanf("%d", &n);
   while (n<100 || n>999)
    {
        printf("invalid input enter again: ");
      scanf("%d", &n);
    }

    strong(n);

}
void strong(int n){

    int a,b,c,d,i,k=1,p=1,l=1,str;
    c = n%10;
    d = n/10;
    b = d%10;
    a = n/100;
    printf("%d %d %d", a,b,c);
    for (int i=1;i<=a;i++)
    {
        k =i*k;
    }
    for (int i=1;i<=b;i++)
    {
        p =i*p;
    }
        for (int i=1;i<=c;i++)
    {
        l =i*l;
    }
    str = k+p+l;
    if (str == n){
        printf("The number is strong ");
    }
    else
    printf("The number is not strong ");
}


