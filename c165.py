N = int(input())
A = input().split()

C = []
R = []
for i in range(len(A)):
    if A[i] == 'C':
        C.append(i)
    elif A[i] == 'R':
        R.append(i)

print(min(len(C), len(R)))
for i in range(min(len(C), len(R))):
    if C[i] != None and R[i] != None:
        print(C[i]+1, R[i]+1)