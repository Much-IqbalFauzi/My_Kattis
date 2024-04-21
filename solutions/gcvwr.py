g, t, n = map(int, input().split())
b = sum(map(int, input().split()))
r = (g-t)*9/10
print(int(r-b))