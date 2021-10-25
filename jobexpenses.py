n = int(input())
l = [int(i) for i in input().split()]
a = 0
print(a + abs(sum(list(i for i in l if i < 0))))
