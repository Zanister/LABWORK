#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,n,rows,cols;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    x=n;
    y=n;
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<n*2;cols++)
        {

            if(cols>x && cols<y)
            
            {
            
                printf(" ");

            }
                else

            {
                printf("*");
            }
        }
    x--;
    y++;
    printf("\n");
    }
    return 0;
}
    
  