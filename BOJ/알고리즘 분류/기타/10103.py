ans = [100, 100]
n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    if a < b:
        ans[0] -= b
    elif a > b:
        ans[1] -= a

print(ans[0])
print(ans[1])
