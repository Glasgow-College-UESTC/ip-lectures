/*A simple calculator for two numbers
13-Sep-2023
Hasan Tahir Abbas*/

// #include<stdio.h>

// int main(void)
// {
//     float a = 7;
//     float b = 230;
//     printf("the division of the variables %f and %f is %51.50e\n", a,b, a * b a*+b); // illegal expression - not allowed - the compiler expects something in between a and b
//     // *+ is not a valid operator
//     // += is a valid operator a +=b is the same as a = a +b 
//     return 0;
// }

#include <stdio.h>
int main(void)
{
    double a = 2;
    double b = 3;
    printf("%1f/%1f-%51.52f\n", a, b, a / b);
    return 0;
}