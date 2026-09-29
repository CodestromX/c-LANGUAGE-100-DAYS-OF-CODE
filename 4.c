// // Write a program to swap two numbers without using a third variable
#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a and b ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping a=%d and b=%d", a, b);
    return 0;
}

// Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter the value of n ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("the sum of the first %d natural numbers is %d", n, sum);
    return 0;
}