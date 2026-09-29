/* Q83: Count vowels and consonants in a string. */
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int vowels = 0, consonants = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        char ch = tolower((unsigned char)s[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}

/* Q84: Convert a lowercase string to uppercase without using built-in functions. */
#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A');
        }
    }
    printf("%s", s);
    return 0;
}