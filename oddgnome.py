X = int(input())
for i in range(X):
    x, *w = input().split()
    for j in range(1,len(w)):
        if int(w[j])!=int(w[j-1])+1:
            print(j+1)
            break