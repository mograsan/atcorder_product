import numpy as np

N, M, C = map(int, input().split())
B= np.array(list(map(int, input().split())))
truthCnt = 0
for i in range(0, N):
    A = np.array(list(map(int, input().split())))
    sum = C
    for j in range(0, M):
        sum += A[j]*B[j]

    if sum > 0 :
        truthCnt += 1

print(truthCnt)
