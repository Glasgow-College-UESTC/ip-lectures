#include <stdio.h>

// Function to validate user input for number of readings
int input_validation()
{
    int n;
    do
    {
        printf("Enter the number of readings (1-100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100); // Valid input range is 1 to 100
    return n;
}

// Function to calculate power and handle division by zero
void calculate_power(float *voltage, float *resistance, float *power, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(resistance + i) != 0)
        {
            *(power + i) = (*(voltage + i) * *(voltage + i)) / *(resistance + i);
        }
        else
        {
            printf("Warning: Resistance at index %d is zero. Power cannot be calculated.\n", i);
            *(power + i) = -1; // Special value to indicate invalid power
        }
    }
}

// Function to find abnormal readings (power > threshold) and return count
int find_abnormal_readings(float *power, int *indices, int n, float threshold)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(power + i) > threshold)
        {
            *(indices + count++) = i; // Store index of abnormal reading
        }
    }
    return count;
}

// Function to sort the power array in descending order along with voltage and resistance using pointer notation
void sort_power_descending(float *power, float *voltage, float *resistance, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(power + j) < *(power + j + 1))
            {
                // Swap power using pointer notation
                float tempPower = *(power + j);
                *(power + j) = *(power + j + 1);
                *(power + j + 1) = tempPower;

                // Swap corresponding voltage
                float tempVoltage = *(voltage + j);
                *(voltage + j) = *(voltage + j + 1);
                *(voltage + j + 1) = tempVoltage;

                // Swap corresponding resistance
                float tempResistance = *(resistance + j);
                *(resistance + j) = *(resistance + j + 1);
                *(resistance + j + 1) = tempResistance;
            }
        }
    }
}

// Main function
int main()
{
    int n = input_validation(); // Get valid number of readings

    float voltage[100], resistance[100], power[100];

    // Input voltage and resistance values
    for (int i = 0; i < n; i++)
    {
        printf("Enter voltage[%d]: ", i);
        scanf("%f", &voltage[i]);
        printf("Enter resistance[%d]: ", i);
        scanf("%f", &resistance[i]);
    }

    // Calculate power
    calculate_power(voltage, resistance, power, n);

    // Input threshold for abnormal readings
    float threshold;
    printf("Enter the power threshold to detect abnormal readings: ");
    scanf("%f", &threshold);

    // Find abnormal readings
    int abnormalIndices[100];
    int abnormalCount = find_abnormal_readings(power, abnormalIndices, n, threshold);

    // Display abnormal readings
    if (abnormalCount > 0)
    {
        printf("\nAbnormal readings (power > %.2f):\n", threshold);
        for (int i = 0; i < abnormalCount; i++)
        {
            int idx = abnormalIndices[i];
            printf("Index %d: Voltage = %.2f, Resistance = %.2f, Power = %.2f\n",
                   idx, voltage[idx], resistance[idx], power[idx]);
        }
    }
    else
    {
        printf("\nNo abnormal readings found.\n");
    }

    // Sort power array in descending order using pointers
    sort_power_descending(power, voltage, resistance, n);

    // Display sorted values
    printf("\nSorted readings (by descending power):\n");
    for (int i = 0; i < n; i++)
    {
        if (power[i] != -1)
        { // Only display valid power readings
            printf("Voltage = %.2f, Resistance = %.2f, Power = %.2f\n", voltage[i], resistance[i], power[i]);
        }
    }

    return 0;
}
