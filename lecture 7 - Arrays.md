---
title: UESTC 1005 - Introductory Programming
description: Course Slides for the C programming course - lecture 6 on nested loops and functions
theme: uncovered
paginate: true
math: katex
transition: fade
_paginate: false
style: |
  .columns {
    display: grid;
    grid-template-columns: repeat(2, minmax(0, 1fr));
    gap: 1rem;
  }
_backgroundColor: "#FFF"
_color: "#093867"

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 1005 — Introductory Programming

Lecture 7 — Arrays

<!-- ```C
extern int add (int a, int b)
extern float add (float a, float b);
extern double add (double a,double b);
x = add(4, 0.3);
``` -->
Hasan T Abbas
[Hasan.Abbas@glasgow.ac.uk](mailto:Hasan.Abbas@glasgow.ac.uk)

<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

--- 

# <!--fit--> <span style="color:white"> Today, we will be off by 1 </span>

![bg opacity:100%](assets/gradient2.jpg)

---

<div class="columns">
<div class="columns-left">

# Lecture Outline

- Computer Memory
- Data Structures
- Arrays

![bg right:35% 100%](assets/tablesetup.png)

---


# Computer Memory

- In C programming language, we don't focus on <span style="color:orange">*how*</span> memory is organised
- We rather specify an *address* and a *size*

![bg right:45% 90%](assets/array%20block.svg)

---

# Computer Memory

```C
#include <stdio.h>
int main(void)
{
    char c = 1;
    printf("%d %p\n", c, (void *)&c); // we are printing the address of the variable
    int i = 2;
    printf("%d %p\n", i, (void *)&i); // the %p placeholder is reserved for pointers
    double d = 3.0;
    printf("%f %p\n", d, (void *)&d); // More on (void *) tomorrow
    return 0;
}
```

Output is:

```
1 0x16cf32e1b
2 0x16cf32e14
3.000000 0x16cf32e08
```

---

# Computer Memory 💡

Main Takeaways

- No hard rules <span style="color:blue">where</span> the variables are stored in the memory
- Memory management done automatically by C programming language
- Data can be stored <span style="color:red">anywhere</span>
- We can use `sizeof()` to check how much space each variable type occupies

---

# Data Structures

- Previously, we have been talking about data types
- For large data, we need more organisation of the data
- Enter data structures that allow efficient access and store of data

![bg right:50% 95%](assets/tikz_tree.svg)

---

# <!--fit--> <span style="color:white"> Arrays </span>

![bg opacity:100%](assets/gradient.jpg)

---

![bg 90%](assets/C_arrays.svg)

---

# Arrays

- Variables are *scalar*. Can only store one value
- Arrays are *vectors*, we can store a collection of values
- Array is the simplest data structure
- All the array <span style="color:orange">elements</span> have the same data type
- Array elements occupy consecutive memory locations.

---

# Array Declaration

- We need to specify the `type` of array and `number` of elements
- The first element of the array starts from `0`
- We use the array index to access array elements

```C
int class[100]; // create an array `class` of type `int` containing 100 elements
```

---

# Example Program 🔑

```C
#include <stdio.h>
int main(void)
{
    int array[5];
    printf(" array == %p\n", (void *)array);
    for (int i = 0; i < 5; i++)
    {
        printf("&array[%d] = %p\n", i, (void *)&array[i]); // %p is used for pointers
    }
    printf("size of array = %zu bytes\n", sizeof(array)); // %zu is for unsigned long
    return 0;
}
```

- Array elements are stored contiguously in memory
- Array name is also the address of the first element
- Array starts with index `0` and the last is `4`

---

# But Why Arrays? 🤔

- Imagine you are a teacher 👩‍🏫🧑‍🏫
- There are 280 students in your class
- You are required to compile the midterm results
- You also need to generate statistics, like highest/lowest marks, average, median etc.

---

# <span style="color:red">**Solution**</span>

- Let's create a table of the marks
- We note that left column is the index (off by 1 😉)
- Second column contains integers between 0 – 100

![bg right:50% 20%](assets/Array_marks.svg)

---

# Array Declaration 

- First let's create an array called `grades`
- The array should hold `int` type numbers
- `[]` is the array (subscript) operator, only accepts integers  
- The array should be able to store `280` elements
- 🔑 <span style="color:green">We reserve the array size *before* compiling</span>

```C
int grades[280]; // array declaration
```

---

# Array Initialisation 

- Like variables, we can initialise array with values but with several ways

```C
int grade[5] = {100,90,80,50,60}; // provide individual elements
```

```C
int grade[5] = {0}; // initialise all the 5 elements of grade array to zero
```

```C
int grade[5] = {[3] = 90, [4] = 100}; // designated initialisation
```

- ❗<span style="color:red">We cannot go over the array index </span>

---

# Feeding the Data

- Without arrays, we will <span style="color:red">need 280 variables</span>.
- Tedious and time-consuming.

```C
// Input grades for each student
for (int i = 0; i < 280; i++)
{
    printf("Enter the grade for Student %d: ", i + 1); // notice we are off by 1 again :-)
    scanf("%d", &grades[i]);
}
```

---

# Data Processing and Statistics

- We are interested in the class average
- We can iterate through the array using loops

```C
// Calculate the average grade
    int sum = 0;
    for (int i = 0; i < 280; i++) {
        sum += grades[i]; // note we can access individual elements
    }
    double average = (double)sum / numStudents;

    // Display the grades and average
    printf("Grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]); 
    }
    printf("Average Grade: %.2f\n", average);
```

---

# Searching the Arrays ⚡

- We are also interested in the highest and lowest marks
- We can go over the array in a [linear fashion](https://datalgo-7c588.firebaseapp.com/LinearSearch)

```C
    // Find the highest and lowest grade
    int highest = grades[0];
    int lowest = grades[0];
    for (int i = 1; i < 280; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    printf("Highest Grade: %d\n", highest);
    printf("Lowest Grade: %d\n", lowest);
```

---

# Array Sorting 💡

- Historically, sorting algorithms have attracted huge research interests
- The task is to organise the data in some order
- Sorting is critical in deciding the performance of search algorithms
- There are several algorithms used today, we will look at [Bubble sort](https://datalgo-7c588.firebaseapp.com/bubble-sort)

<video src="assets/bubble_sort.mp4" controls width="50%"></video>

---

# 🫧 Bubble Sort Algorithm 🫧

- One of the simplest sorting algorithms
- We compare adjacent elements and swap if needed
- Bubble sort is very inefficient in performance
- Not suitable for practical use in large datasets

![bg right 70%](assets/bub_sort.gif)

---

# 🫧 Bubble Sort Implementation 🫧

```C
void bubbleSort(int arr[], int n) {
    int temp;
    int swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no two elements were swapped in the inner loop, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}
```

---

# Questions :question:

![bg right 60%](assets/quiz-4.png)

[https://www.menti.com/alkwf6e2vb9u](https://www.menti.com/alkwf6e2vb9u) and type the code `2543 7042`.

---

# Next Up ⏭️

- Multidimensional Arrays
- Pointers