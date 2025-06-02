#include <stdio.h>

// Function that prints a header message
void printHeader() {
    printf("=== Quantum Chemistry Energy Calculator ===\n\n");
}

// Function that computes energy from two floating-point inputs
float computeEnergy(float a, float b) {
    return a * b;
}

// Function that computes energy using pointers
void computeEnergyPtr(const float *a, const float *b, float *result) {
    *result = (*a) * (*b);
}

// Function that prints the energy result
void printEnergy(float energy) {
    printf("Computed Energy: %.2f\n", energy);
}

int main() {
    printHeader();

    float A = 2.0, B = 3.5;

    // Using the function that returns a float
    float directEnergy = computeEnergy(A, B);
    printEnergy(directEnergy);

    // Using the pointer-based function
    float pointerEnergy;
    computeEnergyPtr(&A, &B, &pointerEnergy);
    printf("Pointer-based Computation: %.2f\n", pointerEnergy);

    return 0;
}

