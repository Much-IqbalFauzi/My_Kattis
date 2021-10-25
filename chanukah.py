for i in range(1, int(input())+1):
    a, b = map(int, input().split())
    c = sum(i for i in range(1, b+1)) + b
    print(a, c)