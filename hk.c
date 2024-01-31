#include <stdio.h>

// Function to calculate Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print Fibonacci series up to n terms
void printFibonacciSeries(int n) {
    printf("Fibonacci Series up to %d terms: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;

    // Get user input for the number of terms
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    // Check if the number of terms is non-negative
    if (terms < 0) {
        printf("Number of terms cannot be negative.\n");
    } else {
        // Print Fibonacci series
        printFibonacciSeries(terms);
    }

    return 0;
}

