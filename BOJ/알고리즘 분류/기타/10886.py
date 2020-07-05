n = int(input())
a = {0 : 0, 1 : 0}
for _ in range(n):
    t = int(input())
    a[t]+=1

if a[0] < a[1]:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")