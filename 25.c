// 1) Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345
#include <stdio.h>

int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}



// 2)Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
    // *

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j >= 6 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}