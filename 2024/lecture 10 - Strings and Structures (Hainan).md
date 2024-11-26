---
title: UESTC 1005 - Introductory Programming
description: Course Slides for the C programming course - lecture 10 - strings and structures
theme: uncovered
paginate: true
math: katex
transition: fade
_paginate: false
style: |
  .columns {
    display: grid;
    grid-template-columns: repeat(2, minmax(0,fs 1fr));
    gap: 1rem;
  }
  section {
      background-color: #FFFCEE;
  --color-background: #FFFCEE;
  }
_backgroundColor: "#FFFCEE"
_color: "#093867"

---

# It is good to be back in Hainan! ☀️☀️☀️

<style scoped>
video {
  display: block;
  margin: auto;
}
</style>

<video controls width="300">

  <source src="assets/edinburgh_snow.mp4" type="video/mp4" />
</video>


---

![bg right:45%](assets/Rcs-bust.jpg)

# "Manipulating strings in C or C++ is error prone."
# "If the pointer is not pointing to a valid object or function, bad things may happen."

## &mdash; Robert C. Seacord (computer security expert and respected author)


---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 1005 — Introductory Programming

<h2>Lecture 10 &mdash; Strings and Structures</h2>

Dr. Hasan T. Abbas

<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

<style scoped>
    .team-table {
        .bottom: 1%;
    }
</style>

<div align="center">
<p style="margin-bottom:0.5cm;">

| Chengdu Team | Hainan Team |
|--------------|-------------|
| Dr. Syed M. Raza | Dr. Mark D. Butala |
| Dr. Ahmad Zoha | Prof. Bo Liu |
| Dr. Hassan T. Abbas | Prof. Chong Li |

</p>
</div>

---

# Glasgow/UESTC Programming Competition 2024&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;🥇🥈🥉

- Date: **November 30** (for Hainan students)
- C exercises with Codegrade submission

![bg right:50% 80%](assets/programming_competition_2024.png)

---

# Questions 🙋❓

- Ask me anything (programming-related 😎)

---

<div class="columns">
<div class="columns-left">

# Lecture Outline

- Strings🧵
- Structure 🍱
- Dynamic memory allocation ☢️
- Structure pointers ↗️

---

# But First a Recap ..

- A **pointer** is a variable that stores the address of another variable.
- Efficient memory management
- Direct access to data
- Dynamic memory handling.

```C
#include <stdio.h> // which has definition of printf function

int main() // void means nothing
{
    int x = 10;
    int *ptr = &x;
    printf("%d\n", *ptr);  // Outputs 10
    return 0;
}
```

---

# Strings 🧵

- An array of characters terminated by the **null character** (`\0`).
- A contiguous block of memory where each character is accessible via indexing or pointers.
- A nice library `string.h` with many useful functions

```c
char str[10] = "Chengdu";
```

```
 54   55   56   57   58   59   60   61   62   63   64   65   66   67   68   69
+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
| 62 | 22 | 55 | 1  | C  | h  | e  | n  | g  | d  |  u | \0 | \0 | \0 | 10 | 3  |
+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
```

---

# The `string` library

- `#include <string.h>` has many useful strings functions

```C
char str1[10] = "UESTC";
char str2[10] = "1005"
printf("%s %s", str1, str2); // %s placeholder for strings
strcat(str1, str2); // concatenates two strings
strcpy(str1, str2); // copies one strings to another
strcmp(str1, str2); // compare the elements of two strings
strlen(str1);
```

---

# ⚠️ `strcat`, `strcpy`, and `strcmp` can be dangerous

For example, the programmer is responsible that:
- The input parameters are strings (null terminated arrays)
- The destination array is large enough to accommodate the result
- Failure to do so will result in runtime failure (segmentation violation error)

``` C
char str1[] = "xxx";
char str2[] = "I AM A VERY LONG STRING"
strcpy(str1, str2);  // compiles, but will (liekly) fail at runtime
```

---

# Strings and Pointers

- Everything we said about arrays is also true for strings
- The name of the string points to the first string element
- Used in efficient data processing involving text

```C
char str[] = "UESTC 1005";
char *ptr = str; // Points to the first character
printf("%c", *(ptr + 1)); // Outputs 'E'
printf("%s", *(ptr + 6)); // Outputs '1005'
```

---

# String Tokenisation 🇬🇧💂‍♂️🏏 (I cringe and want to change the slide title to String Tokenization 🇺🇸🗽⚾)

- Split a single string to multile components (tokens)
- For example, how to split an IP address `192.168.1.1` into its four octet components?
- `strtok()` function splits a string based on specified a *delimiter*, i.e., characters that denote a break between tokens
- The "string tokenize" function in `string.h` has the following function signature:

```C
char *strtok(char *str, const char *delim);
```

- Powerful and useful function, but it is relative complex

---

# The `strtok()` Function

- Major source of complexity: first call is different from subsequent calls

```C
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "apple,banana,orange";
    char *token;

    // Get the first token
    token = strtok(str, ",");
    while (token != NULL) {
        printf("%s\n", token); // Print the token
        token = strtok(NULL, ","); // Get the next token
    }

    return 0;
}
```

---

# <!--fit--> <span style="color:white"> Dynamic Memory Allocation in C</span>

![bg opacity:100% decorative background](assets/gradient.jpg)


---

# Why is Dynamic Memory Allocation Necessary?

