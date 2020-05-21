t = int(input())
for i in range(t):
    command = list(map(str, input().split()))
    answer = 0
    for j in range(len(command)):
        if j == 0:
            answer += float(command[j])
        else:
            if command[j] == "#":
                answer -= 7
            elif command[j] == "%":
                answer += 5
            elif command[j] == "@":
                answer *= 3
    print("%0.2f" % answer)