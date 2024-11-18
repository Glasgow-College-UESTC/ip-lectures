#include <stdio.h>

int main()
{
    char x = '5';
    char *p = &x;
    char **pp = &p;
    char ***ppp = &pp;

    printf("%p\n", p);
    printf("%p\n", pp);
    printf("%p\n", ppp);
    // printf("%p\n", *pp);
    printf("%p\n", *ppp);
    // printf("%p\n", ppp);
    printf("%p\n", **ppp);
    // printf("%c\n", ***ppp);
    // printf("%c\n", **pp);
    // printf("%c\n", *p);

    return 0;
}