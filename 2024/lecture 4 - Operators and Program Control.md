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

<style scoped>li::marker { color: black; }</style>

![bg](assets/zen1-1280x686.jpg)

<div color: black;>

<p style="margin-top:-1.5cm;">

![width:10cm](assets/guido-headshot-2019.jpg)

</p>

<p style="margin-top:1.25cm;">

# 🧘 <span style="color:black">Excerpts from the *Zen of Python*</black>

- <span style="color:black;font-weight:bold;">If the implementation is hard to explain, it's a bad idea.</span>
- <span style="color:black;font-weight:bold;">If the implementation is easy to explain, it may be a good idea.</span>
- <span style="color:black;font-weight:bold;">Readability counts.</black>

<span style="color:black;font-weight:bold;">&mdash; Guido van Rossum</span>

</span>

</p>


</div>


---


<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 1005 - Introductory Programming

<h2>Lecture 4 - Operators (✖️➕➖➗🟰) and Program Control (⚙️)</h2>

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
| Dr. Ahmad Zoha | Dr. Bo Liu |
| Dr. Hassan T. Abbas | Dr. Chong Li |

</p>
</div>

---

# Plagiarism (抄袭) Policy

- We have detected ⛔plagiarism⛔ in some laboratory 1 submissions
- **Plagiarism is unacceptable** and will earn a score of 0 when detected
- If you copied some or all of your laboratory 1 submission, you have until **October 25** to resubmit to potentially earn back 50% of your score
- Policy going forward: 0 points on all lab submissions that are flagged for plagiarism

---

# Questions 🙋❓

- Ask me anything (programming-related 😎)

---

# Lecture Outline

- Dive deeper into operators (运算符)
- Make decisions
- Introduce program control

---

# Operators

In the last lecture, we looked at a number of operators available in C

C has, in fact, many more &mdash; mastering them all takes practice
- The result of an operator may sometimes dependent on hardware details
- This is the good and bad of C, i.e., a programming language "close" to the hardware exposes hardware details to the programmer

---

# A (Potentially) Unexpected Result

```C
int i;
float pi;
pi = i = 3.1416f;
```

The `float` variable `pi` is assigned a value of `3.0` (as opposed to `3.1416`).

<span style="color:green">It is (usually) better to use multiple statements to avoid unexpected behaviour</span>

---

# (Perhaps A More Mysterious) Unexpected Result

``` C
#include <stdio.h>

int main() {
    int a = 12345678910;
    long b = 12345678910;
    printf("%d %d %ld\n", a, b, b);
    return 0;
}

// Program output: |-539222978 -539222978 12345678910|
```



---

# Pay Attention to Compiler Errors and Warnings!

The (`clang`) compiler outputs these extremely helpful warnings:

![Warnings generated when compiling int_overflow.c](assets/int_overflow_warnings.png)

