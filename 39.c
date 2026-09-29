/* Q77: Check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>
#include <stdbool.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    int n = (r < c) ? r : c;
    bool distinct = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) break;
    }

    printf("%s\n", distinct ? "True" : "False");
    return 0;
}

/* Q78: Find the sum of main diagonal elements for a square matrix. */
#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    long long diag_sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val;
            scanf("%d", &val);
            if (i == j) diag_sum += val;
        }
    }
    printf("%lld\n", diag_sum);
    return 0;
}