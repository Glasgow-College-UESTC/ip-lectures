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

# \textcolor{red}{Some Side Effects}

Some unexpected results:

```C
int i;
float pi;
pi = i = 3.1416f;
```
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


Write a C program where you are going to enter a *two-digit* number which is then printed on the screen.

Task is to reverse



![bg right 60%](https://icongr.am/simple/netlify.svg?colored)

## **[Netlify](https://www.netlify.com/)**

#### Ready to write & host your deck!

[![Deploy to Netlify h:1.5em](./assets/netlify-deploy-button.svg)](https://app.netlify.com/start/deploy?repository=https://github.com/yhatt/marp-cli-example)

---

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
