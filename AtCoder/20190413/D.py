import numpy as np

N, K = map(int, input().split())
S = np.array(list(input()))
scores = []
head = int(S[0])
last = int(S[N-1])
cnt = 0
if len(S[0]) == 1:
    print(1)
else:
    for i in range (0, N):
        n =  int(S[i])
        if i != N - 1:
            cnt = cnt + 1
            if n != int(S[i + 1]):
                scores.append(cnt)
                cnt = 0
        else:
            cnt = cnt + 1
            scores.append(cnt)

    for k in range (0, K):
        scoresArray = np.array(scores)
        maxValue = 0
        maxIdx = 0
        lim = 0
        if last == 0:
            lim = len(scoresArray) - 1
        else:
            lim = len(scoresArray) - 2
        for idx in range(0, lim):
            if idx == 0 and head == 0:
                tmp = scoresArray[idx] + scoresArray[idx + 1]
                if maxValue < tmp:
                    maxValue = tmp
                    maxIdx = idx
            elif: scoresArray[idx] == 0:
                if last == 0 and idx == lim - 1:
                    tmp = scoresArray[idx] + scoresArray[idx + 1]
