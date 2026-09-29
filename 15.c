// Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Factorial of numbers greater than 20 will overflow a 64-bit integer
    if (n > 20) {
        printf("Error: Result too large. Maximum supported input is 20.\n");
        return 1;
    }

    // Loop from 1 up to n to calculate the product
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}

// Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n, reversed = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Reverse the number
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}
