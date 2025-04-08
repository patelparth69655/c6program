/*
a programe to findout whether month has 30daysor 31days or 28days
steps 
 1. create a variable month
 2. take input from user and store it 
 3. chek if this month has 28 days 
  if month = 2 
     display the month has 28 days
 4. chek if this month has 31 days 
  if month == 1 month == 3  month == 5 month == 7 or month == 8 or month == 10 or month == 12
     display the month has 28 days
 5. otherwise 
    display the month has 30 days 
*/
 #include<stdio.h>
 void main ()
 {
   int months;
   printf("enter the month");
   scanf("%d",&months);
   if (months == 2)
    {
      printf("months has 28 or 29 days");
      return;
    }
   if("months == 1||months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12")
    {
      printf("months has 31 days");
    }
   else 
    {
      printf("months has 30 days");
    }

   }