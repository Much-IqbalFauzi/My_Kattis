a, b, c, d = map(int, input().split())
man = [int(i) for i in input().split()]

def shout_one(man,dogS,dogF):
    num = 0
    total_time = dogS+dogF
    x = man%total_time
    if all([x>0,x<=dogS]):
        num+=1
    return num

def res(total_num):
    if total_num==1:
        return 'one'
    elif total_num==2:
        return 'both'
    else:
        return 'none'

for i in range(len(man)):
    total_dog = 0
    total_dog += shout_one(man[i], a, b)
    total_dog += shout_one(man[i], c, d)
    print(res(total_dog))