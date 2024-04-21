def exec(num):
    animal = []
    total = []
    for i in range(num):
        get = input().split()[-1].lower()
        if get not in animal:
            animal.append(get)
        total.append(get)
    animal.sort()
    for i in animal:
        print(i+' | '+str(total.count(i)))

x = 1
while True:
    case = int(input())
    if case==0:
        break
    print('List '+str(x)+':')
    exec(case)
    x+=1