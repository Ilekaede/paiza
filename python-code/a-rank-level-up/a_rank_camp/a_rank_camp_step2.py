H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]

flag = False
for y in range(H):
    for x in range(W):
        if S[y][x] == '*':
            if y > 0 and S[y - 1][x] != '#':
                S[y - 1][x] = '*'
            if y < H - 1 and S[y + 1][x] != '#':
                S[y + 1][x] = '*'
            if x > 0 and S[y][x - 1] != '#':
                S[y][x - 1] = '*'
            if x < W - 1 and S[y][x + 1] != '#':
                S[y][x + 1] = '*'
            flag = True
            break
    if flag == True:
        break

for y in range(H):
    print("".join(S[y]))
