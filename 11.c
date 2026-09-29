// Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>

int main() {
    int monthNumber, year;

    // Input the month number from the user
    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);

    // Switch case to determine month name and days
    switch (monthNumber) {
        // Months with 31 days
        case 1:
            printf("Month: January\nDays: 31\n");
            break;
        case 3:
            printf("Month: March\nDays: 31\n");
            break;
        case 5:
            printf("Month: May\nDays: 31\n");
            break;
        case 7:
            printf("Month: July\nDays: 31\n");
            break;
        case 8:
            printf("Month: August\nDays: 31\n");
            break;
        case 10:
            printf("Month: October\nDays: 31\n");
            break;
        case 12:
            printf("Month: December\nDays: 31\n");
            break;

        // Months with 30 days
        case 4:
            printf("Month: April\nDays: 30\n");
            break;
        case 6:
            printf("Month: June\nDays: 30\n");
            break;
        case 9:
            printf("Month: September\nDays: 30\n");
            break;
        case 11:
            printf("Month: November\nDays: 30\n");
            break;

        // February handling (Leap Year check)
        case 2:
            printf("Month: February\n");
            printf("Enter the year: ");
            scanf("%d", &year);
            
            // Leap year condition
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                printf("Days: 29 (Leap Year)\n");
            } else {
                printf("Days: 28\n");
            }
            break;

        // Invalid input fallback
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}

// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount, percentage;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Check for profit, loss, or no change
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit Amount: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } 
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss Amount: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
