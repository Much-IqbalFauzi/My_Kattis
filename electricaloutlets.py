for i in range(int(input())):
    a, *b = map(int, input().split())
    print(sum(b)-a+1)
