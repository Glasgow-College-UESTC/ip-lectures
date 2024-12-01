#include <stdio.h>

double div2_pass_by_value(double x) {
    return x / 2;
}

double div2_pass_by_reference(double *x_ptr) {
    double x = *x_ptr;  // store the value pointed to by x_ptr to x
    *x_ptr = x / 2;     // store the value of x / 2 to the addresses pointed to by x_ptr
    return *x_ptr;      // return the value of x_ptr
}

int main() {
    double a = 20;
    double b = div2_pass_by_value(a);
    printf("a=%5.1lf  b=%5.1lf\n", a, b);   // a= 20.0  b= 10.0
    a = div2_pass_by_reference(&b);
    printf("a=%5.1lf  b=%5.1lf\n", a, b);   // a=  5.0  b=  5.0
    return 0;
}