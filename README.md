# OpenMP Sin Sum Calculator

This program demonstrates the use of OpenMP to parallelize the computation of a mathematical function, specifically a summation approximation for sine. It measures execution time using a custom timer library (`cxtimers.h`) and showcases the use of OpenMP directives for efficient parallel computation.

## Features

- Parallel computation using OpenMP.
- Custom timer integration for performance measurement.
- Flexible configuration of threads via command-line arguments.

## Prerequisites

To compile and run this program, ensure the following:

- **C Compiler**: A C compiler with OpenMP support (e.g., GCC or Clang).
- **Custom Timer**: The `cxtimers.h` library must be available and properly linked.
- **OpenMP**: OpenMP should be installed and enabled on your system.

## Compilation

To compile the program, use a C compiler with OpenMP support. For example:

```bash
gcc -o sin_sum_calculator main.c -fopenmp
