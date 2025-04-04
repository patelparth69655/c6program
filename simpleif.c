/*a programe of simple f (decision making)

// write a programe to findout cube of given positive number

// steps  
   1. create  variable number and cube
   2. take input from user in store it number 
   3. chek if the number is positive or  negative 
      1 .if number is negative then convert to positive      
      2. convert negative number into positive number
   4. calculate cube from using formula cube = number * number * number
   5. display cube 
   */

#include<stdio.h>
void main()
{
 int number,cube;
 printf("enter the number");
 scanf("%d",&number);
  if(number<0)
  {
    number = 0 - number ;
    printf("\n number was negative and convert into postive");
  } 
  cube = number * number * number;
  printf("\ncube = %d",cube);


}
 