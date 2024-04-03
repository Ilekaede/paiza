import string
H, W = map(int, input().split())
S = [input() for i in range(H)]

for i in range(H):
    for j in range(W):
        if i == 0:
            if S[i+1][j] == '#':
                print(i, j)
        elif i == H - 1 :
            if S[i-1][j] == '#':
                print(i, j)
        else :
            if S[i+1][j] == '#' and S[i-1][j] == '#':
                print(i, j)