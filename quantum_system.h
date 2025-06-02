#ifndef QUANTUM_SYSTEM_H
#define QUANTUM_SYSTEM_H

#include <math.h>

// Physical constants for quantum chemistry calculations
#define PLANCK_CONSTANT 6.62607015e-34
#define ELECTRON_MASS 9.1093837015e-31
#define BOHR_RADIUS 5.29177210903e-11

// Data structure representing quantum mechanical particles
typedef struct {
    double position;        // Spatial coordinate (m)
    double momentum;        // Canonical momentum (kg⋅m/s)
    double mass;           // Particle mass (kg)
    int quantumNumber;     // Principal quantum number
} QuantumParticle;

// Public function prototypes
void initializeQuantumSystem(QuantumParticle* particles, int count);
double calculateSystemEnergy(const QuantumParticle* particles, int count);
double computeHarmonicOscillatorEnergy(double frequency, int quantumNumber);
void analyzeSystemStatistics(const QuantumParticle* particles, int count,
                           double* averageEnergy, double* totalMomentum,
                           double* kineticEnergy, double* potentialEnergy);
void displaySystemConfiguration(const QuantumParticle* particles, int count);

#endif // QUANTUM_SYSTEM_H
