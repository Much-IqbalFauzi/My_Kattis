n, k = map(int, input().split())
x = 0
z = 0
if n-k > 0:
    x = 3 * (n - k)
    z = -3 * (n - k)
rate = []
for i in range(k):
    rate.append(int(input()))

print('{} {}'.format((sum(rate[:n])+z)/n, (sum(rate[:n])+x)/n))