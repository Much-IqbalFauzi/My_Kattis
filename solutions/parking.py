a, b, c = map(int, input().split())
ll = []
re = set()
res = 0
for i in range(3):
    x, y = map(int, input().split())
    for _ in range(x, y):
        ll.append(_)
        re.add(_)

for i in re:
    if ll.count(i)==1:
       res+=a
    if ll.count(i)==2:
        res+=(b*2)
    if ll.count(i)==3:
        res+=(c*3)
print(res)