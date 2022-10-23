#include<stdio.h>
void main(){
    int n;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=i+1;k<=n;k++){
            printf("*");
        }
        for(int k=i;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
}