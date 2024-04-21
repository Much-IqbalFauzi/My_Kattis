v = 'aiueo'
i = input().lower()
r= 0
for x in i:
    if x in v:
        r+=1
print(r)