res = set()
for _ in range(int(input())):
    st, fs = map(int, input().split())
    for i in range(st, fs+1):
        res.add(i)
print(len(res))