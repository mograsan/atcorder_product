import numpy as np


def gcd(a, b):
    c = max(a,b)
    d = min(a,b)
    r = c % d
    if r == 0:
        return d
    else:
        return gcd(d, r)


monsterNum = int(input())
monsterHPArray = np.array(list(map(int, input().split())))
a = monsterHPArray[0]
for i in range(1, monsterNum):
    b = monsterHPArray[i]
    # print(a)
    # print(b)
    a = gcd(a, b)

print(a)
