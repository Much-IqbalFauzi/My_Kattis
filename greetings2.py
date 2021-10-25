s = input()
if 'he' in s:
    a = s.count('e') * 2
    print(f"{s[0]}{'e'*a}{s[-1]}")
elif s.lower() == 'later!':
    print('Aligator')
else:
    print("what's uhat's up")
