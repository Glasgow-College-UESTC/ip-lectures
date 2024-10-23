#include <stdio.h>
int main() {
    int i;
    int n = 4;
    for (i = 2; i < n; i++)
        if (n % i == 0) break;
    // execution continues at this point after "break"
    if (i < n) printf("%d is divisible by %d\n", n, i);
    else       printf("%d is prime\n", n);
    return 0;
}