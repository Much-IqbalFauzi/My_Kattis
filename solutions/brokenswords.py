num = int(input())
tb = 0
lr = 0
for i in range(num):
    ken = input()
    tb+=ken[:2].count('0')
    lr+=ken[2:].count('0')
fix = min(int(tb/2),int(lr/2))
TB = tb-(fix*2)
LR = lr-(fix*2)
print(fix, TB, LR)