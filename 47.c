/*
Check if two strings are anagrams of each other.
Sample Input 1: listen \n silent -> Anagrams
Sample Input 2: hello \n world -> Not anagrams
*/

#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int count[256] = {0};

    if (scanf("%s", s1) != 1) return 0;
    if (scanf("%s", s2) != 1) return 0;

    for (int i = 0; s1[i] != '\0'; i++) count[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0'; i++) count[(unsigned char)s2[i]]--;

    int is_anagram = 1;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}

/*
Find the longest word in a sentence.
Sample Input: I love programming
Sample Output: programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    if (scanf("%[^\n]", sentence) != 1) return 0;

    int max_len = 0, start_idx = 0;
    int curr_len = 0, curr_start = 0;

    int n = strlen(sentence);
    for (int i = 0; i <= n; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            if (curr_len == 0) curr_start = i;
            curr_len++;
        } else {
            if (curr_len > max_len) {
                max_len = curr_len;
                start_idx = curr_start;
            }
            curr_len = 0;
        }
    }

    for (int i = start_idx; i < start_idx + max_len; i++) {
        putchar(sentence[i]);
    }
    putchar('\n');

    return 0;
}