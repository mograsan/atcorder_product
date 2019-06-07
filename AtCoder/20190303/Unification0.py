import numpy as np
import copy

cubes = list(input())
cubes = np.array(list(map(int, cubes)))

zeroNum = 0
oneNum = 0
for i in range(0, len(cubes)):
    if cubes[i] == 0:
        zeroNum += 1
    else :
        oneNum += 1

print(min(zeroNum, oneNum) * 2)
