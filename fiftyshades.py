r = 0
for i in range(int(input())):
    a = input().lower()
    if 'pink' in a or 'rose' in a:
        r += 1
print(r if r>0 else 'I must watch Star Wars with my daughter')