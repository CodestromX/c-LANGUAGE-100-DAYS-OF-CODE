// Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) != 2 || a < 0 || b < 0) {
        printf("Error: Please enter valid non-negative integers.\n");
        return 1;
    }

    // Find the smaller number
    int smaller = (a < b) ? a : b;

    // Find the HCF
    for (int i = smaller; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }

    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    return 0;
}
