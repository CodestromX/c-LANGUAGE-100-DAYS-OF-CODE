/*
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Input: 15/04/2025
Sample Output: 15-Apr-2025
*/

#include <stdio.h>

int main() {
    int day, month, year;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (scanf("%d/%d/%d", &day, &month, &year) == 3) {
        if (month >= 1 && month <= 12) {
            printf("%02d-%s-%d\n", day, months[month], year);
        }
    }

    return 0;
}


/*
Print all sub-strings of a string.
Sample Input: abc
Sample Output: a,ab,abc,b,bc,c
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    if (scanf("%s", str) != 1) return 0;

    int n = strlen(str);
    int first = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (!first) printf(",");
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            first = 0;
        }
    }
    printf("\n");

    return 0;
}