H, W = map(int, input().split())
h, w = map(int, input().split())
all = H * W
print(all - (h*W + w * H - h*w))
