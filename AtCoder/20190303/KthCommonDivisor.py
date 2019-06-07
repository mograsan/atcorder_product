a, b, k = map(int, input().split())

divisor = min(a, b)
cnt = 0
while cnt != k:
    if int(a % divisor) == 0 and int(b % divisor) == 0:
        cnt = cnt + 1
    divisor = divisor - 1

print(divisor + 1)
