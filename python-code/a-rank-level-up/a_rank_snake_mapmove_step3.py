H, W, sy, sx, N = map(int, input().split())

S = []
for i in range(H):
    row = input()
    S.append(row)

m = []
for i in range(N):
    d = input()
    m.append(d)

directions = ['N', 'E', 'S', 'W']
firstDirection = 'N'
now = directions.index(firstDirection)

for i in range(len(m)):
    if m[i] == 'L':
        now = (3 + now) % 4
    else:
        now = (1 + now) % 4

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



