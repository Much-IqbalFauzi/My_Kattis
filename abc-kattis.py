n = [int(i) for i in input().split()]
n.sort()
t=[]
for i in input():
    if i=='A':
        t.append(n[0])
    elif i=='B':
        t.append(n[1])
    else:
        t.append(n[2])
for i in range(len(t)):
    print(t[i])if i==-1 else print(t[i],end=' ')