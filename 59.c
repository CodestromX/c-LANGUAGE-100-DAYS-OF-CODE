/*
 * Q109 (Day 59)
 * Write a program to take an integer array arr and an integer k as inputs.
 * Print the maximum sum of all the subarrays of size k.
 */
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (n < k) return 0;

    long long currentSum = 0;
    for (int i = 0; i < k; i++) currentSum += arr[i];

    long long maxSum = currentSum;
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) maxSum = currentSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}