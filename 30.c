// Count even and odd numbers in an array
#include<stdio.h>
int main() {
    int n, i, evenCount = 0, oddCount = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Check if the number is even or odd
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the counts of even and odd numbers
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}



// 2)Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main() {
    int n, i, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Check if the number is positive, negative, or zero
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Print the counts of positive, negative, and zero elements
    printf("Number of positive elements: %d\n", positiveCount);
    printf("Number of negative elements: %d\n", negativeCount);
    printf("Number of zero elements: %d\n", zeroCount);

    return 0;
}
