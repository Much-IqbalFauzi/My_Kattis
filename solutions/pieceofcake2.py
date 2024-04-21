x, h, l = map(int, input().split())
if x-h<h:
    if x-l<l:
        print(h*l*4)
    else:
        print(h*(x-l)*4)
else:
    if x-l<l:
        print((x-h)*l*4)
    else:
        print((x-h)*(x-l)*4)