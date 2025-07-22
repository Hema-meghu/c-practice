#include<stdio.h>
int main()
{
    char ch;
    printf("Enter one character");
    scanf("%c", &ch);

    switch(ch)
    {
        case '0'...'9':
        printf("Its a digit\n");
        break;
        case 'A'...'Z':
        printf("It is upper case alphabet\n");
        break;
        case 'a'...'z':
        printf("It is lower case alphabet\n");
        break;
        default:
        printf("Any other character\n");

    }
}