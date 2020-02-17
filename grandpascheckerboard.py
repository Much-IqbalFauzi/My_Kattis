loop = int(input())
z = []
res = True
for _ in range(loop):
    x = input()
    z.append(x)
    if any(['WWW'in x, 'BBB' in x, x.count('B') != x.count('W')]):
        res = False
if res:
    for _ in range(2, loop):
        for i in range(loop):
            if all(['W' == z[_][i], 'W' == z[_-1][i], 'W' == z[_-2][i]]):
                res = False
                break
            elif all(['B' == z[_][i], 'B' == z[_-1][i], 'B' == z[_-2][i]]):
                res = False
                break
print('1' if res else '0')