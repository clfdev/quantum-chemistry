#include <stdio.h>

#define SIZE 3

int main() {
    // Method 1: Declaration with defined size, assigning elements individually
    int vector1[SIZE];
    vector1[0] = 10;
    vector1[1] = 20;
    vector1[2] = 30;

    // Method 2: Declaration with explicit size and initialization
    int vector2[3] = {40, 50, 60};

    // Method 3: Declaration with implicit size
    int vector3[] = {70, 80, 90};

    // Method 4: Partial initialization
    int vector4[5] = {100, 110}; // Remaining elements are 0

    // Method 5: Constant (read-only) array
    const int vector5[] = {200, 210, 220};

    // Printing all vectors
    for (int i = 0; i < SIZE; i++) {
        printf("vector1[%d] = %d\n", i, vector1[i]);
        printf("vector2[%d] = %d\n", i, vector2[i]);
        printf("vector3[%d] = %d\n", i, vector3[i]);
        printf("vector5[%d] = %d\n", i, vector5[i]);
    }

    printf("vector4: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vector4[i]);
    }

    return 0;
}

