// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    int intNum1, intNum2, modResult;

    // Input the operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    // Input two operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Check for division by zero
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        case '%':
            // Modulo requires integers, so we cast the inputs
            intNum1 = (int)num1;
            intNum2 = (int)num2;
            
            // Check for modulo by zero
            if (intNum2 == 0) {
                printf("Error: Modulo by zero is not allowed.\n");
            } else {
                modResult = intNum1 % intNum2;
                printf("%d %% %d = %d\n", intNum1, intNum2, modResult);
            }
            break;

        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}

// Write a program to print numbers from 1 to n.
#include <stdio.h>

void printNumbers(int n) {
    // Loop starts at 1 and increments by 1 during each iteration
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

int main() {
    int n = 5;
    printNumbers(n);
    return 0;
}
