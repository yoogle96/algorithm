a = dict()
for b in map(int, input().split()):
    if b in a:
        a[b] += 1
    else:
        a[b] = 1

if len(a) == 1:
    print(10000+sum(a.keys())*1000)
elif len(a) == 2:
    print(1000+sorted(a, key=lambda x:a[x])[1]*100)
else:
    print(sorted(a)[-1]*100)