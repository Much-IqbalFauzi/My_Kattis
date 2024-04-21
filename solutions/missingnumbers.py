x=[]
z=[]
for i in range(int(input())):
    x.append(int(input()))
x.sort()
for i in range(1,x[-1]):
    if i not in x:
        z.append(i)
        print(i)
if len(z)==0:
    print('good job')