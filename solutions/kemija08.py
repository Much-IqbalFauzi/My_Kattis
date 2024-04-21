st = input()
a=''
vow = ('a', 'i', 'u', 'e', 'o')
i=0
while i<len(st):
    a+=st[i]
    if st[i] in vow:
        i+=3
    else:
        i+=1
print(a)