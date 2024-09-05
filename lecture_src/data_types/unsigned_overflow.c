#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
    unsigned short x, y, z;

    printf("sizeof(x) = %zu (bytes)\n", sizeof(x));
    printf("USHRT_MAX = %d\n", USHRT_MAX);

    x = 1;
    y = x - 2;
    z = x + 65535;

    printf("x = %hu, y = x - 2 = %hu, z = x + 65534 = %hu\n", x, y, z);

    return 0;
}