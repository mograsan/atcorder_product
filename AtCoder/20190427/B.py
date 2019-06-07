import numpy as np

N = int(input())
Vlist = np.array(list(map(int, input().split())))
Clist = np.array(list(map(int, input().split())))
diff_list = []

sum = 0
for i in range(0, N):
    diff = Vlist[i] - Clist[i]
    if diff > 0:
        sum = sum + diff

print(sum)
