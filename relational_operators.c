// relational operators
#include<stdio.h>
void main()
{
    int  a,b,result;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    result = a == b;
    printf("\n%d = %d == %d", result,a,b);
    result = a != b;
    printf("\n%d = %d != %d", result,a,b);
    result = a < b;
    printf("\n%d = %d < %d", result,a,b);
    result = a > b;
    printf("\n%d = %d > %d", result,a,b);
    result = a <= b;
    printf("\n%d = %d <= %d", result,a,b);
    result = a >= b;
    printf("\n%d = %d >= %d", result,a,b);

}