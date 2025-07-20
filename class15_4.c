#include<stdio.h> //nested if else program 
int main()
{
    int num1,num2,num3;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("Largest is num1\n");
        }
        else
        {
            printf("largest is num3\n");
        } 
    }
    else
    {
        if (num2>num3)
        {
            printf("largest is num2\n");
        }
        else
        {
            printf("largest is num3\n");
        } 
    }
    return 0;
}