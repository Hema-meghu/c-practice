//create the program to find the positive or negative number
#include <stdio.h>
int main()

{
int num1;
printf("enter a number:");
scanf("%d",&num1);

if (num1>0)
{
    printf("number is positive\n");
}
else if(num1<0)
{
    printf("num is negative\n");
}
else
{
    printf("number is zero\n");
}
return 0;
}