// 1) Write a program to print all the prime numbers from 1 to n
#include<stdio.h>
int main() {
    int n, i, j, isPrime;

    // Input the upper limit from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    
    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume the number is prime

        // Check if i is prime
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

// 2) Read and print elements of a one-dimensional array
#include<stdio.h>
int main() {
    int n, i;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}