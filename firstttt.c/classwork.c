#include<stdio.h>
int main()

{
    int num;
    printf("enter a numnber");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("the number  %d is even\n",num);
    
    }
    else
    {
     printf("the number is %d is odd\n",num);
    }

    return 0;
}


