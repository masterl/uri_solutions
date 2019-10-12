# -*- coding: utf-8 -*-

"""2_Ad-Hoc problems - 1030."""

NC = int(input())

def get_survivor_remainder(n, k):
    survivor = 1
    i = 1

    if n >= 2 and (k % 2 == 1):
        survivor = 2
        i = 2
    while i < n:
        i += 1
        survivor += k
        if survivor > i:
            survivor %= i

            if survivor == 0:
                survivor = i

    return survivor

for case in range(1, NC + 1):
    inputs = input().split(' ')
    n = int(inputs[0])
    k = int(inputs[1])

    print("Case %d: %d" % (case, get_survivor_remainder(n, k)))
