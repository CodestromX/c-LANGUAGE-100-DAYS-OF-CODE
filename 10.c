// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    double side1, side2, side3;

    // Input the three sides of the triangle
    printf("Enter the lengths of the three sides: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    // Step 1: Validate if the sides can form a triangle
    // The sum of any two sides must be strictly greater than the third side
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        
        // Step 2: Classify the triangle
        if (side1 == side2 && side2 == side3) {
            // All sides are equal
            printf("The triangle is Equilateral.\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            // Any two sides are equal
            printf("The triangle is Isosceles.\n");
        }
        else {
            // All sides are different
            printf("The triangle is Scalene.\n");
        }
        
    } else {
        // If the side lengths violate the Triangle Inequality Theorem
        printf("The entered side lengths do not form a valid triangle.\n");
    }

    return 0;
}

// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main() {
    int dayNumber;

    // Input the day number from the user
    printf("Enter a number (1-7): ");
    scanf("%d", &dayNumber);

    // Switch case to determine the day of the week
    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            // Executed if the user enters any number outside 1-7
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}

