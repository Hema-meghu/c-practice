#include <stdio.h> //signed char 

int main() {
    signed char ch1;

    ch1 = -129;
    printf("ch1 = -129 → %d\n", ch1);   // Overflow: becomes 127

    ch1 = -130;
    printf("ch1 = -130 → %d\n", ch1);   // Overflow: becomes 126

    ch1 = -200;
    printf("ch1 = -200 → %d\n", ch1);   // Overflow: becomes 56

    ch1 = -500;
    printf("ch1 = -500 → %d\n", ch1);   // Overflow: becomes 12

    ch1 = 128;
    printf("ch1 = 128 → %d\n", ch1);    // Overflow: becomes -128

    ch1 = 129;
    printf("ch1 = 129 → %d\n", ch1);    // Overflow: becomes -127

    ch1 = 200;
    printf("ch1 = 200 → %d\n", ch1);    // Overflow: becomes -56

    ch1 = 500;
    printf("ch1 = 500 → %d\n", ch1);    // Overflow: becomes -12

    return 0;
}
