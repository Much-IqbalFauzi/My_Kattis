def menu():
    return input('=== Tugas 1 ===\n1. Perulangn kata\n2. List data\n3. Keluar\n\nMasukkan pilihan anda : ')

def perulangan_kata():
    x = input('Masukkan sebuah kata : ')
    y = int(input('Masukkan sebuah angaka : '))
    print((x+'\n')*y)

def list_data():
    a = int(input('Masukkan jumlah data yang akan dimasukkan : '))
    l = [input('input : ') for _ in range(a)]
    print('Anda menginput',', '.join(l),end='\n\n')

if __name__ == '__main__':
    while True:
        x = menu()
        if x=='1':
            perulangan_kata()
        elif x=='2':
            list_data()
        else:
            print('Terima kasih')
            break