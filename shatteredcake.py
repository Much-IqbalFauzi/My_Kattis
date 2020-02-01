x = int(input())
l = 0
for i in range(int(input())):
    a, b= map(int,input().split())
    l += a*b
print(int(l/x))