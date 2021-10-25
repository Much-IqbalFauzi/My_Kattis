a = int(input())
if a%2==1:
    print('still running')
else:
    b = 0
    x = False
    res = 0
    for i in range(a):
        if not x:
            b = int(input())
            x = True
        else:
            res += int(input()) - b
            x = False
    print(res)