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

# UESTC 3018 — Communication Systems and Principles

Lecture 14 — PLLs et al.

Dr Hasan Abbas
<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# It's a Beautiful Day
<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:500 center A sunny day at UESTC](assets/Beautiful_day.jpg)

---

# From Last Time ⌛

- Frequency Modulation Detection
<!-- Need to change the QR code here -->
![bg right:50% 60%](assets/syncing.gif)

---

# Tonight's Lecture 📆

- Talk Further About FM Detectors
- FM Generation
- Talk about Detection
- Noise Resilience

# Superheterodyne Receivers

- Frequency Conversion or mixing is done to change the carrier frequency from $\omega_c$ to $\omega_{IF}$
- We call IF as intermediate frequency
$$
\begin{aligned}
x(t) &= 2 m(t) \cos \omega_c t \cos \omega_{mix} t \\
  &= m(t) \left[ \cos (\omega_c + \omega_{mix}) t + \cos (\omega_c - \omega_{mix}) t \right]
\end{aligned}
$$
- Setting $\omega_{mix} = \omega_c \pm \omega_{IF}$
$$
\begin{aligned}
x(t) &=  m(t) \left[ \cos \omega_{IF} t + \cos (2\omega_c \mp \omega_{IF}) t \right]
\end{aligned}
$$

![bg right:40% 100%](assets/Block_diagram_heterodyne.svg)

<!-- Key Components and Their Functions:
RF Amplifier:

Amplifies the incoming RF signal to increase its strength before mixing.
Typically uses wideband amplification to accommodate a range of frequencies.
Must have low noise figure to minimize noise introduced by the receiver.

Local Oscillator:
Generates a sinusoidal signal at a frequency offset from the RF signal.
The frequency offset is chosen to produce the desired IF frequency.
Often uses a voltage-controlled oscillator (VCO) for tunability.

Mixer:
Multiplies the RF signal and the local oscillator signal.
Produces sum and difference frequencies.
Nonlinear device, typically a diode or transistor.

IF Amplifier:
Amplifies the IF signal.
Narrowband amplification is used to select the desired IF frequency and reject unwanted signals.
Provides most of the gain in the receiver.
IF Filter:

Filters the IF signal to remove noise and interference.
Typically a bandpass filter centred at the IF frequency.
Demodulator:

Extracts the original information-carrying signal from the IF signal.
The type of demodulator depends on the modulation scheme used (e.g., AM, FM, QAM). -->

---

# Superheterodyne Receivers

- Down converting to IF allows us to use sensitive amplifiers
- Bandpass filter is <span style="color:red"> very hard </span>to design at RF
- Commonly used in many broadcast systems

![bg right:60% 100%](assets/superheterodyne.svg)

---

# Phased-Locked Loop

- A negative feedback system used in FM demodulation
- Compares the phase of the FM signal with the phase of a locally generated reference signal.
- First generate a VCO output $r(t)$ <span style="color:green"> Phase Comparison </span>
- Check for errors with $e(t)$ <span style="color:blue"> Error Generated </span>
- $e(t)$ controls the VCO frequency <span style="color:orange"> VCO function </span>
- VCO adjusts the frequency $x(t)$ <span style="color:red"> Phase Lock </span>

- Objective is to minimise the phase difference between $x(t)$ and $y(t)$.

![bg right:50% 100%](assets/PLL.svg)

<!-- --- -->
<!-- 
<!-- # fit <span style="color:white"> FM Generation 📡 </span> -->
<!-- ![bg opacity:100%](assets/gradient3.png) -->

<!-- --- -->

<!-- # Generation of FM Signals

- The instantaneous frequency of the carrier changes with $m(t)$
- A <span style="color:green"> voltage-controlled oscillator </span> does exactly this!
-  -->
 
---

# <!--fit--> <span style="color:white"> FM Generation 📡 </span>
![bg opacity:100%](assets/gradient3.png)

---

# Generation of FM Signals

- The instantaneous frequency of the carrier changes with $m(t)$
- A <span style="color:green">voltage-controlled oscillator</span> does exactly this!
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

- The above is simple, yet there are some artefacts
- Some amplitude modulation remains in the system


![bg right:60% 100%](assets/nbfm_modulator.svg)

---

# The Limiter and Bandpass Filter

- Amplitude variations create noise and interference 👎
- We first use a limiter circuit to limit any amplitude fluctuations
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
<!-- 
<!-- Need to change the QR code here -->

---

# Further Reading 

- Section 4.9 - Generating FM Signals
<span style="color:green">Modern Digital and Analog Communication Systems</span>, $5^{th}$ Edition
- B P Lathi and Zhi Ding

---

# Get in touch

Hasan.Abbas@glasgow.ac.uk 