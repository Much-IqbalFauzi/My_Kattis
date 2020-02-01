for _ in range(int(input())):
    a = ''
    z = ''
    b = True
    x = input()[::-1]
    for i in range(len(x)):
        if b:
            if x[i] == '0':
                z += '0'
            else:
                a += x[i]
                b = False
        else:
            a+=x[i]
    print(int(str(int(a[::-1])-1)+z))
