// Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first_digit, last_digit, num_digits = 0, temp;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Find the last digit
    last_digit = n % 10;

    // Find the number of digits
    temp = n;
    while (temp != 0) {
        num_digits++;
        temp /= 10;
    }

    // Find the first digit
    first_digit = n / (10 * (num_digits - 1));

    // Swap the first and last digits
    n = (n % (10 * (num_digits - 1))) + (last_digit * (10 * (num_digits - 1))) + first_digit;

    printf("Number after swapping first and last digits: %d\n", n);
    return 0;
}

// Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Find the sum of all proper divisors
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if the number is perfect
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
