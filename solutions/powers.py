a,b = map(int, input().split())
res =1
mm = a
a = a * (a+1)//2
a %= mm

while(b>0):
    res = res * a % mm
    a = a * a % mm
    b >>= 1
print(res)
