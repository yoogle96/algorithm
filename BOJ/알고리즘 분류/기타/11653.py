n = int(input())
while n > 1:
    i = 2
    while (n % i != 0):
        i+=1
    n /= i
    print(i)