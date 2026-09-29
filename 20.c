// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, product = 1, has_odd = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Calculate the product of odd digits
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 == 1) {
            product *= digit;
            has_odd = 1;
        }
        n /= 10;
    }

    if (has_odd) {
        printf("Product of odd digits is: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}

// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a binary number: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // Find the 1's complement
    int complement = ~n;

    printf("1's complement of %d is: %d\n", n, complement);
    return 0;
}
