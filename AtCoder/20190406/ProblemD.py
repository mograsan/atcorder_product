import numpy as np

X, Y, Z, K= map(int, input().split())
aList = list(map(int, input().split()))
aList.sort(reverse=True)
bList = list(map(int, input().split()))
bList.sort(reverse=True)
cList = list(map(int, input().split()))
cList.sort(reverse=True)
aidx = 0
bidx = 0
cidx = 0
aArray = np.array(aList)
bArray = np.array(bList)
cArray = np.array(cList)
print(aArray[aidx] + bArray[bidx] + cArray[cidx])
for i in range(0, K - 1):
    adiff = 10000000000
    bdiff = 10000000000
    cdiff = 10000000000
    if aidx < X - 1:
        adiff = aArray[aidx] - aArray[aidx + 1]
    if bidx < Y - 1:
        bdiff = bArray[bidx] - bArray[bidx + 1]
    if cidx < Z - 1:
        cdiff = cArray[cidx] - cArray[cidx + 1]
    print(adiff, bdiff, cdiff)
    mindiff = min([adiff, bdiff, cdiff])
    if mindiff == adiff:
        aidx = aidx + 1
    elif mindiff == bdiff:
        bidx = bidx + 1
    else:
        cidx = cidx + 1
    print(aidx, bidx, cidx)
    print(aArray[aidx] + bArray[bidx] + cArray[cidx])
