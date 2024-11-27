#include <stdio.h> // which has definitions of printf function

int main() // void means nothing
{
    int a = 10;           // declare an integer variable
    int *ptr;             // declare a pointer
    ptr = &a;             // and initialize it to the address of 'a'
    printf("%d\n", *ptr); // dereference the pointer and print the value it points to
    printf("%p\n", ptr);  // print the value the pointer points to
    printf("%p\n", &a);   //  print the address of a
    printf("%d\n", a);    //  print the value of a
    return 0;
}