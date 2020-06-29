m = {'A':0, 'B':0}
n = int(input())
s = input()
for t in s:
    m[t]+=1

if m['A'] > m['B']:
    print("A")
elif m['A'] < m['B']:
    print("B")
else:
    print("Tie")