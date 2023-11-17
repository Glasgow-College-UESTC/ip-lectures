#include <stdio.h> // which has definitions of printf function
#include<string.h>
int main() // void means nothing
{
    // int a = 10;
    // int b = 20;
    char *p;
    char a;
    char b;
    p = &a;
    printf("%p\n", p); // the ADDRESS OF THE VARIABLE b
    p += 1; // in memory we use a term stack 
    // printf("%d\n", *p); // the value of the dereferenced pointer i.e. a
    printf("%p\n", p); // the ADDRESS OF THE VARIABLE b
    printf("%p\n", &a); // variable a comes later on the memory stack
    printf("%p\n", &b); // the address of the variable b 
    strcmp
    return 0;
}