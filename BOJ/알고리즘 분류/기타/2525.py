a, b = map(int, input().split())
c = int(input()) + b
h = int(a + (c / 60))
m = (c % 60)
if(h >= 24):
    h = (h % 24)
print(h, m)