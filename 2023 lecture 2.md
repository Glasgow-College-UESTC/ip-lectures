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


# <!--fit--> <span style="color:white"> 👑 Secret of getting ahead = getting started! </span>

![bg opacity:100%](assets/gradient2.jpg)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 1005 - Introductory Programming

Lecture 3 — Pedalling along 🚴‍♀️🚴‍♂️

Dr Hasan T Abbas
<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# Yesterday's Winners

## 1. Treeman 🐨
## 2. Nemo 🐠
## 3. MisakaSkywalker 👻

![bg opacity:50%](assets/gradient2.jpg)

---

# Questions 🙋❓

- Let us know what you think?
  
![bg right:50% 70%](assets/qr_code_padlet.png)

---

# Something on ChatGPT 💭

- Compilers are very precise in their requirements 
- We the humans can make sense of sentences even with a misspelled word
- a C compiler will fail to provide a translation of a syntactically incorrect program,
- No matter how small the error is
- <span style="color:red">We got to learn to be **precise** in writing code</span>
  
---

# Today's Lecture 📆 

- Operators, expressions, and assignment 🏗️
- Make larger programs
- Interactivity: Input and Output

---

# The C character set 🪐

| Type | Character |
| -------- | ------- |
| lowercase letters  | a-z |
| uppercase letters | A-Z |
| digits | 0-9 |
| Other Characters | + - * / = ( ) { } [ ] < > ' " ! # % _ ^ ~ \ . , : ; ? |
| white space characters | blank, newline, tab etc. |

---

# A Simple Calculator

- Performs basic arithmetic on two numbers
- Addition (`+`), Subtraction (`-`), Multiplication (`*`) and Division (`/`)
- Results are displayed on the screen
- Start with integer numbers
- Move to `float`
- to finally `double`

---

# More Operators ➕

- C has arithmetic operators
- Increment operators (`++`, `--`)
- Assignment operator (`=`)
- Relational operators (`<`, `>`, `==`, `<=`, `>=`)
- Logical operators (`&&`, `||`, `!`)

---

# Displaying Output

- We have been using `printf()` function to display messages on screen
- `printf()` is defined in `stdio.h` library (header file)

```C
printf("<formattext>", var1, var2, ... );

```

- `<formattext>` is a <span style="color:red">string</span> that indicates ...
- how many variables to expect at the end of the statement,
- the expected printing type of each variable,
- how many columns to use for printing,
- any associated fixed text

---

# `printf()` function

```C
#include <stdio.h>
int main()
{
    int age = 50;
    char firstname = 'H';
    char lastname = 'A';
    float weight = 100.3;
    printf("My age is %d, my initials are %c %c, and my weight is %f.\n", age, firstname, lastname, weight); 
    return 0;
}
```

---

# More on output format 

- All this is done by special `%` characters in the `<formattext>` string
- `%<w>.<p><t>`
- `<w>` is the total width of the field (optional)
- If `w <= actual width`, output actual – no truncation
- If `w > actual width`, add zero at the left
- `<p>` is the # digits after the point (optional)
- `<t>` is the type conversion (<span style="color:red">required</span>)

---

# `printf()` Rules

| `printf()` type | Description |
| -------- | ------- |
| `i` or `d` | signed integer |
| `u` | unsigned integer |
| `f`, `lf` | real decimal normal format, double |
| `e` | real decimal engineering format/scientific notation |
| `o`, `x` | octal, hexadecimal |
| `c`, `s` | character, strings |

---

# Example

```C

#include <stdio.h>
int main () {
  int x = 20;
  float y = -16.7889;
  printf("Value x=%d and value y=%9.3f\n", x, y); 
  printf("Value x=%i and value y=%7.1f\n", x, y);
  printf("Value x=%3d and value y=%5.1f\n", x, y);
  printf("Value x=%3d and value y=%3.1f\n", x, y);   
  return 0;
}

```

---

# Making programs more interactive

- We have been using variables to store data in memory
- We can ask the user to insert a value
- That's the job of the `scanf()` function

```C
scanf("%f",&radius);

```
- Note the `&` character

---

# Quiz Time 💯

- Log on to menti.com: <https://www.menti.com>
- Use code `7275 0121`

![bg right:35% 100%](assets/quiz2_qrcode.png)

---

# Next up :spiral_calendar:

- Flow Control and Conditions

---

# Get in touch

Hasan.abbas@glasgow.ac.uk