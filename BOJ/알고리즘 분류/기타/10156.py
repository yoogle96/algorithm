a, b , c = map(int, input().split())
a *= b
ans = a - c if a > c else 0
print(ans)
