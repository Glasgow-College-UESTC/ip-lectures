#include <stdio.h>
int main( )
{
    char c = 'Y'; // c is 0x6ddb6f9b
    char *cp = &c;
    printf("cp is 0x%08x\n", cp);
    printf("The character at cp is %c\n", *cp);
    cp = cp + 1;
    printf("cp is 0x%08x\n", cp);
    return 0;
}