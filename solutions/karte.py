st = input()
z = []
for i in range(0,len(st),3):
    x=st[i:i+1]
    if st.count(st[i:i+3])>1:
        print('GRESKA')
        break
    z.append(x)
if len(z)*3==len(st):
    print(13-z.count('P'),13-z.count('K'),13-z.count('H'),13-z.count('T'))