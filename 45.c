/* Q89: Count frequency of a given character in a string. */
#include <stdio.h>

int main() {
    char s[1000];
    char target;

    if (!fgets(s, sizeof(s), stdin)) return 0;
    if (scanf(" %c", &target) != 1) return 0;

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == target) count++;
    }

    printf("%d\n", count);
    return 0;
}

/* Q90: Toggle case of each character in a string. */
#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A');
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
    }
    printf("%s", s);
    return 0;
}