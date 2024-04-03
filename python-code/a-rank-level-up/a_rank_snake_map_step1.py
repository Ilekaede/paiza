import string
H, W, N = map(int, input().split())
S = [input() for i in range(H)]

for i in range(N):
    y, x = map(int, input().split())
    print(S[y][x])

print(S)
