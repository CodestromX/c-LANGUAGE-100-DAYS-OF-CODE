/*
 * Q111 (Day 61)
 * Write a program to take an integer array arr and an integer k as inputs. 
 * The task is to find the first negative integer in each subarray of size k 
 * moving from left to right. If no negative exists in a window, print "0" 
 * for that window. Print the results separated by spaces as output.
 */
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int firstNegIdx = 0;
    for (int i = 0; i <= n - k; i++) {
        if (firstNegIdx < i) {
            firstNegIdx = i;
        }
        // Advance firstNegIdx until we find a negative number or exceed the current window
        while (firstNegIdx < i + k && arr[firstNegIdx] >= 0) {
            firstNegIdx++;
        }

        // Print the first negative number if it is within the window, else print 0
        if (firstNegIdx < i + k) {
            printf("%d", arr[firstNegIdx]);
        } else {
            printf("0");
        }
        if (i < n - k) printf(" ");
    }
    printf("\n");
    return 0;
}