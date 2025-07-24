#include<stdio.h>
int main()
{
int n1 = 10, n2 = 20, n3 = 30;

if (n1 > n2 && n1 > n3)
{
    printf("Lar is n1\n");
}
else if (n2 > n1 && n2 > n3)
{
    printf("Lar is n2\n");
}
else
{
    printf("Lar is n3\n");
}

}