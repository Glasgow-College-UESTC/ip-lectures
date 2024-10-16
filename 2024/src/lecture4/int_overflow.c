#include <stdio.h>

int main() {
    int a = 12345678910;
    long b = 12345678910;
    printf("|%d %d %ld|\n", a, b, b);
    return 0;
}