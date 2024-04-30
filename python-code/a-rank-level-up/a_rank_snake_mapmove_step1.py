input_str = input()

inputs = input_str.split()

processed_inputs = []
for item in inputs:
    if item.isdigit():
        processed_inputs.append(int(item))
    else:
        processed_inputs.append(item)
H, W, sy, sx, m = processed_inputs

S = []
for i in range(H):
    row = input()
    S.append(row)

if m == 'N':
    sy -= 1
elif m == 'E':
    sx += 1
elif m == 'S':
    sy += 1
elif m == 'W':
    sx -= 1


if sx >= W or sx < 0 or sy >= H or sy < 0:
    print("No")
elif S[sy][sx] == '#':
    print('No')
else:
    print("Yes")



