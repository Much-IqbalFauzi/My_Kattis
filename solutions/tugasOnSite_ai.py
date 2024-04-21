graf = {
    1: [2,3],
    2: [4],
    3: [5,6],
    5: [7]
}

def dfs(tab, init):
    hasil = []
    yolo = [init]

    while yolo:
        kim = yolo.pop(-1)
        if kim not in hasil:
            hasil.append(kim)
        if kim in tab:
            for anak in tab[kim]:
                yolo.append(anak)
    return hasil

if __name__=='__main__':
    print(dfs(graf,1))
