#include <stdio.h>

int main() {
    int age = 20;
    int hasID = 1;
    int isStudent = 0;

    // Logical AND
    if (age >= 18 && hasID) {
        printf("Access granted: age >= 18 AND has ID.\n");
    }

    // Logical OR
    if (isStudent || age < 18) {
        printf("Access with discount: student OR underage.\n");
    } else {
        printf("No discount available.\n");
    }

    // Logical NOT
    if (!isStudent) {
        printf("User is not a student (NOT isStudent).\n");
    }

    return 0;
}

