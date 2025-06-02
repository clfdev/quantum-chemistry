#include <stdio.h>
#include <stdlib.h>

// Function to double a single integer using a pointer
void doubleValue(int *ptr) {
    *ptr = (*ptr) * 2;
}

// Function to double all values in an array using pointers
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * 2;  // pointer arithmetic
    }
}

// Function to allocate and initialize an array using pointer to pointer
void allocateAndFill(int **arrPtr, int size) {
    *arrPtr = (int *)malloc(size * sizeof(int));
    if (*arrPtr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        (*arrPtr)[i] = i + 1; // assigning values from 1 to size
    }
}

int main() {
    // Part 1: single variable
    int x = 5;
    doubleValue(&x);
    printf("Doubled value (single int): %d\n", x); // Output: 10

    // Part 2: array passed by pointer
    int values[] = {1, 2, 3};
    doubleArray(values, 3);
    printf("Doubled array values: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    // Part 3: dynamic allocation with pointer to pointer
    int *dynamicArray = NULL;
    allocateAndFill(&dynamicArray, 4);
    printf("Dynamically allocated array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(dynamicArray);

    return 0;
}

