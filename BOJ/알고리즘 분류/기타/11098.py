t = int(input())
for _ in range(t):
    n = int(input())
    arr = dict()
    for i in range(n):
        a, b = map(str, input().split())
        a = int(a)
        if i:
            if a > ma:
                ma = a
                mb = b
        else:
            ma = a
            mb = b
    print(mb)