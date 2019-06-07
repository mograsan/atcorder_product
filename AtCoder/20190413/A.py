import numpy as np

A, B = map(int, input().split())

C = max(A, B)
if(C == A):
    A = A - 1
else:
    B = B - 1
D = max(A, B)
print(C + D)
