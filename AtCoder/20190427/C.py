import numpy as np

def gcd(a, b):
    maxV = max(a, b)
    minV = min(a, b)
    if minV == 0:
        return maxV
    else:
        return gcd(minV, maxV%minV)

N = int(input())
Alist = list(map(int, input().split()))

maxg = 0
if N == 2:
    print(max(Alist))
else:
    gcalc = Alist[0]
    for i in range(0, N):
        tmp = np.array(Alist)
        g = 0
        if i != N - 1:
            tmp[i] = tmp[i + 1]
        else:
            tmp[i] = tmp[i - 1]
        if i == 0:
            for j in range(1, N):
                if j == 1:
                    g = gcd(tmp[0], tmp[1])
            else:
                g = gcd(g, tmp[j])
        else:
            for j in range(i, N):
                if j == i:
                    g = gcd(gcalc, tmp[j])
                    gcalc = g
                else:
                    g = gcd(g, tmp[j])
        if maxg < g:
            maxg = g
    print(maxg)
