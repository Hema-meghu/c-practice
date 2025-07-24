#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &n1, &n2);

    n1 > n2 ? printf("n1\n") : printf("n2\n");

    // printf("Largest number is %d\n", lar);

    return 0;
}