- Until now, we have only considered arrays of *fixed* size and *explicit* length specified at compile time, e.g., `int x[10];`
- What if the appropriate array length depends on program input?
- Option 1: allocate enough memory to store the maximum expected data length

``` C
#include <stdio.h>
int main() {
    char given_name[11];
    printf("Enter your given name (no more than 10 characters): ");
    scanf("%s", given_name); printf("given_name = %s\n", given_name);
    return 0;
}
```

- What happens if the user enters a string with more than 10 characters?
- What if the maximum expected data length is unknown?
---

# Introduction to `malloc` and `free`

- Option 2: request memory from the operating system *dynamically*, i.e., at runtime

``` C
#include <stdio.h>
#include <stdlib.h>
int main() {
    int   given_name_length;
    char *given_name;
    printf("What is the length of your given name? ");
    scanf("%d", &given_name_length);

    // allocate enough memory to store given_name_length characters and \0
    given_name = malloc(sizeof(char) * (given_name_length+1));
    if (given_name == NULL) {                 // NULL pointer is defined in stdlib.h
        printf("Insufficient memory!");
        return 1;
    }

    printf("\nEnter your given name: ");
    scanf("%s", given_name);
    printf("given_name = %s\n", given_name);

    free(given_name);                         // deallocate memory and return it to the operating system

    return 0;
}
```

---

# A Source of Pain and Suffering (Welcome to Pointer Hell ⛧😈🔥)

![bg right:34%](assets/spiderman.png)

- C provides few (if any?) guardrails 🚧 to protect the programmer from dangerous behavior
- For example, what happens if you:
  + Do not check if `malloc` returns `NULL`?
  + Call `malloc` but forget to later call `free`?
  + Use a pointer that was never `malloc`'ed?
  + Call `free` to deallocate the same memory more than once?
  + Forget to allocate space for the `\0` that will terminate a string?

---

# <!--fit--> <span style="color:white"> Structures in C</span>

![bg opacity:100% decorative background](assets/gradient.jpg)

---

# So what is a Structure 🍱?

- A user-defined data type composed of variables of (potentially) different types
- Better data organization
- Allocate storage all at once

```C
struct StructureName {
    dataType1 member1;
    dataType2 member2;
};
```

```C
struct Person {
    char    name[10];
    int     age;
    char    gender;
    double  weight ; // in kgs
};
```

---

# Why Structures? 🤔

- Organise related data together
- *Modular code design* involves separation of data from code

```C
struct Coordinate {
    int x, y, z;
};
struct Coordinate p1 = {10, 20, 30};
```

```C
// dynamic memory allocation for a Coordinate
struct Coordinate *p = (struct Coordinate *) malloc(sizeof(struct Coordinate));
p->x = 10; p->y = 20; p->z = 30;
```

- We did not check if `p` is `NULL`
- Will we remember to later call `free(p)`?

---

# Accessing the Structure Members

- The *dot operator* is used to peer into a structure and refer to its members:
```C
struct Coordinate {
    int x, y, z;
};
struct Coordinate p1 = {10, 20, 30};
p1.x = 15;
printf("%d", p1.x);
```

- Example of member access using a pointer:

```C
struct Coordinate *ptr = &p1;
ptr->x = 15;
```

- Note that the *arrow operator* `ptr->x` is equivalent to `(*ptr).x`

---

# An Array of Structures

- Consider the example of a student database
- Best to use when individual records have multiple attributes of different data types

```C
// Record for a single student
struct Student {
    char name[50];
    int age;
    float grade;
};
```
- Suppose `sizeof(char)` is 1 and `sizeof(int)` and `sizeof(float)` are 4. What is `sizeof(struct Student)`?
- For performance reasons (byte alignment), the correct answer is `sizeof(struct Student) >= 50*1 + 4*1 + 4*1 = 58`

---

# Passing an Array of Structures to a Function

- An array of structures can be passed to a function in a structured and efficient manner

```C
// Function to calculate average grade
float calculateAverageGrade(struct Student students[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += students[i].grade;
    }
    return total / size;
}

int main() {
    // Declare an array of 100 Student structures
    struct Student students[100];
    // Initialization of students happens here
    float average_grade = calculateAverageGrade(students, 100);
    return 0;
}
```


---

# Structure Pointers

- A pointer to a structure points to the memory address where the structure is located
- The name of the structure is <span style="color:red">not a pointer</span>
- In this sense, it is closer to a variable
- If the structure contains an array, the pointer can be used to indirectly access the array elements.
- Structure can contain a self-referencing pointer to another structure

```C
#include <stdio.h>
struct Student {
    char name[50];       // Name of the student
    int grades[5];       // Array to store 5 grades
};
```

---

# Structure Pointers

```C
int main() {
    // Declare and initialize a structure
    struct Student ip_student = {"DaXue Sheng", {85, 90, 88, 92, 67}};
    // Declare a pointer to the structure
    struct Student *ptr = &student1;
    // Access array elements using the pointer
    printf("Student Name: %s\n", ptr->name);
    printf("Grade 1: %d\n", ptr->grades[0]);
    printf("Grade 5: %d\n", ptr->grades[4]);
    return 0;
}
```

---


# Mixing it all Together 🥣

- We could have a pointer to the structure allowing indirect access
- We can have an array of structures
- Many possible solutions to a given problem!

<!-- --- -->

<!-- # Course Feedback - Dr Hasan Abbas

![bg right 60% QR Code for Survey](assets/qualtrics_feedback.png) -->

---

# Next Up ⏭️

- Bit Manipulation and Structures
