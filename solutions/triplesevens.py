n = int(input())

count = 0
for i in range(3):
    nums = input()
    if '7' in nums:
        count += 1

if count == 3:
    print(777)
else:
    print(0)