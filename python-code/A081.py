N = int(input())
A = [int(input()) for _ in range(2 * N)]
dict = {}
cnt = 0
for i in range(2 * N):
    if A[i] not in dict:
        dict[A[i]] = i;
    else:
        cnt += i - dict[A[i]] - 1
    
print(cnt)