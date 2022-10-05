---
marp: true
title: UESTC 1005 - Introductory Programming
description: Course Slides for the C programming course
theme: uncovered
paginate: true
transition: fade
_paginate: false

---

<!-- _header: ![h:3em](http://www.gla.ac.uk/t4/visualidentity/files/downloads/University%20marque/UofG_keyline_boxed_marque%20(Digital_(RGB_72dpi)).jpg) -->

# UESTC 1005 - Introductory Programming

Lecture 4 - Operators and Program Control

Dr Hasan T Abbas

<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# About Me

- IP Course Coordinator since 2019
- Research Interests in Numerical Electromagnetics
- Fascinated by Nanoscale Physics
![bg right 60%](https://www.gla.ac.uk/media/Media_701142_smxx.jpg)

---

<!-- _backgroundColor: "#FFF" -->
<!-- _color: "#093867" -->


---

# Lecture Outline

- Dive deeper into operators (运算符)
- Make Decisions
- Introduce program control

---

# Operators

In the last lecture, we looked at a number of operators available in C. 
C has in fact many more, and mastering all of them takes time. 

- Interestingly, the results of operators as sometimes hardware dependent.
- Let's look at some interesting observations.

---

# <span style="color:red">Some Side Effects</span>

Some unexpected results:

```C
int i;
float pi;
pi = i = 3.1416f;
```

The `float` variable `f` is assigned a value of `3.0` (as opposed to `3.1416`).

<span style="color:green">better to use multiple statements to avoid unexpected behaviour</span>

---

# <span style="color:orange">Example - Operators</span>


Write a C program where you are going to enter a *three-digit* number which is then printed on the screen.

Task is to reverse the number. Example output of the program:

```
Enter a three-digit number: 123
Reversed number is: 321
```
----

# <span style="color:orange">Example - Operators</span>

## Method
- We need to extract the three digits from the number
- Split the number `n` into units, tens and hundreds
- Units -- `n % 10` gives us the right-most digit
- Hundreds -- `n % 100` gives us the hundreds
- For tens, we need to do two steps, first remove the hundred `temp = n % 100` and then get the tens part, `ten = temp % 10` gives us the tens in the number

For swapping, we can simply display the number in the reverse order (`unit`,`tens` and `hundred`).

---


# <span style="color:orange">Example - Operators</span>

```C 
#include <stdio.h>
int main(void)
{
    int input, unit, ten, hundred;
    int temp; // for temporarily storing a value

    printf("\nEnter a three-digit number: ");
    scanf("%d", &input);

    hundred = input / 100; // Get the hundred
    temp = input % 100;  // remove the hundred
    ten = temp / 10;  // Get the ten
    unit = input % 10; // Get the unit

    printf("\n\nThe reversal is %d%d%d\n\n", unit, ten, hundred);
    return 0;
}
```
---

# Selection and Decisions

C has three kinds of statements (selection, iteration, jump) that can help make decisions and select choices.

![bg right 60%](assets/flowchart.svg)

Today we will look at `if` and `switch` statements along with relational and logical operators.

---

# Logical Expressions

We need to check an expression to see if it is `true` or `false`. 

- Like, check whether ` i < j` is `true` or `false`
- The above `(i < j)` is a logical expression. 
- Result is an integer, `1` for true, and `0` for false
- we usually call it *Boolean* logic
- Notice we have used *relational operators* to build logical expressions.

---

# Logical Expressions - Examples




![bg right 60%](https://icongr.am/simple/zeit.svg)

## **[Vercel](https://vercel.com/)**

#### Ready to write & host your deck!

[![Deploy to Vercel h:1.5em](https://vercel.com/button)](https://vercel.com/import/project?template=https://github.com/yhatt/marp-cli-example)

---

### <!--fit--> :ok_hand:

---

![bg 40% opacity blur](https://avatars1.githubusercontent.com/u/3993388?v=4)

### Created by Yuki Hattori ([@yhatt](https://github.com/yhatt))

https://github.com/yhatt/marp-cli-example
