H, W, sy, sx, N = map(int, input().split())

S = []
for i in range(H):
    row = input()
    S.append(row)

d, l = [], []
for _ in range(N):
    a , b = input().split()
    d.append(a)
    l.append(int(b))

directions = ['N', 'E', 'S', 'W']
firstDirection = 'N'
now = directions.index(firstDirection)

for i in range(N):
    if d[i] == 'L':
        now = (3 + now) % 4
    else:
        now = (1 + now) % 4
    flag = True
    for _ in range(l[i]):
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
            flag = False
            print(past_sy, past_sx)
            print('Stop')
            break
        elif S[sy][sx] == '#':
            flag = False
            print(past_sy, past_sx)
            print('Stop')
            break

    if flag:
        print(sy, sx)
    else:
        break




