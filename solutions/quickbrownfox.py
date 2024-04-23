val = int(input())
res = ''
for _ in range(val):
    n = input()
    a = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v','w', 'x', 'y', 'z']
    for i in n:
        if i.lower() in a:
            a.remove(i.lower())
    print(f"missing {''.join(a)}" if len(a) != 0 else 'pangram')