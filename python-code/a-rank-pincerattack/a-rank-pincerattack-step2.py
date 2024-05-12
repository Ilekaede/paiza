H, W, Y, X = map(int, input().split())
S = [list(input()) for _ in range(H)]

S[Y][X] = '*'
def dfs(y, x) :
    dy = y + 1
    if dy >= H:
        return
    else:
        dfs(dy, x)
        if S[dy][x] == '*':
            S[y][x] = '*'
        
    dy = y - 1
    if dy < 0:
        return
    else:
        dfs(dy, x)
        if S[dy][x] == '*':
            S[y][x] = '*'
        
    
    dx = x + 1
    if dx >= W:
        return
    else:
        dfs(y, dx)
        if S[y][dx] == '*':
            S[y][x] = '*'
    
    dx = x - 1
    if dx < 0:
        return
    else:
        dfs(y, dx)
        if S[y][dx] == '*':
            S[y][x] = '*'

dfs(Y, X)

for i in range(H):
    print(''.join(S[i]))
