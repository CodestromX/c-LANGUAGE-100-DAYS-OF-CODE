/* Q69: Find the second largest element in an array. */
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    printf("%d\n", second);
    return 0;
}

/* Q70: Rotate an array to the right by k positions. */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n], rotated[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int k;
    scanf("%d", &k);
    k = k % n;

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d%c", rotated[i], (i == n - 1) ? '\n' : ' ');
    }
    return 0;
}