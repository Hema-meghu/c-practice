#include<stdio.h> //to check the greater number
int main() /*
{
    int n1,n2;
    printf("enter 2 number ");
    scanf("%d%d", &n1,&n2);
    n1>n2 ? printf("n1 is greater\n"):printf("n2 is greater\n");
    return 0;
}*/

{
    int n1,n2,lar;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);

    //n1>n2? (lar=n1):(lar=n2); we can use this also 
    lar=n1>n2? n1:n2; 
    printf ("the greater number is %d", lar);
    return 0;
}