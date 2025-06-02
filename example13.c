#include <stdio.h>
#include <math.h>

// Direct return function for simple calculations
double computeHarmonicOscillatorEnergy(double frequency, int quantumNumber) {
    const double h_bar = 1.054571817e-34; // Reduced Planck constant
    return h_bar * frequency * (quantumNumber + 0.5);
}

// Pointer-based function for multiple outputs
void computeQuantumState(const double *position, const double *momentum,
                        double *energy, double *uncertainty, int particles) {
    *energy = 0.0;
    *uncertainty = 0.0;

    for (int i = 0; i < particles; i++) {
        *energy += (momentum[i] * momentum[i]) / (2.0 * 9.109e-31); // Kinetic energy
        *uncertainty += position[i] * momentum[i]; // Simplified uncertainty
    }

    *uncertainty = fabs(*uncertainty);
}

// Demonstration of usage patterns
void demonstrateEnergyCalculations() {
    printf("=== Quantum Chemistry Energy Calculator ===\n\n");

    // Direct return approach
    double oscillatorEnergy = computeHarmonicOscillatorEnergy(1e14, 2);
    printf("Harmonic Oscillator Energy (n=2): %.2e J\n", oscillatorEnergy);

    // Pointer-based approach with multiple outputs
    double positions[] = {1e-10, 2e-10, 1.5e-10};
    double momenta[] = {1e-24, 0.8e-24, 1.2e-24};
    double totalEnergy, totalUncertainty;

    computeQuantumState(positions, momenta, &totalEnergy, &totalUncertainty, 3);
    printf("System Energy: %.2e J\n", totalEnergy);
    printf("Position-Momentum Uncertainty: %.2e\n", totalUncertainty);
}

// Main function - entry point of the program
int main() {
    demonstrateEnergyCalculations();
    return 0;
}
