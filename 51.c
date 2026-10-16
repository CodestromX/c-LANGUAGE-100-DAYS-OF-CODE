// Q106 (Day 56): Next Greater Element (Brute Force)
// C


#include <stdio.h>

int findPivotIndex(int nums[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) totalSum += nums[i];

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    printf("%d\n", findPivotIndex(nums, n));
    return 0;
}