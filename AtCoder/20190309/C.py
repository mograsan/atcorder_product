import numpy as np

N, M = map(int, input().split())
A = []

for i in range(0, N):
    a, b = np.array(list(map(float, input().split())))
    A.append((a, b))

dtype = [('key', int), ('value', int)]
arrayA = np.array(A, dtype=dtype)
arrayA = np.sort(arrayA, order=['key'])
cnt = 0
sum = 0
flag = 0
for j in range(0, N):
    pay = arrayA[j][0]
    num = arrayA[j][1]
    if cnt + num < M :
        cnt += num
        sum += pay*num
    else :
        diff = int(M - cnt)
        for t in range(0, diff):
            sum += pay
            cnt += 1
            if cnt == M :
                flag = 1
                print(int(sum))
                break
    if flag == 1:
        break
