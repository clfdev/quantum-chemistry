#include "quantum_system.h"
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void demonstrateIntegratedSystem(void);
void performEnergyAnalysis(const QuantumParticle* particles, int count);

int main() {
    printf("=== Multi-File Integration: Quantum Chemistry System ===\n\n");

    demonstrateIntegratedSystem();

    printf("Integration demonstration completed successfully.\n");
    return 0;
}

void demonstrateIntegratedSystem(void) {
    const int systemSize = 4;

    // Dynamic memory allocation for particle ensemble
    QuantumParticle* quantumSystem = malloc(systemSize * sizeof(QuantumParticle));
    if (!quantumSystem) {
        fprintf(stderr, "Critical error: Memory allocation failure\n");
        return;
    }

    // System initialization using public interface
    initializeQuantumSystem(quantumSystem, systemSize);

    // Display initial system configuration
    displaySystemConfiguration(quantumSystem, systemSize);

    // Perform comprehensive energy analysis
    performEnergyAnalysis(quantumSystem, systemSize);

    // Resource deallocation
    free(quantumSystem);
}

void performEnergyAnalysis(const QuantumParticle* particles, int count) {
    // Single-output function demonstration
    double systemEnergy = calculateSystemEnergy(particles, count);
    printf("Total system energy: %.4e J\n\n", systemEnergy);

    // Multiple-output function via pointer parameters
    double avgEnergy, totalMomentum, totalKinetic, totalPotential;
    analyzeSystemStatistics(particles, count, &avgEnergy, &totalMomentum,
                           &totalKinetic, &totalPotential);

    printf("Statistical Analysis Results:\n");
    printf("  Average particle energy: %.4e J\n", avgEnergy);
    printf("  Total system momentum: %.4e kg⋅m/s\n", totalMomentum);
    printf("  Total kinetic energy: %.4e J\n", totalKinetic);
    printf("  Total potential energy: %.4e J\n", totalPotential);
    printf("\n");

    // Individual quantum state calculations
    printf("Harmonic Oscillator Energy Levels:\n");
    for (int n = 0; n < count; n++) {
        double oscillatorEnergy = computeHarmonicOscillatorEnergy(1e14, n);
        printf("  n=%d: %.4e J\n", n, oscillatorEnergy);
    }
    printf("\n");
}
