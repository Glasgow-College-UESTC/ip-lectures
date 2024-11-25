#include <stdio.h>

struct Student {
    char name[50];       // Name of the student
    int grades[5];       // Array to store 5 grades
};

int main() {
    // Declare and initialize a structure
    struct Student ip_student = {"DaXue Sheng", {85, 90, 88, 92, 67}};
    
    // Declare a pointer to the structure
    struct Student *ptr = &ip_student;

    // Access array elements using the pointer
    printf("Student Name: %s\n", ptr->name);
    printf("Grade 1: %d\n", ptr->grades[0]);
    printf("Grade 5: %d\n", ptr->grades[4]);
    
    return 0;
}