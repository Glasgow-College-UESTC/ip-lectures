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


# <!--fit--> <span style="color:white">A thousand lǐ begins with a single step </span>

<h1>Lǎozǐ</h1>

![bg opacity:100%](assets/gradient2.jpg)

---

# <!--fit--> <span style="color:white">千里之行，始于足下</span>

<h1>老子</h1>

![bg opacity:100%](assets/gradient2.jpg)

---


<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC HN 1005 - Introductory Programming

Lecture 2 — Let's C!

Dr Hasan T Abbas

<style scoped>
    .team-table {
        .bottom: 1%;
    }
</style>

<div align="center">
<p style="margin-bottom:0.5cm;">

| Chengdu Team | Hainan Team |
|--------------|-------------|
|Dr. Syed M. Raza | Dr. Mark D. Butala |
| Dr. Ahmad Zoha | Dr. Bo Liu |
| Dr. Hassan Abbas | Dr. Chong Li |

</p>
</div>


<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

<!--
---

# Questions 🙋❓

- Ask us anything (programming-related 😎)

![bg right:50% 70%](assets/hainan_qr_code_l2.png)
-->

---

# Today's Lecture 📆

- Peaking under the hood 🚗
- Ingredients of a C program
- The C lexicon (language elements) ⌨️

---

![bg 100%](assets/wow.gif)

---

# The Ingredients 🍳🧂

- Keywords
- Preprocessor directives
- Functions
- Statements
- Comments

---

# Programming Language Keywords

- The C programming language is small
- There are only 32 keywords in the language

<div align="center">

| Language    | Keywords |
| -------- | ------- |
| C  | 32    |
| C++ | 82     |
| Java    | 50    |
| Python (3.7) | 35 |

</div>

---

# The Original C Keywords (32 Total)

<div align="center">

| <!-- --> | <!-- -->  | <!-- --> | <!-- --> |
|----------|-----------|----------|----------|
| `auto` 	| <span style="color:red">`else`</span>	| <span style="color:green">`long`</span>	| <span style="color:red">`switch`</span> |
| <span style="color:red">`break`</span>	| `enum`	| `register`	| `typedef` |
| <span style="color:red">`case`</span>	| `extern`	| <span style="color:red">`return`</span>	| `union` |
| <span style="color:green">`char`</span>	| <span style="color:green">`float`</span>	| <span style="color:green">`short`</span>	| <span style="color:green">`unsigned`</span> |
| `const`	| <span style="color:red">`for`</span>	    | <span style="color:green">`signed`</span>	| <span style="color:green">`void`</span> |
| <span style="color:red">`continue`</span>	| <s>`goto`</s>	| <span style="color:purple">`sizeof`</span>	| `volatile` |
|  <span style="color:red">`default`</span>	|  <span style="color:red">`if`</span>	| `static`	|  <span style="color:red">`while`</span> |
| <span style="color:red"> `do`</span>	|  <span style="color:green">`int`</span>	|  <span style="color:green">`struct`</span>	|  <span style="color:green">`double`</span> |

</div>

Legend: <span style="color:red">flow control</span>, <span style="color:green">type specifier</span>, <span style="color:purple">sizeof</span> operator, forget that <s>`goto`</s> exists 🙈🙉🙊, and other keywords are much less important for Introductory Programming

---

# Keywords

- These are special words that are <span style="color:red">reserved</span> for a specific purpose
- You cannot redefine a keyword or assign a value to it
- <span style="color:red">Special</span> meaning to the compiler

---

# The Original C Preprocessor Directives (13 total)

<div align="center">

| <!-- -->                                     | <!-- -->  | <!-- -->  | <!-- -->   |
|----------------------------------------------|-----------|-----------|------------|
| `#if`                                        | `#elif`   | `#else`   | `#endif`   |
| `#ifdef`                                     | `#ifndef` | `#define` | `#undef`   |
| `#line`                                      | `#error`  | `#pragma` | `#defined` |
| <span style="color:orange">`#include`</span> |           |           |            |


