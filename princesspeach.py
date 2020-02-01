t, o = map(int, input().split())
obs = list(set(input() for _ in range(o)))
for _ in range(t):
    if str(_) not in obs:
        print(str(_))
print('Mario got {} of the dangerous obstacles.'.format(len(obs)))