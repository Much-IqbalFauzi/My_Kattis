n, T = map(int, input().split())
N = [int(_) for _ in input().split()]
a = 0
for i in range(n):
    if T-N[i] >= 0:
        T-=N[i]
        a+=1
    else:
        break
print(a)