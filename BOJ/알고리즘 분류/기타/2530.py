a, b, c = map(int, input().split())
d = int(input()) + c
s = int((d % 60))
m = b + (d / 60)
mm = int((m % 60))
h = (int(a + (m / 60)) % 24)
print(h, mm, s)
