H, W, Y, X = map(int, input().split())

S = []

for i in range(H):
    S.append(['.'] * W)


S[Y][X] = '!'

def reverse(dy, dx, dest):
    global flag
    if not(0 <= dx < W and 0 <= dy < H):
        flag = True
        return
    else:
        if dest == 'ur':
            reverse(dy - 1, dx + 1, dest)
        elif dest == 'lr':
            reverse(dy + 1, dx + 1, dest)
        elif dest == 'ul':
            reverse(dy - 1, dx - 1, dest)
        elif dest == 'll':
            reverse(dy + 1, dx - 1, dest)
        if flag:
            # print('change * is done')
            S[dy][dx] = '*'
        return

flag = False
dest = 'ur' # upper-right
reverse(Y - 1, X + 1, dest)

flag = False
dest = 'lr' # lower-right
reverse(Y + 1, X + 1, dest)

flag = False
dest = 'ul' # upper-left
reverse(Y - 1, X - 1, dest)

flag = False
dest = 'll' # lower-left
reverse(Y + 1, X - 1, dest)

for i in range(H):
    print(''.join(S[i]))
