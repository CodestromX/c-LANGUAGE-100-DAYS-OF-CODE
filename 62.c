/*
 * Q112 (Day 62)
 * Write a program to take an integer array arr as input. The task is to find 
 * the maximum sum of any contiguous subarray using Kadane's algorithm. Print 
 * the maximum sum as output. If all elements are negative, print the largest 
 * (least negative) element.
 */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    long long maxSoFar = arr[0];
    long long currentMax = arr[0];

    for (int i = 1; i < n; i++) {
        // If extending the current subarray is worse than starting a new one, start new
        if (currentMax + arr[i] > arr[i]) {
            currentMax = currentMax + arr[i];
        } else {
            currentMax = arr[i];
        }
        
        // Update the overall maximum sum encountered so far
        if (currentMax > maxSoFar) {
            maxSoFar = currentMax;
        }
    }

    printf("%lld\n", maxSoFar);
    return 0;
}