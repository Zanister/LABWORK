#include <stdio.h>

//Task 1
void intersection(char arr1[], char arr2[])
{
    int i;
    for(i = 0; arr1[i] != '\n'; i++)
    {
        if(arr1[i]==arr2[i]){

        printf("%c", arr1[i]);
        
    }
}

for (i = 0; arr2[i] != '/n'; i++)
{
    if (arr2[i]==arr1[i]){
        printf("%c", arr2[i]);
    }
}
}
int main(){
    {
    char arr1[5] = "bcjhk";
    char arr2[5] = "mnchg";
    intersection(arr1,arr2);
    }
}

//Task 2

void most(char arr[])
{
    int i;
    char c;
    for(i = 0; arr[i] != '\n'; i++)
    {
        if (arr[i] == arr[i+1])
        {
            c = arr[i];
        }
    }
    printf("The most ocuring char is %c", c);
}
int main()
{
    char arr[40];
    printf("Enter the string: " );
    gets(arr);
    most(arr);
}


Task3
void Lo(int arr[][3])
{
    int sum1= 0, sum2 =0
    for (int i =0 ;i< 3; i++)
    {
        sum1 += arr[i][i]
        sum2 += arr[i][2-i]
    }
    if sum1 != sum2
    {
        printf("Not Lo shu")
    }
    else 
    printf("Lo shu")
    
    for (i = 0; i < n; i++ ){
        int rowsum = 0,colsum =0;
        for (j = 0; j< 3; j++)
        {
           rowsum += arr[i][j];
           colsum += arr[j][i]; 
        }
        

    }
        if (rowsum1 != colsum2)
    {
        printf("Not Lo shu")
    }
    else 
    printf("Lo shu")
        
}
int main()
{
    int arr[3][3] = {{4,9,2},{3,5,7},{8,1,6}};
    Lo(arr);
}