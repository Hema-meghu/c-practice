#include <stdio.h> // to convert the number from decimal octal hexadecimal 

int main()
{
    // Declare an integer and assign a hexadecimal value
    int num = 0xAB;  // 0x100 = 256 in decimal

    // Print the value in different number systems
    printf("num in decimal form -> %d\n", num);       // %d for decimal
    printf("num in octal form   -> %o\n", num);       // %o for octal
    printf("num in hexadecimal form is %x\n", num);   // %x for lowercase hexadecimal
    printf("num in character form is -. %c\n",num);   //char
    return 0;
}

