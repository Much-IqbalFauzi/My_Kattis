import math
R, C = [int(i) for i in input().split()]
A1 = (R**2)*math.pi
A2 = ((R-C)**2)*math.pi
print('{:6f}'.format(A2/A1*100))