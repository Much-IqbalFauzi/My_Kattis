import random
#huruf besar dari 65-90
#huruf kecil dari 97-122
#angka dari 1-26
lis=[]
abm=[]
abb=[]
num1=(18,11,7,23,17,9,22,21,13,8,19,26,25,10,3,20,15,24,1,4,5,2,12,14,16,6)
num2=(25,16,7,11,20,12,2,1,3,24,9,14,18,22,17,19,23,5,13,6,26,15,10,21,4,8)
num3=(9,10,11,7,5,3,13,12,8,22,6,24,17,20,21,19,26,1,15,16,14,2,25,4,23,18)
num4=(20,22,9,7,26,25,5,17,14,18,21,3,8,24,12,2,6,1,16,10,4,23,13,19,15,11)
num5=(1,21,6,26,9,20,17,23,19,3,12,2,4,16,15,22,24,7,11,13,10,25,18,8,5,14)
num6=(17,1,3,13,5,4,8,23,22,2,21,20,16,18,12,11,24,6,15,9,25,14,10,7,26,19)
alp=('A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z')
for i in range(2):
    lis.append(random.sample(range(1,27),26))
    abm.append(random.sample(range(97, 123), 26))
    abb.append(random.sample(range(65,91), 26))
# for i in lis[0]:
#     print(i)
#input your data
dat=input()
for i in dat:
    #HURUF
    temp = alp.index(i)
    temp1= num1[temp]
    temp2= num2.index(temp1)
    #CHANGE 1
    temp1= num3[temp2]
    temp2= num4.index(temp1)
    #CHANGE 2
    temp1= num5[temp2]
    temp2= num6.index(temp1)
    print(alp[temp2],end='')