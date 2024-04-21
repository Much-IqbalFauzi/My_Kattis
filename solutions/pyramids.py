n = int(input())
t = 0
for i in range(1, 100000000, 2):
    n -= i**2
    if n < 0:
        break
    t += 1
print(t)