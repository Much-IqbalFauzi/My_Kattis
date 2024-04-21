num = int(input())
arr=[int(i) for i in input().split()]
arr.sort()
arr.reverse()
print(sum(arr[::2]),sum(arr[1::2]))