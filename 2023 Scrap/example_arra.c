#include <stdio.h>
int main(void)
{
    char c = 1;
    printf("%d %p\n", c, (void *)&c); // we are printing the address of the variable
    printf("%lu is the size of the int variable\n", sizeof(c));
    int i = 2;
    printf("%d %p\n", i, (void *)&i); // the %p placeholder is reserved for 
    printf("%lu is the size of the int variable\n", sizeof(i)); 
    // pointers
    double d = 3.0; // d is the first address of the program variables
    printf("%lu is the size of the int variable\n", sizeof(d));
    // even when it was created in the
    printf("%f %p\n", d, (void *)&d); // More on (void *) tomorrow
    return 0;
}
