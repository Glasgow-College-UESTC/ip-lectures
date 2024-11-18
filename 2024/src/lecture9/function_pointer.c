#include <stdio.h>

// Declaring a function to add
int add(int a, int b) {
    return a + b;
}

// Declaring a function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// A pointer function, indirectly calling a function from another function
void executeOperation(int (*operation)(int, int), int x, int y) {
    printf("Result: %d\n", operation(x, y));
}

int main() {
    executeOperation(add, 10, 5);        // Outputs: Result: 15
    executeOperation(subtract, 10, 5);  // Outputs: Result: 5
    return 0;
}