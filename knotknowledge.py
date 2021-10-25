n = int(input())
a = list(map(int, input().split()))
l = list(map(int, input().split()))

for i in l:
    a.remove(i)
print(a[0])