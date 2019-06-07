import numpy as np


N = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

minV = min([a, b, c, d, e])
q = int(N / minV)
r = int(N % minV)
if q != 0 and r != 0:
    print(5 + q)
elif q != 0 and r == 0:
    print(5 + q - 1)
else :
    print(5)
