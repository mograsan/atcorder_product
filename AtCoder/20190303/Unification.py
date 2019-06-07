import numpy as np
import copy

cubes = list(input())
cubes = np.array(list(map(int, cubes)))

def removeCubes(cubeArray, cnt):
    originalArray = copy.deepcopy(cubeArray)
    max = 0
    resultArray = np.array([])
    for i in range(0, len(cubeArray) - 1):
        if cubeArray[i] != cubeArray[i + 1]:
            np.delete(cubeArray, i)
            np.delete(cubeArray, i)
            print(cubeArray)
            np.append(resultArray, removeCubes(cubeArray, cnt + 1))
            cubeArray = copy.deepcopy(originalArray)
    if len(resultArray) == 0:
        return cnt
    elif len(resultArray) == 1:
        return resultArray[0]
    else :
        maxRet = 0
        for j in range(0, len(resultArray)):
            if maxRet < resultArray[j]:
                maxRet = resultArray[j]
        return maxRet

print(removeCubes(cubes, 0) * 2)
