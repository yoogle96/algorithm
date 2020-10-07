import sys
n = int(input())
ans = 1
for _ in range(n):
    a = int(sys.stdin.readline())
    ans -= 1
    ans += a

print(ans)