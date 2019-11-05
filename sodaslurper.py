x, y, z = [int(i) for i in input().split()]
s = x+y
temp = 0
total = 0
while((s+temp)>=(z)):
    s-=z
    temp+=1
    total+=1
print(total)