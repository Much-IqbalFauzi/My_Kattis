num = int(input())
one = input()
two = input()
tr = one.maketrans('10','01')
if num%2==1:
    one=one.translate(tr)
if one == two:
    print("Deletion succeeded")
else:
    print('Deletion failed')