s = input()
for i in range(len(s)):
    if s[i:i+2] == ":)" or s[i:i+2] == ";)":
        print(i)
    elif s[i:i+3] == ":-)" or s[i:i+3] == ";-)":
        print(i)