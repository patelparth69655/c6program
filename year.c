/*
// write a programe to convert given days into years,remaining months and remaining days 
steps 
 1. create variable years ,months and days
 2. take input of days from user and store it 
 3. calculate years using formula years = days / 365
 4. calculate months using formula months = (days -(years * 365))/30
 5. calculate days using formula  days = days - (years * 365) - (months * 30)
 6. display years,months and days
*/

#include<stdio.h>
void main ()
{
    int years,months,days;
    printf("enter the days");
    scanf("%d",&days);
    years = days / 365;
    months = (days -(years * 365))/30;
    days = days - (years * 365) - (months * 30);
    printf("years = %d months = %d days = %d",years,months,days);


}