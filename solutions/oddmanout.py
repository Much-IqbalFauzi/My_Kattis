for i in range(int(input())):
    se=int(input())
    c = list(map(int, input().split()))
    for j in c:
        if c.count(j)==1:
            print('Case #'+str(i+1)+': '+str(j))