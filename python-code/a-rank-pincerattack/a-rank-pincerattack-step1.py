H, W, Y, X = map(int, input().split())
S = [['.'] * W for _ in range(H)]

for i in range(H):
    for j in range(W):
        if i == Y or j == X:
            S[i][j] = '*'

S[Y][X] = '!'

for i in range(H):
    print(''.join(S[i]))
