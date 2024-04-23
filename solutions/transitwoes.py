s, t, n = map(int, input().split())
b = list(map(int, input().split()))
sb = sum(b)
bs = sum(list(map(int, input().split())))
ba = list(map(int, input().split()))
l = 0
for i in range(n):
    l += ba[i]-b[i]

if  t-s-sb-bs-l >= 0:
    print('yes')
else:
    print('no')