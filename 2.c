// write program to calculate the area and perimeter of a rectangle given its length and width
#include<stdio.h>
int main()
{
    float l,b,perimeter,area;
    printf("enter the value of l and b:");
    scanf("%f%f",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("area of a rectangle : %f",area);
    printf("perimeter of a rectangle : %f",perimeter);
    return 0;
}

// Write a program to calculate the area and circumference of a circle given its radius
#include<stdio.h>
int main()
{
    float r,area,circumference;
    printf("enter the value of r");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("area of a circle : %f",area);
    printf("circumference of a circle : %f",circumference);
    return 0;
}