r,n = map(int, input().split())
r = list(range(1,r+1))
for i in range(n):
    r.remove(int(input()))
if len(r)==0:
    print('too late')
else:
    print(r[0])