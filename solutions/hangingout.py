mm, ll = map(int, input().split())
inn = 0
res = 0
for i in range(ll):
    co, en = input().split()
    en = int(en)
    if co=='enter':
        if inn+en<=mm:
            inn+=en
        else:
            res+=1
    else:
        inn-=en
print(res)