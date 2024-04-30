H, W, sy, sx, N = map(int, input().split())

S = []
for i in range(H):
    row = input()
    S.append(row)

t, d = [], []
for _ in range(N):
    a , b = input().split()
    t.append(int(a))
    d.append(b)

directions = ['N', 'E', 'S', 'W']
firstDirection = 'N'
now = directions.index(firstDirection)
cnt = 0
for i in range(100):
    
    if i == t[cnt]:
        if d[cnt] == 'L': # 方向転換
            now = (3 + now) % 4
        else:
            now = (1 + now) % 4
        cnt += 1

    past_sy, past_sx = sy, sx
    if directions[now] == 'N':
        sy -= 1
    elif directions[now] == 'E':
        sx += 1
    elif directions[now] == 'S':
        sy += 1
    elif directions[now] == 'W':
        sx -= 1

    if sx >= W or sx < 0 or sy >= H or sy < 0:
        print('Stop')
        break
    elif S[sy][sx] == '#':
        print('Stop')
        break
    else:
        print(sy, sx)







