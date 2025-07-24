#include<stdio.h> ///check the  entered  character is digit ot punctuation

int main()
{
     char ch;   // Declare a character variable
     printf("enter one character");
     scanf("%c", &ch);  // Take one character input from the user
     // Check if it's a digit (0-9)
if (ch >='0' && ch<='9')
{ 
    printf("input is a digit\n");

}
// Check if it's an uppercase alphabet (A-Z)
else if ((ch>='A' && ch<='Z')|| (ch>='a' &&ch<='z'))
{
    printf("Input is an alphabet\n");
}
// If not a digit or uppercase letter, it's considered punctuation
else
{
    printf("Input is a punctuation\n");
}
return 0;
}