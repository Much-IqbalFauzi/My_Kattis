def main():
    p,q,s = map(int, input().split())
    pset = set()
    qset = set()
    x = p
    while x<=s:
        pset.add(x)
        x+=p
    x = q
    while x<=s:
        qset.add(x)
        x+=q
    ans = pset.intersection(qset)
    print('yes' if len(ans)>=1 else 'no')
if __name__ == '__main__':
    main()