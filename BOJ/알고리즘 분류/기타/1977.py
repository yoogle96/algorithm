import math
m = int(input())
n = int(input())
arr = list()
for t in range(m, n + 1):
    q = math.sqrt(t)
    if (not q % int(q)):
        arr.append(int(q) * int(q))

if (len(arr) == 0) :
    print(-1)
else:
    print(sum(arr))
    print(min(arr))