from fuzzywuzzy import fuzz

_ = fuzz

def menu():
    return int(input('1. Ratio\n2. Partial Ratio\n3. Token Sort Ratio\n4. Token Set Ratio\nMasukkan pilihan : '))

def kata_1():
    return [input('Kata {} : '.format(i)) for i in range(1, 3)]

def chose(k1, k2, __):
    yoks = {
        1 : _.ratio(k1, k2),
        2 : _.partial_ratio(k1, k2),
        3 : _.token_sort_ratio(k1, k2),
        4 : _.token_set_ratio(k1, k2)
    }
    return yoks.get(__)

if __name__=='__main__':
    while True:
        x = menu()
        if all([x > 0, x < 5]):
            y = kata_1()
            print('Nilai : {}\n'.format(chose(y[0], y[1], x)))
        else:
            print('Terima kasih')
            break
