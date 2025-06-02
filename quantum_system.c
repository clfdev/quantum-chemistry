#include "quantum_system.h"
#include <stdio.h>
#include <stdlib.h>

// Static helper functions - internal implementation details
static double validatePhysicalParameter(double value, const char* parameterName) {
    if (value < 0) {
        fprintf(stderr, "Warning: Invalid %s value: %.2e\n", parameterName, value);
        return 0.0;
    }
    return value;
}

static double computePotentialEnergy(double position) {
    const double springConstant = 1.0e-18; // N/m
    return 0.5 * springConstant * position * position;
}

// Inline functions for performance-critical calculations
static inline double computeKineticEnergy(double momentum, double mass) {
    return (momentum * momentum) / (2.0 * mass);
}

static inline double quantumEnergyLevel(double frequency, int n) {
    const double reducedPlanck = PLANCK_CONSTANT / (2.0 * M_PI);
    return reducedPlanck * frequency * (n + 0.5);
}

// Public function implementations
void initializeQuantumSystem(QuantumParticle* particles, int count) {
    for (int i = 0; i < count; i++) {
        particles[i].position = (i + 1) * BOHR_RADIUS;
        particles[i].momentum = (i + 1) * 1e-24;
        particles[i].mass = ELECTRON_MASS;
        particles[i].quantumNumber = i;
    }
}

double calculateSystemEnergy(const QuantumParticle* particles, int count) {
    double totalEnergy = 0.0;

    for (int i = 0; i < count; i++) {
        double validatedMass = validatePhysicalParameter(particles[i].mass, "mass");

        if (validatedMass > 0) {
            double kinetic = computeKineticEnergy(particles[i].momentum, validatedMass);
            double potential = computePotentialEnergy(particles[i].position);
            totalEnergy += kinetic + potential;
        }
    }

    return totalEnergy;
}

double computeHarmonicOscillatorEnergy(double frequency, int quantumNumber) {
    return quantumEnergyLevel(frequency, quantumNumber);
}

void analyzeSystemStatistics(const QuantumParticle* particles, int count,
                           double* averageEnergy, double* totalMomentum,
                           double* kineticEnergy, double* potentialEnergy) {
    *averageEnergy = 0.0;
    *totalMomentum = 0.0;
    *kineticEnergy = 0.0;
    *potentialEnergy = 0.0;

    for (int i = 0; i < count; i++) {
        double kinetic = computeKineticEnergy(particles[i].momentum, particles[i].mass);
        double potential = computePotentialEnergy(particles[i].position);

        *kineticEnergy += kinetic;
        *potentialEnergy += potential;
        *totalMomentum += particles[i].momentum;
    }

    *averageEnergy = (*kineticEnergy + *potentialEnergy) / count;
}

void displaySystemConfiguration(const QuantumParticle* particles, int count) {
    printf("=== Quantum System Configuration ===\n");
    printf("Particle | Position (m) | Momentum (kg⋅m/s) | Kinetic (J) | Potential (J)\n");
    printf("---------|--------------|-------------------|-------------|-------------\n");

    for (int i = 0; i < count; i++) {
        double kinetic = computeKineticEnergy(particles[i].momentum, particles[i].mass);
        double potential = computePotentialEnergy(particles[i].position);

        printf("   %2d    | %11.2e | %17.2e | %10.2e | %11.2e\n",
               i+1, particles[i].position, particles[i].momentum, kinetic, potential);
    }
    printf("\n");
}
