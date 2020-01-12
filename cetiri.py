#try this solution to solve more than 4 input numbers ex: 5 1 13 9 21
lis = sorted(list(map(int, input().split())))
mini = min(abs(lis[i]-lis[i-1]) for i in range(1,len(lis)))
res = 0
for i in range(len(lis)-1):
    if lis[i]+mini!=lis[i+1]:
        res+=lis[i]+mini
        print(res)
if res==0:
    print(lis[2]+mini)