// write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}

// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("number is positive");
    }
    if(num<0)
    {
        printf("number is negative");
    }
    else
    {
        printf("number is zero");
    }
    return 0;
}
