im = int(input())
def tot(x):
    a = 0
    for i in str(x):
        a+=int(i)
    return a
if int(im) % int(tot(im)) == 0:
    print(im)
else:
    a=0
    while(a==0):
        im+=1
        w = tot(im)
        if int(im) % int(w)==0:
            print(im)
            a=1