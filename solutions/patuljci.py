w = [int(input())for _ in range(9)]
ss = sum(w)
for _ in range(len(w)-1):
    for i in range(_+1, len(w)):
        if w[_]+w[i] == ss-100:
            w.remove(w[_])
            w.remove(w[i-1])
            break
for i in range(len(w)):
    print(w[i])
