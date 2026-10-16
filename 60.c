/*
 * Q110 (Day 60)
 * Write a program to take an integer array arr and an integer k as inputs.
 * The task is to find the maximum element in each subarray of size k moving from
 * left to right. Print the maximum elements for each window separated by spaces as output.
 */
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) {
                maxVal = arr[i + j];
            }
        }
        printf("%d%s", maxVal, (i == n - k) ? "" : " ");
    }
    printf("\n");
    return 0;
}