</div>

The `#include` preprocessor directive is the only one of great importance for Introductory Programming

---

# From Last Time ⏮️

```C
/* A C program that prints a message on screen */

#include <stdio.h> // "copy and paste" function declartions
                   // from the standard IO library

int main() // main function
{
    printf("Shine on you crazy diamond! \n"); // Call the printf function
                                              // defined in stdio.h

    return 0; // Return control to the operating system
              // with code 0 (no errors)
} // Everything between "{" and "}" is a code block, that is, a
  // sequence of statements that are run in sequential order
```

---

# A Quick Diversion 🎸

Wish You Were Here, Pink Floyd
![width:18cm](assets/wish-cover.jpg)
![bg 40% right](assets/qrcode_open.spotify.com.png)

---


# <!--fit--> <span style="color:white">✂️ The Dissection ✂️ </span>

![bg opacity:100%](assets/gradient.jpg)


---

# Structure of a C program


The standard components of a C program (a `.c` file) are:
1) Header (the `#include` directives)
    - Not required
2) Global definitions ("global" variables visible to all functions &mdash; avoid these)
    - Not required
    - Not used in this example
3) Body (function declarations)
    - **Must** have a `main` function

---

# The Header 🎓

- The example program uses the `printf` function
- We need to include extra files before we *compile* the code
- `#include` tells the compiler to copy and paste in the given file
- This example `#include`s the standard IO (input/output) library function definitions
- `#` denotes a preprocessor directive

<!--
---

![bg 90%](assets/program_flow.svg)
-->

---

# The Body 🐊

- We can declare as many functions as we want (large projects will have more than one `.c` file with function declarations)
- Parts are usually C programming language *functions*
- ❗ Every C program has a `main()` function
- Functions have `()` after their names

```C
int main()
```

---

# Functions 🧰

- Program execution starts with the `main()` function 🔑
- Functions can have multiple inputs and outputs (though only *one* value can be `return`ed as output)
- Functions are enclosed by braces, that is, `{` and `}`
- The example calls the  `printf()` function (which is defined in `stdio.h`)
- We need to **declare** the functions we use

<!--
---

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>
![bg 95%](assets/block.svg)
-->

---

# Statements 📜

- These are the *lines of code* in a C program
- Every statement ends with a semicolon `;`
- `return` is included in most functions
- `return` keeps the compiler happy 😁

```C
printf("The sky is the limit!");
```

---
# Comments ❇️ and Whitespace

- A comment is text that is ignored by the compiler
- Comments are useful for documenting your program
- Comments may span a single line `//` or multiple lines `/*` ... `*/`
```C
// This is a single line comment

/* This is a multi line
   comment               */

```
- In general, extra spaces (*whitespace*) are ignored by the C preprocessor / compiler
  - Space (`' '`)
  - Tab character (`'\t'`)
  - Newline (`'\n'`)


---
# From a C Program (`.c`) to an Object File (`.o`)

<div align="center">
<p style="margin-top:1cm;">

![width:30cm](assets/compilation.svg)

</p>
</div>

<p style="margin-top:1cm;">

- The *preprocessor*, *compiler*, and *assembler* work in cooperation 👫
- C program: understandable by the programmer (human)
- Object file: binary encoded machine code understandable by the computer

</p>


---

# From Object Files (`.o`) and Libraries to an Executable

<style scoped>
    ul li {
        margin-top: 15px;
        margin-bottom: 15px;
    }
</style>


- The final step involves the *linker* ⛓️
- The linker produces an executable ⚙️ by combining
  + Object file(s)
  + References (links) to functions from external libraries and modules
- By historical convention, the default name of an executable is `a.out`
- The linker can generate a library of functions for use in other programs
  + Useful for large projects and beyond the scope of Introductory Programming

---

# Quiz Time ⌛

---

# Questions 🙋❓

- Ask us anything (programming-related 😎)

