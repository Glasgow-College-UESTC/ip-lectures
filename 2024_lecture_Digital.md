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


# <!--fit--> <span style="color:white"> Perfect Reconstruction with 2B </span>

![bg opacity:100%](assets/gradient3.png)

---

<!-- _header: ![h:5em](assets/UoG_keyline.svg) -->

# UESTC 3018 — Communication Systems and Principles

Lecture 16 — Precursor to Digital Communications

Dr Hasan Abbas
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

- The (im)Pulse train
- Sampling Theorem
- Interpolation
- Pulse Train

---

# Sampling Theorem

- A signal $g(t)$ with bandwidth $<B$ can be reconstructed exactly from samples taken at any rate $R>2B$.
- Sampling can be achieved mathematically by multiplying by an impulse train. 

$$
III(t) = \sum_{k = -\infty}^{\infty} \delta (t - k)
$$

- Also called a comb function

$$
\overline{g}(t) = III(t)g(t) = \sum_{k = -\infty}^{\infty} g(t)\delta (t - kT) = \sum_{k = -\infty}^{\infty} g(kT_s)\delta (t - kT_s)
$$

---

# The Impulse Train

- Interesting the Fourier Transform of an impulse train is also an impulse train
- The complex exponentials cancel at non-integer frequencies and add up to an impulse at integer frequencies

$$
\mathcal{F} {III(t)} = \mathcal{F} \sum_{k = -\infty}^{\infty} g(t)\delta (t - k) = \int_{-\infty}^{\infty} e^{-j2\pi n f} =  III(f)
$$

![bg right:55% 90%](assets/Samples.svg)

---

# Fourier Transform of a Sampled Signal

The impulse train $III(t/Ts)$ is periodic with period $T_s$ and can be represented as the sum of complex exponentials of all multiples of the
fundamental frequency,

$$
III(t/Ts) = 1/Ts \sum_{k = -\infty}^{\infty} e^{-j2\pi f_s t} 
$$

- $f_s = 1/T_s$

---

# A Sampled Signal

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:500 center](assets/sampling_idea.svg)

---

# Sampled Signal and the Fourier Transform


<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:500 center](assets/sampling_alias.svg)


---

# Sampled Cosines

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:600 center](assets/cosine_samples.svg)

---

# Sampled Examples

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:650 center](assets/cosine_different_sampling.svg)

---

# The Minimum Sampling Rate
  
- When the sampling rate is too low, the spectral replicas overlap

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:650 center](assets/aliasing_1.svg)

---

# Aliasing 

- The spectral overlap

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:450 center](assets/aliasing_2.svg)

- The shaded frequencies overlap and are ambiguous.
- High positive frequencies wrap around to high negative frequencies
- What signal would you reconstruct if you assumed the signal was actually band limited?

---

# Aliasing Contd.

- Cosines at frequencies of 0.75 Hz and 1.25 Hz produce exactly the same samples at a sampling rate of 1 Hz

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:600 center](assets/cosine_aliasing.svg)

---

# Anti-aliasing Filter

- In practice, a sampler is always preceded by a filter to limit the signal bandwidth to match the sampling rate
- This may delete part of the signal if it isn’t bandlimited.
- It ensures that the signal that is sampled is bandlimited.

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>

![w:550 center](assets/alisaing_filter.svg)

---

# Reconstruction

- In an ideal world ...
- To avoid spectral overlap, we need to ensure the sampling frequency is $>= 2B$

![w:550 center](assets/ideal_aliasing.svg)

---

# Realistic Reconstruction

- Due to causality we cant really have an ideal low-pass filter

![w:550 center](assets/interpolation.svg)

---

# Pulsed Sampling

- In reality, we will always a finite time pulse
- This will lead to further changes in the shape of the sampled signal

![w:750 center](assets/practical_interpolation_pulse.svg)

---

# Pulsed Sampling 

- At the recovery/reconstruction
- Equalisation is akin to frequency inversion (more later)

![w:750 center](assets/Comm_syste.svg)

---

# Different Kinds of Pulses

![w:550 center](assets/pulse_modulation.svg)

---

# <!--fit--> <span style="color:white">Digital Modulation</span>

![bg opacity:100%](assets/gradient3.png)

---

# Digital Modulation

- Digital Communications
- Analog vs Digital Communication
- Pulse Code Modulation (PCM)
- Quantisation

---

# Analog vs Digital Communication

- Analogue communication (baseband and modulated) is subject to noise.
- Pulse modulations (PAM, PWM, PPM) represent analogue signals by analogue variations in pulses and are also subject to noise.
- Long distance communication requires repeaters, which amplify signal and noise. Each link adds noise.
- Digital communication suppresses noise by regenerating signal.

---

# The Digital Communication Paradigm


![w:550 center](assets/analog_digital.svg)

---

# Questions ❓
- You can ask on Menti
<!-- 
<!-- Need to change the QR code here -->

---

# Further Reading 

- Section 5.1 - Sampling Theorem
<span style="color:green">Modern Digital and Analog Communication Systems</span>, $5^{th}$ Edition
- B P Lathi and Zhi Ding

---

# Get in touch

Hasan.Abbas@glasgow.ac.uk 