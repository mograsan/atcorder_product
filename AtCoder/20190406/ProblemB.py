import numpy as np

a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
array = np.array([a, b, c, d, e])
rlist = [a % 10, b % 10, c % 10, d % 10, e % 10]
value = 0
for i in range(0, 4):
    tmpr = rlist[i] % 10
    if tmpr != 0 and 10 - tmpr > value:
        value = 10 - tmpr
tenList = [int(a / 10) * 10 + 10, int(b / 10) * 10 + 10, int(c / 10) * 10 + 10, int(d / 10) * 10 + 10, int(e / 10) * 10 + 10]
for i in range(0, 5):
    tmp = tenList[i]
    if rlist[i]  == 0:
        tenList[i] = tmp - 10
sumv = sum(tenList)
print(int(sumv - value))
