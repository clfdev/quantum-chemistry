#include <stdio.h>
#include <math.h>

// Static inline function for frequently used calculations
static inline double square(double x) {
    return x * x;
}

// More complex static inline function for quantum mechanics
static inline double normalizationFactor(double alpha) {
    return pow(2.0 * alpha / M_PI, 0.75);
}

// Example showing when NOT to use inline
double complexQuantumCalculation(double* wavefunction, int size) {
    // This should NOT be inline - too complex
    double result = 0.0;
    for (int i = 0; i < size; i++) {
        result += square(wavefunction[i]); // Uses inline function
    }
    return result;
}

// Main function - entry point
int main() {
    printf("=== Inline Functions Demonstration ===\n\n");

    // Test the square function
    double value = 3.5;
    printf("Square of %.2f = %.2f\n", value, square(value));

    // Test normalization factor
    double alpha = 1.5;
    printf("Normalization factor for alpha=%.2f: %.6f\n",
           alpha, normalizationFactor(alpha));

    // Test complex calculation with array
    double wavefunction[] = {1.0, 2.0, 1.5, 0.8, 2.2};
    int size = 5;
    double result = complexQuantumCalculation(wavefunction, size);
    printf("Complex quantum calculation result: %.6f\n", result);

    return 0;
}
