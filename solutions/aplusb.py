# a = int(input())
# x = list(map(int, input().split()))
# # print(a)
# # print(x)
#
# loop = x[:-1]
# # print(loop)
# c = 0
# for i in loop:
#     xx = loop.copy()
#     xx.remove(i)
#     # print(xx)
#     for j in xx:
#         yy = xx.copy()
#         yy.remove(j)
#         if (i+j) in yy:
#             c += 1
# print(c)


xxx = int(input())
aa = [int(i) for i in input().split()]
count = 0
for i in range(xxx):
    z = list(aa)
    z.remove(aa[i])
    for j in range(len(z)):
        y = list(z)
        y.remove(z[j])
        if (aa[i]+z[j]) in y:
            count += 1

print(count)