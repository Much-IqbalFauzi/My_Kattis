a = input()
while a!=None:
    x,y = (int(j) for j in a.split())
    w = str(abs(x-y))
    print(w)
    try:
        a = input()
    except:
        break