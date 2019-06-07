import numpy as np

A, B, T = map(int, input().split())

time = T + 0.5
cnt = 0
while time > 0:
    time = time - A
    cnt += 1

if cnt != 0:
    cnt = cnt - 1

print(B * cnt)
