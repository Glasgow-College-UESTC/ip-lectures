#include <stdio.h>
int main()
{
    int sum = 0;
    for (int n = 1; n < 10; n++){
        if (!(n % 5)) {
            break;
        }
        sum += n;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}