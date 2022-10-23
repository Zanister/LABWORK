#include <stdio.h>
int main()
{
    int option,roll,pf,la,eng,ps,ist,dld,obtainedmarks,totalmarks;
    float percentage;
    char name[20];
    do
    {
    printf("1-Enter Your roll number \n");
    printf("2-Enter your Name \n");
    printf("3-Marks in PF> \n");
    printf("4-Marks in LA> \n");
    printf("5-Marks in Eng> \n");
    printf("6-Marks in PS> \n");
    printf("7-Marks in Ist> \n");
    printf("8-Marks in DLD> \n\n");

    printf("Enter your credentials(Choose from 1-8. Enter 0 to show Result)\n");
    scanf("%d", &option);

        if (option == 1){
            printf("Enter your roll number: ");
            scanf("%d", &roll);
        }
        else if(option == 2){
            
            printf("Enter name: ");
            scanf(" %s", name);
        }
        else if (option == 3)
         {  
             printf("Marks in PF: ");
            scanf("%d", &pf); }
        else if (option == 4)
           { 
            printf("Marks in LA: ");
            scanf("%d", &la);}
        else if (option == 5)    
          {
            printf("Marks in English: ");
            scanf("%d", &eng);
          }
        else if (option == 6)
         {  
            printf("Marks in Pakistan studies: ");
            scanf("%d", &ps);
         }        
         else if (option == 7)
         { 
            printf("Marks in Islamiyat: ");
            scanf("%d", &ist);
         }       
        else if (option == 8)
         {  
            printf("Marks in DLD: ");
            scanf("%d", &dld);
         }
    } while (option !=0);
 
 totalmarks = 600;
 obtainedmarks = (pf+la+eng+ps+ist+dld);
 percentage = ((float)obtainedmarks / totalmarks) * 100;

  if(percentage >= 85)  { 
    printf("Hey, %s, you got A grade", name); }
   
    else if(percentage >= 80)  {
         printf("Hey, %s, you got A- grade", name); }
    
    else if(percentage >= 75)  { 
        printf("Hey, %s, you got B+ grade", name); }
    
    else if(percentage >= 70)  {
         printf("Hey, %s, you got B grade", name); }
    
    else if(percentage >= 65)  { 
        printf("Hey, %s, you got B- grade", name); }
    
    else if(percentage >= 60)  { 
        printf("Hey, %s, you got C+ grade", name); }

    else if(percentage >= 58)  { 
        printf("Hey, %s, you got C grade",name); }

    else if(percentage >= 55)  { 
        printf("Hey, %s, you got C- grade", name); }

    else if(percentage >= 50)  {
         printf("Hey, %s, you got D grade", name); }
    
    else  { 
        printf("Hey, %s, you got F grade", name);
     }   
    return 0;
    
}
