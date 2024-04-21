while True:
    a, b =[int(i) for i in input().split()]
    if all([a==0,b==0]):
        break
    print(int(a/b),a%b,'/',b)