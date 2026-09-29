/* Q85: Reverse a string. */
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') len++;
    s[len] = '\0';

    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }

    printf("%s\n", s);
    return 0;
}

/* Q86: Check if a string is a palindrome. */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') len++;

    bool is_palindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }

    printf("%s\n", is_palindrome ? "Palindrome" : "Not palindrome");
    return 0;
}