#include <stdio.h>
#include <assert.h>

// Problem statement: calculate the sum of the square of each integer
// on the interval [n1, n2] that is divisible by 3.

int main(int argc, char **argv) {
    int n1, n2;
    unsigned result;

    scanf("%d %d", &n1, &n2);
    assert(n1 <= n2);

    // Comment and uncomment the below, show how to add "-Wall"
    // compiler flag option, use debugger to explain the output when
    // result = 0;

    // Need to document how to set compiler flags, e.g., optimization
    // option is important.

    // Initially use condition "i < n2" and use the debugger to
    // determine the mistake.
    for (unsigned i = n1; i <= n2; i++) {
        if (i % 3 == 0) {
            result += i * i;
        }
    }

    printf("%d\n", result);

    return 0;
}
