l,r = map(int, input().split())
if l==r and l!=0:
    print('Even',r+l)
elif l+r==0:
    print('Not a moose')
else:
    print('Odd',max(l,r)*2)