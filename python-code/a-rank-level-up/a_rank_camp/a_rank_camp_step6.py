from collections import deque

H, W, N = map(int, input().split())
S = [list(input()) for _ in range(H)]
l = [int(input()) for _ in range(N)]

dict = {}
for i in range(len(l)):
    dict[l[i]] = 1

for y in range(H):
    for x in range(W):
        if S[y][x] == '*':
            sy, sx = y, x
            break

queue = deque()
queue.append([sy, sx])

dist = [[-1] * W for _ in range(H)]
dirc = [(0, 1), (0, -1), (1, 0), (-1, 0)]
dist[sy][sx] = 0

if 0 in l:
    S[sy][sx] = '?'

while len(queue) > 0:
    y, x = queue.popleft()
    for dy, dx in dirc:
        y2 = y + dy
        x2 = x + dx
        if not(0 <= y2 < H and 0 <= x2 < W):
            continue
        if S[y2][x2] == '#':
            continue
        if dist[y2][x2] == -1:
            dist[y2][x2] = dist[y][x] + 1
            for i in range(len(l)):
                if dist[y2][x2] == l[i]:
                    S[y2][x2] = '?'
                    break
                else:
                    S[y2][x2] = '*'
            queue.append([y2, x2])

for y in range(H):
    print("".join(S[y]))



