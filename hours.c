/* write a program to convert given hours into minutes
   1.create variable hours and minutes
   2.take hours as input from user.
   3.convert  hours into  minutes using formula minutes = hours * 60
   4.display minutes
*/
 
#include<stdio.h>
void main()
{
int hours,minutes;
 printf("enter the hours");
 scanf("%d",&hours);
 minutes = hours * 60;
 printf("minutes = %d",minutes);
   
}