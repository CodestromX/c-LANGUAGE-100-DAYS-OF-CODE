/* Q65: Search in a sorted array using binary search. */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int key;
    scanf("%d", &key);

    int low = 0, high = n - 1, found_index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            found_index = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    return 0;
}

/* Q66: Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int val;
    scanf("%d", &val);

    int i = n - 1;
    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;

    for (int j = 0; j <= n; j++) {
        printf("%d%c", arr[j], (j == n) ? '\n' : ' ');
    }
    return 0;
}