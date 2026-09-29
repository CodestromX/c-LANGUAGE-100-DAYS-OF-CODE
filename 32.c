/* Q63: Merge two arrays. */
#include <stdio.h>

int main() {
    int n1, n2;
    if (scanf("%d", &n1) != 1) return 0;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    if (scanf("%d", &n2) != 1) return 0;
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d%c", merged[i], (i == n1 + n2 - 1) ? '\n' : ' ');
    }
    return 0;
}

/* Q64: Find the digit that occurs the most times in an integer number. */
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    if (scanf("%s", s) != 1) return 0;

    int freq[10] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            freq[s[i] - '0']++;
        }
    }

    int max_freq = -1;
    int result_digit = 0;
    for (int d = 0; d <= 9; d++) {
        if (freq[d] > max_freq) {
            max_freq = freq[d];
            result_digit = d;
        }
    }

    printf("%d\n", result_digit);
    return 0;
}