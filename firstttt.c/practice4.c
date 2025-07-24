#include <stdio.h>
int main()
{
    int num=10;

    printf("enter an integer: ");
    scanf("%d",&num);

    if (num>5) //condition
    {
        printf("Yes num is greater than 5\n");

    }
    else
    {
        printf("Num is less than 5\n");
    }
    return 0;
}