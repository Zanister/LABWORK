#include <stdio.h>
#include <string.h>

int main()
{
    int opt;
    printf("..THIS PROGRAM WILL MAKE YOUR DIET HEALTHY\n\n\n");
    printf("Choose Your condition below.\n");
    printf("1. I am Obese.\n");
    printf("2. I have high blood pressure.\n");
    printf("3. I have High Chlesterol\n\n");
    printf("Choose: ");
    scanf("%d", &opt);
    while (opt>3 || opt <1)
    {
        printf("Bro choose a valid Option (1 to 3)\n");
        printf("Choose: ");
        scanf("%d", &opt);
    }

    
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INGREDEINTS TABLE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

             printf("\t\t\t***********************************\n"); 
             printf("\t\t\t************* MENU *********\n"); 
             printf("\t\t\t***********************************\n"); 
             printf("\t\t\t           INGREDIENTS \n"); 
             printf("\t\t\t***********************************\n"); 
             printf("\n"); 
             printf("\t\t\t\t1-Sour cream\n"); 
             printf("\t\t\t\t2-Milk\n"); 
             printf("\t\t\t\t3-Lemon juice\n"); 
             printf("\t\t\t\t4-Butter\n"); 
             printf("\t\t\t\t5-Flour\n"); 
             printf("\t\t\t\t6-Mayonnaise\n"); 
             printf("\t\t\t\t7-Egg\n"); 
             printf("\t\t\t\t8-Oil\n"); 
             printf("\t\t\t\t8-White Bread\n\n"); 
             printf("\t\t\t\tCHOOSE BELOW.\n\n\n"); 
             printf("\t\t\t***********************************\n\n\n"); 



         char * ing[] = {"sour cream,milk,lemon juice,butter,flour,mayonnaise,egg,oil,white bread"};
         char * sub[] = {"yougurt,evaporated milk and water,vinegar,honey mollases or agave nectar,margarine or yougurt,rye or rice flour, cottage cheese and yougurt,cornstarch, arrowroot flour or potato starch or egg whites or large banana (mashed),applesauce,whole grain bread"};

    printf ("ENTER YOUR RECIPIE.\n");
    char in[800];
    if (opt == 1){
        for (int i =0; i <= 10; i++)
        {
        
            printf("Enter Ingredient %d: \n", i);      
            gets(in[i]);
            for (int j =0; j <= 10; j++)
            {
                if (strcmp(in[i],ing[j])){

                        gets(in[i]);

                    }
                else 
                   {printf("Invalid Input. Check the table above\n");
                    gets(in[i]);}


                
            }
            


        

        

        }
    }

}