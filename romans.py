w = float(5280/4854)
print(''.join(str(float("{:.3f}".format(float(input())*w))).split('.')))