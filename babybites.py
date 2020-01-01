n = int(input())
bites = list(input().split())
res='makes sense'
for _ in range(n):
    if bites[_]=='mumble':
        bites[_]=str(_+1)
    if bites[_]!=str(_+1):
        res='something is fishy'
        break
print(res)