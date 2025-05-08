#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "cxtimers.h"

// Assuming stop_timer() prints the elapsed time directly
void stop_timer() {
    // Code that calculates and prints the elapsed time
    double elapsed_time = 123.456;  // Example elapsed time (replace with actual logic)
    printf("Elapsed time: %.3f ms\n", elapsed_time);
}

float sin_sum(float x, int terms) {
    // Implementation of the sin_sum function
    return 0.0f; // Example return, update with actual calculation
}

int main(int argc, char* argv[]) {
    int threads = (argc > 3) ? atoi(argv[3]) : 4; // Default threads to 4 if not provided in command line args
    omp_set_num_threads(threads); // Set OpenMP threads
    
    float x = 0.5f; // Example value for x
    int terms = 1000; // Example number of terms for calculation
    float omp_sum = 0.0f;
    int steps = 1000; // Example number of steps

    // Start timer
    start_timer();

    // Parallel calculation using OpenMP
    #pragma omp parallel for reduction(+:omp_sum) // OpenMP parallel for loop
    for (int step = 0; step < steps; step++) {
        omp_sum += sin_sum(x, terms); // Accumulate the sum
    }

    // Stop timer and print elapsed time directly
    stop_timer(); // This will print the time

    // Print the result
    printf("omp_sum=%.10f, steps %d, terms %d\n", omp_sum, steps, terms);

    return 0;
}
