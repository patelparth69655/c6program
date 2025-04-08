/*
write a programe findout  profit or loss amount from cost price and sales price
steps
 1. create variable  cost_price,sales_price,differnce 
 2.take cost_price  as input from user 
 3.take  sales_price as input from user
 4.  differnce = sale_price - cost_price
 5. calucate profit or loss 
  if differnce is above 0 
    display differnce  as profit 
otherwise
     display differance as loss 
*/

#include<stdio.h>
void main ()
{
     int cost_price,sale_price,difference;
     printf("enter cost price of product");
     scanf("%d",&cost_price);
     printf("enter sales price of product");
     scanf("%d",&sale_price);
     difference = sale_price - cost_price;
     if(difference>0)
     {
        printf("profit = %d",difference);
     }
else
    {
    printf("loss = %d", difference);
    } 

}

    