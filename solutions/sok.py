x = list(map(int, input().split()))
y = list(map(int, input().split()))
minVal = min(x[i]/y[i] for i in range(3))
print(*(x[i]-minVal*y[i] for i in range(3)))