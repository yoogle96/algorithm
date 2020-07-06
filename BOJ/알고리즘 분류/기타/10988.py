s = input()
flag = True
for i in range(int(len(s) / 2)):
    if s[i] != s[len(s) - 1 - i] :
        flag = False
        break

if(flag):
    print(1)
else:
    print(0)
    