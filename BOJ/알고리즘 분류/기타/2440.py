n = int(input())
for t in range(n, 0, -1):
    for _ in range(t):
        print('*', end='')
    print('')