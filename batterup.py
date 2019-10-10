num = int(input())
adi=0
for i in input().split():
    if int(i) == -1:
        num-=1
        continue
    else:
        adi+=int(i)
print(adi/num)