// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    int current_odd = 1;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // Loop runs exactly n times to add the first n odd numbers
    for (int i = 0; i < n; i++) {
        sum += current_odd;
        current_odd += 2; // Jump to the next odd number
    }

    printf("The sum of the first %d odd numbers is: %lld\n", n, sum);
    return 0;
}

// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;
    int has_even = 0;

    // Take user input
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a valid positive integer greater than 0.\n");
        return 1;
    }

    // Loop through even numbers starting from 2 up to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1; // Flag to check if at least one even number was found
    }

    // Output the result
    if (has_even) {
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    } else {
        printf("There are no even numbers between 1 and %d.\n", n);
    }

    return 0;
}
