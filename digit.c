/*
// write a program to reverse two digit given amount 
 steps
   1. create a variable amount & last_digit,and  take amount from user
   2.get last digit of amount and store it 
     last_digit = amount % 10
   3. get first digit  of amount and store it 
     first_digit = amount / 10
   4.combine last digit and first digit 
    amount = (last_digit * 10) + first_digit
*/
#include<stdio.h>
void main()
{
    int amount,first_digit,last_digit;
    printf("enter amount ");
    scanf("%d",&amount);
    last_digit = amount % 10;
    first_digit = amount / 10;
amount = (last_digit * 10) + first_digit;
printf("reverse amount = %d",amount);
}
