#include <stdio.h>//Code to Find the Middle Number with 3 distinct nuumbers

int main()
{
    int a, b, c;

    printf("Enter 3 distinct numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b))
    {
        printf("Middle number is: %d\n", a);
    }
    else if ((b > a && b < c) || (b > c && b < a))
    {
        printf("Middle number is: %d\n", b);
    }
    else
    {
        printf("Middle number is: %d\n", c);
    }

    return 0;
}
