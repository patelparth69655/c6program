/*
write a programe to accept time in 24 hours formate and display it in 12 hours formate 
 steps
  1. create variable hours 
  2. take input from user
  3. chek if hours is above 11 
     then substract 12 from hours  and display hours with PM word 
  4. otherwise 
     display  hours with AM word
*/

#include<stdio.h>
void main ()
{
  int hours;
  printf("enter hours");
  scanf("%d",&hours);
  if(hours>11)
  {
    hours = hours - 12;
    printf("%d PM",hours);
  }
   else
   {
    printf("%d AM", hours);

   }


}