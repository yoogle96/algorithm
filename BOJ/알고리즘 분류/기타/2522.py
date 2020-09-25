n = int(input())

for i in range(1, (2 * n)):
    for j in range(abs(n-i)):
        print(' ', end='')
    for k in range(n - abs(n-i)):
        print('*', end='')
    print('')