/*
Check if one string is a rotation of another.
Sample Input 1: abcde \n deabc -> Rotation
Sample Input 2: abc \n acb -> Not rotation
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], temp[2000];

    if (scanf("%s", s1) != 1) return 0;
    if (scanf("%s", s2) != 1) return 0;

    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}


/*
Reverse each word in a sentence without changing the word order.
Sample Input: I love coding
Sample Output: I evol gnidoc
*/

#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    if (scanf("%[^\n]", str) != 1) return 0;

    int n = strlen(str);
    int word_start = 0;

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, word_start, i - 1);
            word_start = i + 1;
        }
    }

    printf("%s\n", str);
    return 0;
}