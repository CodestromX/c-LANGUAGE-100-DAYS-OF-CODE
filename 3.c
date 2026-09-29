// Write a program to convert from celsius to fahrenheit 
#include<stdio.h>
int main()
{
    float celsius,fahrenhit;
    printf("enter the value of celsius ");
    scanf("%f",&celsius);
    fahrenhit=(celsius*9/5)+32;
    printf("fahrenheit value: %f",fahrenhit);
    return 0;
}

// Write a program to swap two numbers using third variables
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a and b ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping a=%d and b=%d",a,b);
    return 0;
}