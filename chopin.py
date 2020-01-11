lis = [('A',''), ('A#', 'Bb'), ('B',''), ('C',''), ('C#', 'Db'), ('D',''), ('D#', 'Eb'), ('E',''), ('F',''), ('F#', 'Gb'), ('G',''), ('G#', 'Ab')]
a = 1
res = ''
while True:
    try:
        x = input().split()
    except:
        break
    for i in lis:
        if x[0] in i:
            z = i.index(x[0])
            res = i[z-1]
    if res is '':
        print('Case {}: UNIQUE'.format(a))
    else:
        print('Case {}: {} {}'.format(a,res,x[1]))
    a+=1