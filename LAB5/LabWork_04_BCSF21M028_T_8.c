#include <stdio.h>

int main(){
int n=10;
for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10-i;j++){
        
             printf("  ");
        }
        for(int k=1; k<=i;k++)
        {
            if (i==1){
                printf(" * ");
            }
            if (i!=1 && i!=6){
                printf(" %d",n);
            }
            if (i==6){
                printf(" *");
            }
        }
        n--;
        printf("\n");
    }
    return 0;
}


