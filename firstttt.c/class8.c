#include <stdio.h>

int main() {
    char ch1;
    char ch2;

    printf("Enter two characters: ");
    scanf(" %c %c", &ch1, &ch2);  // Added space before %c to consume any leftover newline

    if (ch1 > ch2) {
        printf("Char 1 is larger --> %c\n", ch1);
    } else {
        printf("Char 2 is larger --> %c\n", ch2);
    }

    return 0;
}
