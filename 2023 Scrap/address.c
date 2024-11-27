// //

// #include <stdio.h>
// #include <math.h>

// #define WIDTH 50
// #define HEIGHT 50
// #define RADIUS 20

// int main()
// {
//     char image[HEIGHT][WIDTH];

//     // Initialize the image with ' ' characters
//     for (int y = 0; y < HEIGHT; y++)
//     {
//         for (int x = 0; x < WIDTH; x++)
//         {
//             image[y][x] = ' ';
//         }
//     }

//     // Draw a circle in the center of the image
//     for (int y = 0; y < HEIGHT; y++)
//     {
//         for (int x = 0; x < WIDTH; x++)
//         {
//             int dx = x - WIDTH / 2;
//             int dy = y - HEIGHT / 2;
//             if (dx * dx + dy * dy <= RADIUS * RADIUS)
//             {
//                 image[y][x] = '#';
//             }
//         }
//     }

//     // Print the image
//     for (int y = 0; y < HEIGHT; y++)
//     {
//         for (int x = 0; x < WIDTH; x++)
//         {
//             putchar(image[y][x]);
//         }
//         putchar('\n');
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int array[5];
//     printf(" array == %p\n", (void *)array);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("&array[%d] = %p\n", i, (void *)&array[i]); // %p is used for pointers
//     }
//     printf("size of array = %zu bytes\n", sizeof(array)); // %zu is for unsigned long
//     return 0;
// }

#include <stdio.h>

// Define the maximum number of students
#define MAX_STUDENTS 100

int main()
{
    // Declare an array to store student grades
    int grades[MAX_STUDENTS];

    int numStudents;

    // Prompt the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Check for a valid number of students
    if (numStudents <= 0 || numStudents > MAX_STUDENTS)
    {
        printf("Invalid number of students. Exiting...\n");
        return 1;
    }

    // Input grades for each student
    for (int i = 0; i < numStudents; i++)
    {
        printf("Enter the grade for Student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    // Calculate the average grade
    int sum = 0;
    for (int i = 0; i < numStudents; i++)
    {
        sum += grades[i];
    }
    double average = (double)sum / numStudents;

    // Display the grades and average
    printf("Grades:\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }
    printf("Average Grade: %.2f\n", average);

    // Find the highest and lowest grade
    int highest = grades[0];
    int lowest = grades[0];
    for (int i = 1; i < numStudents; i++)
    {
        if (grades[i] > highest)
        {
            highest = grades[i];
        }
        if (grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }
    printf("Highest Grade: %d\n", highest);
    printf("Lowest Grade: %d\n", lowest);

    return 0;
}
