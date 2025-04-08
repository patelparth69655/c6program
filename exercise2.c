/*
write a program to findout elder brother from to brother age.
steps 
 1. create a variable brother_1 and brother_2
 2. take input of age of brother_1 from user 
 3. take input of age of brother 2 from user
 4. chek if the age of brother_1 is > then age of brother_2
      and then display  brother_1 is elder brother  
 5. otherwise
      Display the brother_2 is elder brother 
*/

#include<stdio.h>
void main()
{
  int brother_1,brother_2;
  printf("enter the age of brother 1:");
  scanf("%d",&brother_1);
  printf("enter the age of brother 2:");
  scanf("%d",&brother_2);
  if(brother_1>brother_2)
   {
    printf("brother 1 is elder brother");
   }
    else
   {
    printf("brother 2 is elder brother");
   }

}