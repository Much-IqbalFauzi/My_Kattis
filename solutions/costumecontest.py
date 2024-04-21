num = int(input())
costume = []
for i in range(num):
    choose = input()
    costume.append(choose)
cc = [costume.count(_) for _ in costume]
w = min(cc)
q = []
for i in costume:
    if costume.count(i) == w:
        q.append(i)
q=list(set(q))
q.sort()
print('\n'.join(q))