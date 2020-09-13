from numpy import linspace, sin, cos, exp, pi
import matplotlib.pyplot as plt
from math import factorial

terms = 10

x = linspace(-3 * pi, 3 * pi, 301)
y = x - x
plt.plot(x, y, linestyle="dashed", label="y = 0")
for n in range(terms):
    y = y + pow(-1, n) * (x ** (2 * n)) / factorial(2 * n)
    plt.plot(x, y, label=f"{n+1}th term")
plt.plot(x, cos(x), label="cos(x)")
plt.legend(bbox_to_anchor=(0.5, 0.45), loc="upper center",
           borderaxespad=0, fontsize=6)
plt.xlim(-3*pi, 3*pi)
plt.ylim(-2, 2)
plt.show()
