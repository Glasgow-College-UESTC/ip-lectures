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


# <!--fit--> <span style="color:white">Confusion 😕 is part of programming </span>

![bg opacity:100%](assets/gradient.jpg)

---

# Quotes from Dennis Ritchie, creator of C and co-creator of UNIX

- [C has] the power of assembly language and the convenience of … assembly language.
- UNIX is very simple, it just needs a genius to understand its simplicity.
- C is quirky, flawed, and an enormous success.

![bg right 45% 95%](assets/Dennis_Ritchie_2011.jpg)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC HN 1005 - Introductory Programming

Lecture 0 + 1 — Course Information

Dr. Hasan T. Abbas, Dr. Mark D. Butala

<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# Why Programming? 👩🏽‍💻👨🏽‍💻

- Problem-solving
- Living in the new (digital) world
- Vast career opportunities
- Automation and artificial intelligence

---

# Why C?

- Mother of numerous programming languages
- Highly portable language
- Terse and uncomplicated
- Direct hardware interaction
![bg right 45% 95%](assets/C-Tartan.png)

---

# C Popularity?

- Amongst top two programming languages (for >30 years)
- Embedded systems
- Backbone of operating systems (UNIX, Linux, MacOS)
- Game design
- Animation
![bg right 45% 95%](assets/C-Tartan.png)

---

# The Roadmap


![bg right:65% 85%](assets/timeline_courses.svg)

---

# Course Aims 💡

- Equip you with <span style="color:orange">skills</span> to write C programs
- Introduce the concept of modular programming
- Develop testing and debugging skills

---

# Intended Learning Outcomes 🦾

By the end of the course, we want you to ...

- **Write** C programs that _work_
- Identify errors in the code
- Recognise the correct syntax in C programs
- Design, compile and run C programs
- Demonstrate technical English vocabulary


![bg right:35% 85%](assets/uncle_sam.jpeg)

---

# Textbooks? 📚

We are going to use a [free, online wikibook](https://liascript.github.io/course/?https://raw.githubusercontent.com/liaBooks/C-Programming/master/README.md#3) as a reference


![bg right:35% 100%](assets/qrcode_book.png)

- Practice coding online
- All we need to know

---

# Course Materials 🧰

- We will use Moodle for **all** class activity
- We will share all materials (notes, handouts, results) on Moodle
- Ask your questions on Moodle Forums
- Class and Moodle participation recorded and awarded

---

# Course Assessments 💯

- One mid-term quiz of multiple choice questions - <span style="color:green">10 %</span>
- 4 Lab sessions - <span style="color:orange">30%</span>
- Written Final Exam - <span style="color:red">60%</span>
- Programming Assignments <span style="color:green">formative = 0%</span> 📈

---

# Midterm Assessment 💯

- Makes up 10% of the overall grade
- 10 questions each carrying equal marks
- ❗️ <span style="color:red">You can not miss the midterm</span>

![bg right:50% 80%](assets/SCR-20230910-buch.png)

---

# Lab Sessions

- Each student has four lab sessions scheduled
- You will be assessed during each lab session
- Lab handout is available on Moodle
- You will submit a lab report towards the end of the semester
- You receive a `CW` grade for missing a lab

![bg right:50% 100%](assets/2442.png)

---

# Final Exam 💯

- Makes up 60% of the total grade
- 4 questions each of 25 marks
- Questions will have sub parts
- Past exam papers available on Moodle

![bg right:50% 100%](assets/final_exam.png)

---

# Questions 🙋❓

- Let us know what you think?

![bg right:50% 70%](assets/hainan_qr_code_l1.png)

---

# <!--fit--> <span style="color:white">Now Let's C!</span>

![bg opacity:100%](assets/gradient.jpg)

---

# The Art of Problem-Solving

- Coming with a step-by-step plan
- We call the plan an *algorithm*
- Computers are good at processing algorithms
- We can <span style="color:green">automate</span> tasks

---

# <!--fit--> <span style="color:white">First, solve the problem. Then, write the code.</span>

John Johnson

![bg opacity:100%](assets/gradient.jpg)

---

# Problem-Solving in Engineering 👩‍🔬👨‍💻

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>
![500% center](assets/block.svg)

---

# Computer Programming

- Historically, we have found ways to solve our problems with the use of numbers.
- Computers are very good at dealing with numbers.
- We need to tell the computer <span style="color:red">exactly</span> what to do.
- Sequence of instructions is called a computer program

---

# Computers 💻

- Computers are **phenomenally** faster than us in performing calculations.
- Computers _only_ directly understand <span style="color:red">machine language</span>.
- Communication with computers require *assemblers*.
- High-level Languages require *compilers*

---

# Why C? 🤔

- C was co-developed with the UNIX operating system
- Created in the 1970s at Bell Laboratories by Dennis Ritchie
- *High-level* Programming language
- As examples, Linux, Windows, and Android are written in **C**
- **C** can run on <span style="color:red">ANY</span>  computer

![bg right:30% 95%](assets/CLang.png)

---

# <!--fit--> <span style="color:white">Example Program</span>

![bg opacity:100%](assets/gradient.jpg)

---

# Today's Summary :spiral_notepad:

- The art of problem-solving 🖌️
- Learn by practice 🚴‍♀️🚴‍♂️
- Always get help when in doubt 😇

---

# Task 🧗‍♀️

- Set up your machine for C programming
- Refer to the Course Information Section on Moodle for guidance
- Start practicing

![bg right:35% 85%](assets/uncle_sam.jpeg)

---

# Next up :spiral_calendar:

Let's C!

- Start with the C program structure

---

# <!--fit--> <span style="color:white">Any fool can write code that a computer can understand. Good programmers write code that humans can understand </span>

![bg opacity:100%](assets/gradient.jpg)

---

# Get in touch ✍️

<Hasan.abbas@glasgow.ac.uk>
<mark.butala@glasgow.ac.uk>
