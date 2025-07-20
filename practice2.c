#include <stdio.h>

int main()
{
    char ch;       // by default it will store garbage value.
    int num;       // by default it will store garbage value.
    float fnum;    // by default it will store garbage value.
    double dnum;   // by default it will store garbage value.

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Added space before %c to catch whitespace

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float value: ");
    scanf("%f", &fnum);

    printf("Enter a double value: ");
    scanf("%lf", &dnum);

    printf("You entered character --> %c\nYou entered integer --> %d\nYou entered float --> %f\nYou entered double --> %lf\n", ch, num, fnum, dnum);
   // printf("You entered integer --> %d\n", num);
    //printf("You entered float --> %f\n", fnum);
    //printf("You entered double --> %lf\n", dnum);

    return 0;
}
