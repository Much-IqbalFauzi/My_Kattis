num = int(input())
for i in range(num):
    a, b, c= [int(x) for x in input().split()]
    print('possible') if any([a+b==c, a-b==c, a*b==c, a/b==c, b-a==c, b/a==c]) else print('impossible')