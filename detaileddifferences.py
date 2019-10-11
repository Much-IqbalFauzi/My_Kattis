ll = int(input())
for i in range(ll):
    xx = input()
    yy = input()
    bb = ""
    for j in range(len(xx)):
        if xx[j] == yy[j]:
            bb+=(".")
        else:
            bb+=("*")
    print(xx)
    print(yy)
    print(bb)