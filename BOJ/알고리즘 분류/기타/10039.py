a = []
for i in range(5):
    n = int(input())
    if n < 50:
        n = 40
    a.append(n)
print(int(sum(a) / len(a)))