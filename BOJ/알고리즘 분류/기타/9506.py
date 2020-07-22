while True:
    n = int(input())
    if n == -1:
        break
    arr = [i for i in range(1, (n//2)+1) if not n%i]
    if n == sum(arr):
        print(f'{n} = {" + ".join(map(str, arr))}')
    else:
        print(f'{n} is NOT perfect.')