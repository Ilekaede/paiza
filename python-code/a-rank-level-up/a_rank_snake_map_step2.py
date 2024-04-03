import string
H, W, N = map(int, input().split())
S = [input() for i in range(H)]

for i in range(N):
    y, x = map(int, input().split())
    char_list = list(S[y])
    char_list[x] = "#"
    S[y] = "".join(char_list)

for i in range(H):
    print(S[i])

