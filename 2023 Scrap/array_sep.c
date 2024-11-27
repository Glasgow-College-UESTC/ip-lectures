// #include <stdio.h>

// int main() {
//     int n;

//     // Get the number of elements in the array from the user
//     printf("Input the number of elements of the array (up to 7): ");
//     scanf("%d", &n);

//     if (n <= 0 || n > 7) {
//         printf("Invalid input. Number of elements must be between 1 and 7.\n");
//         return 1; // Exit with an error code
//     }

//     int inputArray[10], oddArray[10], evenArray[10];
//     int oddCount = 0, evenCount = 0;

//     // Input elements into the array
//     printf("Input the %d elements in the array:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("element[%d]: ", i);
//         scanf("%d", &inputArray[i]);
//     }

//     // Separate odd and even numbers into separate arrays
//     for (int i = 0; i < n; i++) {
//         if (inputArray[i] % 2 == 0) {
//             evenArray[evenCount++] = inputArray[i];
//         } else {
//             oddArray[oddCount++] = inputArray[i];
//         }
//     }

//     // Print the even array
//     printf("The array with even numbers plus one is:\n");
//     for (int i = 0; i < evenCount; i++) {
//         printf("%d ", evenArray[i]);
//     }
//     printf("\n");

//     // Print the odd array
//     printf("The array with odd numbers is:\n");
//     for (int i = 0; i < oddCount; i++) {
//         printf("%d ", oddArray[i]);
//     }
//     printf("\n");

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Get the number of elements in the array from the user
    printf("Input the number of elements of the array (up to 7): ");
    scanf("%d", &n);

    if (n <= 0 || n > 7)
    {
        printf("Invalid input. Number of elements must be between 1 and 7.\n");
        return 1; // Exit with an error code
    }

    int inputArray[7];
    int evenArray[7];
    int oddArray[7];
    int oddCount = 0, evenCount = 0;

    // Input elements into the array
    printf("Input the %d elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element[%d]: ", i);
        scanf("%d", &inputArray[i]);
    }

    // Calculate the number of even and odd elements in the array
    for (int i = 0; i < n; i++)
    {
        if (inputArray[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    // Reset the counts
    oddCount = 0;
    evenCount = 0;

    // Separate even and odd elements based on the array address
    for (int i = 0; i < n; i++)
    {
        if (inputArray[i] % 2 == 0)
        {
            evenArray[evenCount++] = inputArray[i];
        }
        else
        {
            oddArray[oddCount++] = inputArray[i];
        }
    }

    // Print the even array
    printf("The array with even numbers is:\n");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    // Print the odd array
    printf("The array with odd numbers is:\n");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", oddArray[i]);
    }
    printf("\n");


    return 0;
}
