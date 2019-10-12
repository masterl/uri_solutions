# -*- coding: utf-8 -*-

"""2_Ad-Hoc problems - 1030."""

NC = int(input())

def get_survivor(n, k):
    numbers = []
    index = -1

    if k == 1:
        return n

    numbers = list(range(1, n + 1))
    while len(numbers) > 1:
        exclude = (index + k) % len(numbers)
        numbers.remove(numbers[exclude])
        index = exclude - 1

    return numbers[0]

for case in range(1, NC + 1):
    n = int(input())
    k = int(input())

    print("Case %d: %d" % (case, get_survivor(n, k)))
