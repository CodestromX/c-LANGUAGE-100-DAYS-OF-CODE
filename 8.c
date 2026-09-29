// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character

#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check character type using ASCII ranges
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    }
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}


// Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Logical check using if-else to find the largest
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("%.2lf is the largest number.\n", num1);
        } else {
            printf("%.2lf is the largest number.\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("%.2lf is the largest number.\n", num2);
        } else {
            printf("%.2lf is the largest number.\n", num3);
        }
    }

    return 0;
}

