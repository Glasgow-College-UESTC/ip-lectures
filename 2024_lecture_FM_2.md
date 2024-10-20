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


# <!--fit--> <span style="color:white"> FM: Where the sound is always sweeter! 📻 </span>

![bg opacity:100%](assets/gradient3.png)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 2018 - Communication Systems and Principles

Lecture 12 — Angle Modulation II

Dr Hanaa Abumarshoud and Dr Hasan Abbas
<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# From Last Time ⌛

- Angle Modulation is a non-linear process
- We don't change the amplitude
- PM and FM are very similar - a $90 \degree$ phase-shift
  
<!-- Need to change the QR code here -->
![bg right:50% 70%](assets/qr_2_lecture.png)

---

# Today's Lecture 📆

- Bandwidth in FM
- Carson's Rule
- Spectral Analysis

---

# Down the History Lane 📜

- Due to inherent non-linearity, FM is hard to analyse
- Can't really apply Fourier transform tools
- Motivation was to reduce the bandwidth
- Turns out FM has infinite theoretical bandwidth

![bg right:50% 100%](assets/Edwin_Armstrong_at_blackboard.jpg)

---

# First an Example - FSK/PSK

- Given a signal $m(t)$, sketch the FM and PM waves.
- $k_f = 2 \pi \times 10^{5}$, $k_p = \pi/2$ and $f_c = 100$ MHz.


![bg right:50% 95%](assets/exameple_lect2.svg)

---

# <!--fit--> <span style="color:white"> Bandwidth Analysis ♾️ </span>
![bg opacity:100%](assets/gradient3.png)

---

# Analysing Bandwidth

- To simplify the expression, $a(t)=\int_{-\infty}^{t}m(u)\,d u$
- Let's define, 
$$
\hat{\varphi}^{\mathrm{FM}}(t)=A\,e^{j[\omega_{c}t+k_{f}a(t)]}=A e^{j k_{f}a(t)}e^{j\omega_{c}t}
$$
from where,
$$
\varphi^{\mathrm{FM}} (t) = \Re \left[\hat{\varphi}^{\mathrm{FM}}(t) \right] .
$$
- Expanding the complex exponential through the Maclaurin power series,
$$
\hat{\varphi}^{\mathrm{FM}}(t) = A \left[ 1 + jk_f a(t) - \frac{k_f^2}{2!}a^2(t) + \dots + j^n \frac{k_f^n}{n!}a^n(t)\right] \times e^{j \omega_c t}
$$

---

# Some Observations

- If $m(t)$ or $M(\omega)$ has a bandwidth of B
- Then $ a(t)$ also has a bandwidth of $B$ Hz <span style="color:gray">(integration is a linear operator)</span>.
- The $n^{th}$ term, $\frac{k_f^n}{n!}a^n(t)$ will have a bandwidth of $n \times B$
- This is due to convolution principle, i.e.
- $A(\omega) * A(\omega)$ spreads the Fourier transform to $2B$ 
- Essentially, we have <span style="color:red">**infinite bandwidth**</span>
- But...
- $\frac{k_f^n}{n!}a^n(t) \to 0$, meaning we only care about the <span style="color:green">first few terms</span>.

---

# FM Signal Representation

- Using the $\varphi^{\mathrm{FM}} (t) = \Re \left[\hat{\varphi}^{\mathrm{FM}}(t) \right]$ representaion, we get,

$$
\begin{aligned}
\varphi^{\mathrm{FM}} (t) &= \Re  \left\{A \left[ 1 + jk_f a(t) - \frac{k_f^2}{2!}a^2(t) + \dots + j^n \frac{k_f^n}{n!}a^n(t)\right] \times \left[\cos (2 \pi f_c t) + j \sin (2 \pi f_c t) \right] \right\} \\
&= A \left( \cos (2 \pi f_c t)  - k_f a(t) \sin (2 \pi f_c t) - \frac{k_f^2}{2!}a^2(t) \cos (2 \pi f_c t) + \dots \right) \\
&\approx A \left( \cos (2 \pi f_c t)  - k_f a(t) \sin (2 \pi f_c t) \right)
\end{aligned}
$$

- This is a narrowband FM signal representation
- The approximation is good when $\left| k_f a(t) \right| \ll 1$
- Generally, we consider 2B bandwidth as narrowband
- PM has a similar expression

---

# Playing with the tones

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:800 center](assets/plot.svg)


---

# Playing with the tones

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:800 center](assets/plot_1.svg)

---

# Playing with the tones

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:800 center](assets/plot_3.svg)

---

# A Dilemma 😵‍💫

- To make the best of FM (or PM), we need make the frequency deviation large enough
- Need to choose a large enough $k_f$ to break the $\left| k_f a(t) \right| \ll 1$ condition
- This is the <span style="color:red">**wideband**</span> FM case
- ⚠️ We can't ignore the higher order terms in the power series anymore
- We need to rely on empirical formulas to estimate the bandwidth

---

# Wideband FM

- <span style="color:red">**Context**</span> We need frequency deviation for the FM signal to be meaningful
- But what is the bandwidth of an FM signal?
- <span style="color:green">*Answer*</span> We use empirical methods / estimations 


![bg right:50% 100%](assets/modulation_animated.gif)


--- 

# An Example

- For an FM signal  $m(t)$, the max and min centre frequencies are $\omega_c + k_f m_p$ and $\omega_c - k_f m_p$ respectively
- Taking into account the bandwidth of the sinc lobe ($4 \pi B$)
- Total Bandwidth is the difference

![bg right:60% 75%](assets/WBFM.svg)

---

# Carson's Rule 🔑

- The estimated bandwidth is,

$$
B^{\mathrm{FM}} = \frac{1}{2 \pi} \left( 2 k_f m_p + 8 \pi B \right)
$$

- The frequency deviation $\Delta f$ is given by,
$$
\Delta f = k_f \frac{m_{\mathrm{max}} - m_{\mathrm{max}}}{2 \times 2 \pi} \, \mathrm{Hz}
$$

- The estimated bandwidth (Hz) is,

$$
B^{\mathrm{FM}} \approx 2 (\Delta f + 2B)
$$


---

# Carson's Rule - Narrowband Formula

- Remember for narrowband FM, $\left| k_f a(t) \right| \ll 1$
- $\Delta f$ is also very small

$$
B^{\mathrm{FM}} \approx 4B
$$

- Earlier we analysed that for narrowband, the bandwidth is 2B Hz.
- A better estimate is then,
$$
B^{\mathrm{FM}} = 2 \left( \Delta f +B\right) = 2 \left( \frac{k_f m_p}{2 \pi} + B \right) 
$$

- A commonly used expression is in terms of deviation ratio,

$$
B^{\mathrm{FM}} = 2B (\beta + 1)
$$

where $\beta$ is th deviation ratio $\Delta f/B$

---

# Questions ❓
- You can ask on Menti

<!-- Need to change the QR code here -->
![bg right:50% 70%](assets/qr_2_lecture.png)

---

# Further Reading 

- Section 4.6 - Bandwidth Analysis of Angle Modulations 
<span style="color:green">Modern Digital and Analog Communication Systems</span>, $5^{th}$ Edition
- B P Lathi and Zhi Ding


# Get in touch

Hanaa.Aburmarshoud@glasgow.ac.uk
Hasan.Abbas@glasgow.ac.uk 