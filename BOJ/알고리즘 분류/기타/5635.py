from datetime import datetime, date
import datetime
n = int(input())
people = {}
for _ in range(n):
    data = input().split()
    people[data[0]] = [int(data[3]), int(data[2]), int(data[1])]

s = sorted(people.items(), key=lambda x: (-x[1][0], -x[1][1], -x[1][2]))
print(s[0][0])
print(s[-1][0])