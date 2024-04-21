for i in range(int(input())):
    w = input()
    if w == 'P=NP':
        print('skipped')
    else:
        x,y = w.split('+')
        print(int(x)+int(y))