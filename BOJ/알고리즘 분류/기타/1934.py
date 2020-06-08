from math import gcd
n = int(input())
for i in range(n):
    a, b = map(int, input().split())
    print(int(a * b / gcd(a, b)))