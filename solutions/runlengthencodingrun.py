x, im = input().split()
inn = im+' '
def enc(n):
    count = 0
    se = ""
    for i in range(len(n)):
        if i == 0:
            count+=1
            se+=n[i]
        elif (n[i] == n[i-1]):
            count+=1
        else:
            se+=str(count)
            count=0
            se+=n[i]
            count+=1
    print(se)

def dec(w):
    a = 1
    se = ""
    while a <= len(w):
        se+=(int(w[a])*w[a-1])
        a+=2
    print(se)

if x=='E':
    enc(inn)
else:
    dec(im)