l = []
for i in range(5):
    if 'FBI' in input():
        l.append(str(i+1))
print('HE GOT AWAY!') if len(l)==0 else print(' '.join(l))