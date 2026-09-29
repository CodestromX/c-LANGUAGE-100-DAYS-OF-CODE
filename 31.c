// Search for an element in an array using linear search.
#include<stdio.h>
int main()
{
    int n, key, i, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}

// Reverse an array without taking extra space.
#include <stdio.h>

// Function to reverse the array in place
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        // Swap elements using a temporary variable
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move pointers closer to the middle
        start++;
        end--;
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}

