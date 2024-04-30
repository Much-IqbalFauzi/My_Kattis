import math

loop = int(input())

data = []

actions = {
    'push_back': lambda num=0: pb(num),
    'push_front':  lambda num=0: pf(num),
    'push_middle': lambda num=0: pm(num),
    'get': lambda num=0: print(data[num]) 
}

def pb(num):
    data.append(num)

def pf(num):
    data.insert(0, num)

def pm(num):
    mid = math.ceil(len(data)/2)
    data.insert(mid, num)

while loop > 0:
    val, num = input().split()
    actions[val](int(num))

    loop-=1