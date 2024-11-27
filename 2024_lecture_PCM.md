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


# <!--fit--> <span style="color:white">Quantisation - trading precision for data rate</span>

![bg opacity:100%](assets/gradient3.png)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 3018 — Communication Systems and Principles

Lecture 17 — Quantisation and Equalisation

Dr Hasan Abbas
<!-- transition: fade -->
<!-- <style scoped>a { color: #eee; }</style> -->

<!-- This is presenter note. You can write down notes through HTML comment. -->

---

# From Last Time ⌛

- Sampling
- Pulse Coded Modulation
- Quantisation

---

# Today's Lecture 📆

- Quantisation Error
- Encoding
- Equalisation (if time allows)

![bg right:65% 90%](assets/digital_comms.jpeg)

---

# Quantisation Types

1. Uniform Quantisation
   - Equal step sizes
   - Simpler implementation
2. Non-Uniform Quantisation
   - Smaller steps for low amplitudes, larger for high amplitudes
   - Improves SQNR for signals with non-uniform distribution

![bg right:45% 80%](assets/quant_levels.jpeg)

---

# Quantisation Error


<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:700 center](assets/quantisation_error.jpeg)


---

# How is it Found?


- Difference between actual signal and quantised signal
- $q(t) = m(t) - \hat{m}(t)$
  
- The time-averaged power is,

$$
q^2(t) = \lim_{T \to \infty} 1/T \int_{-T/2}^{T/2} \left[ \sum_{k} q(kT_s) \mathrm{sinc} (2 \pi B t - k \pi) \right]^2 dt
$$

![bg right:55% 90%](assets/quant_error_derive.jpeg)

---

# Quantisation Noise Calculation (contd.)

- Exploiting orthogonality
- With a sampling rate of $2B$, the total number of samples in an interval $T$ is $2BT$.
- $q(t)$ lies in the $( -m_p/L , m_p/L)$ range
- $q(t)$ is uniformly distributed
- The probability density function (PDF) is constant, i.e.  ($1/(2m_p/L)=L/2m_p$) in the range,

$$
q^2(t) = \int_{-m_p/L}^{-m_p/L} \frac{L}{2m_p} q^2 dq = \frac{m_p^2}{3L^2}
$$

---

# Signal-to-Quantisation Noise Ratio

A measure of the signal quality wrt to the quantisation noise (using power)

$$
  \text{SQNR} = 10 \log_{10} \left( \frac{\text{Signal Power}}{\text{Quantisation Noise Power}} \right)
$$

$$
\frac{S}{N} = 3L^2 \frac{m^2(t)}{m_p^2}
$$

- Strategies to minimise error:
  - Increase bit depth
  - Use non-uniform quantisation

![bg right:45% 90%](assets/quant_error_derive.jpeg)


---

# Quantisation Error


<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:700 center](assets/quantisation%20comparison.png)

---

# Example

What bandwidth is needed to transmit a PCM encoded signal?

- Suppose that we want maximum error $0.5\% m_p$ for a 3 kHz signal.


---

# <!--fit--> <span style="color:white">Encoding</span>

![bg opacity:100%](assets/gradient3.png)

---

# Encoding: Line Coding

- Translates bits into physical signals for transmission
- Common techniques:
  - **NRZ** (Non-Return-to-Zero): High for '1', low for '0'
  - **Manchester**: Combines data and clock
  - **RZ** (Return-to-Zero): Short pulses
- Applications:
  - Ethernet, serial communication

![bg right:65% 90%](assets/digital_comms.jpeg)

---

# Encoding: Source Coding

- Compresses data for efficient transmission
- Key algorithms:
  - **Huffman Coding**: Variable-length codes for frequent symbols
  - **Shannon Entropy**: Measures minimum average bits per symbol
- Example
$$
  H(X) = - \sum_{i} P(x_i) \log_2 P(x_i)
$$

---

# Equalisation: Basics

- **Purpose**: Mitigate distortions caused by the channel
- Channel impairments:
  - Noise
  - Inter-Symbol Interference (ISI)
- Frequency-domain representation:
$$
  Y(f) = H(f) \cdot X(f) + N(f)
$$

---

# Equalisation Techniques
1. **Zero-Forcing Equaliser**
   - Inverts channel response: $H_{\text{ZF}}(f) = \frac{1}{H(f)}$
   - Eliminates ISI but amplifies noise
2. **MMSE Equaliser**
   - Balances noise and ISI reduction
   - Optimal in terms of minimizing mean-square error

---

# Questions ❓
- You can ask on Menti
<!-- 
<!-- Need to change the QR code here -->

---

# Further Reading 

- Chapter 5 - Sampling Theorem
<span style="color:green">Modern Digital and Analog Communication Systems</span>, $5^{th}$ Edition
- B P Lathi and Zhi Ding

---

# Get in touch

Hasan.Abbas@glasgow.ac.uk 