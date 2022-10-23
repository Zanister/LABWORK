#include <stdio.h>
int wd(int year, int month, int day)
{
    int wday = 0;
    wday = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5)
               + (365 * (year + 4800 - ((14 - month) / 12)))
               + ((year + 4800 - ((14 - month) / 12)) / 4)
               - ((year + 4800 - ((14 - month) / 12)) / 100)
               + ((year + 4800 - ((14 - month) / 12)) / 400)
               - 32045)
        % 7;
    return wday;
}
int main()
{
    int day,month;
    int year;
    printf("Enter the date in order od DD:MM:YY: ");
    scanf("%d %d %d", &day, &month, &year);
    while((day > 31|| month > 12||year < 1590) || (day==31 && month == 2 || day==30 && month ==2 || day==31 && (month==4 || month==6 || month==9 || month == 11)) || (day==29 && month==2 && (!(year%400!=0 ||(year%4==0 && year%100!=0)))))
    {
        printf(" date is invalid\n Enter Again: ");
        scanf("%d %d %d", &day, &month, &year);
    } 
printf("Your date is valid\n");

//Array for  Months
char mont[12][10]={"January","February","March","April","May","June",
 "July","August","September","October","November","December"};
//Array and function for weekdays
int wDayNo = 0;
wDayNo = wd(year, month, day);
char dayNames[7][12] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };


int last=day%10;
if (last== 0 || last == 4 || last == 5 || last == 6 || last == 7 || last == 8 || last == 9 || day == 11 || day == 12 || day == 13)
{
    printf("%s, %dth, %s, %d",dayNames[wDayNo], day, mont[month-1], year);
}
else if (last == 1)
{
    printf("%s, %dst %s, %d",dayNames[wDayNo], day, mont[month-1], year);
}
else if (last == 2){
    printf("%s, %dnd %s, %d",dayNames[wDayNo], day, mont[month-1], year);
}
else if (last == 3){
    printf("%s, %drd %s, %d",dayNames[wDayNo], day, mont[month-1], year);
}
 
    return 0;
}
