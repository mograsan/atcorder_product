import numpy as np
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
k = int(input())
lst = [a, b, c, d, e]
flag = 0
for i in range(0, 4):
    for j in range(1, 5 - i):
        if lst[i + j] - lst[i] > k:
            print(':(')
            flag = 1
            break
    if flag == 1:
        break
    if i == 3:
        print('Yay!')
