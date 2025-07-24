#include <stdio.h> //program to check the number is even or not 
int main()
{
    int n1;
    printf("enter a number");
    scanf("%d",&n1);
    //n1%2==0? printf("even"):printf("not even ");
    //n1%2 (n>0 ? printf("Positive odd\n") printf("number is even\n");)

    n1%2? printf("oddd\n"):printf("even\n");
    return 0;
}
/*#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &n1, &n2);

    n1 > n2 ? printf("n1\n") : printf("n2\n");

    // printf("Largest number is %d\n", lar);

    return 0;
}
*/