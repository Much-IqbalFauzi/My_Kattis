def check(pos,status):
    lib = {
        'entry' : status+1,
        'exit' : status-1
    }
    return lib.get(pos)

if __name__ == '__main__':
    total = int(input())
    lis = {}
    for i in range(total):
        seq = input()
        name = seq.split()[1]
        if name not in lis:
            lis[name]=0
        cond = str(seq.split()[0])
        stat = lis.get(name)
        stat = check(cond,stat)
        print(name,'entered'if cond=='entry'else'exited',end='')
        if stat >= 2:
            print(' (ANOMALY)',end='')
            stat-=1
        if stat <= -1:
            print(' (ANOMALY)',end='')
            stat += 1
        lis[name]=stat
        print()