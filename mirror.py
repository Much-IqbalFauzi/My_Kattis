
for _ in range(int(input())):
    w = []
    x,y=[int(i) for i in input().split()]
    for i in range(x):
        w.append(input())
    print('Test',_+1)
    for i in range(1,x+1):
        a=w[-i]
        for j in range(1,y+1):
            print(a[-j],end='')
        print()