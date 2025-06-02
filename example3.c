#include <stdio.h>

int main() {
    int age = 25;
    char grade = 'B';
    int isStudent = 1;

    // Ternary operator
    const char* status = (age >= 18) ? "Adult" : "Minor";
    printf("Status: %s\n", status);

    // if
    if (isStudent) {
        printf("You are a student.\n");
    }

    // if-else
    if (age < 18) {
        printf("Underage.\n");
    } else {
        printf("Of legal age.\n");
    }

    // if-else if-else
    if (grade == 'A') {
        printf("Excellent!\n");
    } else if (grade == 'B') {
        printf("Good job.\n");
    } else {
        printf("Needs improvement.\n");
    }

    // switch
    switch (grade) {
        case 'A':
            printf("Grade: A\n");
            break;
        case 'B':
            printf("Grade: B\n");
            break;
        case 'C':
            printf("Grade: C\n");
            break;
        default:
            printf("Grade not recognized.\n");
    }

    return 0;
}
