/*
 * Q113 (Day 63)
 * Write a program to take an integer array arr and an integer k as inputs. 
 * The task is to find the kth smallest element in the array. Print the kth 
 * smallest element as output.
 */
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

// Quickselect Algorithm to find kth smallest element in O(n) expected time
int quickSelect(int arr[], int l, int r, int k) {
    if (l <= r) {
        int p = partition(arr, l, r);
        if (p == k - 1) return arr[p]; // Found it
        else if (p > k - 1) return quickSelect(arr, l, p - 1, k); // Search left
        else return quickSelect(arr, p + 1, r, k); // Search right
    }
    return -1;
}

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    printf("%d\n", quickSelect(arr, 0, n - 1, k));
    return 0;
}