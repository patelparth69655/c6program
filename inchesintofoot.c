/*
// write a programe to convert given inches foot and remaining inches
 input 
 1. create variable inches and foot 
 2. accpet input of inches from user 
 3.calcuate inches into foot and remaining inches using formula 
   formula = foot = inches * 0.0833 
 4. calcuate remaining inches using formula inches = inches -(Foot / 0.0833)
 5.display inches and foot
*/

#include<stdio.h>
void main()
{
    float inches,foot;
    printf("enter the inches");
    scanf("%f",&inches);
    foot = inches * 0.0833 ;
    inches =  inches -(foot / 0.0833);
    printf("foot = %.2f inches = %f" ,foot,inches);

}
