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

    if i == 0:
        list_str = list(S[sy])
        list_str[sx] = '*'
        S[sy] = ''.join(list_str)

    if d[i] == 'L':
        now = (3 + now) % 4
    else:
        now = (1 + now) % 4
    flag = False
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
            flag = True
            break
        elif S[sy][sx] == '#':
            flag = True
            break
        else:
            list_str = list(S[sy])
            list_str[sx] = '*'
            S[sy] = ''.join(list_str)

    if flag:
        break;

for i in range(H):
    print(S[i])






