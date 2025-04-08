/*
 write a programe to findout whether given year is millennium years or not.
  steps 
   1. crate a variable years
   2. take input form user and store it 
   3. calcuate  millennium years using formula 
       millennium years = years / 1000
   4. chek if  millennium years < 1000
      then display  message of the years 
      have not formed a millennium years 
   5. otherwise
     display the message of 
        calcuate millennium years 
*/
 
 #include<stdio.h>
 void main()
 {
    int years,millennium_years;
    printf("enter the years");
    scanf("%d",&years);
    millennium_years = years / 1000;
    if(years< 1000)
 {
    printf("display  message of the years have not formed a millennium years ");
 }
  else
{
    printf("millennium years = %d", millennium_years);
}



 }