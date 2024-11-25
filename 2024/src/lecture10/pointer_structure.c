#include <stdio.h>

struct Student
{
    char name[50]; // Name of the student
    int grades[5]; // Array to store 5 grades for each subject in semester 1
};

int main()
{
    // Declare and initialize a structure
    struct Student ip_student[2] =
    {
        {"DaXue Sheng", {85, 90, 88, 92, 67},
         {"DaXue Sheng", {85, 90, 88, 92, 67}}}};


// Declare a pointer to the structure
struct Student *ptr = &ip_student; // notice that now we are using an & sign

// Access array elements using the pointer
printf("Student Name: %s\n", ptr->name); // we can access different elements/members of the structre
printf("Grade 1: %d\n", ptr->grades[0]); // lines 17 and 18 are equivalent
printf("Grade 1: %d\n", ip_student.grades[0]);
printf("Grade 5: %d\n", ptr->grades[4]);

return 0;
}