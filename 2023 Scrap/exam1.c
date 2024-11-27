#include <stdio.h>

int main()
{

    // Declare variables
    int psi;
    double bar, kpa;
    printf("Enter a tyre pressure value in psi:\n");
    scanf("%d", &psi);

    // Generate and print the conversion table
    printf("%-10s%-10s%-10s\n", "psi", "bar", "kPa");
    while (psi <= 50)
    {
        bar = psi * 0.0689475729; // Conversion from PSI to BAR
        kpa = psi * 6.89475729;   // Conversion from PSI to KPA

        // Print values with the specified format
        printf("%-10d%-10.2f%-10.2f\n", psi, bar, kpa);
        psi++;
    }

    return 0;
}
