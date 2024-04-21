a = 0
z = 0
for i in input().split():
    if 'ae'in i:
        a+=1
    z+=1
print('dae ae ju traeligt va' if (a/z*100)>=40 else 'haer talar vi rikssvenska')