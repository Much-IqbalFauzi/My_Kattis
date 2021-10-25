

for i in range(int(input())):
    a = 0
    b = 0
    c = 0
    x, y = map(int, input().split())
    for xx in range(1, y + 1):
        a += xx
    for xx in range(y * 2):
        if xx % 2 == 1:
            b += xx
    for xx in range(1, (y + 1) * 2):
        if xx % 2 == 0:
            c += xx
    print(f'{x} {a} {b} {c}')

