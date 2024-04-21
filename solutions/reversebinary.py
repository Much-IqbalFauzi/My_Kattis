b = list(bin(int(input()))[2:])
res = 0
for i in range(len(b)):
    res+=int(b[i])*(2**i)
print(res)