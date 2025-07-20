//finding the average of 3 numbers 
#include<stdio.h>

int main()
{
    int num1,num2,num3;

    printf("enter 3 numbers");

    scanf("%d%d%d",&num1,&num2,&num3);
// implicit- c automatically converts the type and explicit - manually tell the comppiler to convert 
    float avg= (float) (num1+num2+num3)/3; //sum will get in decimals so we are using float and we've to use explicit  typecasting we should use 
    printf("average is %f\n",avg);

}