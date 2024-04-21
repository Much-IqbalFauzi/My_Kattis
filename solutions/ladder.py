import math
a, b = map(int, input().split())
b = math.radians(b)
c = math.sin(b)
print(math.ceil(a / c))