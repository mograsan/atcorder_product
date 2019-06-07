import numpy as np

num, kind = map(int, input().split())
foodList = list(range(1, kind+1))

for i in range(num):
    inputList = list(map(int, input().split()))
    inputList.pop(0)
    foodList = list(set(inputList) & set(foodList))

print(len(foodList))
