X, Y, N = map(int, input().split())

directions = ['E', 'S', 'W', 'N']
now_direction = 0
count = 0
max_count = 1
first = True

def move(direction, x, y):
    if direction == 'N':
        y -= 1
    elif direction == 'E':
        x += 1
    elif direction == 'S':
        y += 1
    elif direction == 'W':
        x -= 1
    return (x, y)

for _ in range(N):
    (X, Y) = move(directions[now_direction], X, Y)
    count += 1
    if first and count == max_count:
        first = False
        count = 0
        now_direction = (1 + now_direction) % 4
    elif count == max_count:
        first = True
        count = 0
        max_count += 1
        now_direction = (1 + now_direction) % 4

print(X, Y)