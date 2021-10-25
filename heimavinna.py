s = list(input().split(';'))
res = 0
for i in s:
    if '-' in i:
        a = list(map(int, i.split('-')))
        res += sum(1 for z in range(a[0], a[1]+1))
    else:
        res += 1
print(res)