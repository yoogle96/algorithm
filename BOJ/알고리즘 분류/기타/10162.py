t = int(input())
ans = [0, 0, 0]
ans[0] = int(t / 300)
t %= 300
ans[1] = int(t / 60)
t %= 60
ans[2] = int(t / 10)
t %= 10
if t != 0:
    print(-1)
else:
    for a in ans:
       print(a)