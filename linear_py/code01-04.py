from numpy import linspace, sin, cos, exp, pi
import matplotlib.pyplot as plt
from math import factorial

x = linspace(-2 * pi, 2 * pi, 201)
y0 = x - x
y1 = y0 + x ** 1 / factorial(1)
y3 = y1 - x ** 3 / factorial(3)
y5 = y3 + x ** 5 / factorial(5)
y7 = y5 - x ** 7 / factorial(7)
y9 = y7 + x ** 9 / factorial(9)
num_label = 0
for y in [y0, y1, y3, y5, y7, y9]:
    plt.plot(x, y, label=f"{num_label}th term")
    num_label = num_label + 1
plt.plot(x, sin(x), label="sin(x)")
plt.legend()
plt.xlim(-2*pi, 2*pi)
plt.ylim(-2, 2)
plt.show()
