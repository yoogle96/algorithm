arr = [0] * 100
arr[0] = 0
arr[1] = 1
if __name__ == "__main__":
    n = int(input())
    for t in range(2, 91):
        arr[t] = arr[t-1] + arr[t-2]
    print(arr[n])
    pass