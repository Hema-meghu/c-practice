#include <stdio.h>  // Header file for standard input-output functions

int main() {
    int i, subject1, subject2, subject3, total;  // Variables for marks and total
    float average;  // To store the average as a decimal number
    char grade;  // To store the grade (A, B, C, etc.)
    unsigned char u_total;  // To demonstrate overflow if total > 255

    // Loop for 3 students
    for(i = 1; i <= 3; i++) {
        printf("\n--- Student %d ---\n", i);  // Display which student is being processed

        // Input marks for 3 subjects
        printf("Enter marks of Subject 1: ");
        scanf("%d", &subject1);

        printf("Enter marks of Subject 2: ");
        scanf("%d", &subject2);

        printf("Enter marks of Subject 3: ");
        scanf("%d", &subject3);

        // Calculate total and average
        total = subject1 + subject2 + subject3;  // Add all 3 subject marks
        average = (float)total / 3;  // Typecast to float to get decimal average

        // Demonstrate overflow by assigning total to unsigned char
        u_total = total;

        // Print total and average
        printf("Total = %d | Average = %.2f\n", total, average);
        printf("Unsigned char total (overflow demo if >255): %u\n", u_total);  // %u for unsigned int

        // Decide grade using if-else ladder
        if(average >= 90)
            grade = 'A';
        else if(average >= 75)
            grade = 'B';
        else if(average >= 60)
            grade = 'C';
        else if(average >= 40)
            grade = 'D';
        else
            grade = 'F';

        // Print grade
        printf("Grade: %c\n", grade);
    }

    return 0;  // End of program
}
