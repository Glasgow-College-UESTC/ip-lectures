---
marp: false
title: UESTC 1005 - Introductory Programming
description: Course Slides for the C programming course
theme: uncovered
paginate: true
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


# <!--fit--> <span style="color:white">A thousand *li* begin with a single step </span>

![bg opacity:100%](assets/gradient2.jpg)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 1005 - Introductory Programming

Lecture 2 — Let's C!

Dr Hasan T Abbas
<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# Today's Lecture 📆 

- Under the hood …
- Ingredients of a C program
- The C Lexicon. 

---

<!-- ![bg 100%](assets/wow.gif)

--- -->

# The Ingredients 🍳🧂

- Keywords
- Directives
- Functions
- Statements
- Comments

---

# C Keywords

- C programming language is small
- There are only 32 keywords in the language

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

| Language    | Keywords |
| -------- | ------- |
| C  | 32    |
| C++ | 82     |
| Java    | 50    |
| Python (3.7) | 35 |

---

# From yesterday ⏮️

```C
/*
A C program that prints a message on screen */
#include<stdio.h> // some raw ingredients

int main() // main function
{
    printf("Shine like a diamond! \n"); // Statements

    return 0; // Return the control back to the operating system

} // This is a code block
```

---

# Keywords

- There special words that <span style="color:red">serve</span> a specific purpose
- We can not use `keywords` for any other purpose
- <span style="color:red">Special</span> meaning to the compiler
- Examples are `return`,`int`,`char`,`for`,`while`,`if`,`else`

---

# <!--fit--> <span style="color:white">✂️ The Dissection ✂️ </span>

![bg opacity:100%](assets/gradient.jpg)

---

# The Header 🎓

- We need to include extra files before we *compile* the code
- We call them preprocessor directives
- `#` is used to denote preprocessor directives
- `#include` tells the compiler to include certain files
- Standard IO library included here

---

![bg 90%](assets/program_flow.svg)

---

# The Body 🐊

- We can have as many parts here as we want
- Parts are usually *functions* in C programming language
- ❗ Every C program has a `main()` function
- Functions have `()` after their names

```C
int main()
```

---

# The `main()` function

- Program execution starts with a `main()` function 🔑
- Functions can take input(s) and generate output
- We enclose functions with braces `{}`
- There is also a `printf()` function
- We need to **define** functions we use

---

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>
![bg 95%](assets/block.svg)

---

# Statements 📜

- These are the *lines* of code in the C program
- Every statement ends with a semicolon `;`
- `return` is included in most functions
- `return` keeps the compiler happy 😁

```C
printf("Sky is the limit!");
```

---
# Comments ❇️

- Words that are not processed by compiler
- Only there for our information
- Single Line `//` and multiline `/* */`
  
```C
// This is a single line comment
/* This is a multi line 
comment */

```

---

# Quiz Time ⌛

- Log on to menti.com: <https://www.menti.com>
- Use code `6571 9618`

![bg right:35% 100%](assets/quiz_menti.png)

---

# <!--fit--> <span style="color:white">What's in `main()`?</span>

![bg opacity:100%](assets/gradient.jpg)

---

# Variables 

- Look at all the houses that have an address
- Shi lives at *2 Galaxy Road, Mars*
- Chong lives at *5 Galaxy Road, Mars* and has a bigger house
- Li lives at *10 Galaxy Road, Mars* in a studio flat
- Every house can be **identified** by a <span style="color:red">unique</span> address of the location

![bg right:35% 100%](assets/houses.jpg)

---

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>
![bg 25%](assets/computer_memory.png)

---

# Variables in C 🔑

- Storage Locations in the Computer Memory
- A variable describes the size and location in the computer memory.
- Some rules in C programming language on the name of the variable.

```C
int number; // an integer type variable with a name `number`
float area; // a floating-point number with a name `area`
char gender; // a character type variable that can accept a single character
```

---

# Rules on Variable Names 💡

- We call variable names as <span style="color:green">identifiers</span>
- First letter either alphabet `a-z` or underscore `_`
- Identifiers can only contain alphabets `a-z`, digits `0-9`, and `_`
- Identifiers are case sensitive, but should make sense

```C
variable ✅
Variable ✅
v@riable ❌
4rivers  ❌
```

---

# Variable Types 🤔

- So what do types `float`, `int`, `double`, `char` etc mean?
- Types determine the size of memory used by variables
- Large size means we can store big, precise values

```C
float pi_float = 3.14159265;
double pi_double = 3.141592653589793238462643383279502884197169399;
int pi_int = 3;
```

---

# Expressions and Assignments

- We like to process data that we use
- We can perform arithmetic (scientific computing)
- We can compare different values (make decisions)

---

# Next up :spiral_calendar:

- Program Control