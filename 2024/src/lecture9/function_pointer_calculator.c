#include <stdio.h>

// Function declarations for operations
float add(int a, int b) {
    return (float)(a + b);
}

float subtract(int a, int b) {
    return (float)(a - b);
}

float multiply(int a, int b) {
    return (float)(a * b);
}

float divide(int a, int b) {
    if (b != 0) {
        return (float) ((float) a / (float) b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

// Main program
int main() {
    int num1, num2, choice;
    int (*operation)(int, int); // Function pointer declaration

    // Menu for user input
    printf("Enter two numbers: ");
    scanf("%d\n%d", &num1, &num2);

    printf("\nSelect an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Assign the appropriate function to the pointer
    switch (choice) {
        case 1:
            operation = add; // add is a pointer to the location where the function add is stored in memory
            break;
        case 2:
            operation = subtract; // indirectly call a functionv (indirection)
            break;
        case 3:
            operation = multiply; // event handles 
            break;
        case 4:
            operation = divide;
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    // Execute the operation using the function pointer
    float result = operation(num1, num2); // this is the callback function 
    //that we would like to perform 

    float x;
    x = add (num1, num2); // static execution we cANNOT perform event handling at run time 
    printf("Result: %f\n", result);

    return 0;
}