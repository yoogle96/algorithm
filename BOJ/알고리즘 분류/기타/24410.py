n = int(input())
for t in range(0, n):
    for j in range(t):
        print(' ', end='')
    for _ in range(n-t):
        print('*', end='')
    print('')
    
