__ = input()
_____ = sum(int(__[_+1]) for _ in range(0, len(__)-1, 2) if __[_] == 'B')
___ = sum(int(__[_+1]) for _ in range(0, len(__)-1, 2) if __[_] == 'A')
print('A' if ___ > _____ else 'B')