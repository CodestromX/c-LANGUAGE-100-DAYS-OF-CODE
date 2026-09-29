// write a program to calculate simple and compound interest for given principle, rate and time
#include<stdio.h>
#include<math.h>
int main()
{
    float principle,rate,time,simple_interest,compound_interest;
    printf("enter the value of principle, rate and time : ");
    scanf("%f%f%f",&principle,&rate,&time);
    simple_interest = (principle*rate*time)/100;
    compound_interest = principle*(pow(1 + rate/100, time) - 1);
    printf("simple_interest is\n %f",simple_interest);
    printf("compound_interest is\n %f",compound_interest);
    return 0;
}

// write a program to input time in seconds and convert it into hours:minutes:seconds format
#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Input total seconds from the user
    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1 || total_seconds < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Calculate hours, minutes, and remaining seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Display the output in HH:MM:SS format with leading zeros
    printf("Converted format [HH:MM:SS]: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

    

