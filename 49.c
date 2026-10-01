/*
Print the initials of a name.
Sample Input: John Doe
Sample Output: J.D.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (scanf("%[^\n]", str) != 1) return 0;

    int new_word = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (new_word) {
                printf("%c.", toupper(str[i]));
                new_word = 0;
            }
        } else {
            new_word = 1;
        }
    }
    printf("\n");

    return 0;
}

/*
Print initials of a name with the surname displayed in full.
Sample Input: John David Doe
Sample Output: J.D. Doe
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (scanf("%[^\n]", str) != 1) return 0;

    int n = strlen(str);
    int last_space = -1;

    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            last_space = i;
            break;
        }
    }

    if (last_space == -1) {
        printf("%s\n", str);
        return 0;
    }

    int new_word = 1;
    for (int i = 0; i < last_space; i++) {
        if (str[i] != ' ') {
            if (new_word) {
                printf("%c.", toupper(str[i]));
                new_word = 0;
            }
        } else {
            new_word = 1;
        }
    }

    printf(" %s\n", &str[last_space + 1]);

    return 0;
}