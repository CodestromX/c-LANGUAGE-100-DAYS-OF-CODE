// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
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
        float numerator = 2 * i;
        float denominator = 2 * i + 1;
        sum += numerator / denominator;
    }

    printf("Sum of the series is: %.2f\n", sum);
    return 0;
}