<!--
![bg right:50% 70%](assets/hainan_qr_code_l2.png)
-->

---

# Hexadecimal Numbers

<div align="center">

| Decimal | Binary | Hexadecimal |   | Decimal | Binary | Hexadecimal |
|---------|--------|-------------|---|---------|--------|-------------|
| 0       | `0000` | `0x0`       |   | 9       | `1001` | `0x9`       |
| 1       | `0001` | `0x1`       |   | 10      | `1010` | `0xA`       |
| 2       | `0010` | `0x2`       |   | 11      | `1011` | `0xB`       |
| ...     | ...    | ...         |   | ...     | ...    | ...         |
| 8       | `1000` | `0x8`       |   | 15      | `1111` | `0xF`       |

</div>

- A hexadecimal *literal* in C is prefixed by `0x`
- Each hexadecimal digit represents 4 bits
- A four digit hexadecimal number represents 16 bits
  - `0xABCD` (hexadecimal) = 43,981 (decimal) = <span style="color:red">`1010`</span><span style="color:blue">`1011`</span><span style="color:green">`1100`</span><span style="color:purple">`1101`</span> (binary)

---

# Variables

- Look at all the houses that have an address
- Shi lives at *2 Galaxy Road, Mars*
- Chong lives at *5 Galaxy Road, Mars* and has a bigger house
- Li lives at *10 Galaxy Road, Mars* in a studio flat
- Every house can be **identified** by a <span style="color:red">unique</span> address of the location
- A different **type** of house may be found at different locations

![bg right:35% 95%](assets/houses.jpg)

---

<!--
<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>
![bg 25%](assets/computer_memory.png)
-->


# The C Memory Model

Consider an *example* memory space on a 16-bit computer system:

<div align="center">

| Address  | Value  |
|----------|--------|
| `0x0000` | `0x05` |
| `0x0001` | `0x8B` |
| ...      | ...    |
| `0xFFFE` | `0xDE` |
| `0xFFFF` | `0xAD` |

</div>


- Each byte in memory can be accessed by its *unique* address
- Generally speaking, the programmer cannot control the location where a variable's value is stored

---

# Variables in C 🔑


- A variable is a mapping between an *identifier* (name) and a *value* stored somewhere on the computer
- A variable's declaration specifies its *type*, which in term determines:
  - The amount of memory allocated for storage
  - How the value is interpreted: for example, as an integer, floating point number, or character

```C
int   student_ID; // an integer type variable with name `student_ID`
float area;       // a floating-point number with name `area`
char  gender;     // a character type variable accepts a single character
                  //     (letter, e.g., 'M' or 'F') with name `gender`
```

---

# Rules on Variable Names 💡

- The name of a variable is called its <span style="color:green">identifier</span>
- Variable name constrains:
  - The first character must be a letter `a-z` and `A-Z` or underscore `_`
  - Identifiers can only contain letters `a-z` and `A-Z`, digits `0-9`, and `_`
  - Identifiers are case sensitive, i.e., `VARIABLE` and `variable` refer to two different variables

```C
variable ✅
Variable ✅
v@riable ❌
4rivers  ❌
```

---

# Variable Type Declaration 🤔

- So what do *type specifiers* like `float`, `int`, `double`, `char`, etc. mean?
- A variable's type determines the amount of memory required to store it
- More memory means more room to store a number with greater precision
  + For example, a *double* is more precise than a *float* but requires **twice** the storage
  + The specific details are compiler and machine dependent
- It also informs the computer how to *interpret* the `0`s and `1`s, for example, as an integer, floating point number, or character

```C
float  pi_float  = 3.1415926;
double pi_double = 3.141592653589793;
int    pi_int    = 3;
char   p_char    = 'p';
```

<!--
---

# Expressions and Assignments

- We like to process data that we use
- We can perform arithmetic (scientific computing)
- We can compare different values (make decisions)
-->

---

# Next up :spiral_calendar:

- Program Control
