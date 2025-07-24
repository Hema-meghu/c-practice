#include <stdio.h> //unsigned char example 

int main() {
    unsigned char ch2;

    ch2 = 256;
    printf("ch2 = 256 → %u\n", ch2);   // Overflow: becomes 0

    ch2 = 257;
    printf("ch2 = 257 → %u\n", ch2);   // Overflow: becomes 1

    ch2 = 300;
    printf("ch2 = 300 → %u\n", ch2);   // Overflow: becomes 44

    ch2 = -1;
    printf("ch2 = -1 → %u\n", ch2);    // Underflow: becomes 255

    ch2 = -128;
    printf("ch2 = -128 → %u\n", ch2);  // Underflow: becomes 128

    return 0;
}
