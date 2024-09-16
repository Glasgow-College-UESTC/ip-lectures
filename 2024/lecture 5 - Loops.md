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

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 1005 - Introductory Programming

Lecture 5 - Loops :carousel_horse:

Hasan T Abbas
[Hasan.Abbas@glasgow.ac.uk](mailto:Hasan.Abbas@glasgow.ac.uk)

<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---
<div class="columns">
<div class="columns-left">

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

# *Iteration means repetition of a process*

---
<style scoped>section { justify-content: center; }</style>

# *Loop is a process which is connected to its beginning*
--- 

# Why iterations :question:

In the last lecture, we talked about *building* logic.
Algorithms build on logic to make *logical and meaningful* decisions.

An **algorithm** is a sequence of clearly defined steps and instructions with clear start and end points.

Iterations let us <span style="color:green">automate</span> boring tasks

---

# Loops in C

- Statements that are executed *repeatedly*
- Every loop has a *controlling expression*
- C has three kinds of loops
  1. `while`
  2. `do while`
  3. `for`

---

# The `while` loop

`while` is the simplest of the loops

- The controlling expression is executed <span style="color:red"> before</span> `the loop block.

```C
while (controlling expression)
{
    // statements
}
```

- Note there is no `;` in the first line
- Just like before `controlling expression` can be `true` or `false`

![bg right:40% 70%](assets/while-loop.svg)

---

# <span style="color:orange">Example - `while` loop</span> :placard:

Write a C program that calculates a number equal to the smallest power of `2` that is greater than or equal to `20`.

$$ x = 2 ^ i \ge n$$

```C
int i, n;
i = 1; n = 20;
while (i < n)
{
    i = i * 2;
}
printf("The smallest value is %d \n", i);
```

![bg right:40% 80%](assets/while-demo.svg)

---

# <span style="color:orange">How Example worked</span> :placard:

```
i = 1; i is now 1.
Is i < n? Yes; continue.
i = 1*2; i is now 2.
Is i < n? Yes; continue.
i = i*2; i is now 4.
Is i < n? Yes; continue.
i = i*2; i is now 8.
Is i < n? Yes; continue.
i = i * 2; i is now 16.
Is i < n? Yes; continue.
i = i * 2; i is now 32.
Is i < n? No; exit from loop.
```

---

# The <span style="color:red"> *infinite*</span> Loop

Sometimes we delibrately construct a condition that remains *true* all the time. 

- When paired with a loop, we call this an infinite loop
- It executes forever until we tell the compiler to stop
- We can use `break` or some other ways to get out of the loop
- We commonly use infinite loops in embedded systems such as an Arduino.

```C
while(1)
{
    // some statements inside
}
```

---

# <span style="color:orange">Example - Infinite Loop</span> :placard:

Write a C program that accepts integers from a user through the keyboard and then computes their sum. The process is carried on *until* the user enters `0`

Program Template:

```
A C program that computes the sum of non-zero integers

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

# <span style="color:orange">Example - Infinite Loop Implementation</span> :placard:


```C

#include<stdio.h>
int main(){
    // we are going to define an infinite loop
    int sum, input;
    sum = 0; // always initialise to 0 as the initial value may be undefined
    printf("Enter an integer (0 to terminate):\n");
    while(1){
        scanf("%d", &input);
        if (input == 0){
            break;
        }
        else{
            sum += input;
        }
    }
    printf("The sum of the entered integers is: %d\n", sum);
    return 0;
}
```

---

# The `do while` Loop

- We check the condition after the body statements are executed 

```C
do{
    // Statements
} while ( expression);
```

- Note the `;` in the end of the `while()`
- `do while` loops run at least once

![bg right:40% 40%](assets/do-while.svg)

---

# Questions :question:

![bg right 60%](assets/quiz-2.png)

