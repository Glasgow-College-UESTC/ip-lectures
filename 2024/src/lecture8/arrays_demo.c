#include <stdio.h>
#define N 5 // size of the matrix size is always 1 more
int main(void)
{
    char *p;
    char a = 'A';
    char b = 'B';
    p = &a;
    printf("%c\n", *p); 
    p += 1; // we have accesssed the value of the variable b in this case
    printf("%c", *p);
    return 0;
}