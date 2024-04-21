ch = 0
im = input().upper()
for x in range(len(im)):
    if all([x%3==0, im[x]!='P']):
        ch+=1
    if all([x%3==1, im[x]!='E']):
        ch+=1
    if all([x%3==2, im[x]!='R']):
        ch+=1
print(ch)