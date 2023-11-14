#include <stdio.h> // which has definitions of printf function

int main() // void means nothing
{
    int x = 25, y = 50, z = 75;
    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);
    *ptr = *ptr + 100;
    printf("%d\n", *ptr);
    printf("%d\n", x);
    ptr = &y;
    printf("%d\n", *ptr);
    printf("%d\n", y);
    *ptr = *ptr + 100;
    ptr = &z;
    *ptr = *ptr + 100;
    printf("%d\n", *ptr);
    printf("%d\n", z);
    return 0;
}
