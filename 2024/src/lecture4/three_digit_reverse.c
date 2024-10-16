#include <stdio.h>
int main(void)
{
    int input, unit, ten, hundred;
    int temp; // for temporarily storing a value

    printf("\nEnter a three-digit number: ");
    scanf("%d", &input);

    hundred = input / 100; // Get the hundreds digit
    temp = input % 100;    // Remove the hundreds digit
    ten = temp / 10;       // Get the tens digit
    unit = input % 10;     // Get the unit digit

    printf("\n\nThe reversed number is %d%d%d\n\n", unit, ten, hundred);
    return 0;
}