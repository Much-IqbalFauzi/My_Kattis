im = input()
pu = ""
se = ""
for i in range(len(im)):
    if i == 0:
        se+=im[i]
    elif (im[i] == im[i-1]):
        continue
    else:
        se+=im[i]
print(se)