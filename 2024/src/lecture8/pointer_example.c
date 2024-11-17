#include <stdio.h>

int main()
{
    char *p;
    char a = 'A';
    char b = 'B';
    p = &a; //
    p += 1; // arithmetic on the pointer 
    printf("%c\n", *p);
    return 0; // in macOS which is the operating system, this is to show that the program has successfukkt restructuring
}