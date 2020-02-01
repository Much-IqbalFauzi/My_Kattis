coun = 1
while True:
    x = int(input())
    if x == 0:
        break
    w = [input() for _ in range(x)]
    x = []
    for _ in range(len(w)):
        if _ < 2:
            x.append(w[_])
        else:
            if _%2 == 1:
                x.insert((int(len(x) / 2)+1), w[_])
            else:
                x.insert((int(len(x) / 2)), w[_])
    print('Set {}'.format(coun))
    coun+=1
    for _ in range(len(x)):
        print(x[_])
