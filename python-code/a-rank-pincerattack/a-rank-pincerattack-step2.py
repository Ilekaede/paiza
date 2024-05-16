H, W, Y, X = map(int, input().split())
S = [list(input()) for _ in range(H)]

S[Y][X] = '*'

def reverse(dy, dx, dest):
    global flag
    if not(0 <= dx < W and 0 <= dy < H):
        return
    if S[dy][dx] == '.': # 1つ先にコマが置いてないパターン
        if dest == 'N':
            reverse(dy - 1, dx, dest)
        elif dest == 'S':
            reverse(dy + 1, dx, dest)
        elif dest == 'W':
            reverse(dy, dx - 1, dest)
        elif dest == 'E':
            reverse(dy, dx + 1, dest)
        if flag:
            # print('change * is done')
            S[dy][dx] = '*'
        return
    else:
        flag = True
        return

flag = False
dest = 'N'
reverse(Y - 1, X, dest)

flag = False
dest = 'S'
reverse(Y + 1, X, dest)

flag = False
dest = 'W'
reverse(Y, X - 1, dest)

flag = False
dest = 'E'
reverse(Y, X + 1, dest)

for i in range(H):
    print(''.join(S[i]))
