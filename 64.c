/*
 * Q114 (Day 64)
 * Write a program to take a string s as input. The task is to find the length 
 * of the longest substring without repeating characters. Print the length as output.
 */
#include <stdio.h>
#include <string.h>

#define MAX_LEN 10000

int main() {
    char s[MAX_LEN];
    if (scanf("%s", s) != 1) return 0;

    int n = strlen(s);
    int maxLength = 0;
    int left = 0;
    
    // Array to store the most recent index of each character
    int charIndex[256];
    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int right = 0; right < n; right++) {
        unsigned char currentChar = (unsigned char)s[right];
        
        // If we have seen the character and it is within our current window, move the left pointer
        if (charIndex[currentChar] >= left) {
            left = charIndex[currentChar] + 1;
        }
        
        // Update the last seen index for the current character
        charIndex[currentChar] = right;
        
        // Calculate the window length and update max
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("%d\n", maxLength);
    return 0;
}