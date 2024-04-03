import string
H, W = map(int, input().split())
S = [input() for i in range(H)]

for i in range(H):
    for j in range(W):
        if S[i][j] == '#':
            print(i, j)