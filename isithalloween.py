im = input()
mon = im.split()[0]
dat = int(im.split()[1])
if all([mon=="OCT",dat==31]):
    print("yup")
elif all([mon == "DEC", dat == 25]):
    print("yup")
else:
    print("nope")