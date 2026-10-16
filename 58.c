/*
 * Q108 (Day 58)
 * Write a Program to take an integer array nums. Print an array answer such that answer[i]
 * is equal to the product of all the elements of nums except nums[i]. The product of any
 * prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int ans[n];
    ans[0] = 1;
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] = ans[i] * rightProduct;
        rightProduct *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", ans[i], (i == n - 1) ? "" : ",");
    }
    printf("]\n");
    return 0;
}