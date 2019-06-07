import numpy as np

S = np.array(list(input()))
N = len(S)

cnt1 = 0
cnt2 = 0

for i in range(0, N):
    if i % 2 == 0:
        if int(S[i]) != 0:
            cnt1 = cnt1 + 1
    else:
        if int(S[i]) != 1:
            cnt1 = cnt1 + 1

for i in range(0, N):
    if i % 2 == 0:
        if int(S[i]) != 1:
            cnt2 = cnt2 + 1
    else:
        if int(S[i]) != 0:
            cnt2 = cnt2 + 1

print(min(cnt1, cnt2))
