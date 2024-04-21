val = input()

all = len(val)
un = val.count('_')
up = 0
low = 0
cha = 0
for i in val:
    if i.isupper():
        up+=1
    elif i.islower():
        low+=1
    else:
        cha += 1

un = un / all
low = low / all
up = up / all
cha = 1 - un - low - up
print(f'{un}\n{low}\n{up}\n{cha}')
