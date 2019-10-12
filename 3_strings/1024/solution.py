# -*- coding: utf-8 -*-

"""3_String problems - 1024."""

test_cases = int(input())

for case in range(1, test_cases + 1):
    line_bytes = bytearray(input(), 'utf8')
    length = len(line_bytes)

    for index in range(length):
        if chr(line_bytes[index]).isalpha():
            line_bytes[index] += 3

    line_bytes.reverse()

    i = length // 2
    while i < length:
        line_bytes[i] -= 1
        i += 1

    print(line_bytes.decode())
