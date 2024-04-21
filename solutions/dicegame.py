z = sum(int(i) for i in input().split())
x = sum(int(i) for i in input().split())
if x == z:
    print('Tie')
elif x > z:
    print("Emma")
else:
    print("Gunnar")