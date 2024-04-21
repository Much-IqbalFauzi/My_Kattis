ip = int(input())
count = 0
for i in input().split():
    if int(i) < 0 :
        count+=1
print(count)