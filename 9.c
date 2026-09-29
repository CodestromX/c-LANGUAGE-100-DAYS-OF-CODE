// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Input coefficients from the user
    printf("Enter coefficients a, b, and c (ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if it is a valid quadratic equation
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }

    // Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    // Categorize and find roots based on the discriminant
    if (discriminant > 0) {
        // Condition for real and distinct (different) roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        // Condition for real and equal roots
        root1 = root2 = -b / (2 * a);
        
        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else {
        // Condition for complex/imaginary roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("The roots are complex and imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}

// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.
#include <stdio.h>

int main() {
    float percentage;

    // Input the percentage from the user
    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    // Validate the input range first
    if (percentage < 0.0 || percentage > 100.0) {
        printf("Invalid input! Please enter a percentage between 0 and 100.\n");
    }
    // Assign grades based on criteria
    else if (percentage >= 90.0) {
        printf("Grade A\n");
    }
    else if (percentage >= 80.0) {
        printf("Grade B\n");
    }
    else if (percentage >= 70.0) {
        printf("Grade C\n");
    }
    else if (percentage >= 60.0) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}
