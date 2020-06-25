s = input()
ans = 10
cur = s[0]
for i in range(1, len(s)):
    if cur == s[i]:
        ans += 5
    else:
        ans += 10
        cur = s[i]

print(ans)