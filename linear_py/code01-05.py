from numpy import linspace, sin, cos, exp, pi
import matplotlib.pyplot as plt
from math import factorial

x = linspace(-3 * pi, 3 * pi, 301)
y = x - x
terms = 15
plt.plot(x, y, label="0")
for n in range(terms):
    y = y + pow(-1, n) * (x ** (2 * n + 1)) / factorial(2 * n + 1)
    plt.plot(x, y, label=f"{n+1}th term")
plt.plot(x, sin(x), label="sin(x)")
plt.legend()
plt.xlim(-3*pi, 3*pi)
plt.ylim(-2, 2)
plt.show()
