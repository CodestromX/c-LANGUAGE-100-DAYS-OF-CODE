
int main()
{
// //     // Here we declare the variables
    int a,b,sum;
    printf("enter the value of a and b");
// // //     // Here & is called as the address operator, which is used to get the memory address of a variable.
// // //      Here scanf is a function that reads formatted input from the standard input (usually the console).
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum of two number is %d",sum);
    return 0;
}

// Here 
#include<stdio.h>
int main()
{
     int a,b,sum,product,differnce,quotient;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    product=a*b;
    differnce=a-b;
    quotient=a/b;
    printf("sum of two number is %d\n",sum);
    printf("product of two number is %d\n",product); 
    printf("difference of two number is %d\n",differnce);
    // In C, the behavior of the / operator depends entirely on the data types of the numbers you are dividing.
    //  When you divide two integers, C automatically performs integer division, which throws away the remainder and returns only the quotient.
    printf("quotient of two number is %d\n",a/b);
    return 0;
}