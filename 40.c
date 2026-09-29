/* Q79: Perform diagonal traversal of a matrix. */
#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    int first = 1;
    for (int d = 0; d < r + c - 1; d++) {
        if (d % 2 == 0) {
            int row = (d < r) ? d : r - 1;
            int col = d - row;
            while (row >= 0 && col < c) {
                if (!first) printf(" ");
                printf("%d", mat[row][col]);
                first = 0;
                row--;
                col++;
            }
        } else {
            int col = (d < c) ? d : c - 1;
            int row = d - col;
            while (col >= 0 && row < r) {
                if (!first) printf(" ");
                printf("%d", mat[row][col]);
                first = 0;
                row++;
                col--;
            }
        }
    }
    printf("\n");
    return 0;
}

/* Q80: Multiply two matrices. */
#include <stdio.h>

int main() {
    int r1, c1;
    if (scanf("%d %d", &r1, &c1) != 2) return 0;
    int a[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    }

    int r2, c2;
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    }

    int res[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d%c", res[i][j], (j == c2 - 1) ? '\n' : ' ');
        }
    }
    return 0;
}