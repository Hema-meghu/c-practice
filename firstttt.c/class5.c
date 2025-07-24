#include<stdio.h>
int main()
{
    int num1, num2;
    printf("enter 2 numbers: ");
    scanf("%d%d", &num1,&num2);

    if (num1>num2)
    {
        printf("num 1 is greater --> %d\n", num1);
    }
    else{
        printf("Num2 is greater--> %d\n,",num2);
    
    }
return 0;
}