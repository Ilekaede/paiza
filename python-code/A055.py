from collections import deque

H, W = map(int, input().split())

S = [input() for _ in range(H)]# 迷路

sy, sx = 0, 0
# スタート地点の発見
for i in range(H):
    for j in range(W):
        if S[i][j] == 'S':
            sy, sx = i, j
            break

Q = deque()
Q.append([sy, sx])

dist = [[-1] * W for _ in range(H)] #未訪問の定義
dist[sy][sx] = 0

dirc = [(0,1), (0, -1), (1,0), (-1, 0)]

flag = False

cnt = 0
while len(Q) > 0:
    y, x = Q.popleft()
    for dy, dx in dirc:
        y2 = y + dy
        x2 = x + dx

        if not (0 <= y2 < H and 0 <= x2 < W): # 範囲外に出る == 今の地点が一番端となる地点が存在する
            flag = True
            break

        if S[y2][x2] == '#':
            continue

        if dist[y2][x2] == -1:
            dist[y2][x2] = dist[y][x] + 1
            Q.append([y2, x2])

if flag:
    print("YES")
else:
    print("NO")
