import string
H, W = map(int, input().split())
S = [input() for i in range(H)]

wide_list = []
for i in range(H):
    for j in range(W):
        if j == 0:
            if S[i][j + 1] == '#':
                wide_list.append((i, j))
        elif j == W - 1 :
            if S[i][j - 1] == '#':
                wide_list.append((i, j))
        else :
            if S[i][j - 1] == '#' and S[i][j + 1] == '#':
                wide_list.append((i, j))

height_list = []
for i in range(H):
    for j in range(W):
        if i == 0:
            if S[i+1][j] == '#':
                height_list.append((i, j))
        elif i == H - 1 :
            if S[i-1][j] == '#':
                height_list.append((i, j))
        else :
            if S[i+1][j] == '#' and S[i-1][j] == '#':
                height_list.append((i, j))

wide_set = set(wide_list)
height_set = set(height_list)

ans_set = (wide_set & height_set)

ans_list = list(ans_set)
sorted_ans_list = sorted(ans_list)

for row, column in sorted_ans_list:
    print(f"{row} {column}")