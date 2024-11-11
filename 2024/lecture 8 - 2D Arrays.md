---
title: UESTC 1005 - Introductory Programming
description: Course Slides for the C programming course - lecture 8 on 2D arrays and pointers
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
  section {
      background-color: #FFFCEE;
  --color-background: #FFFCEE;
  }
_backgroundColor: "#FFFCEE"
_color: "#093867"

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 1005 — Introductory Programming

Lecture 8 — Multidimensional Arrays and Pointers

Hasan T Abbas
[Hasan.Abbas@glasgow.ac.uk](mailto:Hasan.Abbas@glasgow.ac.uk)

<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

--- 

# <!--fit--> <span style="color:white"> Mastering pointers is mastering the power of memory in C.</span>

![bg opacity:100%](assets/gradient3.png "decorative background")

---

<div class="columns">
<div class="columns-left">

# Lecture Outline

- Multidimensional Arrays
- Function Calls
- Pointers 🔑

![bg right:35% 95%](assets/Xiangqi_board.svg "illustration of a xiangqi game board")

---

# Multidimensional Arrays

- 2D array akin to matrix (as in mathematics)

```C
int table[5][5]; // creates a 2D array of 5 rows and 5 columns
```

- How much size does a 2D array take?


```C
printf("size of array = %zu bytes\n", sizeof(table)); // %zu is for unsigned long
```

![bg right:30% 95%](assets/c_2darrays_tikz.svg "picture of a 2d array")

---

# Use in Mathematics 📐

- 2D matrices heavily used in matrix manipulation
- Backbone of linear algebra and numerical computation

![bg right:30% 95%](assets/c_2darrays_ID_matrix.svg "a nice 2D matrix")

```C
#include <stdio.h>
#define N 5 // size of the matrix size is always 1 more
int main(void)
{

    int ident_matrix[N][N];
    int row, col;
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (row == col)
                ident_matrix[row][col] = 1;
            else
                ident_matrix[row][col] = 0;
    return 0;
}
```

---

# Multidimensional Array Initialisation 

```C
int ident_matrix[5][5] = {{1, 1, 1, 0, 1},
            {0, 1, 0, 1, 1, 2},
            {0, 5, 7, 9, 10, 12},
            {3, 7, -1, 3, 32, 76},
            {0, 3, 5, -4, 1, 8}};
```

- Empty elements are initialised to `0`
- C treats multidimensional arrays as 1D essentially.
- We can go out of bounds in terms of indices.

```C
printf("&array[%d][%d] = %p\n", row, col,  (void *)&ident_matrix[row][col]);
```

---

# Function Calls and Arrays 🔑

- Recall the concept of <span style="color:green">passing by reference</span> and <span style="color:red">by value</span>

```C
someFunction(ArrayName); // passing by reference. Array name is a pointer
```

Passing by Reference
- We pass the <span style="color:green">array name</span> i.e., a pointer
- Since we pass the memory locations, contents are changed inside the function

![bg right:45% 95%](assets/passing.gif "an animation showing the concept of passing by reference and value")

---

# Passing by value

- We pass individual elements of the array
- There is no pointer passed
- No changes made to the original array contents

```C
someOtherFunction(AnotherArrayName[0]); // passing by value. Argument is an element
```

---

# <!--fit--> <span style="color:white"> Pointers </span>

![bg opacity:100%](assets/gradient.jpg "decorative background")

---

# Pointers 🔑

- Just another data type
- A key feature of C
- Allows <span style="color:green">byte-sized</span> memory access
- A variable that stores the memory address of another variable.

```C
int *ptr; // -> The variable ptr stores a pointer to an int
```

---

# <!--fit--> <span style="color:white"> Pointer stores the **address** of a memory location </span>

![bg opacity:100%](assets/gradient.jpg "decorative background")

---

# Why Pointers? 🤔

- Efficient memory management.
- Allows functions to modify variables directly.

---

# So what is all about Pointers?

- How to create/declare pointers?
- `&` (address-of): Gets the memory address.
- `*` (dereference): Accesses the value at the memory address.

```C
int a = 10;  // declare an integer variable
int *ptr; // declare a pointer 
ptr = &a;  // and initialize it to the address of 'a'
printf("%d", *ptr);  // dereference the pointer and print the value it points to
```

---

# Initialising and Indirect Assignment

- Pointers are like a map
- Variables are stored in memory, each at a unique address.
- <span style="color:red">Address Representation</span>
- Pointers allow access to these addresses directly.
- E.g., `int x = 5;` & `int *p = &x;`
- `p` now holds the memory address of `x`.

![bg right:45% 95%](assets/buildings.jpeg "an illustration showing an analogy of memory and buildings in an urban environment")

---

# Example 🔑

```C
#include <stdio.h> // which has definitions of printf function

int main() // void means nothing
{
    int a = 10;         // declare an integer variable
    int *ptr;           // declare a pointer
    ptr = &a;          // and initialize it to the address of 'a'
    printf("%d\n", *ptr); // dereference the pointer and print the value it points to
    printf("%p\n", ptr); // print the value the pointer points to
    printf("%p\n", &a); //  print the address of a
    printf("%p\n", a); //  print the value of a
    return 0;
}
```

---

# Two Pointers

```C
#include <stdio.h> // which has definitions of printf function

int main() // void means nothing
{
    int a = 10; int b =20;         
    int *ptr1, *ptr2;           
    ptr1 = &a;          
    ptr2 = &b;
    printf("%d\n", *ptr1); 
    printf("%p\n", ptr2); 
    printf("%p\n", &a); 
    printf("%p\n", &b); 
    return 0;
}
```

---

# Pointer Arithmetic

- What happens when we perform arithmetic?
- We can simply *add*, *subtract* on pointers

```C
char *p;
char a;
char b;
p = &a;
p += 1;
```

- Adds `1*sizeof(char)` to the memory address
- The pointer `p` now points to ?? 🤔

---

# The Dangling Pointer ❗

- **Null Pointer (`NULL`)**
- A pointer that doesn’t point to any address: `int *p = NULL;`
- A pointer pointing to deallocated memory.
- **Best Practice**
- Always initialise pointers, and set to `NULL` after freeing memory.
- Avoid unexpected behaviour and crashes 🛑
- Memory area can be reused and data can be corrupted

---

# Questions :question:

![bg right 60%](assets/quiz-5.png "QR code for Menti https://www.menti.com/alok51h26yh3")

[https://www.menti.com/alok51h26yh3](https://www.menti.com/alok51h26yh3) and type the code `5448 6697`.

---

# Next Up ⏭️

- A wee Tutorial
- Pointers contd.
- Strings
- Bring your Laptops!

![bg right 60%](assets/BYOL.jpeg "a picture instructing the students to bring their own laptops")