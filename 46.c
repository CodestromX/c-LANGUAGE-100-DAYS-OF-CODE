/*
Write a program to remove all vowels from a string.
Sample Input: education
Sample Output: dctn
*/

#include <stdio.h>

int isVowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') ch += 32;
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[1000], result[1000];
    int j = 0;

    if (scanf("%[^\n]", str) != 1) return 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("%s\n", result);
    return 0;
}

/*
Write a program to find the first repeating lowercase alphabet in a string.
Sample Input: stress
Sample Output: s
*/

#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};

    if (scanf("%[^\n]", str) != 1) return 0;

    char first_repeating = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                first_repeating = str[i];
                break;
            }
        }
    }

    if (first_repeating != '\0') {
        printf("%c\n", first_repeating);
    } else {
        printf("None\n");
    }

    return 0;
}