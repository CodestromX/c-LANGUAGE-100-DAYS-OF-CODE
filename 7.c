//#include <stdio.h>

int main() {
    int year;

    // Take the year as input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Conditional statement to check the leap year logic
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


// Write a program to input a character and check whether it is a vowel or consonant using if–else
#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel (both lowercase and uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } 
    else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
