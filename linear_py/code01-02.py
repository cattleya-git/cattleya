import sympy
from sympy.abc import x, y

# x+2y-1=0, 4x+5y-2=0
ans01 = sympy.solve([x + 2 * y - 1, 4 * x + 5 * y - 2])

# x^2+x+1=0
ans02 = sympy.solve([x ** 2 + x + 1])

# x^2+y^2=1, y=x
ans03 = sympy.solve([x ** 2 + y ** 2 - 1, x - y])

print(ans01)
print(ans02)
print(ans03)