**Strong advise:**
- Turn on all compiler warnings (`-Wall` flag &mdash; see post #7 on Campuswire for VSCode instructions)
- Correct all errors and warnings

The underlying issue is *integer overflow* (Would you like to know more? Do your part &mdash; ask questions on Campuswire)

---


# Example: Operators :placard:

Programming exercise;
- Write a C program where the user enters a *three-digit* number
- Print the number the user input to the screen
- Also output the number in digit-reversed order

Example output of the program:

```
Enter a three-digit number: 123
The reversed number is: 321
```

---

# Example: Operators :placard:

## Method

- We need to extract the three digits from the number
- Split the number the three-digit `n` into units, tens, and hundreds digits
- `n % 10` gives us the right-most digit
- `n / 100` gives us the hundreds digit
- For tens, we need to do two steps, first remove the hundred `temp = n % 100` and then get the tens part, `ten = temp % 10` gives us the tens digit

For swapping, we can simply display the number in the reverse order (`unit`,`tens` and `hundred`)

---

# Example: Operators

```C
#include <stdio.h>
int main(void)
{
    int input, unit, ten, hundred;
    int temp; // for temporarily storing a value

    printf("\nEnter a three-digit number: ");
    scanf("%d", &input);

    hundred = input / 100; // Get the hundreds digit
    temp = input % 100;    // Remove the hundreds digit
    ten = temp / 10;       // Get the tens digit
    unit = input % 10;     // Get the unit digit

    printf("\n\nThe reversed number is %d%d%d\n\n", unit, ten, hundred);
    return 0;
}
```

---

# Selection and Decisions

C has three kinds of statements (selection, iteration, jump) that can help make decisions and select choices

![bg right 60%](assets/flowchart.svg)

Today we will look at the `if` and `switch` statements as well as relational and logical operators

---

# Logical Expressions

We need to check an expression to see if it is `true` or `false`

- For example, check whether `i < j` is `true` or `false`
- The above `(i < j)` is a *logical expression*
- Result is an integer, `1` for true and `0` for false
- In mathematics, this is referred to as *Boolean algebra*
- C has other relational operators such as `<`,`>`,`<=`,`>=` to *compare* two values

---

# Logical Operators

- Complex logical expressions are built by combining simpler ones
- This is done using the elemental *logical operators*

<div align="center">

| Symbol | Meaning |
| :---: | :--- |
| `!` | logical negation |
| `&&` | logical AND |
| `\|\|` | logical OR |

</div>

As discussed in last lecture, the output of a logical operator is either `0` or `1`

---

# Venn Diagram Visualisations

Logical operations can be understood using a Venn diagram

![50%](assets/logical-expressions.svg)

---

# :warning: Clearing some Confusion

Those new to programming often confuse `==` with the `=` operator

- `==` is used for *comparison*, e.g., is `i` equal to `10` is written in C as `i == 10`
- `=` is used for *assignment*, e.g., `int i = 3;` (semantics: assign the value of 3 to the integer type variable named `i`)

---

# The `if` `else` Statement

```C
if (expresssion)
    {statements1}
else
    {statements2}
```

Select between two execution flows based on the logical value of `expression`

---

# Example - Diagnosing Diabetes

We can use an `if` statement to select whether a person is suffering from diabetes

Definition of diabetes according to World Health Organisation:
- Fasting plasma :drop_of_blood: glucose (FPG) ≥126 mg/dL <span style="color:red">**OR**</span>
- Oral glucose :drop_of_blood: tolerance test (OGTT) 2-hour glucose ≥200 mg/dL

```C
if (fpg >= 126 || ogtt_2hpg >= 200)
    diabetes = 1;
else
    diabetes = 0;
```

---


# C Operator Precedence 🔢

- In primary school, you learned that `2+3*4` is equal to `2+(3*4)`
- This is true because, *by convention*, `*` has higher precedence than `+`
- Parentheses *override* the precedence convention
- So, for example, `x < y || z` is equal to `(x < y) || z` but **NOT** equal to `x < (y || z)`

![bg right 90%](assets/operator_precendence.png)

---

# Cascaded `if` Statements

- We often need to decide between a series of conditions, selecting the first *one* that is true

```C
if (expresssion)
    {statements1}
else if (expression2)
    {statements2}
...
else
    {statementsN}
```

![bg right 80%](assets/cascaded-ifs.svg)

---

# Cascaded `if` - Example :placard:

Check whether a number is positive, negative, or zero.

```C
if (n<0)
    printf("n is less than 0 \n");
else if (n==0)
    printf("n is equal to 0 \n");
else
    printf("n is greater than 0 \n ");
```

---

# Nested `if` Statements

There is also an option to use a `if` statement *inside* another one

```C
if (expresssion)
    if (expression2)
        {statements1}
    else
        {statements2}
else
    {statements3}
```

![bg right 80%](assets/nested-ifs.svg)

---

# Question :question:

Writing nested `if` statements is a poor programming practice. Can you propose a better alternative?

- Check whether a number is odd <span style="color:green">AND</span> divisible by 7

```C
if ( !(num % 2 == 0) )
    if (num % 7 == 0)
        printf("%d is odd and divisible by 7", num);
else
    printf("%d is not odd or divisible by 7", num);
```

*Hint:* Can the condition be expressed as one line of C code?


<!---

---

# The Ternary Conditional Operator

Conditional expressions provide a shorthand way to write an `if else` statement

Syntax:

```
    expr1 ? expr2 : expr3
```

It reads as (i.e., the semantics are):

<div align="center">

If `expr1` is `true` <span style="color:green">THEN</span> execute `expr2`, <span style="color:red">OTHERWISE</span> execute `expr3`

</div>

```C
int i, j, k;
i = 1, j = 2;
k = i < j ? i : j; // Since i < j, then k is assigned the value k = i = 1
```

When to use `?` or an `if else` statement? I would choose the form that is most *readable*

-->

---

# The `switch` statement

Imagine you call your mobile phone service helpline, and you are presented with a series of options

- Press `1` for billing
- Press `2` for text messages
- Press `3` for international roaming
- Press `4` to speak to an agent

In C, we can implement the same using the `switch` statement. Options are selected using the `case` labels.

![bg right 90%](assets/switch.svg)

---

# `switch` - Example :placard:

```C
int main(){
    char grade = 'B';
    switch(grade) {
      case 'A':
         printf("Excellent!\n");
         break;
      case 'B':
      case 'C':
         printf("Well done\n");
         break;
      case 'D':
         printf("You passed\n");
         break;
      case 'F':
         printf("Better try again\n");
         break;
      default:
         printf("Invalid grade\n");
   }
   return 0;
}
```

---

# Difference between `if` and `switch`

We can implement complex logical expression with either an `if` or `switch` statement. Which to choose?

- Matter of personal choice/taste
- `if` checks for a *condition*
- `switch` checks the variable in the argument (between the parentheses `()`) against a range of possible values
- Often, C code is more readable using a `switch` statement

---
<div class="columns">
<div class="columns-left">

# Question :question:

What is the purpose of the `break` statements in a `switch`?

```C
int main(){
    char grade = ‘B’;
    switch(grade) {
      case 'A' :
         printf("Excellent " );
      case 'B' :
      case 'C' :
         printf("Good " );
      case 'D' :
         printf("Average " );
      default :
         printf("Invalid grade\n" );
    }
   return 0;
}
```

</div>
<div class="columns-right">

![50%](assets/qr_code_lecture4.png)

</div>
</div>

---

# `break` statement

- `break` simply *breaks* the program flow to *immediately* exit from the `switch`
- `break` is necessary to exit the `switch` statement once the particular option has been executed
- If it is not used, the remaining cases are also considered

---

# Today's Summary :spiral_notepad:

- Using relational operators and logical operators to describe conditions

- Using `if-else` and `switch-case` statements in C to realise decision-making

- Flow charts to visualise program flow

---

# Next up :spiral_calendar:

Loops :carousel_horse:

- We will introduce `for` and `while` loops

---

# Questions 🙋❓

- Ask me anything (programming-related 😎)
