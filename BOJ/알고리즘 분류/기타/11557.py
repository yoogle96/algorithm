t = int(input())

for _ in range(t):
    n = int(input())
    ans = []
    for _ in range(n):
        a, b = map(str, input().split())
        ans.append([a, int(b)])
    
    ans = sorted(ans, key = lambda x:x[1])
    print(ans[-1][0])
    