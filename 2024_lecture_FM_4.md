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


# <!--fit--> <span style="color:white"> If you wish to understand the universe, think of energy, frequency, and vibration </span>

![bg opacity:100%](assets/gradient3.png)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 2018 - Communication Systems and Principles

Lecture 14 — PLLs et al.

Dr Hanaa Abumarshoud and Dr Hasan Abbas
<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# From Last Time ⌛

- Frequency Modulation Detection
<!-- Need to change the QR code here -->
![bg right:50% 60%](assets/syncing.gif)

---

# Today's Lecture 📆

- FM Generation
- Talk about Detection
- Noise Resilience

![bg right:50% 70%](assets/qr_4.png)

---

# <!--fit--> <span style="color:white"> FM Generation 📡 </span>
![bg opacity:100%](assets/gradient3.png)

---

# Generation of FM Signals

- The instantaneous frequency of the carrier changes with $m(t)$
- A <span style="color:green"> voltage-controlled oscillator </span> does exactly this!
- In FM, recall
$$
\omega_i (t) = \omega_c + k_f m(t)
$$
- There is another simpler method, called the <span style="color:green">indirect FM generation</span>


---

# Narrowband FM Generation

- Recall, for narrowband FM, $|k_f a(t)| \ll 1$
$$
\psi^{\mathrm{NBFM}}(t) \simeq A \left[ \cos \omega_c t - k_f a(t) \sin \omega_c t \right]
$$
- This is a linear (simpler) system
- We can use an AM modulator (DSB-SC) with a phase shifter ($\sin \omega_c t$) 

![bg right:50% 100%](assets/blockdiagram.svg)


---

# Narrowband FM Generation

- The above is simple yet there are some artefacts
- Some amplitude modulation remains in the system


![bg right:60% 100%](assets/nbfm_modulator.svg)

---

# The Limiter and Bandpass Filter

- Amplitude variations create noise and interference 👎
- We first a limiter circuit to limit any amplitude fluctuations
$$
v_o(t)= \begin{cases}+1 & v_i(t)>0 \\ -1 & v_i(t)<0\end{cases}
$$

![bg right:50% 100%](assets/signum.svg)

---

# The Limiter and Bandpass Filter (contd.)

- The input to the limiter and bandpass filter blocks is,
$$
v_{i}(t)=A(t)\cos\theta(t) \, \mathrm{,}\, \theta(t)=2\pi f_{c}t+k_{f}a(t)
$$
- $A(t)$ is ideally constant but usually very slowly varying
$$
v_o(\theta)= \begin{cases}+1 & \cos \theta >0 \\ -1 & \cos \theta<0\end{cases}
$$
$$
\begin{aligned}
    v_{o}(\theta) &= \frac{4}{\pi}\left(\cos\theta-\frac{1}{3}\cos 3\theta+\frac{1}{5}\cos 5\theta+\cdots\right) \\
    {}&= \frac{4}{\pi}\Big(\cos\left(2\pi f_{c}t+k_{f}a(t)\right)-\frac{1}{3}\cos 3\left(2\pi f_{c}t+k_{f}a(t)\right)+\cdots\Big)
\end{aligned}
$$

---

# <!--fit--> <span style="color:white"> Noise Resilience 📢 </span>
![bg opacity:100%](assets/gradient3.png)

---

# Advantages of FM

- FM is less susceptible to amplifier non-linearities
$$
x(t)=A\cos(\omega_{c}t+\psi(t))
$$
- The output that we get is,
$$
\begin{aligned}
y(t) &= a_{0}+a_{1}x(t)+a_{2}x^{2}(t)+\cdots\\ 
{}&= c_{0}+c_{1}\cos(\omega_{c}t+\psi(t))+c_{2}\cos(2\omega_{c}t+2\psi(t))+\cdots
\end{aligned}
$$
- For amplitude modulation, the output is, $y(t) = a x(t)+bx^{3}(t)$
$$
\begin{aligned}
y(t) &=a m(t)\cos\omega_{c}t+b m^{3}(t)\cos^{3}\omega_{c}t \\
&{}= (a m(t)+\frac{3}{4}b m^{3}(t))\cos\omega_{c}t+\frac{1}{4}b\cos3\omega_{c}t
\end{aligned}
$$

---

# Questions ❓
- You can ask on Menti

<!-- Need to change the QR code here -->
![bg right:50% 70%](assets/qr_4.png)

---

# Further Reading 

- Section 4.9 - Generating FM Signals
<span style="color:green">Modern Digital and Analog Communication Systems</span>, $5^{th}$ Edition
- B P Lathi and Zhi Ding

---

# Get in touch

Hanaa.Aburmarshoud@glasgow.ac.uk
Hasan.Abbas@glasgow.ac.uk 