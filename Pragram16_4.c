#include<stdio.h>
int main()
{
    char direction;

    printf("enter your direction:");
    printf("for north press N\n for north press E\n for north press W\n for north press S\n");
    scanf("%c",&direction);

    switch(direction)
    {
        case 'N':
        case 'n':
        printf("You are facing North direction\n");
        break;
        case 'E':
        case 'e':
        printf("You are facing to East direction\n");
        break;
        case 'W':
        case'w':
        printf("You are facing to west direction\n ");
        break;
        case'S':
        case 's':
        printf("You are facing to south direction\n");
        break;
        default:
        printf("Invalid Input");

    }
}