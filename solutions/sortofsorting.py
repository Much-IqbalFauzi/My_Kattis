a = int(input())
while True:
    ll = [input() for i in range(a)]
    ll = sorted(ll, key=lambda x: x[:2])
    for i in ll:
        print(i)
    a = int(input())
    if a == 0:
        break
    else:
        print()