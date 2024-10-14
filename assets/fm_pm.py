from matplotlib import pyplot as plt
import numpy as np

# Generate a time array
t = np.linspace(0, 1, 1000)

# Message signal (m(t))
m_t = np.sin(2 * np.pi * 5 * t)

# Derivative of the message signal (dm(t)/dt)
dm_t_dt = 2 * np.pi * 5 * np.cos(2 * np.pi * 5 * t)

# Phase modulation (PM) of the message signal
pm_t = np.sin(2 * np.pi * 10 * t + m_t)

# Frequency modulation (FM) of the derivative of the message signal
fm_t = np.sin(2 * np.pi * 10 * t + dm_t_dt)

# Plotting the signals
plt.figure(figsize=(12, 8))

plt.subplot(4, 1, 1)
plt.plot(t, m_t)
plt.title('Message Signal $m(t)$')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')

plt.subplot(4, 1, 2)
plt.plot(t, dm_t_dt)
plt.title('Derivative of Message Signal m`(t)')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')

plt.subplot(4, 1, 3)
plt.plot(t, pm_t)
plt.title('Phase Modulation (PM) of m(t)')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')

plt.subplot(4, 1, 4)
plt.plot(t, fm_t)
plt.title('Frequency Modulation (FM) of m`(t)')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')

plt.tight_layout()
plt.show()

