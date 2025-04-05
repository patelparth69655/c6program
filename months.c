/*
    // a programe  of months and months name 
      steps
      1. create a variable months 
      2. take input months from user
      3. if months is 1 then message diplay of january
      4. if months is 2 then message diplay of febuary
      5. if months is 3 then message diplay of march
      6. if months is 4 then message diplay of april
      7. if months is 5 then message diplay of may
      8. if months is 6 then message diplay of  june
      9. if months is 7 then message diplay of july
      10.if months is 8 then message diplay of augest
      11.if months is 9 then message diplay of september
      12.if months is 10 then message diplay of octomber
      13.if months is 11 then message diplay of november
      14.if months is 12 then message diplay of december
      15.if months is < 1 then display the message cannot be a neagative or 0
      16 if months is > 12 then display the message cannot be a neagative or 0
      17.
*/

#include<stdio.h>
void main()
{
    int month;
    printf("enter the month");
    scanf("%d",&month);
    if(month == 1)
   {
     printf("the month is january");
   }
    if(month == 2)
   {
    printf("the month is febuary");
   }
   if(month == 3)
   {
    printf("the month is march");
   }
   if(month == 4)
   {
    printf("the month is april");
   }
   if(month == 5)
   {
    printf("the month is april");
   }
   if(month == 6)
   {
    printf("the month is june");
   }
   if(month == 7)
   {
    printf("the month is july");
   }
   if(month == 8)
   {
    printf("the month is augest");
   }
   if(month == 9)
   {
    printf("the month is september");
   }
   if(month == 10)
   {
    printf("the month is october");
   }
   if(month == 11)
   {
    printf("the month is november");
   }
   if(month == 12)
   {
    printf("the month is december");
   }
   if(month <= 0)
   {
    printf("the month cannot be zero or neagative ");
   }
   if(month > 12)
   {
    printf("the month cannot be possible after 12");
   }


}