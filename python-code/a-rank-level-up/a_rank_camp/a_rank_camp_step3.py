from collections import deque

H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]
queue = deque()
flag = False

for y in range(H):
    for x in range(W):
        if S[y][x] == '*':
            S[y][x] = '0'
            queue.append((y, x))

S = [list(row) for row in S]

while(len(queue) != 0):
    y, x = queue.popleft()
    num = int(S[y][x])
    if y > 0 and S[y - 1][x] == '.':
        S[y - 1][x] = str(num + 1)
        queue.append((y - 1, x))
    if y < H - 1 and S[y + 1][x] == '.':
        S[y + 1][x] = str(num + 1)
        queue.append((y + 1, x))
    if x > 0 and S[y][x - 1] == '.':
        S[y][x - 1] = str(num + 1)
        queue.append((y, x - 1))
    if x < W - 1 and S[y][x + 1] == '.':
        S[y][x + 1] = str(num + 1)
        queue.append((y, x + 1))

S = [''.join(row) for row in S]

for y in range(H):
    print("".join(S[y]))
