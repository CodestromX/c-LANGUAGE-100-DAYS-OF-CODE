// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, digits = 0;
    int temp = n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    original = n;

    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of each digit raised to the power of the number of digits
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

// Write a program to check if a number is prime.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool is_prime = true;

    // Take user input
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        is_prime = false;
    } else {
        // Loop from 2 up to i * i <= num (equivalent to i <= sqrt(num))
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = false; // Found a factor, so it's not prime
                break;            // Exit the loop early
            }
        }
    }

    // Output the result
    if (is_prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

