s = input()
l = [s.count('T'),s.count('C'),s.count('G')]
l.sort()
num = 0
num+=(l[0]**2+l[1]**2+l[2]**2)
if all(['T'in s, 'G'in s, 'C'in s]):
    num+=7*l[0]
print(num)