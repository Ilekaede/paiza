input_str = input()

inputs = input_str.split()

processed_inputs = []
for item in inputs:
    if item.isdigit():
        processed_inputs.append(int(item))
    else:
        processed_inputs.append(item)
H, W, sy, sx, d, m = processed_inputs

S = []
for i in range(H):
    row = input()
    S.append(row)

directions = ['N', 'E', 'S', 'W']
now = directions.index(d)

if m == 'L':
    now = (3 + now) % 4
else:
    now = (1 + now) % 4


if directions[now] == 'N':
    sy -= 1
elif d == 'E':
    sx += 1
elif d == 'S':
    sy += 1
elif d == 'W':
    sx -= 1

if sx >= W or sx < 0 or sy >= H or sy < 0:
    print("No")
elif S[sy][sx] == '#':
    print('No')
else:
    print("Yes")



