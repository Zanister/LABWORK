#include <stdio.h>
int main()
{
    char salsa[5][20] = {"mild salsa", "medium salsa", "sweet salsa", "hot salsa", "zesty salsa"};
    int price[5];
    char m[20];
    int y, i, tot, h, l;
    

    printf("Enter the month:");
    gets(m);

    for(i = 0; i < 5; i++)
    {
        printf("Enter the jars sold for %s:", salsa[i]);
        scanf("%d", &price[i]);
    }

    printf("Sales report of %s\n", m);
    
    for(i = 0; i < 5; i++)
    {
        printf("%s:", salsa[i]);
        printf("%d\n", price[i]);
        tot += price[i];
    }

    printf("Total sales is: %d\n", tot);

    int ren = tot*550;
    printf("Total revenue by these sales (Rs.): %d\n", ren);

    int hgh=price[0];
    int idx=0;
     for(int i = 1; i < 5; i++){       
            if(hgh < price[i]){               
               hgh=price[i];
               idx=i;
        }

    }

    printf("The highest sold is:%s\n", salsa[idx]);

    int low=price[0];
    int id=0;
     for(int i = 1; i < 5; i++){       
            if(low > price[i]){               
               low=price[i];
               id=i;
        }

    }
    
    printf("The lowest sold is:%s\n", salsa[id]);

    return 0;
}