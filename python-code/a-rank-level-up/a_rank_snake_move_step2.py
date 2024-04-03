Y, X, D = input().split()
Y = int(Y)
X = int(X)
d = input()

lr = 1

if d == "L":
    lr = -1

if D == 'N':
    X = X + lr
elif D == 'S':
    X = X - lr
elif D == 'E':
    Y = Y + lr
elif D == 'W':
    Y = Y - lr

print(Y, X)