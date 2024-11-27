#include <stdio.h>

// Function to swap two double values
void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort an array in ascending order using pointers
void sort_array(double *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    // Get the length of the arrays from the user
    printf("Enter the length of the arrays (up to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid input. Length must be between 1 and 100.\n");
        return 1; // Exit with an error code
    }

    double voltage[100], impedance[100], current[100];

    // Input elements for the voltage array
    printf("Enter %d voltage measurements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &voltage[i]);
    }

    // Input elements for the impedance array
    printf("Enter %d impedance measurements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &impedance[i]);
    }

    // Calculate the current array
    for (int i = 0; i < n; i++) {
        if (impedance[i] != 0) {
            current[i] = voltage[i] / impedance[i];
        } else {
            current[i] = 0; // Avoid division by zero
        }
    }

    // Sort the current array in ascending order using the sort_array function
    sort_array(current, n);

    // Display the sorted current array
    printf("Sorted Electric Currents (Ascending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("Current at Point %d: %.2lf\n", i + 1, current[i]);
    }

    return 0;
}
