a = input()
r = []
for i in a:
    if i=='<':
        r.pop(-1)
    else:
        r.append(i)
print(''.join(r))