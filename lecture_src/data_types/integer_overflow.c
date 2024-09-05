#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
    short u, v;

    printf("short u, v\n");
    printf("sizeof(u) = %zu (bytes)\n", sizeof(u));
    printf("SHRT_MIN = %d, SHRT_MAX = %d\n", SHRT_MIN, SHRT_MAX);

    u = 32767;
    v = u + 1;

    printf("u = %hd, v = u + 1 = %hd\n", u, v);

    unsigned short x, y;

    printf("\nunsigned short x\n");
    printf("sizeof(x) = %zu (bytes)\n", sizeof(x));
    printf("USHRT_MAX = %d\n", USHRT_MAX);

    x = 1;
    y = x - 2;

    printf("x = %hu, y = x - 2 = %hu\n", x, y);

    return 0;
}