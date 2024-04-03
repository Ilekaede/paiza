import string
H, W = map(int, input().split())
S = [input() for i in range(H)]

for i in range(H):
    for j in range(W):
        if j == 0:
            if S[i][j + 1] == '#':
                print(i, j)
        elif j == W - 1 :
            if S[i][j - 1] == '#':
                print(i, j)
        else :
            if S[i][j - 1] == '#' and S[i][j + 1] == '#':
                print(i, j)