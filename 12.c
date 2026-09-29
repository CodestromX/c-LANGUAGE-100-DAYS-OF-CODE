// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    // Input the number of late days
    printf("Enter the number of late days: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input. Please enter a valid number of days.\n");
        return 1;
    }

    // Calculate fine based on slabs
    if (days <= 5) {
        fine = days * 2;
        printf("Total Fine: ₹%.2f\n", fine);
    } 
    else if (days <= 10) {
        // First 5 days at ₹2/day + remaining days at ₹4/day
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Fine: ₹%.2f\n", fine);
    } 
    else if (days <= 30) {
        // First 5 days at ₹2/day + next 5 days at ₹4/day + remaining days at ₹6/day
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Fine: ₹%.2f\n", fine);
    } 
    else {
        // More than 30 days
        printf("Fine Status: Membership Cancelled.\n");
    }

    return 0;
}

// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input the units consumed
    printf("Enter the total units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a valid number of units.\n");
        return 1;
    }

    // Calculate bill based on tiered slabs
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        // First 100 units at ₹5 + remaining units at ₹7
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        // First 100 units at ₹5 + next 100 units at ₹7 + remaining units at ₹10
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        // First 300 units (capped) + remaining units at ₹12
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Print the final bill amount
    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
