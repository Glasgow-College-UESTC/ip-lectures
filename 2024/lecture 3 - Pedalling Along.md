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




![bg left](assets/Mark_Twain_by_AF_Bradley.jpg)

# 👑 The secret of getting ahead is getting started!

<span style="color:white">&mdash; Mark Twain (Samuel Clemens)</span>

---

![bg left](assets/Mark_Twain_by_AF_Bradley.jpg)

# 👑 The secret of getting ahead is getting started!

&mdash; Mark Twain (Samuel Clemens)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC HN 1005 - Introductory Programming

**Lecture 3 — Pedalling along** 🚴‍♀️🚴‍♂️

Dr. Hasan T Abbas
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
| Dr. Ahmad Zoha | Dr. Bo Liu |
| Dr. Hassan Abbas | Dr. Chong Li |

</p>
</div>



---

# Questions 🙋❓

- Ask me anything (programming-related 😎)

---

# Flight Software at NASA/JPL is Written in C!

<div align="center">

![width:800px](assets/loc.png)

</div>

---

# Something on ChatGPT 💭

- Compilers are very precise in their requirements
- We the humans can make sense of sentences even with a misspelled word
- A C compiler will fail to provide a translation of a syntactically incorrect program (no matter how small the error)
- <span style="color:red">We have to learn to be **precise** when writing code</span>
- **Senior engineers** communicate technical material with precision and fluency

---

# Today's Lecture 📆

- Operators, expressions, and assignment 🏗️
- Progress to (slightly) larger programs
- Interactivity: Input ⌨️ and output 🖥️
- Reminder: the first lab is this week 🔬

---

# Quiz Time 💯

---

# The C Character Set 🪐

| Category | Character |
| -------- | ------- |
| Lowercase letters  | `a`&ndash;`z` |
| Uppercase letters | `A`&ndash;`Z` |
| Digits | `0`&ndash;`9` |
| Other Characters | `+` `-` `*` `/` `=` `(` `)` `{` `}` `[` `]` `<` `>` `'` `"` `!` `#` `%` `_` `^` `~` `\` `.` `,` `:` `;` `?` |
| White space characters | space, newline (`\n`), tab (`\t`), etc. |

---

# More Operators ➕

- C has all the expected arithmetic operators, e.g., `+`, `-`, `*`, and `/`
- Increment operators (`++`, `--`)
- Assignment operator (`=`)
- Relational operators (`<`, `>`, `==`, `<=`, `>=`)
- Logical operators (`&&`, `||`, `!`)

---

# Displaying Output

- We have been using the `printf()` function to display messages on screen
- The `printf()` function is declared in the `stdio.h` library (header file)

```C
printf("<formattext>", var1, var2, ... );
```

- The `<formattext>` argument is a <span style="color:red">string</span> that specifies:
  - How many variables to expect at the end of the statement
  - The expected printing type of each variable
  - The field width and precision of a printed variable (optional)
  - Explicit text to display

---

# Example: The `printf()` Function

```C
#include <stdio.h>
int main()
{
    int age = 44;
    char firstname_initial = 'M';
    char lastname_initial = 'B';
    float height_cm = 172.7;
    printf("My age is %d, my initials are %c %c, and my height is %f (cm).\n",
           age, firstname_initial, lastname_initial, height_cm);
    return 0;
}
```

---

# More Information Concerning the Format String

- How a variable is printed is controlled with special `%` characters in the `<formattext>` string
- The general form is `%<w>.<p><t>`:
  - `<w>` is the total width of the field (optional)
  - If `w <= actual width`, no change to the output &mdash; no truncation
  - If `w > actual width`, add space to the left
  - `<p>` is the # of digits to display after the decimal point (optional)
  - `<t>` is the type conversion (<span style="color:red">required</span>)

---

# Some `printf()` Type Conversion Specifiers

<div align="center">

| Conversion Specifier | Description                                         |
|----------------------|-----------------------------------------------------|
| `i` or `d`           | signed integer                                      |
| `u`                  | unsigned integer                                    |
| `f`, `lf`            | real decimal normal format, double                  |
| `e`                  | real decimal engineering format/scientific notation |
| `o`, `x`             | octal, hexadecimal                                  |
| `c`, `s`             | character, string                                   |

</div>

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
    printf("Value x=%1d and value y=%3.1f\n", x, y);
    return 0;
}
```

---

# Making Programs More Interactive: User Input

- So far, we have been using input variables to store data in memory
- Another source of input: interaction with the user
- This is the the job of the "scanned formatted" function `scanf()`

```C
scanf("%f", &radius);
```
- Note the `&` character &mdash; pass the **address** of the variable `radius` to the `scanf` function **NOT** the **value** of `radius`

---

# Coding Exercise: A Simple Calculator 🧮

Write a C program that can perform basic arithmetic on two numbers
- Addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`)
- Display the result on the screen
- Start with signed integer numbers (`int`)
- Then, move to `float`
- Next, use `double`
- Finally (if you are a more experienced programming), use `scanf()` to implement a simple, interactive calculator
  - Accept input like `10 + 3.14` and `12 / 42`
  - I will introduce the `if` statement to implement this functionality &mdash; we will return to the subject of `if` in the next lecture

---

# Next up :spiral_calendar:

- Flow Control 🔀
- Conditional Statements ¿?

---

# Get in Touch

- Campuswire 💬
- mark.butala@glasgow.ac.uk 📨

---

# Questions 🙋❓

- Ask me anything (programming-related 😎)
