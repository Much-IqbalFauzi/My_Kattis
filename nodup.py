st = list(input().split())
a = ''
for i in st:
    if st.count(i)>1:
        a += '0'
    else:
        a+='1'
print('no' if '0' in a else 'yes')
