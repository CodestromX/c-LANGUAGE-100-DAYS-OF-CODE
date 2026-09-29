// Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int n, sum = 0, temp;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }

    return 0;
}

// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series is: %.2f\n", sum);
    return 0;
}
