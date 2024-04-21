# Time limit

count = 0
while True:
    a,b = map(int, input().split())
    if a+b==0:
        print(count)
        break
    x = set(int(input()) for _ in range(a))
    y = set(int(input()) for _ in range(b))

    res = x.intersection(y)
    count += len(res)