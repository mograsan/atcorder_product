import numpy as np

def gcd(a, b):
    maxV = max(a, b)
    minV = min(a, b)
    if minV == 0:
        return maxV
    else:
        return gcd(minV, maxV%minV)

def gcdOfArray(a, start, goal):
    if goal == start:
        return gcd(a[start], a[start + 1])
    else:
        return gcdOfArray(a, start, goal - 1)
