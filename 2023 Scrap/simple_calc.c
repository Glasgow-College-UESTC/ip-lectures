/* This is a simple Calculator program
That adds, subtracts, multiplies and divides two numbers
20-Sep-2023
Hasan Tahir Abbas
*/

// The header
#include<stdio.h> // which has definitions of printf function

int main () // void means nothing 
{
    // these are the inputs
    double x,y; // double is a long float
    // x = 8; // = operator to "assign" a value to the variable
    // y = 600; // 1.33333
    printf("Enter the values of the two variables\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    {
        /* data */
    };
    

    // we would compute the arithmetic
    printf("The sum of two numbers is %10lf \n", x + y); // anything inside "" is a string
    printf("The difference of two numbers is %lf\n", x - y);
    printf("The product of two numbers %lf and %lf is %lf\n", x,y, x*y);
    printf("The ratio of %lf and %lf is %e\n", x, y, x/y);

    return 0;
}