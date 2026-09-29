// Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    printf("Binary representation of %d is: ", n);
    if (n == 0) {
        printf("0");
    } else {
        // Print binary representation
        for (int i = 31; i >= 0; i--) {
            if (n & (1 << i)) {
                printf("1");
            } else if (printf("0")) {
                // Do nothing
            }
        }
    }
    printf("\n");
    return 0;
}

// Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, original, reversed = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    original = n;

    // Reverse the number
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    // Check if the original number is equal to its reverse
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
