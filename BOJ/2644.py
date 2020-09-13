n = int(input())
ans = 0
for _ in range(n):
    a, b = map(int, input().split())
    mok = int(b / a)
    if mok == 0:
        ans += b
    else:
        ans += (b - (a * mok))
print(ans)