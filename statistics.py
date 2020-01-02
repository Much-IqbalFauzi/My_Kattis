for i in range(1,10):
    try:
        total, *num = [int(_) for _ in input().split()]
    except:
        break
    print('Case %d:' %i, min(num), max(num), max(num)-min(num))
