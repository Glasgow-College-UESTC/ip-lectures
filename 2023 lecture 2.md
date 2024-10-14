---
marp: false
title: UESTC 3018 - Communication Systems and Principles
description: Course Slides for the CPS course
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


# <!--fit--> <span style="color:white"> 💡 Modulation is the art of transforming simple signals into complex forms! </span>

![bg opacity:100%](assets/gradient2.jpg)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 2018 - Communication Systems and Principles

Lecture 11 — Angle Modulation

Dr Hanaa Aboumarshod and Dr Hasan Abbas
<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# Reflection 🤔

- Why Modulation?
- Amplitude Modulation (AM) is a linear process
- AM wave is a band limited signal
- AM is not resilient to noise 
  
<!-- Need to change the QR code here -->
![bg right:50% 70%](assets/hainan_qr_code_l2.png)

---

# Today's Lecture 📆

- Angle Modulation
- Frequency Modulation
- Some Bandwidth Analysis

---

# First Some Amplitude Modulation 🎗️



| Type | Character |
| -------- | ------- |
| lowercase letters  | a-z |
| uppercase letters | A-Z |
| digits | 0-9 |
| Other Characters | + - * / = ( ) { } [ ] < > ' " ! # % _ ^ ~ \ . , : ; ? |
| white space characters | blank, newline, tab etc. |

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
- Use code `49 46 05`

![bg right:35% 100%](assets/menti_hainan_week4_l3.png)

---

# A Simple Calculator

- Performs basic arithmetic on two numbers
- Addition (`+`), Subtraction (`-`), Multiplication (`*`) and Division (`/`)
- Results are displayed on the screen
- Start with integer numbers
- Move to `float`
- Use `double`
- Next up ... use `scanf()` to insert the values of the variables

---

# Next up :spiral_calendar:

- Flow Control and Conditions

---

# Get in touch

Hasan.abbas@glasgow.ac.uk