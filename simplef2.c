/*
// a programe to findout given number is even or odd
 steps   
   1. create variable number and reminder
   2. take input number from user 
   3. get reminder by dividing it with 2
       reminder  = number % 2
   4. if reminder is 1 or -1
    then display message  number of odd
   5. if reminder is 0
    then display message number of even
*/
 #include<stdio.h>
 void main ()
 {
  int number,reminder;
  printf("enter number");
  scanf("%d",&number);
  reminder  = number % 2;
  printf("%d",reminder); 
  if (reminder == 1 || reminder == -1) 
  {
    printf("\nnumber is odd");
  }
  if (reminder == 0)
  {
    printf("\nnumber is even");
  }



 }