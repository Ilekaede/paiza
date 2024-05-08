from collections import deque

H, W = map(int, input().split())
N = input()
S = [list(input()) for _ in range(H)]

for y in range(H):
    for x in range(W):
        if S[y][x] == 'A':
            Ay, Ax = y, x
        elif S[y][x] == 'B':
            By, Bx = y, x

queueA = deque()
queueB = deque()

num_area = [[-1] * W for _ in range(H)]
dirc = [(0, 1), (0, -1), (1, 0), (-1, 0)]
num_area[Ay][Ax] = 0
num_area[By][Bx] = 0
queueA.append([Ay, Ax])
queueB.append([By, Bx])

flag = 0

if N == 'A':
    flag = 'A'
else:
    flag = 'B'

while(len(queueA)>0 or len(queueB)>0):
    cntA = len(queueA)
    cntB = len(queueB)
    if flag == 'A':
        while(cntA > 0):
            y, x = queueA.popleft()
            for dy, dx in dirc:
                y2 = y + dy
                x2 = x + dx

                if not(0 <= y2 < H and 0 <= x2 < W):
                    continue
                if S[y2][x2] == '#' or S[y2][x2] == 'A' or S[y2][x2] == 'B':
                    continue
        
                if num_area[y2][x2] == -1:
                    num_area[y2][x2] = num_area[y][x] + 1
                    S[y2][x2] = flag
                queueA.append([y2, x2])
            cntA -= 1
    flag = 'B'
    if flag == 'B':
        while(cntB > 0):
            y, x = queueB.popleft()
            for dy, dx in dirc:
                y2 = y + dy
                x2 = x + dx

                if not(0 <= y2 < H and 0 <= x2 < W):
                    continue
                if S[y2][x2] == '#' or S[y2][x2] == 'A' or S[y2][x2] == 'B':
                    continue
                if num_area[y2][x2] == -1:
                    num_area[y2][x2] = num_area[y][x] + 1
                    S[y2][x2] = flag
                queueB.append([y2, x2])
            cntB -= 1
    flag = 'A'

aSum = 0
bSum = 0
for i in range(H):
    for j in range(W):
        if S[i][j] == 'A':
            aSum += 1
        elif S[i][j] == 'B':
            bSum += 1
    
print(aSum,bSum)
if aSum > bSum:
    print("A")
else:
    print('B')




