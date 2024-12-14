---
title: UESTC 1005 - Introductory Programming
description: Course Slides for the C programming course - Lecture 11 - Structures and Bit Manipulation
theme: uncovered
paginate: true
math: katex
transition: fade
_paginate: false
style: |
  .columns {
    display: grid;
    grid-template-columns: repeat(2, minmax(0,1fr));
    gap: 1rem;
  }
  section {
      background-color: #FFFCEE;
  --color-background: #FFFCEE;
  }
  img[alt~="center"] {
      display: block;
      margin: 0 auto;
  }
_backgroundColor: "#FFFCEE"
_color: "#093867"


---

<!-- _header: ![h:5em](../assets/UoG_keyline.svg) -->

# UESTC 1005 — Introductory Programming

<h2>Lecture 13 &mdash; Double Pointers, Doubly Linked List, Binary Search</h2>

Dr. Mark D. Butala

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
| Dr. Ahmad Zoha | Prof. Bo Liu |
| Dr. Hassan T. Abbas | Prof. Chong Li |

</p>
</div>


---

# Lecture Outline

- Double pointers ✨✨
- Doubly linked list   ...↔️📦↔️📦↔️📦↔️📦↔️📦↔️...
- Binary search  🔟🔎

---

# Recap of pointers

- In the scope of IP, we have used pointers ╰┈➤ in the following ways:
  + To pass a variable to a function by reference
  + Equivalence (in most cases): array variable name and pointer to first element
  + For dynamic memory allocation
  + To store the link to the next node in a linked list
- Of these, passing a variable by reference is the most common case

---

# What is a pointer to a pointer?!? 🤯

- Understand this, and you understand pointers (and call by reference) 👩🏻‍🎓👨🏻‍🎓
- Recall: a variable passed by reference can be modified by the function
- Passing a pointer variable by reference "gives permission" to the function to modify the pointer
- A reference to a pointer (`&x_ptr` where `x_ptr` is a pointer) is a pointer to a pointer
- What's the point 😜? 👉 double pointers occur when you pass a pointer variable by reference to a function

---

# Double pointer example

``` c
#include <stdio.h>
#include <string.h>

// c_ptr_ptr is a pointer, to a pointer, to a char
unsigned longer_string(char **c_ptr_ptr, char s1[], char *s2) {
    // Compare the lengths of strings s1 and s2. Assign the pointer
    // passed by reference (c_ptr_pttr) to the longer string and
    // return the length of the longer string.
    unsigned N1 = strlen(s1);
    unsigned N2 = strlen(s2);
    if (N2 > N1) {
        *c_ptr_ptr = s2;
        return N2;
    }
    else {
        *c_ptr_ptr = s1;
        return N1;
    }
}

int main(void) {
    char *string1 = "Hello World";
    char string2[] = "IP rulz!";
    char *c_ptr = NULL;

    unsigned N = longer_string(&c_ptr, string1, string2);
    printf("The longer string is \"%s\" which has a length of %u\n", c_ptr, N);
    // Output: The longer string is "Hello World" which has a length of 11

    return 0;
}
```


---

# <!--fit--> <span style="color:white">Doubly Linked List</span>

![bg opacity:100% decorative background](../assets/gradient.jpg)

---

# <!--fit--> <span style="color:white">Binary Search</span>

![bg opacity:100% decorative background](../assets/gradient.jpg)


---

# Binary search


<div align="center">

![](assets/Binary-search-work.gif)
(https://en.wikipedia.org/wiki/Binary_search)

</div>


---

☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️🤞☘️

<div align="center">

#
# 祝你学业成功
# 祝你金榜题名
#

</div>

🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧🧧
