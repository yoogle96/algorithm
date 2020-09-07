import math

a = int(input())
for _ in range(a):
    b = int(input())
    total = 0
    gpa = 0
    for _ in range(b):
        c, g = map(float, input().split())
        total += c
        gpa += c * g

    print('{} {}'.format(int(total), round(gpa/total, 1)))