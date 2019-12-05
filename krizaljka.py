a,b = input().split()
x=0
z=0
for i in a:
    if i in b:
        x=a.index(i)
        z=b.index(i)
        break
for i in range(len(b)):
    if i==z:
        print(a)
    else:
        for j in range(len(a)):
            if j==x:
                print(b[i],end='')
            else:
                print('.',end='')
        print()