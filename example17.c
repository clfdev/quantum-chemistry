#include <stdio.h>
#include <stdlib.h>

// Function to print the vector
void printVector(int *vector, int size) {
    // Loop counter
    int i;

    // Traversing the vector
    for(i = 0; i < size; i++)
        printf("%d \n", vector[i]);
}

// Function to modify the vector
void modifyVector(int *vector, int size) {
    // Loop counter
    int i;

    // Traversing the vector
    for(i = 0; i < size; i++)
        vector[i] = vector[i] + 1;
}

int main() {
    // Defining the vector
    int v[3] = {1, 2, 3};

    // Displaying the vector
    printVector(v, 3);

    // Modifying the vector
    modifyVector(v, 3);

    // Displaying the vector again
    printVector(v, 3);

    // Return from main function
    return 0;
}

