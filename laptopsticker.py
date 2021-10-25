wc, hc, ws, hs = map(int, input().split())
w = (wc - ws)/2
h = (hc - hs)/2
if w >= 1 and h >= 1:
    print(1)
else:
    print(0)