x = {}
y = {}
for _ in range(3):
    xx, yy = map(int, input().split())
    if xx in x:
        x[xx] += 1
    else:
        x[xx] = 1

    if yy in y:
        y[yy] += 1
    else:
        y[yy] = 1

ansX = 0
ansY = 0
for k, v in x.items():
    if v == 1:
        ansX = k
        break
for k, v in y.items():
    if v == 1:
        ansY = k
        break

print("{} {}".format(ansX, ansY))