def increment_string(s):
    result = []
    num_buffer = ''

    for char in s:
        if char.isdigit():
            num_buffer += char
        else:
            if num_buffer:
                result.append(str(int(num_buffer) + 1))
                num_buffer = ''
            if char.isalpha():
                if char == 'Z':
                    result.append('A')
                else:
                    result.append(chr(ord(char) + 1))
            else:
                result.append(char)
    if num_buffer:
        result.append(str(int(num_buffer) + 1))

    return ''.join(result)

input_str = input()
result_str = increment_string(input_str)
print(result_str)