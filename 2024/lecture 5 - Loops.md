---
marp: true
title: UESTC 1005 - Introductory Programming
description: Course Slides for the C programming course - lecture 5 on loops
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

![bg right:35%](assets/Martin_Fowler.jpg)

# "Any fool 🤡 can write code that a computer 🤖 can understand. Good programmers write code that humans 🧑‍💻 can understand"

## &mdash; Martin Fowler (proponent of *agile* and *extreme* programming styles, https://martinfowler.com)


---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 1005 &mdash; Introductory Programming

<h2>Lecture 5 &mdash; Loops 🎠</h2>

Dr. Hasan T. Abbas


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
| Dr. Hassan T. Abbas | Dr. Chong Li |

</p>
</div>

---

# Questions 🙋❓

- Ask me anything (programming-related 😎)

---

<!--
<div class="columns">
<div class="columns-left"> -->

# Lecture Outline

- The need for iteration
- The `while` loop
- The `for` loop


![bg right:40%](https://media.giphy.com/media/CR6MXuypuIipkMWVpg/giphy.gif)
<!-- </div>
<div class="columns-right">

<p align="right">
  <img src="https://media.giphy.com/media/P2Tf6P14ykFQ4/giphy.gif" />
</p>
</div>
</div> -->

---
<style scoped>section { justify-content: center; }</style>

# *Iteration means repetition of a process* 🔢🔢🔢🔢...

---
<style scoped>section { justify-content: center; }</style>

# *A loop is a process which is connected to its beginning* 🔄
---

# Why Iteration :question:

- In the last lecture, we talked about *building* logic
- An **algorithms** is
  - A set of rules, making *logical and meaningful* decisions, to solve a problem
  - A sequence of clearly defined steps and instructions with clear start and end points
- Iteration provide a mechanism to <span style="color:green">automate</span> repetitive tasks

---

# Loops in C

- Statements that are executed *repeatedly*
- Every loop has a *controlling expression*
  - A logical expression
  - Iterate again or stop looping?
- C has three kinds of loops
  1. `while`
  2. `do while`
  3. `for`

---

# The `while` Loop

<!--  `while` is the simplest of the loops -->

- The controlling expression is executed <span style="color:red"> before</span> the loop block

```C
while (controlling expression)
{
    // statements
}
```

- Note there is no `;` in the first line
- The `controlling expression` is a logical expression, i.e., check if it is `true` or `false`

![bg right:40% 70%](assets/while-loop.svg)

---

# <span style="color:orange">Example: `while` Loop</span> :placard:

Write a C program that calculates a number equal to the smallest power of `2` that is greater than or equal to `20`, i.e., determine the smallest number $2^k$ such that

$$2^k \ge 20$$

![bg right:40% 80%](assets/while-demo_revised.png)

---


# <span style="color:orange">Example: `while` Loop</span> :placard:

Write a C program that calculates a number equal to the smallest power of `2` that is greater than or equal to `20`, i.e., determine the smallest number $2^k$ such that

$$2 ^ k \ge 20$$

```C
int i, n;
i = 1; n = 20;
while (i < n)
{
    i = i * 2;  // equivalent to "i *= 2"
}
printf("The smallest value is %d \n", i);
```

![bg right:40% 80%](assets/while-demo_revised.png)

---

# <span style="color:orange">Example: `while` Loop &mdash; ✂️ Dissection ✂️</span> :placard:

```
i = 1; i is now 1.
Is i < 20? Yes; continue.

i = i*2; i is now 2.
Is i < 20? Yes; continue.

i = i*2; i is now 4.
Is i < 20? Yes; continue.

i = i*2; i is now 8.
Is i < 20? Yes; continue.

i = i * 2; i is now 16.
Is i < 20? Yes; continue.

i = i * 2; i is now 32.
Is i < 20? No; exit from loop.
```

---

![bg right:35%](assets/KenThompson.jpg)

# "When in doubt 🤔, use brute force 🏋️"

## &mdash; Ken Thompson (original designer and implementer of Unix, co-developer of the Go programming language, Turing Award winner)

---

# The <span style="color:red"> *Infinite*</span> Loop

Sometimes we delibrately construct a controlling expression that is always *true*

- When paired with a loop, we call this an infinite loop
- It executes forever until we tell the compiler to stop
- We can use `break` or some other mechanism to terminate the loop
- Infinite loops are often used embedded systems such as an Arduino

```C
while(1)
{
    // some statements inside
}
```

---

# <span style="color:orange">Example: Infinite Loop</span> :placard:

Write a C program that accepts integers from a user through the keyboard and then computes their sum. The process repeats *until* the user enters `0`.

Example input and output:

```
Enter an integer (0 to terminate):
12
32
345
-1
-10
0

The sum of the entered integers is: 378
```
---

# <span style="color:orange">Example: Infinite Loop Implementation</span> :placard:


```C
#include <stdio.h>

int main() {
    int sum, input;
    sum = 0; // initialise to 0, otherwise the value of sum is undefined
    printf("Enter an integer (0 to terminate):\n");
    while(1) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        else {
            sum += input;
        }
    }
    printf("The sum of the entered integers is: %d\n", sum);
    return 0;
}
```

---

# The `do while` Loop

- A `while` loop checks the condition at the *start* of each loop
- A `do while` loop checks the condition at the *end* of each loop
```C
do {
    // Statements
} while(expression);
```

- Note the `;` in the end of `while()`
- A `do while` loop executes at least once

![bg right:40% 55%](assets/do-while_revised.png)


---

# Questions 🙋❓

- Ask me anything (programming-related 😎)

---

# The `for` Loop

<!-- - `for` loop is the most C-like thing in C -->
- A `for` loop is (usually) the clearest way to express a simple loop structure
- The following looping structure
```C
for (init; condition; increment) {
    // statements
}
```
is semantically equivalent to
``` C
init;
while (condition) {
    // statements
    increment;
}
```
<!-- - We have a *counting variable* that dictates the iterations
- Ideal for cases where we need to count *up* or *down* -->


<!-- ![bg right:40% 80%](assets/for-loops.svg) -->

---

# The Most Commonly Encountered `for` Loop

- Most common use case: repeat a block of statements `N` times

``` C
for (int i = 0; i < N; i++) {
    // statements
}
```

---

# <span style="color:orange">Example: Infinite Loop Implementation</span> (revisited) :placard:

- The following is an equivalent way to write the <span style="color:orange">Infinite Loop Example</span>:
``` C
#include <stdio.h>
int main() {
    int sum, input;
    printf("Enter an integer (0 to terminate):\n");
    for (sum = 0; 1; ) {
        scanf("%d", &input);
        if (input == 0) break;
        sum += input;
    }
    printf("The sum of the entered integers is: %d\n", sum);
    return 0;
}
```
- This version is less *readable* than the first version with a `while` loop

---

# <!--fit--> `for` Loop Examples

![bg opacity](assets/gradient.jpg)

---

# Mixing Operators

- Create a `for` loop to display the *even* numbers from 2 to 200:

```C
for (int i = 2; i <= 200; i += 2) {
    printf("%d\n", i);
}
```

---

# Countdown!

- Create a counter down from `n - 1` to `0`:

```C
for (int i = n - 1; i >= 0; i--) {
    printf("%d\n", i);
}
```

- Create a counter down from `n` to `1`:

```C
for (i = n; i > 0; i--) {
    printf("%d\n", i);

}
```

---

# Flexibility of the `for` Loop Syntax

- The three expressions in the `for` loop declaration are *optional*
- The following are all <span style="color:green">valid</span> in C:
```C
for (i = 0 ; i < 2 ;)
```
or
```C
for(; i < 20 ; )
```
or
```C
for (; ;)  // an empty condition evaluates to true
           // this is equivalent to while(1)
```

<!--

---

# Quiz :question:

Pick a `for` loop statement that counts from `1` to `100` in steps of `5`.

![bg right 60%](assets/quiz-2.png)

Go to [https://www.menti.com/al4htqpzusws](https://www.menti.com/al4htqpzusws) and type the code `5273 8857`.

-->

---

# :warning: Some Care Needed

- Modern versions of C allow us to *declare* a variable in the `for` loop initialization:

```C
for (int i = 0; i < 20 ; i++){
    printf("%d", i); // -----> CORRECT
}
printf("%d", i); // ----> INCORRECT, error at comple time
```
- The variable `i` is only visible <span style="color:red">*inside*</span> the loop &mdash; `i` *cannot* be accessed from outside the loop
- Technical terminology: the `scope` (visible region) of the variable `i` is `for` loop statement block
---

# Example: Display a Table of Cubes :placard:

- Compute the cube of the integers $\{0, 1, \dotsc, 10\}$ and display on the screen:
```C
for (int n = 0, cube = 0; n <= 10; n++) {
    cube = n * n * n;
    printf("The cube of the number %8d is %8d\n", n, cube);
}
```

## Points to note

- The comma `,` operator lets us <span style="color:orange">glue</span> two or more expressions together, i.e., create a *compound expression*
- `%8d` is called a *placeholder* where we reserve 8 characters on the screen to display an integer value
---

# Control Statements: `break`

<!-- - `while` and `for` loops have exit points typically before the body -->

- Sometimes, we would like force an exist from a loop at an arbitrary code point
- Similar to its use in `switch`, the `break` statement will immediately exit the loop body

```C
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            break;
        }
        else if (n < i) {
            printf("%d is divisible by %d\n", n, i);
        }
        else {
            printf("%d is prime\n", n);
        }
    }
```

---

# Control Statements: `continue`

- Like `break`, the `continue` statement changes the execution flow of a loop
- Semantics of `continue`:
  1. Skip the remainder of the loop
  2. Resume execution at the end of the loop body

```C
for(int n = 0, sum = 0; n < 10; n++){
    if (n == 3 || n == 6 || n == 9) {
        continue;
    }
    sum += n;
    // this program point is "the end of the loop body"
}
```

<!-- The above code computes the series:
$$ 1 + 2 + 4 + 5 + 7 + 8 $$ -->

<!--

---

# Control Statements - `goto`

- `goto` is an *unconditional* jump statement in the program
- All we need is to create a `label`
- `Labels` are denoted by a `:` and written before a statement

```C
 for (i = 2; i < n; i++)
        if (n % i == 0)
            goto done;
 done:  else if (i < n){
        printf("%d is divisible by d\n", n, d);
    }
 else{
        printf("%d is prime\n", n);
    }
```
![bg right 40% 30%](assets/goto.svg)

- Results in a haphazard, *spaghetti* code

-->

---

# Quiz :question:

What is the output of the program:

```C
#include <stdio.h>
int main()
{
    int sum = 1;
    for (int n = 0; n < 10; n++){
        if (!(n % 5)) {
            break;
        }
        sum += n;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
```

![bg right 60%](assets/lecture5_quiz_qr.png)

<!--
Visit [https://www.menti.com/al4htqpzusws](https://www.menti.com/al4htqpzusws) and type the code `5273 8857`. -->

---

# Today's Summary :spiral_notepad:

- Introduced three types of loop statements
  - `while`
  - `do` `while`
  - `for`
- Considered two control statements
  - `break` (also mentioned in the context of `switch` statements)
  - `continue`

<!--

---

# Next up :spiral_calendar:

- Nested Loops :loop:
- Functions
- Recursion :placard:

---

# Questions :question:

![bg right 60%](assets/quiz-2.png)

[https://www.menti.com/al4htqpzusws](https://www.menti.com/al4htqpzusws) and type the code `5273 8857`.

-->
