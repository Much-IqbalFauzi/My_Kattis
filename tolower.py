p, t = map(int, input().split())
count = 0
for i in range(p):
    text = [input().strip() for _ in range(t)]
    if all(i[0].lower()+i[1:]==i.lower() for i in text):
        count+=1
print(count)