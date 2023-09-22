#include <stdint.h>
#include <stdio.h>
#include <limits.h>


int64_t divide(int64_t x, int64_t y)
{
    return x / y;
}

int main()
{
    int64_t x,y,z;
    x = 34;
    y = 42;
    z = divide(x,y);
    printf("%lld\n",z);
    return 0;
}