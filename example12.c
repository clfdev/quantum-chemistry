#include <stdio.h>

// Function with no return and no parameters
void printHeader() {
    printf("=== Energy Calculator ===\n");
}

// Function with parameters and return value
float computeEnergy(float a, float b) {
    return a * b;
}

// Function with pointer parameters (pass-by-reference)
void computeEnergyByPointer(const float *a, const float *b, float *result) {
    *result = (*a) * (*b);
}

int main() {
    printHeader(); // Calling void function

    float x = 2.0, y = 3.0;
    float energy = computeEnergy(x, y); // Direct computation
    printf("Energy (return): %.2f\n", energy);

    float energy2;
    computeEnergyByPointer(&x, &y, &energy2); // Pointer-based computation
    printf("Energy (pointer): %.2f\n", energy2);

    return 0;
}

