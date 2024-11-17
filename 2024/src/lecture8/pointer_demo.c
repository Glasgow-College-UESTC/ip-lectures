#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr, *ptr2, *ptr3;
    ptr = &a;
    ptr2 = &b;
    ptr3 = &c;
    printf("%p\n%p\n%p\n%d\n%d\n%d\n%p\n%p\n Size is: %lu\n as well as %lu\n as well as %lu\n as well as %lu\n", ptr, ptr2, ptr3, *(ptr - 1), *(ptr - 2), *(ptr + 3), (ptr + 4), (ptr + 5), sizeof(ptr), sizeof(int *), sizeof(a), sizeof(void *));
    printf("\n%d\n", *((int *)ptr2));
    return 0;
}