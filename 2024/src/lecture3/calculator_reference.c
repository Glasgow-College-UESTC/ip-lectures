#include <stdio.h>
#include <assert.h>

int main() {
    double a, b;
    char operator;

    a = -1;
    b = -3;
    operator = 'x';

    printf("Enter a simple arithmetic expression (<a> <operator> <b>):\n");
    scanf("%lf %c %lf", &a, &operator, &b);

    printf("a = %lf\n", a);
    printf("operator = %c\n", operator);
    printf("b = %lf\n", b);

    double result = 0;
    if (operator == '+') {
        result = a + b;
    }
    else if (operator == '-') {
        result = a - b;
    }
    else if (operator == '*') {
        result = a * b;
    }
    else if (operator == '/') {
        result = a / b;
    }
    else {
        assert(0);
    }
    printf("result = %lf\n", result);

    return 0;
}
