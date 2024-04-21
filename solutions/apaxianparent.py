a = list(input().split())

if a[0][-1] in ['a', 'i', 'u', 'o']:
    print(f'{a[0][:-1]}ex{a[1]}')
elif a[0][-1] == 'e':
    print(f'{a[0]}x{a[1]}')
else:
    print(''.join(a))