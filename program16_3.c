#include<stdio.h>
int main()
{
    char ch;
    printf("enter char: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'A':
        case'a':
        printf("Character is A\n");
        break;
        case 'B':
        case 'b':
        printf("Character is B\n");
        break;
        case 'C':
        case 'c':
        printf("Character is C\n");
        break;
        case 'D' :
        case 'd':
        printf("Character is D\n");
        break;
        default:
        printf("Character is not A,B,C or D/\n"); 

    }
}