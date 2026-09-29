// 1)Find the sum of array elements.
#include<stdio.h>
int main() {
    int n, i, sum = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    // Print the sum of the array elements
    printf("The sum of the array elements is: %d\n", sum);
    
    return 0;
}



// 2) Find the maximum and minimum element in an array.
#include<stdio.h>
int main() {
    int n, i, max, min;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Find maximum and minimum elements
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum elements
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
    
    return 0;
}