[https://www.menti.com/al4htqpzusws](https://www.menti.com/al4htqpzusws) and type the code `5273 8857`.

---

# The `for` Loop 

- `for` loop is the most C-like thing in C
- Best way to write loops
- We have a *counting variable* that dictates the iterations
- Ideal for cases where we need to count *up* or *down*

```C
for( expr1 ; expr2 ; expr3){
    //statements
}
```

![bg right:40% 80%](assets/for-loops.svg)

---

# <!--fit--> `for` Loop Examples

![bg opacity](assets/gradient.jpg)

---

# Mixing Operators

- Create a `for` loop to *even* display numbers from 2 to 200.

```C
for (i = 2 ; i <= 200 ; i += 2){
    printf("%d\n",i);
} 
```

---

# Countdown!

- Create a counter down from `n - 1` to `0`.

```C
for (i = n - 1 ; i >= 0 ; i--)
```

- Create a counter down from `n` to `1`.

```C
for (i = n  ; i > 0 ; i--)
```

---

# Flexible `for` loop

- The three expressions in the `for` loop declaration are *optional*
- Something like:
```C
for (i = 0 ; i < 2 ;)
```
or 
```C
for(; i < 20 ; )
```
or 
```C
for (; ;)
```
are all <span style="color:green">valid</span> in C

---

# Quiz :question:

Pick a `for` loop statement that counts from `1` to `100` in steps of `5`.

![bg right 60%](assets/quiz-2.png)

Go to [https://www.menti.com/al4htqpzusws](https://www.menti.com/al4htqpzusws) and type the code `5273 8857`.

---

# :warning: Some Care needed

Modern versions of C allow us to *declare* a variable in the first `for` *expression*

```C
for (int i = 0; i < 20 ; i++){
    printf("%d",i); // -----> RIGHT
}
printf("%d",i); // ----> WRONG
```
The variable `i` is only visible <span style="color:red">*inside*</span> the loop. It cannot be accessed from outside.

---

# Example - Display a Table of Cubes :placard:

Say we want to compute the cube of the first 10 integers and display on the screen. Lets use `for` loop.

```C
for (int n = 0, cube = 0; n <= 10 ; n++){
    cube = n * n * n;
    printf("The cube of the number %8d is %8d \n", n, cube);
}
```
## Points to note

- The comma `,` operator lets us <span style="color:orange">glue</span> two or more expressions
- `%8d` is called a *placeholder* where we reserve 8 characters on the screen to display an integer value
---

# Control Statements - `break`

- `while` and `for` loops have exit points typically before the body 
- Sometimes we require to exit in the middle of the code
- Just like with `switch` the `break` statement takes us out of the loop

```C
    for (i = 2; i < n; i++){
        if (n % i == 0){
            break;
        }
        else if (n < i){
            printf("%d is divisible by %d \n", n, i);
        }
        else{
            printf("%d is prime \n", n);
        }
    }
```

---

# Control Statements - `continue`

- Unlike `break`, the `continue` statement doesnt really take us out of the loop.
- Rather, it skips the current iteration of the loop.

```C
for(int n = 0, sum = 0; n < 10; n++){
    if (n == 3 || n == 6 || n == 9){
        continue;
    }
    sum += n;
}
```

The above code computes the series:
$$ 1 + 2 + 4 + 5 + 7 + 8 $$

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

---

# Quiz :question:

What is the output of the program below:

```C
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int n = 0; n < 10; n++){
        if (n == 0){
            break;
        }
        sum += n;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
```

![bg right 60%](assets/quiz-2.png)

Visit [https://www.menti.com/al4htqpzusws](https://www.menti.com/al4htqpzusws) and type the code `5273 8857`.

---

# Today's Summary :spiral_notepad:

- Introduced three types of loop statements

- Looked into control statements

---

# Next up :spiral_calendar:

- Nested Loops :loop:
- Functions
- Recursion :placard:

---

# Questions :question:

![bg right 60%](assets/quiz-2.png)

[https://www.menti.com/al4htqpzusws](https://www.menti.com/al4htqpzusws) and type the code `5273 8857`.
