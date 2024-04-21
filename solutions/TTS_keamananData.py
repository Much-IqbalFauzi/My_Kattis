# variabel
cha = ('A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','#','@','-')
l = len(cha)
hek = []
chip = []
text = []
dec = []

# input data
# input any string with upper or lower
# i replace space to (-) minus
plain = input('input text : ').upper().replace(' ', '-')

# encrypt function >> (characters.index * 2) - 3 % length.list.characters
# decrypt function >> ((chipper.value/index) * + 3) * 15 % length.list.characters

#enkripsi
def enkripsi(x):
    for i in x:
        mod = ((cha.index(i)*2)-3)%l        # use encrypt function
        chip.append(cha[mod])               # input character to var chip, the index can be found in var.mod
        hek.append(hex(mod)[2:].upper())    # input encrypt result to var.hek

# dekripsi text v1
def deskripsi_text(x):
    for i in x:
        mod = ((cha.index(i)+3)*15)%l       # use invers function to find index
        text.append(cha[mod])               # input character from index to var list.text

# deskripsi hex v1
def deskripsi_hek(x):
    for i in x:
        decm = int(i,16)                    # convert from hexa to decimal
        mod = ((decm+3)*15)%l               # use invers function to find index
        dec.append(cha[mod])                # input character from index to var list.dec

# jalankan fungsi enkripsi dan dekripsi
enkripsi(plain)
deskripsi_text(chip)
deskripsi_hek(hek)

# print result
print('\nChipper Text \t\t:',''.join(chip))
print('Hex Value \t\t\t:',''.join(hek))
print('Deskripsi text \t\t:',''.join(text).replace('-', ' '))
print('Deskripsi hex \t\t:',''.join(dec).replace('-', ' '))